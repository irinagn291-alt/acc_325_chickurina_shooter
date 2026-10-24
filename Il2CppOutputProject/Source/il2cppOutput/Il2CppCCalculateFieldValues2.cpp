#include "pch-cpp.hpp"






struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462;
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411;
struct FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8;
struct TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD  : public RuntimeObject
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct NativeIntegerAttribute_t80987D8E425EEDF1C26C9E7F7A8D34D1C5D2631F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___TransformFlags;
};
struct RefSafetyRulesAttribute_tCFCDA68F8F02D5B96C7A739547F850F17C0989AC  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	int32_t ___Version;
};
struct ConfigurationSaveMode_t7D0C554DA73F5D44E7DE4950E3F9004C20C71766 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct Video3DLayout_t6E17571466249890F3E4CBC4D5C4C3D7261DFA74 
{
	int32_t ___value__;
};
struct VideoAspectRatio_t6D4DCBAAAF4DF8518C7C39EAE75EEA6986AA5A47 
{
	int32_t ___value__;
};
struct VideoAudioOutputMode_tFDC43E947CD8D421DD2FD53A836A8D72F6AED874 
{
	int32_t ___value__;
};
struct VideoRenderMode_tB7AF1B303098B26EF56A4D3D30D9FB5BA35C96A1 
{
	int32_t ___value__;
};
struct VideoSource_t1BCC79FEDD081663192AC0AD8A74AE78B5C8E291 
{
	int32_t ___value__;
};
struct VideoTimeReference_tA2E6847CF38D64289E5AF3669C95F35B8864D351 
{
	int32_t ___value__;
};
struct VideoTimeSource_t4C874889018CCB1822AB2CC316A52D8846865958 
{
	int32_t ___value__;
};
struct VideoTimeUpdateMode_tFD5762EC6997152B5285D66EAEA3AC4102EC7882 
{
	int32_t ___value__;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___prepareCompleted;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___loopPointReached;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___started;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___frameDropped;
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* ___errorReceived;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___seekCompleted;
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* ___clockResyncOccurred;
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* ___frameReady;
};
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields
{
	uint32_t ___IsTextualNodeBitmap;
	uint32_t ___CanReadContentAsBitmap;
	uint32_t ___HasValueBitmap;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6005[1] = 
{
	static_cast<int32_t>(offsetof(RefSafetyRulesAttribute_tCFCDA68F8F02D5B96C7A739547F850F17C0989AC, ___Version)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6006[1] = 
{
	static_cast<int32_t>(offsetof(VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1, ___m_Handle)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6008[6] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6009[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6010[7] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6011[3] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6012[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6013[3] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6014[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6015[5] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6020[8] = 
{
	static_cast<int32_t>(offsetof(VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3, ___prepareCompleted)),static_cast<int32_t>(offsetof(VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3, ___loopPointReached)),static_cast<int32_t>(offsetof(VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3, ___started)),static_cast<int32_t>(offsetof(VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3, ___frameDropped)),static_cast<int32_t>(offsetof(VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3, ___errorReceived)),static_cast<int32_t>(offsetof(VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3, ___seekCompleted)),static_cast<int32_t>(offsetof(VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3, ___clockResyncOccurred)),static_cast<int32_t>(offsetof(VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3, ___frameReady)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6022[3] = 
{
	static_cast<int32_t>(offsetof(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields, ___IsTextualNodeBitmap)),static_cast<int32_t>(offsetof(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields, ___CanReadContentAsBitmap)),static_cast<int32_t>(offsetof(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields, ___HasValueBitmap)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6027[1] = 
{
	static_cast<int32_t>(offsetof(NativeIntegerAttribute_t80987D8E425EEDF1C26C9E7F7A8D34D1C5D2631F, ___TransformFlags)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6032[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6048[1] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6049[1] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6050[1] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6051[1] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6052[1] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6053[1] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6054[1] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable6055[1] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),};
