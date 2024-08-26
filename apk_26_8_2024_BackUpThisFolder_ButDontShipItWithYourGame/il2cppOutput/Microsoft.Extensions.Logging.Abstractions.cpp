#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Threading.AsyncLocalValueChangedArgs`1<Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope>>
struct Action_1_tDC37E2E4D412A49FE75A1E0F4BDC2CECC8E40F81;
// System.Action`2<Microsoft.Extensions.Logging.ILogger,System.Exception>
struct Action_2_t6867F55B2C19F5B1DA842F14404A90CBB99104DD;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Threading.AsyncLocal`1<System.Object>
struct AsyncLocal_1_tD4F5685126A347B4A80FB2617D319335EFB96571;
// System.Threading.AsyncLocal`1<Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope>
struct AsyncLocal_1_t71E5F627E72F1E1EF168B15F1D893E0A276A9DE0;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>
struct ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53;
// System.Collections.Generic.Dictionary`2<System.Type,System.String>
struct Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE;
// System.Func`2<Microsoft.Extensions.Logging.ILogger,System.IDisposable>
struct Func_2_tB95BA8A833F24D8DDC8B83C045E82A0969E812C3;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>
struct Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5;
// System.Func`3<Microsoft.Extensions.Logging.FormattedLogValues,System.Exception,System.String>
struct Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3;
// System.Func`3<Microsoft.Extensions.Logging.FormattedLogValues,System.Object,System.Object>
struct Func_3_t40CDB714E743F1799F95B8D27ADFA72323E2BAB7;
// System.Func`3<Microsoft.Extensions.Logging.LoggerMessage/LogValues,System.Exception,System.String>
struct Func_3_tCEC4A7984DD90D712FEBC82FBAA3D2064E1AB4BE;
// System.Func`3<Microsoft.Extensions.Logging.LoggerMessage/LogValues,System.Object,System.Object>
struct Func_3_t5ACC940EC7EF806018107700F4455CF11A2D4316;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerable_1_t1F32F711C91AEBCFA4770668CA067447D2A4F665;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t913F242211877D391217C9D75152235266FDAF10;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.String>
struct KeyCollection_t555B8656568D51D28955442D71A19D8860BFF88C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>
struct Tables_t08CF1F13032F16BEC996C0953A5D6523A5984C43;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.String>
struct ValueCollection_t6E6C24D8CE99E9A850AB95B69939CBBA2CB9E7D9;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.String>[]
struct EntryU5BU5D_t7C07FADA3D121BF791083230AC898F54129541C8;
// System.Collections.Generic.KeyValuePair`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>[]
struct KeyValuePair_2U5BU5D_tFB3FB9A252E42FED2D0EC0C61EDBA70C7B5FB33C;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Assembly
struct Assembly_t;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t9ACC1C215038273AB68324B1EEB216226C5C483E;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Microsoft.Extensions.Logging.IExternalScopeProvider
struct IExternalScopeProvider_t6D441AD8C9AB1D5FD29C34DF62F453D59F4DDE88;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Microsoft.Extensions.Logging.ILogger
struct ILogger_t1C0C2CD1CDFA86541C20F898F7581FB2CB04BFB4;
// Microsoft.Extensions.Logging.ILoggerFactory
struct ILoggerFactory_t54A89DDF16F71A8E302F80F17BBDD1C8A148C526;
// Microsoft.Extensions.Logging.ILoggerProvider
struct ILoggerProvider_t52D5D6FAA6651A9E1964D1E6F80DA3F9892361E6;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tDEE701BD41E9E5D260606F79F75427B42C4CC0C0;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t8C2311A7523B4C06B6DB451F6DF102A6EF7DB234;
// Microsoft.Extensions.Logging.LogValuesFormatter
struct LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C;
// Microsoft.Extensions.Logging.LoggerExternalScopeProvider
struct LoggerExternalScopeProvider_tD86DAC8667B485C7D304236064E89A29A4C623E8;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Microsoft.Extensions.Logging.NullExternalScopeProvider
struct NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB;
// Microsoft.Extensions.Logging.Abstractions.NullLogger
struct NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1;
// Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory
struct NullLoggerFactory_t4B047A650310525B8498599EB00572DD2C808538;
// Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider
struct NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90;
// Microsoft.Extensions.Logging.NullScope
struct NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_tE858056C93FB929FE83085ABB479C858D40E58C9;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t83FFF423583ACF86AE02603B2DEE5F487B0546D8;
// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t7D4E8B83FE8C4C618904EE7500F26FE14C1031F7;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Resources.ResourceManager
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.Extensions.Logging.FormattedLogValues/<>c
struct U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C;
// Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14
struct U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD;
// Microsoft.Extensions.Logging.LogValuesFormatter/<>c
struct U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7;
// Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope
struct Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C;
// Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t7A1D5FDB415DB93F6AC1D6F55696A25A02C05EE9;
// Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tC16455A80D0F89710800ED7064BAFFF1582EA7C9;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674;
// Microsoft.Extensions.Logging.LoggerMessage/LogValues/<>c
struct U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076;
// Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7
struct U3CGetEnumeratorU3Ed__7_t1175A6D8A44E20D3128CABB56892A7B8E193CB2D;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t6867F55B2C19F5B1DA842F14404A90CBB99104DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncLocal_1_t71E5F627E72F1E1EF168B15F1D893E0A276A9DE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB95BA8A833F24D8DDC8B83C045E82A0969E812C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tCEC4A7984DD90D712FEBC82FBAA3D2064E1AB4BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILoggerFactory_t54A89DDF16F71A8E302F80F17BBDD1C8A148C526_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t1C0C2CD1CDFA86541C20F898F7581FB2CB04BFB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullLoggerFactory_t4B047A650310525B8498599EB00572DD2C808538_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__7_t1175A6D8A44E20D3128CABB56892A7B8E193CB2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t7A1D5FDB415DB93F6AC1D6F55696A25A02C05EE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_tC16455A80D0F89710800ED7064BAFFF1582EA7C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
IL2CPP_EXTERN_C String_t* _stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18;
IL2CPP_EXTERN_C String_t* _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE;
IL2CPP_EXTERN_C String_t* _stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E;
IL2CPP_EXTERN_C String_t* _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7;
IL2CPP_EXTERN_C String_t* _stringLiteral3F41BF20B4D5ED35ED0B5C03F1AF6B146720CB0B;
IL2CPP_EXTERN_C String_t* _stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D;
IL2CPP_EXTERN_C String_t* _stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8;
IL2CPP_EXTERN_C String_t* _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2;
IL2CPP_EXTERN_C String_t* _stringLiteral6B0053E5BC12967A61A36D68970E7E9514BA83D6;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9;
IL2CPP_EXTERN_C String_t* _stringLiteral7434CFB1B64AE9F03B145093A7B1B7D90A94209D;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6;
IL2CPP_EXTERN_C String_t* _stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB;
IL2CPP_EXTERN_C String_t* _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7;
IL2CPP_EXTERN_C String_t* _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7;
IL2CPP_EXTERN_C String_t* _stringLiteralE3165827D406DD8F354BE7515C630A771E98916A;
IL2CPP_EXTERN_C String_t* _stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
IL2CPP_EXTERN_C String_t* _stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralFD9D00BCD092E316C37453B79B7D577E2375C054;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncLocal_1__ctor_m0900D49FF1E3F0AB5D2F5D8020FCAEA30F50B2BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncLocal_1_get_Value_m61E35BC5D9D08362DE151EA2098AB79107A2299E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncLocal_1_set_Value_m8EADD88B960D024004EFDF059C29FFFE976F8A53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_GetOrAdd_m5EF0E65D8977A84F75210848D51F416EBB1F3D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_TryGetValue_m18880E9C6AC11DE8CE63D09CD6B1CD0B778E46F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_m3659626FF4BF93F715A9BD30A5176EC31C058B2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mABC63A9E661076B85F0C38BD3A8A40AAEA175816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFAF23CD29002CAB23492293F8C8B56962DE7A0B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FormattedLogValues_get_Item_m97B27F9468C950908B5159DE6597464D92ADF72E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ILogger_BeginScope_TisFormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_m64A36ECB92D2EC1AFA405C7A995D00EC3085CD2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ILogger_BeginScope_TisLogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_m3D7B8B72795716823547F64803E45E0A2175D1FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ILogger_Log_TisFormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_m2BE10C63CF08FD7A1E3C62F6075B3136827D0C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ILogger_Log_TisLogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_mCF7DC9226C971C5C1E0C2DD50C4770581674DC72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogValuesFormatter_GetValue_m937B78C1EEF207AE5F885B093158485737905F3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogValues_get_Item_m664FE6599AE8BA26DC6B55467D5BF9B8706388BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoggerExtensions_BeginScope_m0A6010B8465791879508F18A8B8D96A6CDF143E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoggerExtensions_MessageFormatter_m9FBE8058CC2F31726E5A8DB5AC2C8C87B858B935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoggerFactoryExtensions_CreateLogger_mBB87A72FEE212C65C756528CFEF89C9812F2FBF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoggerMessage_CreateLogValuesFormatter_mE62C17DFF45962BF9EB3316B2C9F3C97B2D80136_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Join_TisRuntimeObject_mA9B8DCEF92E54DCEE23246AC6EB15FA9BF740C02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m29F5DC693050EA4C8EBD39579FB5839CADD0E00A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__7_System_Collections_IEnumerator_Reset_m1A11BB90C9FCDA8215B8AC49DAD1A3E35893BBAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFormatArgumentU3Eb__20_0_mA29F3F7007130003B2875D01F037F0173B927422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__11_0_m2705FE8DEEF59909B80004DBC5587C8AE603FA3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__9_0_m8CA4F0E087E96B776FDB77E32D70D5EB282D3F7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CDefineScopeU3Eb__0_m789FA1A48FE80B71F99CEE8DA4E5FB8BA9731899_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CDefineU3Eb__0_mF036DC21A1F20244ABC6B4A52054033E5F669409_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SR_tB957049845659155E1A77859322B224FC3294F1C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3BB693180E6274A3640EC526A43281BBE9184E1E 
{
};

// System.Threading.AsyncLocal`1<Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope>
struct AsyncLocal_1_t71E5F627E72F1E1EF168B15F1D893E0A276A9DE0  : public RuntimeObject
{
	// System.Action`1<System.Threading.AsyncLocalValueChangedArgs`1<T>> System.Threading.AsyncLocal`1::m_valueChangedHandler
	Action_1_tDC37E2E4D412A49FE75A1E0F4BDC2CECC8E40F81* ___m_valueChangedHandler_0;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>
struct ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t08CF1F13032F16BEC996C0953A5D6523A5984C43* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_tFB3FB9A252E42FED2D0EC0C61EDBA70C7B5FB33C* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.String>
struct Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7C07FADA3D121BF791083230AC898F54129541C8* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t555B8656568D51D28955442D71A19D8860BFF88C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6E6C24D8CE99E9A850AB95B69939CBBA2CB9E7D9* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Microsoft.Extensions.Logging.LogValuesFormatter
struct LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C  : public RuntimeObject
{
	// System.String Microsoft.Extensions.Logging.LogValuesFormatter::_format
	String_t* ____format_2;
	// System.Collections.Generic.List`1<System.String> Microsoft.Extensions.Logging.LogValuesFormatter::_valueNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____valueNames_3;
	// System.String Microsoft.Extensions.Logging.LogValuesFormatter::<OriginalFormat>k__BackingField
	String_t* ___U3COriginalFormatU3Ek__BackingField_4;
};

struct LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_StaticFields
{
	// System.Char[] Microsoft.Extensions.Logging.LogValuesFormatter::FormatDelimiters
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___FormatDelimiters_1;
};

// Microsoft.Extensions.Logging.LoggerExtensions
struct LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08  : public RuntimeObject
{
};

struct LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_StaticFields
{
	// System.Func`3<Microsoft.Extensions.Logging.FormattedLogValues,System.Exception,System.String> Microsoft.Extensions.Logging.LoggerExtensions::_messageFormatter
	Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3* ____messageFormatter_0;
};

// Microsoft.Extensions.Logging.LoggerExternalScopeProvider
struct LoggerExternalScopeProvider_tD86DAC8667B485C7D304236064E89A29A4C623E8  : public RuntimeObject
{
	// System.Threading.AsyncLocal`1<Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope> Microsoft.Extensions.Logging.LoggerExternalScopeProvider::_currentScope
	AsyncLocal_1_t71E5F627E72F1E1EF168B15F1D893E0A276A9DE0* ____currentScope_0;
};

// Microsoft.Extensions.Logging.LoggerFactoryExtensions
struct LoggerFactoryExtensions_t128592B33046CE5100E8B844DB8343107584C6CA  : public RuntimeObject
{
};

// Microsoft.Extensions.Logging.LoggerMessage
struct LoggerMessage_t1BE3F19B9577001DF461F3BD6A2508B8DA8FC60E  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Microsoft.Extensions.Logging.NullExternalScopeProvider
struct NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB  : public RuntimeObject
{
};

struct NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB_StaticFields
{
	// Microsoft.Extensions.Logging.IExternalScopeProvider Microsoft.Extensions.Logging.NullExternalScopeProvider::<Instance>k__BackingField
	RuntimeObject* ___U3CInstanceU3Ek__BackingField_0;
};

// Microsoft.Extensions.Logging.Abstractions.NullLogger
struct NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1  : public RuntimeObject
{
};

struct NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_StaticFields
{
	// Microsoft.Extensions.Logging.Abstractions.NullLogger Microsoft.Extensions.Logging.Abstractions.NullLogger::<Instance>k__BackingField
	NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1* ___U3CInstanceU3Ek__BackingField_0;
};

// Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory
struct NullLoggerFactory_t4B047A650310525B8498599EB00572DD2C808538  : public RuntimeObject
{
};

struct NullLoggerFactory_t4B047A650310525B8498599EB00572DD2C808538_StaticFields
{
	// Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory::Instance
	NullLoggerFactory_t4B047A650310525B8498599EB00572DD2C808538* ___Instance_0;
};

// Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider
struct NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90  : public RuntimeObject
{
};

struct NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90_StaticFields
{
	// Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider::<Instance>k__BackingField
	NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90* ___U3CInstanceU3Ek__BackingField_0;
};

// Microsoft.Extensions.Logging.NullScope
struct NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D  : public RuntimeObject
{
};

struct NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D_StaticFields
{
	// Microsoft.Extensions.Logging.NullScope Microsoft.Extensions.Logging.NullScope::<Instance>k__BackingField
	NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D* ___U3CInstanceU3Ek__BackingField_0;
};

// System.Resources.ResourceManager
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB  : public RuntimeObject
{
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___ResourceSets_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53* ____resourceSets_2;
	// System.String System.Resources.ResourceManager::moduleDir
	String_t* ___moduleDir_3;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t* ___MainAssembly_4;
	// System.Type System.Resources.ResourceManager::_locationInfo
	Type_t* ____locationInfo_5;
	// System.Type System.Resources.ResourceManager::_userResourceSet
	Type_t* ____userResourceSet_6;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____neutralResourcesCulture_7;
	// System.Resources.ResourceManager/CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674* ____lastUsedResourceCache_8;
	// System.Boolean System.Resources.ResourceManager::_ignoreCase
	bool ____ignoreCase_9;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_10;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_11;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_12;
	// System.Version System.Resources.ResourceManager::_satelliteContractVersion
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____satelliteContractVersion_13;
	// System.Boolean System.Resources.ResourceManager::_lookedForSatelliteContractVersion
	bool ____lookedForSatelliteContractVersion_14;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t* ____callingAssembly_15;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF* ___m_callingAssembly_16;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_17;
};

struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_StaticFields
{
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_18;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_19;
	// System.Type System.Resources.ResourceManager::_minResourceSet
	Type_t* ____minResourceSet_20;
	// System.String System.Resources.ResourceManager::ResReaderTypeName
	String_t* ___ResReaderTypeName_21;
	// System.String System.Resources.ResourceManager::ResSetTypeName
	String_t* ___ResSetTypeName_22;
	// System.String System.Resources.ResourceManager::MscorlibName
	String_t* ___MscorlibName_23;
	// System.Int32 System.Resources.ResourceManager::DEBUG
	int32_t ___DEBUG_24;
};

// FxResources.Microsoft.Extensions.Logging.Abstractions.SR
struct SR_tB957049845659155E1A77859322B224FC3294F1C  : public RuntimeObject
{
};

// System.SR
struct SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641  : public RuntimeObject
{
};

struct SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_StaticFields
{
	// System.Boolean System.SR::s_usingResourceKeys
	bool ___s_usingResourceKeys_0;
	// System.Resources.ResourceManager System.SR::s_resourceManager
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* ___s_resourceManager_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Microsoft.Extensions.Internal.TypeNameHelper
struct TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34  : public RuntimeObject
{
};

struct TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.String> Microsoft.Extensions.Internal.TypeNameHelper::_builtInTypeNames
	Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* ____builtInTypeNames_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Microsoft.Extensions.Logging.FormattedLogValues/<>c
struct U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C  : public RuntimeObject
{
};

struct U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_StaticFields
{
	// Microsoft.Extensions.Logging.FormattedLogValues/<>c Microsoft.Extensions.Logging.FormattedLogValues/<>c::<>9
	U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C* ___U3CU3E9_0;
	// System.Func`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter> Microsoft.Extensions.Logging.FormattedLogValues/<>c::<>9__9_0
	Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5* ___U3CU3E9__9_0_1;
};

// Microsoft.Extensions.Logging.LogValuesFormatter/<>c
struct U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7  : public RuntimeObject
{
};

struct U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_StaticFields
{
	// Microsoft.Extensions.Logging.LogValuesFormatter/<>c Microsoft.Extensions.Logging.LogValuesFormatter/<>c::<>9
	U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7* ___U3CU3E9_0;
	// System.Func`2<System.Object,System.Object> Microsoft.Extensions.Logging.LogValuesFormatter/<>c::<>9__20_0
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___U3CU3E9__20_0_1;
};

// Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope
struct Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C  : public RuntimeObject
{
	// Microsoft.Extensions.Logging.LoggerExternalScopeProvider Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::_provider
	LoggerExternalScopeProvider_tD86DAC8667B485C7D304236064E89A29A4C623E8* ____provider_0;
	// System.Boolean Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::_isDisposed
	bool ____isDisposed_1;
	// Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::<Parent>k__BackingField
	Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* ___U3CParentU3Ek__BackingField_2;
	// System.Object Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::<State>k__BackingField
	RuntimeObject* ___U3CStateU3Ek__BackingField_3;
};

// Microsoft.Extensions.Logging.LoggerMessage/LogValues/<>c
struct U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076  : public RuntimeObject
{
};

struct U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076_StaticFields
{
	// Microsoft.Extensions.Logging.LoggerMessage/LogValues/<>c Microsoft.Extensions.Logging.LoggerMessage/LogValues/<>c::<>9
	U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076* ___U3CU3E9_0;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t9ACC1C215038273AB68324B1EEB216226C5C483E  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Microsoft.Extensions.Logging.EventId
struct EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 
{
	// System.Int32 Microsoft.Extensions.Logging.EventId::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.String Microsoft.Extensions.Logging.EventId::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of Microsoft.Extensions.Logging.EventId
struct EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshaled_pinvoke
{
	int32_t ___U3CIdU3Ek__BackingField_0;
	char* ___U3CNameU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Microsoft.Extensions.Logging.EventId
struct EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshaled_com
{
	int32_t ___U3CIdU3Ek__BackingField_0;
	Il2CppChar* ___U3CNameU3Ek__BackingField_1;
};

// Microsoft.Extensions.Logging.FormattedLogValues
struct FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114 
{
	// Microsoft.Extensions.Logging.LogValuesFormatter Microsoft.Extensions.Logging.FormattedLogValues::_formatter
	LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* ____formatter_4;
	// System.Object[] Microsoft.Extensions.Logging.FormattedLogValues::_values
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____values_5;
	// System.String Microsoft.Extensions.Logging.FormattedLogValues::_originalMessage
	String_t* ____originalMessage_6;
};

struct FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_StaticFields
{
	// System.Int32 Microsoft.Extensions.Logging.FormattedLogValues::_count
	int32_t ____count_2;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter> Microsoft.Extensions.Logging.FormattedLogValues::_formatters
	ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF* ____formatters_3;
};
// Native definition for P/Invoke marshalling of Microsoft.Extensions.Logging.FormattedLogValues
struct FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshaled_pinvoke
{
	LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* ____formatter_4;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____values_5;
	char* ____originalMessage_6;
};
// Native definition for COM marshalling of Microsoft.Extensions.Logging.FormattedLogValues
struct FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshaled_com
{
	LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* ____formatter_4;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____values_5;
	Il2CppChar* ____originalMessage_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t8C2311A7523B4C06B6DB451F6DF102A6EF7DB234  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_tE858056C93FB929FE83085ABB479C858D40E58C9  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags_0;
};

// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t83FFF423583ACF86AE02603B2DEE5F487B0546D8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;
};

// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t7D4E8B83FE8C4C618904EE7500F26FE14C1031F7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Runtime.CompilerServices.NullablePublicOnlyAttribute::IncludesInternals
	bool ___IncludesInternals_0;
};

// System.Void
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

// Microsoft.Extensions.Logging.LoggerMessage/LogValues
struct LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A 
{
	// Microsoft.Extensions.Logging.LogValuesFormatter Microsoft.Extensions.Logging.LoggerMessage/LogValues::_formatter
	LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* ____formatter_1;
};

struct LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_StaticFields
{
	// System.Func`3<Microsoft.Extensions.Logging.LoggerMessage/LogValues,System.Exception,System.String> Microsoft.Extensions.Logging.LoggerMessage/LogValues::Callback
	Func_3_tCEC4A7984DD90D712FEBC82FBAA3D2064E1AB4BE* ___Callback_0;
};
// Native definition for P/Invoke marshalling of Microsoft.Extensions.Logging.LoggerMessage/LogValues
struct LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_marshaled_pinvoke
{
	LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* ____formatter_1;
};
// Native definition for COM marshalling of Microsoft.Extensions.Logging.LoggerMessage/LogValues
struct LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_marshaled_com
{
	LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* ____formatter_1;
};

// Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions
struct DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326 
{
	// System.Boolean Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::<FullName>k__BackingField
	bool ___U3CFullNameU3Ek__BackingField_0;
	// System.Boolean Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::<IncludeGenericParameters>k__BackingField
	bool ___U3CIncludeGenericParametersU3Ek__BackingField_1;
	// System.Boolean Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::<IncludeGenericParameterNames>k__BackingField
	bool ___U3CIncludeGenericParameterNamesU3Ek__BackingField_2;
	// System.Char Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::<NestedTypeDelimiter>k__BackingField
	Il2CppChar ___U3CNestedTypeDelimiterU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions
struct DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326_marshaled_pinvoke
{
	int32_t ___U3CFullNameU3Ek__BackingField_0;
	int32_t ___U3CIncludeGenericParametersU3Ek__BackingField_1;
	int32_t ___U3CIncludeGenericParameterNamesU3Ek__BackingField_2;
	uint8_t ___U3CNestedTypeDelimiterU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions
struct DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326_marshaled_com
{
	int32_t ___U3CFullNameU3Ek__BackingField_0;
	int32_t ___U3CIncludeGenericParametersU3Ek__BackingField_1;
	int32_t ___U3CIncludeGenericParameterNamesU3Ek__BackingField_2;
	uint8_t ___U3CNestedTypeDelimiterU3Ek__BackingField_3;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14
struct U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD  : public RuntimeObject
{
	// System.Int32 Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::<>2__current
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ___U3CU3E2__current_1;
	// Microsoft.Extensions.Logging.FormattedLogValues Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::<>4__this
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114 ___U3CU3E4__this_2;
	// System.Int32 Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t7A1D5FDB415DB93F6AC1D6F55696A25A02C05EE9  : public RuntimeObject
{
	// Microsoft.Extensions.Logging.LoggerMessage/LogValues Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass0_0::logValues
	LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A ___logValues_0;
};

// Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tC16455A80D0F89710800ED7064BAFFF1582EA7C9  : public RuntimeObject
{
	// Microsoft.Extensions.Logging.LogLevel Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass7_0::logLevel
	int32_t ___logLevel_0;
	// Microsoft.Extensions.Logging.EventId Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass7_0::eventId
	EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId_1;
	// Microsoft.Extensions.Logging.LogValuesFormatter Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass7_0::formatter
	LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* ___formatter_2;
};

// Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7
struct U3CGetEnumeratorU3Ed__7_t1175A6D8A44E20D3128CABB56892A7B8E193CB2D  : public RuntimeObject
{
	// System.Int32 Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::<>2__current
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ___U3CU3E2__current_1;
	// Microsoft.Extensions.Logging.LoggerMessage/LogValues Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::<>4__this
	LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A ___U3CU3E4__this_2;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`2<Microsoft.Extensions.Logging.ILogger,System.Exception>
struct Action_2_t6867F55B2C19F5B1DA842F14404A90CBB99104DD  : public MulticastDelegate_t
{
};

// System.Func`2<Microsoft.Extensions.Logging.ILogger,System.IDisposable>
struct Func_2_tB95BA8A833F24D8DDC8B83C045E82A0969E812C3  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>
struct Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5  : public MulticastDelegate_t
{
};

// System.Func`3<Microsoft.Extensions.Logging.FormattedLogValues,System.Exception,System.String>
struct Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3  : public MulticastDelegate_t
{
};

// System.Func`3<Microsoft.Extensions.Logging.LoggerMessage/LogValues,System.Exception,System.String>
struct Func_3_tCEC4A7984DD90D712FEBC82FBAA3D2064E1AB4BE  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
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
// System.Object[]
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 m_Items[1];

	inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_TryGetValue_mE794BBB2811B9244CF8ECB11994F70DEB6BEFDF7_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TValue System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetOrAdd_mF8E3897F8089492DC23AF0FE945A15B5C2499B00_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___key0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___valueFactory1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m0891574E19148D39C27C179BF2787093757C5F57_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, const RuntimeMethod* method) ;
// System.Void System.Func`3<Microsoft.Extensions.Logging.FormattedLogValues,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m113A0A0D802341FBDA1F1DB7F96A7C29DD606381_gshared (Func_3_t40CDB714E743F1799F95B8D27ADFA72323E2BAB7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.AsyncLocal`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1__ctor_mBF8F13A5D3C172E5B9F8D49C89316AEE486DAA4D_gshared (AsyncLocal_1_tD4F5685126A347B4A80FB2617D319335EFB96571* __this, const RuntimeMethod* method) ;
// T System.Threading.AsyncLocal`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncLocal_1_get_Value_m32C2B4A42E890BE6C8A5965E67534DCE44E80863_gshared (AsyncLocal_1_tD4F5685126A347B4A80FB2617D319335EFB96571* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.AsyncLocal`1<System.Object>::set_Value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLocal_1_set_Value_mDA05AE474CFFB6A07CB4947D5FC7E3652A03C18F_gshared (AsyncLocal_1_tD4F5685126A347B4A80FB2617D319335EFB96571* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Func`3<Microsoft.Extensions.Logging.LoggerMessage/LogValues,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_mA06F0F1421F27692E5201D3A4F968EA4C724B71F_gshared (Func_3_t5ACC940EC7EF806018107700F4455CF11A2D4316* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.String System.String::Join<System.Object>(System.String,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisRuntimeObject_mA9B8DCEF92E54DCEE23246AC6EB15FA9BF740C02_gshared (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_mF3CF210DED551ADFE58CA86051C7EB345902F2B9_inline (const RuntimeMethod* method) ;
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_mD0A0272EFF71CBDF95E3F9CD1DD3D8284A30AB14 (const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7 (String_t* ___separator0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject* ___arg02, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject* ___arg02, RuntimeObject* ___arg13, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF8E53122BE8F0F617357DFB75C3912D1242DE263 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject* ___arg02, RuntimeObject* ___arg13, RuntimeObject* ___arg24, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Resources.ResourceManager::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784 (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* __this, Type_t* ___resourceSource0, const RuntimeMethod* method) ;
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mF795F7CE9EAD235B0E320DC95B1482F1CEF4B2F8 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method) ;
// System.Boolean System.AppContext::TryGetSwitch(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppContext_TryGetSwitch_mD2500DB32F941228B6964BC53CAA0EA7047AEB78 (String_t* ___switchName0, bool* ___isEnabled1, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Internal.TypeNameHelper::GetTypeDisplayName(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeNameHelper_GetTypeDisplayName_m8C466BFFD19D6F31A4A9B402A8B0C3C3357F98CE (Type_t* ___type0, bool ___fullName1, bool ___includeGenericParameterNames2, bool ___includeGenericParameters3, Il2CppChar ___nestedTypeDelimiter4, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::.ctor(System.Boolean,System.Boolean,System.Boolean,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameOptions__ctor_m6798CBC02BDB0097748FC53E579C4CBB19F3493E (DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* __this, bool ___fullName0, bool ___includeGenericParameterNames1, bool ___includeGenericParameters2, Il2CppChar ___nestedTypeDelimiter3, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Internal.TypeNameHelper::ProcessType(System.Text.StringBuilder,System.Type,Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameHelper_ProcessType_m179A16CB7AE1790D7FF89AE371A46BBB64110256 (StringBuilder_t* ___builder0, Type_t* ___type1, DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* ___options2, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Internal.TypeNameHelper::ProcessGenericType(System.Text.StringBuilder,System.Type,System.Type[],System.Int32,Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameHelper_ProcessGenericType_mC63A65C08F5C459A08D2F82FB97B30C5AAAACEDB (StringBuilder_t* ___builder0, Type_t* ___type1, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___genericArguments2, int32_t ___length3, DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* ___options4, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Internal.TypeNameHelper::ProcessArrayType(System.Text.StringBuilder,System.Type,Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameHelper_ProcessArrayType_m7AD3E24186ACDAE9E799ED7B820C80C0B6581DCA (StringBuilder_t* ___builder0, Type_t* ___type1, DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* ___options2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.String>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mABC63A9E661076B85F0C38BD3A8A40AAEA175816 (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* __this, Type_t* ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE*, Type_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::get_IncludeGenericParameterNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DisplayNameOptions_get_IncludeGenericParameterNames_m258C00527A5FE52EC9C4809EA6D8EFE388469AB4_inline (DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::get_FullName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DisplayNameOptions_get_FullName_mB7B1F7699EDD92607C59D3B90E351876089687A3_inline (DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* __this, const RuntimeMethod* method) ;
// System.Char Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::get_NestedTypeDelimiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar DisplayNameOptions_get_NestedTypeDelimiter_mCDAE92FC7CC60CE0D9C5B93DF949B3B56053BB44_inline (DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.Char,System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Replace_mE586B988AAC0FBD87B94106CC0882930295DF830 (StringBuilder_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3 (StringBuilder_t* __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsNested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsNested_mCF57E6A68BA5CEDDB9DA81CB34B6945F414FB3FD (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703 (StringBuilder_t* __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::get_IncludeGenericParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DisplayNameOptions_get_IncludeGenericParameters_m48B06CD7DC2845DBF0DF8D4E4450C2BAE14AFABF_inline (DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.String>::.ctor()
inline void Dictionary_2__ctor_mFAF23CD29002CAB23492293F8C8B56962DE7A0B6 (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* __this, Type_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE*, Type_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.Extensions.Logging.EventId::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventId__ctor_mFDDCC191B93DEABA80140E50C8E5A592EB5E1C6F (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, int32_t ___id0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Logging.EventId::Equals(Microsoft.Extensions.Logging.EventId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventId_Equals_m11118ACCEA6715D6EEA89CA54745F9F63CDBCC42 (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___other0, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Logging.EventId::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EventId_get_Id_m86B112CC64D4CBED6F5319DD779D103663493B3A_inline (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Logging.EventId::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EventId_get_Name_m8BD116C470BA834B6E7392A4D04A34BC1E63F8B6_inline (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Logging.EventId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EventId_ToString_m9B1D1541573A8A460D61C8EC14C5C17FC6CEEFD5 (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Logging.EventId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventId_Equals_m0CAAD86008C8E5DDE9F9F8D81341D727643F91F1 (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Logging.EventId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventId_GetHashCode_m1C7BA059C42C765351C534BB03BC2D3A1850645C (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) ;
// Microsoft.Extensions.Logging.LogValuesFormatter Microsoft.Extensions.Logging.FormattedLogValues::get_Formatter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* FormattedLogValues_get_Formatter_m11CD6604CB29C5F160AE7712D6C78F96BA952BB6_inline (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>::TryGetValue(TKey,TValue&)
inline bool ConcurrentDictionary_2_TryGetValue_m18880E9C6AC11DE8CE63D09CD6B1CD0B778E46F9 (ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF* __this, String_t* ___key0, LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF*, String_t*, LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C**, const RuntimeMethod*))ConcurrentDictionary_2_TryGetValue_mE794BBB2811B9244CF8ECB11994F70DEB6BEFDF7_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogValuesFormatter__ctor_m63200EDB80E69D4D1CD0467FA2FBACFF255F9504 (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mDFAFE1C452564604F3E7A340E3D081BDD670FE55 (Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// TValue System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
inline LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* ConcurrentDictionary_2_GetOrAdd_m5EF0E65D8977A84F75210848D51F416EBB1F3D36 (ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF* __this, String_t* ___key0, Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5* ___valueFactory1, const RuntimeMethod* method)
{
	return ((  LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* (*) (ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF*, String_t*, Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5*, const RuntimeMethod*))ConcurrentDictionary_2_GetOrAdd_mF8E3897F8089492DC23AF0FE945A15B5C2499B00_gshared)(__this, ___key0, ___valueFactory1, method);
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattedLogValues__ctor_mCF58384A2EC59C96A510D418010A5199F384420F (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values1, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Logging.FormattedLogValues::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattedLogValues_get_Count_mD4F7E80166B50AD2801CEAB9AE1A7ADC1C4C63FB (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, String_t*, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.LogValuesFormatter::GetValue(System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 LogValuesFormatter_GetValue_m937B78C1EEF207AE5F885B093158485737905F3F (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.FormattedLogValues::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 FormattedLogValues_get_Item_m97B27F9468C950908B5159DE6597464D92ADF72E (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Microsoft.Extensions.Logging.LogValuesFormatter::get_ValueNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* LogValuesFormatter_get_ValueNames_m7BB3F9B56AD516B6ECB699D81D9D17E280A422FB_inline (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14__ctor_m65962E588A342B47B1C4B6331FFE4FB6C14FB50F (U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Microsoft.Extensions.Logging.FormattedLogValues::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FormattedLogValues_GetEnumerator_mF7E3A4A99FA8F4E88A16B1AD39A141643AF7EA70 (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::Format(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_Format_m74126A3B9E54B7EC888F5D4DB0764271FC090323 (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values0, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Logging.FormattedLogValues::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormattedLogValues_ToString_m59B2396785E3BA6FD99896918E462096503CFDF6 (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Microsoft.Extensions.Logging.FormattedLogValues::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FormattedLogValues_System_Collections_IEnumerable_GetEnumerator_m0EFD0090FC1E78E9826263068A00CB7BDD4CF5E4 (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Microsoft.Extensions.Logging.LogValuesFormatter>::.ctor()
inline void ConcurrentDictionary_2__ctor_m3659626FF4BF93F715A9BD30A5176EC31C058B2E (ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m0891574E19148D39C27C179BF2787093757C5F57_gshared)(__this, method);
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m63593778D5647B867ACD5E3EC47BA9A7812F292A (U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___location0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,Microsoft.Extensions.Logging.EventId,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F (RuntimeObject* ___logger0, int32_t ___logLevel1, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId2, Exception_t* ___exception3, String_t* ___message4, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args5, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,Microsoft.Extensions.Logging.EventId,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_mF55AB752259EDA23B7A55676519103760DCD7C27 (RuntimeObject* ___logger0, int32_t ___logLevel1, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId2, String_t* ___message3, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args4, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_mE483B53E65EE67EA6C848AD5B94A3D479E26E4D3 (RuntimeObject* ___logger0, int32_t ___logLevel1, Exception_t* ___exception2, String_t* ___message3, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args4, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_m3F0219E0DB6E2CB10D0618F935EFE4BB8BAE85EA (RuntimeObject* ___logger0, int32_t ___logLevel1, String_t* ___message2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) ;
// Microsoft.Extensions.Logging.EventId Microsoft.Extensions.Logging.EventId::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 EventId_op_Implicit_m0DAA73915C7788018C741D3EE391ABABBC967BF4 (int32_t ___i0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Func`3<Microsoft.Extensions.Logging.FormattedLogValues,System.Exception,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m6D2444715EF8A9B257B8C6C130AE189F866A8F98 (Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m113A0A0D802341FBDA1F1DB7F96A7C29DD606381_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Threading.AsyncLocal`1<Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope>::.ctor()
inline void AsyncLocal_1__ctor_m0900D49FF1E3F0AB5D2F5D8020FCAEA30F50B2BE (AsyncLocal_1_t71E5F627E72F1E1EF168B15F1D893E0A276A9DE0* __this, const RuntimeMethod* method)
{
	((  void (*) (AsyncLocal_1_t71E5F627E72F1E1EF168B15F1D893E0A276A9DE0*, const RuntimeMethod*))AsyncLocal_1__ctor_mBF8F13A5D3C172E5B9F8D49C89316AEE486DAA4D_gshared)(__this, method);
}
// T System.Threading.AsyncLocal`1<Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope>::get_Value()
inline Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* AsyncLocal_1_get_Value_m61E35BC5D9D08362DE151EA2098AB79107A2299E (AsyncLocal_1_t71E5F627E72F1E1EF168B15F1D893E0A276A9DE0* __this, const RuntimeMethod* method)
{
	return ((  Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* (*) (AsyncLocal_1_t71E5F627E72F1E1EF168B15F1D893E0A276A9DE0*, const RuntimeMethod*))AsyncLocal_1_get_Value_m32C2B4A42E890BE6C8A5965E67534DCE44E80863_gshared)(__this, method);
}
// System.Void Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::.ctor(Microsoft.Extensions.Logging.LoggerExternalScopeProvider,System.Object,Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scope__ctor_mE42917026B6B147497A51B3645AB7657E6B360D7 (Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* __this, LoggerExternalScopeProvider_tD86DAC8667B485C7D304236064E89A29A4C623E8* ___provider0, RuntimeObject* ___state1, Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* ___parent2, const RuntimeMethod* method) ;
// System.Void System.Threading.AsyncLocal`1<Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope>::set_Value(T)
inline void AsyncLocal_1_set_Value_m8EADD88B960D024004EFDF059C29FFFE976F8A53 (AsyncLocal_1_t71E5F627E72F1E1EF168B15F1D893E0A276A9DE0* __this, Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* ___value0, const RuntimeMethod* method)
{
	((  void (*) (AsyncLocal_1_t71E5F627E72F1E1EF168B15F1D893E0A276A9DE0*, Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C*, const RuntimeMethod*))AsyncLocal_1_set_Value_mDA05AE474CFFB6A07CB4947D5FC7E3652A03C18F_gshared)(__this, ___value0, method);
}
// System.Object Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Scope_get_State_m90CA0487CF9D917504B5CE67D2FC05779FBC18C9_inline (Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* __this, const RuntimeMethod* method) ;
// Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::get_Parent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* Scope_get_Parent_m43A08C5AEF90BA9B4A45389F3C613225456C4935_inline (Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m040C0D882B9A9A200B58F5038F1246AA44EB9B91 (U3CU3Ec__DisplayClass0_0_t7A1D5FDB415DB93F6AC1D6F55696A25A02C05EE9* __this, const RuntimeMethod* method) ;
// Microsoft.Extensions.Logging.LogValuesFormatter Microsoft.Extensions.Logging.LoggerMessage::CreateLogValuesFormatter(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* LoggerMessage_CreateLogValuesFormatter_mE62C17DFF45962BF9EB3316B2C9F3C97B2D80136 (String_t* ___formatString0, int32_t ___expectedNamedParameterCount1, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues::.ctor(Microsoft.Extensions.Logging.LogValuesFormatter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogValues__ctor_m311E4B637A436B1B78CD9334DF9BC0F1D709FC90_inline (LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* __this, LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* ___formatter0, const RuntimeMethod* method) ;
// System.Void System.Func`2<Microsoft.Extensions.Logging.ILogger,System.IDisposable>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE48C1C3753EBFF77E4471D3C4C6D90B7D518F55B (Func_2_tB95BA8A833F24D8DDC8B83C045E82A0969E812C3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB95BA8A833F24D8DDC8B83C045E82A0969E812C3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mA24CE2A417C8816801B1ADC2417A3A6879223D90 (U3CU3Ec__DisplayClass7_0_tC16455A80D0F89710800ED7064BAFFF1582EA7C9* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<Microsoft.Extensions.Logging.ILogger,System.Exception>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m743BBD0579194EE65E982DAFDA6B0585D6961266 (Action_2_t6867F55B2C19F5B1DA842F14404A90CBB99104DD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6867F55B2C19F5B1DA842F14404A90CBB99104DD*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// System.String System.SR::get_UnexpectedNumberOfNamedParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_UnexpectedNumberOfNamedParameters_m7630BC497FF937E484D6C06F8E4734EA6AC6CCC4 (const RuntimeMethod* method) ;
// System.String System.SR::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mDA163C89DFEB1BBC7129188435C190AE8AD47935 (String_t* ___resourceFormat0, RuntimeObject* ___p11, RuntimeObject* ___p22, RuntimeObject* ___p33, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::get_OriginalFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_get_OriginalFormat_m3BC5A1D8FD7535342E570848330DD86D641963E5_inline (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.LoggerMessage/LogValues::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 LogValues_get_Item_m664FE6599AE8BA26DC6B55467D5BF9B8706388BD (LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Logging.LoggerMessage/LogValues::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogValues_get_Count_mD518ADCA875927FF5FD58B9FBDDF1BC0DCD010FE (LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7__ctor_m1A726EC62C2083E1069C9F272CDAAB19328E901F (U3CGetEnumeratorU3Ed__7_t1175A6D8A44E20D3128CABB56892A7B8E193CB2D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Microsoft.Extensions.Logging.LoggerMessage/LogValues::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogValues_GetEnumerator_m6337242798213F4331659464F996BBDD5F9789E7 (LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::Format()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_Format_mFD3DA5894CA61DE796D2B6770399A71E541E9458_inline (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Logging.LoggerMessage/LogValues::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValues_ToString_m2C2B83CA5AC4CF587F24146CE120AA6CE505DC34 (LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Microsoft.Extensions.Logging.LoggerMessage/LogValues::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogValues_System_Collections_IEnumerable_GetEnumerator_m0F929B015BC8762FEAF804F2198992D52506149A (LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* __this, const RuntimeMethod* method) ;
// System.Void System.Func`3<Microsoft.Extensions.Logging.LoggerMessage/LogValues,System.Exception,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mB5D7D5F9D4E6C9C74C736A889CA1093E8E405337 (Func_3_tCEC4A7984DD90D712FEBC82FBAA3D2064E1AB4BE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tCEC4A7984DD90D712FEBC82FBAA3D2064E1AB4BE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_mA06F0F1421F27692E5201D3A4F968EA4C724B71F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDF58CC0F3E28C79A0AC30323108E89B00F43BA4A (U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter::set_OriginalFormat(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogValuesFormatter_set_OriginalFormat_m80D85FA1506C051EC3B5AC66852C46D3F466881A_inline (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Logging.LogValuesFormatter::FindBraceIndex(System.String,System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogValuesFormatter_FindBraceIndex_m1DF65D25C5132079993BFA85236C6E14EBB60C87 (String_t* ___format0, Il2CppChar ___brace1, int32_t ___startIndex2, int32_t ___endIndex3, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Logging.LogValuesFormatter::FindIndexOfAny(System.String,System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogValuesFormatter_FindIndexOfAny_m2C4C3C1725A87F036579C904685B8F699B7BBBE2 (String_t* ___format0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars1, int32_t ___startIndex2, int32_t ___endIndex3, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_m740B0108B7FAFFAB1C3F88E782B094195A4E3B75 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___anyOf0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Object Microsoft.Extensions.Logging.LogValuesFormatter::FormatArgument(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogValuesFormatter_FormatArgument_m9FCBAF42DAD055555C37C03E89B3F0EDF5149C43 (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_gshared)(___source0, method);
}
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398 (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.String System.String::Join<System.Object>(System.String,System.Collections.Generic.IEnumerable`1<T>)
inline String_t* String_Join_TisRuntimeObject_mA9B8DCEF92E54DCEE23246AC6EB15FA9BF740C02 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, RuntimeObject*, const RuntimeMethod*))String_Join_TisRuntimeObject_mA9B8DCEF92E54DCEE23246AC6EB15FA9BF740C02_gshared)(___separator0, ___values1, method);
}
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7AEAF2FBEE395C43F90FF60DDAE0BCA14710BD5F (U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7* __this, const RuntimeMethod* method) ;
// Microsoft.Extensions.Logging.NullScope Microsoft.Extensions.Logging.NullScope::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D* NullScope_get_Instance_mC69C339B96BE12428A4655017DB2A50F145704A0_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Logging.NullExternalScopeProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullExternalScopeProvider__ctor_m1A90074CBED3B8F6B7ABF790F383A321EB5D32EB (NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Logging.NullScope::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullScope__ctor_m725A46E5F680D351E399CC43CE709A0753E6451E (NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLogger__ctor_m9DB1BFF884C082919761A143CC01A34CAC7A1E8E (NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1* __this, const RuntimeMethod* method) ;
// Microsoft.Extensions.Logging.Abstractions.NullLogger Microsoft.Extensions.Logging.Abstractions.NullLogger::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1* NullLogger_get_Instance_mCD4F43579995FBC05FBB5408A07271046CA76A75_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLoggerFactory__ctor_m9F87C2A6E631895D445775B8F52E4330B5E012F0 (NullLoggerFactory_t4B047A650310525B8498599EB00572DD2C808538* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLoggerProvider__ctor_m8679B82F66C55DBDA519002598E5E2803C70F0A6 (NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mC81BDD0D64F17870C83932B3CCC11EAB3E9C0E2B (EmbeddedAttribute_t9ACC1C215038273AB68324B1EEB216226C5C483E* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mE1B42485A59A0B4885D4ECDC2D51989D95A26F39 (IsReadOnlyAttribute_t8C2311A7523B4C06B6DB451F6DF102A6EF7DB234* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m361B7A8DD47CB105445E135E44565DD842647818 (NullableAttribute_tE858056C93FB929FE83085ABB479C858D40E58C9* __this, uint8_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = p0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		__this->___NullableFlags_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags_0), (void*)L_1);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m80C72A556EA70CDD9215DB49B03413354BB20D78 (NullableAttribute_tE858056C93FB929FE83085ABB479C858D40E58C9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* p0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = p0;
		__this->___NullableFlags_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.NullableContextAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_m70A1A1B3EC6334AA446FAF5262400C916A40B0D6 (NullableContextAttribute_t83FFF423583ACF86AE02603B2DEE5F487B0546D8* __this, uint8_t p0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		uint8_t L_0 = p0;
		__this->___Flag_0 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.NullablePublicOnlyAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullablePublicOnlyAttribute__ctor_mAEA922DA51E9F4CAD73B87BB48423B83C9A11462 (NullablePublicOnlyAttribute_t7D4E8B83FE8C4C618904EE7500F26FE14C1031F7* __this, bool p0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = p0;
		__this->___IncludesInternals_0 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_mF3CF210DED551ADFE58CA86051C7EB345902F2B9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		bool L_0 = ((SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_StaticFields*)il2cpp_codegen_static_fields_for(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var))->___s_usingResourceKeys_0;
		return L_0;
	}
}
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_mF795F7CE9EAD235B0E320DC95B1482F1CEF4B2F8 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mF3CF210DED551ADFE58CA86051C7EB345902F2B9_inline(NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ___defaultString1;
		String_t* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_000d;
		}
	}
	{
		String_t* L_3 = ___resourceKey0;
		G_B3_0 = L_3;
	}

IL_000d:
	{
		return G_B3_0;
	}

IL_000e:
	{
		V_0 = (String_t*)NULL;
	}
	try
	{// begin try (depth: 1)
		il2cpp_codegen_runtime_class_init_inline(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_4;
		L_4 = SR_get_ResourceManager_mD0A0272EFF71CBDF95E3F9CD1DD3D8284A30AB14(NULL);
		String_t* L_5 = ___resourceKey0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(7 /* System.String System.Resources.ResourceManager::GetString(System.String) */, L_4, L_5);
		V_0 = L_6;
		goto IL_0021;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001e;
		}
		throw e;
	}

CATCH_001e:
	{// begin catch(System.Resources.MissingManifestResourceException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0021;
	}// end catch (depth: 1)

IL_0021:
	{
		String_t* L_7 = ___defaultString1;
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_8 = ___resourceKey0;
		String_t* L_9 = V_0;
		NullCheck(L_8);
		bool L_10;
		L_10 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_11 = ___defaultString1;
		return L_11;
	}

IL_002f:
	{
		String_t* L_12 = V_0;
		return L_12;
	}
}
// System.String System.SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m867884DFAFF23106D67B969D308000E12CD4BD65 (String_t* ___resourceFormat0, RuntimeObject* ___p11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mF3CF210DED551ADFE58CA86051C7EB345902F2B9_inline(NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___resourceFormat0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___p11;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		String_t* L_6;
		L_6 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, NULL);
		return L_6;
	}

IL_0020:
	{
		String_t* L_7 = ___resourceFormat0;
		RuntimeObject* L_8 = ___p11;
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_7, L_8, NULL);
		return L_9;
	}
}
// System.String System.SR::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m574E969F3E3E5555AC408698214A77E64AB9DC2C (String_t* ___resourceFormat0, RuntimeObject* ___p11, RuntimeObject* ___p22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mF3CF210DED551ADFE58CA86051C7EB345902F2B9_inline(NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___resourceFormat0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___p11;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		RuntimeObject* L_7 = ___p22;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		String_t* L_8;
		L_8 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_6, NULL);
		return L_8;
	}

IL_0024:
	{
		String_t* L_9 = ___resourceFormat0;
		RuntimeObject* L_10 = ___p11;
		RuntimeObject* L_11 = ___p22;
		String_t* L_12;
		L_12 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_9, L_10, L_11, NULL);
		return L_12;
	}
}
// System.String System.SR::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mDA163C89DFEB1BBC7129188435C190AE8AD47935 (String_t* ___resourceFormat0, RuntimeObject* ___p11, RuntimeObject* ___p22, RuntimeObject* ___p33, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mF3CF210DED551ADFE58CA86051C7EB345902F2B9_inline(NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___resourceFormat0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___p11;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		RuntimeObject* L_7 = ___p22;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		RuntimeObject* L_9 = ___p33;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_9);
		String_t* L_10;
		L_10 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_8, NULL);
		return L_10;
	}

IL_0028:
	{
		String_t* L_11 = ___resourceFormat0;
		RuntimeObject* L_12 = ___p11;
		RuntimeObject* L_13 = ___p22;
		RuntimeObject* L_14 = ___p33;
		String_t* L_15;
		L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_11, L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// System.String System.SR::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mA9FC27CE660BB883EE598EF3B1D0739473330234 (String_t* ___resourceFormat0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SR_UsingResourceKeys_mF3CF210DED551ADFE58CA86051C7EB345902F2B9_inline(NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ___resourceFormat0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args1;
		String_t* L_4;
		L_4 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_2, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		String_t* L_6 = ___resourceFormat0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = ___args1;
		String_t* L_8;
		L_8 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_6, L_7, NULL);
		return L_8;
	}

IL_0029:
	{
		String_t* L_9 = ___resourceFormat0;
		return L_9;
	}
}
// System.String System.SR::Format(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m548631BD6E3D02A10D12A02ABEF2F55CE6C9AE4C (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject* ___p12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mF3CF210DED551ADFE58CA86051C7EB345902F2B9_inline(NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___resourceFormat1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___p12;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		String_t* L_6;
		L_6 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, NULL);
		return L_6;
	}

IL_0020:
	{
		RuntimeObject* L_7 = ___provider0;
		String_t* L_8 = ___resourceFormat1;
		RuntimeObject* L_9 = ___p12;
		String_t* L_10;
		L_10 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.String System.SR::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mAEB33C33F0B76350362117860C38CA5C0C1595FF (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject* ___p12, RuntimeObject* ___p23, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mF3CF210DED551ADFE58CA86051C7EB345902F2B9_inline(NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___resourceFormat1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___p12;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		RuntimeObject* L_7 = ___p23;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		String_t* L_8;
		L_8 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_6, NULL);
		return L_8;
	}

IL_0024:
	{
		RuntimeObject* L_9 = ___provider0;
		String_t* L_10 = ___resourceFormat1;
		RuntimeObject* L_11 = ___p12;
		RuntimeObject* L_12 = ___p23;
		String_t* L_13;
		L_13 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_9, L_10, L_11, L_12, NULL);
		return L_13;
	}
}
// System.String System.SR::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mF868E80F0911CF10C5795CAF43F3CDFF270A805D (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject* ___p12, RuntimeObject* ___p23, RuntimeObject* ___p34, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mF3CF210DED551ADFE58CA86051C7EB345902F2B9_inline(NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___resourceFormat1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___p12;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		RuntimeObject* L_7 = ___p23;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		RuntimeObject* L_9 = ___p34;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_9);
		String_t* L_10;
		L_10 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_8, NULL);
		return L_10;
	}

IL_0029:
	{
		RuntimeObject* L_11 = ___provider0;
		String_t* L_12 = ___resourceFormat1;
		RuntimeObject* L_13 = ___p12;
		RuntimeObject* L_14 = ___p23;
		RuntimeObject* L_15 = ___p34;
		String_t* L_16;
		L_16 = String_Format_mF8E53122BE8F0F617357DFB75C3912D1242DE263(L_11, L_12, L_13, L_14, L_15, NULL);
		return L_16;
	}
}
// System.String System.SR::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m1B68AB02D56AC5DE06FC2B227BEC6169B09C48E7 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args2;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SR_UsingResourceKeys_mF3CF210DED551ADFE58CA86051C7EB345902F2B9_inline(NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ___resourceFormat1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args2;
		String_t* L_4;
		L_4 = String_Join_m1DE9E42021535E27E1623C55608AC7EF370AB3D7(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_2, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_4, NULL);
		return L_5;
	}

IL_0021:
	{
		RuntimeObject* L_6 = ___provider0;
		String_t* L_7 = ___resourceFormat1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = ___args2;
		String_t* L_9;
		L_9 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_6, L_7, L_8, NULL);
		return L_9;
	}

IL_002a:
	{
		String_t* L_10 = ___resourceFormat1;
		return L_10;
	}
}
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_mD0A0272EFF71CBDF95E3F9CD1DD3D8284A30AB14 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tB957049845659155E1A77859322B224FC3294F1C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B2_0 = NULL;
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0 = ((SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_StaticFields*)il2cpp_codegen_static_fields_for(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var))->___s_resourceManager_1;
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (SR_tB957049845659155E1A77859322B224FC3294F1C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_4 = (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB*)il2cpp_codegen_object_new(ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784(L_4, L_3, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_5 = L_4;
		il2cpp_codegen_runtime_class_init_inline(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		((SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_StaticFields*)il2cpp_codegen_static_fields_for(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var))->___s_resourceManager_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_StaticFields*)il2cpp_codegen_static_fields_for(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var))->___s_resourceManager_1), (void*)L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// System.String System.SR::get_UnexpectedNumberOfNamedParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_UnexpectedNumberOfNamedParameters_m7630BC497FF937E484D6C06F8E4734EA6AC6CCC4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD9D00BCD092E316C37453B79B7D577E2375C054);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_mF795F7CE9EAD235B0E320DC95B1482F1CEF4B2F8(_stringLiteralFD9D00BCD092E316C37453B79B7D577E2375C054, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.Void System.SR::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SR__cctor_m6C15E3CE1A90E0305DE8B62AF4C65B5E727EFD9D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = AppContext_TryGetSwitch_mD2500DB32F941228B6964BC53CAA0EA7047AEB78(_stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6, (&V_0), NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_0011:
	{
		bool L_1 = V_0;
		G_B3_0 = ((int32_t)(L_1));
	}

IL_0012:
	{
		((SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_StaticFields*)il2cpp_codegen_static_fields_for(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var))->___s_usingResourceKeys_0 = (bool)G_B3_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Microsoft.Extensions.Internal.TypeNameHelper::GetTypeDisplayName(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeNameHelper_GetTypeDisplayName_m99100CC277E37604BEF931F47BCF8F10A1586A03 (RuntimeObject* ___item0, bool ___fullName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___item0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = ___item0;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
		bool L_3 = ___fullName1;
		il2cpp_codegen_runtime_class_init_inline(TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = TypeNameHelper_GetTypeDisplayName_m8C466BFFD19D6F31A4A9B402A8B0C3C3357F98CE(L_2, L_3, (bool)0, (bool)1, ((int32_t)43), NULL);
		return L_4;
	}

IL_0014:
	{
		return (String_t*)NULL;
	}
}
// System.String Microsoft.Extensions.Internal.TypeNameHelper::GetTypeDisplayName(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeNameHelper_GetTypeDisplayName_m8C466BFFD19D6F31A4A9B402A8B0C3C3357F98CE (Type_t* ___type0, bool ___fullName1, bool ___includeGenericParameterNames2, bool ___includeGenericParameters3, Il2CppChar ___nestedTypeDelimiter4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		Type_t* L_2 = ___type0;
		bool L_3 = ___fullName1;
		bool L_4 = ___includeGenericParameterNames2;
		bool L_5 = ___includeGenericParameters3;
		Il2CppChar L_6 = ___nestedTypeDelimiter4;
		DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326 L_7;
		memset((&L_7), 0, sizeof(L_7));
		DisplayNameOptions__ctor_m6798CBC02BDB0097748FC53E579C4CBB19F3493E((&L_7), L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		il2cpp_codegen_runtime_class_init_inline(TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var);
		TypeNameHelper_ProcessType_m179A16CB7AE1790D7FF89AE371A46BBB64110256(L_1, L_2, (&V_1), NULL);
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// System.Void Microsoft.Extensions.Internal.TypeNameHelper::ProcessType(System.Text.StringBuilder,System.Type,Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameHelper_ProcessType_m179A16CB7AE1790D7FF89AE371A46BBB64110256 (StringBuilder_t* ___builder0, Type_t* ___type1, DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* ___options2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mABC63A9E661076B85F0C38BD3A8A40AAEA175816_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* G_B12_0 = NULL;
	{
		Type_t* L_0 = ___type1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Type_t* L_2 = ___type1;
		NullCheck(L_2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3;
		L_3 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_2);
		V_0 = L_3;
		StringBuilder_t* L_4 = ___builder0;
		Type_t* L_5 = ___type1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = V_0;
		NullCheck(L_7);
		DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* L_8 = ___options2;
		il2cpp_codegen_runtime_class_init_inline(TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var);
		TypeNameHelper_ProcessGenericType_mC63A65C08F5C459A08D2F82FB97B30C5AAAACEDB(L_4, L_5, L_6, ((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8, NULL);
		return;
	}

IL_001c:
	{
		Type_t* L_9 = ___type1;
		NullCheck(L_9);
		bool L_10;
		L_10 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_9, NULL);
		if (!L_10)
		{
			goto IL_002d;
		}
	}
	{
		StringBuilder_t* L_11 = ___builder0;
		Type_t* L_12 = ___type1;
		DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* L_13 = ___options2;
		il2cpp_codegen_runtime_class_init_inline(TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var);
		TypeNameHelper_ProcessArrayType_m7AD3E24186ACDAE9E799ED7B820C80C0B6581DCA(L_11, L_12, L_13, NULL);
		return;
	}

IL_002d:
	{
		il2cpp_codegen_runtime_class_init_inline(TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_14 = ((TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_StaticFields*)il2cpp_codegen_static_fields_for(TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var))->____builtInTypeNames_1;
		Type_t* L_15 = ___type1;
		NullCheck(L_14);
		bool L_16;
		L_16 = Dictionary_2_TryGetValue_mABC63A9E661076B85F0C38BD3A8A40AAEA175816(L_14, L_15, (&V_1), Dictionary_2_TryGetValue_mABC63A9E661076B85F0C38BD3A8A40AAEA175816_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_0045;
		}
	}
	{
		StringBuilder_t* L_17 = ___builder0;
		String_t* L_18 = V_1;
		NullCheck(L_17);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_18, NULL);
		return;
	}

IL_0045:
	{
		Type_t* L_20 = ___type1;
		NullCheck(L_20);
		bool L_21;
		L_21 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericParameter() */, L_20);
		if (!L_21)
		{
			goto IL_0063;
		}
	}
	{
		DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* L_22 = ___options2;
		bool L_23;
		L_23 = DisplayNameOptions_get_IncludeGenericParameterNames_m258C00527A5FE52EC9C4809EA6D8EFE388469AB4_inline(L_22, NULL);
		if (!L_23)
		{
			goto IL_00ae;
		}
	}
	{
		StringBuilder_t* L_24 = ___builder0;
		Type_t* L_25 = ___type1;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_25);
		NullCheck(L_24);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_26, NULL);
		return;
	}

IL_0063:
	{
		DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* L_28 = ___options2;
		bool L_29;
		L_29 = DisplayNameOptions_get_FullName_mB7B1F7699EDD92607C59D3B90E351876089687A3_inline(L_28, NULL);
		if (L_29)
		{
			goto IL_0073;
		}
	}
	{
		Type_t* L_30 = ___type1;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_30);
		G_B12_0 = L_31;
		goto IL_0079;
	}

IL_0073:
	{
		Type_t* L_32 = ___type1;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_32);
		G_B12_0 = L_33;
	}

IL_0079:
	{
		V_2 = G_B12_0;
		StringBuilder_t* L_34 = ___builder0;
		String_t* L_35 = V_2;
		NullCheck(L_34);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_35, NULL);
		DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* L_37 = ___options2;
		Il2CppChar L_38;
		L_38 = DisplayNameOptions_get_NestedTypeDelimiter_mCDAE92FC7CC60CE0D9C5B93DF949B3B56053BB44_inline(L_37, NULL);
		if ((((int32_t)L_38) == ((int32_t)((int32_t)43))))
		{
			goto IL_00ae;
		}
	}
	{
		StringBuilder_t* L_39 = ___builder0;
		DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* L_40 = ___options2;
		Il2CppChar L_41;
		L_41 = DisplayNameOptions_get_NestedTypeDelimiter_mCDAE92FC7CC60CE0D9C5B93DF949B3B56053BB44_inline(L_40, NULL);
		StringBuilder_t* L_42 = ___builder0;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_42, NULL);
		String_t* L_44 = V_2;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_44, NULL);
		String_t* L_46 = V_2;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_39);
		StringBuilder_t* L_48;
		L_48 = StringBuilder_Replace_mE586B988AAC0FBD87B94106CC0882930295DF830(L_39, ((int32_t)43), L_41, ((int32_t)il2cpp_codegen_subtract(L_43, L_45)), L_47, NULL);
	}

IL_00ae:
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Internal.TypeNameHelper::ProcessArrayType(System.Text.StringBuilder,System.Type,Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameHelper_ProcessArrayType_m7AD3E24186ACDAE9E799ED7B820C80C0B6581DCA (StringBuilder_t* ___builder0, Type_t* ___type1, DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* ___options2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		Type_t* L_0 = ___type1;
		V_0 = L_0;
		goto IL_000b;
	}

IL_0004:
	{
		Type_t* L_1 = V_0;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
	}

IL_000b:
	{
		Type_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_3, NULL);
		if (L_4)
		{
			goto IL_0004;
		}
	}
	{
		StringBuilder_t* L_5 = ___builder0;
		Type_t* L_6 = V_0;
		DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* L_7 = ___options2;
		il2cpp_codegen_runtime_class_init_inline(TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var);
		TypeNameHelper_ProcessType_m179A16CB7AE1790D7FF89AE371A46BBB64110256(L_5, L_6, L_7, NULL);
		goto IL_0048;
	}

IL_001d:
	{
		StringBuilder_t* L_8 = ___builder0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((int32_t)91), NULL);
		StringBuilder_t* L_10 = ___builder0;
		Type_t* L_11 = ___type1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(47 /* System.Int32 System.Type::GetArrayRank() */, L_11);
		NullCheck(L_10);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_10, ((int32_t)44), ((int32_t)il2cpp_codegen_subtract(L_12, 1)), NULL);
		StringBuilder_t* L_14 = ___builder0;
		NullCheck(L_14);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_14, ((int32_t)93), NULL);
		Type_t* L_16 = ___type1;
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_16);
		___type1 = L_17;
	}

IL_0048:
	{
		Type_t* L_18 = ___type1;
		NullCheck(L_18);
		bool L_19;
		L_19 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_18, NULL);
		if (L_19)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Internal.TypeNameHelper::ProcessGenericType(System.Text.StringBuilder,System.Type,System.Type[],System.Int32,Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameHelper_ProcessGenericType_mC63A65C08F5C459A08D2F82FB97B30C5AAAACEDB (StringBuilder_t* ___builder0, Type_t* ___type1, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___genericArguments2, int32_t ___length3, DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* ___options4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		Type_t* L_0 = ___type1;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsNested_mCF57E6A68BA5CEDDB9DA81CB34B6945F414FB3FD(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Type_t* L_2 = ___type1;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_2);
		NullCheck(L_3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4;
		L_4 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_3);
		NullCheck(L_4);
		V_0 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
	}

IL_0018:
	{
		DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* L_5 = ___options4;
		bool L_6;
		L_6 = DisplayNameOptions_get_FullName_mB7B1F7699EDD92607C59D3B90E351876089687A3_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_006c;
		}
	}
	{
		Type_t* L_7 = ___type1;
		NullCheck(L_7);
		bool L_8;
		L_8 = Type_get_IsNested_mCF57E6A68BA5CEDDB9DA81CB34B6945F414FB3FD(L_7, NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		StringBuilder_t* L_9 = ___builder0;
		Type_t* L_10 = ___type1;
		NullCheck(L_10);
		Type_t* L_11;
		L_11 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_10);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = ___genericArguments2;
		int32_t L_13 = V_0;
		DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* L_14 = ___options4;
		il2cpp_codegen_runtime_class_init_inline(TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var);
		TypeNameHelper_ProcessGenericType_mC63A65C08F5C459A08D2F82FB97B30C5AAAACEDB(L_9, L_11, L_12, L_13, L_14, NULL);
		StringBuilder_t* L_15 = ___builder0;
		DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* L_16 = ___options4;
		Il2CppChar L_17;
		L_17 = DisplayNameOptions_get_NestedTypeDelimiter_mCDAE92FC7CC60CE0D9C5B93DF949B3B56053BB44_inline(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, L_17, NULL);
		goto IL_006c;
	}

IL_0049:
	{
		Type_t* L_19 = ___type1;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Type::get_Namespace() */, L_19);
		bool L_21;
		L_21 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_20, NULL);
		if (L_21)
		{
			goto IL_006c;
		}
	}
	{
		StringBuilder_t* L_22 = ___builder0;
		Type_t* L_23 = ___type1;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Type::get_Namespace() */, L_23);
		NullCheck(L_22);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, L_24, NULL);
		StringBuilder_t* L_26 = ___builder0;
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_26, ((int32_t)46), NULL);
	}

IL_006c:
	{
		Type_t* L_28 = ___type1;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_28);
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_29, ((int32_t)96), NULL);
		V_1 = L_30;
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) > ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		StringBuilder_t* L_32 = ___builder0;
		Type_t* L_33 = ___type1;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_33);
		NullCheck(L_32);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, L_34, NULL);
		return;
	}

IL_008c:
	{
		StringBuilder_t* L_36 = ___builder0;
		Type_t* L_37 = ___type1;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_37);
		int32_t L_39 = V_1;
		NullCheck(L_36);
		StringBuilder_t* L_40;
		L_40 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_36, L_38, 0, L_39, NULL);
		DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* L_41 = ___options4;
		bool L_42;
		L_42 = DisplayNameOptions_get_IncludeGenericParameters_m48B06CD7DC2845DBF0DF8D4E4450C2BAE14AFABF_inline(L_41, NULL);
		if (!L_42)
		{
			goto IL_00fa;
		}
	}
	{
		StringBuilder_t* L_43 = ___builder0;
		NullCheck(L_43);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_43, ((int32_t)60), NULL);
		int32_t L_45 = V_0;
		V_2 = L_45;
		goto IL_00ed;
	}

IL_00b1:
	{
		StringBuilder_t* L_46 = ___builder0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_47 = ___genericArguments2;
		int32_t L_48 = V_2;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		Type_t* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* L_51 = ___options4;
		il2cpp_codegen_runtime_class_init_inline(TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var);
		TypeNameHelper_ProcessType_m179A16CB7AE1790D7FF89AE371A46BBB64110256(L_46, L_50, L_51, NULL);
		int32_t L_52 = V_2;
		int32_t L_53 = ___length3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_52, 1))) == ((int32_t)L_53)))
		{
			goto IL_00e9;
		}
	}
	{
		StringBuilder_t* L_54 = ___builder0;
		NullCheck(L_54);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_54, ((int32_t)44), NULL);
		DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* L_56 = ___options4;
		bool L_57;
		L_57 = DisplayNameOptions_get_IncludeGenericParameterNames_m258C00527A5FE52EC9C4809EA6D8EFE388469AB4_inline(L_56, NULL);
		if (L_57)
		{
			goto IL_00e0;
		}
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_58 = ___genericArguments2;
		int32_t L_59 = V_2;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		Type_t* L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_61);
		bool L_62;
		L_62 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericParameter() */, L_61);
		if (L_62)
		{
			goto IL_00e9;
		}
	}

IL_00e0:
	{
		StringBuilder_t* L_63 = ___builder0;
		NullCheck(L_63);
		StringBuilder_t* L_64;
		L_64 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_63, ((int32_t)32), NULL);
	}

IL_00e9:
	{
		int32_t L_65 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_00ed:
	{
		int32_t L_66 = V_2;
		int32_t L_67 = ___length3;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_00b1;
		}
	}
	{
		StringBuilder_t* L_68 = ___builder0;
		NullCheck(L_68);
		StringBuilder_t* L_69;
		L_69 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_68, ((int32_t)62), NULL);
	}

IL_00fa:
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Internal.TypeNameHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameHelper__cctor_m8FD163F8B82EFA6E7A9092D141EBB35177F6B3C2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFAF23CD29002CAB23492293F8C8B56962DE7A0B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3165827D406DD8F354BE7515C630A771E98916A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* V_0 = NULL;
	{
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_0 = (Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE*)il2cpp_codegen_object_new(Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mFAF23CD29002CAB23492293F8C8B56962DE7A0B6(L_0, Dictionary_2__ctor_mFAF23CD29002CAB23492293F8C8B56962DE7A0B6_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_1 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_1, L_3, _stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_4 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_4, L_6, _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_7, L_9, _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_10 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_10);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_10, L_12, _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_13 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_13);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_13, L_15, _stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_16);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_16, L_18, _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_19 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		NullCheck(L_19);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_19, L_21, _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_22 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		NullCheck(L_22);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_22, L_24, _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_25 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		NullCheck(L_25);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_25, L_27, _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_28 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		NullCheck(L_28);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_28, L_30, _stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_31 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		NullCheck(L_31);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_31, L_33, _stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_34 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		NullCheck(L_34);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_34, L_36, _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_37 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		NullCheck(L_37);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_37, L_39, _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_40 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		NullCheck(L_40);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_40, L_42, _stringLiteralE3165827D406DD8F354BE7515C630A771E98916A, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_43 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		NullCheck(L_43);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_43, L_45, _stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_46 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		NullCheck(L_46);
		Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC(L_46, L_48, _stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E, Dictionary_2_Add_m7371147962E855B8E8BE002A226B0EE34E37B0CC_RuntimeMethod_var);
		Dictionary_2_tCAAF57FF731CF7E9CEC738A6E8400D208C1066EE* L_49 = V_0;
		((TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_StaticFields*)il2cpp_codegen_static_fields_for(TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var))->____builtInTypeNames_1 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_StaticFields*)il2cpp_codegen_static_fields_for(TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var))->____builtInTypeNames_1), (void*)L_49);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions
IL2CPP_EXTERN_C void DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326_marshal_pinvoke(const DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326& unmarshaled, DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CFullNameU3Ek__BackingField_0 = static_cast<int32_t>(unmarshaled.___U3CFullNameU3Ek__BackingField_0);
	marshaled.___U3CIncludeGenericParametersU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.___U3CIncludeGenericParametersU3Ek__BackingField_1);
	marshaled.___U3CIncludeGenericParameterNamesU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.___U3CIncludeGenericParameterNamesU3Ek__BackingField_2);
	marshaled.___U3CNestedTypeDelimiterU3Ek__BackingField_3 = static_cast<uint8_t>(unmarshaled.___U3CNestedTypeDelimiterU3Ek__BackingField_3);
}
IL2CPP_EXTERN_C void DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326_marshal_pinvoke_back(const DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326_marshaled_pinvoke& marshaled, DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326& unmarshaled)
{
	bool unmarshaledU3CFullNameU3Ek__BackingField_temp_0 = false;
	unmarshaledU3CFullNameU3Ek__BackingField_temp_0 = static_cast<bool>(marshaled.___U3CFullNameU3Ek__BackingField_0);
	unmarshaled.___U3CFullNameU3Ek__BackingField_0 = unmarshaledU3CFullNameU3Ek__BackingField_temp_0;
	bool unmarshaledU3CIncludeGenericParametersU3Ek__BackingField_temp_1 = false;
	unmarshaledU3CIncludeGenericParametersU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CIncludeGenericParametersU3Ek__BackingField_1);
	unmarshaled.___U3CIncludeGenericParametersU3Ek__BackingField_1 = unmarshaledU3CIncludeGenericParametersU3Ek__BackingField_temp_1;
	bool unmarshaledU3CIncludeGenericParameterNamesU3Ek__BackingField_temp_2 = false;
	unmarshaledU3CIncludeGenericParameterNamesU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CIncludeGenericParameterNamesU3Ek__BackingField_2);
	unmarshaled.___U3CIncludeGenericParameterNamesU3Ek__BackingField_2 = unmarshaledU3CIncludeGenericParameterNamesU3Ek__BackingField_temp_2;
	Il2CppChar unmarshaledU3CNestedTypeDelimiterU3Ek__BackingField_temp_3 = 0x0;
	unmarshaledU3CNestedTypeDelimiterU3Ek__BackingField_temp_3 = static_cast<Il2CppChar>(marshaled.___U3CNestedTypeDelimiterU3Ek__BackingField_3);
	unmarshaled.___U3CNestedTypeDelimiterU3Ek__BackingField_3 = unmarshaledU3CNestedTypeDelimiterU3Ek__BackingField_temp_3;
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions
IL2CPP_EXTERN_C void DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326_marshal_pinvoke_cleanup(DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions
IL2CPP_EXTERN_C void DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326_marshal_com(const DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326& unmarshaled, DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326_marshaled_com& marshaled)
{
	marshaled.___U3CFullNameU3Ek__BackingField_0 = static_cast<int32_t>(unmarshaled.___U3CFullNameU3Ek__BackingField_0);
	marshaled.___U3CIncludeGenericParametersU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.___U3CIncludeGenericParametersU3Ek__BackingField_1);
	marshaled.___U3CIncludeGenericParameterNamesU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.___U3CIncludeGenericParameterNamesU3Ek__BackingField_2);
	marshaled.___U3CNestedTypeDelimiterU3Ek__BackingField_3 = static_cast<uint8_t>(unmarshaled.___U3CNestedTypeDelimiterU3Ek__BackingField_3);
}
IL2CPP_EXTERN_C void DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326_marshal_com_back(const DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326_marshaled_com& marshaled, DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326& unmarshaled)
{
	bool unmarshaledU3CFullNameU3Ek__BackingField_temp_0 = false;
	unmarshaledU3CFullNameU3Ek__BackingField_temp_0 = static_cast<bool>(marshaled.___U3CFullNameU3Ek__BackingField_0);
	unmarshaled.___U3CFullNameU3Ek__BackingField_0 = unmarshaledU3CFullNameU3Ek__BackingField_temp_0;
	bool unmarshaledU3CIncludeGenericParametersU3Ek__BackingField_temp_1 = false;
	unmarshaledU3CIncludeGenericParametersU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CIncludeGenericParametersU3Ek__BackingField_1);
	unmarshaled.___U3CIncludeGenericParametersU3Ek__BackingField_1 = unmarshaledU3CIncludeGenericParametersU3Ek__BackingField_temp_1;
	bool unmarshaledU3CIncludeGenericParameterNamesU3Ek__BackingField_temp_2 = false;
	unmarshaledU3CIncludeGenericParameterNamesU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CIncludeGenericParameterNamesU3Ek__BackingField_2);
	unmarshaled.___U3CIncludeGenericParameterNamesU3Ek__BackingField_2 = unmarshaledU3CIncludeGenericParameterNamesU3Ek__BackingField_temp_2;
	Il2CppChar unmarshaledU3CNestedTypeDelimiterU3Ek__BackingField_temp_3 = 0x0;
	unmarshaledU3CNestedTypeDelimiterU3Ek__BackingField_temp_3 = static_cast<Il2CppChar>(marshaled.___U3CNestedTypeDelimiterU3Ek__BackingField_3);
	unmarshaled.___U3CNestedTypeDelimiterU3Ek__BackingField_3 = unmarshaledU3CNestedTypeDelimiterU3Ek__BackingField_temp_3;
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions
IL2CPP_EXTERN_C void DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326_marshal_com_cleanup(DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326_marshaled_com& marshaled)
{
}
// System.Void Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::.ctor(System.Boolean,System.Boolean,System.Boolean,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameOptions__ctor_m6798CBC02BDB0097748FC53E579C4CBB19F3493E (DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* __this, bool ___fullName0, bool ___includeGenericParameterNames1, bool ___includeGenericParameters2, Il2CppChar ___nestedTypeDelimiter3, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___fullName0;
		__this->___U3CFullNameU3Ek__BackingField_0 = L_0;
		bool L_1 = ___includeGenericParameters2;
		__this->___U3CIncludeGenericParametersU3Ek__BackingField_1 = L_1;
		bool L_2 = ___includeGenericParameterNames1;
		__this->___U3CIncludeGenericParameterNamesU3Ek__BackingField_2 = L_2;
		Il2CppChar L_3 = ___nestedTypeDelimiter3;
		__this->___U3CNestedTypeDelimiterU3Ek__BackingField_3 = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void DisplayNameOptions__ctor_m6798CBC02BDB0097748FC53E579C4CBB19F3493E_AdjustorThunk (RuntimeObject* __this, bool ___fullName0, bool ___includeGenericParameterNames1, bool ___includeGenericParameters2, Il2CppChar ___nestedTypeDelimiter3, const RuntimeMethod* method)
{
	DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326*>(__this + _offset);
	DisplayNameOptions__ctor_m6798CBC02BDB0097748FC53E579C4CBB19F3493E(_thisAdjusted, ___fullName0, ___includeGenericParameterNames1, ___includeGenericParameters2, ___nestedTypeDelimiter3, method);
}
// System.Boolean Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::get_FullName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DisplayNameOptions_get_FullName_mB7B1F7699EDD92607C59D3B90E351876089687A3 (DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CFullNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool DisplayNameOptions_get_FullName_mB7B1F7699EDD92607C59D3B90E351876089687A3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326*>(__this + _offset);
	bool _returnValue;
	_returnValue = DisplayNameOptions_get_FullName_mB7B1F7699EDD92607C59D3B90E351876089687A3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::get_IncludeGenericParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DisplayNameOptions_get_IncludeGenericParameters_m48B06CD7DC2845DBF0DF8D4E4450C2BAE14AFABF (DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIncludeGenericParametersU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool DisplayNameOptions_get_IncludeGenericParameters_m48B06CD7DC2845DBF0DF8D4E4450C2BAE14AFABF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326*>(__this + _offset);
	bool _returnValue;
	_returnValue = DisplayNameOptions_get_IncludeGenericParameters_m48B06CD7DC2845DBF0DF8D4E4450C2BAE14AFABF_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::get_IncludeGenericParameterNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DisplayNameOptions_get_IncludeGenericParameterNames_m258C00527A5FE52EC9C4809EA6D8EFE388469AB4 (DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIncludeGenericParameterNamesU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool DisplayNameOptions_get_IncludeGenericParameterNames_m258C00527A5FE52EC9C4809EA6D8EFE388469AB4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326*>(__this + _offset);
	bool _returnValue;
	_returnValue = DisplayNameOptions_get_IncludeGenericParameterNames_m258C00527A5FE52EC9C4809EA6D8EFE388469AB4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Char Microsoft.Extensions.Internal.TypeNameHelper/DisplayNameOptions::get_NestedTypeDelimiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar DisplayNameOptions_get_NestedTypeDelimiter_mCDAE92FC7CC60CE0D9C5B93DF949B3B56053BB44 (DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* __this, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = __this->___U3CNestedTypeDelimiterU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Il2CppChar DisplayNameOptions_get_NestedTypeDelimiter_mCDAE92FC7CC60CE0D9C5B93DF949B3B56053BB44_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326*>(__this + _offset);
	Il2CppChar _returnValue;
	_returnValue = DisplayNameOptions_get_NestedTypeDelimiter_mCDAE92FC7CC60CE0D9C5B93DF949B3B56053BB44_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.Extensions.Logging.EventId
IL2CPP_EXTERN_C void EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshal_pinvoke(const EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710& unmarshaled, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CIdU3Ek__BackingField_0 = unmarshaled.___U3CIdU3Ek__BackingField_0;
	marshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_string(unmarshaled.___U3CNameU3Ek__BackingField_1);
}
IL2CPP_EXTERN_C void EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshal_pinvoke_back(const EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshaled_pinvoke& marshaled, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710& unmarshaled)
{
	int32_t unmarshaledU3CIdU3Ek__BackingField_temp_0 = 0;
	unmarshaledU3CIdU3Ek__BackingField_temp_0 = marshaled.___U3CIdU3Ek__BackingField_0;
	unmarshaled.___U3CIdU3Ek__BackingField_0 = unmarshaledU3CIdU3Ek__BackingField_temp_0;
	unmarshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_string_result(marshaled.___U3CNameU3Ek__BackingField_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CNameU3Ek__BackingField_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CNameU3Ek__BackingField_1));
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Logging.EventId
IL2CPP_EXTERN_C void EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshal_pinvoke_cleanup(EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CNameU3Ek__BackingField_1);
	marshaled.___U3CNameU3Ek__BackingField_1 = NULL;
}
// Conversion methods for marshalling of: Microsoft.Extensions.Logging.EventId
IL2CPP_EXTERN_C void EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshal_com(const EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710& unmarshaled, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshaled_com& marshaled)
{
	marshaled.___U3CIdU3Ek__BackingField_0 = unmarshaled.___U3CIdU3Ek__BackingField_0;
	marshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CNameU3Ek__BackingField_1);
}
IL2CPP_EXTERN_C void EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshal_com_back(const EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshaled_com& marshaled, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710& unmarshaled)
{
	int32_t unmarshaledU3CIdU3Ek__BackingField_temp_0 = 0;
	unmarshaledU3CIdU3Ek__BackingField_temp_0 = marshaled.___U3CIdU3Ek__BackingField_0;
	unmarshaled.___U3CIdU3Ek__BackingField_0 = unmarshaledU3CIdU3Ek__BackingField_temp_0;
	unmarshaled.___U3CNameU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CNameU3Ek__BackingField_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CNameU3Ek__BackingField_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CNameU3Ek__BackingField_1));
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Logging.EventId
IL2CPP_EXTERN_C void EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshal_com_cleanup(EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CNameU3Ek__BackingField_1);
	marshaled.___U3CNameU3Ek__BackingField_1 = NULL;
}
// Microsoft.Extensions.Logging.EventId Microsoft.Extensions.Logging.EventId::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 EventId_op_Implicit_m0DAA73915C7788018C741D3EE391ABABBC967BF4 (int32_t ___i0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___i0;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_1;
		memset((&L_1), 0, sizeof(L_1));
		EventId__ctor_mFDDCC191B93DEABA80140E50C8E5A592EB5E1C6F((&L_1), L_0, (String_t*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.Extensions.Logging.EventId::op_Equality(Microsoft.Extensions.Logging.EventId,Microsoft.Extensions.Logging.EventId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventId_op_Equality_m2574CA9501B6E5DB1BBEED21D9D8516E2AC0D5C0 (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___left0, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___right1, const RuntimeMethod* method) 
{
	{
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_0 = ___right1;
		bool L_1;
		L_1 = EventId_Equals_m11118ACCEA6715D6EEA89CA54745F9F63CDBCC42((&___left0), L_0, NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.Extensions.Logging.EventId::op_Inequality(Microsoft.Extensions.Logging.EventId,Microsoft.Extensions.Logging.EventId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventId_op_Inequality_mFE942E76939D6CC2FCFC398B1AB0F857BA220B9C (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___left0, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___right1, const RuntimeMethod* method) 
{
	{
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_0 = ___right1;
		bool L_1;
		L_1 = EventId_Equals_m11118ACCEA6715D6EEA89CA54745F9F63CDBCC42((&___left0), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Microsoft.Extensions.Logging.EventId::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventId__ctor_mFDDCC191B93DEABA80140E50C8E5A592EB5E1C6F (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, int32_t ___id0, String_t* ___name1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___id0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		String_t* L_1 = ___name1;
		__this->___U3CNameU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void EventId__ctor_mFDDCC191B93DEABA80140E50C8E5A592EB5E1C6F_AdjustorThunk (RuntimeObject* __this, int32_t ___id0, String_t* ___name1, const RuntimeMethod* method)
{
	EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*>(__this + _offset);
	EventId__ctor_mFDDCC191B93DEABA80140E50C8E5A592EB5E1C6F(_thisAdjusted, ___id0, ___name1, method);
}
// System.Int32 Microsoft.Extensions.Logging.EventId::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventId_get_Id_m86B112CC64D4CBED6F5319DD779D103663493B3A (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t EventId_get_Id_m86B112CC64D4CBED6F5319DD779D103663493B3A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = EventId_get_Id_m86B112CC64D4CBED6F5319DD779D103663493B3A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Logging.EventId::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EventId_get_Name_m8BD116C470BA834B6E7392A4D04A34BC1E63F8B6 (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* EventId_get_Name_m8BD116C470BA834B6E7392A4D04A34BC1E63F8B6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EventId_get_Name_m8BD116C470BA834B6E7392A4D04A34BC1E63F8B6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Logging.EventId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EventId_ToString_m9B1D1541573A8A460D61C8EC14C5C17FC6CEEFD5 (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0;
		L_0 = EventId_get_Name_m8BD116C470BA834B6E7392A4D04A34BC1E63F8B6_inline(__this, NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		int32_t L_2;
		L_2 = EventId_get_Id_m86B112CC64D4CBED6F5319DD779D103663493B3A_inline(__this, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		G_B2_0 = L_3;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C  String_t* EventId_ToString_m9B1D1541573A8A460D61C8EC14C5C17FC6CEEFD5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EventId_ToString_m9B1D1541573A8A460D61C8EC14C5C17FC6CEEFD5(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Logging.EventId::Equals(Microsoft.Extensions.Logging.EventId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventId_Equals_m11118ACCEA6715D6EEA89CA54745F9F63CDBCC42 (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___other0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = EventId_get_Id_m86B112CC64D4CBED6F5319DD779D103663493B3A_inline(__this, NULL);
		int32_t L_1;
		L_1 = EventId_get_Id_m86B112CC64D4CBED6F5319DD779D103663493B3A_inline((&___other0), NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool EventId_Equals_m11118ACCEA6715D6EEA89CA54745F9F63CDBCC42_AdjustorThunk (RuntimeObject* __this, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___other0, const RuntimeMethod* method)
{
	EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*>(__this + _offset);
	bool _returnValue;
	_returnValue = EventId_Equals_m11118ACCEA6715D6EEA89CA54745F9F63CDBCC42(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Logging.EventId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventId_Equals_m0CAAD86008C8E5DDE9F9F8D81341D727643F91F1 (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = ___obj0;
		V_0 = ((*(EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*)((EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*)(EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*)UnBox(L_2, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710_il2cpp_TypeInfo_var))));
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_3 = V_0;
		bool L_4;
		L_4 = EventId_Equals_m11118ACCEA6715D6EEA89CA54745F9F63CDBCC42(__this, L_3, NULL);
		return L_4;
	}

IL_001c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool EventId_Equals_m0CAAD86008C8E5DDE9F9F8D81341D727643F91F1_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*>(__this + _offset);
	bool _returnValue;
	_returnValue = EventId_Equals_m0CAAD86008C8E5DDE9F9F8D81341D727643F91F1(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Logging.EventId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventId_GetHashCode_m1C7BA059C42C765351C534BB03BC2D3A1850645C (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = EventId_get_Id_m86B112CC64D4CBED6F5319DD779D103663493B3A_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t EventId_GetHashCode_m1C7BA059C42C765351C534BB03BC2D3A1850645C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = EventId_GetHashCode_m1C7BA059C42C765351C534BB03BC2D3A1850645C(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.Extensions.Logging.FormattedLogValues
IL2CPP_EXTERN_C void FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshal_pinvoke(const FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114& unmarshaled, FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshaled_pinvoke& marshaled)
{
	Exception_t* ____formatter_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'FormattedLogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_4Exception, NULL);
}
IL2CPP_EXTERN_C void FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshal_pinvoke_back(const FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshaled_pinvoke& marshaled, FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114& unmarshaled)
{
	Exception_t* ____formatter_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'FormattedLogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Logging.FormattedLogValues
IL2CPP_EXTERN_C void FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshal_pinvoke_cleanup(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.Extensions.Logging.FormattedLogValues
IL2CPP_EXTERN_C void FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshal_com(const FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114& unmarshaled, FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshaled_com& marshaled)
{
	Exception_t* ____formatter_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'FormattedLogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_4Exception, NULL);
}
IL2CPP_EXTERN_C void FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshal_com_back(const FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshaled_com& marshaled, FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114& unmarshaled)
{
	Exception_t* ____formatter_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'FormattedLogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Logging.FormattedLogValues
IL2CPP_EXTERN_C void FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshal_com_cleanup(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_marshaled_com& marshaled)
{
}
// Microsoft.Extensions.Logging.LogValuesFormatter Microsoft.Extensions.Logging.FormattedLogValues::get_Formatter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* FormattedLogValues_get_Formatter_m11CD6604CB29C5F160AE7712D6C78F96BA952BB6 (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) 
{
	{
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_0 = __this->____formatter_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* FormattedLogValues_get_Formatter_m11CD6604CB29C5F160AE7712D6C78F96BA952BB6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114*>(__this + _offset);
	LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* _returnValue;
	_returnValue = FormattedLogValues_get_Formatter_m11CD6604CB29C5F160AE7712D6C78F96BA952BB6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattedLogValues__ctor_mCF58384A2EC59C96A510D418010A5199F384420F (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_GetOrAdd_m5EF0E65D8977A84F75210848D51F416EBB1F3D36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_TryGetValue_m18880E9C6AC11DE8CE63D09CD6B1CD0B778E46F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__9_0_m8CA4F0E087E96B776FDB77E32D70D5EB282D3F7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F41BF20B4D5ED35ED0B5C03F1AF6B146720CB0B);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF* G_B8_2 = NULL;
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* G_B8_3 = NULL;
	Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF* G_B7_2 = NULL;
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* G_B7_3 = NULL;
	String_t* G_B12_0 = NULL;
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* G_B12_1 = NULL;
	String_t* G_B11_0 = NULL;
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* G_B11_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___values1;
		if (!L_0)
		{
			goto IL_0069;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___values1;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_2 = ___format0;
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var);
		int32_t L_3 = ((FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_StaticFields*)il2cpp_codegen_static_fields_for(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var))->____count_2;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)1024))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF* L_4 = ((FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_StaticFields*)il2cpp_codegen_static_fields_for(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var))->____formatters_3;
		String_t* L_5 = ___format0;
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C** L_6 = (&__this->____formatter_4);
		NullCheck(L_4);
		bool L_7;
		L_7 = ConcurrentDictionary_2_TryGetValue_m18880E9C6AC11DE8CE63D09CD6B1CD0B778E46F9(L_4, L_5, L_6, ConcurrentDictionary_2_TryGetValue_m18880E9C6AC11DE8CE63D09CD6B1CD0B778E46F9_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_8 = ___format0;
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_9 = (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C*)il2cpp_codegen_object_new(LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		LogValuesFormatter__ctor_m63200EDB80E69D4D1CD0467FA2FBACFF255F9504(L_9, L_8, NULL);
		__this->____formatter_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____formatter_4), (void*)L_9);
		goto IL_0070;
	}

IL_0037:
	{
		il2cpp_codegen_runtime_class_init_inline(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF* L_10 = ((FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_StaticFields*)il2cpp_codegen_static_fields_for(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var))->____formatters_3;
		String_t* L_11 = ___format0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var);
		Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5* L_12 = ((U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1;
		Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5* L_13 = L_12;
		G_B7_0 = L_13;
		G_B7_1 = L_11;
		G_B7_2 = L_10;
		G_B7_3 = __this;
		if (L_13)
		{
			G_B8_0 = L_13;
			G_B8_1 = L_11;
			G_B8_2 = L_10;
			G_B8_3 = __this;
			goto IL_005d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var);
		U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C* L_14 = ((U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5* L_15 = (Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5*)il2cpp_codegen_object_new(Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Func_2__ctor_mDFAFE1C452564604F3E7A340E3D081BDD670FE55(L_15, L_14, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__9_0_m8CA4F0E087E96B776FDB77E32D70D5EB282D3F7A_RuntimeMethod_var), NULL);
		Func_2_tDE58BF15664F4D6335A266B557F3C781F8B2BEB5* L_16 = L_15;
		((U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1), (void*)L_16);
		G_B8_0 = L_16;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_005d:
	{
		NullCheck(G_B8_2);
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_17;
		L_17 = ConcurrentDictionary_2_GetOrAdd_m5EF0E65D8977A84F75210848D51F416EBB1F3D36(G_B8_2, G_B8_1, G_B8_0, ConcurrentDictionary_2_GetOrAdd_m5EF0E65D8977A84F75210848D51F416EBB1F3D36_RuntimeMethod_var);
		G_B8_3->____formatter_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_3->____formatter_4), (void*)L_17);
		goto IL_0070;
	}

IL_0069:
	{
		__this->____formatter_4 = (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____formatter_4), (void*)(LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C*)NULL);
	}

IL_0070:
	{
		String_t* L_18 = ___format0;
		String_t* L_19 = L_18;
		G_B11_0 = L_19;
		G_B11_1 = __this;
		if (L_19)
		{
			G_B12_0 = L_19;
			G_B12_1 = __this;
			goto IL_007b;
		}
	}
	{
		G_B12_0 = _stringLiteral3F41BF20B4D5ED35ED0B5C03F1AF6B146720CB0B;
		G_B12_1 = G_B11_1;
	}

IL_007b:
	{
		G_B12_1->____originalMessage_6 = G_B12_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B12_1->____originalMessage_6), (void*)G_B12_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = ___values1;
		__this->____values_5 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_5), (void*)L_20);
		return;
	}
}
IL2CPP_EXTERN_C  void FormattedLogValues__ctor_mCF58384A2EC59C96A510D418010A5199F384420F_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values1, const RuntimeMethod* method)
{
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114*>(__this + _offset);
	FormattedLogValues__ctor_mCF58384A2EC59C96A510D418010A5199F384420F(_thisAdjusted, ___format0, ___values1, method);
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.FormattedLogValues::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 FormattedLogValues_get_Item_m97B27F9468C950908B5159DE6597464D92ADF72E (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index0;
		int32_t L_2;
		L_2 = FormattedLogValues_get_Count_mD4F7E80166B50AD2801CEAB9AE1A7ADC1C4C63FB(__this, NULL);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_3 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormattedLogValues_get_Item_m97B27F9468C950908B5159DE6597464D92ADF72E_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_4 = ___index0;
		int32_t L_5;
		L_5 = FormattedLogValues_get_Count_mD4F7E80166B50AD2801CEAB9AE1A7ADC1C4C63FB(__this, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_5, 1))))))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_6 = __this->____originalMessage_6;
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_7;
		memset((&L_7), 0, sizeof(L_7));
		KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB((&L_7), _stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8, L_6, /*hidden argument*/KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var);
		return L_7;
	}

IL_0034:
	{
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_8 = __this->____formatter_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____values_5;
		int32_t L_10 = ___index0;
		NullCheck(L_8);
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_11;
		L_11 = LogValuesFormatter_GetValue_m937B78C1EEF207AE5F885B093158485737905F3F(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C  KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 FormattedLogValues_get_Item_m97B27F9468C950908B5159DE6597464D92ADF72E_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114*>(__this + _offset);
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 _returnValue;
	_returnValue = FormattedLogValues_get_Item_m97B27F9468C950908B5159DE6597464D92ADF72E(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Logging.FormattedLogValues::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattedLogValues_get_Count_mD4F7E80166B50AD2801CEAB9AE1A7ADC1C4C63FB (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_0 = __this->____formatter_4;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 1;
	}

IL_000a:
	{
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_1 = __this->____formatter_4;
		NullCheck(L_1);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2;
		L_2 = LogValuesFormatter_get_ValueNames_m7BB3F9B56AD516B6ECB699D81D9D17E280A422FB_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_2, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_add(L_3, 1));
	}
}
IL2CPP_EXTERN_C  int32_t FormattedLogValues_get_Count_mD4F7E80166B50AD2801CEAB9AE1A7ADC1C4C63FB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = FormattedLogValues_get_Count_mD4F7E80166B50AD2801CEAB9AE1A7ADC1C4C63FB(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Microsoft.Extensions.Logging.FormattedLogValues::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FormattedLogValues_GetEnumerator_mF7E3A4A99FA8F4E88A16B1AD39A141643AF7EA70 (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD* L_0 = (U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD*)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetEnumeratorU3Ed__14__ctor_m65962E588A342B47B1C4B6331FFE4FB6C14FB50F(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD* L_1 = L_0;
		FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114 L_2 = (*(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114*)__this);
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3E4__this_2))->____formatter_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3E4__this_2))->____values_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3E4__this_2))->____originalMessage_6), (void*)NULL);
		#endif
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FormattedLogValues_GetEnumerator_mF7E3A4A99FA8F4E88A16B1AD39A141643AF7EA70_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = FormattedLogValues_GetEnumerator_mF7E3A4A99FA8F4E88A16B1AD39A141643AF7EA70(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Logging.FormattedLogValues::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FormattedLogValues_ToString_m59B2396785E3BA6FD99896918E462096503CFDF6 (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) 
{
	{
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_0 = __this->____formatter_4;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = __this->____originalMessage_6;
		return L_1;
	}

IL_000f:
	{
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_2 = __this->____formatter_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____values_5;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = LogValuesFormatter_Format_m74126A3B9E54B7EC888F5D4DB0764271FC090323(L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* FormattedLogValues_ToString_m59B2396785E3BA6FD99896918E462096503CFDF6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = FormattedLogValues_ToString_m59B2396785E3BA6FD99896918E462096503CFDF6(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.IEnumerator Microsoft.Extensions.Logging.FormattedLogValues::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FormattedLogValues_System_Collections_IEnumerable_GetEnumerator_m0EFD0090FC1E78E9826263068A00CB7BDD4CF5E4 (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = FormattedLogValues_GetEnumerator_mF7E3A4A99FA8F4E88A16B1AD39A141643AF7EA70(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FormattedLogValues_System_Collections_IEnumerable_GetEnumerator_m0EFD0090FC1E78E9826263068A00CB7BDD4CF5E4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = FormattedLogValues_System_Collections_IEnumerable_GetEnumerator_m0EFD0090FC1E78E9826263068A00CB7BDD4CF5E4(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattedLogValues__cctor_mF36A92BB3C87B8CE49A9DB6EF8303BBC6C1B51C3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2__ctor_m3659626FF4BF93F715A9BD30A5176EC31C058B2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF* L_0 = (ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF*)il2cpp_codegen_object_new(ConcurrentDictionary_2_tA16C34A52AB6C61F95E4BE8263B61CE16A2B63AF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConcurrentDictionary_2__ctor_m3659626FF4BF93F715A9BD30A5176EC31C058B2E(L_0, ConcurrentDictionary_2__ctor_m3659626FF4BF93F715A9BD30A5176EC31C058B2E_RuntimeMethod_var);
		((FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_StaticFields*)il2cpp_codegen_static_fields_for(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var))->____formatters_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_StaticFields*)il2cpp_codegen_static_fields_for(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var))->____formatters_3), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0C0F7AA6596546D97F1E2103987830468F838B46 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C* L_0 = (U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C*)il2cpp_codegen_object_new(U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m63593778D5647B867ACD5E3EC47BA9A7812F292A(L_0, NULL);
		((U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m63593778D5647B867ACD5E3EC47BA9A7812F292A (U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.Extensions.Logging.LogValuesFormatter Microsoft.Extensions.Logging.FormattedLogValues/<>c::<.ctor>b__9_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* U3CU3Ec_U3C_ctorU3Eb__9_0_m8CA4F0E087E96B776FDB77E32D70D5EB282D3F7A (U3CU3Ec_t3B06431E98D88D5F4009321C629710CF6614024C* __this, String_t* ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309((&((FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_StaticFields*)il2cpp_codegen_static_fields_for(FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_il2cpp_TypeInfo_var))->____count_2), NULL);
		String_t* L_1 = ___f0;
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_2 = (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C*)il2cpp_codegen_object_new(LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LogValuesFormatter__ctor_m63200EDB80E69D4D1CD0467FA2FBACFF255F9504(L_2, L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14__ctor_m65962E588A342B47B1C4B6331FFE4FB6C14FB50F (U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mE038763A396457F91EF24ECCBFEEAE12BF6DDFE0 (U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__14_MoveNext_m35F40B92EBB8F2ED983B8B2C5D2A0E113D84E606 (U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		__this->___U3CiU3E5__2_3 = 0;
		goto IL_0057;
	}

IL_0020:
	{
		FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* L_3 = (&__this->___U3CU3E4__this_2);
		int32_t L_4 = __this->___U3CiU3E5__2_3;
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_5;
		L_5 = FormattedLogValues_get_Item_m97B27F9468C950908B5159DE6597464D92ADF72E(L_3, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0040:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_6 = __this->___U3CiU3E5__2_3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		__this->___U3CiU3E5__2_3 = L_7;
	}

IL_0057:
	{
		int32_t L_8 = __this->___U3CiU3E5__2_3;
		FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* L_9 = (&__this->___U3CU3E4__this_2);
		int32_t L_10;
		L_10 = FormattedLogValues_get_Count_mD4F7E80166B50AD2801CEAB9AE1A7ADC1C4C63FB(L_9, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_get_Current_mE8653A395B10020893797723FBFAB6535A5DB8EC (U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m29F5DC693050EA4C8EBD39579FB5839CADD0E00A (U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m29F5DC693050EA4C8EBD39579FB5839CADD0E00A_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.Extensions.Logging.FormattedLogValues/<GetEnumerator>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_m77250264AADDF5EE2FB049506CCCCB6303C1AC67 (U3CGetEnumeratorU3Ed__14_t47DC89C916A2A6D831F58B9F380161AADCAF8AFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_0 = __this->___U3CU3E2__current_1;
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogDebug(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogDebug_m43F72E0376712856D676B9AA3869A4553D5A590E (RuntimeObject* ___logger0, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId1, Exception_t* ___exception2, String_t* ___message3, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_1 = ___eventId1;
		Exception_t* L_2 = ___exception2;
		String_t* L_3 = ___message3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args4;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F(L_0, 1, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogDebug(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogDebug_mE1B7DAC688F59C5C9601F7BB6272ED4389B75E78 (RuntimeObject* ___logger0, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId1, String_t* ___message2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_1 = ___eventId1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args3;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mF55AB752259EDA23B7A55676519103760DCD7C27(L_0, 1, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogDebug(Microsoft.Extensions.Logging.ILogger,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogDebug_m10A247D2C57DCA41B79451D0FF250EE9E375A0FF (RuntimeObject* ___logger0, Exception_t* ___exception1, String_t* ___message2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		Exception_t* L_1 = ___exception1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args3;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mE483B53E65EE67EA6C848AD5B94A3D479E26E4D3(L_0, 1, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogDebug(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogDebug_m4ECB2CDE73C1580A54ADA667F5E938C3CFCDB704 (RuntimeObject* ___logger0, String_t* ___message1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		String_t* L_1 = ___message1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m3F0219E0DB6E2CB10D0618F935EFE4BB8BAE85EA(L_0, 1, L_1, L_2, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogTrace(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogTrace_mDD0A9A68EA82D6D4B6475A9A208F3140BE666CAE (RuntimeObject* ___logger0, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId1, Exception_t* ___exception2, String_t* ___message3, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_1 = ___eventId1;
		Exception_t* L_2 = ___exception2;
		String_t* L_3 = ___message3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args4;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F(L_0, 0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogTrace(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogTrace_m86B03DE9BAAA78D0C4EEC5996764E39C88B6EA64 (RuntimeObject* ___logger0, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId1, String_t* ___message2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_1 = ___eventId1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args3;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mF55AB752259EDA23B7A55676519103760DCD7C27(L_0, 0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogTrace(Microsoft.Extensions.Logging.ILogger,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogTrace_mE1E8F4219014ABFA9780933BE2501185825B3795 (RuntimeObject* ___logger0, Exception_t* ___exception1, String_t* ___message2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		Exception_t* L_1 = ___exception1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args3;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mE483B53E65EE67EA6C848AD5B94A3D479E26E4D3(L_0, 0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogTrace(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogTrace_mED89E988903065F91B17FCD42B7E442B98E21956 (RuntimeObject* ___logger0, String_t* ___message1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		String_t* L_1 = ___message1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m3F0219E0DB6E2CB10D0618F935EFE4BB8BAE85EA(L_0, 0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogInformation(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogInformation_mCD04F2D47FE55A9F526699A5F4760FEE25607293 (RuntimeObject* ___logger0, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId1, Exception_t* ___exception2, String_t* ___message3, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_1 = ___eventId1;
		Exception_t* L_2 = ___exception2;
		String_t* L_3 = ___message3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args4;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F(L_0, 2, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogInformation(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogInformation_mC73233FCC75801FAADA8587B8DAB44A50708A5AD (RuntimeObject* ___logger0, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId1, String_t* ___message2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_1 = ___eventId1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args3;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mF55AB752259EDA23B7A55676519103760DCD7C27(L_0, 2, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogInformation(Microsoft.Extensions.Logging.ILogger,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogInformation_mF3D7CDBCC677F6997F6FDBB97145B508620B57F5 (RuntimeObject* ___logger0, Exception_t* ___exception1, String_t* ___message2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		Exception_t* L_1 = ___exception1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args3;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mE483B53E65EE67EA6C848AD5B94A3D479E26E4D3(L_0, 2, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogInformation(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogInformation_mB7FDD0AD552DFF453F6BCD4AC7BF97DDDEDB7ADC (RuntimeObject* ___logger0, String_t* ___message1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		String_t* L_1 = ___message1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m3F0219E0DB6E2CB10D0618F935EFE4BB8BAE85EA(L_0, 2, L_1, L_2, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogWarning(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogWarning_m98F6DC705EC2D678F047367FDC846F4A7BB30B5D (RuntimeObject* ___logger0, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId1, Exception_t* ___exception2, String_t* ___message3, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_1 = ___eventId1;
		Exception_t* L_2 = ___exception2;
		String_t* L_3 = ___message3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args4;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F(L_0, 3, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogWarning(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogWarning_m92E3E5D4DD7A2EF7180A3FAFE8BA93CD4E50B015 (RuntimeObject* ___logger0, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId1, String_t* ___message2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_1 = ___eventId1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args3;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mF55AB752259EDA23B7A55676519103760DCD7C27(L_0, 3, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogWarning(Microsoft.Extensions.Logging.ILogger,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogWarning_m18A0D895FC8CCBE66F8C0EFA7A540FE5ED0C3E9D (RuntimeObject* ___logger0, Exception_t* ___exception1, String_t* ___message2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		Exception_t* L_1 = ___exception1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args3;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mE483B53E65EE67EA6C848AD5B94A3D479E26E4D3(L_0, 3, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogWarning(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogWarning_m221F0D868329D8D73489C7B4E52910C6C1E80C8F (RuntimeObject* ___logger0, String_t* ___message1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		String_t* L_1 = ___message1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m3F0219E0DB6E2CB10D0618F935EFE4BB8BAE85EA(L_0, 3, L_1, L_2, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogError(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogError_m17FDB94F01FBAF4E4D3EA0DB55AD9F2F7A59F407 (RuntimeObject* ___logger0, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId1, Exception_t* ___exception2, String_t* ___message3, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_1 = ___eventId1;
		Exception_t* L_2 = ___exception2;
		String_t* L_3 = ___message3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args4;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F(L_0, 4, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogError(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogError_mF347F7F118F92114A7A9856F55C1DBE56737C80B (RuntimeObject* ___logger0, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId1, String_t* ___message2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_1 = ___eventId1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args3;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mF55AB752259EDA23B7A55676519103760DCD7C27(L_0, 4, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogError(Microsoft.Extensions.Logging.ILogger,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogError_mD5B60284BA51EDD61E74DA22FA30A85B77927F5B (RuntimeObject* ___logger0, Exception_t* ___exception1, String_t* ___message2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		Exception_t* L_1 = ___exception1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args3;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mE483B53E65EE67EA6C848AD5B94A3D479E26E4D3(L_0, 4, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogError(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogError_m1151F264B84A277EAEE29115ED4832C7067F0245 (RuntimeObject* ___logger0, String_t* ___message1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		String_t* L_1 = ___message1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m3F0219E0DB6E2CB10D0618F935EFE4BB8BAE85EA(L_0, 4, L_1, L_2, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogCritical(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogCritical_m2878BB7050DAEC3E2AA23B9ABDCB67E2086D64D3 (RuntimeObject* ___logger0, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId1, Exception_t* ___exception2, String_t* ___message3, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_1 = ___eventId1;
		Exception_t* L_2 = ___exception2;
		String_t* L_3 = ___message3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args4;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F(L_0, 5, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogCritical(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.EventId,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogCritical_m9A7C1D61DA03DC95EABAA8F2AD62CCDF19F912C5 (RuntimeObject* ___logger0, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId1, String_t* ___message2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_1 = ___eventId1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args3;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mF55AB752259EDA23B7A55676519103760DCD7C27(L_0, 5, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogCritical(Microsoft.Extensions.Logging.ILogger,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogCritical_m9DFC630DB4E1904FCF9C26ACFABAA28452A149EB (RuntimeObject* ___logger0, Exception_t* ___exception1, String_t* ___message2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		Exception_t* L_1 = ___exception1;
		String_t* L_2 = ___message2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args3;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_mE483B53E65EE67EA6C848AD5B94A3D479E26E4D3(L_0, 5, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::LogCritical(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogCritical_m9D561139917C76498AE49837AE3A13F317E88B2E (RuntimeObject* ___logger0, String_t* ___message1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		String_t* L_1 = ___message1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m3F0219E0DB6E2CB10D0618F935EFE4BB8BAE85EA(L_0, 5, L_1, L_2, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_m3F0219E0DB6E2CB10D0618F935EFE4BB8BAE85EA (RuntimeObject* ___logger0, int32_t ___logLevel1, String_t* ___message2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		int32_t L_1 = ___logLevel1;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_2;
		L_2 = EventId_op_Implicit_m0DAA73915C7788018C741D3EE391ABABBC967BF4(0, NULL);
		String_t* L_3 = ___message2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args3;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F(L_0, L_1, L_2, (Exception_t*)NULL, L_3, L_4, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,Microsoft.Extensions.Logging.EventId,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_mF55AB752259EDA23B7A55676519103760DCD7C27 (RuntimeObject* ___logger0, int32_t ___logLevel1, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId2, String_t* ___message3, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		int32_t L_1 = ___logLevel1;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_2 = ___eventId2;
		String_t* L_3 = ___message3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args4;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F(L_0, L_1, L_2, (Exception_t*)NULL, L_3, L_4, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_mE483B53E65EE67EA6C848AD5B94A3D479E26E4D3 (RuntimeObject* ___logger0, int32_t ___logLevel1, Exception_t* ___exception2, String_t* ___message3, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		int32_t L_1 = ___logLevel1;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_2;
		L_2 = EventId_op_Implicit_m0DAA73915C7788018C741D3EE391ABABBC967BF4(0, NULL);
		Exception_t* L_3 = ___exception2;
		String_t* L_4 = ___message3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = ___args4;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::Log(Microsoft.Extensions.Logging.ILogger,Microsoft.Extensions.Logging.LogLevel,Microsoft.Extensions.Logging.EventId,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F (RuntimeObject* ___logger0, int32_t ___logLevel1, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId2, Exception_t* ___exception3, String_t* ___message4, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_Log_TisFormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_m2BE10C63CF08FD7A1E3C62F6075B3136827D0C5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B0053E5BC12967A61A36D68970E7E9514BA83D6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LoggerExtensions_Log_m75D476308DBDCD0476692483A7356CF3E6E7785F_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___logger0;
		int32_t L_3 = ___logLevel1;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_4 = ___eventId2;
		String_t* L_5 = ___message4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___args5;
		FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114 L_7;
		memset((&L_7), 0, sizeof(L_7));
		FormattedLogValues__ctor_mCF58384A2EC59C96A510D418010A5199F384420F((&L_7), L_5, L_6, /*hidden argument*/NULL);
		Exception_t* L_8 = ___exception3;
		il2cpp_codegen_runtime_class_init_inline(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3* L_9 = ((LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_StaticFields*)il2cpp_codegen_static_fields_for(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var))->____messageFormatter_0;
		NullCheck(L_2);
		GenericInterfaceActionInvoker5< int32_t, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710, FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114, Exception_t*, Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3* >::Invoke(ILogger_Log_TisFormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_m2BE10C63CF08FD7A1E3C62F6075B3136827D0C5B_RuntimeMethod_var, L_2, L_3, L_4, L_7, L_8, L_9);
		return;
	}
}
// System.IDisposable Microsoft.Extensions.Logging.LoggerExtensions::BeginScope(Microsoft.Extensions.Logging.ILogger,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoggerExtensions_BeginScope_m0A6010B8465791879508F18A8B8D96A6CDF143E7 (RuntimeObject* ___logger0, String_t* ___messageFormat1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_BeginScope_TisFormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_m64A36ECB92D2EC1AFA405C7A995D00EC3085CD2C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B0053E5BC12967A61A36D68970E7E9514BA83D6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LoggerExtensions_BeginScope_m0A6010B8465791879508F18A8B8D96A6CDF143E7_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___logger0;
		String_t* L_3 = ___messageFormat1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args2;
		FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114 L_5;
		memset((&L_5), 0, sizeof(L_5));
		FormattedLogValues__ctor_mCF58384A2EC59C96A510D418010A5199F384420F((&L_5), L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_6;
		L_6 = GenericInterfaceFuncInvoker1< RuntimeObject*, FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114 >::Invoke(ILogger_BeginScope_TisFormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114_m64A36ECB92D2EC1AFA405C7A995D00EC3085CD2C_RuntimeMethod_var, L_2, L_5);
		return L_6;
	}
}
// System.String Microsoft.Extensions.Logging.LoggerExtensions::MessageFormatter(Microsoft.Extensions.Logging.FormattedLogValues,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoggerExtensions_MessageFormatter_m9FBE8058CC2F31726E5A8DB5AC2C8C87B858B935 (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114 ___state0, Exception_t* ___error1, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = FormattedLogValues_ToString_m59B2396785E3BA6FD99896918E462096503CFDF6((&___state0), NULL);
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions__cctor_m72A7B044687080FC4BE96762BB4DBFFD16ACDEC8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_MessageFormatter_m9FBE8058CC2F31726E5A8DB5AC2C8C87B858B935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3* L_0 = (Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3*)il2cpp_codegen_object_new(Func_3_t7B06BE9399C6AC652CFF72CFD7A90CC97B7389B3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_3__ctor_m6D2444715EF8A9B257B8C6C130AE189F866A8F98(L_0, NULL, (intptr_t)((void*)LoggerExtensions_MessageFormatter_m9FBE8058CC2F31726E5A8DB5AC2C8C87B858B935_RuntimeMethod_var), NULL);
		((LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_StaticFields*)il2cpp_codegen_static_fields_for(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var))->____messageFormatter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_StaticFields*)il2cpp_codegen_static_fields_for(LoggerExtensions_tBDE0DCE2B86E355EA5061A43B0783B88B124FE08_il2cpp_TypeInfo_var))->____messageFormatter_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Extensions.Logging.LoggerExternalScopeProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExternalScopeProvider__ctor_m0F3D97625614B7F19C70B3516563523DCA889E1D (LoggerExternalScopeProvider_tD86DAC8667B485C7D304236064E89A29A4C623E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLocal_1__ctor_m0900D49FF1E3F0AB5D2F5D8020FCAEA30F50B2BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLocal_1_t71E5F627E72F1E1EF168B15F1D893E0A276A9DE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncLocal_1_t71E5F627E72F1E1EF168B15F1D893E0A276A9DE0* L_0 = (AsyncLocal_1_t71E5F627E72F1E1EF168B15F1D893E0A276A9DE0*)il2cpp_codegen_object_new(AsyncLocal_1_t71E5F627E72F1E1EF168B15F1D893E0A276A9DE0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AsyncLocal_1__ctor_m0900D49FF1E3F0AB5D2F5D8020FCAEA30F50B2BE(L_0, AsyncLocal_1__ctor_m0900D49FF1E3F0AB5D2F5D8020FCAEA30F50B2BE_RuntimeMethod_var);
		__this->____currentScope_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentScope_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.IDisposable Microsoft.Extensions.Logging.LoggerExternalScopeProvider::Push(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoggerExternalScopeProvider_Push_mDDBACB45766D16081A7FA7B8550D5AE692958D64 (LoggerExternalScopeProvider_tD86DAC8667B485C7D304236064E89A29A4C623E8* __this, RuntimeObject* ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLocal_1_get_Value_m61E35BC5D9D08362DE151EA2098AB79107A2299E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLocal_1_set_Value_m8EADD88B960D024004EFDF059C29FFFE976F8A53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* V_0 = NULL;
	Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* V_1 = NULL;
	{
		AsyncLocal_1_t71E5F627E72F1E1EF168B15F1D893E0A276A9DE0* L_0 = __this->____currentScope_0;
		NullCheck(L_0);
		Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* L_1;
		L_1 = AsyncLocal_1_get_Value_m61E35BC5D9D08362DE151EA2098AB79107A2299E(L_0, AsyncLocal_1_get_Value_m61E35BC5D9D08362DE151EA2098AB79107A2299E_RuntimeMethod_var);
		V_0 = L_1;
		RuntimeObject* L_2 = ___state0;
		Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* L_3 = V_0;
		Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* L_4 = (Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C*)il2cpp_codegen_object_new(Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Scope__ctor_mE42917026B6B147497A51B3645AB7657E6B360D7(L_4, __this, L_2, L_3, NULL);
		V_1 = L_4;
		AsyncLocal_1_t71E5F627E72F1E1EF168B15F1D893E0A276A9DE0* L_5 = __this->____currentScope_0;
		Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* L_6 = V_1;
		NullCheck(L_5);
		AsyncLocal_1_set_Value_m8EADD88B960D024004EFDF059C29FFFE976F8A53(L_5, L_6, AsyncLocal_1_set_Value_m8EADD88B960D024004EFDF059C29FFFE976F8A53_RuntimeMethod_var);
		Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* L_7 = V_1;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::.ctor(Microsoft.Extensions.Logging.LoggerExternalScopeProvider,System.Object,Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scope__ctor_mE42917026B6B147497A51B3645AB7657E6B360D7 (Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* __this, LoggerExternalScopeProvider_tD86DAC8667B485C7D304236064E89A29A4C623E8* ___provider0, RuntimeObject* ___state1, Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* ___parent2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		LoggerExternalScopeProvider_tD86DAC8667B485C7D304236064E89A29A4C623E8* L_0 = ___provider0;
		__this->____provider_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____provider_0), (void*)L_0);
		RuntimeObject* L_1 = ___state1;
		__this->___U3CStateU3Ek__BackingField_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStateU3Ek__BackingField_3), (void*)L_1);
		Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* L_2 = ___parent2;
		__this->___U3CParentU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_2), (void*)L_2);
		return;
	}
}
// Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* Scope_get_Parent_m43A08C5AEF90BA9B4A45389F3C613225456C4935 (Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* __this, const RuntimeMethod* method) 
{
	{
		Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* L_0 = __this->___U3CParentU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Object Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Scope_get_State_m90CA0487CF9D917504B5CE67D2FC05779FBC18C9 (Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CStateU3Ek__BackingField_3;
		return L_0;
	}
}
// System.String Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scope_ToString_mE2A52AD1B7A4ACC34D3D4531A2262E51B7461141 (Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* __this, const RuntimeMethod* method) 
{
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = Scope_get_State_m90CA0487CF9D917504B5CE67D2FC05779FBC18C9_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		return L_2;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerExternalScopeProvider/Scope::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scope_Dispose_m2F150A70193C6AD09C1F9CE6C109DAA9C6841492 (Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncLocal_1_set_Value_m8EADD88B960D024004EFDF059C29FFFE976F8A53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____isDisposed_1;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		LoggerExternalScopeProvider_tD86DAC8667B485C7D304236064E89A29A4C623E8* L_1 = __this->____provider_0;
		NullCheck(L_1);
		AsyncLocal_1_t71E5F627E72F1E1EF168B15F1D893E0A276A9DE0* L_2 = L_1->____currentScope_0;
		Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* L_3;
		L_3 = Scope_get_Parent_m43A08C5AEF90BA9B4A45389F3C613225456C4935_inline(__this, NULL);
		NullCheck(L_2);
		AsyncLocal_1_set_Value_m8EADD88B960D024004EFDF059C29FFFE976F8A53(L_2, L_3, AsyncLocal_1_set_Value_m8EADD88B960D024004EFDF059C29FFFE976F8A53_RuntimeMethod_var);
		__this->____isDisposed_1 = (bool)1;
	}

IL_0025:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Extensions.Logging.ILogger Microsoft.Extensions.Logging.LoggerFactoryExtensions::CreateLogger(Microsoft.Extensions.Logging.ILoggerFactory,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoggerFactoryExtensions_CreateLogger_mBB87A72FEE212C65C756528CFEF89C9812F2FBF6 (RuntimeObject* ___factory0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoggerFactory_t54A89DDF16F71A8E302F80F17BBDD1C8A148C526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___factory0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7434CFB1B64AE9F03B145093A7B1B7D90A94209D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LoggerFactoryExtensions_CreateLogger_mBB87A72FEE212C65C756528CFEF89C9812F2FBF6_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t* L_2 = ___type1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, (Type_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LoggerFactoryExtensions_CreateLogger_mBB87A72FEE212C65C756528CFEF89C9812F2FBF6_RuntimeMethod_var)));
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___factory0;
		Type_t* L_6 = ___type1;
		il2cpp_codegen_runtime_class_init_inline(TypeNameHelper_tD2AF6148EFC2BE97A7DFE46B96CAD922BB4B3F34_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = TypeNameHelper_GetTypeDisplayName_m8C466BFFD19D6F31A4A9B402A8B0C3C3357F98CE(L_6, (bool)1, (bool)0, (bool)0, ((int32_t)46), NULL);
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Microsoft.Extensions.Logging.ILogger Microsoft.Extensions.Logging.ILoggerFactory::CreateLogger(System.String) */, ILoggerFactory_t54A89DDF16F71A8E302F80F17BBDD1C8A148C526_il2cpp_TypeInfo_var, L_5, L_7);
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Func`2<Microsoft.Extensions.Logging.ILogger,System.IDisposable> Microsoft.Extensions.Logging.LoggerMessage::DefineScope(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tB95BA8A833F24D8DDC8B83C045E82A0969E812C3* LoggerMessage_DefineScope_m5BC31A422CF52C889D3DCACF78B94AFD2123803D (String_t* ___formatString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB95BA8A833F24D8DDC8B83C045E82A0969E812C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CDefineScopeU3Eb__0_m789FA1A48FE80B71F99CEE8DA4E5FB8BA9731899_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t7A1D5FDB415DB93F6AC1D6F55696A25A02C05EE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t7A1D5FDB415DB93F6AC1D6F55696A25A02C05EE9* V_0 = NULL;
	LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t7A1D5FDB415DB93F6AC1D6F55696A25A02C05EE9* L_0 = (U3CU3Ec__DisplayClass0_0_t7A1D5FDB415DB93F6AC1D6F55696A25A02C05EE9*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t7A1D5FDB415DB93F6AC1D6F55696A25A02C05EE9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_m040C0D882B9A9A200B58F5038F1246AA44EB9B91(L_0, NULL);
		V_0 = L_0;
		String_t* L_1 = ___formatString0;
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_2;
		L_2 = LoggerMessage_CreateLogValuesFormatter_mE62C17DFF45962BF9EB3316B2C9F3C97B2D80136(L_1, 0, NULL);
		V_1 = L_2;
		U3CU3Ec__DisplayClass0_0_t7A1D5FDB415DB93F6AC1D6F55696A25A02C05EE9* L_3 = V_0;
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_4 = V_1;
		LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A L_5;
		memset((&L_5), 0, sizeof(L_5));
		LogValues__ctor_m311E4B637A436B1B78CD9334DF9BC0F1D709FC90_inline((&L_5), L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->___logValues_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_3->___logValues_0))->____formatter_1), (void*)NULL);
		U3CU3Ec__DisplayClass0_0_t7A1D5FDB415DB93F6AC1D6F55696A25A02C05EE9* L_6 = V_0;
		Func_2_tB95BA8A833F24D8DDC8B83C045E82A0969E812C3* L_7 = (Func_2_tB95BA8A833F24D8DDC8B83C045E82A0969E812C3*)il2cpp_codegen_object_new(Func_2_tB95BA8A833F24D8DDC8B83C045E82A0969E812C3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_mE48C1C3753EBFF77E4471D3C4C6D90B7D518F55B(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CDefineScopeU3Eb__0_m789FA1A48FE80B71F99CEE8DA4E5FB8BA9731899_RuntimeMethod_var), NULL);
		return L_7;
	}
}
// System.Action`2<Microsoft.Extensions.Logging.ILogger,System.Exception> Microsoft.Extensions.Logging.LoggerMessage::Define(Microsoft.Extensions.Logging.LogLevel,Microsoft.Extensions.Logging.EventId,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t6867F55B2C19F5B1DA842F14404A90CBB99104DD* LoggerMessage_Define_mCCEE3284754FDE4F585AE3181D6C9E3AF1AAFCB7 (int32_t ___logLevel0, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 ___eventId1, String_t* ___formatString2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t6867F55B2C19F5B1DA842F14404A90CBB99104DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CDefineU3Eb__0_mF036DC21A1F20244ABC6B4A52054033E5F669409_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_tC16455A80D0F89710800ED7064BAFFF1582EA7C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_tC16455A80D0F89710800ED7064BAFFF1582EA7C9* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass7_0_tC16455A80D0F89710800ED7064BAFFF1582EA7C9* L_0 = (U3CU3Ec__DisplayClass7_0_tC16455A80D0F89710800ED7064BAFFF1582EA7C9*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_tC16455A80D0F89710800ED7064BAFFF1582EA7C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7_0__ctor_mA24CE2A417C8816801B1ADC2417A3A6879223D90(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_tC16455A80D0F89710800ED7064BAFFF1582EA7C9* L_1 = V_0;
		int32_t L_2 = ___logLevel0;
		NullCheck(L_1);
		L_1->___logLevel_0 = L_2;
		U3CU3Ec__DisplayClass7_0_tC16455A80D0F89710800ED7064BAFFF1582EA7C9* L_3 = V_0;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_4 = ___eventId1;
		NullCheck(L_3);
		L_3->___eventId_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_3->___eventId_1))->___U3CNameU3Ek__BackingField_1), (void*)NULL);
		U3CU3Ec__DisplayClass7_0_tC16455A80D0F89710800ED7064BAFFF1582EA7C9* L_5 = V_0;
		String_t* L_6 = ___formatString2;
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_7;
		L_7 = LoggerMessage_CreateLogValuesFormatter_mE62C17DFF45962BF9EB3316B2C9F3C97B2D80136(L_6, 0, NULL);
		NullCheck(L_5);
		L_5->___formatter_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___formatter_2), (void*)L_7);
		U3CU3Ec__DisplayClass7_0_tC16455A80D0F89710800ED7064BAFFF1582EA7C9* L_8 = V_0;
		Action_2_t6867F55B2C19F5B1DA842F14404A90CBB99104DD* L_9 = (Action_2_t6867F55B2C19F5B1DA842F14404A90CBB99104DD*)il2cpp_codegen_object_new(Action_2_t6867F55B2C19F5B1DA842F14404A90CBB99104DD_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_2__ctor_m743BBD0579194EE65E982DAFDA6B0585D6961266(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CDefineU3Eb__0_mF036DC21A1F20244ABC6B4A52054033E5F669409_RuntimeMethod_var), NULL);
		return L_9;
	}
}
// Microsoft.Extensions.Logging.LogValuesFormatter Microsoft.Extensions.Logging.LoggerMessage::CreateLogValuesFormatter(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* LoggerMessage_CreateLogValuesFormatter_mE62C17DFF45962BF9EB3316B2C9F3C97B2D80136 (String_t* ___formatString0, int32_t ___expectedNamedParameterCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___formatString0;
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_1 = (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C*)il2cpp_codegen_object_new(LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LogValuesFormatter__ctor_m63200EDB80E69D4D1CD0467FA2FBACFF255F9504(L_1, L_0, NULL);
		V_0 = L_1;
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_2 = V_0;
		NullCheck(L_2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3;
		L_3 = LogValuesFormatter_get_ValueNames_m7BB3F9B56AD516B6ECB699D81D9D17E280A422FB_inline(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_3, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_1 = L_4;
		int32_t L_5 = V_1;
		int32_t L_6 = ___expectedNamedParameterCount1;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var)));
		String_t* L_7;
		L_7 = SR_get_UnexpectedNumberOfNamedParameters_m7630BC497FF937E484D6C06F8E4734EA6AC6CCC4(NULL);
		String_t* L_8 = ___formatString0;
		int32_t L_9 = ___expectedNamedParameterCount1;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_10);
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_13);
		String_t* L_15;
		L_15 = SR_Format_mDA163C89DFEB1BBC7129188435C190AE8AD47935(L_7, L_8, L_11, L_14, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LoggerMessage_CreateLogValuesFormatter_mE62C17DFF45962BF9EB3316B2C9F3C97B2D80136_RuntimeMethod_var)));
	}

IL_0034:
	{
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_17 = V_0;
		return L_17;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.Extensions.Logging.LoggerMessage/LogValues
IL2CPP_EXTERN_C void LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_marshal_pinvoke(const LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A& unmarshaled, LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_marshaled_pinvoke& marshaled)
{
	Exception_t* ____formatter_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'LogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_1Exception, NULL);
}
IL2CPP_EXTERN_C void LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_marshal_pinvoke_back(const LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_marshaled_pinvoke& marshaled, LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A& unmarshaled)
{
	Exception_t* ____formatter_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'LogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Logging.LoggerMessage/LogValues
IL2CPP_EXTERN_C void LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_marshal_pinvoke_cleanup(LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.Extensions.Logging.LoggerMessage/LogValues
IL2CPP_EXTERN_C void LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_marshal_com(const LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A& unmarshaled, LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_marshaled_com& marshaled)
{
	Exception_t* ____formatter_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'LogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_1Exception, NULL);
}
IL2CPP_EXTERN_C void LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_marshal_com_back(const LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_marshaled_com& marshaled, LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A& unmarshaled)
{
	Exception_t* ____formatter_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_formatter' of type 'LogValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____formatter_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Logging.LoggerMessage/LogValues
IL2CPP_EXTERN_C void LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_marshal_com_cleanup(LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_marshaled_com& marshaled)
{
}
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues::.ctor(Microsoft.Extensions.Logging.LogValuesFormatter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogValues__ctor_m311E4B637A436B1B78CD9334DF9BC0F1D709FC90 (LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* __this, LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* ___formatter0, const RuntimeMethod* method) 
{
	{
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_0 = ___formatter0;
		__this->____formatter_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____formatter_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void LogValues__ctor_m311E4B637A436B1B78CD9334DF9BC0F1D709FC90_AdjustorThunk (RuntimeObject* __this, LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* ___formatter0, const RuntimeMethod* method)
{
	LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A*>(__this + _offset);
	LogValues__ctor_m311E4B637A436B1B78CD9334DF9BC0F1D709FC90_inline(_thisAdjusted, ___formatter0, method);
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.LoggerMessage/LogValues::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 LogValues_get_Item_m664FE6599AE8BA26DC6B55467D5BF9B8706388BD (LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_1 = __this->____formatter_1;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = LogValuesFormatter_get_OriginalFormat_m3BC5A1D8FD7535342E570848330DD86D641963E5_inline(L_1, NULL);
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_3;
		memset((&L_3), 0, sizeof(L_3));
		KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB((&L_3), _stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8, L_2, /*hidden argument*/KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var);
		return L_3;
	}

IL_0019:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_4 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogValues_get_Item_m664FE6599AE8BA26DC6B55467D5BF9B8706388BD_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 LogValues_get_Item_m664FE6599AE8BA26DC6B55467D5BF9B8706388BD_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A*>(__this + _offset);
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 _returnValue;
	_returnValue = LogValues_get_Item_m664FE6599AE8BA26DC6B55467D5BF9B8706388BD(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Logging.LoggerMessage/LogValues::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogValues_get_Count_mD518ADCA875927FF5FD58B9FBDDF1BC0DCD010FE (LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* __this, const RuntimeMethod* method) 
{
	{
		return 1;
	}
}
IL2CPP_EXTERN_C  int32_t LogValues_get_Count_mD518ADCA875927FF5FD58B9FBDDF1BC0DCD010FE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = LogValues_get_Count_mD518ADCA875927FF5FD58B9FBDDF1BC0DCD010FE(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Microsoft.Extensions.Logging.LoggerMessage/LogValues::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogValues_GetEnumerator_m6337242798213F4331659464F996BBDD5F9789E7 (LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__7_t1175A6D8A44E20D3128CABB56892A7B8E193CB2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__7_t1175A6D8A44E20D3128CABB56892A7B8E193CB2D* L_0 = (U3CGetEnumeratorU3Ed__7_t1175A6D8A44E20D3128CABB56892A7B8E193CB2D*)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__7_t1175A6D8A44E20D3128CABB56892A7B8E193CB2D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetEnumeratorU3Ed__7__ctor_m1A726EC62C2083E1069C9F272CDAAB19328E901F(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__7_t1175A6D8A44E20D3128CABB56892A7B8E193CB2D* L_1 = L_0;
		LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A L_2 = (*(LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A*)__this);
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3E4__this_2))->____formatter_1), (void*)NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* LogValues_GetEnumerator_m6337242798213F4331659464F996BBDD5F9789E7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = LogValues_GetEnumerator_m6337242798213F4331659464F996BBDD5F9789E7(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Logging.LoggerMessage/LogValues::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValues_ToString_m2C2B83CA5AC4CF587F24146CE120AA6CE505DC34 (LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* __this, const RuntimeMethod* method) 
{
	{
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_0 = __this->____formatter_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = LogValuesFormatter_Format_mFD3DA5894CA61DE796D2B6770399A71E541E9458_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* LogValues_ToString_m2C2B83CA5AC4CF587F24146CE120AA6CE505DC34_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = LogValues_ToString_m2C2B83CA5AC4CF587F24146CE120AA6CE505DC34(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.IEnumerator Microsoft.Extensions.Logging.LoggerMessage/LogValues::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogValues_System_Collections_IEnumerable_GetEnumerator_m0F929B015BC8762FEAF804F2198992D52506149A (LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = LogValues_GetEnumerator_m6337242798213F4331659464F996BBDD5F9789E7(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* LogValues_System_Collections_IEnumerable_GetEnumerator_m0F929B015BC8762FEAF804F2198992D52506149A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = LogValues_System_Collections_IEnumerable_GetEnumerator_m0F929B015BC8762FEAF804F2198992D52506149A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogValues__cctor_m751D7F30526E3E81662940075790A88C38119F8B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tCEC4A7984DD90D712FEBC82FBAA3D2064E1AB4BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__11_0_m2705FE8DEEF59909B80004DBC5587C8AE603FA3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076_il2cpp_TypeInfo_var);
		U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076* L_0 = ((U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_tCEC4A7984DD90D712FEBC82FBAA3D2064E1AB4BE* L_1 = (Func_3_tCEC4A7984DD90D712FEBC82FBAA3D2064E1AB4BE*)il2cpp_codegen_object_new(Func_3_tCEC4A7984DD90D712FEBC82FBAA3D2064E1AB4BE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_3__ctor_mB5D7D5F9D4E6C9C74C736A889CA1093E8E405337(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__11_0_m2705FE8DEEF59909B80004DBC5587C8AE603FA3C_RuntimeMethod_var), NULL);
		((LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_StaticFields*)il2cpp_codegen_static_fields_for(LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_il2cpp_TypeInfo_var))->___Callback_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_StaticFields*)il2cpp_codegen_static_fields_for(LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_il2cpp_TypeInfo_var))->___Callback_0), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7__ctor_m1A726EC62C2083E1069C9F272CDAAB19328E901F (U3CGetEnumeratorU3Ed__7_t1175A6D8A44E20D3128CABB56892A7B8E193CB2D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_System_IDisposable_Dispose_mAB448928F621E68A063BEF4F7AFA7CE7997CC874 (U3CGetEnumeratorU3Ed__7_t1175A6D8A44E20D3128CABB56892A7B8E193CB2D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__7_MoveNext_mD43CF830D116D32A039DD77CDB8E053EADE7FB21 (U3CGetEnumeratorU3Ed__7_t1175A6D8A44E20D3128CABB56892A7B8E193CB2D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* L_3 = (&__this->___U3CU3E4__this_2);
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_4;
		L_4 = LogValues_get_Item_m664FE6599AE8BA26DC6B55467D5BF9B8706388BD(L_3, 0, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0032:
	{
		__this->___U3CU3E1__state_0 = (-1);
		return (bool)0;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 U3CGetEnumeratorU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_get_Current_mD87D747EDE738BCE18816C0C4441E8A694B8376C (U3CGetEnumeratorU3Ed__7_t1175A6D8A44E20D3128CABB56892A7B8E193CB2D* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__7_System_Collections_IEnumerator_Reset_m1A11BB90C9FCDA8215B8AC49DAD1A3E35893BBAD (U3CGetEnumeratorU3Ed__7_t1175A6D8A44E20D3128CABB56892A7B8E193CB2D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__7_System_Collections_IEnumerator_Reset_m1A11BB90C9FCDA8215B8AC49DAD1A3E35893BBAD_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.Extensions.Logging.LoggerMessage/LogValues/<GetEnumerator>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__7_System_Collections_IEnumerator_get_Current_mED4C77264DD71D3E335812BEE88F8AB424D2585D (U3CGetEnumeratorU3Ed__7_t1175A6D8A44E20D3128CABB56892A7B8E193CB2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_0 = __this->___U3CU3E2__current_1;
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5037709831132BABC8DD0D0D039C4BF08C439F11 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076* L_0 = (U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076*)il2cpp_codegen_object_new(U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mDF58CC0F3E28C79A0AC30323108E89B00F43BA4A(L_0, NULL);
		((U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerMessage/LogValues/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDF58CC0F3E28C79A0AC30323108E89B00F43BA4A (U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Microsoft.Extensions.Logging.LoggerMessage/LogValues/<>c::<.cctor>b__11_0(Microsoft.Extensions.Logging.LoggerMessage/LogValues,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_cctorU3Eb__11_0_m2705FE8DEEF59909B80004DBC5587C8AE603FA3C (U3CU3Ec_t34AFFE9E600D5C7728064182B7FAECBABABBD076* __this, LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A ___state0, Exception_t* ___exception1, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = LogValues_ToString_m2C2B83CA5AC4CF587F24146CE120AA6CE505DC34((&___state0), NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m040C0D882B9A9A200B58F5038F1246AA44EB9B91 (U3CU3Ec__DisplayClass0_0_t7A1D5FDB415DB93F6AC1D6F55696A25A02C05EE9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.IDisposable Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass0_0::<DefineScope>b__0(Microsoft.Extensions.Logging.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass0_0_U3CDefineScopeU3Eb__0_m789FA1A48FE80B71F99CEE8DA4E5FB8BA9731899 (U3CU3Ec__DisplayClass0_0_t7A1D5FDB415DB93F6AC1D6F55696A25A02C05EE9* __this, RuntimeObject* ___logger0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_BeginScope_TisLogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_m3D7B8B72795716823547F64803E45E0A2175D1FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A L_1 = __this->___logValues_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = GenericInterfaceFuncInvoker1< RuntimeObject*, LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A >::Invoke(ILogger_BeginScope_TisLogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_m3D7B8B72795716823547F64803E45E0A2175D1FC_RuntimeMethod_var, L_0, L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mA24CE2A417C8816801B1ADC2417A3A6879223D90 (U3CU3Ec__DisplayClass7_0_tC16455A80D0F89710800ED7064BAFFF1582EA7C9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LoggerMessage/<>c__DisplayClass7_0::<Define>b__0(Microsoft.Extensions.Logging.ILogger,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CDefineU3Eb__0_mF036DC21A1F20244ABC6B4A52054033E5F669409 (U3CU3Ec__DisplayClass7_0_tC16455A80D0F89710800ED7064BAFFF1582EA7C9* __this, RuntimeObject* ___logger0, Exception_t* ___exception1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_Log_TisLogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_mCF7DC9226C971C5C1E0C2DD50C4770581674DC72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t1C0C2CD1CDFA86541C20F898F7581FB2CB04BFB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		int32_t L_1 = __this->___logLevel_0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean Microsoft.Extensions.Logging.ILogger::IsEnabled(Microsoft.Extensions.Logging.LogLevel) */, ILogger_t1C0C2CD1CDFA86541C20F898F7581FB2CB04BFB4_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_3 = ___logger0;
		int32_t L_4 = __this->___logLevel_0;
		EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710 L_5 = __this->___eventId_1;
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_6 = __this->___formatter_2;
		LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A L_7;
		memset((&L_7), 0, sizeof(L_7));
		LogValues__ctor_m311E4B637A436B1B78CD9334DF9BC0F1D709FC90_inline((&L_7), L_6, /*hidden argument*/NULL);
		Exception_t* L_8 = ___exception1;
		il2cpp_codegen_runtime_class_init_inline(LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_il2cpp_TypeInfo_var);
		Func_3_tCEC4A7984DD90D712FEBC82FBAA3D2064E1AB4BE* L_9 = ((LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_StaticFields*)il2cpp_codegen_static_fields_for(LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_il2cpp_TypeInfo_var))->___Callback_0;
		NullCheck(L_3);
		GenericInterfaceActionInvoker5< int32_t, EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710, LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A, Exception_t*, Func_3_tCEC4A7984DD90D712FEBC82FBAA3D2064E1AB4BE* >::Invoke(ILogger_Log_TisLogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A_mCF7DC9226C971C5C1E0C2DD50C4770581674DC72_RuntimeMethod_var, L_3, L_4, L_5, L_7, L_8, L_9);
	}

IL_0031:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogValuesFormatter__ctor_m63200EDB80E69D4D1CD0467FA2FBACFF255F9504 (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, String_t* ___format0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->____valueNames_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____valueNames_3), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_1 = ___format0;
		LogValuesFormatter_set_OriginalFormat_m80D85FA1506C051EC3B5AC66852C46D3F466881A_inline(__this, L_1, NULL);
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_2, NULL);
		V_0 = L_2;
		V_1 = 0;
		String_t* L_3 = ___format0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		V_2 = L_4;
		goto IL_00c6;
	}

IL_002c:
	{
		String_t* L_5 = ___format0;
		int32_t L_6 = V_1;
		int32_t L_7 = V_2;
		il2cpp_codegen_runtime_class_init_inline(LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = LogValuesFormatter_FindBraceIndex_m1DF65D25C5132079993BFA85236C6E14EBB60C87(L_5, ((int32_t)123), L_6, L_7, NULL);
		V_3 = L_8;
		String_t* L_9 = ___format0;
		int32_t L_10 = V_3;
		int32_t L_11 = V_2;
		int32_t L_12;
		L_12 = LogValuesFormatter_FindBraceIndex_m1DF65D25C5132079993BFA85236C6E14EBB60C87(L_9, ((int32_t)125), L_10, L_11, NULL);
		V_4 = L_12;
		int32_t L_13 = V_4;
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0058;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		String_t* L_16 = ___format0;
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = V_1;
		NullCheck(L_15);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_15, L_16, L_17, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), NULL);
		int32_t L_21 = V_2;
		V_1 = L_21;
		goto IL_00c6;
	}

IL_0058:
	{
		String_t* L_22 = ___format0;
		il2cpp_codegen_runtime_class_init_inline(LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_23 = ((LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_StaticFields*)il2cpp_codegen_static_fields_for(LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var))->___FormatDelimiters_1;
		int32_t L_24 = V_3;
		int32_t L_25 = V_4;
		int32_t L_26;
		L_26 = LogValuesFormatter_FindIndexOfAny_m2C4C3C1725A87F036579C904685B8F699B7BBBE2(L_22, L_23, L_24, L_25, NULL);
		V_5 = L_26;
		StringBuilder_t* L_27 = V_0;
		String_t* L_28 = ___format0;
		int32_t L_29 = V_1;
		int32_t L_30 = V_3;
		int32_t L_31 = V_1;
		NullCheck(L_27);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_27, L_28, L_29, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_30, L_31)), 1)), NULL);
		StringBuilder_t* L_33 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_34 = __this->____valueNames_3;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_34, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_6 = L_35;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_36;
		L_36 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_37;
		L_37 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&V_6), L_36, NULL);
		NullCheck(L_33);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_33, L_37, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_39 = __this->____valueNames_3;
		String_t* L_40 = ___format0;
		int32_t L_41 = V_3;
		int32_t L_42 = V_5;
		int32_t L_43 = V_3;
		NullCheck(L_40);
		String_t* L_44;
		L_44 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_40, ((int32_t)il2cpp_codegen_add(L_41, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_42, L_43)), 1)), NULL);
		NullCheck(L_39);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_39, L_44, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		StringBuilder_t* L_45 = V_0;
		String_t* L_46 = ___format0;
		int32_t L_47 = V_5;
		int32_t L_48 = V_4;
		int32_t L_49 = V_5;
		NullCheck(L_45);
		StringBuilder_t* L_50;
		L_50 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_45, L_46, L_47, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_48, L_49)), 1)), NULL);
		int32_t L_51 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_00c6:
	{
		int32_t L_52 = V_1;
		int32_t L_53 = V_2;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_002c;
		}
	}
	{
		StringBuilder_t* L_54 = V_0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_54);
		__this->____format_2 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____format_2), (void*)L_55);
		return;
	}
}
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::get_OriginalFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_get_OriginalFormat_m3BC5A1D8FD7535342E570848330DD86D641963E5 (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3COriginalFormatU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter::set_OriginalFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogValuesFormatter_set_OriginalFormat_m80D85FA1506C051EC3B5AC66852C46D3F466881A (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3COriginalFormatU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COriginalFormatU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Microsoft.Extensions.Logging.LogValuesFormatter::get_ValueNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* LogValuesFormatter_get_ValueNames_m7BB3F9B56AD516B6ECB699D81D9D17E280A422FB (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____valueNames_3;
		return L_0;
	}
}
// System.Int32 Microsoft.Extensions.Logging.LogValuesFormatter::FindBraceIndex(System.String,System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogValuesFormatter_FindBraceIndex_m1DF65D25C5132079993BFA85236C6E14EBB60C87 (String_t* ___format0, Il2CppChar ___brace1, int32_t ___startIndex2, int32_t ___endIndex3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___endIndex3;
		V_0 = L_0;
		int32_t L_1 = ___startIndex2;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0041;
	}

IL_0008:
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___format0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		Il2CppChar L_6 = ___brace1;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_7 = V_2;
		if (((int32_t)(L_7%2)))
		{
			goto IL_0045;
		}
	}
	{
		V_2 = 0;
		int32_t L_8 = ___endIndex3;
		V_0 = L_8;
		goto IL_003d;
	}

IL_0021:
	{
		String_t* L_9 = ___format0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, L_10, NULL);
		Il2CppChar L_12 = ___brace1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_003d;
		}
	}
	{
		Il2CppChar L_13 = ___brace1;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_14 = V_2;
		if (L_14)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_15 = V_1;
		V_0 = L_15;
		goto IL_0039;
	}

IL_0037:
	{
		int32_t L_16 = V_1;
		V_0 = L_16;
	}

IL_0039:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_003d:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0041:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ___endIndex3;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0008;
		}
	}

IL_0045:
	{
		int32_t L_21 = V_0;
		return L_21;
	}
}
// System.Int32 Microsoft.Extensions.Logging.LogValuesFormatter::FindIndexOfAny(System.String,System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogValuesFormatter_FindIndexOfAny_m2C4C3C1725A87F036579C904685B8F699B7BBBE2 (String_t* ___format0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars1, int32_t ___startIndex2, int32_t ___endIndex3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___format0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___chars1;
		int32_t L_2 = ___startIndex2;
		int32_t L_3 = ___endIndex3;
		int32_t L_4 = ___startIndex2;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = String_IndexOfAny_m740B0108B7FAFFAB1C3F88E782B094195A4E3B75(L_0, L_1, L_2, ((int32_t)il2cpp_codegen_subtract(L_3, L_4)), NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_0012:
	{
		int32_t L_8 = ___endIndex3;
		return L_8;
	}
}
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::Format(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_Format_m74126A3B9E54B7EC888F5D4DB0764271FC090323 (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B5_2 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___values0;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0007:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___values0;
		int32_t L_2 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___values0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		RuntimeObject* L_7;
		L_7 = LogValuesFormatter_FormatArgument_m9FCBAF42DAD055555C37C03E89B3F0EDF5149C43(__this, L_6, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_7);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (RuntimeObject*)L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0017:
	{
		int32_t L_9 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_001d:
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_11;
		L_11 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_12 = __this->____format_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___values0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		G_B5_0 = L_14;
		G_B5_1 = L_12;
		G_B5_2 = L_11;
		if (L_14)
		{
			G_B6_0 = L_14;
			G_B6_1 = L_12;
			G_B6_2 = L_11;
			goto IL_0032;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15;
		L_15 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		G_B6_0 = L_15;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0032:
	{
		String_t* L_16;
		L_16 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(G_B6_2, G_B6_1, G_B6_0, NULL);
		return L_16;
	}
}
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::Format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_Format_mFD3DA5894CA61DE796D2B6770399A71E541E9458 (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____format_2;
		return L_0;
	}
}
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::Format(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_Format_m517B8FB91D7E544EC576FD671F17D4FD453D4DF8 (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_1 = __this->____format_2;
		RuntimeObject* L_2 = ___arg00;
		RuntimeObject* L_3;
		L_3 = LogValuesFormatter_FormatArgument_m9FCBAF42DAD055555C37C03E89B3F0EDF5149C43(__this, L_2, NULL);
		String_t* L_4;
		L_4 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744(L_0, L_1, L_3, NULL);
		return L_4;
	}
}
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::Format(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_Format_mC9085CA6265ACAF2445D0CC659B46AED06190383 (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_1 = __this->____format_2;
		RuntimeObject* L_2 = ___arg00;
		RuntimeObject* L_3;
		L_3 = LogValuesFormatter_FormatArgument_m9FCBAF42DAD055555C37C03E89B3F0EDF5149C43(__this, L_2, NULL);
		RuntimeObject* L_4 = ___arg11;
		RuntimeObject* L_5;
		L_5 = LogValuesFormatter_FormatArgument_m9FCBAF42DAD055555C37C03E89B3F0EDF5149C43(__this, L_4, NULL);
		String_t* L_6;
		L_6 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_0, L_1, L_3, L_5, NULL);
		return L_6;
	}
}
// System.String Microsoft.Extensions.Logging.LogValuesFormatter::Format(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_Format_m9A5D4B88FFAD1EDE3853728B28C6D398B8BE688A (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, RuntimeObject* ___arg00, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_1 = __this->____format_2;
		RuntimeObject* L_2 = ___arg00;
		RuntimeObject* L_3;
		L_3 = LogValuesFormatter_FormatArgument_m9FCBAF42DAD055555C37C03E89B3F0EDF5149C43(__this, L_2, NULL);
		RuntimeObject* L_4 = ___arg11;
		RuntimeObject* L_5;
		L_5 = LogValuesFormatter_FormatArgument_m9FCBAF42DAD055555C37C03E89B3F0EDF5149C43(__this, L_4, NULL);
		RuntimeObject* L_6 = ___arg22;
		RuntimeObject* L_7;
		L_7 = LogValuesFormatter_FormatArgument_m9FCBAF42DAD055555C37C03E89B3F0EDF5149C43(__this, L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mF8E53122BE8F0F617357DFB75C3912D1242DE263(L_0, L_1, L_3, L_5, L_7, NULL);
		return L_8;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Microsoft.Extensions.Logging.LogValuesFormatter::GetValue(System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 LogValuesFormatter_GetValue_m937B78C1EEF207AE5F885B093158485737905F3F (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___index1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->____valueNames_3;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_2, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)L_3)))
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_4 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogValuesFormatter_GetValue_m937B78C1EEF207AE5F885B093158485737905F3F_RuntimeMethod_var)));
	}

IL_001d:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->____valueNames_3;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_5, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		int32_t L_7 = ___index1;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0040;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = __this->____valueNames_3;
		int32_t L_9 = ___index1;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_8, L_9, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___values0;
		int32_t L_12 = ___index1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_15;
		memset((&L_15), 0, sizeof(L_15));
		KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB((&L_15), L_10, L_14, /*hidden argument*/KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var);
		return L_15;
	}

IL_0040:
	{
		String_t* L_16;
		L_16 = LogValuesFormatter_get_OriginalFormat_m3BC5A1D8FD7535342E570848330DD86D641963E5_inline(__this, NULL);
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_17;
		memset((&L_17), 0, sizeof(L_17));
		KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB((&L_17), _stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8, L_16, /*hidden argument*/KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var);
		return L_17;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Microsoft.Extensions.Logging.LogValuesFormatter::GetValues(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogValuesFormatter_GetValues_mBF64A565061C09DFE52F5C6838CB8B7F4456DA3E (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___values0;
		NullCheck(L_0);
		KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1* L_1 = (KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1*)(KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1*)SZArrayNew(KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_002e;
	}

IL_000f:
	{
		KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1* L_2 = V_0;
		int32_t L_3 = V_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->____valueNames_3;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_4, L_5, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = ___values0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_11;
		memset((&L_11), 0, sizeof(L_11));
		KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB((&L_11), L_6, L_10, /*hidden argument*/KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = __this->____valueNames_3;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_14, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((!(((uint32_t)L_13) == ((uint32_t)L_15))))
		{
			goto IL_000f;
		}
	}
	{
		KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1* L_16 = V_0;
		KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1* L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = LogValuesFormatter_get_OriginalFormat_m3BC5A1D8FD7535342E570848330DD86D641963E5_inline(__this, NULL);
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_19;
		memset((&L_19), 0, sizeof(L_19));
		KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB((&L_19), _stringLiteral5B3859B0D165EE865835DCE889C29568CCB924E8, L_18, /*hidden argument*/KeyValuePair_2__ctor_mC4A18320F103342E740C5F71ADEC2DBA2A2F0ECB_RuntimeMethod_var);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), 1))), (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9)L_19);
		KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1* L_20 = V_0;
		return (RuntimeObject*)L_20;
	}
}
// System.Object Microsoft.Extensions.Logging.LogValuesFormatter::FormatArgument(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogValuesFormatter_FormatArgument_m9FCBAF42DAD055555C37C03E89B3F0EDF5149C43 (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_Join_TisRuntimeObject_mA9B8DCEF92E54DCEE23246AC6EB15FA9BF740C02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFormatArgumentU3Eb__20_0_mA29F3F7007130003B2875D01F037F0173B927422_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	String_t* G_B7_2 = NULL;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return _stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31;
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___value0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_2 = ___value0;
		return L_2;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___value0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29(L_5, Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_il2cpp_TypeInfo_var);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_7 = ((U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_8 = L_7;
		G_B6_0 = L_8;
		G_B6_1 = L_6;
		G_B6_2 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			G_B7_2 = _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
			goto IL_0047;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_il2cpp_TypeInfo_var);
		U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7* L_9 = ((U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_10 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)il2cpp_codegen_object_new(Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CFormatArgumentU3Eb__20_0_mA29F3F7007130003B2875D01F037F0173B927422_RuntimeMethod_var), NULL);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = L_10;
		((U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
	}

IL_0047:
	{
		RuntimeObject* L_12;
		L_12 = Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB(G_B7_1, G_B7_0, Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_RuntimeMethod_var);
		String_t* L_13;
		L_13 = String_Join_TisRuntimeObject_mA9B8DCEF92E54DCEE23246AC6EB15FA9BF740C02(G_B7_2, L_12, String_Join_TisRuntimeObject_mA9B8DCEF92E54DCEE23246AC6EB15FA9BF740C02_RuntimeMethod_var);
		return L_13;
	}

IL_0052:
	{
		RuntimeObject* L_14 = ___value0;
		return L_14;
	}
}
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogValuesFormatter__cctor_m5600A41BE8E7D1D431E4DAB694EAF6614EB8AA2C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)58));
		((LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_StaticFields*)il2cpp_codegen_static_fields_for(LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var))->___FormatDelimiters_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_StaticFields*)il2cpp_codegen_static_fields_for(LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C_il2cpp_TypeInfo_var))->___FormatDelimiters_1), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m506094FA2109159A2663CF08CEB18C0455315FED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7* L_0 = (U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7*)il2cpp_codegen_object_new(U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m7AEAF2FBEE395C43F90FF60DDAE0BCA14710BD5F(L_0, NULL);
		((U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.LogValuesFormatter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7AEAF2FBEE395C43F90FF60DDAE0BCA14710BD5F (U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object Microsoft.Extensions.Logging.LogValuesFormatter/<>c::<FormatArgument>b__20_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CFormatArgumentU3Eb__20_0_mA29F3F7007130003B2875D01F037F0173B927422 (U3CU3Ec_tADA2E4CCE0A9E5E4F02EA504C28C774C58040CE7* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ___o0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		G_B2_0 = ((RuntimeObject*)(_stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31));
	}

IL_000a:
	{
		return G_B2_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Extensions.Logging.NullExternalScopeProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullExternalScopeProvider__ctor_m1A90074CBED3B8F6B7ABF790F383A321EB5D32EB (NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.Extensions.Logging.IExternalScopeProvider Microsoft.Extensions.Logging.NullExternalScopeProvider::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NullExternalScopeProvider_get_Instance_mB7ECCE407104116094708A99E2AD700B08BEE98B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB_StaticFields*)il2cpp_codegen_static_fields_for(NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.IDisposable Microsoft.Extensions.Logging.NullExternalScopeProvider::Microsoft.Extensions.Logging.IExternalScopeProvider.Push(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NullExternalScopeProvider_Microsoft_Extensions_Logging_IExternalScopeProvider_Push_m5F8CA0863E0EF1FDBB15364C53B77B069871DBFC (NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB* __this, RuntimeObject* ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D_il2cpp_TypeInfo_var);
		NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D* L_0;
		L_0 = NullScope_get_Instance_mC69C339B96BE12428A4655017DB2A50F145704A0_inline(NULL);
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.NullExternalScopeProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullExternalScopeProvider__cctor_m713D555113DAF5E42C2DE9FD3E5DFD7B4A338665 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB* L_0 = (NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB*)il2cpp_codegen_object_new(NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NullExternalScopeProvider__ctor_m1A90074CBED3B8F6B7ABF790F383A321EB5D32EB(L_0, NULL);
		((NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB_StaticFields*)il2cpp_codegen_static_fields_for(NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB_StaticFields*)il2cpp_codegen_static_fields_for(NullExternalScopeProvider_t00BDBAD30A77A0E88E67C96AC989EDA1E216E6CB_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Extensions.Logging.NullScope Microsoft.Extensions.Logging.NullScope::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D* NullScope_get_Instance_mC69C339B96BE12428A4655017DB2A50F145704A0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D_il2cpp_TypeInfo_var);
		NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D* L_0 = ((NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D_StaticFields*)il2cpp_codegen_static_fields_for(NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.NullScope::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullScope__ctor_m725A46E5F680D351E399CC43CE709A0753E6451E (NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.NullScope::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullScope_Dispose_m36CD94DE646177398E32FCC5221D299149A3C447 (NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.NullScope::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullScope__cctor_m4434F43BF4583E5B66888CD81B0A21454088FFE3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D* L_0 = (NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D*)il2cpp_codegen_object_new(NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NullScope__ctor_m725A46E5F680D351E399CC43CE709A0753E6451E(L_0, NULL);
		((NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D_StaticFields*)il2cpp_codegen_static_fields_for(NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D_StaticFields*)il2cpp_codegen_static_fields_for(NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Extensions.Logging.Abstractions.NullLogger Microsoft.Extensions.Logging.Abstractions.NullLogger::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1* NullLogger_get_Instance_mCD4F43579995FBC05FBB5408A07271046CA76A75 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_il2cpp_TypeInfo_var);
		NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1* L_0 = ((NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_StaticFields*)il2cpp_codegen_static_fields_for(NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLogger__ctor_m9DB1BFF884C082919761A143CC01A34CAC7A1E8E (NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Microsoft.Extensions.Logging.Abstractions.NullLogger::IsEnabled(Microsoft.Extensions.Logging.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullLogger_IsEnabled_m47071D1E3B07122BB3AADDD876D1E37C2A926566 (NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1* __this, int32_t ___logLevel0, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLogger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLogger__cctor_mC56B603219132F458181BB4F961D69C08A4C802A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1* L_0 = (NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1*)il2cpp_codegen_object_new(NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NullLogger__ctor_m9DB1BFF884C082919761A143CC01A34CAC7A1E8E(L_0, NULL);
		((NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_StaticFields*)il2cpp_codegen_static_fields_for(NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_StaticFields*)il2cpp_codegen_static_fields_for(NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLoggerFactory__ctor_m9F87C2A6E631895D445775B8F52E4330B5E012F0 (NullLoggerFactory_t4B047A650310525B8498599EB00572DD2C808538* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.Extensions.Logging.ILogger Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory::CreateLogger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NullLoggerFactory_CreateLogger_mC654E8257D1945DFDBA53E5D2BE45FE8BD8A7E26 (NullLoggerFactory_t4B047A650310525B8498599EB00572DD2C808538* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_il2cpp_TypeInfo_var);
		NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1* L_0;
		L_0 = NullLogger_get_Instance_mCD4F43579995FBC05FBB5408A07271046CA76A75_inline(NULL);
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory::AddProvider(Microsoft.Extensions.Logging.ILoggerProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLoggerFactory_AddProvider_m4715775E425F358E3B7264A88ACB856F93602F01 (NullLoggerFactory_t4B047A650310525B8498599EB00572DD2C808538* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLoggerFactory_Dispose_m35E361496A25F5A89C703BFA85E2C3AEFED4796C (NullLoggerFactory_t4B047A650310525B8498599EB00572DD2C808538* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLoggerFactory::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLoggerFactory__cctor_m781157014C6C95BD08D5DE0B8302E2D0899664E1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullLoggerFactory_t4B047A650310525B8498599EB00572DD2C808538_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullLoggerFactory_t4B047A650310525B8498599EB00572DD2C808538* L_0 = (NullLoggerFactory_t4B047A650310525B8498599EB00572DD2C808538*)il2cpp_codegen_object_new(NullLoggerFactory_t4B047A650310525B8498599EB00572DD2C808538_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NullLoggerFactory__ctor_m9F87C2A6E631895D445775B8F52E4330B5E012F0(L_0, NULL);
		((NullLoggerFactory_t4B047A650310525B8498599EB00572DD2C808538_StaticFields*)il2cpp_codegen_static_fields_for(NullLoggerFactory_t4B047A650310525B8498599EB00572DD2C808538_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NullLoggerFactory_t4B047A650310525B8498599EB00572DD2C808538_StaticFields*)il2cpp_codegen_static_fields_for(NullLoggerFactory_t4B047A650310525B8498599EB00572DD2C808538_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90* NullLoggerProvider_get_Instance_mA58B8F019E7F17EC6831DC50C8B5983C486453A0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90_il2cpp_TypeInfo_var);
		NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90* L_0 = ((NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90_StaticFields*)il2cpp_codegen_static_fields_for(NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLoggerProvider__ctor_m8679B82F66C55DBDA519002598E5E2803C70F0A6 (NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.Extensions.Logging.ILogger Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider::CreateLogger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NullLoggerProvider_CreateLogger_m21E826E96BEB0C00953B0C7381D8670FD9E87525 (NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90* __this, String_t* ___categoryName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_il2cpp_TypeInfo_var);
		NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1* L_0;
		L_0 = NullLogger_get_Instance_mCD4F43579995FBC05FBB5408A07271046CA76A75_inline(NULL);
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLoggerProvider_Dispose_mC438D6E6B7E40AAB9A1BBA7659007412644FEC72 (NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Logging.Abstractions.NullLoggerProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullLoggerProvider__cctor_m7AEC8F77245F5D02CD17D1C20C4D888244144045 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90* L_0 = (NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90*)il2cpp_codegen_object_new(NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NullLoggerProvider__ctor_m8679B82F66C55DBDA519002598E5E2803C70F0A6(L_0, NULL);
		((NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90_StaticFields*)il2cpp_codegen_static_fields_for(NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90_StaticFields*)il2cpp_codegen_static_fields_for(NullLoggerProvider_t437AA38C51D4F04A075CED6FB3280DD56C4ECF90_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_mF3CF210DED551ADFE58CA86051C7EB345902F2B9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var);
		bool L_0 = ((SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_StaticFields*)il2cpp_codegen_static_fields_for(SR_t0886AF8F42F1A41F4C63E330FDBC31C36134B641_il2cpp_TypeInfo_var))->___s_usingResourceKeys_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DisplayNameOptions_get_IncludeGenericParameterNames_m258C00527A5FE52EC9C4809EA6D8EFE388469AB4_inline (DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIncludeGenericParameterNamesU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DisplayNameOptions_get_FullName_mB7B1F7699EDD92607C59D3B90E351876089687A3_inline (DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CFullNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar DisplayNameOptions_get_NestedTypeDelimiter_mCDAE92FC7CC60CE0D9C5B93DF949B3B56053BB44_inline (DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* __this, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = __this->___U3CNestedTypeDelimiterU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DisplayNameOptions_get_IncludeGenericParameters_m48B06CD7DC2845DBF0DF8D4E4450C2BAE14AFABF_inline (DisplayNameOptions_t9E7FFBBD1B9CB4736D2077057E1D740490C67326* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIncludeGenericParametersU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EventId_get_Id_m86B112CC64D4CBED6F5319DD779D103663493B3A_inline (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EventId_get_Name_m8BD116C470BA834B6E7392A4D04A34BC1E63F8B6_inline (EventId_tB2AA64BCA710F3062F656739B9C659D86CB03710* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* FormattedLogValues_get_Formatter_m11CD6604CB29C5F160AE7712D6C78F96BA952BB6_inline (FormattedLogValues_t8E8CDB50A4D952A235A980CE668B6272FBEC5114* __this, const RuntimeMethod* method) 
{
	{
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_0 = __this->____formatter_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* LogValuesFormatter_get_ValueNames_m7BB3F9B56AD516B6ECB699D81D9D17E280A422FB_inline (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____valueNames_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Scope_get_State_m90CA0487CF9D917504B5CE67D2FC05779FBC18C9_inline (Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CStateU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* Scope_get_Parent_m43A08C5AEF90BA9B4A45389F3C613225456C4935_inline (Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* __this, const RuntimeMethod* method) 
{
	{
		Scope_t0381268F9354B77D0C0380A8FCD10AAAD293575C* L_0 = __this->___U3CParentU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogValues__ctor_m311E4B637A436B1B78CD9334DF9BC0F1D709FC90_inline (LogValues_t6AE5F59E96586F226AE8F71BEA600225F268C60A* __this, LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* ___formatter0, const RuntimeMethod* method) 
{
	{
		LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* L_0 = ___formatter0;
		__this->____formatter_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____formatter_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_get_OriginalFormat_m3BC5A1D8FD7535342E570848330DD86D641963E5_inline (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3COriginalFormatU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LogValuesFormatter_Format_mFD3DA5894CA61DE796D2B6770399A71E541E9458_inline (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____format_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogValuesFormatter_set_OriginalFormat_m80D85FA1506C051EC3B5AC66852C46D3F466881A_inline (LogValuesFormatter_t9983B8392BEE95F97F1B6918E822A2A5FBA2F23C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3COriginalFormatU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COriginalFormatU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D* NullScope_get_Instance_mC69C339B96BE12428A4655017DB2A50F145704A0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D_il2cpp_TypeInfo_var);
		NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D* L_0 = ((NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D_StaticFields*)il2cpp_codegen_static_fields_for(NullScope_t89DCCE1D1864B93A086B3257F2F22984B36F508D_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1* NullLogger_get_Instance_mCD4F43579995FBC05FBB5408A07271046CA76A75_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_il2cpp_TypeInfo_var);
		NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1* L_0 = ((NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_StaticFields*)il2cpp_codegen_static_fields_for(NullLogger_t650F8E81ED19A10D900241592D1F1B3BA1310FF1_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
