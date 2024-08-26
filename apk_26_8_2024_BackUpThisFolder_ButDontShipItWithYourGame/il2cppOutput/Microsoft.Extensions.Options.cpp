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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53;
// System.Func`2<System.IServiceProvider,System.Object>
struct Func_2_t481D4444CB52AEE4267FB150F7FDE2214413FEB4;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
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
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Assembly
struct Assembly_t;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Diagnostics.CodeAnalysis.DynamicallyAccessedMembersAttribute
struct DynamicallyAccessedMembersAttribute_tEB7C33BF7AC94DD1FD37B051DBFA0776FA9CDBE8;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tA13FE2A4D7BD27F38385BBCCF08031181D66F6AD;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tDEE701BD41E9E5D260606F79F75427B42C4CC0C0;
// Microsoft.Extensions.DependencyInjection.IServiceCollection
struct IServiceCollection_t8A3E94272E3A36C47F44609B05C67D29649366C7;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t1299C54D1580100B09F745605356DEA9961E1C4A;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t013FBC3ADA62C7C2972BCB351CB1CF77B4B577F7;
// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t2FD673F3A4FFA941D456A2839A2F314473DC3364;
// Microsoft.Extensions.Options.OptionsValidationException
struct OptionsValidationException_tD3A5A7704776998F61A67DD3CE317B9DF17CA120;
// System.Resources.ResourceManager
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor
struct ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// Microsoft.Extensions.Options.ValidateOptionsResult
struct ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c
struct U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674;

IL2CPP_EXTERN_C RuntimeClass* AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Options_tF40DF44FA44C10383C31644332020DC4BEB06679_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0480307C780CE5814C6D65BFFF92E6E900A74E33;
IL2CPP_EXTERN_C String_t* _stringLiteral191EEC2373521088BE0145A4C1A45269CA556834;
IL2CPP_EXTERN_C String_t* _stringLiteral2212CC1D61FCC7005029DE7D06B9D56E12FBCB3E;
IL2CPP_EXTERN_C String_t* _stringLiteral276696D255CDDC77526AFB59FAAD3124813CC033;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843;
IL2CPP_EXTERN_C String_t* _stringLiteralA3F177B00E692AC9BFE396FC4110386EED7CEA91;
IL2CPP_EXTERN_C String_t* _stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6;
IL2CPP_EXTERN_C String_t* _stringLiteralC4056CFCF261DDC3B773C4F95164382929E909E4;
IL2CPP_EXTERN_C String_t* _stringLiteralC715D017308E2D3D93876DDB56A36A3B51900793;
IL2CPP_EXTERN_C String_t* _stringLiteralF550E9570E894D63C6A8CCB08A17C879977A6C4B;
IL2CPP_EXTERN_C String_t* _stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicallyAccessedMembersAttribute__ctor_mFB52DD4DA2BAB0A3CCFD3029F6147041B31BB334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicallyAccessedMembersAttribute_get_MemberTypes_mF53E63330A4C20DF5175829AFDA999D09D16B0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmbeddedAttribute__ctor_mB1A596A218A25ABC23246E095AD98FB60E6DFDA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NullableAttribute__ctor_m4833F84F2D7F38EE1038A83E51A94038F409110F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NullableAttribute__ctor_m4CF2DCC1114443D8E224BFB079F29A05DCA9EA46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NullableContextAttribute__ctor_m99AC94F11F2BD1DED0BC4EAC1718C05B19BFEF13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NullablePublicOnlyAttribute__ctor_m94FE447CC35E9CE37DF8F62D3EC2402FF2A4FC38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionsServiceCollectionExtensions_AddOptions_m2B7E7A3E983D6852952728B013633A537FE774F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionsServiceCollectionExtensions_ConfigureOptions_m3AE7B726102935E23570E72C49D5F617B3F29D4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionsServiceCollectionExtensions_ConfigureOptions_mB972F8C99F52A75EA062385E539BC8719BB369C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionsServiceCollectionExtensions_FindConfigurationServices_mB1C0F8D62AFFF0A3034D3CA92AAA365A596F3BA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionsServiceCollectionExtensions_IsAction_mCEBCFDE39EE352A27A369CD6AC480B8676E0D5C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionsValidationException__ctor_mC3FF445F53B45898846D3BF8258396984E22B985_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionsValidationException_get_Failures_m781D5167877EC31565EED3156036B055F13C76CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionsValidationException_get_Message_m9CCA23ED23AE65309739051025922807D016830B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionsValidationException_get_OptionsName_mEF168A922B9590945F38E6EF590F7D93492248D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptionsValidationException_get_OptionsType_m6521ABA34FFD72562AAD8242B1C1A63E962F72B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Options__cctor_mF6E3082AD8F6869C8A23278E4DA1E2838B1CDECD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_Format_m01B06CC9C19F052E9F73EEE665E33D31C5EBCD8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_Format_m05B1ACB78B197EFD2E7D917AD7B298F70472AE95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_Format_m43F6398CC96F32ECA8DDE704438C5FA3983C2FA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_Format_m813D6419F2A71CB0F6AFAC59346B4EF7C6C2AF5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_Format_m96FD5218C61310EFE4D4C3B0D11DC887EE098139_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_Format_mB4A2FF68EF53C3D538089D6C5EE2C038672FDC63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_Format_mCBAC57CA62110E3BEBC1DDF513A490B78B47D1CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_Format_mEB8E43B3833B31B369004A08E6FC55BD98653D00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_GetResourceString_m63DE5ABD4D19F139E36E7C331641ACEF4488AF1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_UsingResourceKeys_m976E7DDB2ECB3DE0B197DBA262021BDF2AEDF69F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR__cctor_mA4D571F26BFF007517A489C24E159619F06894E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_get_Error_CannotActivateAbstractOrInterface_mCA9252C3AB762414435D1D30F5DFF0206B36F9C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_get_Error_FailedBinding_m737E0FEB6AEBCB4C2A03343880A600A3ABCF425D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_get_Error_FailedToActivate_m809943EB5978D4ED0BEE8DEB6B5DB6DF4E20E8C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_get_Error_MissingParameterlessConstructor_m29F53D456440586BD19A082900162E57BA5F9897_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_get_Error_NoConfigurationServicesAndAction_m071B4C4D30E8DBCCA747B047C6927DBE1061791E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_get_Error_NoConfigurationServices_m7F4B9CEED359368A6A456E9D00C858AFD0527FAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_get_ResourceManager_m63136704F93DCB990C180C5BA119A7E0219AFFB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindConfigurationServicesU3Eb__9_0_m45B6F49BD438DBB6BA53564811B9C838D285EF2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindConfigurationServicesU3Eb__9_1_m9A43DBFD3A4CF4D245F5FBA779C6F04AE0CE837C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__cctor_m4363B00D07B3D86B5BB8B2E9414A3D4292619C2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__ctor_m4FFD6D1BED5A14449CD6C64EF8CBFE48D191AE72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidateOptionsResult_Fail_m1752F8BFC40691E43E84B9384C30CD68EAD62F38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidateOptionsResult_Fail_m5C83282D0AD6BE0F5B26B43588CDF6C382222F3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidateOptionsResult__cctor_mCC7EEA71B9C7A5A49D22BE1B3651E595F4E62126_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidateOptionsResult__ctor_mDF396C14D6F0260AF593F987D6A9FA531B498D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidateOptionsResult_get_Failed_mF5BAE919CEB57F450E4496B5733DF25F7AF685AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidateOptionsResult_get_FailureMessage_m14FEF9967157AB4C0DC9B5E336A93FE70D635B8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidateOptionsResult_get_Failures_m30841379DE7CE185C8DF8B1682F23EAD4F75E476_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidateOptionsResult_get_Skipped_m4A8BB8B7791972097D5825D562A58D2FE03190CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidateOptionsResult_get_Succeeded_mAF233F98D886F881E76C17A88645E4CAC934D288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidateOptionsResult_set_Failed_m710C78FE3AC8624511406A2C1F390AFA3B905C8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidateOptionsResult_set_FailureMessage_m8468FC47B63492151913684C942A6904F485E480_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidateOptionsResult_set_Failures_m8AE4B6779F2F422D38DC8EA9AABBB2A79B976F42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidateOptionsResult_set_Skipped_m75F06430238AAEEDF388A3818AF9E26F0DA3CB93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidateOptionsResult_set_Succeeded_m2B3AF40CA8446122E04EFD6CC9332E838BABF63B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Action_1_tFA646AF302098720700AA3CD3CB9AC4BFA28E1B0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IConfigureOptions_1_tF68C478F124D7BB1B8A6DD8C61927CF72CF9B798_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOptionsFactory_1_tCD29507DF9C68D44B9888AD5BF400C2D94D8F783_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOptionsMonitorCache_1_t197E800891D5C4F427B967CD8323D5F3FFF6B5DA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOptionsMonitor_1_t36B001D9F976E45DEF48B0187DEEE8C44717A628_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOptionsSnapshot_1_t8314EB3D1648FDD16F9E601E4E65F00C7511A28E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOptions_1_t476E3BCCF90F54B034BF13DD8182C81DFBD50B1C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IPostConfigureOptions_1_t143AC4A402EA59490EA5E044AC4B7D6CAFEA6893_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IValidateOptions_1_tD573C75F96E4D53B7E35847CA164A6C1085913B6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OptionsCache_1_t6788F8952A0FC1A959410AF2EBCF5FE1C544E513_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OptionsFactory_1_tDD7FE1860DE3DE9C19F428BEF9C3E0111F7849AF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OptionsManager_1_tB55710E21B4FE2C84F1F7DE2B01259FF1BEB59CC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OptionsMonitor_1_t5955AC58F3ADE49EFCD523FEC7F767577E06540A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SR_t7FE4F5F89F2ED95502811F5182B4C9C8EE270AD7_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t16B84139E80E7E930FC4EEECF550634EBFAB79D9 
{
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

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Microsoft.Extensions.Options.Options
struct Options_tF40DF44FA44C10383C31644332020DC4BEB06679  : public RuntimeObject
{
};

struct Options_tF40DF44FA44C10383C31644332020DC4BEB06679_StaticFields
{
	// System.String Microsoft.Extensions.Options.Options::DefaultName
	String_t* ___DefaultName_1;
};

// Microsoft.Extensions.Options.OptionsMonitorExtensions
struct OptionsMonitorExtensions_t2FDA3ED3DD01B3114D3B2AB1C574340ABC03324D  : public RuntimeObject
{
};

// Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions
struct OptionsServiceCollectionExtensions_t0B899C65C24A583F5F741C7AFF910EE4FBE53398  : public RuntimeObject
{
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

// FxResources.Microsoft.Extensions.Options.SR
struct SR_t7FE4F5F89F2ED95502811F5182B4C9C8EE270AD7  : public RuntimeObject
{
};

// System.SR
struct SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C  : public RuntimeObject
{
};

struct SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_StaticFields
{
	// System.Boolean System.SR::s_usingResourceKeys
	bool ___s_usingResourceKeys_0;
	// System.Resources.ResourceManager System.SR::s_resourceManager
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* ___s_resourceManager_1;
};

// Microsoft.Extensions.DependencyInjection.ServiceDescriptor
struct ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE  : public RuntimeObject
{
	// Microsoft.Extensions.DependencyInjection.ServiceLifetime Microsoft.Extensions.DependencyInjection.ServiceDescriptor::<Lifetime>k__BackingField
	int32_t ___U3CLifetimeU3Ek__BackingField_0;
	// System.Type Microsoft.Extensions.DependencyInjection.ServiceDescriptor::<ServiceType>k__BackingField
	Type_t* ___U3CServiceTypeU3Ek__BackingField_1;
	// System.Type Microsoft.Extensions.DependencyInjection.ServiceDescriptor::<ImplementationType>k__BackingField
	Type_t* ___U3CImplementationTypeU3Ek__BackingField_2;
	// System.Object Microsoft.Extensions.DependencyInjection.ServiceDescriptor::<ImplementationInstance>k__BackingField
	RuntimeObject* ___U3CImplementationInstanceU3Ek__BackingField_3;
	// System.Func`2<System.IServiceProvider,System.Object> Microsoft.Extensions.DependencyInjection.ServiceDescriptor::<ImplementationFactory>k__BackingField
	Func_2_t481D4444CB52AEE4267FB150F7FDE2214413FEB4* ___U3CImplementationFactoryU3Ek__BackingField_4;
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

// Microsoft.Extensions.Options.ValidateOptionsResult
struct ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF  : public RuntimeObject
{
	// System.Boolean Microsoft.Extensions.Options.ValidateOptionsResult::<Succeeded>k__BackingField
	bool ___U3CSucceededU3Ek__BackingField_2;
	// System.Boolean Microsoft.Extensions.Options.ValidateOptionsResult::<Skipped>k__BackingField
	bool ___U3CSkippedU3Ek__BackingField_3;
	// System.Boolean Microsoft.Extensions.Options.ValidateOptionsResult::<Failed>k__BackingField
	bool ___U3CFailedU3Ek__BackingField_4;
	// System.String Microsoft.Extensions.Options.ValidateOptionsResult::<FailureMessage>k__BackingField
	String_t* ___U3CFailureMessageU3Ek__BackingField_5;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.Extensions.Options.ValidateOptionsResult::<Failures>k__BackingField
	RuntimeObject* ___U3CFailuresU3Ek__BackingField_6;
};

struct ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF_StaticFields
{
	// Microsoft.Extensions.Options.ValidateOptionsResult Microsoft.Extensions.Options.ValidateOptionsResult::Skip
	ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* ___Skip_0;
	// Microsoft.Extensions.Options.ValidateOptionsResult Microsoft.Extensions.Options.ValidateOptionsResult::Success
	ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* ___Success_1;
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

// Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c
struct U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E  : public RuntimeObject
{
};

struct U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_StaticFields
{
	// Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c::<>9
	U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E* ___U3CU3E9_0;
	// System.Func`2<System.Type,System.Boolean> Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c::<>9__9_0
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___U3CU3E9__9_0_1;
	// System.Func`2<System.Type,System.Boolean> Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c::<>9__9_1
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___U3CU3E9__9_1_2;
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

// System.Diagnostics.CodeAnalysis.DynamicallyAccessedMembersAttribute
struct DynamicallyAccessedMembersAttribute_tEB7C33BF7AC94DD1FD37B051DBFA0776FA9CDBE8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Diagnostics.CodeAnalysis.DynamicallyAccessedMemberTypes System.Diagnostics.CodeAnalysis.DynamicallyAccessedMembersAttribute::<MemberTypes>k__BackingField
	int32_t ___U3CMemberTypesU3Ek__BackingField_0;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tA13FE2A4D7BD27F38385BBCCF08031181D66F6AD  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t1299C54D1580100B09F745605356DEA9961E1C4A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags_0;
};

// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t013FBC3ADA62C7C2972BCB351CB1CF77B4B577F7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;
};

// System.Runtime.CompilerServices.NullablePublicOnlyAttribute
struct NullablePublicOnlyAttribute_t2FD673F3A4FFA941D456A2839A2F314473DC3364  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
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

// Microsoft.Extensions.Options.OptionsValidationException
struct OptionsValidationException_tD3A5A7704776998F61A67DD3CE317B9DF17CA120  : public Exception_t
{
	// System.String Microsoft.Extensions.Options.OptionsValidationException::<OptionsName>k__BackingField
	String_t* ___U3COptionsNameU3Ek__BackingField_18;
	// System.Type Microsoft.Extensions.Options.OptionsValidationException::<OptionsType>k__BackingField
	Type_t* ___U3COptionsTypeU3Ek__BackingField_19;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.Extensions.Options.OptionsValidationException::<Failures>k__BackingField
	RuntimeObject* ___U3CFailuresU3Ek__BackingField_20;
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

// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
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
// System.String[]
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


// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m976E7DDB2ECB3DE0B197DBA262021BDF2AEDF69F_inline (const RuntimeMethod* method) ;
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_m63136704F93DCB990C180C5BA119A7E0219AFFB3 (const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m63DE5ABD4D19F139E36E7C331641ACEF4488AF1F (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method) ;
// System.Boolean System.AppContext::TryGetSwitch(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppContext_TryGetSwitch_mD2500DB32F941228B6964BC53CAA0EA7047AEB78 (String_t* ___switchName0, bool* ___isEnabled1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Singleton(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ServiceDescriptor_Singleton_m29C82CF0ED1A40C30F2043B924BFB85A447549DA (Type_t* ___service0, Type_t* ___implementationType1, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.DependencyInjection.Extensions.ServiceCollectionDescriptorExtensions::TryAdd(Microsoft.Extensions.DependencyInjection.IServiceCollection,Microsoft.Extensions.DependencyInjection.ServiceDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCollectionDescriptorExtensions_TryAdd_m450939AAABAE677BB8FC23BCC85E5C8E11F675D0 (RuntimeObject* ___collection0, ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ___descriptor1, const RuntimeMethod* method) ;
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Scoped(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ServiceDescriptor_Scoped_m6B653C5EB4E0822F7F316BAD8DBEA8C11F25EA7D (Type_t* ___service0, Type_t* ___implementationType1, const RuntimeMethod* method) ;
// Microsoft.Extensions.DependencyInjection.ServiceDescriptor Microsoft.Extensions.DependencyInjection.ServiceDescriptor::Transient(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* ServiceDescriptor_Transient_mAB508A8A461AE6F4205F28F6C1B0C04B5BEFC0B0 (Type_t* ___service0, Type_t* ___implementationType1, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74 (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8 (RuntimeObject* ___source0, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Boolean System.Linq.Enumerable::Any<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared)(___source0, method);
}
// System.Boolean Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions::IsAction(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OptionsServiceCollectionExtensions_IsAction_mCEBCFDE39EE352A27A369CD6AC480B8676E0D5C9 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.String System.SR::get_Error_NoConfigurationServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Error_NoConfigurationServices_m7F4B9CEED359368A6A456E9D00C858AFD0527FAB (const RuntimeMethod* method) ;
// System.String System.SR::get_Error_NoConfigurationServicesAndAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Error_NoConfigurationServicesAndAction_m071B4C4D30E8DBCCA747B047C6927DBE1061791E (const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions::AddOptions(Microsoft.Extensions.DependencyInjection.IServiceCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OptionsServiceCollectionExtensions_AddOptions_m2B7E7A3E983D6852952728B013633A537FE774F9 (RuntimeObject* ___services0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Type> Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions::FindConfigurationServices(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OptionsServiceCollectionExtensions_FindConfigurationServices_mB1C0F8D62AFFF0A3034D3CA92AAA365A596F3BA5 (Type_t* ___type0, const RuntimeMethod* method) ;
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::AddTransient(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddTransient_m465E6340DC575D480458578FDE2ED9E6789C8687 (RuntimeObject* ___services0, Type_t* ___serviceType1, Type_t* ___implementationType2, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.ServiceCollectionServiceExtensions::AddSingleton(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCollectionServiceExtensions_AddSingleton_m025598643CF82EBD59FC1F2309A0C4EA902F8686 (RuntimeObject* ___services0, Type_t* ___serviceType1, RuntimeObject* ___implementationInstance2, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4FFD6D1BED5A14449CD6C64EF8CBFE48D191AE72 (U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.Extensions.Options.OptionsValidationException::get_Failures()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OptionsValidationException_get_Failures_m781D5167877EC31565EED3156036B055F13C76CC_inline (OptionsValidationException_tD3A5A7704776998F61A67DD3CE317B9DF17CA120* __this, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateOptionsResult__ctor_mDF396C14D6F0260AF593F987D6A9FA531B498D8F (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_Failed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Failed_m710C78FE3AC8624511406A2C1F390AFA3B905C8F_inline (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_FailureMessage(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_FailureMessage_m8468FC47B63492151913684C942A6904F485E480_inline (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_Failures(System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Failures_m8AE4B6779F2F422D38DC8EA9AABBB2A79B976F42_inline (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_Skipped(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Skipped_m75F06430238AAEEDF388A3818AF9E26F0DA3CB93_inline (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_Succeeded(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Succeeded_m2B3AF40CA8446122E04EFD6CC9332E838BABF63B_inline (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, bool ___value0, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mB1A596A218A25ABC23246E095AD98FB60E6DFDA6 (EmbeddedAttribute_tA13FE2A4D7BD27F38385BBCCF08031181D66F6AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmbeddedAttribute__ctor_mB1A596A218A25ABC23246E095AD98FB60E6DFDA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, EmbeddedAttribute__ctor_mB1A596A218A25ABC23246E095AD98FB60E6DFDA6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m4833F84F2D7F38EE1038A83E51A94038F409110F (NullableAttribute_t1299C54D1580100B09F745605356DEA9961E1C4A* __this, uint8_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableAttribute__ctor_m4833F84F2D7F38EE1038A83E51A94038F409110F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NullableAttribute__ctor_m4833F84F2D7F38EE1038A83E51A94038F409110F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m4CF2DCC1114443D8E224BFB079F29A05DCA9EA46 (NullableAttribute_t1299C54D1580100B09F745605356DEA9961E1C4A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableAttribute__ctor_m4CF2DCC1114443D8E224BFB079F29A05DCA9EA46_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NullableAttribute__ctor_m4CF2DCC1114443D8E224BFB079F29A05DCA9EA46_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_m99AC94F11F2BD1DED0BC4EAC1718C05B19BFEF13 (NullableContextAttribute_t013FBC3ADA62C7C2972BCB351CB1CF77B4B577F7* __this, uint8_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableContextAttribute__ctor_m99AC94F11F2BD1DED0BC4EAC1718C05B19BFEF13_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NullableContextAttribute__ctor_m99AC94F11F2BD1DED0BC4EAC1718C05B19BFEF13_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullablePublicOnlyAttribute__ctor_m94FE447CC35E9CE37DF8F62D3EC2402FF2A4FC38 (NullablePublicOnlyAttribute_t2FD673F3A4FFA941D456A2839A2F314473DC3364* __this, bool p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullablePublicOnlyAttribute__ctor_m94FE447CC35E9CE37DF8F62D3EC2402FF2A4FC38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NullablePublicOnlyAttribute__ctor_m94FE447CC35E9CE37DF8F62D3EC2402FF2A4FC38_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m976E7DDB2ECB3DE0B197DBA262021BDF2AEDF69F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_UsingResourceKeys_m976E7DDB2ECB3DE0B197DBA262021BDF2AEDF69F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_UsingResourceKeys_m976E7DDB2ECB3DE0B197DBA262021BDF2AEDF69F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		bool L_0 = ((SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_StaticFields*)il2cpp_codegen_static_fields_for(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var))->___s_usingResourceKeys_0;
		return L_0;
	}
}
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m63DE5ABD4D19F139E36E7C331641ACEF4488AF1F (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_GetResourceString_m63DE5ABD4D19F139E36E7C331641ACEF4488AF1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_GetResourceString_m63DE5ABD4D19F139E36E7C331641ACEF4488AF1F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_m976E7DDB2ECB3DE0B197DBA262021BDF2AEDF69F_inline(NULL);
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
		STORE_TRY_ID(methodExecutionContext, 0);
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_4;
		L_4 = SR_get_ResourceManager_m63136704F93DCB990C180C5BA119A7E0219AFFB3(NULL);
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
		STORE_TRY_ID(methodExecutionContext, -1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mB4A2FF68EF53C3D538089D6C5EE2C038672FDC63 (String_t* ___resourceFormat0, RuntimeObject* ___p11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_Format_mB4A2FF68EF53C3D538089D6C5EE2C038672FDC63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_Format_mB4A2FF68EF53C3D538089D6C5EE2C038672FDC63_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_m976E7DDB2ECB3DE0B197DBA262021BDF2AEDF69F_inline(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m43F6398CC96F32ECA8DDE704438C5FA3983C2FA2 (String_t* ___resourceFormat0, RuntimeObject* ___p11, RuntimeObject* ___p22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_Format_m43F6398CC96F32ECA8DDE704438C5FA3983C2FA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_Format_m43F6398CC96F32ECA8DDE704438C5FA3983C2FA2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_m976E7DDB2ECB3DE0B197DBA262021BDF2AEDF69F_inline(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m01B06CC9C19F052E9F73EEE665E33D31C5EBCD8D (String_t* ___resourceFormat0, RuntimeObject* ___p11, RuntimeObject* ___p22, RuntimeObject* ___p33, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_Format_m01B06CC9C19F052E9F73EEE665E33D31C5EBCD8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_Format_m01B06CC9C19F052E9F73EEE665E33D31C5EBCD8D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_m976E7DDB2ECB3DE0B197DBA262021BDF2AEDF69F_inline(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m813D6419F2A71CB0F6AFAC59346B4EF7C6C2AF5D (String_t* ___resourceFormat0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_Format_m813D6419F2A71CB0F6AFAC59346B4EF7C6C2AF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_Format_m813D6419F2A71CB0F6AFAC59346B4EF7C6C2AF5D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args1;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SR_UsingResourceKeys_m976E7DDB2ECB3DE0B197DBA262021BDF2AEDF69F_inline(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m96FD5218C61310EFE4D4C3B0D11DC887EE098139 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject* ___p12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_Format_m96FD5218C61310EFE4D4C3B0D11DC887EE098139_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_Format_m96FD5218C61310EFE4D4C3B0D11DC887EE098139_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_m976E7DDB2ECB3DE0B197DBA262021BDF2AEDF69F_inline(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m05B1ACB78B197EFD2E7D917AD7B298F70472AE95 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject* ___p12, RuntimeObject* ___p23, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_Format_m05B1ACB78B197EFD2E7D917AD7B298F70472AE95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_Format_m05B1ACB78B197EFD2E7D917AD7B298F70472AE95_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_m976E7DDB2ECB3DE0B197DBA262021BDF2AEDF69F_inline(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mCBAC57CA62110E3BEBC1DDF513A490B78B47D1CB (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject* ___p12, RuntimeObject* ___p23, RuntimeObject* ___p34, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_Format_mCBAC57CA62110E3BEBC1DDF513A490B78B47D1CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_Format_mCBAC57CA62110E3BEBC1DDF513A490B78B47D1CB_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_m976E7DDB2ECB3DE0B197DBA262021BDF2AEDF69F_inline(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mEB8E43B3833B31B369004A08E6FC55BD98653D00 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_Format_mEB8E43B3833B31B369004A08E6FC55BD98653D00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_Format_mEB8E43B3833B31B369004A08E6FC55BD98653D00_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___args2;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SR_UsingResourceKeys_m976E7DDB2ECB3DE0B197DBA262021BDF2AEDF69F_inline(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_m63136704F93DCB990C180C5BA119A7E0219AFFB3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_get_ResourceManager_m63136704F93DCB990C180C5BA119A7E0219AFFB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t7FE4F5F89F2ED95502811F5182B4C9C8EE270AD7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_get_ResourceManager_m63136704F93DCB990C180C5BA119A7E0219AFFB3_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B2_0 = NULL;
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0 = ((SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_StaticFields*)il2cpp_codegen_static_fields_for(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var))->___s_resourceManager_1;
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (SR_t7FE4F5F89F2ED95502811F5182B4C9C8EE270AD7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_4 = (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB*)il2cpp_codegen_object_new(ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784(L_4, L_3, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_5 = L_4;
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		((SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_StaticFields*)il2cpp_codegen_static_fields_for(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var))->___s_resourceManager_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_StaticFields*)il2cpp_codegen_static_fields_for(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var))->___s_resourceManager_1), (void*)L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// System.String System.SR::get_Error_CannotActivateAbstractOrInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Error_CannotActivateAbstractOrInterface_mCA9252C3AB762414435D1D30F5DFF0206B36F9C6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_get_Error_CannotActivateAbstractOrInterface_mCA9252C3AB762414435D1D30F5DFF0206B36F9C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF550E9570E894D63C6A8CCB08A17C879977A6C4B);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_get_Error_CannotActivateAbstractOrInterface_mCA9252C3AB762414435D1D30F5DFF0206B36F9C6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m63DE5ABD4D19F139E36E7C331641ACEF4488AF1F(_stringLiteralF550E9570E894D63C6A8CCB08A17C879977A6C4B, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.String System.SR::get_Error_FailedBinding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Error_FailedBinding_m737E0FEB6AEBCB4C2A03343880A600A3ABCF425D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_get_Error_FailedBinding_m737E0FEB6AEBCB4C2A03343880A600A3ABCF425D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral276696D255CDDC77526AFB59FAAD3124813CC033);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_get_Error_FailedBinding_m737E0FEB6AEBCB4C2A03343880A600A3ABCF425D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m63DE5ABD4D19F139E36E7C331641ACEF4488AF1F(_stringLiteral276696D255CDDC77526AFB59FAAD3124813CC033, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.String System.SR::get_Error_FailedToActivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Error_FailedToActivate_m809943EB5978D4ED0BEE8DEB6B5DB6DF4E20E8C6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_get_Error_FailedToActivate_m809943EB5978D4ED0BEE8DEB6B5DB6DF4E20E8C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2212CC1D61FCC7005029DE7D06B9D56E12FBCB3E);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_get_Error_FailedToActivate_m809943EB5978D4ED0BEE8DEB6B5DB6DF4E20E8C6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m63DE5ABD4D19F139E36E7C331641ACEF4488AF1F(_stringLiteral2212CC1D61FCC7005029DE7D06B9D56E12FBCB3E, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.String System.SR::get_Error_MissingParameterlessConstructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Error_MissingParameterlessConstructor_m29F53D456440586BD19A082900162E57BA5F9897 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_get_Error_MissingParameterlessConstructor_m29F53D456440586BD19A082900162E57BA5F9897_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3F177B00E692AC9BFE396FC4110386EED7CEA91);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_get_Error_MissingParameterlessConstructor_m29F53D456440586BD19A082900162E57BA5F9897_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m63DE5ABD4D19F139E36E7C331641ACEF4488AF1F(_stringLiteralA3F177B00E692AC9BFE396FC4110386EED7CEA91, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.String System.SR::get_Error_NoConfigurationServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Error_NoConfigurationServices_m7F4B9CEED359368A6A456E9D00C858AFD0527FAB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_get_Error_NoConfigurationServices_m7F4B9CEED359368A6A456E9D00C858AFD0527FAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0480307C780CE5814C6D65BFFF92E6E900A74E33);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_get_Error_NoConfigurationServices_m7F4B9CEED359368A6A456E9D00C858AFD0527FAB_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m63DE5ABD4D19F139E36E7C331641ACEF4488AF1F(_stringLiteral0480307C780CE5814C6D65BFFF92E6E900A74E33, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.String System.SR::get_Error_NoConfigurationServicesAndAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Error_NoConfigurationServicesAndAction_m071B4C4D30E8DBCCA747B047C6927DBE1061791E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_get_Error_NoConfigurationServicesAndAction_m071B4C4D30E8DBCCA747B047C6927DBE1061791E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4056CFCF261DDC3B773C4F95164382929E909E4);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_get_Error_NoConfigurationServicesAndAction_m071B4C4D30E8DBCCA747B047C6927DBE1061791E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m63DE5ABD4D19F139E36E7C331641ACEF4488AF1F(_stringLiteralC4056CFCF261DDC3B773C4F95164382929E909E4, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.Void System.SR::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SR__cctor_mA4D571F26BFF007517A489C24E159619F06894E9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR__cctor_mA4D571F26BFF007517A489C24E159619F06894E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR__cctor_mA4D571F26BFF007517A489C24E159619F06894E9_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
		((SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_StaticFields*)il2cpp_codegen_static_fields_for(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var))->___s_usingResourceKeys_0 = (bool)G_B3_0;
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
// System.Void System.Diagnostics.CodeAnalysis.DynamicallyAccessedMembersAttribute::.ctor(System.Diagnostics.CodeAnalysis.DynamicallyAccessedMemberTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicallyAccessedMembersAttribute__ctor_mFB52DD4DA2BAB0A3CCFD3029F6147041B31BB334 (DynamicallyAccessedMembersAttribute_tEB7C33BF7AC94DD1FD37B051DBFA0776FA9CDBE8* __this, int32_t ___memberTypes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicallyAccessedMembersAttribute__ctor_mFB52DD4DA2BAB0A3CCFD3029F6147041B31BB334_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DynamicallyAccessedMembersAttribute__ctor_mFB52DD4DA2BAB0A3CCFD3029F6147041B31BB334_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___memberTypes0;
		__this->___U3CMemberTypesU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Diagnostics.CodeAnalysis.DynamicallyAccessedMemberTypes System.Diagnostics.CodeAnalysis.DynamicallyAccessedMembersAttribute::get_MemberTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicallyAccessedMembersAttribute_get_MemberTypes_mF53E63330A4C20DF5175829AFDA999D09D16B0B7 (DynamicallyAccessedMembersAttribute_tEB7C33BF7AC94DD1FD37B051DBFA0776FA9CDBE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicallyAccessedMembersAttribute_get_MemberTypes_mF53E63330A4C20DF5175829AFDA999D09D16B0B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DynamicallyAccessedMembersAttribute_get_MemberTypes_mF53E63330A4C20DF5175829AFDA999D09D16B0B7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->___U3CMemberTypesU3Ek__BackingField_0;
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
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions::AddOptions(Microsoft.Extensions.DependencyInjection.IServiceCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OptionsServiceCollectionExtensions_AddOptions_m2B7E7A3E983D6852952728B013633A537FE774F9 (RuntimeObject* ___services0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOptionsFactory_1_tCD29507DF9C68D44B9888AD5BF400C2D94D8F783_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOptionsMonitorCache_1_t197E800891D5C4F427B967CD8323D5F3FFF6B5DA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOptionsMonitor_1_t36B001D9F976E45DEF48B0187DEEE8C44717A628_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOptionsSnapshot_1_t8314EB3D1648FDD16F9E601E4E65F00C7511A28E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOptions_1_t476E3BCCF90F54B034BF13DD8182C81DFBD50B1C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsCache_1_t6788F8952A0FC1A959410AF2EBCF5FE1C544E513_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsFactory_1_tDD7FE1860DE3DE9C19F428BEF9C3E0111F7849AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsManager_1_tB55710E21B4FE2C84F1F7DE2B01259FF1BEB59CC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsMonitor_1_t5955AC58F3ADE49EFCD523FEC7F767577E06540A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsServiceCollectionExtensions_AddOptions_m2B7E7A3E983D6852952728B013633A537FE774F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OptionsServiceCollectionExtensions_AddOptions_m2B7E7A3E983D6852952728B013633A537FE774F9_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___services0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97BA52F16D6634F698F0059CBBC07D3302FFD843)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OptionsServiceCollectionExtensions_AddOptions_m2B7E7A3E983D6852952728B013633A537FE774F9_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___services0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (IOptions_1_t476E3BCCF90F54B034BF13DD8182C81DFBD50B1C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (OptionsManager_1_tB55710E21B4FE2C84F1F7DE2B01259FF1BEB59CC_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_7;
		L_7 = ServiceDescriptor_Singleton_m29C82CF0ED1A40C30F2043B924BFB85A447549DA(L_4, L_6, NULL);
		ServiceCollectionDescriptorExtensions_TryAdd_m450939AAABAE677BB8FC23BCC85E5C8E11F675D0(L_2, L_7, NULL);
		RuntimeObject* L_8 = ___services0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (IOptionsSnapshot_1_t8314EB3D1648FDD16F9E601E4E65F00C7511A28E_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (OptionsManager_1_tB55710E21B4FE2C84F1F7DE2B01259FF1BEB59CC_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_13;
		L_13 = ServiceDescriptor_Scoped_m6B653C5EB4E0822F7F316BAD8DBEA8C11F25EA7D(L_10, L_12, NULL);
		ServiceCollectionDescriptorExtensions_TryAdd_m450939AAABAE677BB8FC23BCC85E5C8E11F675D0(L_8, L_13, NULL);
		RuntimeObject* L_14 = ___services0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (IOptionsMonitor_1_t36B001D9F976E45DEF48B0187DEEE8C44717A628_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (OptionsMonitor_1_t5955AC58F3ADE49EFCD523FEC7F767577E06540A_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_19;
		L_19 = ServiceDescriptor_Singleton_m29C82CF0ED1A40C30F2043B924BFB85A447549DA(L_16, L_18, NULL);
		ServiceCollectionDescriptorExtensions_TryAdd_m450939AAABAE677BB8FC23BCC85E5C8E11F675D0(L_14, L_19, NULL);
		RuntimeObject* L_20 = ___services0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (IOptionsFactory_1_tCD29507DF9C68D44B9888AD5BF400C2D94D8F783_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (OptionsFactory_1_tDD7FE1860DE3DE9C19F428BEF9C3E0111F7849AF_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_25;
		L_25 = ServiceDescriptor_Transient_mAB508A8A461AE6F4205F28F6C1B0C04B5BEFC0B0(L_22, L_24, NULL);
		ServiceCollectionDescriptorExtensions_TryAdd_m450939AAABAE677BB8FC23BCC85E5C8E11F675D0(L_20, L_25, NULL);
		RuntimeObject* L_26 = ___services0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (IOptionsMonitorCache_1_t197E800891D5C4F427B967CD8323D5F3FFF6B5DA_0_0_0_var) };
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (OptionsCache_1_t6788F8952A0FC1A959410AF2EBCF5FE1C544E513_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		ServiceDescriptor_tB91195C463E85BED4D797D7E0A8E65C04D0E8EDE* L_31;
		L_31 = ServiceDescriptor_Singleton_m29C82CF0ED1A40C30F2043B924BFB85A447549DA(L_28, L_30, NULL);
		ServiceCollectionDescriptorExtensions_TryAdd_m450939AAABAE677BB8FC23BCC85E5C8E11F675D0(L_26, L_31, NULL);
		RuntimeObject* L_32 = ___services0;
		return L_32;
	}
}
// System.Boolean Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions::IsAction(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OptionsServiceCollectionExtensions_IsAction_mCEBCFDE39EE352A27A369CD6AC480B8676E0D5C9 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA646AF302098720700AA3CD3CB9AC4BFA28E1B0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsServiceCollectionExtensions_IsAction_mCEBCFDE39EE352A27A369CD6AC480B8676E0D5C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OptionsServiceCollectionExtensions_IsAction_mCEBCFDE39EE352A27A369CD6AC480B8676E0D5C9_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Type_t* L_0 = ___type0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Type_t* L_3 = ___type0;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_3);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (Action_1_tFA646AF302098720700AA3CD3CB9AC4BFA28E1B0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		return L_7;
	}

IL_0023:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions::FindConfigurationServices(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OptionsServiceCollectionExtensions_FindConfigurationServices_mB1C0F8D62AFFF0A3034D3CA92AAA365A596F3BA5 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsServiceCollectionExtensions_FindConfigurationServices_mB1C0F8D62AFFF0A3034D3CA92AAA365A596F3BA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFindConfigurationServicesU3Eb__9_0_m45B6F49BD438DBB6BA53564811B9C838D285EF2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFindConfigurationServicesU3Eb__9_1_m9A43DBFD3A4CF4D245F5FBA779C6F04AE0CE837C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OptionsServiceCollectionExtensions_FindConfigurationServices_mB1C0F8D62AFFF0A3034D3CA92AAA365A596F3BA5_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	String_t* G_B8_0 = NULL;
	{
		Type_t* L_0 = ___type0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(135 /* System.Collections.Generic.IEnumerable`1<System.Type> System.Reflection.TypeInfo::get_ImplementedInterfaces() */, L_1);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_il2cpp_TypeInfo_var);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_3 = ((U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_il2cpp_TypeInfo_var);
		U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E* L_5 = ((U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_6 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CFindConfigurationServicesU3Eb__9_0_m45B6F49BD438DBB6BA53564811B9C838D285EF2C_RuntimeMethod_var), NULL);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_7 = L_6;
		((U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8(G_B2_1, G_B2_0, Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_il2cpp_TypeInfo_var);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_9 = ((U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_il2cpp_TypeInfo_var))->___U3CU3E9__9_1_2;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = L_8;
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = L_8;
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_il2cpp_TypeInfo_var);
		U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E* L_11 = ((U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_12 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_12, L_11, (intptr_t)((void*)U3CU3Ec_U3CFindConfigurationServicesU3Eb__9_1_m9A43DBFD3A4CF4D245F5FBA779C6F04AE0CE837C_RuntimeMethod_var), NULL);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_13 = L_12;
		((U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_il2cpp_TypeInfo_var))->___U3CU3E9__9_1_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_il2cpp_TypeInfo_var))->___U3CU3E9__9_1_2), (void*)L_13);
		G_B4_0 = L_13;
		G_B4_1 = G_B3_1;
	}

IL_004e:
	{
		RuntimeObject* L_14;
		L_14 = Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8(G_B4_1, G_B4_0, Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		V_0 = L_14;
		RuntimeObject* L_15 = V_0;
		bool L_16;
		L_16 = Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517(L_15, Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_0076;
		}
	}
	{
		Type_t* L_17 = ___type0;
		bool L_18;
		L_18 = OptionsServiceCollectionExtensions_IsAction_mCEBCFDE39EE352A27A369CD6AC480B8676E0D5C9(L_17, NULL);
		if (L_18)
		{
			goto IL_006b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var)));
		String_t* L_19;
		L_19 = SR_get_Error_NoConfigurationServices_m7F4B9CEED359368A6A456E9D00C858AFD0527FAB(NULL);
		G_B8_0 = L_19;
		goto IL_0070;
	}

IL_006b:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var)));
		String_t* L_20;
		L_20 = SR_get_Error_NoConfigurationServicesAndAction_m071B4C4D30E8DBCCA747B047C6927DBE1061791E(NULL);
		G_B8_0 = L_20;
	}

IL_0070:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, G_B8_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OptionsServiceCollectionExtensions_FindConfigurationServices_mB1C0F8D62AFFF0A3034D3CA92AAA365A596F3BA5_RuntimeMethod_var)));
	}

IL_0076:
	{
		RuntimeObject* L_22 = V_0;
		return L_22;
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions::ConfigureOptions(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OptionsServiceCollectionExtensions_ConfigureOptions_mB972F8C99F52A75EA062385E539BC8719BB369C6 (RuntimeObject* ___services0, Type_t* ___configureType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsServiceCollectionExtensions_ConfigureOptions_mB972F8C99F52A75EA062385E539BC8719BB369C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OptionsServiceCollectionExtensions_ConfigureOptions_mB972F8C99F52A75EA062385E539BC8719BB369C6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___services0;
		RuntimeObject* L_1;
		L_1 = OptionsServiceCollectionExtensions_AddOptions_m2B7E7A3E983D6852952728B013633A537FE774F9(L_0, NULL);
		Type_t* L_2 = ___configureType1;
		RuntimeObject* L_3;
		L_3 = OptionsServiceCollectionExtensions_FindConfigurationServices_mB1C0F8D62AFFF0A3034D3CA92AAA365A596F3BA5(L_2, NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					RuntimeObject* L_6 = V_1;
					if (!L_6)
					{
						goto IL_003a;
					}
				}
				{
					RuntimeObject* L_7 = V_1;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_003a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_0027_1;
			}

IL_0017_1:
			{
				CHECK_PAUSE_POINT;
				RuntimeObject* L_8 = V_1;
				NullCheck(L_8);
				Type_t* L_9;
				L_9 = InterfaceFuncInvoker0< Type_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var, L_8);
				V_2 = L_9;
				RuntimeObject* L_10 = ___services0;
				Type_t* L_11 = V_2;
				Type_t* L_12 = ___configureType1;
				RuntimeObject* L_13;
				L_13 = ServiceCollectionServiceExtensions_AddTransient_m465E6340DC575D480458578FDE2ED9E6789C8687(L_10, L_11, L_12, NULL);
			}

IL_0027_1:
			{
				RuntimeObject* L_14 = V_1;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		RuntimeObject* L_16 = ___services0;
		return L_16;
	}
}
// Microsoft.Extensions.DependencyInjection.IServiceCollection Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions::ConfigureOptions(Microsoft.Extensions.DependencyInjection.IServiceCollection,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OptionsServiceCollectionExtensions_ConfigureOptions_m3AE7B726102935E23570E72C49D5F617B3F29D4F (RuntimeObject* ___services0, RuntimeObject* ___configureInstance1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsServiceCollectionExtensions_ConfigureOptions_m3AE7B726102935E23570E72C49D5F617B3F29D4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OptionsServiceCollectionExtensions_ConfigureOptions_m3AE7B726102935E23570E72C49D5F617B3F29D4F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___services0;
		RuntimeObject* L_1;
		L_1 = OptionsServiceCollectionExtensions_AddOptions_m2B7E7A3E983D6852952728B013633A537FE774F9(L_0, NULL);
		RuntimeObject* L_2 = ___configureInstance1;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		RuntimeObject* L_4;
		L_4 = OptionsServiceCollectionExtensions_FindConfigurationServices_mB1C0F8D62AFFF0A3034D3CA92AAA365A596F3BA5(L_3, NULL);
		V_0 = L_4;
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0036:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					RuntimeObject* L_7 = V_1;
					if (!L_7)
					{
						goto IL_003f;
					}
				}
				{
					RuntimeObject* L_8 = V_1;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_003f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_002c_1;
			}

IL_001c_1:
			{
				CHECK_PAUSE_POINT;
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				Type_t* L_10;
				L_10 = InterfaceFuncInvoker0< Type_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E_il2cpp_TypeInfo_var, L_9);
				V_2 = L_10;
				RuntimeObject* L_11 = ___services0;
				Type_t* L_12 = V_2;
				RuntimeObject* L_13 = ___configureInstance1;
				RuntimeObject* L_14;
				L_14 = ServiceCollectionServiceExtensions_AddSingleton_m025598643CF82EBD59FC1F2309A0C4EA902F8686(L_11, L_12, L_13, NULL);
			}

IL_002c_1:
			{
				RuntimeObject* L_15 = V_1;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		RuntimeObject* L_17 = ___services0;
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
// System.Void Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4363B00D07B3D86B5BB8B2E9414A3D4292619C2C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__cctor_m4363B00D07B3D86B5BB8B2E9414A3D4292619C2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__cctor_m4363B00D07B3D86B5BB8B2E9414A3D4292619C2C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E* L_0 = (U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E*)il2cpp_codegen_object_new(U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m4FFD6D1BED5A14449CD6C64EF8CBFE48D191AE72(L_0, NULL);
		((U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4FFD6D1BED5A14449CD6C64EF8CBFE48D191AE72 (U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__ctor_m4FFD6D1BED5A14449CD6C64EF8CBFE48D191AE72_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__ctor_m4FFD6D1BED5A14449CD6C64EF8CBFE48D191AE72_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c::<FindConfigurationServices>b__9_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindConfigurationServicesU3Eb__9_0_m45B6F49BD438DBB6BA53564811B9C838D285EF2C (U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E* __this, Type_t* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFindConfigurationServicesU3Eb__9_0_m45B6F49BD438DBB6BA53564811B9C838D285EF2C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec_U3CFindConfigurationServicesU3Eb__9_0_m45B6F49BD438DBB6BA53564811B9C838D285EF2C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Type_t* L_0 = ___t0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_1);
		return L_2;
	}
}
// System.Boolean Microsoft.Extensions.DependencyInjection.OptionsServiceCollectionExtensions/<>c::<FindConfigurationServices>b__9_1(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindConfigurationServicesU3Eb__9_1_m9A43DBFD3A4CF4D245F5FBA779C6F04AE0CE837C (U3CU3Ec_t51921B58BB9013926932BA09A08869B82B3C587E* __this, Type_t* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConfigureOptions_1_tF68C478F124D7BB1B8A6DD8C61927CF72CF9B798_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPostConfigureOptions_1_t143AC4A402EA59490EA5E044AC4B7D6CAFEA6893_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IValidateOptions_1_tD573C75F96E4D53B7E35847CA164A6C1085913B6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFindConfigurationServicesU3Eb__9_1_m9A43DBFD3A4CF4D245F5FBA779C6F04AE0CE837C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec_U3CFindConfigurationServicesU3Eb__9_1_m9A43DBFD3A4CF4D245F5FBA779C6F04AE0CE837C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Type_t* L_0 = ___t0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (IConfigureOptions_1_tF68C478F124D7BB1B8A6DD8C61927CF72CF9B798_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		Type_t* L_5 = ___t0;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (IPostConfigureOptions_1_t143AC4A402EA59490EA5E044AC4B7D6CAFEA6893_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_0044;
		}
	}
	{
		Type_t* L_10 = ___t0;
		NullCheck(L_10);
		Type_t* L_11;
		L_11 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_10);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (IValidateOptions_1_tD573C75F96E4D53B7E35847CA164A6C1085913B6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		return L_14;
	}

IL_0044:
	{
		return (bool)1;
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
// System.Void Microsoft.Extensions.Options.Options::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Options__cctor_mF6E3082AD8F6869C8A23278E4DA1E2838B1CDECD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Options__cctor_mF6E3082AD8F6869C8A23278E4DA1E2838B1CDECD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Options_tF40DF44FA44C10383C31644332020DC4BEB06679_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Options__cctor_mF6E3082AD8F6869C8A23278E4DA1E2838B1CDECD_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		((Options_tF40DF44FA44C10383C31644332020DC4BEB06679_StaticFields*)il2cpp_codegen_static_fields_for(Options_tF40DF44FA44C10383C31644332020DC4BEB06679_il2cpp_TypeInfo_var))->___DefaultName_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Options_tF40DF44FA44C10383C31644332020DC4BEB06679_StaticFields*)il2cpp_codegen_static_fields_for(Options_tF40DF44FA44C10383C31644332020DC4BEB06679_il2cpp_TypeInfo_var))->___DefaultName_1), (void*)L_0);
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
// System.Void Microsoft.Extensions.Options.OptionsValidationException::.ctor(System.String,System.Type,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionsValidationException__ctor_mC3FF445F53B45898846D3BF8258396984E22B985 (OptionsValidationException_tD3A5A7704776998F61A67DD3CE317B9DF17CA120* __this, String_t* ___optionsName0, Type_t* ___optionsType1, RuntimeObject* ___failureMessages2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsValidationException__ctor_mC3FF445F53B45898846D3BF8258396984E22B985_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OptionsValidationException__ctor_mC3FF445F53B45898846D3BF8258396984E22B985_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	RuntimeObject* G_B2_0 = NULL;
	OptionsValidationException_tD3A5A7704776998F61A67DD3CE317B9DF17CA120* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	OptionsValidationException_tD3A5A7704776998F61A67DD3CE317B9DF17CA120* G_B1_1 = NULL;
	Type_t* G_B4_0 = NULL;
	OptionsValidationException_tD3A5A7704776998F61A67DD3CE317B9DF17CA120* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	OptionsValidationException_tD3A5A7704776998F61A67DD3CE317B9DF17CA120* G_B3_1 = NULL;
	String_t* G_B6_0 = NULL;
	OptionsValidationException_tD3A5A7704776998F61A67DD3CE317B9DF17CA120* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	OptionsValidationException_tD3A5A7704776998F61A67DD3CE317B9DF17CA120* G_B5_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		RuntimeObject* L_0 = ___failureMessages2;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		G_B2_0 = ((RuntimeObject*)(L_2));
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		G_B2_1->___U3CFailuresU3Ek__BackingField_20 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___U3CFailuresU3Ek__BackingField_20), (void*)G_B2_0);
		Type_t* L_3 = ___optionsType1;
		Type_t* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = __this;
			goto IL_0027;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC715D017308E2D3D93876DDB56A36A3B51900793)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OptionsValidationException__ctor_mC3FF445F53B45898846D3BF8258396984E22B985_RuntimeMethod_var)));
	}

IL_0027:
	{
		NullCheck(G_B4_1);
		G_B4_1->___U3COptionsTypeU3Ek__BackingField_19 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___U3COptionsTypeU3Ek__BackingField_19), (void*)G_B4_0);
		String_t* L_6 = ___optionsName0;
		String_t* L_7 = L_6;
		G_B5_0 = L_7;
		G_B5_1 = __this;
		if (L_7)
		{
			G_B6_0 = L_7;
			G_B6_1 = __this;
			goto IL_003d;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_8 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral191EEC2373521088BE0145A4C1A45269CA556834)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OptionsValidationException__ctor_mC3FF445F53B45898846D3BF8258396984E22B985_RuntimeMethod_var)));
	}

IL_003d:
	{
		NullCheck(G_B6_1);
		G_B6_1->___U3COptionsNameU3Ek__BackingField_18 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___U3COptionsNameU3Ek__BackingField_18), (void*)G_B6_0);
		return;
	}
}
// System.String Microsoft.Extensions.Options.OptionsValidationException::get_OptionsName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OptionsValidationException_get_OptionsName_mEF168A922B9590945F38E6EF590F7D93492248D5 (OptionsValidationException_tD3A5A7704776998F61A67DD3CE317B9DF17CA120* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsValidationException_get_OptionsName_mEF168A922B9590945F38E6EF590F7D93492248D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OptionsValidationException_get_OptionsName_mEF168A922B9590945F38E6EF590F7D93492248D5_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = __this->___U3COptionsNameU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Type Microsoft.Extensions.Options.OptionsValidationException::get_OptionsType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* OptionsValidationException_get_OptionsType_m6521ABA34FFD72562AAD8242B1C1A63E962F72B5 (OptionsValidationException_tD3A5A7704776998F61A67DD3CE317B9DF17CA120* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsValidationException_get_OptionsType_m6521ABA34FFD72562AAD8242B1C1A63E962F72B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OptionsValidationException_get_OptionsType_m6521ABA34FFD72562AAD8242B1C1A63E962F72B5_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Type_t* L_0 = __this->___U3COptionsTypeU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.Extensions.Options.OptionsValidationException::get_Failures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OptionsValidationException_get_Failures_m781D5167877EC31565EED3156036B055F13C76CC (OptionsValidationException_tD3A5A7704776998F61A67DD3CE317B9DF17CA120* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsValidationException_get_Failures_m781D5167877EC31565EED3156036B055F13C76CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OptionsValidationException_get_Failures_m781D5167877EC31565EED3156036B055F13C76CC_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___U3CFailuresU3Ek__BackingField_20;
		return L_0;
	}
}
// System.String Microsoft.Extensions.Options.OptionsValidationException::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OptionsValidationException_get_Message_m9CCA23ED23AE65309739051025922807D016830B (OptionsValidationException_tD3A5A7704776998F61A67DD3CE317B9DF17CA120* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsValidationException_get_Message_m9CCA23ED23AE65309739051025922807D016830B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OptionsValidationException_get_Message_m9CCA23ED23AE65309739051025922807D016830B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = OptionsValidationException_get_Failures_m781D5167877EC31565EED3156036B055F13C76CC_inline(__this, NULL);
		String_t* L_1;
		L_1 = String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158(_stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1, L_0, NULL);
		return L_1;
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
// System.Boolean Microsoft.Extensions.Options.ValidateOptionsResult::get_Succeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValidateOptionsResult_get_Succeeded_mAF233F98D886F881E76C17A88645E4CAC934D288 (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_get_Succeeded_mAF233F98D886F881E76C17A88645E4CAC934D288_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult_get_Succeeded_mAF233F98D886F881E76C17A88645E4CAC934D288_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = __this->___U3CSucceededU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_Succeeded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Succeeded_m2B3AF40CA8446122E04EFD6CC9332E838BABF63B (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_set_Succeeded_m2B3AF40CA8446122E04EFD6CC9332E838BABF63B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult_set_Succeeded_m2B3AF40CA8446122E04EFD6CC9332E838BABF63B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = ___value0;
		__this->___U3CSucceededU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean Microsoft.Extensions.Options.ValidateOptionsResult::get_Skipped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValidateOptionsResult_get_Skipped_m4A8BB8B7791972097D5825D562A58D2FE03190CE (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_get_Skipped_m4A8BB8B7791972097D5825D562A58D2FE03190CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult_get_Skipped_m4A8BB8B7791972097D5825D562A58D2FE03190CE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = __this->___U3CSkippedU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_Skipped(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Skipped_m75F06430238AAEEDF388A3818AF9E26F0DA3CB93 (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_set_Skipped_m75F06430238AAEEDF388A3818AF9E26F0DA3CB93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult_set_Skipped_m75F06430238AAEEDF388A3818AF9E26F0DA3CB93_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = ___value0;
		__this->___U3CSkippedU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean Microsoft.Extensions.Options.ValidateOptionsResult::get_Failed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValidateOptionsResult_get_Failed_mF5BAE919CEB57F450E4496B5733DF25F7AF685AA (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_get_Failed_mF5BAE919CEB57F450E4496B5733DF25F7AF685AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult_get_Failed_mF5BAE919CEB57F450E4496B5733DF25F7AF685AA_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = __this->___U3CFailedU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_Failed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Failed_m710C78FE3AC8624511406A2C1F390AFA3B905C8F (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_set_Failed_m710C78FE3AC8624511406A2C1F390AFA3B905C8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult_set_Failed_m710C78FE3AC8624511406A2C1F390AFA3B905C8F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = ___value0;
		__this->___U3CFailedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String Microsoft.Extensions.Options.ValidateOptionsResult::get_FailureMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValidateOptionsResult_get_FailureMessage_m14FEF9967157AB4C0DC9B5E336A93FE70D635B8B (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_get_FailureMessage_m14FEF9967157AB4C0DC9B5E336A93FE70D635B8B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult_get_FailureMessage_m14FEF9967157AB4C0DC9B5E336A93FE70D635B8B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = __this->___U3CFailureMessageU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_FailureMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_FailureMessage_m8468FC47B63492151913684C942A6904F485E480 (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_set_FailureMessage_m8468FC47B63492151913684C942A6904F485E480_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult_set_FailureMessage_m8468FC47B63492151913684C942A6904F485E480_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___value0;
		__this->___U3CFailureMessageU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFailureMessageU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.Extensions.Options.ValidateOptionsResult::get_Failures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValidateOptionsResult_get_Failures_m30841379DE7CE185C8DF8B1682F23EAD4F75E476 (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_get_Failures_m30841379DE7CE185C8DF8B1682F23EAD4F75E476_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult_get_Failures_m30841379DE7CE185C8DF8B1682F23EAD4F75E476_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___U3CFailuresU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::set_Failures(System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Failures_m8AE4B6779F2F422D38DC8EA9AABBB2A79B976F42 (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_set_Failures_m8AE4B6779F2F422D38DC8EA9AABBB2A79B976F42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult_set_Failures_m8AE4B6779F2F422D38DC8EA9AABBB2A79B976F42_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CFailuresU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFailuresU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// Microsoft.Extensions.Options.ValidateOptionsResult Microsoft.Extensions.Options.ValidateOptionsResult::Fail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* ValidateOptionsResult_Fail_m5C83282D0AD6BE0F5B26B43588CDF6C382222F3C (String_t* ___failureMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_Fail_m5C83282D0AD6BE0F5B26B43588CDF6C382222F3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult_Fail_m5C83282D0AD6BE0F5B26B43588CDF6C382222F3C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* L_0 = (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF*)il2cpp_codegen_object_new(ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValidateOptionsResult__ctor_mDF396C14D6F0260AF593F987D6A9FA531B498D8F(L_0, NULL);
		V_0 = L_0;
		ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* L_1 = V_0;
		NullCheck(L_1);
		ValidateOptionsResult_set_Failed_m710C78FE3AC8624511406A2C1F390AFA3B905C8F_inline(L_1, (bool)1, NULL);
		ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* L_2 = V_0;
		String_t* L_3 = ___failureMessage0;
		NullCheck(L_2);
		ValidateOptionsResult_set_FailureMessage_m8468FC47B63492151913684C942A6904F485E480_inline(L_2, L_3, NULL);
		ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* L_4 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7 = ___failureMessage0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_7);
		NullCheck(L_4);
		ValidateOptionsResult_set_Failures_m8AE4B6779F2F422D38DC8EA9AABBB2A79B976F42_inline(L_4, (RuntimeObject*)L_6, NULL);
		ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* L_8 = V_0;
		return L_8;
	}
}
// Microsoft.Extensions.Options.ValidateOptionsResult Microsoft.Extensions.Options.ValidateOptionsResult::Fail(System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* ValidateOptionsResult_Fail_m1752F8BFC40691E43E84B9384C30CD68EAD62F38 (RuntimeObject* ___failures0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_Fail_m1752F8BFC40691E43E84B9384C30CD68EAD62F38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult_Fail_m1752F8BFC40691E43E84B9384C30CD68EAD62F38_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* L_0 = (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF*)il2cpp_codegen_object_new(ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValidateOptionsResult__ctor_mDF396C14D6F0260AF593F987D6A9FA531B498D8F(L_0, NULL);
		ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* L_1 = L_0;
		NullCheck(L_1);
		ValidateOptionsResult_set_Failed_m710C78FE3AC8624511406A2C1F390AFA3B905C8F_inline(L_1, (bool)1, NULL);
		ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* L_2 = L_1;
		RuntimeObject* L_3 = ___failures0;
		String_t* L_4;
		L_4 = String_Join_m8159F953B3D62AA54A0853A6E9573CDC0F63E158(_stringLiteralF712C5F62331F2870DB319ED66CDF53B831F3CA1, L_3, NULL);
		NullCheck(L_2);
		ValidateOptionsResult_set_FailureMessage_m8468FC47B63492151913684C942A6904F485E480_inline(L_2, L_4, NULL);
		ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* L_5 = L_2;
		RuntimeObject* L_6 = ___failures0;
		NullCheck(L_5);
		ValidateOptionsResult_set_Failures_m8AE4B6779F2F422D38DC8EA9AABBB2A79B976F42_inline(L_5, L_6, NULL);
		return L_5;
	}
}
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateOptionsResult__ctor_mDF396C14D6F0260AF593F987D6A9FA531B498D8F (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult__ctor_mDF396C14D6F0260AF593F987D6A9FA531B498D8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult__ctor_mDF396C14D6F0260AF593F987D6A9FA531B498D8F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Options.ValidateOptionsResult::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateOptionsResult__cctor_mCC7EEA71B9C7A5A49D22BE1B3651E595F4E62126 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult__cctor_mCC7EEA71B9C7A5A49D22BE1B3651E595F4E62126_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult__cctor_mCC7EEA71B9C7A5A49D22BE1B3651E595F4E62126_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* L_0 = (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF*)il2cpp_codegen_object_new(ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValidateOptionsResult__ctor_mDF396C14D6F0260AF593F987D6A9FA531B498D8F(L_0, NULL);
		ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* L_1 = L_0;
		NullCheck(L_1);
		ValidateOptionsResult_set_Skipped_m75F06430238AAEEDF388A3818AF9E26F0DA3CB93_inline(L_1, (bool)1, NULL);
		((ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF_StaticFields*)il2cpp_codegen_static_fields_for(ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF_il2cpp_TypeInfo_var))->___Skip_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF_StaticFields*)il2cpp_codegen_static_fields_for(ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF_il2cpp_TypeInfo_var))->___Skip_0), (void*)L_1);
		ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* L_2 = (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF*)il2cpp_codegen_object_new(ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ValidateOptionsResult__ctor_mDF396C14D6F0260AF593F987D6A9FA531B498D8F(L_2, NULL);
		ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* L_3 = L_2;
		NullCheck(L_3);
		ValidateOptionsResult_set_Succeeded_m2B3AF40CA8446122E04EFD6CC9332E838BABF63B_inline(L_3, (bool)1, NULL);
		((ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF_StaticFields*)il2cpp_codegen_static_fields_for(ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF_il2cpp_TypeInfo_var))->___Success_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF_StaticFields*)il2cpp_codegen_static_fields_for(ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF_il2cpp_TypeInfo_var))->___Success_1), (void*)L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m976E7DDB2ECB3DE0B197DBA262021BDF2AEDF69F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_UsingResourceKeys_m976E7DDB2ECB3DE0B197DBA262021BDF2AEDF69F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_UsingResourceKeys_m976E7DDB2ECB3DE0B197DBA262021BDF2AEDF69F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var);
		bool L_0 = ((SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_StaticFields*)il2cpp_codegen_static_fields_for(SR_t15E8C8FD798F77EC7FDCCC2CCC6F1B3A92D1209C_il2cpp_TypeInfo_var))->___s_usingResourceKeys_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OptionsValidationException_get_Failures_m781D5167877EC31565EED3156036B055F13C76CC_inline (OptionsValidationException_tD3A5A7704776998F61A67DD3CE317B9DF17CA120* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionsValidationException_get_Failures_m781D5167877EC31565EED3156036B055F13C76CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OptionsValidationException_get_Failures_m781D5167877EC31565EED3156036B055F13C76CC_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___U3CFailuresU3Ek__BackingField_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Failed_m710C78FE3AC8624511406A2C1F390AFA3B905C8F_inline (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_set_Failed_m710C78FE3AC8624511406A2C1F390AFA3B905C8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult_set_Failed_m710C78FE3AC8624511406A2C1F390AFA3B905C8F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = ___value0;
		__this->___U3CFailedU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_FailureMessage_m8468FC47B63492151913684C942A6904F485E480_inline (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_set_FailureMessage_m8468FC47B63492151913684C942A6904F485E480_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult_set_FailureMessage_m8468FC47B63492151913684C942A6904F485E480_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___value0;
		__this->___U3CFailureMessageU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFailureMessageU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Failures_m8AE4B6779F2F422D38DC8EA9AABBB2A79B976F42_inline (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_set_Failures_m8AE4B6779F2F422D38DC8EA9AABBB2A79B976F42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult_set_Failures_m8AE4B6779F2F422D38DC8EA9AABBB2A79B976F42_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CFailuresU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFailuresU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Skipped_m75F06430238AAEEDF388A3818AF9E26F0DA3CB93_inline (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_set_Skipped_m75F06430238AAEEDF388A3818AF9E26F0DA3CB93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult_set_Skipped_m75F06430238AAEEDF388A3818AF9E26F0DA3CB93_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = ___value0;
		__this->___U3CSkippedU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValidateOptionsResult_set_Succeeded_m2B3AF40CA8446122E04EFD6CC9332E838BABF63B_inline (ValidateOptionsResult_t42B0A56CD6AB8A2F9F1853062D91F4E39A7ECCEF* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidateOptionsResult_set_Succeeded_m2B3AF40CA8446122E04EFD6CC9332E838BABF63B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ValidateOptionsResult_set_Succeeded_m2B3AF40CA8446122E04EFD6CC9332E838BABF63B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = ___value0;
		__this->___U3CSucceededU3Ek__BackingField_2 = L_0;
		return;
	}
}
