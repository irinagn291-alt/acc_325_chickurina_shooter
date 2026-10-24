#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

struct U3CDepthFirstTraversalOfTypeU3Ed__99_1_t26F2FC440C1A38809D2A93AD6EDC31692C52ADCE;
struct Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53;
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6;
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81;
struct Dictionary_2_t6B4B40DA71BA0031F5736DF4459253299D8AF5F2;
struct Dictionary_2_t9D3AD556F848CAEF373179A343E544F9291D05CC;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct Dictionary_2_tA0F0759ACFE489A515318F7FEC7C252100C65E0E;
struct Dictionary_2_t29C8BF28A8478B079C61631B473BB09AF77C7D01;
struct Func_1_tA8142C82F6807E3ECF316299D5B91FFE4FEA7343;
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C;
struct GetPooledFunc_tD1C5E06B5A940E5331B400454266F8E80624137B;
struct GetPooledFunc_tE499AD01DC2555D363C65E5DF947D4B35E0008F8;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_tA2E0B454CD5402DE9DA3E98624BD4F0A37A46AD6;
struct Lazy_1_t564A33A7F423595D3F62B04F731E53A42FB37575;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tB1D3AE6638063900DFF2ED463335EF8912FBBF7B;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F;
struct List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF;
struct List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485;
struct ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B;
struct ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A;
struct DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA;
struct DataBindingManager_tE7B33E64EBBDCAB0A89B6A8421529F9BA0D066E1;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904;
struct EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct EventNoArgValue_t46A184A2C045B09833A69EDC6676BADFF987882D;
struct Exception_t;
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
struct HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705;
struct ICursorManager_t78B026DED2559C62810B21C54C5F882457073A8B;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEventProperties_t6C5B8997F8C79157B7C03C1A566F17CE2BBE8D53;
struct IPanelRenderer_tEB4A39BEC71B3B49302393D8DAFF7599E7F9ED9E;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StringBuilder_t;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct TimeFunction_tF79523F25DE24287C8CF4D87F09E8CA51568EC9F;
struct TimerEventScheduler_tAF33EE8B1C54425235E4893B0C5088629FBE7862;
struct Type_t;
struct UIElementsBridge_tC28FCEDF493CD746D1973AB27BA2CBA393EB4BA8;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualElementAsset_t558B207D551F8C727D1CD0F443F7211D095C3FA9;
struct VisualElementSelectorData_t4C4043092A19A653CE8637C7659E36E0D3CC23A0;
struct VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1;
struct UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21;
struct Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7;
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540;
struct Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049;
struct EqualityComparer_tF8FCE99C5DBB2F35D74728CB65346435381CFD5B;
struct Data_t6BD087CC0FA9794D342D260035A70E365224C66E;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;
struct AuthoringIdConflictResolvedHandler_t10F732682709828BE2FB9EE8CF8120308A6065AD;
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24CC8D396132365E532646F936DFC8579E2299B2;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C;
IL2CPP_EXTERN_C String_t* _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946;
IL2CPP_EXTERN_C String_t* _stringLiteralFD093BF647113E1F68097589713DF034331718B2;
IL2CPP_EXTERN_C const RuntimeMethod* GCHandle_ThrowIfInvalid_m8BD7E31B383F657BB7B2512567A8296CFC16C931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CDepthFirstTraversalOfTypeU3Ed__99_1_t26F2FC440C1A38809D2A93AD6EDC31692C52ADCE  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	Il2CppSharedGenericObject* ___U3CU3E2__current;
	int32_t ___U3CU3El__initialThreadId;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CU3E4__this;
	RuntimeObject* ___U3CU3E7__wrap1;
};
struct U3CDepthFirstTraversalOfTypeU3Ed__99_1_t1736E560DBBC162F4ED7108171E6B852E8344582 : public RuntimeObject {};
struct EventArgValueFactory_1_tF5B07F3A164C85F1750486321C4E7517532107B0  : public RuntimeObject
{
};
struct EventArgValueFactory_1_t5EDE0EECC96FA2988C288A18C183107B9C29A44D  : public RuntimeObject
{
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject;
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass;
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct ConcreteTypeVisitor_tC41932325C8C25F9B634923360AE061521744BB2  : public RuntimeObject
{
};
struct EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85  : public RuntimeObject
{
	EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* ___nextArg;
	int32_t ___argId;
	int32_t ___temporaryCount;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct UnsafeUtilityInternal_t5FEF1714A0FC54C68B384571076C8DF48E831240  : public RuntimeObject
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
struct Vector_t246EF05F1CA5F494FB8B48AB2724DFCD2C2C5A9A  : public RuntimeObject
{
};
struct VisualElementExtensions_t5F9CD76F92E7BD4E3F3B6FEF246057D6FEAF9A61  : public RuntimeObject
{
};
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9  : public RuntimeObject
{
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
	UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* ___m_UpdaterArray;
};
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};
struct Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___rpnTokens;
	bool ___hasVariables;
};
struct MarshalledUnityObject_tA225A4A0AE6E49830C3C0142B2984549E0786A28  : public RuntimeObject
{
};
struct PrimitivesConverters_t4AC0AF040C8B4B0C9C0C9A0A6F806521CFD84F27  : public RuntimeObject
{
};
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449  : public RuntimeObject
{
	IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8* ___m_VisualTreeUpdaters;
};
struct NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E 
{
	int64_t ___Value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
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
struct EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD 
{
	uint32_t ____state;
};
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	bool ___m_Focusable;
	int32_t ___m_TabIndex;
	bool ___m_DelegatesFocus;
	bool ___m_ExcludeFromFocusRing;
	bool ___U3CisEligibleToReceiveFocusFromDisabledChildU3Ek__BackingField;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 
{
	int32_t ___m_Index1;
	uint16_t ___m_World0;
	uint16_t ___m_Generation;
};
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	int32_t ___id;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___byte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_OffsetPadding[1];
			uint8_t ___byte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_OffsetPadding[2];
			uint8_t ___byte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_OffsetPadding[3];
			uint8_t ___byte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_OffsetPadding[4];
			uint8_t ___byte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_OffsetPadding[5];
			uint8_t ___byte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_OffsetPadding[6];
			uint8_t ___byte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_OffsetPadding[7];
			uint8_t ___byte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_OffsetPadding[8];
			uint8_t ___byte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_OffsetPadding[9];
			uint8_t ___byte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_OffsetPadding[10];
			uint8_t ___byte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_OffsetPadding[11];
			uint8_t ___byte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_OffsetPadding[12];
			uint8_t ___byte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_OffsetPadding[13];
			uint8_t ___byte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_OffsetPadding[14];
			uint8_t ___byte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_OffsetPadding[15];
			uint8_t ___byte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___sbyte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_OffsetPadding[1];
			int8_t ___sbyte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_OffsetPadding[2];
			int8_t ___sbyte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_OffsetPadding[3];
			int8_t ___sbyte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_OffsetPadding[4];
			int8_t ___sbyte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_OffsetPadding[5];
			int8_t ___sbyte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_OffsetPadding[6];
			int8_t ___sbyte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_OffsetPadding[7];
			int8_t ___sbyte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_OffsetPadding[8];
			int8_t ___sbyte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_OffsetPadding[9];
			int8_t ___sbyte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_OffsetPadding[10];
			int8_t ___sbyte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_OffsetPadding[11];
			int8_t ___sbyte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_OffsetPadding[12];
			int8_t ___sbyte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_OffsetPadding[13];
			int8_t ___sbyte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_OffsetPadding[14];
			int8_t ___sbyte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_OffsetPadding[15];
			int8_t ___sbyte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___uint16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_OffsetPadding[2];
			uint16_t ___uint16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_OffsetPadding[4];
			uint16_t ___uint16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_OffsetPadding[6];
			uint16_t ___uint16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_OffsetPadding[8];
			uint16_t ___uint16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_OffsetPadding[10];
			uint16_t ___uint16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_OffsetPadding[12];
			uint16_t ___uint16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_OffsetPadding[14];
			uint16_t ___uint16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___int16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_OffsetPadding[2];
			int16_t ___int16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_OffsetPadding[4];
			int16_t ___int16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_OffsetPadding[6];
			int16_t ___int16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_OffsetPadding[8];
			int16_t ___int16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_OffsetPadding[10];
			int16_t ___int16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_OffsetPadding[12];
			int16_t ___int16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_OffsetPadding[14];
			int16_t ___int16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uint32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_OffsetPadding[4];
			uint32_t ___uint32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_OffsetPadding[8];
			uint32_t ___uint32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_OffsetPadding[12];
			uint32_t ___uint32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___int32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_OffsetPadding[4];
			int32_t ___int32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_OffsetPadding[8];
			int32_t ___int32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_OffsetPadding[12];
			int32_t ___int32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___uint64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_OffsetPadding[8];
			uint64_t ___uint64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___int64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_OffsetPadding[8];
			int64_t ___int64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___single_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_OffsetPadding[4];
			float ___single_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_OffsetPadding[8];
			float ___single_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_OffsetPadding[12];
			float ___single_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___double_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_OffsetPadding[8];
			double ___double_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_forAlignmentOnly;
		};
	};
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct StyleClassList_tCA2E8910D5BCCB7029CF852421F1E07E8EDF9744 
{
	Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049* ___m_Record;
};
struct StyleClassList_tCA2E8910D5BCCB7029CF852421F1E07E8EDF9744_marshaled_pinvoke
{
	Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049* ___m_Record;
};
struct StyleClassList_tCA2E8910D5BCCB7029CF852421F1E07E8EDF9744_marshaled_com
{
	Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049* ___m_Record;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF 
{
	int32_t ___m_Id;
};
struct UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D 
{
	union
	{
		struct
		{
		};
		uint8_t MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D__padding[1];
	};
};
struct MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00 
{
	union
	{
		struct
		{
		};
		uint8_t MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00__padding[1];
	};
};
struct MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23 
{
	union
	{
		struct
		{
		};
		uint8_t MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23__padding[1];
	};
};
struct ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C 
{
	EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* ___m_FirstArg;
	int32_t ___m_PrevLocalArgId;
};
struct ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C_marshaled_pinvoke
{
	EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* ___m_FirstArg;
	int32_t ___m_PrevLocalArgId;
};
struct ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C_marshaled_com
{
	EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* ___m_FirstArg;
	int32_t ___m_PrevLocalArgId;
};
struct ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 
{
	int32_t ___m_IndexId;
	uint16_t ___m_WorldId;
	uint16_t ___m_Padding;
	int32_t ___m_GenerationId;
};
struct ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 
{
	uint32_t ____state;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	RuntimeObject* ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value;
};
struct U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F__padding[40];
	};
};
struct ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A 
{
	intptr_t ____value;
};
struct ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 
{
	intptr_t ____value;
};
struct ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 
{
	intptr_t ____value;
};
struct ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 
{
	intptr_t ____value;
};
struct ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 
{
	intptr_t ____value;
};
struct ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF 
{
	intptr_t ____value;
};
struct ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 
{
	intptr_t ____value;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct BindingMode_t14EA605BB56B087ECA15C8BF7826E98F12D30E61 
{
	int32_t ___value__;
};
struct BindingStatus_t72E69C73FEA899A1FE65BCA04E6B79E30157EB43 
{
	int32_t ___value__;
};
struct BindingUpdateStage_t91119CD89F37505ED96D2FC473F486E5ED112762 
{
	int32_t ___value__;
};
struct BindingUpdateTrigger_t5237F1E29F5B5604BB57907C83EE6B1CFA261234 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct EventSource_t395F7AD9932CE73777C8DB122DE6638A61AAA07E 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	int32_t ___value__;
};
struct LanguageDirection_t30A3B6BBCEE6A6F57641E4E008E0DCC40603558C 
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
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 
{
	bool ___clearDepthStencil;
	bool ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_pinvoke
{
	int32_t ___clearDepthStencil;
	int32_t ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_com
{
	int32_t ___clearDepthStencil;
	int32_t ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct PhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct PhysicsRotate_t3AF8BA583108282C8B59872CB621EC366BC042B0 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction;
};
struct PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E 
{
	PhysicsHandle_tEC3DCC38ABB8395068171070539ABF8309A854C2 ___m_PhysicsHandle;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct RenderHints_t4032FC4AB3FD946FD2A484865B8861730D9035E7 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct VisualElementFlags_t4D1066E11400967A1A2DA7331391ACDC4AA14409 
{
	int32_t ___value__;
};
struct VisualTreeUpdatePhase_t1EF45877A1796DC3991B9FF3A6AD762BE02DF67D 
{
	int32_t ___value__;
};
struct Command_t8AE6C32AB4C4E5FC4B8C77082D0EE5275B3414B9 
{
	int32_t ___value__;
};
struct Type_t978C0427FF2CB3DE1CC7BB6CC19BAC9005EC519D 
{
	int32_t ___value__;
};
struct ButtonsState_tDD5A3F9241886C7E1BA2975DF6E7045C321583E3 
{
	U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F ___buttons;
};
struct Type_tBD67F20EC8969784B5377C5DC8F261E207A14792 
{
	int32_t ___value__;
};
struct Direction_tCF5F04CE76DF556D8ABCA537FC7C977681A14996 
{
	int32_t ___value__;
};
struct Type_tDA196B70B848DC5CD4982EBF31E0945B199A68C7 
{
	int32_t ___value__;
};
struct TransformWriteMode_tAC88F83F00B2B74873BDD3631AC07283279591D4 
{
	int32_t ___value__;
};
struct Button_tA3E7AF5F245F630CB38476BAB013B509F53B35B8 
{
	uint32_t ___value__;
};
struct Type_tAD126B1DC1FD450FB4C782B18131374A55C28858 
{
	int32_t ___value__;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 
{
	ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 
{
	ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 
{
	ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B 
{
	ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 
{
	ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 
{
	ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 ____pointer;
	int32_t ____length;
};
struct Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 
{
	ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A ____pointer;
	int32_t ____length;
};
struct Binding_tA1358A155852138C1926082E4F3245B6F631CBED  : public RuntimeObject
{
	bool ___m_Dirty;
	int32_t ___m_UpdateTrigger;
};
struct BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB 
{
	int32_t ___U3CstatusU3Ek__BackingField;
	String_t* ___U3CmessageU3Ek__BackingField;
};
struct BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB_marshaled_pinvoke
{
	int32_t ___U3CstatusU3Ek__BackingField;
	char* ___U3CmessageU3Ek__BackingField;
};
struct BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB_marshaled_com
{
	int32_t ___U3CstatusU3Ek__BackingField;
	Il2CppChar* ___U3CmessageU3Ek__BackingField;
};
struct CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F 
{
	int32_t ___type;
	int32_t ___command;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4 
{
	String_t* ___compositionString;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_marshaled_pinvoke
{
	char* ___compositionString;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_marshaled_com
{
	Il2CppChar* ___compositionString;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 
{
	int32_t ___type;
	int32_t ___keyCode;
	ButtonsState_tDD5A3F9241886C7E1BA2975DF6E7045C321583E3 ___buttonsState;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 
{
	union
	{
		struct
		{
			intptr_t ___pointer;
			int32_t ___allocator;
		};
		uint8_t MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2__padding[16];
	};
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD 
{
	int32_t ___type;
	int32_t ___direction;
	bool ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___direction;
	int32_t ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_com
{
	int32_t ___type;
	int32_t ___direction;
	int32_t ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	PhysicsRotate_t3AF8BA583108282C8B59872CB621EC366BC042B0 ___rotation;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	bool ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	int32_t ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	int32_t ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TempMeshAllocator_tD37C436C57799A8137298056D60932C14639361C 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_Handle;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A 
{
	Il2CppChar ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_pinvoke
{
	uint8_t ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_com
{
	uint8_t ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_Handle;
};
struct ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeA;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeB;
	ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 ___m_ContactId;
};
struct ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeA;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_ShapeB;
	ContactId_tD87E020E1E854F067B05AE73E9C5B3FE3155CF11 ___m_ContactId;
};
struct JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A 
{
	PhysicsJoint_tC54739697A353F8507A40D3B105421EE91B33884 ___m_Joint;
	intptr_t ___m_UserData;
};
struct TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_TriggerShape;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_VisitorShape;
};
struct TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04 
{
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_TriggerShape;
	PhysicsShape_t5332F05C66BD392AFDBAE441571781A22AABED7E ___m_VisitorShape;
};
struct PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D 
{
	intptr_t ___m_Buffer;
	int32_t ___m_Size;
	int32_t ___m_Allocator;
};
struct GetPooledFunc_tD1C5E06B5A940E5331B400454266F8E80624137B  : public MulticastDelegate_t
{
};
struct GetPooledFunc_tE499AD01DC2555D363C65E5DF947D4B35E0008F8  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 
{
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
	Data_t6BD087CC0FA9794D342D260035A70E365224C66E* ___m_Data;
};
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	bool ___m_ImportedWithErrors;
	bool ___m_HasEditorElements;
	bool ___m_HasUpdatedUrls;
	bool ___m_ImportedWithWarnings;
	bool ___m_ImportedWithObsoleteAttributeNames;
	List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* ___m_Usings;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___inlineSheet;
	VisualElementAsset_t558B207D551F8C727D1CD0F443F7211D095C3FA9* ___m_VisualTree;
	Dictionary_2_t9D3AD556F848CAEF373179A343E544F9291D05CC* ___m_UsedIds;
	AuthoringIdConflictResolvedHandler_t10F732682709828BE2FB9EE8CF8120308A6065AD* ___onAuthoringIdConflictResolved;
	List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* ___m_AssetEntries;
	List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* ___m_Slots;
	int32_t ___m_ContentContainerId;
	int32_t ___m_ContentHash;
};
struct TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76 
{
	TempMeshAllocator_tD37C436C57799A8137298056D60932C14639361C ___allocator;
	NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 ___jobParameters;
};
struct Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF 
{
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
	int32_t ___snapshotIndex;
	intptr_t ___vectorImagePtr;
	intptr_t ___texturePtr;
	int32_t ___userData;
};
struct TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7 
{
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_TransformWriteMode;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_PhysicsTransform;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_TransformId;
	int32_t ___m_TransformDepth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LinearVelocity;
	float ___m_AngularVelocity;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PositionFrom;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_RotationFrom;
};
struct BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6 
{
	intptr_t ___m_UserData;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_Transform;
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	bool ___m_FellAsleep;
};
struct BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_pinvoke
{
	intptr_t ___m_UserData;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_Transform;
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_FellAsleep;
};
struct BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_com
{
	intptr_t ___m_UserData;
	PhysicsTransform_tB8A6E5FBEECAEFA43E89B0975A2D617AC701E434 ___m_Transform;
	PhysicsBody_t4D9A16A318F8485217B0416E238278FA77455CD0 ___m_Body;
	int32_t ___m_FellAsleep;
};
struct ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC 
{
	ContactBeginEvent_tE6898EF155CD177351DCA1B58320E71502483291 ___m_BeginEvent;
};
struct ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A 
{
	ContactEndEvent_t99F3D0E45651D2DEEAD6961EDD93A532F733A002 ___m_EndEvent;
};
struct JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF 
{
	JointThresholdEvent_t32ED7A55510168BABACED0AD5308EFDC68F72E7A ___m_JointThresholdEvent;
};
struct TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576 
{
	TriggerBeginEvent_t51AB74C5036CEFCBE51AFDFE746B2A08627571B9 ___m_BeginEvent;
};
struct TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A 
{
	TriggerEndEvent_tB944FE9E547B3336FFEE17614E6C724A1ECE8A04 ___m_EndEvent;
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E 
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_PropertyPath;
	String_t* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___m_PropertyPath;
	char* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___m_PropertyPath;
	Il2CppChar* ___m_Path;
};
struct DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA  : public Binding_tA1358A155852138C1926082E4F3245B6F631CBED
{
	int32_t ___m_BindingMode;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___m_SourceToUiConverters;
	ConverterGroup_t2D7DEDAC22662EF5C020DE54231DC23CD0B5268A* ___m_UiToSourceConverters;
	RuntimeObject* ___U3CdataSourceU3Ek__BackingField;
	Type_t* ___U3CdataSourceTypeU3Ek__BackingField;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CdataSourcePathU3Ek__BackingField;
};
struct LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA 
{
	int32_t ___m_Manager;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Nodes;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Configs;
};
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446  : public RuntimeObject
{
	int32_t ___m_PathIndex;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
	bool ___U3CReadonlyVisitU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
};
struct BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84 
{
	BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6 ___m_BodyUpdateEvent;
};
struct BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_marshaled_pinvoke
{
	BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_pinvoke ___m_BodyUpdateEvent;
};
struct BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_marshaled_com
{
	BodyUpdateEvent_t7EF4D88BBC121B3438A99B1A5E81EFEEA5D332A6_marshaled_com ___m_BodyUpdateEvent;
};
struct BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_TargetElement;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___m_BindingId;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_DataSourcePath;
	RuntimeObject* ___m_DataSource;
};
struct BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_TargetElement;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke ___m_BindingId;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___m_DataSourcePath;
	Il2CppIUnknown* ___m_DataSource;
};
struct BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_TargetElement;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com ___m_BindingId;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___m_DataSourcePath;
	Il2CppIUnknown* ___m_DataSource;
};
struct LayoutConfig_tD448909812F1AA8DE14EAC340688D6FF41B52C87 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 ___m_Handle;
};
struct LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 ___m_Handle;
};
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	RuntimeObject* ___Property;
};
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303  : public RuntimeObject
{
	Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53* ___panelDisposed;
	Dictionary_2_t29C8BF28A8478B079C61631B473BB09AF77C7D01* ___MemberElementsByHandle;
	UIElementsBridge_tC28FCEDF493CD746D1973AB27BA2CBA393EB4BA8* ___m_UIElementsBridge;
	float ___m_Scale;
	int32_t ___m_BackdropFilterElementCount;
	LayoutConfig_tD448909812F1AA8DE14EAC340688D6FF41B52C87 ___layoutConfig;
	float ___m_PixelsPerPoint;
	float ___U3CreferenceSpritePixelsPerUnitU3Ek__BackingField;
	PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 ___U3CclearSettingsU3Ek__BackingField;
	RuntimeObject* ___panelRenderer;
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField;
	ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B* ___U3CcontextualMenuManagerU3Ek__BackingField;
	DataBindingManager_tE7B33E64EBBDCAB0A89B6A8421529F9BA0D066E1* ___U3CdataBindingManagerU3Ek__BackingField;
	TimerEventScheduler_tAF33EE8B1C54425235E4893B0C5088629FBE7862* ___m_Scheduler;
	TimeFunction_tF79523F25DE24287C8CF4D87F09E8CA51568EC9F* ___m_TimeSinceStartupFunc;
	bool ___U3CdisposedU3Ek__BackingField;
	ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904* ___m_TopElementUnderPointers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___isFlatChanged;
	bool ___m_DrawsInCameras;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___atlasChanged;
	HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705* ___hierarchyChanged;
	Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6* ___beforeUpdate;
	Lazy_1_t564A33A7F423595D3F62B04F731E53A42FB37575* ___textElementRegistry;
	Func_1_tA8142C82F6807E3ECF316299D5B91FFE4FEA7343* ___CreateMenuFunctor;
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___IMEGetCompositionString;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___IMESetIsEnteringText;
	Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ___IMESetCursorPos;
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField;
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField;
	String_t* ___m_Name;
	StyleClassList_tCA2E8910D5BCCB7029CF852421F1E07E8EDF9744 ___m_ClassList;
	Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35* ___m_PropertyBag;
	int32_t ___m_Flags;
	int32_t ___m_RenderHints;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding;
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___nestedRenderData;
	int32_t ___insertionIndex;
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField;
	String_t* ___m_ViewDataKey;
	int32_t ___m_LanguageDirection;
	LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE ___m_LayoutNode;
	VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3* ___m_TransformDataPTr;
	VisualElementSelectorData_t4C4043092A19A653CE8637C7659E36E0D3CC23A0* ___m_SelectorDataPtr;
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext;
	int32_t ___inheritedStylesHash;
	uint32_t ___controlid;
	int32_t ___imguiContainerDescendantCount;
	int32_t ___m_LocalLanguageDirection;
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField;
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations;
	RuntimeObject* ___m_DataSource;
	PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55* ___m_DataSourcePath;
	int32_t ___m_TrickleDownHandleEventCategories;
	int32_t ___m_BubbleUpHandleEventCategories;
	int32_t ___m_BubbleUpEventCallbackCategories;
	int32_t ___m_TrickleDownEventCallbackCategories;
	int32_t ___m_EventInterestSelfCategories;
	int32_t ___m_CachedEventInterestParentCategories;
	uint32_t ___m_NextParentCachedVersion;
	uint32_t ___m_NextParentRequiredVersion;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CachedNextParentWithEventInterests;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource;
	List_1_tB1D3AE6638063900DFF2ED463335EF8912FBBF7B* ___m_MeshModifiers;
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess;
	ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45* ___resolvedStyleAccess;
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList;
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData;
};
struct CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1  : public ConcreteTypeVisitor_tC41932325C8C25F9B634923360AE061521744BB2
{
	DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* ___U3CBindingU3Ek__BackingField;
	BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 ___U3CbindingContextU3Ek__BackingField;
	BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___U3CresultU3Ek__BackingField;
};
struct UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* ___U3CbindingU3Ek__BackingField;
	int32_t ___U3CdirectionU3Ek__BackingField;
	BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 ___U3CbindingContextU3Ek__BackingField;
	BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___U3CresultU3Ek__BackingField;
};
struct EventArgValueFactory_1_tF5B07F3A164C85F1750486321C4E7517532107B0_StaticFields
{
	GetPooledFunc_tD1C5E06B5A940E5331B400454266F8E80624137B* ___GetPooled;
};
struct EventArgValueFactory_1_t5EDE0EECC96FA2988C288A18C183107B9C29A44D_StaticFields
{
	GetPooledFunc_tE499AD01DC2555D363C65E5DF947D4B35E0008F8* ___GetPooled;
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	bool ___enableDebugPrints;
};
struct EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85_StaticFields
{
	EventNoArgValue_t46A184A2C045B09833A69EDC6676BADFF987882D* ___None;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct VisualElementExtensions_t5F9CD76F92E7BD4E3F3B6FEF246057D6FEAF9A61_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___k_ThreeStrings;
};
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields
{
	int32_t ___FRAME_SIZE_FOR_ARRAYS;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields
{
	int32_t ___s_count;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_zero;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_one;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_allOnes;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	int32_t ___s_count;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields
{
	int32_t ___s_count;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_zero;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_one;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_allOnes;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB_StaticFields
{
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___s_TemporarySlotInsertionPoints;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___s_VeaIdsPath;
};
struct DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA_StaticFields
{
	MethodInfo_t* ___s_UpdateUIMethodInfo;
	UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___textElementInnerInputFieldUssClassNameUnique;
};
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_StaticFields
{
	ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340* ___Pool;
};
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_StaticFields
{
	Dictionary_2_tA0F0759ACFE489A515318F7FEC7C252100C65E0E* ___PanelsByHandle;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s_OutsidePanelCoordinates;
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	uint32_t ___s_NextId;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey;
	String_t* ___disabledUssClassName;
	UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___disabledUssClassNameUnique;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey;
	int32_t ___s_FinalizerCount;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___childCountProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___contentRectProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourcePathProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___disablePlayModeTintProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledInHierarchyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledSelfProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___layoutProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___languageDirectionProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___localBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___nameProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___panelProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___pickingModeProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___styleSheetsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___tooltipProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___usageHintsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___userDataProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___viewDataKeyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visibleProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visualTreeAssetSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldTransformProperty;
	uint32_t ___s_NextParentVersion;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList;
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath;
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* m_Items[1];

	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_mEFC640DAE334AF4ED540F354F6FCDF25F74E95A2_fshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* VisualElement_GetFirstAncestorOfType_TisIl2CppSharedGenericObject_m7C6ED65FFE99DF8B47874FB643028A43E8469A9A_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDepthFirstTraversalOfTypeU3Ed__99_1__ctor_mC04B449C53D5A3050B3D1C5790A22C54BA470252_gshared (U3CDepthFirstTraversalOfTypeU3Ed__99_1_t26F2FC440C1A38809D2A93AD6EDC31692C52ADCE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisIl2CppSharedGenericObject_m0C7FDCF16A83058F035A29281B5B69F149628508_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mAAE538FC8B5BE7EC34C148D8FD74EF3FF554751A (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m7237670035CB1C535D6E5123B8A9C5EF12A24AA3 (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m061F9936983114EC5386918BD2ED0C3F66202D50 (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m07E31EC0FB0D104D49623A95B9A40BF7008CCBEB (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m47639833B15FA87081E81A99F6CD0EF7A33EB96F (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m019BA730BD00B249766225A0F1A57809FBAC89E4 (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIl2CppFullySharedGenericAny_m34D64A8F07FD877EDB1F42731C081223E8604CDC_fshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_m96693C4A9AE0EA03F40671D7AF995E144B6FA18E (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m0819DF5FE1FD0560787D41C4BF6B901BE6BC862F (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_mBAB5E81D1843416F2FDB75A7FCBD522AE6B38CCE (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_mB4094DC7427C637BB6CC418E4D764C77E97FE435 (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m86E7B37547BC701CF88B5B6261050C515FDD0A6D (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_mE395ADDFBCBAAEB75C1673A5562FB9FD43DAF36B (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisIl2CppFullySharedGenericAny_m53DBCF48B23CD871158F25B798C35E7510D0ECA2_fshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mCCADF5AEA66951D37669CE60CCB01ED3C4660138 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_mD1AA5362A19BCFA1036EEABAF52BB924ED3A38B0 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m949E8814C4A62D3FC6F78A78D91E0AD070256388 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m05EC89F841D762DC1AA3EB7E9AAC6718700B73FA (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_mB921D1FC2D4F4A50A52E2A7C40B6E8A117FA3E43 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m331F9023B972DA2C8C03472206D86159720C12EC (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisIl2CppFullySharedGenericAny_mBBB034E98EB67ACB20246B5E0AD0D7953C621857_fshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ArgValueList_FindByValue_TisIl2CppSharedGenericObject_mECA0BE1B058B973E86ECA1DEE922955C6F82EA49_gshared_inline (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C* __this, Il2CppSharedGenericObject** ___0_value, EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** ___1_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* GetPooledFunc_Invoke_m4636F86A39752E604FA1B9AB04E87D00DD274455_gshared_inline (GetPooledFunc_tD1C5E06B5A940E5331B400454266F8E80624137B* __this, int32_t ___0_id, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, double* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_inline (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_inline (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_inline (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_inline (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_inline (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_inline (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_inline (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool* UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline (bool* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A (double* ___0_source, bool* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline (uint8_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC (double* ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_fshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) ;

inline Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method)
{
	return ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))Vector_1_op_Explicit_mEFC640DAE334AF4ED540F354F6FCDF25F74E95A2_fshared)(___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4 (Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677* __this, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* VisualElement_GetFirstAncestorOfType_TisIl2CppSharedGenericObject_m7C6ED65FFE99DF8B47874FB643028A43E8469A9A (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))VisualElement_GetFirstAncestorOfType_TisIl2CppSharedGenericObject_m7C6ED65FFE99DF8B47874FB643028A43E8469A9A_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, String_t* ___0_className, const RuntimeMethod* method) ;
inline void U3CDepthFirstTraversalOfTypeU3Ed__99_1__ctor_mC04B449C53D5A3050B3D1C5790A22C54BA470252 (U3CDepthFirstTraversalOfTypeU3Ed__99_1_t26F2FC440C1A38809D2A93AD6EDC31692C52ADCE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CDepthFirstTraversalOfTypeU3Ed__99_1_t26F2FC440C1A38809D2A93AD6EDC31692C52ADCE*, int32_t, const RuntimeMethod*))U3CDepthFirstTraversalOfTypeU3Ed__99_1__ctor_mC04B449C53D5A3050B3D1C5790A22C54BA470252_gshared)(__this, ___0_U3CU3E1__state, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* VisualTreeAsset_GetAsset_m2E54CBD277B885F9525568A2FD93D71B11999C71 (VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* __this, String_t* ___0_path, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___0_phase, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3 (const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (const RuntimeMethod*))Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11 (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___0_phase, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25 (Type_t* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646 (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5 (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1 (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288 (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8 (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9 (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96 (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B (int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE (intptr_t ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849 (intptr_t ___0_str, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___0_javaClass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
inline String_t* _AndroidJNIHelper_GetSignature_TisIl2CppSharedGenericObject_m0C7FDCF16A83058F035A29281B5B69F149628508 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))_AndroidJNIHelper_GetSignature_TisIl2CppSharedGenericObject_m0C7FDCF16A83058F035A29281B5B69F149628508_gshared)(___0_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* CastDataSourceVisitor_get_Binding_m5E49CD185160FDDD9703BECC9BBCABCC38D3470C_inline (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 CastDataSourceVisitor_get_bindingContext_m4CB5DBA632F34ADA1D372891CF20CC352EC67681_inline (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CastDataSourceVisitor_set_result_m85D8FC603976B86A95E07B083CA39AD7524A04BB_inline (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UIPathVisitor_get_direction_m8EAE7149E1C74BB49BAEE95948B35F5C9B7EB346_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* UIPathVisitor_get_binding_m03F7EA36AD3D36ADECF9C571DD914933D7CA7338_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 UIPathVisitor_get_bindingContext_mE1C76F6A0BF1B24EA6D1BB247752F5EE0586B4F7_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIPathVisitor_set_result_m5195F6D8FA895AC39C2ADE63E665878C38795079_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD CommandEvent_get_eventModifiers_mDE813197A28BFBB82027157E446A56BDA43E8AD8_inline (CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mAAE538FC8B5BE7EC34C148D8FD74EF3FF554751A (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD IMECompositionEvent_get_eventModifiers_m4B212B13B5AA27343B784C20FA77266C1D741012_inline (IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m7237670035CB1C535D6E5123B8A9C5EF12A24AA3 (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD KeyEvent_get_eventModifiers_mF90EB0DF537425D3D09B1E095A2B9D24EE448782_inline (KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m061F9936983114EC5386918BD2ED0C3F66202D50 (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD NavigationEvent_get_eventModifiers_mA4BA9D05B5E5E327B9E5A1889202FA12518AB815_inline (NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m07E31EC0FB0D104D49623A95B9A40BF7008CCBEB (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD PointerEvent_get_eventModifiers_m5C238F94AA34FB172F4D7256E5D68E838E3C5A05_inline (PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m47639833B15FA87081E81A99F6CD0EF7A33EB96F (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD TextInputEvent_get_eventModifiers_m0C34160E76D9DE9F4D307C6EDF4BBF7319BB6E78_inline (TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m019BA730BD00B249766225A0F1A57809FBAC89E4 (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) ;
inline EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIl2CppFullySharedGenericAny_m34D64A8F07FD877EDB1F42731C081223E8604CDC (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method)
{
	return ((  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD (*) (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))MapAsEventModifiers_Map_TisIl2CppFullySharedGenericAny_m34D64A8F07FD877EDB1F42731C081223E8604CDC_fshared)(__this, ___0_ev, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CommandEvent_get_eventSource_mAE9F153B7FBCF387F82996F35E9A181673800CDB_inline (CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_m96693C4A9AE0EA03F40671D7AF995E144B6FA18E (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IMECompositionEvent_get_eventSource_m5A9262ED18044F734147AB4A65263C7E455B7CAB_inline (IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m0819DF5FE1FD0560787D41C4BF6B901BE6BC862F (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyEvent_get_eventSource_m9A74264E7C276EEFA5F603C1EA12BC23034CDE0D_inline (KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_mBAB5E81D1843416F2FDB75A7FCBD522AE6B38CCE (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NavigationEvent_get_eventSource_mD35D875FBB7FA557068DF25BB145292A6EF9FBA0_inline (NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_mB4094DC7427C637BB6CC418E4D764C77E97FE435 (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEvent_get_eventSource_m433AD39B323BF13AE165F5F9D025444092FAEB33_inline (PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m86E7B37547BC701CF88B5B6261050C515FDD0A6D (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TextInputEvent_get_eventSource_mD08759B60A91AAC1DD74CD97AABA7F47C1332CF2_inline (TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_mE395ADDFBCBAAEB75C1673A5562FB9FD43DAF36B (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) ;
inline int32_t MapAsEventSource_Map_TisIl2CppFullySharedGenericAny_m53DBCF48B23CD871158F25B798C35E7510D0ECA2 (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))MapAsEventSource_Map_TisIl2CppFullySharedGenericAny_m53DBCF48B23CD871158F25B798C35E7510D0ECA2_fshared)(__this, ___0_ev, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mCCADF5AEA66951D37669CE60CCB01ED3C4660138 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_mD1AA5362A19BCFA1036EEABAF52BB924ED3A38B0 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m949E8814C4A62D3FC6F78A78D91E0AD070256388 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m05EC89F841D762DC1AA3EB7E9AAC6718700B73FA (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_mB921D1FC2D4F4A50A52E2A7C40B6E8A117FA3E43 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m331F9023B972DA2C8C03472206D86159720C12EC (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) ;
inline RuntimeObject* MapAsObject_Map_TisIl2CppFullySharedGenericAny_mBBB034E98EB67ACB20246B5E0AD0D7953C621857 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))MapAsObject_Map_TisIl2CppFullySharedGenericAny_mBBB034E98EB67ACB20246B5E0AD0D7953C621857_fshared)(__this, ___0_ev, method);
}
inline bool ArgValueList_FindByValue_TisIl2CppSharedGenericObject_mECA0BE1B058B973E86ECA1DEE922955C6F82EA49_inline (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C* __this, Il2CppSharedGenericObject** ___0_value, EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** ___1_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C*, Il2CppSharedGenericObject**, EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85**, const RuntimeMethod*))ArgValueList_FindByValue_TisIl2CppSharedGenericObject_mECA0BE1B058B973E86ECA1DEE922955C6F82EA49_gshared_inline)(__this, ___0_value, ___1_arg, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArgValueList_GenerateLocallyUniqueTemporaryId_mDC92CA265E9AC118E3C7DAC04AFF263669C27F02_inline (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C* __this, const RuntimeMethod* method) ;
inline EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* GetPooledFunc_Invoke_m4636F86A39752E604FA1B9AB04E87D00DD274455_inline (GetPooledFunc_tD1C5E06B5A940E5331B400454266F8E80624137B* __this, int32_t ___0_id, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method)
{
	return ((  EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* (*) (GetPooledFunc_tD1C5E06B5A940E5331B400454266F8E80624137B*, int32_t, Il2CppSharedGenericObject**, const RuntimeMethod*))GetPooledFunc_Invoke_m4636F86A39752E604FA1B9AB04E87D00DD274455_gshared_inline)(__this, ___0_id, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArgValueList_Append_m8976AA1BA506B735A4B72719E16760B1D03EF650_inline (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C* __this, EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* ___0_argValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, double* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Il2CppSharedGenericObject*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline)(___0_obj, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC MarshalledUnityObject_FromIntPtrUnsafe_m1C5AE0FB7CD1978A8387B0081DB909BAAC2324C3_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
inline NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mCAB0D1991E3CA4A5F2B29699805088ED767C85BF (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m9FF20AB277A63B6352D86FBE981963C274C1F6CA (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9060EF20AD31BDDBF8E6A4D61F091D03B101F9E4 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mEFA16883E3A65609AE169271BE4C8883BFC02D22 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m4A66A3B213055D7307CFE8FEFA301961ABB4D1C8 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5F6104B7BABDD0AAEFC152E74ED645A50510E900 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mBFD05CEEFBE002B3A028DCB2B994626108D1DE63 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline void ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_fshared_inline)(__this, ___0_pointer, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_inline (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_inline (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_inline (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_inline (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_inline (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_inline (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
inline void Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_fshared_inline)(__this, ___0_pointer, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_inline (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool* UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline (bool* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352 (String_t* ___0_value, bool* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018 (String_t* ___0_s, double* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A (double* ___0_source, bool* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline (uint8_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_TryParse_mB1716E3B6714F20DF6C1FEDDC4A76AA78D5EA87B (String_t* ___0_s, uint8_t* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC (double* ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GCHandle_ThrowIfInvalid_m8BD7E31B383F657BB7B2512567A8296CFC16C931_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794 (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
inline void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_fshared)(__this, ___0_existingRegister, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
inline bool* UnsafeUtilityInternal_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3D9B5B2C16912294630A6DAD8928B960B7544E6_inline (bool* ___0_from, const RuntimeMethod* method)
{
	return ((  bool* (*) (bool*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
inline uint8_t* UnsafeUtilityInternal_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5A66C1A526E263EC6778FF3879A6E62C618542C4_inline (uint8_t* ___0_from, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (uint8_t*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
inline GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtilityInternal_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD43127D5F7AA6EB4B52E5C30BA53F29843E9E9A2_inline (intptr_t* ___0_from, const RuntimeMethod* method)
{
	return ((  GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* (*) (intptr_t*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElementWithStride_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m3F986AB138AE1CCFDD4623B8A74201B6C4E34A45 (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF L_6 = ___3_value;
		*(Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m0D538510931D731CE9075661C07B0DECAAC84B82 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Vector_1_t5ABB92D0A8A9F5B15E1C6E405ADBABA59736E56F_StaticInit);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_value;
		CHECKED_LOCAL_INIT(Vector_1_t5ABB92D0A8A9F5B15E1C6E405ADBABA59736E56F_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisIl2CppFullySharedGenericStruct_mD3B6243B6DD2F19C7DA294F642D66F699D797811_fshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Vector_1_t5ABB92D0A8A9F5B15E1C6E405ADBABA59736E56F_StaticInit);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_value;
		CHECKED_LOCAL_INIT(Vector_1_t5ABB92D0A8A9F5B15E1C6E405ADBABA59736E56F_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_Equals_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1E49423160D9D2F662A38FDEE88842FC26B67EBC (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Vector_1_t6B5A9226C7EC33CCA1D9ED26AD7E3FB392A69961_StaticInit);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_left;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t6B5A9226C7EC33CCA1D9ED26AD7E3FB392A69961_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_2;
		L_2 = Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 Vector_Equals_TisIl2CppFullySharedGenericStruct_m589C7C54FDBBA8A38CC7672C2E2734EB16BDFD24_fshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_left, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Vector_1_t6B5A9226C7EC33CCA1D9ED26AD7E3FB392A69961_StaticInit);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_left;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_1 = ___1_right;
		CHECKED_LOCAL_INIT(Vector_1_t6B5A9226C7EC33CCA1D9ED26AD7E3FB392A69961_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_2;
		L_2 = ((  Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* VisualElement_GetFirstAncestorOfType_TisIl2CppSharedGenericObject_m7C6ED65FFE99DF8B47874FB643028A43E8469A9A_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_0 = NULL;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppSharedGenericObject* V_2 = NULL;
	Il2CppSharedGenericObject* V_3 = NULL;
	{
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_0;
		L_0 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(__this, NULL);
		V_1 = L_0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1;
		L_1 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_1), NULL);
		V_0 = L_1;
		goto IL_0036;
	}

IL_0011:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = V_0;
		V_2 = ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		Il2CppSharedGenericObject* L_3 = V_2;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		Il2CppSharedGenericObject* L_4 = V_2;
		return L_4;
	}

IL_0027:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = V_0;
		NullCheck(L_5);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_6;
		L_6 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_5, NULL);
		V_1 = L_6;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7;
		L_7 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_1), NULL);
		V_0 = L_7;
	}

IL_0036:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = V_0;
		if (L_8)
		{
			goto IL_0011;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_3;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* VisualElement_GetFirstOfType_TisIl2CppSharedGenericObject_mF8E81976D2822D664FE506A2A3C2AA887528D03A_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		V_0 = ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0)));
		Il2CppSharedGenericObject* L_0 = V_0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Il2CppSharedGenericObject* L_1 = V_0;
		return L_1;
	}

IL_0016:
	{
		Il2CppSharedGenericObject* L_2;
		L_2 = VisualElement_GetFirstAncestorOfType_TisIl2CppSharedGenericObject_m7C6ED65FFE99DF8B47874FB643028A43E8469A9A(__this, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* VisualElementExtensions_WithClassList_TisIl2CppSharedGenericObject_mD90207478A8E360C27EAC72FB299DF76C89A3EE6_gshared (Il2CppSharedGenericObject* ___0_ele, String_t* ___1_className, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_ele;
		String_t* L_1 = ___1_className;
		NullCheck((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_0);
		VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_0, L_1, NULL);
		Il2CppSharedGenericObject* L_2 = ___0_ele;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualTreeAsset_DepthFirstTraversalOfType_TisIl2CppSharedGenericObject_m6045F40A223C3FEDB76F520E0291FE18D7D8B672_gshared (VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		U3CDepthFirstTraversalOfTypeU3Ed__99_1_t26F2FC440C1A38809D2A93AD6EDC31692C52ADCE* L_0 = (U3CDepthFirstTraversalOfTypeU3Ed__99_1_t26F2FC440C1A38809D2A93AD6EDC31692C52ADCE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		U3CDepthFirstTraversalOfTypeU3Ed__99_1__ctor_mC04B449C53D5A3050B3D1C5790A22C54BA470252(L_0, ((int32_t)-2), NULL);
		U3CDepthFirstTraversalOfTypeU3Ed__99_1_t26F2FC440C1A38809D2A93AD6EDC31692C52ADCE* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualTreeAsset_DepthFirstTraversalOfType_TisIl2CppFullySharedGenericAny_m4E9DE0F9C59873A760B778A4CB90119049C7C81D_fshared (VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		U3CDepthFirstTraversalOfTypeU3Ed__99_1_t1736E560DBBC162F4ED7108171E6B852E8344582* L_0 = (U3CDepthFirstTraversalOfTypeU3Ed__99_1_t1736E560DBBC162F4ED7108171E6B852E8344582*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (U3CDepthFirstTraversalOfTypeU3Ed__99_1_t1736E560DBBC162F4ED7108171E6B852E8344582*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, ((int32_t)-2), il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CDepthFirstTraversalOfTypeU3Ed__99_1_t1736E560DBBC162F4ED7108171E6B852E8344582* L_1 = L_0;
		NullCheck(L_1);
		il2cpp_codegen_write_field_data<VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB*, true>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),3), il2cpp_rgctx_offset(method->rgctx_data, 2), __this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* VisualTreeAsset_GetAsset_TisIl2CppSharedGenericObject_mBCA671CD97C153055DCDCB54451C45F285B1D49E_gshared (VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		String_t* L_0 = ___0_path;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = VisualTreeAsset_GetAsset_m2E54CBD277B885F9525568A2FD93D71B11999C71(__this, L_0, L_2, NULL);
		return ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_SetUpdater_TisIl2CppSharedGenericObject_mA5339F6D5C539ECBE20EFE88C6EBC5E2CFF08F36_gshared (VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9* __this, int32_t ___0_phase, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Il2CppSharedGenericObject* V_0 = NULL;
	Il2CppSharedGenericObject* V_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_0 = __this->___m_UpdaterArray;
		int32_t L_1 = ___0_phase;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C(L_0, L_1, NULL);
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0012;
		}
		G_B1_0 = L_3;
	}
	{
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0017:
	{
		Il2CppSharedGenericObject* L_4;
		L_4 = Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = L_4;
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_5 = __this->___m_Panel;
		NullCheck((RuntimeObject*)(V_1));
		InterfaceActionInvoker1< BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* >::Invoke(2, IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1), L_5);
		Il2CppSharedGenericObject* L_6 = V_1;
		V_0 = L_6;
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_7 = __this->___m_UpdaterArray;
		int32_t L_8 = ___0_phase;
		Il2CppSharedGenericObject* L_9 = V_0;
		NullCheck(L_7);
		UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11(L_7, L_8, (RuntimeObject*)L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_SetUpdater_TisIl2CppFullySharedGenericAny_m4EF351A8B23A4EE9E88C20E5398468F5AC304360_fshared (VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9* __this, int32_t ___0_phase, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	memset(V_0, 0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	memset(V_1, 0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_0 = __this->___m_UpdaterArray;
		int32_t L_1 = ___0_phase;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C(L_0, L_1, NULL);
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0012;
		}
		G_B1_0 = L_3;
	}
	{
		goto IL_0017;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, G_B2_0);
	}

IL_0017:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_1, L_4, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_5 = __this->___m_Panel;
		Il2CppConstrainedCallData L_7;
		Il2CppMethodPointer L_8 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)V_1, &L_7, L_6);
		typedef void ( *func_L_9)(void*,BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*,const RuntimeMethod*);
		((func_L_9)L_8)(L_7.thisPtr, L_5,L_7.method);
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		il2cpp_codegen_memcpy(V_0, L_10, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_11 = __this->___m_UpdaterArray;
		int32_t L_12 = ___0_phase;
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_13);
		NullCheck(L_11);
		UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11(L_11, L_12, (RuntimeObject*)L_14, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Volatile_Read_TisIl2CppSharedGenericObject_m80AA45DB17514248EE3F1C51892F22E546B63BC9_gshared (Il2CppSharedGenericObject** ___0_location, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = L_1->___Value;
		il2cpp_codegen_memory_barrier();
		Il2CppSharedGenericObject* L_3;
		L_3 = il2cpp_unsafe_as<Il2CppSharedGenericObject*>(L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisIl2CppSharedGenericObject_m5283DEB09B854082CE5EFC9E4C1B19F4D8E1A5CA_gshared (Il2CppSharedGenericObject** ___0_location, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		Il2CppSharedGenericObject* L_2 = ___1_value;
		il2cpp_codegen_memory_barrier();
		L_1->___Value = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value), (void*)(RuntimeObject*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	Type_t* V_0 = NULL;
	int32_t V_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	intptr_t V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	int32_t G_B25_0 = 0;
	int32_t G_B42_0 = 0;
	Type_t* G_B55_0 = NULL;
	String_t* G_B55_1 = NULL;
	Type_t* G_B54_0 = NULL;
	String_t* G_B54_1 = NULL;
	String_t* G_B56_0 = NULL;
	String_t* G_B56_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		CHECKED_LOCAL_INIT(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit,(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		if (!L_4)
		{
			goto IL_0136;
		}
	}
	{
		Type_t* L_5 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		intptr_t L_9 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10;
		L_10 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_9, NULL);
		return ((*(bool*)UnBox((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0039:
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		intptr_t L_15 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_16;
		L_16 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_15, NULL);
		return ((*(bool*)UnBox((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0057:
	{
		Type_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_007f;
		}
	}
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_21 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_21, NULL);
		return ((*(bool*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_007f:
	{
		Type_t* L_23 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_009d;
		}
	}
	{
		intptr_t L_27 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_28;
		L_28 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_27, NULL);
		return ((*(bool*)UnBox((RuntimeObject*)L_28, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_009d:
	{
		Type_t* L_29 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_00bb;
		}
	}
	{
		intptr_t L_33 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_34;
		L_34 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_33, NULL);
		return ((*(bool*)UnBox((RuntimeObject*)L_34, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00bb:
	{
		Type_t* L_35 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		bool L_38;
		L_38 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_35, L_37, NULL);
		if (!L_38)
		{
			goto IL_00d9;
		}
	}
	{
		intptr_t L_39 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_40;
		L_40 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_39, NULL);
		return ((*(bool*)UnBox((RuntimeObject*)L_40, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00d9:
	{
		Type_t* L_41 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_00f7;
		}
	}
	{
		intptr_t L_45 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46;
		L_46 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_45, NULL);
		return ((*(bool*)UnBox((RuntimeObject*)L_46, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00f7:
	{
		Type_t* L_47 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		bool L_50;
		L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
		if (!L_50)
		{
			goto IL_0115;
		}
	}
	{
		intptr_t L_51 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_52;
		L_52 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_51, NULL);
		return ((*(bool*)UnBox((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0115:
	{
		Type_t* L_53 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		if (!L_56)
		{
			goto IL_02b1;
		}
	}
	{
		intptr_t L_57 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58;
		L_58 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_57, NULL);
		return ((*(bool*)UnBox((RuntimeObject*)L_58, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0136:
	{
		Type_t* L_59 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_63 = ___0_array;
		int32_t L_64;
		L_64 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_63, NULL);
		V_1 = L_64;
		int32_t L_65 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_65);
		V_2 = L_66;
		int32_t L_67 = V_1;
		if (L_67)
		{
			goto IL_0163;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = V_2;
		return ((*(bool*)UnBox((RuntimeObject*)L_68, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0163:
	{
		int32_t L_69 = V_1;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_70 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_69) > ((int32_t)L_70)))
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_71 = V_1;
		G_B25_0 = L_71;
		goto IL_0173;
	}

IL_016e:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_72 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B25_0 = L_72;
	}

IL_0173:
	{
		V_3 = G_B25_0;
		int32_t L_73 = V_3;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_73, NULL);
		V_4 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c5:
			{
				{
					bool L_74 = V_4;
					if (!L_74)
					{
						goto IL_01d4;
					}
				}
				{
					intptr_t L_75;
					L_75 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_01d4:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_5 = 0;
				goto IL_01be_1;
			}

IL_0182_1:
			{
				int32_t L_76 = V_5;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_77 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_76%L_77)))
				{
					goto IL_01a3_1;
				}
			}
			{
				intptr_t L_78;
				L_78 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_4 = (bool)0;
				int32_t L_79 = V_3;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_79, NULL);
				V_4 = (bool)1;
			}

IL_01a3_1:
			{
				intptr_t L_80 = ___0_array;
				int32_t L_81 = V_5;
				intptr_t L_82;
				L_82 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_80, L_81, NULL);
				V_6 = L_82;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = V_2;
				int32_t L_84 = V_5;
				intptr_t L_85 = V_6;
				String_t* L_86;
				L_86 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_85, NULL);
				NullCheck(L_83);
				(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (String_t*)L_86);
				int32_t L_87 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_87, 1));
			}

IL_01be_1:
			{
				int32_t L_88 = V_5;
				int32_t L_89 = V_1;
				if ((((int32_t)L_88) < ((int32_t)L_89)))
				{
					goto IL_0182_1;
				}
			}
			{
				goto IL_01d5;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01d5:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90 = V_2;
		return ((*(bool*)UnBox((RuntimeObject*)L_90, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_01dc:
	{
		Type_t* L_91 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_028f;
		}
	}
	{
		intptr_t L_95 = ___0_array;
		int32_t L_96;
		L_96 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_95, NULL);
		V_7 = L_96;
		int32_t L_97 = V_7;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_98 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_97);
		V_8 = L_98;
		int32_t L_99 = V_7;
		if (L_99)
		{
			goto IL_020e;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_100 = V_8;
		return ((*(bool*)UnBox((RuntimeObject*)L_100, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_020e:
	{
		int32_t L_101 = V_7;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_102 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_101) > ((int32_t)L_102)))
		{
			goto IL_021b;
		}
	}
	{
		int32_t L_103 = V_7;
		G_B42_0 = L_103;
		goto IL_0220;
	}

IL_021b:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_104 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B42_0 = L_104;
	}

IL_0220:
	{
		V_9 = G_B42_0;
		int32_t L_105 = V_9;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_105, NULL);
		V_10 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0277:
			{
				{
					bool L_106 = V_10;
					if (!L_106)
					{
						goto IL_0286;
					}
				}
				{
					intptr_t L_107;
					L_107 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_0286:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_11 = 0;
				goto IL_026f_1;
			}

IL_0231_1:
			{
				int32_t L_108 = V_11;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_109 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_108%L_109)))
				{
					goto IL_0253_1;
				}
			}
			{
				intptr_t L_110;
				L_110 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_10 = (bool)0;
				int32_t L_111 = V_9;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_111, NULL);
				V_10 = (bool)1;
			}

IL_0253_1:
			{
				intptr_t L_112 = ___0_array;
				int32_t L_113 = V_11;
				intptr_t L_114;
				L_114 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_112, L_113, NULL);
				V_12 = L_114;
				AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_115 = V_8;
				int32_t L_116 = V_11;
				intptr_t L_117 = V_12;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_118 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_118, L_117, NULL);
				NullCheck(L_115);
				ArrayElementTypeCheck (L_115, L_118);
				(L_115)->SetAt(static_cast<il2cpp_array_size_t>(L_116), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_118);
				int32_t L_119 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_119, 1));
			}

IL_026f_1:
			{
				int32_t L_120 = V_11;
				int32_t L_121 = V_7;
				if ((((int32_t)L_120) < ((int32_t)L_121)))
				{
					goto IL_0231_1;
				}
			}
			{
				goto IL_0287;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0287:
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_122 = V_8;
		return ((*(bool*)UnBox((RuntimeObject*)L_122, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_028f:
	{
		Type_t* L_123 = V_0;
		Type_t* L_124 = L_123;
		if (L_124)
		{
			G_B55_0 = L_124;
			G_B55_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_029c;
		}
		G_B54_0 = L_124;
		G_B54_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
	}
	{
		G_B56_0 = ((String_t*)(NULL));
		G_B56_1 = G_B54_1;
		goto IL_02a1;
	}

IL_029c:
	{
		NullCheck(G_B55_0);
		String_t* L_125;
		L_125 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B55_0);
		G_B56_0 = L_125;
		G_B56_1 = G_B55_1;
	}

IL_02a1:
	{
		String_t* L_126;
		L_126 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B56_1, G_B56_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_127 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_127, L_126, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_127, method);
	}

IL_02b1:
	{
		il2cpp_codegen_initobj((&V_13), sizeof(bool));
		bool L_128 = V_13;
		return L_128;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	Type_t* V_0 = NULL;
	int32_t V_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	intptr_t V_12;
	memset((&V_12), 0, sizeof(V_12));
	Il2CppChar V_13 = 0x0;
	int32_t G_B25_0 = 0;
	int32_t G_B42_0 = 0;
	Type_t* G_B55_0 = NULL;
	String_t* G_B55_1 = NULL;
	Type_t* G_B54_0 = NULL;
	String_t* G_B54_1 = NULL;
	String_t* G_B56_0 = NULL;
	String_t* G_B56_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		CHECKED_LOCAL_INIT(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit,(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		if (!L_4)
		{
			goto IL_0136;
		}
	}
	{
		Type_t* L_5 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		intptr_t L_9 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10;
		L_10 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_9, NULL);
		return ((*(Il2CppChar*)UnBox((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0039:
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		intptr_t L_15 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_16;
		L_16 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_15, NULL);
		return ((*(Il2CppChar*)UnBox((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0057:
	{
		Type_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_007f;
		}
	}
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_21 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_21, NULL);
		return ((*(Il2CppChar*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_007f:
	{
		Type_t* L_23 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_009d;
		}
	}
	{
		intptr_t L_27 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_28;
		L_28 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_27, NULL);
		return ((*(Il2CppChar*)UnBox((RuntimeObject*)L_28, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_009d:
	{
		Type_t* L_29 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_00bb;
		}
	}
	{
		intptr_t L_33 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_34;
		L_34 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_33, NULL);
		return ((*(Il2CppChar*)UnBox((RuntimeObject*)L_34, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00bb:
	{
		Type_t* L_35 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		bool L_38;
		L_38 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_35, L_37, NULL);
		if (!L_38)
		{
			goto IL_00d9;
		}
	}
	{
		intptr_t L_39 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_40;
		L_40 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_39, NULL);
		return ((*(Il2CppChar*)UnBox((RuntimeObject*)L_40, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00d9:
	{
		Type_t* L_41 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_00f7;
		}
	}
	{
		intptr_t L_45 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46;
		L_46 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_45, NULL);
		return ((*(Il2CppChar*)UnBox((RuntimeObject*)L_46, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00f7:
	{
		Type_t* L_47 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		bool L_50;
		L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
		if (!L_50)
		{
			goto IL_0115;
		}
	}
	{
		intptr_t L_51 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_52;
		L_52 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_51, NULL);
		return ((*(Il2CppChar*)UnBox((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0115:
	{
		Type_t* L_53 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		if (!L_56)
		{
			goto IL_02b1;
		}
	}
	{
		intptr_t L_57 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58;
		L_58 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_57, NULL);
		return ((*(Il2CppChar*)UnBox((RuntimeObject*)L_58, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0136:
	{
		Type_t* L_59 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_63 = ___0_array;
		int32_t L_64;
		L_64 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_63, NULL);
		V_1 = L_64;
		int32_t L_65 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_65);
		V_2 = L_66;
		int32_t L_67 = V_1;
		if (L_67)
		{
			goto IL_0163;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = V_2;
		return ((*(Il2CppChar*)UnBox((RuntimeObject*)L_68, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0163:
	{
		int32_t L_69 = V_1;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_70 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_69) > ((int32_t)L_70)))
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_71 = V_1;
		G_B25_0 = L_71;
		goto IL_0173;
	}

IL_016e:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_72 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B25_0 = L_72;
	}

IL_0173:
	{
		V_3 = G_B25_0;
		int32_t L_73 = V_3;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_73, NULL);
		V_4 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c5:
			{
				{
					bool L_74 = V_4;
					if (!L_74)
					{
						goto IL_01d4;
					}
				}
				{
					intptr_t L_75;
					L_75 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_01d4:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_5 = 0;
				goto IL_01be_1;
			}

IL_0182_1:
			{
				int32_t L_76 = V_5;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_77 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_76%L_77)))
				{
					goto IL_01a3_1;
				}
			}
			{
				intptr_t L_78;
				L_78 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_4 = (bool)0;
				int32_t L_79 = V_3;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_79, NULL);
				V_4 = (bool)1;
			}

IL_01a3_1:
			{
				intptr_t L_80 = ___0_array;
				int32_t L_81 = V_5;
				intptr_t L_82;
				L_82 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_80, L_81, NULL);
				V_6 = L_82;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = V_2;
				int32_t L_84 = V_5;
				intptr_t L_85 = V_6;
				String_t* L_86;
				L_86 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_85, NULL);
				NullCheck(L_83);
				(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (String_t*)L_86);
				int32_t L_87 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_87, 1));
			}

IL_01be_1:
			{
				int32_t L_88 = V_5;
				int32_t L_89 = V_1;
				if ((((int32_t)L_88) < ((int32_t)L_89)))
				{
					goto IL_0182_1;
				}
			}
			{
				goto IL_01d5;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01d5:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90 = V_2;
		return ((*(Il2CppChar*)UnBox((RuntimeObject*)L_90, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_01dc:
	{
		Type_t* L_91 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_028f;
		}
	}
	{
		intptr_t L_95 = ___0_array;
		int32_t L_96;
		L_96 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_95, NULL);
		V_7 = L_96;
		int32_t L_97 = V_7;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_98 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_97);
		V_8 = L_98;
		int32_t L_99 = V_7;
		if (L_99)
		{
			goto IL_020e;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_100 = V_8;
		return ((*(Il2CppChar*)UnBox((RuntimeObject*)L_100, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_020e:
	{
		int32_t L_101 = V_7;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_102 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_101) > ((int32_t)L_102)))
		{
			goto IL_021b;
		}
	}
	{
		int32_t L_103 = V_7;
		G_B42_0 = L_103;
		goto IL_0220;
	}

IL_021b:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_104 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B42_0 = L_104;
	}

IL_0220:
	{
		V_9 = G_B42_0;
		int32_t L_105 = V_9;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_105, NULL);
		V_10 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0277:
			{
				{
					bool L_106 = V_10;
					if (!L_106)
					{
						goto IL_0286;
					}
				}
				{
					intptr_t L_107;
					L_107 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_0286:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_11 = 0;
				goto IL_026f_1;
			}

IL_0231_1:
			{
				int32_t L_108 = V_11;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_109 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_108%L_109)))
				{
					goto IL_0253_1;
				}
			}
			{
				intptr_t L_110;
				L_110 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_10 = (bool)0;
				int32_t L_111 = V_9;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_111, NULL);
				V_10 = (bool)1;
			}

IL_0253_1:
			{
				intptr_t L_112 = ___0_array;
				int32_t L_113 = V_11;
				intptr_t L_114;
				L_114 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_112, L_113, NULL);
				V_12 = L_114;
				AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_115 = V_8;
				int32_t L_116 = V_11;
				intptr_t L_117 = V_12;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_118 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_118, L_117, NULL);
				NullCheck(L_115);
				ArrayElementTypeCheck (L_115, L_118);
				(L_115)->SetAt(static_cast<il2cpp_array_size_t>(L_116), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_118);
				int32_t L_119 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_119, 1));
			}

IL_026f_1:
			{
				int32_t L_120 = V_11;
				int32_t L_121 = V_7;
				if ((((int32_t)L_120) < ((int32_t)L_121)))
				{
					goto IL_0231_1;
				}
			}
			{
				goto IL_0287;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0287:
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_122 = V_8;
		return ((*(Il2CppChar*)UnBox((RuntimeObject*)L_122, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_028f:
	{
		Type_t* L_123 = V_0;
		Type_t* L_124 = L_123;
		if (L_124)
		{
			G_B55_0 = L_124;
			G_B55_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_029c;
		}
		G_B54_0 = L_124;
		G_B54_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
	}
	{
		G_B56_0 = ((String_t*)(NULL));
		G_B56_1 = G_B54_1;
		goto IL_02a1;
	}

IL_029c:
	{
		NullCheck(G_B55_0);
		String_t* L_125;
		L_125 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B55_0);
		G_B56_0 = L_125;
		G_B56_1 = G_B55_1;
	}

IL_02a1:
	{
		String_t* L_126;
		L_126 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B56_1, G_B56_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_127 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_127, L_126, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_127, method);
	}

IL_02b1:
	{
		il2cpp_codegen_initobj((&V_13), sizeof(Il2CppChar));
		Il2CppChar L_128 = V_13;
		return L_128;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	Type_t* V_0 = NULL;
	int32_t V_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	intptr_t V_12;
	memset((&V_12), 0, sizeof(V_12));
	double V_13 = 0.0;
	int32_t G_B25_0 = 0;
	int32_t G_B42_0 = 0;
	Type_t* G_B55_0 = NULL;
	String_t* G_B55_1 = NULL;
	Type_t* G_B54_0 = NULL;
	String_t* G_B54_1 = NULL;
	String_t* G_B56_0 = NULL;
	String_t* G_B56_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		CHECKED_LOCAL_INIT(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit,(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		if (!L_4)
		{
			goto IL_0136;
		}
	}
	{
		Type_t* L_5 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		intptr_t L_9 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10;
		L_10 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_9, NULL);
		return ((*(double*)UnBox((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0039:
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		intptr_t L_15 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_16;
		L_16 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_15, NULL);
		return ((*(double*)UnBox((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0057:
	{
		Type_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_007f;
		}
	}
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_21 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_21, NULL);
		return ((*(double*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_007f:
	{
		Type_t* L_23 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_009d;
		}
	}
	{
		intptr_t L_27 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_28;
		L_28 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_27, NULL);
		return ((*(double*)UnBox((RuntimeObject*)L_28, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_009d:
	{
		Type_t* L_29 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_00bb;
		}
	}
	{
		intptr_t L_33 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_34;
		L_34 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_33, NULL);
		return ((*(double*)UnBox((RuntimeObject*)L_34, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00bb:
	{
		Type_t* L_35 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		bool L_38;
		L_38 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_35, L_37, NULL);
		if (!L_38)
		{
			goto IL_00d9;
		}
	}
	{
		intptr_t L_39 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_40;
		L_40 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_39, NULL);
		return ((*(double*)UnBox((RuntimeObject*)L_40, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00d9:
	{
		Type_t* L_41 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_00f7;
		}
	}
	{
		intptr_t L_45 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46;
		L_46 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_45, NULL);
		return ((*(double*)UnBox((RuntimeObject*)L_46, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00f7:
	{
		Type_t* L_47 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		bool L_50;
		L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
		if (!L_50)
		{
			goto IL_0115;
		}
	}
	{
		intptr_t L_51 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_52;
		L_52 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_51, NULL);
		return ((*(double*)UnBox((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0115:
	{
		Type_t* L_53 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		if (!L_56)
		{
			goto IL_02b1;
		}
	}
	{
		intptr_t L_57 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58;
		L_58 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_57, NULL);
		return ((*(double*)UnBox((RuntimeObject*)L_58, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0136:
	{
		Type_t* L_59 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_63 = ___0_array;
		int32_t L_64;
		L_64 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_63, NULL);
		V_1 = L_64;
		int32_t L_65 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_65);
		V_2 = L_66;
		int32_t L_67 = V_1;
		if (L_67)
		{
			goto IL_0163;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = V_2;
		return ((*(double*)UnBox((RuntimeObject*)L_68, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0163:
	{
		int32_t L_69 = V_1;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_70 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_69) > ((int32_t)L_70)))
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_71 = V_1;
		G_B25_0 = L_71;
		goto IL_0173;
	}

IL_016e:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_72 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B25_0 = L_72;
	}

IL_0173:
	{
		V_3 = G_B25_0;
		int32_t L_73 = V_3;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_73, NULL);
		V_4 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c5:
			{
				{
					bool L_74 = V_4;
					if (!L_74)
					{
						goto IL_01d4;
					}
				}
				{
					intptr_t L_75;
					L_75 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_01d4:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_5 = 0;
				goto IL_01be_1;
			}

IL_0182_1:
			{
				int32_t L_76 = V_5;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_77 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_76%L_77)))
				{
					goto IL_01a3_1;
				}
			}
			{
				intptr_t L_78;
				L_78 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_4 = (bool)0;
				int32_t L_79 = V_3;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_79, NULL);
				V_4 = (bool)1;
			}

IL_01a3_1:
			{
				intptr_t L_80 = ___0_array;
				int32_t L_81 = V_5;
				intptr_t L_82;
				L_82 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_80, L_81, NULL);
				V_6 = L_82;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = V_2;
				int32_t L_84 = V_5;
				intptr_t L_85 = V_6;
				String_t* L_86;
				L_86 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_85, NULL);
				NullCheck(L_83);
				(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (String_t*)L_86);
				int32_t L_87 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_87, 1));
			}

IL_01be_1:
			{
				int32_t L_88 = V_5;
				int32_t L_89 = V_1;
				if ((((int32_t)L_88) < ((int32_t)L_89)))
				{
					goto IL_0182_1;
				}
			}
			{
				goto IL_01d5;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01d5:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90 = V_2;
		return ((*(double*)UnBox((RuntimeObject*)L_90, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_01dc:
	{
		Type_t* L_91 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_028f;
		}
	}
	{
		intptr_t L_95 = ___0_array;
		int32_t L_96;
		L_96 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_95, NULL);
		V_7 = L_96;
		int32_t L_97 = V_7;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_98 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_97);
		V_8 = L_98;
		int32_t L_99 = V_7;
		if (L_99)
		{
			goto IL_020e;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_100 = V_8;
		return ((*(double*)UnBox((RuntimeObject*)L_100, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_020e:
	{
		int32_t L_101 = V_7;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_102 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_101) > ((int32_t)L_102)))
		{
			goto IL_021b;
		}
	}
	{
		int32_t L_103 = V_7;
		G_B42_0 = L_103;
		goto IL_0220;
	}

IL_021b:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_104 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B42_0 = L_104;
	}

IL_0220:
	{
		V_9 = G_B42_0;
		int32_t L_105 = V_9;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_105, NULL);
		V_10 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0277:
			{
				{
					bool L_106 = V_10;
					if (!L_106)
					{
						goto IL_0286;
					}
				}
				{
					intptr_t L_107;
					L_107 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_0286:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_11 = 0;
				goto IL_026f_1;
			}

IL_0231_1:
			{
				int32_t L_108 = V_11;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_109 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_108%L_109)))
				{
					goto IL_0253_1;
				}
			}
			{
				intptr_t L_110;
				L_110 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_10 = (bool)0;
				int32_t L_111 = V_9;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_111, NULL);
				V_10 = (bool)1;
			}

IL_0253_1:
			{
				intptr_t L_112 = ___0_array;
				int32_t L_113 = V_11;
				intptr_t L_114;
				L_114 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_112, L_113, NULL);
				V_12 = L_114;
				AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_115 = V_8;
				int32_t L_116 = V_11;
				intptr_t L_117 = V_12;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_118 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_118, L_117, NULL);
				NullCheck(L_115);
				ArrayElementTypeCheck (L_115, L_118);
				(L_115)->SetAt(static_cast<il2cpp_array_size_t>(L_116), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_118);
				int32_t L_119 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_119, 1));
			}

IL_026f_1:
			{
				int32_t L_120 = V_11;
				int32_t L_121 = V_7;
				if ((((int32_t)L_120) < ((int32_t)L_121)))
				{
					goto IL_0231_1;
				}
			}
			{
				goto IL_0287;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0287:
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_122 = V_8;
		return ((*(double*)UnBox((RuntimeObject*)L_122, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_028f:
	{
		Type_t* L_123 = V_0;
		Type_t* L_124 = L_123;
		if (L_124)
		{
			G_B55_0 = L_124;
			G_B55_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_029c;
		}
		G_B54_0 = L_124;
		G_B54_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
	}
	{
		G_B56_0 = ((String_t*)(NULL));
		G_B56_1 = G_B54_1;
		goto IL_02a1;
	}

IL_029c:
	{
		NullCheck(G_B55_0);
		String_t* L_125;
		L_125 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B55_0);
		G_B56_0 = L_125;
		G_B56_1 = G_B55_1;
	}

IL_02a1:
	{
		String_t* L_126;
		L_126 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B56_1, G_B56_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_127 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_127, L_126, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_127, method);
	}

IL_02b1:
	{
		il2cpp_codegen_initobj((&V_13), sizeof(double));
		double L_128 = V_13;
		return L_128;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	Type_t* V_0 = NULL;
	int32_t V_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	intptr_t V_12;
	memset((&V_12), 0, sizeof(V_12));
	int16_t V_13 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B42_0 = 0;
	Type_t* G_B55_0 = NULL;
	String_t* G_B55_1 = NULL;
	Type_t* G_B54_0 = NULL;
	String_t* G_B54_1 = NULL;
	String_t* G_B56_0 = NULL;
	String_t* G_B56_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		CHECKED_LOCAL_INIT(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit,(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		if (!L_4)
		{
			goto IL_0136;
		}
	}
	{
		Type_t* L_5 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		intptr_t L_9 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10;
		L_10 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_9, NULL);
		return ((*(int16_t*)UnBox((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0039:
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		intptr_t L_15 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_16;
		L_16 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_15, NULL);
		return ((*(int16_t*)UnBox((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0057:
	{
		Type_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_007f;
		}
	}
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_21 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_21, NULL);
		return ((*(int16_t*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_007f:
	{
		Type_t* L_23 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_009d;
		}
	}
	{
		intptr_t L_27 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_28;
		L_28 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_27, NULL);
		return ((*(int16_t*)UnBox((RuntimeObject*)L_28, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_009d:
	{
		Type_t* L_29 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_00bb;
		}
	}
	{
		intptr_t L_33 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_34;
		L_34 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_33, NULL);
		return ((*(int16_t*)UnBox((RuntimeObject*)L_34, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00bb:
	{
		Type_t* L_35 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		bool L_38;
		L_38 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_35, L_37, NULL);
		if (!L_38)
		{
			goto IL_00d9;
		}
	}
	{
		intptr_t L_39 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_40;
		L_40 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_39, NULL);
		return ((*(int16_t*)UnBox((RuntimeObject*)L_40, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00d9:
	{
		Type_t* L_41 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_00f7;
		}
	}
	{
		intptr_t L_45 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46;
		L_46 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_45, NULL);
		return ((*(int16_t*)UnBox((RuntimeObject*)L_46, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00f7:
	{
		Type_t* L_47 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		bool L_50;
		L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
		if (!L_50)
		{
			goto IL_0115;
		}
	}
	{
		intptr_t L_51 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_52;
		L_52 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_51, NULL);
		return ((*(int16_t*)UnBox((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0115:
	{
		Type_t* L_53 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		if (!L_56)
		{
			goto IL_02b1;
		}
	}
	{
		intptr_t L_57 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58;
		L_58 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_57, NULL);
		return ((*(int16_t*)UnBox((RuntimeObject*)L_58, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0136:
	{
		Type_t* L_59 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_63 = ___0_array;
		int32_t L_64;
		L_64 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_63, NULL);
		V_1 = L_64;
		int32_t L_65 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_65);
		V_2 = L_66;
		int32_t L_67 = V_1;
		if (L_67)
		{
			goto IL_0163;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = V_2;
		return ((*(int16_t*)UnBox((RuntimeObject*)L_68, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0163:
	{
		int32_t L_69 = V_1;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_70 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_69) > ((int32_t)L_70)))
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_71 = V_1;
		G_B25_0 = L_71;
		goto IL_0173;
	}

IL_016e:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_72 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B25_0 = L_72;
	}

IL_0173:
	{
		V_3 = G_B25_0;
		int32_t L_73 = V_3;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_73, NULL);
		V_4 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c5:
			{
				{
					bool L_74 = V_4;
					if (!L_74)
					{
						goto IL_01d4;
					}
				}
				{
					intptr_t L_75;
					L_75 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_01d4:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_5 = 0;
				goto IL_01be_1;
			}

IL_0182_1:
			{
				int32_t L_76 = V_5;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_77 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_76%L_77)))
				{
					goto IL_01a3_1;
				}
			}
			{
				intptr_t L_78;
				L_78 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_4 = (bool)0;
				int32_t L_79 = V_3;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_79, NULL);
				V_4 = (bool)1;
			}

IL_01a3_1:
			{
				intptr_t L_80 = ___0_array;
				int32_t L_81 = V_5;
				intptr_t L_82;
				L_82 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_80, L_81, NULL);
				V_6 = L_82;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = V_2;
				int32_t L_84 = V_5;
				intptr_t L_85 = V_6;
				String_t* L_86;
				L_86 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_85, NULL);
				NullCheck(L_83);
				(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (String_t*)L_86);
				int32_t L_87 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_87, 1));
			}

IL_01be_1:
			{
				int32_t L_88 = V_5;
				int32_t L_89 = V_1;
				if ((((int32_t)L_88) < ((int32_t)L_89)))
				{
					goto IL_0182_1;
				}
			}
			{
				goto IL_01d5;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01d5:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90 = V_2;
		return ((*(int16_t*)UnBox((RuntimeObject*)L_90, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_01dc:
	{
		Type_t* L_91 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_028f;
		}
	}
	{
		intptr_t L_95 = ___0_array;
		int32_t L_96;
		L_96 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_95, NULL);
		V_7 = L_96;
		int32_t L_97 = V_7;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_98 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_97);
		V_8 = L_98;
		int32_t L_99 = V_7;
		if (L_99)
		{
			goto IL_020e;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_100 = V_8;
		return ((*(int16_t*)UnBox((RuntimeObject*)L_100, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_020e:
	{
		int32_t L_101 = V_7;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_102 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_101) > ((int32_t)L_102)))
		{
			goto IL_021b;
		}
	}
	{
		int32_t L_103 = V_7;
		G_B42_0 = L_103;
		goto IL_0220;
	}

IL_021b:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_104 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B42_0 = L_104;
	}

IL_0220:
	{
		V_9 = G_B42_0;
		int32_t L_105 = V_9;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_105, NULL);
		V_10 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0277:
			{
				{
					bool L_106 = V_10;
					if (!L_106)
					{
						goto IL_0286;
					}
				}
				{
					intptr_t L_107;
					L_107 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_0286:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_11 = 0;
				goto IL_026f_1;
			}

IL_0231_1:
			{
				int32_t L_108 = V_11;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_109 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_108%L_109)))
				{
					goto IL_0253_1;
				}
			}
			{
				intptr_t L_110;
				L_110 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_10 = (bool)0;
				int32_t L_111 = V_9;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_111, NULL);
				V_10 = (bool)1;
			}

IL_0253_1:
			{
				intptr_t L_112 = ___0_array;
				int32_t L_113 = V_11;
				intptr_t L_114;
				L_114 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_112, L_113, NULL);
				V_12 = L_114;
				AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_115 = V_8;
				int32_t L_116 = V_11;
				intptr_t L_117 = V_12;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_118 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_118, L_117, NULL);
				NullCheck(L_115);
				ArrayElementTypeCheck (L_115, L_118);
				(L_115)->SetAt(static_cast<il2cpp_array_size_t>(L_116), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_118);
				int32_t L_119 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_119, 1));
			}

IL_026f_1:
			{
				int32_t L_120 = V_11;
				int32_t L_121 = V_7;
				if ((((int32_t)L_120) < ((int32_t)L_121)))
				{
					goto IL_0231_1;
				}
			}
			{
				goto IL_0287;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0287:
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_122 = V_8;
		return ((*(int16_t*)UnBox((RuntimeObject*)L_122, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_028f:
	{
		Type_t* L_123 = V_0;
		Type_t* L_124 = L_123;
		if (L_124)
		{
			G_B55_0 = L_124;
			G_B55_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_029c;
		}
		G_B54_0 = L_124;
		G_B54_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
	}
	{
		G_B56_0 = ((String_t*)(NULL));
		G_B56_1 = G_B54_1;
		goto IL_02a1;
	}

IL_029c:
	{
		NullCheck(G_B55_0);
		String_t* L_125;
		L_125 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B55_0);
		G_B56_0 = L_125;
		G_B56_1 = G_B55_1;
	}

IL_02a1:
	{
		String_t* L_126;
		L_126 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B56_1, G_B56_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_127 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_127, L_126, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_127, method);
	}

IL_02b1:
	{
		il2cpp_codegen_initobj((&V_13), sizeof(int16_t));
		int16_t L_128 = V_13;
		return L_128;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	Type_t* V_0 = NULL;
	int32_t V_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	intptr_t V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B42_0 = 0;
	Type_t* G_B55_0 = NULL;
	String_t* G_B55_1 = NULL;
	Type_t* G_B54_0 = NULL;
	String_t* G_B54_1 = NULL;
	String_t* G_B56_0 = NULL;
	String_t* G_B56_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		CHECKED_LOCAL_INIT(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit,(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		if (!L_4)
		{
			goto IL_0136;
		}
	}
	{
		Type_t* L_5 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		intptr_t L_9 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10;
		L_10 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_9, NULL);
		return ((*(int32_t*)UnBox((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0039:
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		intptr_t L_15 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_16;
		L_16 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_15, NULL);
		return ((*(int32_t*)UnBox((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0057:
	{
		Type_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_007f;
		}
	}
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_21 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_21, NULL);
		return ((*(int32_t*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_007f:
	{
		Type_t* L_23 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_009d;
		}
	}
	{
		intptr_t L_27 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_28;
		L_28 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_27, NULL);
		return ((*(int32_t*)UnBox((RuntimeObject*)L_28, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_009d:
	{
		Type_t* L_29 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_00bb;
		}
	}
	{
		intptr_t L_33 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_34;
		L_34 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_33, NULL);
		return ((*(int32_t*)UnBox((RuntimeObject*)L_34, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00bb:
	{
		Type_t* L_35 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		bool L_38;
		L_38 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_35, L_37, NULL);
		if (!L_38)
		{
			goto IL_00d9;
		}
	}
	{
		intptr_t L_39 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_40;
		L_40 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_39, NULL);
		return ((*(int32_t*)UnBox((RuntimeObject*)L_40, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00d9:
	{
		Type_t* L_41 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_00f7;
		}
	}
	{
		intptr_t L_45 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46;
		L_46 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_45, NULL);
		return ((*(int32_t*)UnBox((RuntimeObject*)L_46, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00f7:
	{
		Type_t* L_47 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		bool L_50;
		L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
		if (!L_50)
		{
			goto IL_0115;
		}
	}
	{
		intptr_t L_51 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_52;
		L_52 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_51, NULL);
		return ((*(int32_t*)UnBox((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0115:
	{
		Type_t* L_53 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		if (!L_56)
		{
			goto IL_02b1;
		}
	}
	{
		intptr_t L_57 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58;
		L_58 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_57, NULL);
		return ((*(int32_t*)UnBox((RuntimeObject*)L_58, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0136:
	{
		Type_t* L_59 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_63 = ___0_array;
		int32_t L_64;
		L_64 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_63, NULL);
		V_1 = L_64;
		int32_t L_65 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_65);
		V_2 = L_66;
		int32_t L_67 = V_1;
		if (L_67)
		{
			goto IL_0163;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = V_2;
		return ((*(int32_t*)UnBox((RuntimeObject*)L_68, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0163:
	{
		int32_t L_69 = V_1;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_70 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_69) > ((int32_t)L_70)))
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_71 = V_1;
		G_B25_0 = L_71;
		goto IL_0173;
	}

IL_016e:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_72 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B25_0 = L_72;
	}

IL_0173:
	{
		V_3 = G_B25_0;
		int32_t L_73 = V_3;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_73, NULL);
		V_4 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c5:
			{
				{
					bool L_74 = V_4;
					if (!L_74)
					{
						goto IL_01d4;
					}
				}
				{
					intptr_t L_75;
					L_75 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_01d4:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_5 = 0;
				goto IL_01be_1;
			}

IL_0182_1:
			{
				int32_t L_76 = V_5;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_77 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_76%L_77)))
				{
					goto IL_01a3_1;
				}
			}
			{
				intptr_t L_78;
				L_78 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_4 = (bool)0;
				int32_t L_79 = V_3;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_79, NULL);
				V_4 = (bool)1;
			}

IL_01a3_1:
			{
				intptr_t L_80 = ___0_array;
				int32_t L_81 = V_5;
				intptr_t L_82;
				L_82 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_80, L_81, NULL);
				V_6 = L_82;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = V_2;
				int32_t L_84 = V_5;
				intptr_t L_85 = V_6;
				String_t* L_86;
				L_86 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_85, NULL);
				NullCheck(L_83);
				(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (String_t*)L_86);
				int32_t L_87 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_87, 1));
			}

IL_01be_1:
			{
				int32_t L_88 = V_5;
				int32_t L_89 = V_1;
				if ((((int32_t)L_88) < ((int32_t)L_89)))
				{
					goto IL_0182_1;
				}
			}
			{
				goto IL_01d5;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01d5:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90 = V_2;
		return ((*(int32_t*)UnBox((RuntimeObject*)L_90, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_01dc:
	{
		Type_t* L_91 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_028f;
		}
	}
	{
		intptr_t L_95 = ___0_array;
		int32_t L_96;
		L_96 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_95, NULL);
		V_7 = L_96;
		int32_t L_97 = V_7;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_98 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_97);
		V_8 = L_98;
		int32_t L_99 = V_7;
		if (L_99)
		{
			goto IL_020e;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_100 = V_8;
		return ((*(int32_t*)UnBox((RuntimeObject*)L_100, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_020e:
	{
		int32_t L_101 = V_7;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_102 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_101) > ((int32_t)L_102)))
		{
			goto IL_021b;
		}
	}
	{
		int32_t L_103 = V_7;
		G_B42_0 = L_103;
		goto IL_0220;
	}

IL_021b:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_104 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B42_0 = L_104;
	}

IL_0220:
	{
		V_9 = G_B42_0;
		int32_t L_105 = V_9;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_105, NULL);
		V_10 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0277:
			{
				{
					bool L_106 = V_10;
					if (!L_106)
					{
						goto IL_0286;
					}
				}
				{
					intptr_t L_107;
					L_107 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_0286:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_11 = 0;
				goto IL_026f_1;
			}

IL_0231_1:
			{
				int32_t L_108 = V_11;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_109 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_108%L_109)))
				{
					goto IL_0253_1;
				}
			}
			{
				intptr_t L_110;
				L_110 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_10 = (bool)0;
				int32_t L_111 = V_9;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_111, NULL);
				V_10 = (bool)1;
			}

IL_0253_1:
			{
				intptr_t L_112 = ___0_array;
				int32_t L_113 = V_11;
				intptr_t L_114;
				L_114 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_112, L_113, NULL);
				V_12 = L_114;
				AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_115 = V_8;
				int32_t L_116 = V_11;
				intptr_t L_117 = V_12;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_118 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_118, L_117, NULL);
				NullCheck(L_115);
				ArrayElementTypeCheck (L_115, L_118);
				(L_115)->SetAt(static_cast<il2cpp_array_size_t>(L_116), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_118);
				int32_t L_119 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_119, 1));
			}

IL_026f_1:
			{
				int32_t L_120 = V_11;
				int32_t L_121 = V_7;
				if ((((int32_t)L_120) < ((int32_t)L_121)))
				{
					goto IL_0231_1;
				}
			}
			{
				goto IL_0287;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0287:
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_122 = V_8;
		return ((*(int32_t*)UnBox((RuntimeObject*)L_122, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_028f:
	{
		Type_t* L_123 = V_0;
		Type_t* L_124 = L_123;
		if (L_124)
		{
			G_B55_0 = L_124;
			G_B55_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_029c;
		}
		G_B54_0 = L_124;
		G_B54_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
	}
	{
		G_B56_0 = ((String_t*)(NULL));
		G_B56_1 = G_B54_1;
		goto IL_02a1;
	}

IL_029c:
	{
		NullCheck(G_B55_0);
		String_t* L_125;
		L_125 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B55_0);
		G_B56_0 = L_125;
		G_B56_1 = G_B55_1;
	}

IL_02a1:
	{
		String_t* L_126;
		L_126 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B56_1, G_B56_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_127 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_127, L_126, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_127, method);
	}

IL_02b1:
	{
		il2cpp_codegen_initobj((&V_13), sizeof(int32_t));
		int32_t L_128 = V_13;
		return L_128;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	Type_t* V_0 = NULL;
	int32_t V_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	intptr_t V_12;
	memset((&V_12), 0, sizeof(V_12));
	int64_t V_13 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B42_0 = 0;
	Type_t* G_B55_0 = NULL;
	String_t* G_B55_1 = NULL;
	Type_t* G_B54_0 = NULL;
	String_t* G_B54_1 = NULL;
	String_t* G_B56_0 = NULL;
	String_t* G_B56_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		CHECKED_LOCAL_INIT(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit,(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		if (!L_4)
		{
			goto IL_0136;
		}
	}
	{
		Type_t* L_5 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		intptr_t L_9 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10;
		L_10 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_9, NULL);
		return ((*(int64_t*)UnBox((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0039:
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		intptr_t L_15 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_16;
		L_16 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_15, NULL);
		return ((*(int64_t*)UnBox((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0057:
	{
		Type_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_007f;
		}
	}
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_21 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_21, NULL);
		return ((*(int64_t*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_007f:
	{
		Type_t* L_23 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_009d;
		}
	}
	{
		intptr_t L_27 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_28;
		L_28 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_27, NULL);
		return ((*(int64_t*)UnBox((RuntimeObject*)L_28, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_009d:
	{
		Type_t* L_29 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_00bb;
		}
	}
	{
		intptr_t L_33 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_34;
		L_34 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_33, NULL);
		return ((*(int64_t*)UnBox((RuntimeObject*)L_34, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00bb:
	{
		Type_t* L_35 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		bool L_38;
		L_38 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_35, L_37, NULL);
		if (!L_38)
		{
			goto IL_00d9;
		}
	}
	{
		intptr_t L_39 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_40;
		L_40 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_39, NULL);
		return ((*(int64_t*)UnBox((RuntimeObject*)L_40, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00d9:
	{
		Type_t* L_41 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_00f7;
		}
	}
	{
		intptr_t L_45 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46;
		L_46 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_45, NULL);
		return ((*(int64_t*)UnBox((RuntimeObject*)L_46, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00f7:
	{
		Type_t* L_47 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		bool L_50;
		L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
		if (!L_50)
		{
			goto IL_0115;
		}
	}
	{
		intptr_t L_51 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_52;
		L_52 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_51, NULL);
		return ((*(int64_t*)UnBox((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0115:
	{
		Type_t* L_53 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		if (!L_56)
		{
			goto IL_02b1;
		}
	}
	{
		intptr_t L_57 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58;
		L_58 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_57, NULL);
		return ((*(int64_t*)UnBox((RuntimeObject*)L_58, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0136:
	{
		Type_t* L_59 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_63 = ___0_array;
		int32_t L_64;
		L_64 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_63, NULL);
		V_1 = L_64;
		int32_t L_65 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_65);
		V_2 = L_66;
		int32_t L_67 = V_1;
		if (L_67)
		{
			goto IL_0163;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = V_2;
		return ((*(int64_t*)UnBox((RuntimeObject*)L_68, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0163:
	{
		int32_t L_69 = V_1;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_70 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_69) > ((int32_t)L_70)))
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_71 = V_1;
		G_B25_0 = L_71;
		goto IL_0173;
	}

IL_016e:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_72 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B25_0 = L_72;
	}

IL_0173:
	{
		V_3 = G_B25_0;
		int32_t L_73 = V_3;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_73, NULL);
		V_4 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c5:
			{
				{
					bool L_74 = V_4;
					if (!L_74)
					{
						goto IL_01d4;
					}
				}
				{
					intptr_t L_75;
					L_75 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_01d4:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_5 = 0;
				goto IL_01be_1;
			}

IL_0182_1:
			{
				int32_t L_76 = V_5;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_77 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_76%L_77)))
				{
					goto IL_01a3_1;
				}
			}
			{
				intptr_t L_78;
				L_78 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_4 = (bool)0;
				int32_t L_79 = V_3;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_79, NULL);
				V_4 = (bool)1;
			}

IL_01a3_1:
			{
				intptr_t L_80 = ___0_array;
				int32_t L_81 = V_5;
				intptr_t L_82;
				L_82 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_80, L_81, NULL);
				V_6 = L_82;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = V_2;
				int32_t L_84 = V_5;
				intptr_t L_85 = V_6;
				String_t* L_86;
				L_86 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_85, NULL);
				NullCheck(L_83);
				(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (String_t*)L_86);
				int32_t L_87 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_87, 1));
			}

IL_01be_1:
			{
				int32_t L_88 = V_5;
				int32_t L_89 = V_1;
				if ((((int32_t)L_88) < ((int32_t)L_89)))
				{
					goto IL_0182_1;
				}
			}
			{
				goto IL_01d5;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01d5:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90 = V_2;
		return ((*(int64_t*)UnBox((RuntimeObject*)L_90, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_01dc:
	{
		Type_t* L_91 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_028f;
		}
	}
	{
		intptr_t L_95 = ___0_array;
		int32_t L_96;
		L_96 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_95, NULL);
		V_7 = L_96;
		int32_t L_97 = V_7;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_98 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_97);
		V_8 = L_98;
		int32_t L_99 = V_7;
		if (L_99)
		{
			goto IL_020e;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_100 = V_8;
		return ((*(int64_t*)UnBox((RuntimeObject*)L_100, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_020e:
	{
		int32_t L_101 = V_7;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_102 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_101) > ((int32_t)L_102)))
		{
			goto IL_021b;
		}
	}
	{
		int32_t L_103 = V_7;
		G_B42_0 = L_103;
		goto IL_0220;
	}

IL_021b:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_104 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B42_0 = L_104;
	}

IL_0220:
	{
		V_9 = G_B42_0;
		int32_t L_105 = V_9;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_105, NULL);
		V_10 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0277:
			{
				{
					bool L_106 = V_10;
					if (!L_106)
					{
						goto IL_0286;
					}
				}
				{
					intptr_t L_107;
					L_107 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_0286:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_11 = 0;
				goto IL_026f_1;
			}

IL_0231_1:
			{
				int32_t L_108 = V_11;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_109 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_108%L_109)))
				{
					goto IL_0253_1;
				}
			}
			{
				intptr_t L_110;
				L_110 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_10 = (bool)0;
				int32_t L_111 = V_9;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_111, NULL);
				V_10 = (bool)1;
			}

IL_0253_1:
			{
				intptr_t L_112 = ___0_array;
				int32_t L_113 = V_11;
				intptr_t L_114;
				L_114 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_112, L_113, NULL);
				V_12 = L_114;
				AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_115 = V_8;
				int32_t L_116 = V_11;
				intptr_t L_117 = V_12;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_118 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_118, L_117, NULL);
				NullCheck(L_115);
				ArrayElementTypeCheck (L_115, L_118);
				(L_115)->SetAt(static_cast<il2cpp_array_size_t>(L_116), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_118);
				int32_t L_119 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_119, 1));
			}

IL_026f_1:
			{
				int32_t L_120 = V_11;
				int32_t L_121 = V_7;
				if ((((int32_t)L_120) < ((int32_t)L_121)))
				{
					goto IL_0231_1;
				}
			}
			{
				goto IL_0287;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0287:
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_122 = V_8;
		return ((*(int64_t*)UnBox((RuntimeObject*)L_122, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_028f:
	{
		Type_t* L_123 = V_0;
		Type_t* L_124 = L_123;
		if (L_124)
		{
			G_B55_0 = L_124;
			G_B55_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_029c;
		}
		G_B54_0 = L_124;
		G_B54_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
	}
	{
		G_B56_0 = ((String_t*)(NULL));
		G_B56_1 = G_B54_1;
		goto IL_02a1;
	}

IL_029c:
	{
		NullCheck(G_B55_0);
		String_t* L_125;
		L_125 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B55_0);
		G_B56_0 = L_125;
		G_B56_1 = G_B55_1;
	}

IL_02a1:
	{
		String_t* L_126;
		L_126 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B56_1, G_B56_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_127 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_127, L_126, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_127, method);
	}

IL_02b1:
	{
		il2cpp_codegen_initobj((&V_13), sizeof(int64_t));
		int64_t L_128 = V_13;
		return L_128;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	Type_t* V_0 = NULL;
	int32_t V_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	intptr_t V_12;
	memset((&V_12), 0, sizeof(V_12));
	int8_t V_13 = 0x0;
	int32_t G_B25_0 = 0;
	int32_t G_B42_0 = 0;
	Type_t* G_B55_0 = NULL;
	String_t* G_B55_1 = NULL;
	Type_t* G_B54_0 = NULL;
	String_t* G_B54_1 = NULL;
	String_t* G_B56_0 = NULL;
	String_t* G_B56_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		CHECKED_LOCAL_INIT(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit,(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		if (!L_4)
		{
			goto IL_0136;
		}
	}
	{
		Type_t* L_5 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		intptr_t L_9 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10;
		L_10 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_9, NULL);
		return ((*(int8_t*)UnBox((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0039:
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		intptr_t L_15 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_16;
		L_16 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_15, NULL);
		return ((*(int8_t*)UnBox((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0057:
	{
		Type_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_007f;
		}
	}
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_21 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_21, NULL);
		return ((*(int8_t*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_007f:
	{
		Type_t* L_23 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_009d;
		}
	}
	{
		intptr_t L_27 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_28;
		L_28 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_27, NULL);
		return ((*(int8_t*)UnBox((RuntimeObject*)L_28, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_009d:
	{
		Type_t* L_29 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_00bb;
		}
	}
	{
		intptr_t L_33 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_34;
		L_34 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_33, NULL);
		return ((*(int8_t*)UnBox((RuntimeObject*)L_34, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00bb:
	{
		Type_t* L_35 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		bool L_38;
		L_38 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_35, L_37, NULL);
		if (!L_38)
		{
			goto IL_00d9;
		}
	}
	{
		intptr_t L_39 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_40;
		L_40 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_39, NULL);
		return ((*(int8_t*)UnBox((RuntimeObject*)L_40, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00d9:
	{
		Type_t* L_41 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_00f7;
		}
	}
	{
		intptr_t L_45 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46;
		L_46 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_45, NULL);
		return ((*(int8_t*)UnBox((RuntimeObject*)L_46, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00f7:
	{
		Type_t* L_47 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		bool L_50;
		L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
		if (!L_50)
		{
			goto IL_0115;
		}
	}
	{
		intptr_t L_51 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_52;
		L_52 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_51, NULL);
		return ((*(int8_t*)UnBox((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0115:
	{
		Type_t* L_53 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		if (!L_56)
		{
			goto IL_02b1;
		}
	}
	{
		intptr_t L_57 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58;
		L_58 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_57, NULL);
		return ((*(int8_t*)UnBox((RuntimeObject*)L_58, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0136:
	{
		Type_t* L_59 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_63 = ___0_array;
		int32_t L_64;
		L_64 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_63, NULL);
		V_1 = L_64;
		int32_t L_65 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_65);
		V_2 = L_66;
		int32_t L_67 = V_1;
		if (L_67)
		{
			goto IL_0163;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = V_2;
		return ((*(int8_t*)UnBox((RuntimeObject*)L_68, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0163:
	{
		int32_t L_69 = V_1;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_70 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_69) > ((int32_t)L_70)))
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_71 = V_1;
		G_B25_0 = L_71;
		goto IL_0173;
	}

IL_016e:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_72 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B25_0 = L_72;
	}

IL_0173:
	{
		V_3 = G_B25_0;
		int32_t L_73 = V_3;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_73, NULL);
		V_4 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c5:
			{
				{
					bool L_74 = V_4;
					if (!L_74)
					{
						goto IL_01d4;
					}
				}
				{
					intptr_t L_75;
					L_75 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_01d4:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_5 = 0;
				goto IL_01be_1;
			}

IL_0182_1:
			{
				int32_t L_76 = V_5;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_77 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_76%L_77)))
				{
					goto IL_01a3_1;
				}
			}
			{
				intptr_t L_78;
				L_78 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_4 = (bool)0;
				int32_t L_79 = V_3;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_79, NULL);
				V_4 = (bool)1;
			}

IL_01a3_1:
			{
				intptr_t L_80 = ___0_array;
				int32_t L_81 = V_5;
				intptr_t L_82;
				L_82 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_80, L_81, NULL);
				V_6 = L_82;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = V_2;
				int32_t L_84 = V_5;
				intptr_t L_85 = V_6;
				String_t* L_86;
				L_86 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_85, NULL);
				NullCheck(L_83);
				(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (String_t*)L_86);
				int32_t L_87 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_87, 1));
			}

IL_01be_1:
			{
				int32_t L_88 = V_5;
				int32_t L_89 = V_1;
				if ((((int32_t)L_88) < ((int32_t)L_89)))
				{
					goto IL_0182_1;
				}
			}
			{
				goto IL_01d5;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01d5:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90 = V_2;
		return ((*(int8_t*)UnBox((RuntimeObject*)L_90, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_01dc:
	{
		Type_t* L_91 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_028f;
		}
	}
	{
		intptr_t L_95 = ___0_array;
		int32_t L_96;
		L_96 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_95, NULL);
		V_7 = L_96;
		int32_t L_97 = V_7;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_98 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_97);
		V_8 = L_98;
		int32_t L_99 = V_7;
		if (L_99)
		{
			goto IL_020e;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_100 = V_8;
		return ((*(int8_t*)UnBox((RuntimeObject*)L_100, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_020e:
	{
		int32_t L_101 = V_7;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_102 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_101) > ((int32_t)L_102)))
		{
			goto IL_021b;
		}
	}
	{
		int32_t L_103 = V_7;
		G_B42_0 = L_103;
		goto IL_0220;
	}

IL_021b:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_104 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B42_0 = L_104;
	}

IL_0220:
	{
		V_9 = G_B42_0;
		int32_t L_105 = V_9;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_105, NULL);
		V_10 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0277:
			{
				{
					bool L_106 = V_10;
					if (!L_106)
					{
						goto IL_0286;
					}
				}
				{
					intptr_t L_107;
					L_107 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_0286:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_11 = 0;
				goto IL_026f_1;
			}

IL_0231_1:
			{
				int32_t L_108 = V_11;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_109 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_108%L_109)))
				{
					goto IL_0253_1;
				}
			}
			{
				intptr_t L_110;
				L_110 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_10 = (bool)0;
				int32_t L_111 = V_9;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_111, NULL);
				V_10 = (bool)1;
			}

IL_0253_1:
			{
				intptr_t L_112 = ___0_array;
				int32_t L_113 = V_11;
				intptr_t L_114;
				L_114 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_112, L_113, NULL);
				V_12 = L_114;
				AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_115 = V_8;
				int32_t L_116 = V_11;
				intptr_t L_117 = V_12;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_118 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_118, L_117, NULL);
				NullCheck(L_115);
				ArrayElementTypeCheck (L_115, L_118);
				(L_115)->SetAt(static_cast<il2cpp_array_size_t>(L_116), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_118);
				int32_t L_119 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_119, 1));
			}

IL_026f_1:
			{
				int32_t L_120 = V_11;
				int32_t L_121 = V_7;
				if ((((int32_t)L_120) < ((int32_t)L_121)))
				{
					goto IL_0231_1;
				}
			}
			{
				goto IL_0287;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0287:
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_122 = V_8;
		return ((*(int8_t*)UnBox((RuntimeObject*)L_122, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_028f:
	{
		Type_t* L_123 = V_0;
		Type_t* L_124 = L_123;
		if (L_124)
		{
			G_B55_0 = L_124;
			G_B55_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_029c;
		}
		G_B54_0 = L_124;
		G_B54_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
	}
	{
		G_B56_0 = ((String_t*)(NULL));
		G_B56_1 = G_B54_1;
		goto IL_02a1;
	}

IL_029c:
	{
		NullCheck(G_B55_0);
		String_t* L_125;
		L_125 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B55_0);
		G_B56_0 = L_125;
		G_B56_1 = G_B55_1;
	}

IL_02a1:
	{
		String_t* L_126;
		L_126 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B56_1, G_B56_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_127 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_127, L_126, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_127, method);
	}

IL_02b1:
	{
		il2cpp_codegen_initobj((&V_13), sizeof(int8_t));
		int8_t L_128 = V_13;
		return L_128;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64 (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	Type_t* V_0 = NULL;
	int32_t V_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	intptr_t V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	int32_t G_B25_0 = 0;
	int32_t G_B42_0 = 0;
	Type_t* G_B55_0 = NULL;
	String_t* G_B55_1 = NULL;
	Type_t* G_B54_0 = NULL;
	String_t* G_B54_1 = NULL;
	String_t* G_B56_0 = NULL;
	String_t* G_B56_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		CHECKED_LOCAL_INIT(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit,(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		if (!L_4)
		{
			goto IL_0136;
		}
	}
	{
		Type_t* L_5 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		intptr_t L_9 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10;
		L_10 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_9, NULL);
		return ((*(float*)UnBox((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0039:
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		intptr_t L_15 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_16;
		L_16 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_15, NULL);
		return ((*(float*)UnBox((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0057:
	{
		Type_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_007f;
		}
	}
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_21 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_21, NULL);
		return ((*(float*)UnBox((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_007f:
	{
		Type_t* L_23 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_009d;
		}
	}
	{
		intptr_t L_27 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_28;
		L_28 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_27, NULL);
		return ((*(float*)UnBox((RuntimeObject*)L_28, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_009d:
	{
		Type_t* L_29 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_00bb;
		}
	}
	{
		intptr_t L_33 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_34;
		L_34 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_33, NULL);
		return ((*(float*)UnBox((RuntimeObject*)L_34, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00bb:
	{
		Type_t* L_35 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		bool L_38;
		L_38 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_35, L_37, NULL);
		if (!L_38)
		{
			goto IL_00d9;
		}
	}
	{
		intptr_t L_39 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_40;
		L_40 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_39, NULL);
		return ((*(float*)UnBox((RuntimeObject*)L_40, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00d9:
	{
		Type_t* L_41 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_00f7;
		}
	}
	{
		intptr_t L_45 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46;
		L_46 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_45, NULL);
		return ((*(float*)UnBox((RuntimeObject*)L_46, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_00f7:
	{
		Type_t* L_47 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		bool L_50;
		L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
		if (!L_50)
		{
			goto IL_0115;
		}
	}
	{
		intptr_t L_51 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_52;
		L_52 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_51, NULL);
		return ((*(float*)UnBox((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0115:
	{
		Type_t* L_53 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		if (!L_56)
		{
			goto IL_02b1;
		}
	}
	{
		intptr_t L_57 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58;
		L_58 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_57, NULL);
		return ((*(float*)UnBox((RuntimeObject*)L_58, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0136:
	{
		Type_t* L_59 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_63 = ___0_array;
		int32_t L_64;
		L_64 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_63, NULL);
		V_1 = L_64;
		int32_t L_65 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_65);
		V_2 = L_66;
		int32_t L_67 = V_1;
		if (L_67)
		{
			goto IL_0163;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = V_2;
		return ((*(float*)UnBox((RuntimeObject*)L_68, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_0163:
	{
		int32_t L_69 = V_1;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_70 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_69) > ((int32_t)L_70)))
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_71 = V_1;
		G_B25_0 = L_71;
		goto IL_0173;
	}

IL_016e:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_72 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B25_0 = L_72;
	}

IL_0173:
	{
		V_3 = G_B25_0;
		int32_t L_73 = V_3;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_73, NULL);
		V_4 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c5:
			{
				{
					bool L_74 = V_4;
					if (!L_74)
					{
						goto IL_01d4;
					}
				}
				{
					intptr_t L_75;
					L_75 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_01d4:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_5 = 0;
				goto IL_01be_1;
			}

IL_0182_1:
			{
				int32_t L_76 = V_5;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_77 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_76%L_77)))
				{
					goto IL_01a3_1;
				}
			}
			{
				intptr_t L_78;
				L_78 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_4 = (bool)0;
				int32_t L_79 = V_3;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_79, NULL);
				V_4 = (bool)1;
			}

IL_01a3_1:
			{
				intptr_t L_80 = ___0_array;
				int32_t L_81 = V_5;
				intptr_t L_82;
				L_82 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_80, L_81, NULL);
				V_6 = L_82;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = V_2;
				int32_t L_84 = V_5;
				intptr_t L_85 = V_6;
				String_t* L_86;
				L_86 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_85, NULL);
				NullCheck(L_83);
				(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (String_t*)L_86);
				int32_t L_87 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_87, 1));
			}

IL_01be_1:
			{
				int32_t L_88 = V_5;
				int32_t L_89 = V_1;
				if ((((int32_t)L_88) < ((int32_t)L_89)))
				{
					goto IL_0182_1;
				}
			}
			{
				goto IL_01d5;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01d5:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90 = V_2;
		return ((*(float*)UnBox((RuntimeObject*)L_90, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_01dc:
	{
		Type_t* L_91 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_028f;
		}
	}
	{
		intptr_t L_95 = ___0_array;
		int32_t L_96;
		L_96 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_95, NULL);
		V_7 = L_96;
		int32_t L_97 = V_7;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_98 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_97);
		V_8 = L_98;
		int32_t L_99 = V_7;
		if (L_99)
		{
			goto IL_020e;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_100 = V_8;
		return ((*(float*)UnBox((RuntimeObject*)L_100, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_020e:
	{
		int32_t L_101 = V_7;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_102 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_101) > ((int32_t)L_102)))
		{
			goto IL_021b;
		}
	}
	{
		int32_t L_103 = V_7;
		G_B42_0 = L_103;
		goto IL_0220;
	}

IL_021b:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_104 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B42_0 = L_104;
	}

IL_0220:
	{
		V_9 = G_B42_0;
		int32_t L_105 = V_9;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_105, NULL);
		V_10 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0277:
			{
				{
					bool L_106 = V_10;
					if (!L_106)
					{
						goto IL_0286;
					}
				}
				{
					intptr_t L_107;
					L_107 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_0286:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_11 = 0;
				goto IL_026f_1;
			}

IL_0231_1:
			{
				int32_t L_108 = V_11;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_109 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_108%L_109)))
				{
					goto IL_0253_1;
				}
			}
			{
				intptr_t L_110;
				L_110 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_10 = (bool)0;
				int32_t L_111 = V_9;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_111, NULL);
				V_10 = (bool)1;
			}

IL_0253_1:
			{
				intptr_t L_112 = ___0_array;
				int32_t L_113 = V_11;
				intptr_t L_114;
				L_114 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_112, L_113, NULL);
				V_12 = L_114;
				AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_115 = V_8;
				int32_t L_116 = V_11;
				intptr_t L_117 = V_12;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_118 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_118, L_117, NULL);
				NullCheck(L_115);
				ArrayElementTypeCheck (L_115, L_118);
				(L_115)->SetAt(static_cast<il2cpp_array_size_t>(L_116), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_118);
				int32_t L_119 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_119, 1));
			}

IL_026f_1:
			{
				int32_t L_120 = V_11;
				int32_t L_121 = V_7;
				if ((((int32_t)L_120) < ((int32_t)L_121)))
				{
					goto IL_0231_1;
				}
			}
			{
				goto IL_0287;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0287:
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_122 = V_8;
		return ((*(float*)UnBox((RuntimeObject*)L_122, il2cpp_rgctx_data(method->rgctx_data, 1))));
	}

IL_028f:
	{
		Type_t* L_123 = V_0;
		Type_t* L_124 = L_123;
		if (L_124)
		{
			G_B55_0 = L_124;
			G_B55_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_029c;
		}
		G_B54_0 = L_124;
		G_B54_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
	}
	{
		G_B56_0 = ((String_t*)(NULL));
		G_B56_1 = G_B54_1;
		goto IL_02a1;
	}

IL_029c:
	{
		NullCheck(G_B55_0);
		String_t* L_125;
		L_125 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B55_0);
		G_B56_0 = L_125;
		G_B56_1 = G_B55_1;
	}

IL_02a1:
	{
		String_t* L_126;
		L_126 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B56_1, G_B56_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_127 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_127, L_126, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_127, method);
	}

IL_02b1:
	{
		il2cpp_codegen_initobj((&V_13), sizeof(float));
		float L_128 = V_13;
		return L_128;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* _AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_mAD2432704589B67F3F93D55DF8B948DCBEBA4444_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	Type_t* V_0 = NULL;
	int32_t V_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	intptr_t V_12;
	memset((&V_12), 0, sizeof(V_12));
	Il2CppSharedGenericObject* V_13 = NULL;
	int32_t G_B25_0 = 0;
	int32_t G_B42_0 = 0;
	Type_t* G_B55_0 = NULL;
	String_t* G_B55_1 = NULL;
	Type_t* G_B54_0 = NULL;
	String_t* G_B54_1 = NULL;
	String_t* G_B56_0 = NULL;
	String_t* G_B56_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		CHECKED_LOCAL_INIT(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit,(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		if (!L_4)
		{
			goto IL_0136;
		}
	}
	{
		Type_t* L_5 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		intptr_t L_9 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10;
		L_10 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_9, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0039:
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		intptr_t L_15 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_16;
		L_16 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_15, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0057:
	{
		Type_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_007f;
		}
	}
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_21 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_21, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_007f:
	{
		Type_t* L_23 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_009d;
		}
	}
	{
		intptr_t L_27 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_28;
		L_28 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_27, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_28, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_009d:
	{
		Type_t* L_29 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_00bb;
		}
	}
	{
		intptr_t L_33 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_34;
		L_34 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_33, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_34, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_00bb:
	{
		Type_t* L_35 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		bool L_38;
		L_38 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_35, L_37, NULL);
		if (!L_38)
		{
			goto IL_00d9;
		}
	}
	{
		intptr_t L_39 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_40;
		L_40 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_39, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_40, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_00d9:
	{
		Type_t* L_41 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_00f7;
		}
	}
	{
		intptr_t L_45 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46;
		L_46 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_45, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_46, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_00f7:
	{
		Type_t* L_47 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		bool L_50;
		L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
		if (!L_50)
		{
			goto IL_0115;
		}
	}
	{
		intptr_t L_51 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_52;
		L_52 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_51, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_52, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0115:
	{
		Type_t* L_53 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		if (!L_56)
		{
			goto IL_02b1;
		}
	}
	{
		intptr_t L_57 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58;
		L_58 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_57, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_58, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0136:
	{
		Type_t* L_59 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_63 = ___0_array;
		int32_t L_64;
		L_64 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_63, NULL);
		V_1 = L_64;
		int32_t L_65 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_65);
		V_2 = L_66;
		int32_t L_67 = V_1;
		if (L_67)
		{
			goto IL_0163;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = V_2;
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_68, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0163:
	{
		int32_t L_69 = V_1;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_70 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_69) > ((int32_t)L_70)))
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_71 = V_1;
		G_B25_0 = L_71;
		goto IL_0173;
	}

IL_016e:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_72 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B25_0 = L_72;
	}

IL_0173:
	{
		V_3 = G_B25_0;
		int32_t L_73 = V_3;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_73, NULL);
		V_4 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c5:
			{
				{
					bool L_74 = V_4;
					if (!L_74)
					{
						goto IL_01d4;
					}
				}
				{
					intptr_t L_75;
					L_75 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_01d4:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_5 = 0;
				goto IL_01be_1;
			}

IL_0182_1:
			{
				int32_t L_76 = V_5;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_77 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_76%L_77)))
				{
					goto IL_01a3_1;
				}
			}
			{
				intptr_t L_78;
				L_78 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_4 = (bool)0;
				int32_t L_79 = V_3;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_79, NULL);
				V_4 = (bool)1;
			}

IL_01a3_1:
			{
				intptr_t L_80 = ___0_array;
				int32_t L_81 = V_5;
				intptr_t L_82;
				L_82 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_80, L_81, NULL);
				V_6 = L_82;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = V_2;
				int32_t L_84 = V_5;
				intptr_t L_85 = V_6;
				String_t* L_86;
				L_86 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_85, NULL);
				NullCheck(L_83);
				(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (String_t*)L_86);
				int32_t L_87 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_87, 1));
			}

IL_01be_1:
			{
				int32_t L_88 = V_5;
				int32_t L_89 = V_1;
				if ((((int32_t)L_88) < ((int32_t)L_89)))
				{
					goto IL_0182_1;
				}
			}
			{
				goto IL_01d5;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01d5:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90 = V_2;
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_90, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_01dc:
	{
		Type_t* L_91 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_028f;
		}
	}
	{
		intptr_t L_95 = ___0_array;
		int32_t L_96;
		L_96 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_95, NULL);
		V_7 = L_96;
		int32_t L_97 = V_7;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_98 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_97);
		V_8 = L_98;
		int32_t L_99 = V_7;
		if (L_99)
		{
			goto IL_020e;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_100 = V_8;
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_100, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_020e:
	{
		int32_t L_101 = V_7;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_102 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_101) > ((int32_t)L_102)))
		{
			goto IL_021b;
		}
	}
	{
		int32_t L_103 = V_7;
		G_B42_0 = L_103;
		goto IL_0220;
	}

IL_021b:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_104 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B42_0 = L_104;
	}

IL_0220:
	{
		V_9 = G_B42_0;
		int32_t L_105 = V_9;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_105, NULL);
		V_10 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0277:
			{
				{
					bool L_106 = V_10;
					if (!L_106)
					{
						goto IL_0286;
					}
				}
				{
					intptr_t L_107;
					L_107 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_0286:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_11 = 0;
				goto IL_026f_1;
			}

IL_0231_1:
			{
				int32_t L_108 = V_11;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_109 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_108%L_109)))
				{
					goto IL_0253_1;
				}
			}
			{
				intptr_t L_110;
				L_110 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_10 = (bool)0;
				int32_t L_111 = V_9;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_111, NULL);
				V_10 = (bool)1;
			}

IL_0253_1:
			{
				intptr_t L_112 = ___0_array;
				int32_t L_113 = V_11;
				intptr_t L_114;
				L_114 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_112, L_113, NULL);
				V_12 = L_114;
				AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_115 = V_8;
				int32_t L_116 = V_11;
				intptr_t L_117 = V_12;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_118 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_118, L_117, NULL);
				NullCheck(L_115);
				ArrayElementTypeCheck (L_115, L_118);
				(L_115)->SetAt(static_cast<il2cpp_array_size_t>(L_116), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_118);
				int32_t L_119 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_119, 1));
			}

IL_026f_1:
			{
				int32_t L_120 = V_11;
				int32_t L_121 = V_7;
				if ((((int32_t)L_120) < ((int32_t)L_121)))
				{
					goto IL_0231_1;
				}
			}
			{
				goto IL_0287;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0287:
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_122 = V_8;
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_122, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_028f:
	{
		Type_t* L_123 = V_0;
		Type_t* L_124 = L_123;
		if (L_124)
		{
			G_B55_0 = L_124;
			G_B55_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_029c;
		}
		G_B54_0 = L_124;
		G_B54_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
	}
	{
		G_B56_0 = ((String_t*)(NULL));
		G_B56_1 = G_B54_1;
		goto IL_02a1;
	}

IL_029c:
	{
		NullCheck(G_B55_0);
		String_t* L_125;
		L_125 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B55_0);
		G_B56_0 = L_125;
		G_B56_1 = G_B55_1;
	}

IL_02a1:
	{
		String_t* L_126;
		L_126 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B56_1, G_B56_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_127 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_127, L_126, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_127, method);
	}

IL_02b1:
	{
		il2cpp_codegen_initobj((&V_13), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_128 = V_13;
		return L_128;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mD6B660A63955117687D6131FC1DB255161D1A2BA_fshared (intptr_t ___0_array, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
	const Il2CppFullySharedGenericAny L_19 = L_11;
	const Il2CppFullySharedGenericAny L_27 = L_11;
	const Il2CppFullySharedGenericAny L_35 = L_11;
	const Il2CppFullySharedGenericAny L_43 = L_11;
	const Il2CppFullySharedGenericAny L_51 = L_11;
	const Il2CppFullySharedGenericAny L_59 = L_11;
	const Il2CppFullySharedGenericAny L_67 = L_11;
	const Il2CppFullySharedGenericAny L_75 = L_11;
	const Il2CppFullySharedGenericAny L_87 = L_11;
	const Il2CppFullySharedGenericAny L_111 = L_11;
	const Il2CppFullySharedGenericAny L_123 = L_11;
	const Il2CppFullySharedGenericAny L_147 = L_11;
	const Il2CppFullySharedGenericAny L_154 = L_11;
	Type_t* V_0 = NULL;
	int32_t V_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	intptr_t V_12;
	memset((&V_12), 0, sizeof(V_12));
	Il2CppFullySharedGenericAny V_13 = alloca(SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
	memset(V_13, 0, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
	int32_t G_B25_0 = 0;
	int32_t G_B42_0 = 0;
	Type_t* G_B55_0 = NULL;
	String_t* G_B55_1 = NULL;
	Type_t* G_B54_0 = NULL;
	String_t* G_B54_1 = NULL;
	String_t* G_B56_0 = NULL;
	String_t* G_B56_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		CHECKED_LOCAL_INIT(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_StaticInit,(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		if (!L_4)
		{
			goto IL_0136;
		}
	}
	{
		Type_t* L_5 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		intptr_t L_9 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10;
		L_10 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_9, NULL);
		void* L_12 = UnBox_Any((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1), L_11);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_12)), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		return;
	}

IL_0039:
	{
		Type_t* L_13 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0057;
		}
	}
	{
		intptr_t L_17 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_18;
		L_18 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_17, NULL);
		void* L_20 = UnBox_Any((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 1), L_19);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_20)), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		return;
	}

IL_0057:
	{
		Type_t* L_21 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		if (!L_24)
		{
			goto IL_007f;
		}
	}
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_25 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_25, NULL);
		void* L_28 = UnBox_Any((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 1), L_27);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_28)), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		return;
	}

IL_007f:
	{
		Type_t* L_29 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_009d;
		}
	}
	{
		intptr_t L_33 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_34;
		L_34 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_33, NULL);
		void* L_36 = UnBox_Any((RuntimeObject*)L_34, il2cpp_rgctx_data(method->rgctx_data, 1), L_35);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_36)), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		return;
	}

IL_009d:
	{
		Type_t* L_37 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		bool L_40;
		L_40 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_37, L_39, NULL);
		if (!L_40)
		{
			goto IL_00bb;
		}
	}
	{
		intptr_t L_41 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_42;
		L_42 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_41, NULL);
		void* L_44 = UnBox_Any((RuntimeObject*)L_42, il2cpp_rgctx_data(method->rgctx_data, 1), L_43);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_44)), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		return;
	}

IL_00bb:
	{
		Type_t* L_45 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		bool L_48;
		L_48 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_45, L_47, NULL);
		if (!L_48)
		{
			goto IL_00d9;
		}
	}
	{
		intptr_t L_49 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_50;
		L_50 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_49, NULL);
		void* L_52 = UnBox_Any((RuntimeObject*)L_50, il2cpp_rgctx_data(method->rgctx_data, 1), L_51);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_52)), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		return;
	}

IL_00d9:
	{
		Type_t* L_53 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_55, NULL);
		if (!L_56)
		{
			goto IL_00f7;
		}
	}
	{
		intptr_t L_57 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_58;
		L_58 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_57, NULL);
		void* L_60 = UnBox_Any((RuntimeObject*)L_58, il2cpp_rgctx_data(method->rgctx_data, 1), L_59);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_60)), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		return;
	}

IL_00f7:
	{
		Type_t* L_61 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		bool L_64;
		L_64 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_61, L_63, NULL);
		if (!L_64)
		{
			goto IL_0115;
		}
	}
	{
		intptr_t L_65 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_66;
		L_66 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_65, NULL);
		void* L_68 = UnBox_Any((RuntimeObject*)L_66, il2cpp_rgctx_data(method->rgctx_data, 1), L_67);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_68)), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		return;
	}

IL_0115:
	{
		Type_t* L_69 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
		if (!L_72)
		{
			goto IL_02b1;
		}
	}
	{
		intptr_t L_73 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_74;
		L_74 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_73, NULL);
		void* L_76 = UnBox_Any((RuntimeObject*)L_74, il2cpp_rgctx_data(method->rgctx_data, 1), L_75);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_76)), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		return;
	}

IL_0136:
	{
		Type_t* L_77 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
		if (!L_80)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_81 = ___0_array;
		int32_t L_82;
		L_82 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_81, NULL);
		V_1 = L_82;
		int32_t L_83 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_84 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_83);
		V_2 = L_84;
		int32_t L_85 = V_1;
		if (L_85)
		{
			goto IL_0163;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_86 = V_2;
		void* L_88 = UnBox_Any((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1), L_87);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_88)), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		return;
	}

IL_0163:
	{
		int32_t L_89 = V_1;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_90 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_89) > ((int32_t)L_90)))
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_91 = V_1;
		G_B25_0 = L_91;
		goto IL_0173;
	}

IL_016e:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_92 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B25_0 = L_92;
	}

IL_0173:
	{
		V_3 = G_B25_0;
		int32_t L_93 = V_3;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_93, NULL);
		V_4 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c5:
			{
				{
					bool L_94 = V_4;
					if (!L_94)
					{
						goto IL_01d4;
					}
				}
				{
					intptr_t L_95;
					L_95 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_01d4:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_5 = 0;
				goto IL_01be_1;
			}

IL_0182_1:
			{
				int32_t L_96 = V_5;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_97 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_96%L_97)))
				{
					goto IL_01a3_1;
				}
			}
			{
				intptr_t L_98;
				L_98 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_4 = (bool)0;
				int32_t L_99 = V_3;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_99, NULL);
				V_4 = (bool)1;
			}

IL_01a3_1:
			{
				intptr_t L_100 = ___0_array;
				int32_t L_101 = V_5;
				intptr_t L_102;
				L_102 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_100, L_101, NULL);
				V_6 = L_102;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_103 = V_2;
				int32_t L_104 = V_5;
				intptr_t L_105 = V_6;
				String_t* L_106;
				L_106 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_105, NULL);
				NullCheck(L_103);
				(L_103)->SetAt(static_cast<il2cpp_array_size_t>(L_104), (String_t*)L_106);
				int32_t L_107 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_107, 1));
			}

IL_01be_1:
			{
				int32_t L_108 = V_5;
				int32_t L_109 = V_1;
				if ((((int32_t)L_108) < ((int32_t)L_109)))
				{
					goto IL_0182_1;
				}
			}
			{
				goto IL_01d5;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01d5:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_110 = V_2;
		void* L_112 = UnBox_Any((RuntimeObject*)L_110, il2cpp_rgctx_data(method->rgctx_data, 1), L_111);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_112)), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		return;
	}

IL_01dc:
	{
		Type_t* L_113 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		bool L_116;
		L_116 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_113, L_115, NULL);
		if (!L_116)
		{
			goto IL_028f;
		}
	}
	{
		intptr_t L_117 = ___0_array;
		int32_t L_118;
		L_118 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_117, NULL);
		V_7 = L_118;
		int32_t L_119 = V_7;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_120 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_119);
		V_8 = L_120;
		int32_t L_121 = V_7;
		if (L_121)
		{
			goto IL_020e;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_122 = V_8;
		void* L_124 = UnBox_Any((RuntimeObject*)L_122, il2cpp_rgctx_data(method->rgctx_data, 1), L_123);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_124)), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		return;
	}

IL_020e:
	{
		int32_t L_125 = V_7;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_126 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		if ((((int32_t)L_125) > ((int32_t)L_126)))
		{
			goto IL_021b;
		}
	}
	{
		int32_t L_127 = V_7;
		G_B42_0 = L_127;
		goto IL_0220;
	}

IL_021b:
	{
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_128 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
		G_B42_0 = L_128;
	}

IL_0220:
	{
		V_9 = G_B42_0;
		int32_t L_129 = V_9;
		AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_129, NULL);
		V_10 = (bool)1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0277:
			{
				{
					bool L_130 = V_10;
					if (!L_130)
					{
						goto IL_0286;
					}
				}
				{
					intptr_t L_131;
					L_131 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				}

IL_0286:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_11 = 0;
				goto IL_026f_1;
			}

IL_0231_1:
			{
				int32_t L_132 = V_11;
				CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				int32_t L_133 = ((_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticFields*)il2cpp_codegen_static_fields_for(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var))->___FRAME_SIZE_FOR_ARRAYS;
				if (((int32_t)(L_132%L_133)))
				{
					goto IL_0253_1;
				}
			}
			{
				intptr_t L_134;
				L_134 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				V_10 = (bool)0;
				int32_t L_135 = V_9;
				AndroidJNISafe_PushLocalFrame_mBD80F37B9AA8EF3360C22C260458B0B8CAC0876B(L_135, NULL);
				V_10 = (bool)1;
			}

IL_0253_1:
			{
				intptr_t L_136 = ___0_array;
				int32_t L_137 = V_11;
				intptr_t L_138;
				L_138 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_136, L_137, NULL);
				V_12 = L_138;
				AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_139 = V_8;
				int32_t L_140 = V_11;
				intptr_t L_141 = V_12;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_142 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_142, L_141, NULL);
				NullCheck(L_139);
				ArrayElementTypeCheck (L_139, L_142);
				(L_139)->SetAt(static_cast<il2cpp_array_size_t>(L_140), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_142);
				int32_t L_143 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_143, 1));
			}

IL_026f_1:
			{
				int32_t L_144 = V_11;
				int32_t L_145 = V_7;
				if ((((int32_t)L_144) < ((int32_t)L_145)))
				{
					goto IL_0231_1;
				}
			}
			{
				goto IL_0287;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0287:
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_146 = V_8;
		void* L_148 = UnBox_Any((RuntimeObject*)L_146, il2cpp_rgctx_data(method->rgctx_data, 1), L_147);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_148)), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		return;
	}

IL_028f:
	{
		Type_t* L_149 = V_0;
		Type_t* L_150 = L_149;
		if (L_150)
		{
			G_B55_0 = L_150;
			G_B55_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_029c;
		}
		G_B54_0 = L_150;
		G_B54_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
	}
	{
		G_B56_0 = ((String_t*)(NULL));
		G_B56_1 = G_B54_1;
		goto IL_02a1;
	}

IL_029c:
	{
		NullCheck(G_B55_0);
		String_t* L_151;
		L_151 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B55_0);
		G_B56_0 = L_151;
		G_B56_1 = G_B55_1;
	}

IL_02a1:
	{
		String_t* L_152;
		L_152 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B56_1, G_B56_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_153 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_153, L_152, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_153, method);
	}

IL_02b1:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_13, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		il2cpp_codegen_memcpy(L_154, V_13, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_154, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_mFEAB91A44B644CE56BB6182931D1065B679E0B3A_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_3;
		L_3 = _AndroidJNIHelper_GetSignature_TisIl2CppSharedGenericObject_m0C7FDCF16A83058F035A29281B5B69F149628508(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisIl2CppFullySharedGenericAny_mBB787943D3DB158E741B5FF2B66EFB90237F837C_fshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisIl2CppSharedGenericObject_m0C7FDCF16A83058F035A29281B5B69F149628508_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisIl2CppFullySharedGenericAny_m5BFF8BF215EBBD2B94DB67B384DAB97E221FA134_fshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit);
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0021;
		}
	}

IL_0007:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
		V_0 = L_6;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___0_args;
		V_1 = L_9;
		V_2 = 0;
		goto IL_004b;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = V_3;
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_16;
		L_16 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_15, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_16, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004b:
	{
		int32_t L_19 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0036;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)41), NULL);
		StringBuilder_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		CHECKED_LOCAL_INIT(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_StaticInit,(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_27;
		L_27 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_26, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_27, NULL);
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_29);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CastDataSourceVisitor_VisitContainer_TisIl2CppFullySharedGenericAny_mCD54098F1F347037182D18EBDCEFCAFBDD695A7F_fshared (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, Il2CppFullySharedGenericAny* ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* L_0;
		L_0 = CastDataSourceVisitor_get_Binding_m5E49CD185160FDDD9703BECC9BBCABCC38D3470C_inline(__this, NULL);
		BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 L_1;
		L_1 = CastDataSourceVisitor_get_bindingContext_m4CB5DBA632F34ADA1D372891CF20CC352EC67681_inline(__this, NULL);
		V_0 = L_1;
		Il2CppFullySharedGenericAny* L_2 = ___0_container;
		NullCheck(L_0);
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_3;
		L_3 = GenericVirtualFuncInvoker2< BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB, BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_0, (&V_0), L_2);
		CastDataSourceVisitor_set_result_m85D8FC603976B86A95E07B083CA39AD7524A04BB_inline(__this, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPathVisitor_VisitPath_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m73D1BFCDF215021460578C85EA3FD2D0973EB79C_fshared (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0;
		L_0 = UIPathVisitor_get_direction_m8EAE7149E1C74BB49BAEE95948B35F5C9B7EB346_inline(__this, NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		goto IL_0040;
	}

IL_0010:
	{
		DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* L_3;
		L_3 = UIPathVisitor_get_binding_m03F7EA36AD3D36ADECF9C571DD914933D7CA7338_inline(__this, NULL);
		BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 L_4;
		L_4 = UIPathVisitor_get_bindingContext_mE1C76F6A0BF1B24EA6D1BB247752F5EE0586B4F7_inline(__this, NULL);
		V_2 = L_4;
		Il2CppFullySharedGenericAny* L_5 = ___2_value;
		NullCheck(L_3);
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_6;
		L_6 = GenericVirtualFuncInvoker2< BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB, BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_3, (&V_2), L_5);
		V_0 = L_6;
		goto IL_0046;
	}

IL_0028:
	{
		DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* L_7;
		L_7 = UIPathVisitor_get_binding_m03F7EA36AD3D36ADECF9C571DD914933D7CA7338_inline(__this, NULL);
		BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 L_8;
		L_8 = UIPathVisitor_get_bindingContext_mE1C76F6A0BF1B24EA6D1BB247752F5EE0586B4F7_inline(__this, NULL);
		V_2 = L_8;
		Il2CppFullySharedGenericAny* L_9 = ___2_value;
		NullCheck(L_7);
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_10;
		L_10 = GenericVirtualFuncInvoker2< BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB, BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_7, (&V_2), L_9);
		V_0 = L_10;
		goto IL_0046;
	}

IL_0040:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0046:
	{
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_12 = V_0;
		UIPathVisitor_set_result_m5195F6D8FA895AC39C2ADE63E665878C38795079_inline(__this, L_12, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mAAE538FC8B5BE7EC34C148D8FD74EF3FF554751A (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) 
{
	{
		CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_1;
		L_1 = CommandEvent_get_eventModifiers_mDE813197A28BFBB82027157E446A56BDA43E8AD8_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mAAE538FC8B5BE7EC34C148D8FD74EF3FF554751A_AdjustorThunk (RuntimeObject* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D>(__this);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mAAE538FC8B5BE7EC34C148D8FD74EF3FF554751A(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m7237670035CB1C535D6E5123B8A9C5EF12A24AA3 (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) 
{
	{
		IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_1;
		L_1 = IMECompositionEvent_get_eventModifiers_m4B212B13B5AA27343B784C20FA77266C1D741012_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m7237670035CB1C535D6E5123B8A9C5EF12A24AA3_AdjustorThunk (RuntimeObject* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D>(__this);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m7237670035CB1C535D6E5123B8A9C5EF12A24AA3(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m061F9936983114EC5386918BD2ED0C3F66202D50 (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) 
{
	{
		KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_1;
		L_1 = KeyEvent_get_eventModifiers_mF90EB0DF537425D3D09B1E095A2B9D24EE448782_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m061F9936983114EC5386918BD2ED0C3F66202D50_AdjustorThunk (RuntimeObject* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D>(__this);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m061F9936983114EC5386918BD2ED0C3F66202D50(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m07E31EC0FB0D104D49623A95B9A40BF7008CCBEB (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) 
{
	{
		NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_1;
		L_1 = NavigationEvent_get_eventModifiers_mA4BA9D05B5E5E327B9E5A1889202FA12518AB815_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m07E31EC0FB0D104D49623A95B9A40BF7008CCBEB_AdjustorThunk (RuntimeObject* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D>(__this);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m07E31EC0FB0D104D49623A95B9A40BF7008CCBEB(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m47639833B15FA87081E81A99F6CD0EF7A33EB96F (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) 
{
	{
		PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_1;
		L_1 = PointerEvent_get_eventModifiers_m5C238F94AA34FB172F4D7256E5D68E838E3C5A05_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m47639833B15FA87081E81A99F6CD0EF7A33EB96F_AdjustorThunk (RuntimeObject* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D>(__this);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m47639833B15FA87081E81A99F6CD0EF7A33EB96F(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m019BA730BD00B249766225A0F1A57809FBAC89E4 (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) 
{
	{
		TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* L_0 = ___0_ev;
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_1;
		L_1 = TextInputEvent_get_eventModifiers_m0C34160E76D9DE9F4D307C6EDF4BBF7319BB6E78_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m019BA730BD00B249766225A0F1A57809FBAC89E4_AdjustorThunk (RuntimeObject* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D>(__this);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m019BA730BD00B249766225A0F1A57809FBAC89E4(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIl2CppFullySharedGenericAny_m34D64A8F07FD877EDB1F42731C081223E8604CDC_fshared (MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ev;
		Il2CppConstrainedCallData L_2;
		Il2CppMethodPointer L_3 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 0), (void*)L_0, &L_2, L_1);
		typedef EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ( *func_L_4)(void*,const RuntimeMethod*);
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_5 = ((func_L_4)L_3)(L_2.thisPtr,L_2.method);
		return L_5;
	}
}
IL2CPP_EXTERN_C  EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD MapAsEventModifiers_Map_TisIl2CppFullySharedGenericAny_m34D64A8F07FD877EDB1F42731C081223E8604CDC_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventModifiers_tF20A8B576C4F70671CD57A0C466EC517FCED868D>(__this);
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD _returnValue;
	_returnValue = MapAsEventModifiers_Map_TisIl2CppFullySharedGenericAny_m34D64A8F07FD877EDB1F42731C081223E8604CDC(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_m96693C4A9AE0EA03F40671D7AF995E144B6FA18E (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) 
{
	{
		CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* L_0 = ___0_ev;
		int32_t L_1;
		L_1 = CommandEvent_get_eventSource_mAE9F153B7FBCF387F82996F35E9A181673800CDB_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_m96693C4A9AE0EA03F40671D7AF995E144B6FA18E_AdjustorThunk (RuntimeObject* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00>(__this);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_m96693C4A9AE0EA03F40671D7AF995E144B6FA18E(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m0819DF5FE1FD0560787D41C4BF6B901BE6BC862F (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) 
{
	{
		IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* L_0 = ___0_ev;
		int32_t L_1;
		L_1 = IMECompositionEvent_get_eventSource_m5A9262ED18044F734147AB4A65263C7E455B7CAB_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m0819DF5FE1FD0560787D41C4BF6B901BE6BC862F_AdjustorThunk (RuntimeObject* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00>(__this);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_m0819DF5FE1FD0560787D41C4BF6B901BE6BC862F(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_mBAB5E81D1843416F2FDB75A7FCBD522AE6B38CCE (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) 
{
	{
		KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* L_0 = ___0_ev;
		int32_t L_1;
		L_1 = KeyEvent_get_eventSource_m9A74264E7C276EEFA5F603C1EA12BC23034CDE0D_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_mBAB5E81D1843416F2FDB75A7FCBD522AE6B38CCE_AdjustorThunk (RuntimeObject* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00>(__this);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_mBAB5E81D1843416F2FDB75A7FCBD522AE6B38CCE(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_mB4094DC7427C637BB6CC418E4D764C77E97FE435 (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) 
{
	{
		NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* L_0 = ___0_ev;
		int32_t L_1;
		L_1 = NavigationEvent_get_eventSource_mD35D875FBB7FA557068DF25BB145292A6EF9FBA0_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_mB4094DC7427C637BB6CC418E4D764C77E97FE435_AdjustorThunk (RuntimeObject* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00>(__this);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_mB4094DC7427C637BB6CC418E4D764C77E97FE435(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m86E7B37547BC701CF88B5B6261050C515FDD0A6D (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) 
{
	{
		PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* L_0 = ___0_ev;
		int32_t L_1;
		L_1 = PointerEvent_get_eventSource_m433AD39B323BF13AE165F5F9D025444092FAEB33_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m86E7B37547BC701CF88B5B6261050C515FDD0A6D_AdjustorThunk (RuntimeObject* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00>(__this);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_m86E7B37547BC701CF88B5B6261050C515FDD0A6D(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_mE395ADDFBCBAAEB75C1673A5562FB9FD43DAF36B (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) 
{
	{
		TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* L_0 = ___0_ev;
		int32_t L_1;
		L_1 = TextInputEvent_get_eventSource_mD08759B60A91AAC1DD74CD97AABA7F47C1332CF2_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_mE395ADDFBCBAAEB75C1673A5562FB9FD43DAF36B_AdjustorThunk (RuntimeObject* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00>(__this);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_mE395ADDFBCBAAEB75C1673A5562FB9FD43DAF36B(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapAsEventSource_Map_TisIl2CppFullySharedGenericAny_m53DBCF48B23CD871158F25B798C35E7510D0ECA2_fshared (MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ev;
		Il2CppConstrainedCallData L_2;
		Il2CppMethodPointer L_3 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 0), (void*)L_0, &L_2, L_1);
		typedef int32_t ( *func_L_4)(void*,const RuntimeMethod*);
		int32_t L_5 = ((func_L_4)L_3)(L_2.thisPtr,L_2.method);
		return L_5;
	}
}
IL2CPP_EXTERN_C  int32_t MapAsEventSource_Map_TisIl2CppFullySharedGenericAny_m53DBCF48B23CD871158F25B798C35E7510D0ECA2_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method)
{
	MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsEventSource_tF3B0B67D1398F73BE53FCA44ABAA4ABD49FDAA00>(__this);
	int32_t _returnValue;
	_returnValue = MapAsEventSource_Map_TisIl2CppFullySharedGenericAny_m53DBCF48B23CD871158F25B798C35E7510D0ECA2(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mCCADF5AEA66951D37669CE60CCB01ED3C4660138 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* L_0 = ___0_ev;
		CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F L_1 = (*(CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F*)L_0);
		CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mCCADF5AEA66951D37669CE60CCB01ED3C4660138_AdjustorThunk (RuntimeObject* __this, CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisCommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F_mCCADF5AEA66951D37669CE60CCB01ED3C4660138(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_mD1AA5362A19BCFA1036EEABAF52BB924ED3A38B0 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* L_0 = ___0_ev;
		IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4 L_1 = (*(IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4*)L_0);
		IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_mD1AA5362A19BCFA1036EEABAF52BB924ED3A38B0_AdjustorThunk (RuntimeObject* __this, IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisIMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4_mD1AA5362A19BCFA1036EEABAF52BB924ED3A38B0(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m949E8814C4A62D3FC6F78A78D91E0AD070256388 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* L_0 = ___0_ev;
		KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 L_1 = (*(KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931*)L_0);
		KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m949E8814C4A62D3FC6F78A78D91E0AD070256388_AdjustorThunk (RuntimeObject* __this, KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisKeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931_m949E8814C4A62D3FC6F78A78D91E0AD070256388(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m05EC89F841D762DC1AA3EB7E9AAC6718700B73FA (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* L_0 = ___0_ev;
		NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD L_1 = (*(NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD*)L_0);
		NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m05EC89F841D762DC1AA3EB7E9AAC6718700B73FA_AdjustorThunk (RuntimeObject* __this, NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisNavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_m05EC89F841D762DC1AA3EB7E9AAC6718700B73FA(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_mB921D1FC2D4F4A50A52E2A7C40B6E8A117FA3E43 (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* L_0 = ___0_ev;
		PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 L_1 = (*(PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05*)L_0);
		PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_mB921D1FC2D4F4A50A52E2A7C40B6E8A117FA3E43_AdjustorThunk (RuntimeObject* __this, PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisPointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_mB921D1FC2D4F4A50A52E2A7C40B6E8A117FA3E43(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m331F9023B972DA2C8C03472206D86159720C12EC (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* L_0 = ___0_ev;
		TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A L_1 = (*(TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A*)L_0);
		TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_2);
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m331F9023B972DA2C8C03472206D86159720C12EC_AdjustorThunk (RuntimeObject* __this, TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisTextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_m331F9023B972DA2C8C03472206D86159720C12EC(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapAsObject_Map_TisIl2CppFullySharedGenericAny_mBBB034E98EB67ACB20246B5E0AD0D7953C621857_fshared (MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TEventType_tA6204FE5FDF30343C6434FB2DD5D9864B0B26281 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TEventType_tA6204FE5FDF30343C6434FB2DD5D9864B0B26281);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ev;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TEventType_tA6204FE5FDF30343C6434FB2DD5D9864B0B26281);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* MapAsObject_Map_TisIl2CppFullySharedGenericAny_mBBB034E98EB67ACB20246B5E0AD0D7953C621857_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_ev, const RuntimeMethod* method)
{
	MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MapAsObject_t3A424A3C0B860D6EF6990AC34989BAAB7335DF23>(__this);
	RuntimeObject* _returnValue;
	_returnValue = MapAsObject_Map_TisIl2CppFullySharedGenericAny_mBBB034E98EB67ACB20246B5E0AD0D7953C621857(_thisAdjusted, ___0_ev, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArgValueList_AcquireTemporary_TisIl2CppSharedGenericObject_m4222FCEE0976664AC52174F44C7882E4D9DDA777_gshared (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C* __this, Il2CppSharedGenericObject** ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EventArgValueFactory_1_tBA7C4CB598BA77BA8973D624195EFE00E441CC1E_StaticInit);
	EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Il2CppSharedGenericObject** L_0 = ___0_value;
		bool L_1;
		L_1 = ArgValueList_FindByValue_TisIl2CppSharedGenericObject_mECA0BE1B058B973E86ECA1DEE922955C6F82EA49_inline(__this, L_0, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_2 = V_0;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->___temporaryCount;
		NullCheck(L_3);
		L_3->___temporaryCount = ((int32_t)il2cpp_codegen_add(L_4, 1));
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___argId;
		return L_6;
	}

IL_0020:
	{
		int32_t L_7;
		L_7 = ArgValueList_GenerateLocallyUniqueTemporaryId_mDC92CA265E9AC118E3C7DAC04AFF263669C27F02_inline(__this, NULL);
		V_1 = L_7;
		CHECKED_LOCAL_INIT(EventArgValueFactory_1_tBA7C4CB598BA77BA8973D624195EFE00E441CC1E_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		GetPooledFunc_tD1C5E06B5A940E5331B400454266F8E80624137B* L_8 = ((EventArgValueFactory_1_tF5B07F3A164C85F1750486321C4E7517532107B0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___GetPooled;
		int32_t L_9 = V_1;
		Il2CppSharedGenericObject** L_10 = ___0_value;
		NullCheck(L_8);
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_11;
		L_11 = GetPooledFunc_Invoke_m4636F86A39752E604FA1B9AB04E87D00DD274455_inline(L_8, L_9, L_10, NULL);
		V_0 = L_11;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_12 = V_0;
		NullCheck(L_12);
		L_12->___temporaryCount = 1;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_13 = V_0;
		ArgValueList_Append_m8976AA1BA506B735A4B72719E16760B1D03EF650_inline(__this, L_13, NULL);
		int32_t L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArgValueList_AcquireTemporary_TisIl2CppFullySharedGenericAny_m04BEDB27AA80C6FDF03E2790C8B975AAA5DD70FE_fshared (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EventArgValueFactory_1_tBA7C4CB598BA77BA8973D624195EFE00E441CC1E_StaticInit);
	EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C*, Il2CppFullySharedGenericAny*, EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_2 = V_0;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->___temporaryCount;
		NullCheck(L_3);
		L_3->___temporaryCount = ((int32_t)il2cpp_codegen_add(L_4, 1));
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___argId;
		return L_6;
	}

IL_0020:
	{
		int32_t L_7;
		L_7 = ArgValueList_GenerateLocallyUniqueTemporaryId_mDC92CA265E9AC118E3C7DAC04AFF263669C27F02_inline(__this, NULL);
		V_1 = L_7;
		CHECKED_LOCAL_INIT(EventArgValueFactory_1_tBA7C4CB598BA77BA8973D624195EFE00E441CC1E_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		GetPooledFunc_tE499AD01DC2555D363C65E5DF947D4B35E0008F8* L_8 = ((EventArgValueFactory_1_t5EDE0EECC96FA2988C288A18C183107B9C29A44D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___GetPooled;
		int32_t L_9 = V_1;
		Il2CppFullySharedGenericAny* L_10 = ___0_value;
		NullCheck(L_8);
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_11;
		L_11 = ((  EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* (*) (GetPooledFunc_tE499AD01DC2555D363C65E5DF947D4B35E0008F8*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_8, L_9, L_10, NULL);
		V_0 = L_11;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_12 = V_0;
		NullCheck(L_12);
		L_12->___temporaryCount = 1;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_13 = V_0;
		ArgValueList_Append_m8976AA1BA506B735A4B72719E16760B1D03EF650_inline(__this, L_13, NULL);
		int32_t L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgValueList_Add_TisIl2CppSharedGenericObject_mB1059FD7465A560780FC55982DA0D421684C606F_gshared (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C* __this, int32_t ___0_argId, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EventArgValueFactory_1_t6B423EEA90D8B52839436D098320ECFEEF43974D_StaticInit);
	{
		CHECKED_LOCAL_INIT(EventArgValueFactory_1_t6B423EEA90D8B52839436D098320ECFEEF43974D_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		GetPooledFunc_tD1C5E06B5A940E5331B400454266F8E80624137B* L_0 = ((EventArgValueFactory_1_tF5B07F3A164C85F1750486321C4E7517532107B0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___GetPooled;
		int32_t L_1 = ___0_argId;
		Il2CppSharedGenericObject** L_2 = ___1_value;
		NullCheck(L_0);
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_3;
		L_3 = GetPooledFunc_Invoke_m4636F86A39752E604FA1B9AB04E87D00DD274455_inline(L_0, L_1, L_2, NULL);
		ArgValueList_Append_m8976AA1BA506B735A4B72719E16760B1D03EF650_inline(__this, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgValueList_Add_TisIl2CppFullySharedGenericAny_m0D6300DE8C6137BBAD89B2406012CFFC3906EB9F_fshared (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C* __this, int32_t ___0_argId, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EventArgValueFactory_1_t6B423EEA90D8B52839436D098320ECFEEF43974D_StaticInit);
	{
		CHECKED_LOCAL_INIT(EventArgValueFactory_1_t6B423EEA90D8B52839436D098320ECFEEF43974D_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		GetPooledFunc_tE499AD01DC2555D363C65E5DF947D4B35E0008F8* L_0 = ((EventArgValueFactory_1_t5EDE0EECC96FA2988C288A18C183107B9C29A44D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___GetPooled;
		int32_t L_1 = ___0_argId;
		Il2CppFullySharedGenericAny* L_2 = ___1_value;
		NullCheck(L_0);
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_3;
		L_3 = ((  EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* (*) (GetPooledFunc_tE499AD01DC2555D363C65E5DF947D4B35E0008F8*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, NULL);
		ArgValueList_Append_m8976AA1BA506B735A4B72719E16760B1D03EF650_inline(__this, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArgValueList_FindByValue_TisIl2CppSharedGenericObject_mECA0BE1B058B973E86ECA1DEE922955C6F82EA49_gshared (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C* __this, Il2CppSharedGenericObject** ___0_value, EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** ___1_arg, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_0 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_1 = __this->___m_FirstArg;
		*(((RuntimeObject**)L_0)) = ((RuntimeObject*)L_1);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_0), (void*)((RuntimeObject*)L_1));
		goto IL_001f;
	}

IL_000a:
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_2 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_3 = *(L_2);
		Il2CppSharedGenericObject** L_4 = ___0_value;
		NullCheck(L_3);
		bool L_5;
		L_5 = GenericVirtualFuncInvoker1< bool, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_3, L_4);
		if (!L_5)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)1;
	}

IL_0016:
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_6 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_7 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_8 = *(L_7);
		NullCheck(L_8);
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_9 = L_8->___nextArg;
		*(((RuntimeObject**)L_6)) = ((RuntimeObject*)L_9);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_6), (void*)((RuntimeObject*)L_9));
	}

IL_001f:
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_10 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_11 = *(L_10);
		if (L_11)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArgValueList_FindByValue_TisIl2CppFullySharedGenericAny_m7FAA297B30D50285924DE115AC5E3A1FC33FA3B2_fshared (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C* __this, Il2CppFullySharedGenericAny* ___0_value, EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** ___1_arg, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_0 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_1 = __this->___m_FirstArg;
		*(((RuntimeObject**)L_0)) = ((RuntimeObject*)L_1);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_0), (void*)((RuntimeObject*)L_1));
		goto IL_001f;
	}

IL_000a:
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_2 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_3 = *(L_2);
		Il2CppFullySharedGenericAny* L_4 = ___0_value;
		NullCheck(L_3);
		bool L_5;
		L_5 = GenericVirtualFuncInvoker1< bool, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_3, L_4);
		if (!L_5)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)1;
	}

IL_0016:
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_6 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_7 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_8 = *(L_7);
		NullCheck(L_8);
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_9 = L_8->___nextArg;
		*(((RuntimeObject**)L_6)) = ((RuntimeObject*)L_9);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_6), (void*)((RuntimeObject*)L_9));
	}

IL_001f:
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_10 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_11 = *(L_10);
		if (L_11)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m078E1EC84AFDC45614AC23E12723A0B785941D40 (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, double* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_StaticInit);
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		double* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		CHECKED_LOCAL_INIT(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_StaticInit,(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisIl2CppFullySharedGenericAny_mC962ADA59143EB4298C3AE46F923C4552B01A4CC_fshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, Il2CppFullySharedGenericAny* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_StaticInit);
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		Il2CppFullySharedGenericAny* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		CHECKED_LOCAL_INIT(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_StaticInit,(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_4;
		L_4 = ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, Il2CppFullySharedGenericAny*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TessellationJob_ExtractHandle_TisIl2CppSharedGenericObject_mD102DA01666768738FD7FAD18FADC6A286BD57C3_gshared (TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76* IL2CPP_PARAMETER_RESTRICT __this, intptr_t ___0_handlePtr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppSharedGenericObject* V_2 = NULL;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		intptr_t L_0 = ___0_handlePtr;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2 = V_1;
		G_B3_0 = L_2;
		goto IL_001e;
	}

IL_0018:
	{
		intptr_t L_3 = ___0_handlePtr;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_001e:
	{
		V_0 = G_B3_0;
		bool L_5;
		L_5 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline((&V_0), NULL);
		if (L_5)
		{
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_6 = V_2;
		return L_6;
	}

IL_0032:
	{
		RuntimeObject* L_7;
		L_7 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline((&V_0), NULL);
		return ((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisIl2CppSharedGenericObject_m35CB06885EF5600EDBB840B54EDAF3A806896DBB_gshared (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		Il2CppSharedGenericObject* L_1 = ___0_obj;
		intptr_t L_2;
		L_2 = MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MarshalledUnityObject_Unmarshal_TisIl2CppSharedGenericObject_mDFF812844C3A315BA334E9FD102E4EE28E2847B1_gshared (intptr_t ___0_gcHandlePtr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		intptr_t L_0 = ___0_gcHandlePtr;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_2 = V_1;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_gcHandlePtr;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = MarshalledUnityObject_FromIntPtrUnsafe_m1C5AE0FB7CD1978A8387B0081DB909BAAC2324C3_inline(L_3, NULL);
		V_0 = L_4;
		RuntimeObject* L_5;
		L_5 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline((&V_0), NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPropertyVisitor_VisitPath_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m48D5F231D141FE04D8C4AA045C484BDF9928EBC0_fshared (GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	{
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_0 = ___0_property;
		__this->___Property = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Property), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 PhysicsBuffer_ToNativeArray_TisIl2CppFullySharedGenericStruct_m0F9AFB55DC2B342DB7011F2046193F6C30B035C1_fshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6;
		L_6 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 PhysicsBuffer_ToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m0F0ABCE955A32EF09A1B87865A417AEB795563F6 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86));
		NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t7D2E0867BA2C51E53A2DA86335020B175E7CDC86 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_mCAB0D1991E3CA4A5F2B29699805088ED767C85BF(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 PhysicsBuffer_ToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_mED810731A42A4D8DA091409BE1118284E1BDCE90 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68));
		NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tD433A29296E2B6926BA29A86B35FEEA6C63C8C68 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTransformChangeEvent_tAE5E62820ECA07C3DA656E95A0426D046DBF1A70_m9FF20AB277A63B6352D86FBE981963C274C1F6CA(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 PhysicsBuffer_ToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m761C52C5AA4ADD227519287E54411DB038E5F202 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602));
		NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tAE73165FE666BFCBFB4CA0B72FFA351ED1872602 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCapsuleGeometryElement_t834B66F28B944AA313AB50C9C1343105C15B591E_m9060EF20AD31BDDBF8E6A4D61F091D03B101F9E4(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF PhysicsBuffer_ToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_m37B90A7486634E138E17A378C29EE9B9D5F8D885 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF));
		NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tBA0BC79DB482632B1DB9D7FF91357CE99B4C73CF L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCircleGeometryElement_t9BD9AA0533C99AD620F9AED6458DFAE45B09B2B1_mEFA16883E3A65609AE169271BE4C8883BFC02D22(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 PhysicsBuffer_ToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_mF73C3A8A23424B2EDD8403FA8F98BB08FD0008F3 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683));
		NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_t2EDCD6FB85206C53A92873BFCBE46ACD9462C683 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLineElement_t012671A3568902C51830B75D1F5DB18B390F8454_m4A66A3B213055D7307CFE8FEFA301961ABB4D1C8(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 PhysicsBuffer_ToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m879C0DE9D9F6C9C5F2FF350635AC52F4FF874788 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8));
		NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tE9E9E78E659CC7A96EFD37D8824AEE58DE412CA8 L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPointElement_t5B29DB72B622AE3FF0CFB790DF18EC71970C66A0_m5F6104B7BABDD0AAEFC152E74ED645A50510E900(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D PhysicsBuffer_ToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_m8867F6CFE50831DD591716883D3B619545933E0E (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->___m_Size;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D));
		NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D L_1 = V_0;
		return L_1;
	}

IL_0012:
	{
		intptr_t* L_2 = (intptr_t*)(&__this->___m_Buffer);
		void* L_3;
		L_3 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_2, NULL);
		int32_t L_4 = __this->___m_Size;
		int32_t L_5 = __this->___m_Allocator;
		NativeArray_1_tA05A93824C515FF087043027C088AD9C5375BB1D L_6;
		L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPolygonGeometryElement_t4D6D06844AC5A1A51A7DD2F3BBA661FF1C906A57_mBFD05CEEFBE002B3A028DCB2B994626108D1DE63(L_3, L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 PhysicsBuffer_ToReadOnlySpan_TisIl2CppFullySharedGenericStruct_m7DC92A2EBDE62FBDF265E6AE37A3FAD4CB595ECF_fshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 PhysicsBuffer_ToReadOnlySpan_TisBodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84_m770A3C01394D2ADEF3AE05D2F391E494DFA44810 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_inline((&L_3), L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 PhysicsBuffer_ToReadOnlySpan_TisContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC_m66F49B0125C73F4C2E594465C8514787C9A2CB23 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_inline((&L_3), L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 PhysicsBuffer_ToReadOnlySpan_TisContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A_m861F78494399043A9EBE243F321F948344054CB9 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_inline((&L_3), L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B PhysicsBuffer_ToReadOnlySpan_TisJointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF_mB799CAEE69F5B8E6EF2D017D55CE25C100D11ACF (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_inline((&L_3), L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 PhysicsBuffer_ToReadOnlySpan_TisTriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576_m44C156471D4B8D3BB0599508FA4AA95421795B41 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_inline((&L_3), L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 PhysicsBuffer_ToReadOnlySpan_TisTriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A_m230051C58A774BEA26D6962E100FEFF0D990A22F (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_inline((&L_3), L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD PhysicsBuffer_ToSpan_TisIl2CppFullySharedGenericStruct_m22DF411BC8A0B8ADBE386340363B69D520FEE64C_fshared (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m2E922F7D304FD1EC1A39BA2A433FAD54064AE45F_inline((&L_3), L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 PhysicsBuffer_ToSpan_TisTransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7_m2E205B73CBCD92B0B8B173F222A163671DE75E59 (PhysicsBuffer_tCAD034F191834ECD0CAE25B468D0610D84B68A4D* __this, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_Buffer);
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline(L_0, NULL);
		int32_t L_2 = __this->___m_Size;
		Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_inline((&L_3), L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9027343AE2D5E12E783D960A500BBA8FE5195BBC (bool* ___0_source, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		bool* L_0 = ___0_source;
		bool* L_1;
		L_1 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline(L_0, NULL);
		bool L_2 = (*(bool*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m149761E33DBB5938797158CD2267777889249D20 (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		uint8_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3DF4ED5D8E7966448749B0EF4789CF9D28790956 (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		Il2CppChar* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(((uint16_t*)L_0)));
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC66F7E13FEF3C2A3380BBC07D08F03A8782D33CB (double* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		double* L_0 = ___0_source;
		double L_1 = *(L_0);
		V_0 = (bool)((((int32_t)((((double)L_1) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m89D52A31D7F2F05F0D17A850C58C0C5F8E030B6B (int16_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
	}
	{
		int16_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m25B619AFC89D9688CFC7B2569ED069D7C20C2994 (int32_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		int32_t* L_0 = ___0_source;
		int32_t L_1 = *(L_0);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAC18983A5F1A6A7A790401C2B2FD83531E72EBF6 (int64_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		int64_t* L_0 = ___0_source;
		int64_t L_1 = *(L_0);
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (bool)((!(((uint64_t)L_1) <= ((uint64_t)L_2)))? 1 : 0);
		bool* L_3;
		L_3 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_4 = (*(bool*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m09B0F2B814F11B8AE2E0C98B2DFC66B096AED85F (int8_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		int8_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m036744F72FE967803E4F56F626BD5921C272FE91 (float* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		float* L_0 = ___0_source;
		float L_1 = *(L_0);
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m12F65C97A5D3B2BEDA547C8B1D5B8507A2FB1A2E (String_t** ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticInit);
	bool V_0 = false;
	double V_1 = 0.0;
	bool V_2 = false;
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	double V_5 = 0.0;
	uint8_t V_6 = 0x0;
	Il2CppChar V_7 = 0x0;
	double V_8 = 0.0;
	int16_t V_9 = 0;
	double V_10 = 0.0;
	int16_t V_11 = 0;
	int32_t V_12 = 0;
	double V_13 = 0.0;
	int32_t V_14 = 0;
	int64_t V_15 = 0;
	double V_16 = 0.0;
	int64_t V_17 = 0;
	int8_t V_18 = 0x0;
	double V_19 = 0.0;
	int8_t V_20 = 0x0;
	float V_21 = 0.0f;
	double V_22 = 0.0;
	float V_23 = 0.0f;
	uint16_t V_24 = 0;
	double V_25 = 0.0;
	uint16_t V_26 = 0;
	uint32_t V_27 = 0;
	double V_28 = 0.0;
	uint32_t V_29 = 0;
	uint64_t V_30 = 0;
	double V_31 = 0.0;
	uint64_t V_32 = 0;
	{
	}
	{
		String_t** L_0 = ___0_source;
		String_t* L_1 = *(L_0);
		CHECKED_LOCAL_INIT(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticInit,(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352(L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		bool* L_3;
		L_3 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_4 = (*(bool*)L_3);
		return L_4;
	}

IL_0033:
	{
		String_t** L_5 = ___0_source;
		String_t* L_6 = *(L_5);
		bool L_7;
		L_7 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_6, (&V_1), NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		bool L_8;
		L_8 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A((&V_1), (&V_2), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m29A9863FEB29DD171534C86E92808796F4F4451A_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_0053;
		}
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(bool));
		bool L_9 = V_3;
		return L_9;
	}

IL_0053:
	{
		bool* L_10;
		L_10 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_2), NULL);
		bool L_11 = (*(bool*)L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m37E4ADE675B732C53AA44A131ECDDDB9117C2FEF (uint16_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		uint16_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1C45A7B312AAB20E4018482DD63528AE0FA8AD7F (uint32_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
	}
	{
		uint32_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool* L_2;
		L_2 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_3 = (*(bool*)L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_DoConvert_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA24D1584B8259D1400DB72B059F6E272F648CD46 (uint64_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	{
	}
	{
		uint64_t* L_0 = ___0_source;
		int64_t L_1 = *(((int64_t*)L_0));
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (bool)((!(((uint64_t)L_1) <= ((uint64_t)L_2)))? 1 : 0);
		bool* L_3;
		L_3 = UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline((&V_0), NULL);
		bool L_4 = (*(bool*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1D9F1B7A5D81F7D975583BEDDD47FB3FF700DB66 (bool* ___0_source, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_0027;
	}

IL_0027:
	{
	}
	{
		bool* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(((uint8_t*)L_0)));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0),NULL));
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_0), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF5EB901165BBA1DD14FB0BA192EDCEEAB74270AA (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		uint8_t* L_0 = ___0_source;
		uint8_t* L_1;
		L_1 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline(L_0, NULL);
		uint8_t L_2 = (*(uint8_t*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m32C9CA058130C3CD23CF459833CA0B683CB2CA25 (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	double V_2 = 0.0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		Il2CppChar* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(((uint16_t*)L_0)));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE3256829F19143C84DDFB7DE5E99CADED21B525F (double* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_0039;
	}

IL_0039:
	{
	}
	{
		double* L_0 = ___0_source;
		double L_1 = *(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,double,double,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEBDD863AA99BCA43774A0D46CFD65779C2371387 (int16_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int8_t V_6 = 0x0;
	float V_7 = 0.0f;
	String_t* V_8 = NULL;
	uint16_t V_9 = 0;
	uint32_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		int16_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m99856D60B28AB7F7BB78FB2CC353B0449B439D26 (int32_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		int32_t* L_0 = ___0_source;
		int32_t L_1 = *(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB68AB17BB4FA9B0767863E482CD15EFB7471C208 (int64_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002f;
	}

IL_002f:
	{
	}
	{
		int64_t* L_0 = ___0_source;
		int64_t L_1 = *(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int64_t,int64_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m28268368C65727EB799EFC8BA63007367C1CA714 (int8_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		int8_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF577073B6AEC787E4E861B6BB90E3007081CE686 (float* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_0035;
	}

IL_0035:
	{
	}
	{
		float* L_0 = ___0_source;
		float L_1 = *(L_0);
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,float,float,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9B13901D54CB804F0D654765920805B858783F96 (String_t** ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	double V_1 = 0.0;
	bool V_2 = false;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	double V_5 = 0.0;
	uint8_t V_6 = 0x0;
	Il2CppChar V_7 = 0x0;
	double V_8 = 0.0;
	int16_t V_9 = 0;
	double V_10 = 0.0;
	int16_t V_11 = 0;
	int32_t V_12 = 0;
	double V_13 = 0.0;
	int32_t V_14 = 0;
	int64_t V_15 = 0;
	double V_16 = 0.0;
	int64_t V_17 = 0;
	int8_t V_18 = 0x0;
	double V_19 = 0.0;
	int8_t V_20 = 0x0;
	float V_21 = 0.0f;
	double V_22 = 0.0;
	float V_23 = 0.0f;
	uint16_t V_24 = 0;
	double V_25 = 0.0;
	uint16_t V_26 = 0;
	uint32_t V_27 = 0;
	double V_28 = 0.0;
	uint32_t V_29 = 0;
	uint64_t V_30 = 0;
	double V_31 = 0.0;
	uint64_t V_32 = 0;
	{
		goto IL_0060;
	}

IL_0060:
	{
	}
	{
		String_t** L_0 = ___0_source;
		String_t* L_1 = *(L_0);
		bool L_2;
		L_2 = Byte_TryParse_mB1716E3B6714F20DF6C1FEDDC4A76AA78D5EA87B(L_1, (&V_4), NULL);
		if (!L_2)
		{
			goto IL_0093;
		}
	}
	{
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_4), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}

IL_0093:
	{
		String_t** L_5 = ___0_source;
		String_t* L_6 = *(L_5);
		bool L_7;
		L_7 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_6, (&V_5), NULL);
		if (!L_7)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_8;
		L_8 = PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC((&V_5), (&V_6), PrimitivesConverters_TryConvertPrimitiveOrString_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8FF415C41F9748700137EB247B2399BE6D3629AC_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_00b3;
		}
	}

IL_00a9:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(uint8_t));
		uint8_t L_9 = V_3;
		return L_9;
	}

IL_00b3:
	{
		uint8_t* L_10;
		L_10 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_6), NULL);
		uint8_t L_11 = (*(uint8_t*)L_10);
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF91E40B8997E8935DD25485CAA881E55AEC97A1 (uint16_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		uint16_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PrimitivesConverters_DoConvert_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC7AB336EA1F27C4E4B76DF6C6CA656D88C1FAFDC (uint32_t* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	double V_3 = 0.0;
	int16_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int8_t V_7 = 0x0;
	float V_8 = 0.0f;
	String_t* V_9 = NULL;
	uint16_t V_10 = 0;
	uint32_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		goto IL_002e;
	}

IL_002e:
	{
	}
	{
		uint32_t* L_0 = ___0_source;
		int32_t L_1 = ((int32_t)*(L_0));
		uint8_t L_2 = (il2cpp_codegen_conv<uint8_t,int32_t,int32_t,false,false>(L_1,NULL));
		V_1 = L_2;
		uint8_t* L_3;
		L_3 = UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline((&V_1), NULL);
		uint8_t L_4 = (*(uint8_t*)L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	{
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_0 = __this->___U3ChierarchyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* CastDataSourceVisitor_get_Binding_m5E49CD185160FDDD9703BECC9BBCABCC38D3470C_inline (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, const RuntimeMethod* method) 
{
	{
		DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* L_0 = __this->___U3CBindingU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 CastDataSourceVisitor_get_bindingContext_m4CB5DBA632F34ADA1D372891CF20CC352EC67681_inline (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, const RuntimeMethod* method) 
{
	{
		BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 L_0 = __this->___U3CbindingContextU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CastDataSourceVisitor_set_result_m85D8FC603976B86A95E07B083CA39AD7524A04BB_inline (CastDataSourceVisitor_tC3CB0A12B690C5918F55BDAE0C4890E2549CFCB1* __this, BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___0_value, const RuntimeMethod* method) 
{
	{
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_0 = ___0_value;
		__this->___U3CresultU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CresultU3Ek__BackingField))->___U3CmessageU3Ek__BackingField), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UIPathVisitor_get_direction_m8EAE7149E1C74BB49BAEE95948B35F5C9B7EB346_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdirectionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* UIPathVisitor_get_binding_m03F7EA36AD3D36ADECF9C571DD914933D7CA7338_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) 
{
	{
		DataBinding_t4AEDF779EB49F9E11B45F99385482936B2FC34DA* L_0 = __this->___U3CbindingU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 UIPathVisitor_get_bindingContext_mE1C76F6A0BF1B24EA6D1BB247752F5EE0586B4F7_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, const RuntimeMethod* method) 
{
	{
		BindingContext_t778372EB4EF18CA90841DA499159C1A391D470E2 L_0 = __this->___U3CbindingContextU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIPathVisitor_set_result_m5195F6D8FA895AC39C2ADE63E665878C38795079_inline (UIPathVisitor_t030D53A8AA87255F04EB5A0FB37AF9D1ADB51B21* __this, BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___0_value, const RuntimeMethod* method) 
{
	{
		BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB L_0 = ___0_value;
		__this->___U3CresultU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CresultU3Ek__BackingField))->___U3CmessageU3Ek__BackingField), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD CommandEvent_get_eventModifiers_mDE813197A28BFBB82027157E446A56BDA43E8AD8_inline (CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* __this, const RuntimeMethod* method) 
{
	{
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_0 = __this->___U3CeventModifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD IMECompositionEvent_get_eventModifiers_m4B212B13B5AA27343B784C20FA77266C1D741012_inline (IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* __this, const RuntimeMethod* method) 
{
	{
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_0 = __this->___U3CeventModifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD KeyEvent_get_eventModifiers_mF90EB0DF537425D3D09B1E095A2B9D24EE448782_inline (KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* __this, const RuntimeMethod* method) 
{
	{
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_0 = __this->___U3CeventModifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD NavigationEvent_get_eventModifiers_mA4BA9D05B5E5E327B9E5A1889202FA12518AB815_inline (NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* __this, const RuntimeMethod* method) 
{
	{
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_0 = __this->___U3CeventModifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD PointerEvent_get_eventModifiers_m5C238F94AA34FB172F4D7256E5D68E838E3C5A05_inline (PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* __this, const RuntimeMethod* method) 
{
	{
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_0 = __this->___U3CeventModifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD TextInputEvent_get_eventModifiers_m0C34160E76D9DE9F4D307C6EDF4BBF7319BB6E78_inline (TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* __this, const RuntimeMethod* method) 
{
	{
		EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD L_0 = __this->___U3CeventModifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CommandEvent_get_eventSource_mAE9F153B7FBCF387F82996F35E9A181673800CDB_inline (CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CeventSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IMECompositionEvent_get_eventSource_m5A9262ED18044F734147AB4A65263C7E455B7CAB_inline (IMECompositionEvent_tDB878E24C29EAF63886AD297892F6408D74D9FE4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CeventSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyEvent_get_eventSource_m9A74264E7C276EEFA5F603C1EA12BC23034CDE0D_inline (KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CeventSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NavigationEvent_get_eventSource_mD35D875FBB7FA557068DF25BB145292A6EF9FBA0_inline (NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CeventSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEvent_get_eventSource_m433AD39B323BF13AE165F5F9D025444092FAEB33_inline (PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CeventSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TextInputEvent_get_eventSource_mD08759B60A91AAC1DD74CD97AABA7F47C1332CF2_inline (TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CeventSourceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArgValueList_GenerateLocallyUniqueTemporaryId_mDC92CA265E9AC118E3C7DAC04AFF263669C27F02_inline (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_PrevLocalArgId;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		__this->___m_PrevLocalArgId = L_1;
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ArgValueList_Append_m8976AA1BA506B735A4B72719E16760B1D03EF650_inline (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C* __this, EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* ___0_argValue, const RuntimeMethod* method) 
{
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_0 = ___0_argValue;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_1 = __this->___m_FirstArg;
		NullCheck(L_0);
		L_0->___nextArg = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___nextArg), (void*)L_1);
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_2 = ___0_argValue;
		__this->___m_FirstArg = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FirstArg), (void*)L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___handle;
		GCHandle_ThrowIfInvalid_m8BD7E31B383F657BB7B2512567A8296CFC16C931_inline(L_0, NULL);
		intptr_t L_1 = __this->___handle;
		bool L_2;
		L_2 = GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		intptr_t L_3 = __this->___handle;
		RuntimeObject* L_4;
		L_4 = GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline(L_3, NULL);
		return L_4;
	}

IL_0024:
	{
		intptr_t L_5 = __this->___handle;
		RuntimeObject* L_6;
		L_6 = GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794(L_5, NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC MarshalledUnityObject_FromIntPtrUnsafe_m1C5AE0FB7CD1978A8387B0081DB909BAAC2324C3_inline (intptr_t ___0_gcHandle, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0;
		L_0 = UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline((&___0_gcHandle), NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1 = (*(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)L_0);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint16_t* V_4 = NULL;
	int32_t V_5 = 0;
	int16_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint32_t* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint64_t* V_12 = NULL;
	int32_t V_13 = 0;
	int64_t* V_14 = NULL;
	int32_t V_15 = 0;
	float* V_16 = NULL;
	int32_t V_17 = 0;
	double* V_18 = NULL;
	int32_t V_19 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A V_20;
	memset((&V_20), 0, sizeof(V_20));
	uint16_t* G_B21_0 = NULL;
	uint16_t* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	uint16_t* G_B22_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B185_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B184_0 = NULL;
	int32_t G_B186_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B186_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B188_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B187_0 = NULL;
	int32_t G_B189_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B189_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B191_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B190_0 = NULL;
	int32_t G_B192_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B192_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B194_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B193_0 = NULL;
	int32_t G_B195_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B195_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B197_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B196_0 = NULL;
	int32_t G_B198_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B198_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B200_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B199_0 = NULL;
	int32_t G_B201_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B201_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B203_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B202_0 = NULL;
	int32_t G_B204_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B204_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B206_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B205_0 = NULL;
	int32_t G_B207_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B207_1 = NULL;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0447;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		goto IL_00c6;
	}

IL_00c6:
	{
	}
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		if ((uintptr_t)L_2 * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_3 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_2, 2));
		int8_t* L_4;
		if (L_3 == 0)
		{
			L_4 = NULL;
		}
		else
		{
			L_4 = (int8_t*)alloca(L_3);
			memset(L_4, 0, L_3);
		}
		V_4 = (uint16_t*)L_4;
		V_5 = 0;
		goto IL_0122;
	}

IL_00f2:
	{
		uint16_t* L_5 = V_4;
		int32_t L_6 = V_5;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8 = V_5;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		uint16_t L_9;
		L_9 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		int32_t L_10 = V_5;
		uint16_t L_11;
		L_11 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		bool L_12;
		L_12 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_9, L_11, NULL);
		if (L_12)
		{
			G_B21_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 2))));
			goto IL_0116;
		}
		G_B20_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 2))));
	}
	{
		G_B22_0 = 0;
		G_B22_1 = G_B20_0;
		goto IL_011b;
	}

IL_0116:
	{
		uint16_t L_13;
		L_13 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B22_0 = ((int32_t)(L_13));
		G_B22_1 = G_B21_0;
	}

IL_011b:
	{
		*(((int16_t*)G_B22_1)) = ((int16_t)G_B22_0);
		int32_t L_14 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0122:
	{
		int32_t L_15 = V_5;
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_16;
		L_16 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_00f2;
		}
	}
	{
		uint16_t* L_17 = V_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_18), (void*)L_17, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		return L_18;
	}

IL_0447:
	{
		il2cpp_codegen_initobj((&V_20), sizeof(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A));
		goto IL_06e5;
	}

IL_06e5:
	{
		goto IL_097b;
	}

IL_097b:
	{
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_19 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_20 = L_19.___register;
		uint16_t L_21 = L_20.___uint16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_22 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_23 = L_22.___register;
		uint16_t L_24 = L_23.___uint16_0;
		if ((((int32_t)L_21) == ((int32_t)L_24)))
		{
			G_B185_0 = (&V_20);
			goto IL_09b6;
		}
		G_B184_0 = (&V_20);
	}
	{
		G_B186_0 = 0;
		G_B186_1 = G_B184_0;
		goto IL_09bb;
	}

IL_09b6:
	{
		uint16_t L_25;
		L_25 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B186_0 = ((int32_t)(L_25));
		G_B186_1 = G_B185_0;
	}

IL_09bb:
	{
		G_B186_1->___uint16_0 = (uint16_t)G_B186_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_26 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_27 = L_26.___register;
		uint16_t L_28 = L_27.___uint16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_29 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_30 = L_29.___register;
		uint16_t L_31 = L_30.___uint16_1;
		if ((((int32_t)L_28) == ((int32_t)L_31)))
		{
			G_B188_0 = (&V_20);
			goto IL_09dd;
		}
		G_B187_0 = (&V_20);
	}
	{
		G_B189_0 = 0;
		G_B189_1 = G_B187_0;
		goto IL_09e2;
	}

IL_09dd:
	{
		uint16_t L_32;
		L_32 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B189_0 = ((int32_t)(L_32));
		G_B189_1 = G_B188_0;
	}

IL_09e2:
	{
		G_B189_1->___uint16_1 = (uint16_t)G_B189_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_33 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_34 = L_33.___register;
		uint16_t L_35 = L_34.___uint16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_36 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_37 = L_36.___register;
		uint16_t L_38 = L_37.___uint16_2;
		if ((((int32_t)L_35) == ((int32_t)L_38)))
		{
			G_B191_0 = (&V_20);
			goto IL_0a04;
		}
		G_B190_0 = (&V_20);
	}
	{
		G_B192_0 = 0;
		G_B192_1 = G_B190_0;
		goto IL_0a09;
	}

IL_0a04:
	{
		uint16_t L_39;
		L_39 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B192_0 = ((int32_t)(L_39));
		G_B192_1 = G_B191_0;
	}

IL_0a09:
	{
		G_B192_1->___uint16_2 = (uint16_t)G_B192_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_40 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_41 = L_40.___register;
		uint16_t L_42 = L_41.___uint16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_43 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_44 = L_43.___register;
		uint16_t L_45 = L_44.___uint16_3;
		if ((((int32_t)L_42) == ((int32_t)L_45)))
		{
			G_B194_0 = (&V_20);
			goto IL_0a2b;
		}
		G_B193_0 = (&V_20);
	}
	{
		G_B195_0 = 0;
		G_B195_1 = G_B193_0;
		goto IL_0a30;
	}

IL_0a2b:
	{
		uint16_t L_46;
		L_46 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B195_0 = ((int32_t)(L_46));
		G_B195_1 = G_B194_0;
	}

IL_0a30:
	{
		G_B195_1->___uint16_3 = (uint16_t)G_B195_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_47 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_48 = L_47.___register;
		uint16_t L_49 = L_48.___uint16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_50 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_51 = L_50.___register;
		uint16_t L_52 = L_51.___uint16_4;
		if ((((int32_t)L_49) == ((int32_t)L_52)))
		{
			G_B197_0 = (&V_20);
			goto IL_0a52;
		}
		G_B196_0 = (&V_20);
	}
	{
		G_B198_0 = 0;
		G_B198_1 = G_B196_0;
		goto IL_0a57;
	}

IL_0a52:
	{
		uint16_t L_53;
		L_53 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B198_0 = ((int32_t)(L_53));
		G_B198_1 = G_B197_0;
	}

IL_0a57:
	{
		G_B198_1->___uint16_4 = (uint16_t)G_B198_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_54 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_55 = L_54.___register;
		uint16_t L_56 = L_55.___uint16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_57 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_58 = L_57.___register;
		uint16_t L_59 = L_58.___uint16_5;
		if ((((int32_t)L_56) == ((int32_t)L_59)))
		{
			G_B200_0 = (&V_20);
			goto IL_0a79;
		}
		G_B199_0 = (&V_20);
	}
	{
		G_B201_0 = 0;
		G_B201_1 = G_B199_0;
		goto IL_0a7e;
	}

IL_0a79:
	{
		uint16_t L_60;
		L_60 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B201_0 = ((int32_t)(L_60));
		G_B201_1 = G_B200_0;
	}

IL_0a7e:
	{
		G_B201_1->___uint16_5 = (uint16_t)G_B201_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_61 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_62 = L_61.___register;
		uint16_t L_63 = L_62.___uint16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_64 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_65 = L_64.___register;
		uint16_t L_66 = L_65.___uint16_6;
		if ((((int32_t)L_63) == ((int32_t)L_66)))
		{
			G_B203_0 = (&V_20);
			goto IL_0aa0;
		}
		G_B202_0 = (&V_20);
	}
	{
		G_B204_0 = 0;
		G_B204_1 = G_B202_0;
		goto IL_0aa5;
	}

IL_0aa0:
	{
		uint16_t L_67;
		L_67 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B204_0 = ((int32_t)(L_67));
		G_B204_1 = G_B203_0;
	}

IL_0aa5:
	{
		G_B204_1->___uint16_6 = (uint16_t)G_B204_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_68 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_69 = L_68.___register;
		uint16_t L_70 = L_69.___uint16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_71 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_72 = L_71.___register;
		uint16_t L_73 = L_72.___uint16_7;
		if ((((int32_t)L_70) == ((int32_t)L_73)))
		{
			G_B206_0 = (&V_20);
			goto IL_0ac7;
		}
		G_B205_0 = (&V_20);
	}
	{
		G_B207_0 = 0;
		G_B207_1 = G_B205_0;
		goto IL_0acc;
	}

IL_0ac7:
	{
		uint16_t L_74;
		L_74 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B207_0 = ((int32_t)(L_74));
		G_B207_1 = G_B206_0;
	}

IL_0acc:
	{
		G_B207_1->___uint16_7 = (uint16_t)G_B207_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_75;
		memset((&L_75), 0, sizeof(L_75));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_75), (&V_20), NULL);
		return L_75;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ArgValueList_FindByValue_TisIl2CppSharedGenericObject_mECA0BE1B058B973E86ECA1DEE922955C6F82EA49_gshared_inline (ArgValueList_tF9404610631615CB400FD008E21A0CE700A1814C* __this, Il2CppSharedGenericObject** ___0_value, EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** ___1_arg, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_0 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_1 = __this->___m_FirstArg;
		*(((RuntimeObject**)L_0)) = ((RuntimeObject*)L_1);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_0), (void*)((RuntimeObject*)L_1));
		goto IL_001f;
	}

IL_000a:
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_2 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_3 = *(L_2);
		Il2CppSharedGenericObject** L_4 = ___0_value;
		NullCheck(L_3);
		bool L_5;
		L_5 = GenericVirtualFuncInvoker1< bool, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_3, L_4);
		if (!L_5)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)1;
	}

IL_0016:
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_6 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_7 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_8 = *(L_7);
		NullCheck(L_8);
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_9 = L_8->___nextArg;
		*(((RuntimeObject**)L_6)) = ((RuntimeObject*)L_9);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_6), (void*)((RuntimeObject*)L_9));
	}

IL_001f:
	{
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85** L_10 = ___1_arg;
		EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* L_11 = *(L_10);
		if (L_11)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* GetPooledFunc_Invoke_m4636F86A39752E604FA1B9AB04E87D00DD274455_gshared_inline (GetPooledFunc_tD1C5E06B5A940E5331B400454266F8E80624137B* __this, int32_t ___0_id, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) 
{
	typedef EventArgValue_t12B444AF86832453534803922BF5FCE39CFD0E85* (*FunctionPointerType) (RuntimeObject*, int32_t, Il2CppSharedGenericObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_id, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisIl2CppSharedGenericObject_mCE897EC9A79983B4B1E6E2C8342452256309044A_gshared_inline (Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD692C6AD4A813B80EF4C2C650DA20A01BAB8B900_inline (ReadOnlySpan_1_t7C8438B00110311A3FFF078F848928218D9D79F1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84* L_2;
		L_2 = il2cpp_unsafe_as_ref<BodyUpdateTarget_t6013C0FBA9A3E7A8E68F98F01A1B3EA92F574D84>((uint8_t*)L_1);
		ByReference_1_t3FCA8FF1FA32CFC8B394F6C061E343A0D3701912 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m84B3CCED99878FDE74473A0EE7D051C8467D541A_inline (ReadOnlySpan_1_tD1C684B7FBBE6B196C3D9C25D26C14087DDACC42* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactBeginTarget_t56AE151974F2573AEE7A94C0033B3D0F654D58CC>((uint8_t*)L_1);
		ByReference_1_t94B9C7E612FAA889D668D045B2EC5F1DBF3AFFF9 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m10EFD956DD5598E0BB4B432705ECA2DC3D21B5CF_inline (ReadOnlySpan_1_t2FC42E74698A85F864327A2F3603A016F223B360* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactEndTarget_tE6BBAE8C6CDE91B49A0F4BA4B7FB54332883236A>((uint8_t*)L_1);
		ByReference_1_t4A0B0D8287F5D040285FB49C3AA25A8EE38D5B23 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m15EED2F0FD0AD432090A6856F982685B71467F81_inline (ReadOnlySpan_1_t7D0A62688D12B6224D58E7D7EB6BBE34C2B5705B* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF* L_2;
		L_2 = il2cpp_unsafe_as_ref<JointThresholdTarget_t3D05E6C79F07DBC2277A1980ED540C93D55F60BF>((uint8_t*)L_1);
		ByReference_1_tA7727FC82C1D779EE2802A1968C3FFC569152294 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mA26404126E9D9DE6BE29D5F9EF6C6BC2422A2D88_inline (ReadOnlySpan_1_t2239736A651E959D4A4360EBC03DFBCFAE1C9DA6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576* L_2;
		L_2 = il2cpp_unsafe_as_ref<TriggerBeginTarget_t5502949EBCED40452D61487C8D3CCB893F177576>((uint8_t*)L_1);
		ByReference_1_tB78BE0105D10907AA8C665AF95DBAEF4BEF517CF L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m748A11CB59F4600404CFE970131654050E606631_inline (ReadOnlySpan_1_t4A1964D3768FECC83DDD199B546B177020E04377* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A* L_2;
		L_2 = il2cpp_unsafe_as_ref<TriggerEndTarget_t403C9C465F01F85B8C5E4BDDDE133CFF7EBD902A>((uint8_t*)L_1);
		ByReference_1_t5A8D94A74D3EF9FFDEF739B5061D38830B7FE058 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5599DAEC88C08C9797F461E977BF22E14E3C3008_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m8B358C367FCD4C5DF714C69892BD3F238BC4BE78_inline (Span_1_t9F6FBEA217E68146892F6B8BBCE2E2C9E95689A1* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7* L_2;
		L_2 = il2cpp_unsafe_as_ref<TransformWriteTween_t86FB859350EF146AC5D9CB4CA8196377B714E2B7>((uint8_t*)L_1);
		ByReference_1_tE65F7690AD68D042A57AB5586834E7F855D7028A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool* UnsafeUtility_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFAC64123CDCBD55D7F3EBE960A434127DBAC2DB0_inline (bool* ___0_from, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_from;
		bool* L_1;
		L_1 = UnsafeUtilityInternal_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3D9B5B2C16912294630A6DAD8928B960B7544E6_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* UnsafeUtility_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DC6C8431AF46D3B4AD529D400BD9FD0DC961014_inline (uint8_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_from;
		uint8_t* L_1;
		L_1 = UnsafeUtilityInternal_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5A66C1A526E263EC6778FF3879A6E62C618542C4_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GCHandle_ThrowIfInvalid_m8BD7E31B383F657BB7B2512567A8296CFC16C931_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD093BF647113E1F68097589713DF034331718B2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GCHandle_ThrowIfInvalid_m8BD7E31B383F657BB7B2512567A8296CFC16C931_RuntimeMethod_var)));
	}

IL_0018:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		intptr_t L_1 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(1,NULL));
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((intptr_t)((intptr_t)(L_0&L_1))) == ((intptr_t)L_2))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_handle;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		RuntimeObject** L_2;
		L_2 = il2cpp_unsafe_as_ref<RuntimeObject*>((intptr_t*)L_1);
		RuntimeObject* L_3 = *(L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		V_0 = (uint16_t)0;
		uintptr_t L_0 = (il2cpp_codegen_conv<uintptr_t,uint16_t*,intptr_t,false,false>((&V_0),NULL));
		*(((int16_t*)L_0)) = ((int16_t)((int32_t)65535));
		uint16_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* UnsafeUtility_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD94F597CB91662C823496DA9FA9A7CF908734A78_inline (intptr_t* ___0_from, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_from;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_1;
		L_1 = UnsafeUtilityInternal_As_TisIntPtr_t_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_mD43127D5F7AA6EB4B52E5C30BA53F29843E9E9A2_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit);
	{
		CHECKED_LOCAL_INIT(Vector_1_t2DEF63E613428E110D429967E5CA7DE8ADF91630_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) 
{
	{
		goto IL_0034;
	}

IL_0034:
	{
		goto IL_0068;
	}

IL_0068:
	{
	}
	{
		uint16_t L_0 = ___0_left;
		uint16_t L_1 = ___1_right;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_from;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
