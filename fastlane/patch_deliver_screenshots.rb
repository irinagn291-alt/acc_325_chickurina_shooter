# fastlane 2.232's language list stops at the 2020 set. It has no sl-SI,
# bn-BD, ur-PK, or the India locales Apple added later. Deliverfile sets
# ignore_language_directory_validation so an unknown folder does not abort
# the lane — Loader still drops that folder, so the locale is created on
# App Store Connect and then left with no metadata and no screenshots.
# Register the codes before screenshots and metadata are collected.
if defined?(Deliver::Languages::ALL_LANGUAGES)
  store_locales = %w[
    bn-BD gu-IN kn-IN ml-IN mr-IN or-IN pa-IN sl-SI ta-IN te-IN ur-PK
  ]
  current = Deliver::Languages::ALL_LANGUAGES
  missing = store_locales.reject { |code| current.any? { |have| have.to_s.casecmp?(code) } }
  unless missing.empty?
    Deliver::Languages.send(:remove_const, :ALL_LANGUAGES)
    Deliver::Languages.const_set(:ALL_LANGUAGES, current.to_a + missing)
  end
end

# fastlane#30094 — gem on Bitrise (2.232–2.238) re-uploads the set because
# Apple has not published sourceFileChecksum yet. Official fix is merged to
# master, not released. Same wait + delete-before-retry as PR 30150.

module GFDeliverScreenshotFix
  def wait_for_complete(iterator, timeout_seconds)
    start_time = Time.now
    loop do
      number_of_screenshots_missing_checksum = 0
      states = iterator.each_app_screenshot.map { |_, _, app_screenshot| app_screenshot }.each_with_object({}) do |app_screenshot, hash|
        state = app_screenshot.asset_delivery_state["state"]
        hash[state] ||= 0
        hash[state] += 1
        number_of_screenshots_missing_checksum += 1 if state == "COMPLETE" && app_screenshot.source_file_checksum.nil?
      end

      is_processing = states.fetch("UPLOAD_COMPLETE", 0) > 0 || number_of_screenshots_missing_checksum > 0
      return states unless is_processing

      if Time.now - start_time > timeout_seconds
        FastlaneCore::UI.important("Screenshot upload reached the timeout limit of #{timeout_seconds} seconds. We'll now retry uploading the screenshots that couldn't be uploaded in time.")
        return states
      end

      if number_of_screenshots_missing_checksum > 0
        FastlaneCore::UI.verbose("There are still incomplete screenshots - #{states}, missing checksum: #{number_of_screenshots_missing_checksum}")
      else
        FastlaneCore::UI.verbose("There are still incomplete screenshots - #{states}")
      end
      sleep(5)
    end
  end

  def retry_upload_screenshots_if_needed(iterator, states, number_of_screenshots, tries, timeout_seconds, localizations, screenshots_per_language)
    is_failure = states.fetch("FAILED", 0) > 0
    is_processing = states.fetch("UPLOAD_COMPLETE", 0) > 0
    is_missing_screenshot = !screenshots_per_language.empty? && !verify_local_screenshots_are_uploaded(iterator, screenshots_per_language)
    return unless is_failure || is_missing_screenshot || is_processing

    if tries.zero?
      iterator.each_app_screenshot.select { |_, _, app_screenshot| app_screenshot.error? }.each do |localization, _, app_screenshot|
        FastlaneCore::UI.error("#{app_screenshot.file_name} for #{localization.locale} has error(s) - #{app_screenshot.error_messages.join(', ')}")
      end
      incomplete_screenshot_count = states.except("COMPLETE").reduce(0) { |sum, (k, v)| sum + v }
      FastlaneCore::UI.user_error!("Failed verification of all screenshots uploaded... #{incomplete_screenshot_count} incomplete screenshot(s) still exist")
    else
      FastlaneCore::UI.error("Failed to upload all screenshots... Tries remaining: #{tries}")
      iterator.each_app_screenshot do |_, _, app_screenshot|
        app_screenshot.delete! unless app_screenshot.complete? && !app_screenshot.source_file_checksum.nil?
      end
      upload_screenshots(localizations, screenshots_per_language, timeout_seconds, tries: tries)
    end
  end
end

Deliver::UploadScreenshots.prepend(GFDeliverScreenshotFix)

# fastlane 2.232 creates a version localization with only `locale`. App Store
# Connect requires description, keywords, and supportUrl on that POST, and
# rejects the POST entirely once the version has been submitted for review.
# Metadata for those fields already lives in fastlane/metadata/<locale>/.
module GFDeliverVersionLocalizationFix
  SUBMITTED_VERSION_STATES = %w[
    WAITING_FOR_REVIEW
    IN_REVIEW
    PENDING_DEVELOPER_RELEASE
    PENDING_APPLE_RELEASE
    READY_FOR_SALE
    READY_FOR_DISTRIBUTION
  ].freeze

  CREATE_ATTRIBUTE_KEYS = {
    description: "description",
    keywords: "keywords",
    support_url: "supportUrl",
    marketing_url: "marketingUrl",
    promotional_text: "promotionalText"
  }.freeze

  def verify_available_version_languages!(app, languages)
    platform = Spaceship::ConnectAPI::Platform.map(options[:platform])
    version = fetch_edit_app_store_version(app, platform)

    unless version
      FastlaneCore::UI.user_error!("Cannot update languages - could not find an editable version for '#{platform}'")
      return
    end

    localizations = version.get_app_store_version_localizations
    languages = (languages || []).reject { |lang| lang.to_s == "default" }
    locales_to_enable = languages.map(&:to_s) - localizations.map { |localization| localization.locale.to_s }
    return localizations if locales_to_enable.empty?

    state = version.app_version_state.to_s
    if SUBMITTED_VERSION_STATES.include?(state)
      FastlaneCore::UI.important("Version #{version.version_string} is #{state}. Leaving existing localizations unchanged and skipping #{locales_to_enable.join(', ')}.")
      return localizations
    end

    created = false
    locales_to_enable.each do |locale|
      attributes = version_localization_create_attributes(locale)
      missing = %w[description keywords supportUrl].select { |key| attributes[key].to_s.strip.empty? }
      unless missing.empty?
        FastlaneCore::UI.user_error!("Cannot add #{locale}: fastlane/metadata/#{locale}/ is missing #{missing.join(', ')}")
      end

      begin
        FastlaneCore::UI.message("Creating #{locale} with description, keywords, and supportUrl")
        version.create_app_store_version_localization(attributes: attributes)
        created = true
      rescue Spaceship::UnexpectedResponse => error
        raise unless submitted_version_error?(error)

        FastlaneCore::UI.important("Skipping new locale #{locale}: version already submitted for review.")
      end
    end

    created ? version.get_app_store_version_localizations : localizations
  end

  def version_localization_create_attributes(locale)
    attributes = { "locale" => locale.to_s }
    CREATE_ATTRIBUTE_KEYS.each do |option_key, api_key|
      value = localized_option(option_key, locale)
      attributes[api_key] = value unless value.empty?
    end
    attributes
  end

  def localized_option(option_key, locale)
    values = options[option_key] || options[option_key.to_s]
    return "" unless values.is_a?(Hash)

    raw = values[locale] || values[locale.to_s] || values[locale.to_sym]
    raw.to_s.strip
  end

  def submitted_version_error?(error)
    error.message.to_s.include?("submitted for review")
  end
end

Deliver::UploadMetadata.prepend(GFDeliverVersionLocalizationFix) if defined?(Deliver::UploadMetadata)

# A submitted version still accepts the metadata upload path. Locked field
# updates must not fail the listing step; validation errors still raise.
module GFDeliverSubmittedVersionWrite
  def update(client: nil, attributes: nil)
    super
  rescue StandardError => error
    message = error.message.to_s
    unless message.match?(/submitted for review|waiting for review|not editable|cannot be edited|cannot be modified|not in an editable state/i)
      raise
    end

    FastlaneCore::UI.important("App Store Connect left this record unchanged because the version is already submitted.")
    self
  end
end

if defined?(Spaceship::ConnectAPI::AppStoreVersion)
  Spaceship::ConnectAPI::AppStoreVersion.prepend(GFDeliverSubmittedVersionWrite)
end

if defined?(Spaceship::ConnectAPI::AppStoreVersionLocalization)
  Spaceship::ConnectAPI::AppStoreVersionLocalization.prepend(GFDeliverSubmittedVersionWrite)
end
