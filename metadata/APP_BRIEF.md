<!-- gf-brief source=6d9a2509e56e52a5427bf881084baae053d7764bedc7ecefabd52b1e7c04b5e3 written=2026-10-24T20:22:11+03:00 -->
# Chicken Shoot

## What it is
Chicken Shoot is a portrait target-shooting game. You aim a gun at a target, allow for wind, and try to score as many points as you can before the clock or your shots run out. It is for people who want short rounds of timed target practice, with unlockable guns and sights and a list of achievements.

## Launch and onboarding
A cold start shows a logo video, with no title and no buttons, for about three seconds. It then opens the main menu.

The menu shows a collected-achievements strip reading `COLLECTED 0/45` on a first launch, a `TUTORIAL` button, and a large `SHOOT` button. Music, sound, and haptic feedback start on.

`SHOOT` on a first launch does not start a round. It opens How to Play.

1. The first card shows `SHOOTER CLUB`, `HOW TO PLAY`, and `TELL ME MORE!`.
2. `TELL ME MORE!` moves through eight cards. `NEXT` goes forward. `BACK` goes back and does nothing on the first card. A dot marks the current card.
3. The cards are titled `STEP 1` through `STEP 8` and say, in the copy on those cards:
   - `Tap and hold anywhere on the screen to aim`
   - `While holding, move the sight to aim at the target`
   - `Release for a shot`
   - `The faster you aim, the more points you get for hitting`
   - `Always pay attention to the speed and direction of the wind and make adjustments`
   - `Use the "No Wind" boost to turn off the wind for the next shot`
   - `Use the "Maximum Approach" boost to maximize the sight for the next shot`
   - `Use the boost "+ 20%" to get more points for the next shot`
4. The last card uses `DONE` instead of continuing. `DONE` closes How to Play and remembers that it was finished.

`TUTORIAL` on the menu opens the same How to Play at any time.

## Screens

### Main menu
There is no separate screen title. The controls are:

- `SHOOT` — the first time, opens How to Play. After How to Play has been finished, it hides the menu and does not open a round.
- `TUTORIAL` — opens How to Play.
- Achievements strip — shows `COLLECTED` with a count such as `COLLECTED 0/45`. A separate achievements button on this menu is not shown. `TAP TO SEE MORE` is the label used on the achievements list.
- `SETTINGS` — opens the settings panel.

### Settings
Titled `SETTINGS`.

- `MUSIC` — switch. On or off. Starts on.
- `SOUND` — switch. On or off. Starts on.
- `HAPTIC` — switch. On or off. Starts on.
- `TUTORIAL` — opens How to Play.
- `FACEBOOK PAGE` — opens a web page.
- `PRIVACY POLICY` — opens a web page.
- `TERMS OF USE` — opens a web page.
- `BACK` — closes settings and returns to the menu.

### Achievements
The list is headed by the collected count, `COLLECTED` plus the number finished out of 45. It has two groups, `IN PROGRESS:` and `COMPLETED:`. Each row is the achievement sentence plus a fraction such as `0/10`. Unfinished icons are dimmed. `TAP TO SEE MORE` opens the longer list. `BACK` leaves it.

The 45 sentences are:

- `HEADSHOT 10 times`
- `HEADSHOT 25 times`
- `HEADSHOT 50 times`
- `HEADSHOT 75 times`
- `HEADSHOT 100 times`
- `Hit the center of the target "10" 3 times`
- `Hit the center of the target "10" 9 times`
- `Hit the center of the target "10" 27 times`
- `Hit the center of the target "10" 111 times`
- `Hit the center of the target "10" 222 times`
- `Miss 5 times`
- `Miss 10 times`
- `Miss 15 times`
- `Miss 20 times`
- `Miss 25 times`
- `Take a quick shot "X1.4" 15 times`
- `Take a quick shot "X1.4" 30 times`
- `Take a quick shot "X1.4" 60 times`
- `Take a quick shot "X1.4" 90 times`
- `Take a quick shot "X1.4" 120 times`
- `Hit the center of the target using the "+ 20%" boost 30 times`
- `Hit the center of the target using the "+ 20%" boost 40 times`
- `Hit the center of the target using the "+ 20%" boost 50 times`
- `Hit the center of the target using the "+ 20%" boost 60 times`
- `Hit the center of the target using the "+ 20%" boost 70 times`
- `Get an enlarged sight in the Boost Machine 25 times`
- `Get an enlarged sight in the Boost Machine 50 times`
- `Get an enlarged sight in the Boost Machine 100 times`
- `Get an enlarged sight in the Boost Machine 150 times`
- `Get an enlarged sight in the Boost Machine 250 times`
- `Shoot "no wind" 5 times`
- `Shoot no wind 15 times`
- `Shoot no wind 35 times`
- `Shoot "no wind" 85 times`
- `Shoot "no wind" 115 times`
- `Earn 5000 points in battle`
- `Earn 6000 points in battle`
- `Earn 7000 points in battle`
- `Earn 8000 points in battle`
- `Earn 9400 points in battle`
- `Play 3 cash games`
- `Play 10 Cash Games`
- `Play 20 Cash Games`
- `Play 35 Cash Games`
- `Play 80 Cash Games`

### Loading
A loading view shows `LOADING...` and a filling bar, then opens the shooting round. The menu’s `SHOOT` button does not open this view.

### Round
Before shooting, a Boost Machine runs by itself: the reels spin, stop after a few seconds, and the round starts. You do not have to tap to spin.

During the round the status line starts as `Let's Start!`. A clock counts down from two minutes as `mm:ss`. It turns red in the last ten seconds. At thirty seconds the status says `30 seconds left!`. At ten seconds it says `10 seconds left!`. Wind is shown as `Wind:` plus a number such as `Wind: 0.00`, with an arrow for direction. The score is a number. Five shot markers are shown and disappear as you fire.

Aim by touching and holding, moving the sight, then releasing. A faster aim scores more. Three boosts can be granted for the next shot: turn the wind off (`No Wind`), enlarge the sight (`Maximum Approach`), or add points (`+ 20%`). A boost can be used once; after that its control goes dim and will not fire again for that shot. If the same boost is already active, tapping it again does nothing.

If the clock hits zero, the status says `Time is up!` and the round ends. Leaving the app while a round is running opens the in-round settings and pauses play. Opening settings or the gun customizer also pauses the targets. Closing them resumes the round.

### Round results
Each of the shots is listed as its points, or `MISS` in red if it scored nothing. The total score is shown. Up to three achievements earned on that round can appear. Sending the score reloads the round. There is no named Submit label in the written copy; the results screen’s button titles sit in a scene that could not be read as text.

### Guns and sights
From the round you can open a customizer. The first gun and the first sight start unlocked and selected. Other guns and sights stay dark, with a lock, until a condition is met. When a gun can be opened, an open control appears; until then the select control is hidden. One gun stays behind the Facebook control until that control has been used. Sights that are ready show an open control and a tick; locked ones show a locker. A marker on the customizer appears when something new can be opened. Arrows move to the previous or next gun and wrap around the list.

## Features
- Timed target shooting with a two-minute clock and five shots.
- Wind speed and direction, shown as `Wind:` plus a number.
- Aim by holding, moving the sight, and releasing.
- Higher points for a faster aim.
- Boost Machine, which grants one boost before the round.
- `No Wind`, `Maximum Approach`, and `+ 20%` for the next shot.
- `MISS` when a shot scores nothing.
- Status lines `Let's Start!`, `30 seconds left!`, `10 seconds left!`, and `Time is up!`.
- How to Play, with `TELL ME MORE!`, `NEXT`, `BACK`, and `DONE`.
- `SETTINGS` for `MUSIC`, `SOUND`, and `HAPTIC`.
- Achievements, shown as `COLLECTED`, `IN PROGRESS:`, and `COMPLETED:`.
- Several guns and sights, some locked until an achievement or the Facebook control.
- Pause when the app is left during a round.
- A first gun and a first sight already unlocked.

## Behaviours that can look like bugs
- `SHOOT` will not start a round until How to Play is finished. The first tap only opens the cards. Finish them with `DONE`.
- After `DONE`, `SHOOT` hides the menu and still does not open a round or the `LOADING...` view. There is no second button on the menu that starts the match.
- `BACK` on the first How to Play card stays on that card.
- The Boost Machine spins and stops on its own. Waiting is the way through it.
- A used boost goes dim and ignores further taps until another round grants it again.
- Locked guns and sights do nothing until the matching achievement is complete, or, for one gun, until the Facebook control has been used. The open control is hidden while the lock is showing.
- The achievements button on the main menu is not visible, so the list is not opened from that control. The list itself is still in the app, with `TAP TO SEE MORE` and `BACK`.
- `COLLECTED 0/45` is the normal empty state before any achievement is earned. Progress fractions start at zero, such as `0/10`.
- The collected count and the in-progress rows update as you play. Completed rows move into `COMPLETED:`.
- If the clock runs out, the round always ends with `Time is up!`. That is the end of the round, not a freeze.
- Switching away from the app during a round opens settings and pauses the targets. Close settings to continue that same round.
- Several achievements say `cash games`, but the menu does not start a cash match.

## Starter content and resume
The first gun and the first sight are already unlocked. Music, sound, and haptic feedback start on. No sample scores or finished achievements are filled in. A round that is still going can be paused by leaving the app and continued when you return, as long as that round was not already over. A finished round is not saved as a match to resume later. Achievement progress and unlocks stay on the device between launches.

## Permissions
None. The project leaves the camera, location, microphone, and Bluetooth usage descriptions empty, and it does not show a permission prompt of its own.

## Absent
Login or accounts, in-app purchase, ads, analytics, user-generated content, an account deletion flow, and an App Tracking Transparency prompt are all absent. Achievement lines mention cash games, but no purchase flow is present.

## Data and support
Scores, settings, unlocks, and achievement progress stay on this device. There is no Contact or Support control. `FACEBOOK PAGE`, `PRIVACY POLICY`, and `TERMS OF USE` open web pages.

## Scanning and health
None.

## Platform
The configured name is Chicken Shoot. The minimum iOS version in the project is 15.0. The device target is iPhone, and the orientation is portrait. All four rotation flags are set, but the chosen orientation is portrait, so the app does not rotate. There is no region-specific screen. English is the only copy on screen; other language slots exist in code and have no string table.

## Category
Games, Sports.
