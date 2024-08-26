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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
// System.Collections.Generic.IDictionary`2<System.Type,System.Object>
struct IDictionary_2_t7AE3EBA7008B31E9D8A2BE7AC43EC4189B67D06A;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>>
struct IEnumerable_1_tD1B1F221C8BE531D247CE725042F68B1231283A9;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>>
struct IEnumerator_1_tA12430EC47EF135D6EAFB804654D4C5A48E762F9;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEqualityComparer_1_t1917DFAEEFED34DD8ABCD70B8D94473220B6783D;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>>
struct IEqualityComparer_1_t49EAE953C41CB7E97A52BDBBA443FD9D9158A5BA;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Object>
struct KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Object>
struct ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Object>[]
struct EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Diagnostics.CodeAnalysis.AllowNullAttribute
struct AllowNullAttribute_t1D5D8FB391F7B4C65AF874F1DBF6BC8E9C335DC5;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Microsoft.AspNetCore.Http.CookieOptions
struct CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643;
// System.Diagnostics.CodeAnalysis.DisallowNullAttribute
struct DisallowNullAttribute_t9CCE1AE0217CD5AB3EFBE7CF7E457C735DDD4CED;
// System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute
struct DoesNotReturnAttribute_tEAE6E481E4AC4D4F3165E84FFB2F4DE94B21E8E7;
// System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute
struct DoesNotReturnIfAttribute_t765AE63CD41E0B2F1EEAE0D3D1836D8A1A901D53;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t4AC4A0E34002FFB296DB66F8FB645315F2E8223E;
// Microsoft.AspNetCore.Http.Features.FeatureCollection
struct FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Microsoft.AspNetCore.Http.Features.IFeatureCollection
struct IFeatureCollection_t06D0760E0994CEA073C4481013861DEF0D029A44;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t57139D2152104357889B0B1F7E782C3828C9D5F2;
// System.Diagnostics.CodeAnalysis.MaybeNullAttribute
struct MaybeNullAttribute_t7858A8DD03D1CBC3DBAAE1437187901AC9CE3245;
// System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute
struct MaybeNullWhenAttribute_t46184905D347069E45989DAAF4D45CCF63F9DFDF;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Diagnostics.CodeAnalysis.MemberNotNullAttribute
struct MemberNotNullAttribute_t923B07AE3FD076431CA77D5CA6F2BFBC93FEE5DD;
// System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute
struct MemberNotNullWhenAttribute_t9AC9858819AA7CF04AF802B195577E442BD3E7D4;
// System.Diagnostics.CodeAnalysis.NotNullAttribute
struct NotNullAttribute_t1F2EB6DD183FB972F65C945A4ABB7B98D3E5B53D;
// System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute
struct NotNullIfNotNullAttribute_t92EC04B28E277E2B4177EC29C443059AD89478D3;
// System.Diagnostics.CodeAnalysis.NotNullWhenAttribute
struct NotNullWhenAttribute_t6F0E2683A4CC098CDE13536752B9EB75F4CAA2AD;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t603CB96D85CA961AAB1264E1E14593F0E2FB3105;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_tEC2C352CB480074B25A7B5EF3EE479703C7F604E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.AspNetCore.Http.WebSocketAcceptContext
struct WebSocketAcceptContext_t4A4059BD8C933814FBF08C4FE0D08032E5541384;
// Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14
struct U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251;
// Microsoft.AspNetCore.Http.Features.FeatureCollection/KeyComparer
struct KeyComparer_t301D522C8DA2540FE01BB6FA47133C86C917B249;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t7AE3EBA7008B31E9D8A2BE7AC43EC4189B67D06A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tD1B1F221C8BE531D247CE725042F68B1231283A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tA12430EC47EF135D6EAFB804654D4C5A48E762F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFeatureCollection_t06D0760E0994CEA073C4481013861DEF0D029A44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyComparer_t301D522C8DA2540FE01BB6FA47133C86C917B249_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C const RuntimeMethod* AllowNullAttribute__ctor_mA33138077929439863627336E1A1EFE3BEB68985_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieOptions__ctor_m339CC177B3987A3DEA60500D3E9CFF7F6F1C3393_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieOptions_get_Domain_m6F8CA4FE577CDF48538D30DF6E949E9692C07749_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieOptions_get_Expires_mA93DC8625C1B7D080A942CBF5C3262641E25910C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieOptions_get_HttpOnly_mC66C6CAE359E1AB77E75520E5E9DC9ECB468F654_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieOptions_get_IsEssential_m08CA8418B3C39F1EE00DC85478542C3F000E58BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieOptions_get_MaxAge_mE1AF0CCD003D672223C8516CC22911152D674271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieOptions_get_Path_m4D16D025470F6A4120A05D92A3132A8BFDDD1C3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieOptions_get_SameSite_m3F4A4DD1C8A7664F1BB4683ECEFD5ECAFA3D1A5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieOptions_get_Secure_m4F217C7A6F55DB7B4F5FD388B78D2950373BAC57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieOptions_set_Domain_m71D3A5117D290957133C6416D6D06549ABC2D9B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieOptions_set_Expires_m8C6B427CC0B4F8B0A72C351233E33BF0DA371A79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieOptions_set_HttpOnly_m18507C5C80977269C43A2698C5307ED4D1ACD8C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieOptions_set_IsEssential_mD003906A4005E8A3003FD0F704AEE3905524CB87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieOptions_set_MaxAge_m1FF4FF2475255AB4330A0DDF123A945F1F8E70E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieOptions_set_Path_mAACBF590C1BE28A9058EF754E4292F4C04CAED1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieOptions_set_SameSite_m791FD07EBC5D6404CA5455018DA61B42A2C52112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CookieOptions_set_Secure_m8E8FF577CE39B2AA64A17D118B418A6508CB40F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DisallowNullAttribute__ctor_mDAEFF9774C8FA0D7D5E8D6E80E3CACB6DC6E27FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DoesNotReturnAttribute__ctor_mAE42FD76483594A6528BDBD5C0091EFE47902769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DoesNotReturnIfAttribute__ctor_mD9B77EA68A51C8571CFC97E720376E423B612871_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DoesNotReturnIfAttribute_get_ParameterValue_m6E1FE9D60E88A41F47FC27B2D9873C29D62A370E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmbeddedAttribute__ctor_m95E60EFDFC2C8033BEEDB0DE391099DF546D4013_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Except_TisKeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA_mA0E92010DB95582B3DDE3F3430C0E2E10C265BEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureCollection_GetEnumerator_mC2CBFF97EA1B89BC783A739D64F05C804C7CA432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureCollection_System_Collections_IEnumerable_GetEnumerator_m965DB7233B7DDAC1643943D0C2BBFD25A3E5733D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureCollection__cctor_m9CF4E7510A7EE5122BD7B91C8B406EB01910D74E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureCollection__ctor_m2B04E053D56130600AC53F5A88531DD175ED54D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureCollection__ctor_mE6986C2E4024FFA00001AA4A3003A17EE4E37BEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureCollection_get_IsReadOnly_mB0954083A801D92B930D07B66BE244C658DE0BA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureCollection_get_Item_mB5F9CADC748D8F2AE8D55B8464A05EE5888E860E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureCollection_get_Revision_m3DC4BBEC33136EAD22EBFB6A6A420AA21CA037D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FeatureCollection_set_Item_m58354C08B3F8DE27DB7A656D2E8510B80461EEF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IsReadOnlyAttribute__ctor_m5A5BDAFEB531D7F5689A6FE5FF2F71CBC62EBBFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyComparer_Equals_m6CA552F95B1CAAE62E17E894BB03E25B7E201CAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyComparer_GetHashCode_m7316DA631F073371A4295B536E3E467973A1D0A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyComparer__ctor_m88C43C1D215AFD287F3CDC22CE48684F9AFA9D68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeNullAttribute__ctor_m32739F6CC229EA2D72D9E08D8CBCF5E0C855F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeNullWhenAttribute__ctor_m6C68C2178399E543D4BEDECDC4B7BC08A6A57A10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MaybeNullWhenAttribute_get_ReturnValue_m8F84B115F663BAB37BDE43D720271C017472F55D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemberNotNullAttribute__ctor_m870A9F5756D151AAA3CE13DAC26B9190BC035D07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemberNotNullAttribute__ctor_mA7E7806698BC40161AC9BB17AF8D028229CF718D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemberNotNullAttribute_get_Members_m3422809298A8D4747AAEBA0B2ED7D3ACEA7DFBB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemberNotNullWhenAttribute__ctor_m36FF22AFBA6FE8B4AE4B59CE126124505589EBCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemberNotNullWhenAttribute__ctor_m8E4147480200AE7BAE244B03AAC3A38CB372F88B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemberNotNullWhenAttribute_get_Members_m6BE8981C68A6B56012B1ECEDAC7896CE29FFCAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemberNotNullWhenAttribute_get_ReturnValue_m4070B26434F0D353CE80E6AFE1F8509D935D0E06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotNullAttribute__ctor_mAAA72297FF34F50A7367BD9EB75D37692DD210A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotNullIfNotNullAttribute__ctor_m889C7B1596C7A692671BCD8C2437021ECDFB487E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotNullIfNotNullAttribute_get_ParameterName_m1034A18E85A57A86420EC7C24C3454FF5F73BFE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotNullWhenAttribute__ctor_m77BC46F20D0BD5DF984EF50530614B913F6884FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NotNullWhenAttribute_get_ReturnValue_mFA4D860BC569FC15FE9DDF29265CA785AF99FAE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NullableAttribute__ctor_m1008040785C083458EAB0DA6745BB639742A7525_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NullableAttribute__ctor_mFDE51EA79B166848B9313126ABD4BB5256B5B1F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NullableContextAttribute__ctor_m591A89D0C2F3EF49CD9056B931B832F6CC14982C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__14_MoveNext_mD92D5F889F5D27C0638F0C6E03203EF0A0800069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_TypeU2CSystem_ObjectU3EU3E_get_Current_mFD541D50F422EE0CD28B06372985C30800ECFAE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m94251EE0C5199B765A7307865CA7B1F953D2F345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_m397B2267FD3DD92FB4A124DF30570F534F536627_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mD8856657A70E02CB34F584D5F718578B03136041_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_mEF9D21CEEC64FBD7815450448807EA6011525A08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally2_m6393520A7090B5F30D14BAF07B40E375E90EABD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__14__ctor_m7F6D5E1B213B61CF867ED0B4EF3208B8F72E2C3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketAcceptContext__ctor_m53A3E89BA4D4552D77F24FD6DACDBBB38A6864E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketAcceptContext_get_SubProtocol_mEC2110857323327AE239BD6D6A5E64638BF2EEBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketAcceptContext_set_SubProtocol_m426F1ADA8D57971A31EA19B3D2141DE97EDA71A8_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8C62EBB867D507E5CF1F6434DCEF2FC9DBE5C55B 
{
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92* ____entries_1;
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
	KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Microsoft.AspNetCore.Http.Features.FeatureCollection
struct FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6  : public RuntimeObject
{
	// Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Http.Features.FeatureCollection::_defaults
	RuntimeObject* ____defaults_1;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Object> Microsoft.AspNetCore.Http.Features.FeatureCollection::_features
	RuntimeObject* ____features_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.AspNetCore.Http.Features.FeatureCollection::_containerRevision
	int32_t ____containerRevision_3;
};

struct FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6_StaticFields
{
	// Microsoft.AspNetCore.Http.Features.FeatureCollection/KeyComparer Microsoft.AspNetCore.Http.Features.FeatureCollection::FeatureKeyComparer
	KeyComparer_t301D522C8DA2540FE01BB6FA47133C86C917B249* ___FeatureKeyComparer_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// Microsoft.AspNetCore.Http.WebSocketAcceptContext
struct WebSocketAcceptContext_t4A4059BD8C933814FBF08C4FE0D08032E5541384  : public RuntimeObject
{
	// System.String Microsoft.AspNetCore.Http.WebSocketAcceptContext::<SubProtocol>k__BackingField
	String_t* ___U3CSubProtocolU3Ek__BackingField_0;
};

// Microsoft.AspNetCore.Http.Features.FeatureCollection/KeyComparer
struct KeyComparer_t301D522C8DA2540FE01BB6FA47133C86C917B249  : public RuntimeObject
{
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>
struct KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Diagnostics.CodeAnalysis.AllowNullAttribute
struct AllowNullAttribute_t1D5D8FB391F7B4C65AF874F1DBF6BC8E9C335DC5  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Diagnostics.CodeAnalysis.DisallowNullAttribute
struct DisallowNullAttribute_t9CCE1AE0217CD5AB3EFBE7CF7E457C735DDD4CED  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute
struct DoesNotReturnAttribute_tEAE6E481E4AC4D4F3165E84FFB2F4DE94B21E8E7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute
struct DoesNotReturnIfAttribute_t765AE63CD41E0B2F1EEAE0D3D1836D8A1A901D53  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute::<ParameterValue>k__BackingField
	bool ___U3CParameterValueU3Ek__BackingField_0;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t4AC4A0E34002FFB296DB66F8FB645315F2E8223E  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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
struct IsReadOnlyAttribute_t57139D2152104357889B0B1F7E782C3828C9D5F2  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.MaybeNullAttribute
struct MaybeNullAttribute_t7858A8DD03D1CBC3DBAAE1437187901AC9CE3245  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute
struct MaybeNullWhenAttribute_t46184905D347069E45989DAAF4D45CCF63F9DFDF  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute::<ReturnValue>k__BackingField
	bool ___U3CReturnValueU3Ek__BackingField_0;
};

// System.Diagnostics.CodeAnalysis.MemberNotNullAttribute
struct MemberNotNullAttribute_t923B07AE3FD076431CA77D5CA6F2BFBC93FEE5DD  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String[] System.Diagnostics.CodeAnalysis.MemberNotNullAttribute::<Members>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CMembersU3Ek__BackingField_0;
};

// System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute
struct MemberNotNullWhenAttribute_t9AC9858819AA7CF04AF802B195577E442BD3E7D4  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::<ReturnValue>k__BackingField
	bool ___U3CReturnValueU3Ek__BackingField_0;
	// System.String[] System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::<Members>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CMembersU3Ek__BackingField_1;
};

// System.Diagnostics.CodeAnalysis.NotNullAttribute
struct NotNullAttribute_t1F2EB6DD183FB972F65C945A4ABB7B98D3E5B53D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute
struct NotNullIfNotNullAttribute_t92EC04B28E277E2B4177EC29C443059AD89478D3  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute::<ParameterName>k__BackingField
	String_t* ___U3CParameterNameU3Ek__BackingField_0;
};

// System.Diagnostics.CodeAnalysis.NotNullWhenAttribute
struct NotNullWhenAttribute_t6F0E2683A4CC098CDE13536752B9EB75F4CAA2AD  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Diagnostics.CodeAnalysis.NotNullWhenAttribute::<ReturnValue>k__BackingField
	bool ___U3CReturnValueU3Ek__BackingField_0;
};

// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t603CB96D85CA961AAB1264E1E14593F0E2FB3105  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags_0;
};

// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_tEC2C352CB480074B25A7B5EF3EE479703C7F604E  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
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

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value_1;
};

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
};

struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
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

// Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14
struct U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251  : public RuntimeObject
{
	// System.Int32 Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.Type,System.Object> Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::<>2__current
	KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA ___U3CU3E2__current_1;
	// Microsoft.AspNetCore.Http.Features.FeatureCollection Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::<>4__this
	FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* ___U3CU3E4__this_2;
	// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>> Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_3;
};

// System.Nullable`1<System.DateTimeOffset>
struct Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value_1;
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

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Microsoft.AspNetCore.Http.CookieOptions
struct CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643  : public RuntimeObject
{
	// System.String Microsoft.AspNetCore.Http.CookieOptions::<Domain>k__BackingField
	String_t* ___U3CDomainU3Ek__BackingField_0;
	// System.String Microsoft.AspNetCore.Http.CookieOptions::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_1;
	// System.Nullable`1<System.DateTimeOffset> Microsoft.AspNetCore.Http.CookieOptions::<Expires>k__BackingField
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___U3CExpiresU3Ek__BackingField_2;
	// System.Boolean Microsoft.AspNetCore.Http.CookieOptions::<Secure>k__BackingField
	bool ___U3CSecureU3Ek__BackingField_3;
	// Microsoft.AspNetCore.Http.SameSiteMode Microsoft.AspNetCore.Http.CookieOptions::<SameSite>k__BackingField
	int32_t ___U3CSameSiteU3Ek__BackingField_4;
	// System.Boolean Microsoft.AspNetCore.Http.CookieOptions::<HttpOnly>k__BackingField
	bool ___U3CHttpOnlyU3Ek__BackingField_5;
	// System.Nullable`1<System.TimeSpan> Microsoft.AspNetCore.Http.CookieOptions::<MaxAge>k__BackingField
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___U3CMaxAgeU3Ek__BackingField_6;
	// System.Boolean Microsoft.AspNetCore.Http.CookieOptions::<IsEssential>k__BackingField
	bool ___U3CIsEssentialU3Ek__BackingField_7;
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Except<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Except_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m3C02281932F7E24674CA069E0CB328F2427276F8_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, RuntimeObject* ___comparer2, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AspNetCore.Http.CookieOptions::set_Path(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieOptions_set_Path_mAACBF590C1BE28A9058EF754E4292F4C04CAED1A_inline (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::.ctor()
inline void Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>> Microsoft.AspNetCore.Http.Features.FeatureCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FeatureCollection_GetEnumerator_mC2CBFF97EA1B89BC783A739D64F05C804C7CA432 (FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14__ctor_m7F6D5E1B213B61CF867ED0B4EF3208B8F72E2C3E (U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/KeyComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyComparer__ctor_m88C43C1D215AFD287F3CDC22CE48684F9AFA9D68 (KeyComparer_t301D522C8DA2540FE01BB6FA47133C86C917B249* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>::get_Key()
inline Type_t* KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_inline (KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_mEF9D21CEEC64FBD7815450448807EA6011525A08 (U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally2_m6393520A7090B5F30D14BAF07B40E375E90EABD1 (U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mD8856657A70E02CB34F584D5F718578B03136041 (U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Except<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
inline RuntimeObject* Enumerable_Except_TisKeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA_mA0E92010DB95582B3DDE3F3430C0E2E10C265BEE (RuntimeObject* ___first0, RuntimeObject* ___second1, RuntimeObject* ___comparer2, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Except_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m3C02281932F7E24674CA069E0CB328F2427276F8_gshared)(___first0, ___second1, ___comparer2, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m95E60EFDFC2C8033BEEDB0DE391099DF546D4013 (EmbeddedAttribute_t4AC4A0E34002FFB296DB66F8FB645315F2E8223E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmbeddedAttribute__ctor_m95E60EFDFC2C8033BEEDB0DE391099DF546D4013_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, EmbeddedAttribute__ctor_m95E60EFDFC2C8033BEEDB0DE391099DF546D4013_RuntimeMethod_var, NULL, NULL, NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m5A5BDAFEB531D7F5689A6FE5FF2F71CBC62EBBFF (IsReadOnlyAttribute_t57139D2152104357889B0B1F7E782C3828C9D5F2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsReadOnlyAttribute__ctor_m5A5BDAFEB531D7F5689A6FE5FF2F71CBC62EBBFF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IsReadOnlyAttribute__ctor_m5A5BDAFEB531D7F5689A6FE5FF2F71CBC62EBBFF_RuntimeMethod_var, NULL, NULL, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m1008040785C083458EAB0DA6745BB639742A7525 (NullableAttribute_t603CB96D85CA961AAB1264E1E14593F0E2FB3105* __this, uint8_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableAttribute__ctor_m1008040785C083458EAB0DA6745BB639742A7525_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NullableAttribute__ctor_m1008040785C083458EAB0DA6745BB639742A7525_RuntimeMethod_var, NULL, NULL, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_mFDE51EA79B166848B9313126ABD4BB5256B5B1F1 (NullableAttribute_t603CB96D85CA961AAB1264E1E14593F0E2FB3105* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableAttribute__ctor_mFDE51EA79B166848B9313126ABD4BB5256B5B1F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NullableAttribute__ctor_mFDE51EA79B166848B9313126ABD4BB5256B5B1F1_RuntimeMethod_var, NULL, NULL, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_m591A89D0C2F3EF49CD9056B931B832F6CC14982C (NullableContextAttribute_tEC2C352CB480074B25A7B5EF3EE479703C7F604E* __this, uint8_t p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableContextAttribute__ctor_m591A89D0C2F3EF49CD9056B931B832F6CC14982C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NullableContextAttribute__ctor_m591A89D0C2F3EF49CD9056B931B832F6CC14982C_RuntimeMethod_var, NULL, NULL, NULL);
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
// System.Void System.Diagnostics.CodeAnalysis.AllowNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowNullAttribute__ctor_mA33138077929439863627336E1A1EFE3BEB68985 (AllowNullAttribute_t1D5D8FB391F7B4C65AF874F1DBF6BC8E9C335DC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllowNullAttribute__ctor_mA33138077929439863627336E1A1EFE3BEB68985_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AllowNullAttribute__ctor_mA33138077929439863627336E1A1EFE3BEB68985_RuntimeMethod_var, NULL, NULL, NULL);
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
// System.Void System.Diagnostics.CodeAnalysis.DisallowNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisallowNullAttribute__ctor_mDAEFF9774C8FA0D7D5E8D6E80E3CACB6DC6E27FB (DisallowNullAttribute_t9CCE1AE0217CD5AB3EFBE7CF7E457C735DDD4CED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisallowNullAttribute__ctor_mDAEFF9774C8FA0D7D5E8D6E80E3CACB6DC6E27FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DisallowNullAttribute__ctor_mDAEFF9774C8FA0D7D5E8D6E80E3CACB6DC6E27FB_RuntimeMethod_var, NULL, NULL, NULL);
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
// System.Void System.Diagnostics.CodeAnalysis.MaybeNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaybeNullAttribute__ctor_m32739F6CC229EA2D72D9E08D8CBCF5E0C855F1F9 (MaybeNullAttribute_t7858A8DD03D1CBC3DBAAE1437187901AC9CE3245* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeNullAttribute__ctor_m32739F6CC229EA2D72D9E08D8CBCF5E0C855F1F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MaybeNullAttribute__ctor_m32739F6CC229EA2D72D9E08D8CBCF5E0C855F1F9_RuntimeMethod_var, NULL, NULL, NULL);
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
// System.Void System.Diagnostics.CodeAnalysis.NotNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullAttribute__ctor_mAAA72297FF34F50A7367BD9EB75D37692DD210A6 (NotNullAttribute_t1F2EB6DD183FB972F65C945A4ABB7B98D3E5B53D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotNullAttribute__ctor_mAAA72297FF34F50A7367BD9EB75D37692DD210A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NotNullAttribute__ctor_mAAA72297FF34F50A7367BD9EB75D37692DD210A6_RuntimeMethod_var, NULL, NULL, NULL);
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
// System.Void System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaybeNullWhenAttribute__ctor_m6C68C2178399E543D4BEDECDC4B7BC08A6A57A10 (MaybeNullWhenAttribute_t46184905D347069E45989DAAF4D45CCF63F9DFDF* __this, bool ___returnValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeNullWhenAttribute__ctor_m6C68C2178399E543D4BEDECDC4B7BC08A6A57A10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MaybeNullWhenAttribute__ctor_m6C68C2178399E543D4BEDECDC4B7BC08A6A57A10_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___returnValue0;
		__this->___U3CReturnValueU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute::get_ReturnValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaybeNullWhenAttribute_get_ReturnValue_m8F84B115F663BAB37BDE43D720271C017472F55D (MaybeNullWhenAttribute_t46184905D347069E45989DAAF4D45CCF63F9DFDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaybeNullWhenAttribute_get_ReturnValue_m8F84B115F663BAB37BDE43D720271C017472F55D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MaybeNullWhenAttribute_get_ReturnValue_m8F84B115F663BAB37BDE43D720271C017472F55D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = __this->___U3CReturnValueU3Ek__BackingField_0;
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
// System.Void System.Diagnostics.CodeAnalysis.NotNullWhenAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullWhenAttribute__ctor_m77BC46F20D0BD5DF984EF50530614B913F6884FF (NotNullWhenAttribute_t6F0E2683A4CC098CDE13536752B9EB75F4CAA2AD* __this, bool ___returnValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotNullWhenAttribute__ctor_m77BC46F20D0BD5DF984EF50530614B913F6884FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NotNullWhenAttribute__ctor_m77BC46F20D0BD5DF984EF50530614B913F6884FF_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___returnValue0;
		__this->___U3CReturnValueU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Diagnostics.CodeAnalysis.NotNullWhenAttribute::get_ReturnValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotNullWhenAttribute_get_ReturnValue_mFA4D860BC569FC15FE9DDF29265CA785AF99FAE9 (NotNullWhenAttribute_t6F0E2683A4CC098CDE13536752B9EB75F4CAA2AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotNullWhenAttribute_get_ReturnValue_mFA4D860BC569FC15FE9DDF29265CA785AF99FAE9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NotNullWhenAttribute_get_ReturnValue_mFA4D860BC569FC15FE9DDF29265CA785AF99FAE9_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = __this->___U3CReturnValueU3Ek__BackingField_0;
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
// System.Void System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullIfNotNullAttribute__ctor_m889C7B1596C7A692671BCD8C2437021ECDFB487E (NotNullIfNotNullAttribute_t92EC04B28E277E2B4177EC29C443059AD89478D3* __this, String_t* ___parameterName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotNullIfNotNullAttribute__ctor_m889C7B1596C7A692671BCD8C2437021ECDFB487E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NotNullIfNotNullAttribute__ctor_m889C7B1596C7A692671BCD8C2437021ECDFB487E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___parameterName0;
		__this->___U3CParameterNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParameterNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute::get_ParameterName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotNullIfNotNullAttribute_get_ParameterName_m1034A18E85A57A86420EC7C24C3454FF5F73BFE7 (NotNullIfNotNullAttribute_t92EC04B28E277E2B4177EC29C443059AD89478D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotNullIfNotNullAttribute_get_ParameterName_m1034A18E85A57A86420EC7C24C3454FF5F73BFE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NotNullIfNotNullAttribute_get_ParameterName_m1034A18E85A57A86420EC7C24C3454FF5F73BFE7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = __this->___U3CParameterNameU3Ek__BackingField_0;
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
// System.Void System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoesNotReturnAttribute__ctor_mAE42FD76483594A6528BDBD5C0091EFE47902769 (DoesNotReturnAttribute_tEAE6E481E4AC4D4F3165E84FFB2F4DE94B21E8E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoesNotReturnAttribute__ctor_mAE42FD76483594A6528BDBD5C0091EFE47902769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DoesNotReturnAttribute__ctor_mAE42FD76483594A6528BDBD5C0091EFE47902769_RuntimeMethod_var, NULL, NULL, NULL);
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
// System.Void System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoesNotReturnIfAttribute__ctor_mD9B77EA68A51C8571CFC97E720376E423B612871 (DoesNotReturnIfAttribute_t765AE63CD41E0B2F1EEAE0D3D1836D8A1A901D53* __this, bool ___parameterValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoesNotReturnIfAttribute__ctor_mD9B77EA68A51C8571CFC97E720376E423B612871_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DoesNotReturnIfAttribute__ctor_mD9B77EA68A51C8571CFC97E720376E423B612871_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___parameterValue0;
		__this->___U3CParameterValueU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute::get_ParameterValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DoesNotReturnIfAttribute_get_ParameterValue_m6E1FE9D60E88A41F47FC27B2D9873C29D62A370E (DoesNotReturnIfAttribute_t765AE63CD41E0B2F1EEAE0D3D1836D8A1A901D53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoesNotReturnIfAttribute_get_ParameterValue_m6E1FE9D60E88A41F47FC27B2D9873C29D62A370E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DoesNotReturnIfAttribute_get_ParameterValue_m6E1FE9D60E88A41F47FC27B2D9873C29D62A370E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = __this->___U3CParameterValueU3Ek__BackingField_0;
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
// System.Void System.Diagnostics.CodeAnalysis.MemberNotNullAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberNotNullAttribute__ctor_m870A9F5756D151AAA3CE13DAC26B9190BC035D07 (MemberNotNullAttribute_t923B07AE3FD076431CA77D5CA6F2BFBC93FEE5DD* __this, String_t* ___member0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberNotNullAttribute__ctor_m870A9F5756D151AAA3CE13DAC26B9190BC035D07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MemberNotNullAttribute__ctor_m870A9F5756D151AAA3CE13DAC26B9190BC035D07_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2 = ___member0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		__this->___U3CMembersU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMembersU3Ek__BackingField_0), (void*)L_1);
		return;
	}
}
// System.Void System.Diagnostics.CodeAnalysis.MemberNotNullAttribute::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberNotNullAttribute__ctor_mA7E7806698BC40161AC9BB17AF8D028229CF718D (MemberNotNullAttribute_t923B07AE3FD076431CA77D5CA6F2BFBC93FEE5DD* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___members0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberNotNullAttribute__ctor_mA7E7806698BC40161AC9BB17AF8D028229CF718D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MemberNotNullAttribute__ctor_mA7E7806698BC40161AC9BB17AF8D028229CF718D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___members0;
		__this->___U3CMembersU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMembersU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String[] System.Diagnostics.CodeAnalysis.MemberNotNullAttribute::get_Members()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MemberNotNullAttribute_get_Members_m3422809298A8D4747AAEBA0B2ED7D3ACEA7DFBB0 (MemberNotNullAttribute_t923B07AE3FD076431CA77D5CA6F2BFBC93FEE5DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberNotNullAttribute_get_Members_m3422809298A8D4747AAEBA0B2ED7D3ACEA7DFBB0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MemberNotNullAttribute_get_Members_m3422809298A8D4747AAEBA0B2ED7D3ACEA7DFBB0_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CMembersU3Ek__BackingField_0;
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
// System.Void System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::.ctor(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberNotNullWhenAttribute__ctor_m8E4147480200AE7BAE244B03AAC3A38CB372F88B (MemberNotNullWhenAttribute_t9AC9858819AA7CF04AF802B195577E442BD3E7D4* __this, bool ___returnValue0, String_t* ___member1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberNotNullWhenAttribute__ctor_m8E4147480200AE7BAE244B03AAC3A38CB372F88B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MemberNotNullWhenAttribute__ctor_m8E4147480200AE7BAE244B03AAC3A38CB372F88B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___returnValue0;
		__this->___U3CReturnValueU3Ek__BackingField_0 = L_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___member1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		__this->___U3CMembersU3Ek__BackingField_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMembersU3Ek__BackingField_1), (void*)L_2);
		return;
	}
}
// System.Void System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::.ctor(System.Boolean,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberNotNullWhenAttribute__ctor_m36FF22AFBA6FE8B4AE4B59CE126124505589EBCA (MemberNotNullWhenAttribute_t9AC9858819AA7CF04AF802B195577E442BD3E7D4* __this, bool ___returnValue0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___members1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberNotNullWhenAttribute__ctor_m36FF22AFBA6FE8B4AE4B59CE126124505589EBCA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MemberNotNullWhenAttribute__ctor_m36FF22AFBA6FE8B4AE4B59CE126124505589EBCA_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___returnValue0;
		__this->___U3CReturnValueU3Ek__BackingField_0 = L_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___members1;
		__this->___U3CMembersU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMembersU3Ek__BackingField_1), (void*)L_1);
		return;
	}
}
// System.Boolean System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::get_ReturnValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberNotNullWhenAttribute_get_ReturnValue_m4070B26434F0D353CE80E6AFE1F8509D935D0E06 (MemberNotNullWhenAttribute_t9AC9858819AA7CF04AF802B195577E442BD3E7D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberNotNullWhenAttribute_get_ReturnValue_m4070B26434F0D353CE80E6AFE1F8509D935D0E06_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MemberNotNullWhenAttribute_get_ReturnValue_m4070B26434F0D353CE80E6AFE1F8509D935D0E06_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = __this->___U3CReturnValueU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String[] System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::get_Members()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MemberNotNullWhenAttribute_get_Members_m6BE8981C68A6B56012B1ECEDAC7896CE29FFCAD3 (MemberNotNullWhenAttribute_t9AC9858819AA7CF04AF802B195577E442BD3E7D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberNotNullWhenAttribute_get_Members_m6BE8981C68A6B56012B1ECEDAC7896CE29FFCAD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MemberNotNullWhenAttribute_get_Members_m6BE8981C68A6B56012B1ECEDAC7896CE29FFCAD3_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CMembersU3Ek__BackingField_1;
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
// System.Void Microsoft.AspNetCore.Http.CookieOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieOptions__ctor_m339CC177B3987A3DEA60500D3E9CFF7F6F1C3393 (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieOptions__ctor_m339CC177B3987A3DEA60500D3E9CFF7F6F1C3393_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CookieOptions__ctor_m339CC177B3987A3DEA60500D3E9CFF7F6F1C3393_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__this->___U3CSameSiteU3Ek__BackingField_4 = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CookieOptions_set_Path_mAACBF590C1BE28A9058EF754E4292F4C04CAED1A_inline(__this, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		return;
	}
}
// System.String Microsoft.AspNetCore.Http.CookieOptions::get_Domain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CookieOptions_get_Domain_m6F8CA4FE577CDF48538D30DF6E949E9692C07749 (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieOptions_get_Domain_m6F8CA4FE577CDF48538D30DF6E949E9692C07749_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CookieOptions_get_Domain_m6F8CA4FE577CDF48538D30DF6E949E9692C07749_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = __this->___U3CDomainU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.CookieOptions::set_Domain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieOptions_set_Domain_m71D3A5117D290957133C6416D6D06549ABC2D9B2 (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieOptions_set_Domain_m71D3A5117D290957133C6416D6D06549ABC2D9B2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CookieOptions_set_Domain_m71D3A5117D290957133C6416D6D06549ABC2D9B2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___value0;
		__this->___U3CDomainU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDomainU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Microsoft.AspNetCore.Http.CookieOptions::get_Path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CookieOptions_get_Path_m4D16D025470F6A4120A05D92A3132A8BFDDD1C3A (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieOptions_get_Path_m4D16D025470F6A4120A05D92A3132A8BFDDD1C3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CookieOptions_get_Path_m4D16D025470F6A4120A05D92A3132A8BFDDD1C3A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = __this->___U3CPathU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.CookieOptions::set_Path(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieOptions_set_Path_mAACBF590C1BE28A9058EF754E4292F4C04CAED1A (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieOptions_set_Path_mAACBF590C1BE28A9058EF754E4292F4C04CAED1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CookieOptions_set_Path_mAACBF590C1BE28A9058EF754E4292F4C04CAED1A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___value0;
		__this->___U3CPathU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPathU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Nullable`1<System.DateTimeOffset> Microsoft.AspNetCore.Http.CookieOptions::get_Expires()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B CookieOptions_get_Expires_mA93DC8625C1B7D080A942CBF5C3262641E25910C (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieOptions_get_Expires_mA93DC8625C1B7D080A942CBF5C3262641E25910C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CookieOptions_get_Expires_mA93DC8625C1B7D080A942CBF5C3262641E25910C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_0 = __this->___U3CExpiresU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.CookieOptions::set_Expires(System.Nullable`1<System.DateTimeOffset>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieOptions_set_Expires_m8C6B427CC0B4F8B0A72C351233E33BF0DA371A79 (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieOptions_set_Expires_m8C6B427CC0B4F8B0A72C351233E33BF0DA371A79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CookieOptions_set_Expires_m8C6B427CC0B4F8B0A72C351233E33BF0DA371A79_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B L_0 = ___value0;
		__this->___U3CExpiresU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean Microsoft.AspNetCore.Http.CookieOptions::get_Secure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CookieOptions_get_Secure_m4F217C7A6F55DB7B4F5FD388B78D2950373BAC57 (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieOptions_get_Secure_m4F217C7A6F55DB7B4F5FD388B78D2950373BAC57_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CookieOptions_get_Secure_m4F217C7A6F55DB7B4F5FD388B78D2950373BAC57_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = __this->___U3CSecureU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.CookieOptions::set_Secure(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieOptions_set_Secure_m8E8FF577CE39B2AA64A17D118B418A6508CB40F6 (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieOptions_set_Secure_m8E8FF577CE39B2AA64A17D118B418A6508CB40F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CookieOptions_set_Secure_m8E8FF577CE39B2AA64A17D118B418A6508CB40F6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = ___value0;
		__this->___U3CSecureU3Ek__BackingField_3 = L_0;
		return;
	}
}
// Microsoft.AspNetCore.Http.SameSiteMode Microsoft.AspNetCore.Http.CookieOptions::get_SameSite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CookieOptions_get_SameSite_m3F4A4DD1C8A7664F1BB4683ECEFD5ECAFA3D1A5D (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieOptions_get_SameSite_m3F4A4DD1C8A7664F1BB4683ECEFD5ECAFA3D1A5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CookieOptions_get_SameSite_m3F4A4DD1C8A7664F1BB4683ECEFD5ECAFA3D1A5D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->___U3CSameSiteU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.CookieOptions::set_SameSite(Microsoft.AspNetCore.Http.SameSiteMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieOptions_set_SameSite_m791FD07EBC5D6404CA5455018DA61B42A2C52112 (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieOptions_set_SameSite_m791FD07EBC5D6404CA5455018DA61B42A2C52112_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CookieOptions_set_SameSite_m791FD07EBC5D6404CA5455018DA61B42A2C52112_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___value0;
		__this->___U3CSameSiteU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean Microsoft.AspNetCore.Http.CookieOptions::get_HttpOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CookieOptions_get_HttpOnly_mC66C6CAE359E1AB77E75520E5E9DC9ECB468F654 (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieOptions_get_HttpOnly_mC66C6CAE359E1AB77E75520E5E9DC9ECB468F654_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CookieOptions_get_HttpOnly_mC66C6CAE359E1AB77E75520E5E9DC9ECB468F654_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = __this->___U3CHttpOnlyU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.CookieOptions::set_HttpOnly(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieOptions_set_HttpOnly_m18507C5C80977269C43A2698C5307ED4D1ACD8C2 (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieOptions_set_HttpOnly_m18507C5C80977269C43A2698C5307ED4D1ACD8C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CookieOptions_set_HttpOnly_m18507C5C80977269C43A2698C5307ED4D1ACD8C2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = ___value0;
		__this->___U3CHttpOnlyU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Nullable`1<System.TimeSpan> Microsoft.AspNetCore.Http.CookieOptions::get_MaxAge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 CookieOptions_get_MaxAge_mE1AF0CCD003D672223C8516CC22911152D674271 (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieOptions_get_MaxAge_mE1AF0CCD003D672223C8516CC22911152D674271_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CookieOptions_get_MaxAge_mE1AF0CCD003D672223C8516CC22911152D674271_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = __this->___U3CMaxAgeU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.CookieOptions::set_MaxAge(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieOptions_set_MaxAge_m1FF4FF2475255AB4330A0DDF123A945F1F8E70E2 (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieOptions_set_MaxAge_m1FF4FF2475255AB4330A0DDF123A945F1F8E70E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CookieOptions_set_MaxAge_m1FF4FF2475255AB4330A0DDF123A945F1F8E70E2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = ___value0;
		__this->___U3CMaxAgeU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean Microsoft.AspNetCore.Http.CookieOptions::get_IsEssential()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CookieOptions_get_IsEssential_m08CA8418B3C39F1EE00DC85478542C3F000E58BB (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieOptions_get_IsEssential_m08CA8418B3C39F1EE00DC85478542C3F000E58BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CookieOptions_get_IsEssential_m08CA8418B3C39F1EE00DC85478542C3F000E58BB_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = __this->___U3CIsEssentialU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.CookieOptions::set_IsEssential(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookieOptions_set_IsEssential_mD003906A4005E8A3003FD0F704AEE3905524CB87 (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieOptions_set_IsEssential_mD003906A4005E8A3003FD0F704AEE3905524CB87_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CookieOptions_set_IsEssential_mD003906A4005E8A3003FD0F704AEE3905524CB87_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = ___value0;
		__this->___U3CIsEssentialU3Ek__BackingField_7 = L_0;
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
// System.String Microsoft.AspNetCore.Http.WebSocketAcceptContext::get_SubProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketAcceptContext_get_SubProtocol_mEC2110857323327AE239BD6D6A5E64638BF2EEBE (WebSocketAcceptContext_t4A4059BD8C933814FBF08C4FE0D08032E5541384* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketAcceptContext_get_SubProtocol_mEC2110857323327AE239BD6D6A5E64638BF2EEBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WebSocketAcceptContext_get_SubProtocol_mEC2110857323327AE239BD6D6A5E64638BF2EEBE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = __this->___U3CSubProtocolU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.WebSocketAcceptContext::set_SubProtocol(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketAcceptContext_set_SubProtocol_m426F1ADA8D57971A31EA19B3D2141DE97EDA71A8 (WebSocketAcceptContext_t4A4059BD8C933814FBF08C4FE0D08032E5541384* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketAcceptContext_set_SubProtocol_m426F1ADA8D57971A31EA19B3D2141DE97EDA71A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WebSocketAcceptContext_set_SubProtocol_m426F1ADA8D57971A31EA19B3D2141DE97EDA71A8_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___value0;
		__this->___U3CSubProtocolU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSubProtocolU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Http.WebSocketAcceptContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketAcceptContext__ctor_m53A3E89BA4D4552D77F24FD6DACDBBB38A6864E4 (WebSocketAcceptContext_t4A4059BD8C933814FBF08C4FE0D08032E5541384* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketAcceptContext__ctor_m53A3E89BA4D4552D77F24FD6DACDBBB38A6864E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WebSocketAcceptContext__ctor_m53A3E89BA4D4552D77F24FD6DACDBBB38A6864E4_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeatureCollection__ctor_m2B04E053D56130600AC53F5A88531DD175ED54D2 (FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureCollection__ctor_m2B04E053D56130600AC53F5A88531DD175ED54D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FeatureCollection__ctor_m2B04E053D56130600AC53F5A88531DD175ED54D2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection::.ctor(Microsoft.AspNetCore.Http.Features.IFeatureCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeatureCollection__ctor_mE6986C2E4024FFA00001AA4A3003A17EE4E37BEF (FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* __this, RuntimeObject* ___defaults0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureCollection__ctor_mE6986C2E4024FFA00001AA4A3003A17EE4E37BEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FeatureCollection__ctor_mE6986C2E4024FFA00001AA4A3003A17EE4E37BEF_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___defaults0;
		__this->____defaults_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____defaults_1), (void*)L_0);
		return;
	}
}
// System.Int32 Microsoft.AspNetCore.Http.Features.FeatureCollection::get_Revision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FeatureCollection_get_Revision_m3DC4BBEC33136EAD22EBFB6A6A420AA21CA037D7 (FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureCollection_get_Revision_m3DC4BBEC33136EAD22EBFB6A6A420AA21CA037D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFeatureCollection_t06D0760E0994CEA073C4481013861DEF0D029A44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FeatureCollection_get_Revision_m3DC4BBEC33136EAD22EBFB6A6A420AA21CA037D7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	RuntimeObject* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	RuntimeObject* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		int32_t L_0 = __this->____containerRevision_3;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = __this->____defaults_1;
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_1;
		goto IL_001a;
	}

IL_0015:
	{
		NullCheck(G_B2_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Microsoft.AspNetCore.Http.Features.IFeatureCollection::get_Revision() */, IFeatureCollection_t06D0760E0994CEA073C4481013861DEF0D029A44_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
	}

IL_001a:
	{
		return ((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0));
	}
}
// System.Boolean Microsoft.AspNetCore.Http.Features.FeatureCollection::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FeatureCollection_get_IsReadOnly_mB0954083A801D92B930D07B66BE244C658DE0BA8 (FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureCollection_get_IsReadOnly_mB0954083A801D92B930D07B66BE244C658DE0BA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FeatureCollection_get_IsReadOnly_mB0954083A801D92B930D07B66BE244C658DE0BA8_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
// System.Object Microsoft.AspNetCore.Http.Features.FeatureCollection::get_Item(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FeatureCollection_get_Item_mB5F9CADC748D8F2AE8D55B8464A05EE5888E860E (FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* __this, Type_t* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureCollection_get_Item_mB5F9CADC748D8F2AE8D55B8464A05EE5888E860E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t7AE3EBA7008B31E9D8A2BE7AC43EC4189B67D06A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFeatureCollection_t06D0760E0994CEA073C4481013861DEF0D029A44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FeatureCollection_get_Item_mB5F9CADC748D8F2AE8D55B8464A05EE5888E860E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		Type_t* L_0 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FeatureCollection_get_Item_mB5F9CADC748D8F2AE8D55B8464A05EE5888E860E_RuntimeMethod_var)));
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->____features_2;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_4 = __this->____features_2;
		Type_t* L_5 = ___key0;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker2< bool, Type_t*, RuntimeObject** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t7AE3EBA7008B31E9D8A2BE7AC43EC4189B67D06A_il2cpp_TypeInfo_var, L_4, L_5, (&V_0));
		if (L_6)
		{
			goto IL_003f;
		}
	}

IL_002c:
	{
		RuntimeObject* L_7 = __this->____defaults_1;
		RuntimeObject* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_0038;
		}
	}
	{
		return NULL;
	}

IL_0038:
	{
		Type_t* L_9 = ___key0;
		NullCheck(G_B6_0);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(2 /* System.Object Microsoft.AspNetCore.Http.Features.IFeatureCollection::get_Item(System.Type) */, IFeatureCollection_t06D0760E0994CEA073C4481013861DEF0D029A44_il2cpp_TypeInfo_var, G_B6_0, L_9);
		return L_10;
	}

IL_003f:
	{
		RuntimeObject* L_11 = V_0;
		return L_11;
	}
}
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection::set_Item(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeatureCollection_set_Item_m58354C08B3F8DE27DB7A656D2E8510B80461EEF7 (FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* __this, Type_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureCollection_set_Item_m58354C08B3F8DE27DB7A656D2E8510B80461EEF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t7AE3EBA7008B31E9D8A2BE7AC43EC4189B67D06A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FeatureCollection_set_Item_m58354C08B3F8DE27DB7A656D2E8510B80461EEF7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Type_t* L_0 = ___key0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FeatureCollection_set_Item_m58354C08B3F8DE27DB7A656D2E8510B80461EEF7_RuntimeMethod_var)));
	}

IL_0014:
	{
		RuntimeObject* L_3 = ___value1;
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_4 = __this->____features_2;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject* L_5 = __this->____features_2;
		Type_t* L_6 = ___key0;
		NullCheck(L_5);
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, Type_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Object>::Remove(TKey) */, IDictionary_2_t7AE3EBA7008B31E9D8A2BE7AC43EC4189B67D06A_il2cpp_TypeInfo_var, L_5, L_6);
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_8 = __this->____containerRevision_3;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memory_barrier();
		__this->____containerRevision_3 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		RuntimeObject* L_9 = __this->____features_2;
		if (L_9)
		{
			goto IL_0053;
		}
	}
	{
		Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* L_10 = (Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5*)il2cpp_codegen_object_new(Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E(L_10, Dictionary_2__ctor_m84DCABCA6F8E90C1A9C54403427A93C6CA760A1E_RuntimeMethod_var);
		__this->____features_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____features_2), (void*)L_10);
	}

IL_0053:
	{
		RuntimeObject* L_11 = __this->____features_2;
		Type_t* L_12 = ___key0;
		RuntimeObject* L_13 = ___value1;
		NullCheck(L_11);
		InterfaceActionInvoker2< Type_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t7AE3EBA7008B31E9D8A2BE7AC43EC4189B67D06A_il2cpp_TypeInfo_var, L_11, L_12, L_13);
		int32_t L_14 = __this->____containerRevision_3;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memory_barrier();
		__this->____containerRevision_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
// System.Collections.IEnumerator Microsoft.AspNetCore.Http.Features.FeatureCollection::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FeatureCollection_System_Collections_IEnumerable_GetEnumerator_m965DB7233B7DDAC1643943D0C2BBFD25A3E5733D (FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureCollection_System_Collections_IEnumerable_GetEnumerator_m965DB7233B7DDAC1643943D0C2BBFD25A3E5733D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FeatureCollection_System_Collections_IEnumerable_GetEnumerator_m965DB7233B7DDAC1643943D0C2BBFD25A3E5733D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = FeatureCollection_GetEnumerator_mC2CBFF97EA1B89BC783A739D64F05C804C7CA432(__this, NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>> Microsoft.AspNetCore.Http.Features.FeatureCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FeatureCollection_GetEnumerator_mC2CBFF97EA1B89BC783A739D64F05C804C7CA432 (FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureCollection_GetEnumerator_mC2CBFF97EA1B89BC783A739D64F05C804C7CA432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FeatureCollection_GetEnumerator_mC2CBFF97EA1B89BC783A739D64F05C804C7CA432_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251* L_0 = (U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251*)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetEnumeratorU3Ed__14__ctor_m7F6D5E1B213B61CF867ED0B4EF3208B8F72E2C3E(L_0, 0, NULL);
		U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeatureCollection__cctor_m9CF4E7510A7EE5122BD7B91C8B406EB01910D74E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureCollection__cctor_m9CF4E7510A7EE5122BD7B91C8B406EB01910D74E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyComparer_t301D522C8DA2540FE01BB6FA47133C86C917B249_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FeatureCollection__cctor_m9CF4E7510A7EE5122BD7B91C8B406EB01910D74E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyComparer_t301D522C8DA2540FE01BB6FA47133C86C917B249* L_0 = (KeyComparer_t301D522C8DA2540FE01BB6FA47133C86C917B249*)il2cpp_codegen_object_new(KeyComparer_t301D522C8DA2540FE01BB6FA47133C86C917B249_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		KeyComparer__ctor_m88C43C1D215AFD287F3CDC22CE48684F9AFA9D68(L_0, NULL);
		((FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6_StaticFields*)il2cpp_codegen_static_fields_for(FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6_il2cpp_TypeInfo_var))->___FeatureKeyComparer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6_StaticFields*)il2cpp_codegen_static_fields_for(FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6_il2cpp_TypeInfo_var))->___FeatureKeyComparer_0), (void*)L_0);
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
// System.Boolean Microsoft.AspNetCore.Http.Features.FeatureCollection/KeyComparer::Equals(System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyComparer_Equals_m6CA552F95B1CAAE62E17E894BB03E25B7E201CAA (KeyComparer_t301D522C8DA2540FE01BB6FA47133C86C917B249* __this, KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA ___x0, KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyComparer_Equals_m6CA552F95B1CAAE62E17E894BB03E25B7E201CAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, KeyComparer_Equals_m6CA552F95B1CAAE62E17E894BB03E25B7E201CAA_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Type_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_inline((&___x0), KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var);
		Type_t* L_1;
		L_1 = KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_inline((&___y1), KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(125 /* System.Boolean System.Type::Equals(System.Type) */, L_0, L_1);
		return L_2;
	}
}
// System.Int32 Microsoft.AspNetCore.Http.Features.FeatureCollection/KeyComparer::GetHashCode(System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyComparer_GetHashCode_m7316DA631F073371A4295B536E3E467973A1D0A8 (KeyComparer_t301D522C8DA2540FE01BB6FA47133C86C917B249* __this, KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyComparer_GetHashCode_m7316DA631F073371A4295B536E3E467973A1D0A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, KeyComparer_GetHashCode_m7316DA631F073371A4295B536E3E467973A1D0A8_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Type_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_inline((&___obj0), KeyValuePair_2_get_Key_m94FB4DC031581990488B18A4B232F1E0661E51E6_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/KeyComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyComparer__ctor_m88C43C1D215AFD287F3CDC22CE48684F9AFA9D68 (KeyComparer_t301D522C8DA2540FE01BB6FA47133C86C917B249* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyComparer__ctor_m88C43C1D215AFD287F3CDC22CE48684F9AFA9D68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, KeyComparer__ctor_m88C43C1D215AFD287F3CDC22CE48684F9AFA9D68_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14__ctor_m7F6D5E1B213B61CF867ED0B4EF3208B8F72E2C3E (U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__14__ctor_m7F6D5E1B213B61CF867ED0B4EF3208B8F72E2C3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CGetEnumeratorU3Ed__14__ctor_m7F6D5E1B213B61CF867ED0B4EF3208B8F72E2C3E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mD8856657A70E02CB34F584D5F718578B03136041 (U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mD8856657A70E02CB34F584D5F718578B03136041_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mD8856657A70E02CB34F584D5F718578B03136041_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)-4))))
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_0041;
			}
			case 4:
			{
				goto IL_0041;
			}
			case 5:
			{
				goto IL_002d;
			}
			case 6:
			{
				goto IL_0037;
			}
		}
	}
	{
		return;
	}

IL_002d:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_mEF9D21CEEC64FBD7815450448807EA6011525A08(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			goto IL_0041;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally2_m6393520A7090B5F30D14BAF07B40E375E90EABD1(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 1);
			goto IL_0041;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__14_MoveNext_mD92D5F889F5D27C0638F0C6E03203EF0A0800069 (U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Except_TisKeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA_mA0E92010DB95582B3DDE3F3430C0E2E10C265BEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tD1B1F221C8BE531D247CE725042F68B1231283A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA12430EC47EF135D6EAFB804654D4C5A48E762F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__14_MoveNext_mD92D5F889F5D27C0638F0C6E03203EF0A0800069_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* V_2 = NULL;
	KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA V_5;
	memset((&V_5), 0, sizeof(V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CGetEnumeratorU3Ed__14_MoveNext_mD92D5F889F5D27C0638F0C6E03203EF0A0800069_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251* G_B11_0 = NULL;
	U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251* G_B10_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251* G_B12_1 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0124:
			{// begin fault (depth: 1)
				U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mD8856657A70E02CB34F584D5F718578B03136041(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* L_1 = __this->___U3CU3E4__this_2;
				V_2 = L_1;
				int32_t L_2 = V_1;
				switch (L_2)
				{
					case 0:
					{
						goto IL_0027_1;
					}
					case 1:
					{
						goto IL_0072_1;
					}
					case 2:
					{
						goto IL_00fe_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_012b;
			}

IL_0027_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* L_3 = V_2;
				NullCheck(L_3);
				RuntimeObject* L_4 = L_3->____features_2;
				if (!L_4)
				{
					goto IL_0094_1;
				}
			}
			{
				FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* L_5 = V_2;
				NullCheck(L_5);
				RuntimeObject* L_6 = L_5->____features_2;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>>::GetEnumerator() */, IEnumerable_1_tD1B1F221C8BE531D247CE725042F68B1231283A9_il2cpp_TypeInfo_var, L_6);
				__this->___U3CU3E7__wrap1_3 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)L_7);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_007a_1;
			}

IL_0051_1:
			{
				CHECK_PAUSE_POINT;
				RuntimeObject* L_8 = __this->___U3CU3E7__wrap1_3;
				NullCheck(L_8);
				KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA L_9;
				L_9 = InterfaceFuncInvoker0< KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>>::get_Current() */, IEnumerator_1_tA12430EC47EF135D6EAFB804654D4C5A48E762F9_il2cpp_TypeInfo_var, L_8);
				V_3 = L_9;
				KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA L_10 = V_3;
				__this->___U3CU3E2__current_1 = L_10;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___key_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___value_1), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_012b;
			}

IL_0072_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_007a_1:
			{
				RuntimeObject* L_11 = __this->___U3CU3E7__wrap1_3;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0051_1;
				}
			}
			{
				U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_mEF9D21CEEC64FBD7815450448807EA6011525A08(__this, NULL);
				__this->___U3CU3E7__wrap1_3 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)(RuntimeObject*)NULL);
			}

IL_0094_1:
			{
				FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* L_13 = V_2;
				NullCheck(L_13);
				RuntimeObject* L_14 = L_13->____defaults_1;
				if (!L_14)
				{
					goto IL_0120_1;
				}
			}
			{
				FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* L_15 = V_2;
				NullCheck(L_15);
				RuntimeObject* L_16 = L_15->____features_2;
				G_B10_0 = __this;
				if (!L_16)
				{
					G_B11_0 = __this;
					goto IL_00c0_1;
				}
			}
			{
				FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* L_17 = V_2;
				NullCheck(L_17);
				RuntimeObject* L_18 = L_17->____defaults_1;
				FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* L_19 = V_2;
				NullCheck(L_19);
				RuntimeObject* L_20 = L_19->____features_2;
				il2cpp_codegen_runtime_class_init_inline(FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6_il2cpp_TypeInfo_var);
				KeyComparer_t301D522C8DA2540FE01BB6FA47133C86C917B249* L_21 = ((FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6_StaticFields*)il2cpp_codegen_static_fields_for(FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6_il2cpp_TypeInfo_var))->___FeatureKeyComparer_0;
				RuntimeObject* L_22;
				L_22 = Enumerable_Except_TisKeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA_mA0E92010DB95582B3DDE3F3430C0E2E10C265BEE(L_18, L_20, L_21, Enumerable_Except_TisKeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA_mA0E92010DB95582B3DDE3F3430C0E2E10C265BEE_RuntimeMethod_var);
				G_B12_0 = L_22;
				G_B12_1 = G_B10_0;
				goto IL_00ca_1;
			}

IL_00c0_1:
			{
				FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* L_23 = V_2;
				NullCheck(L_23);
				RuntimeObject* L_24 = L_23->____defaults_1;
				V_4 = L_24;
				RuntimeObject* L_25 = V_4;
				G_B12_0 = L_25;
				G_B12_1 = G_B11_0;
			}

IL_00ca_1:
			{
				NullCheck(G_B12_0);
				RuntimeObject* L_26;
				L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>>::GetEnumerator() */, IEnumerable_1_tD1B1F221C8BE531D247CE725042F68B1231283A9_il2cpp_TypeInfo_var, G_B12_0);
				NullCheck(G_B12_1);
				G_B12_1->___U3CU3E7__wrap1_3 = L_26;
				Il2CppCodeGenWriteBarrier((void**)(&G_B12_1->___U3CU3E7__wrap1_3), (void*)L_26);
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
				goto IL_0106_1;
			}

IL_00de_1:
			{
				CHECK_PAUSE_POINT;
				RuntimeObject* L_27 = __this->___U3CU3E7__wrap1_3;
				NullCheck(L_27);
				KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA L_28;
				L_28 = InterfaceFuncInvoker0< KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>>::get_Current() */, IEnumerator_1_tA12430EC47EF135D6EAFB804654D4C5A48E762F9_il2cpp_TypeInfo_var, L_27);
				V_5 = L_28;
				KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA L_29 = V_5;
				__this->___U3CU3E2__current_1 = L_29;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___key_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___value_1), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_012b;
			}

IL_00fe_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
			}

IL_0106_1:
			{
				RuntimeObject* L_30 = __this->___U3CU3E7__wrap1_3;
				NullCheck(L_30);
				bool L_31;
				L_31 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_30);
				if (L_31)
				{
					goto IL_00de_1;
				}
			}
			{
				U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally2_m6393520A7090B5F30D14BAF07B40E375E90EABD1(__this, NULL);
				__this->___U3CU3E7__wrap1_3 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)(RuntimeObject*)NULL);
			}

IL_0120_1:
			{
				V_0 = (bool)0;
				goto IL_012b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012b:
	{
		bool L_32 = V_0;
		return L_32;
	}
}
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_mEF9D21CEEC64FBD7815450448807EA6011525A08 (U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_mEF9D21CEEC64FBD7815450448807EA6011525A08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally1_mEF9D21CEEC64FBD7815450448807EA6011525A08_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_3;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap1_3;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally2_m6393520A7090B5F30D14BAF07B40E375E90EABD1 (U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally2_m6393520A7090B5F30D14BAF07B40E375E90EABD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CGetEnumeratorU3Ed__14_U3CU3Em__Finally2_m6393520A7090B5F30D14BAF07B40E375E90EABD1_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_3;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap1_3;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Object> Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.Type,System.Object>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_TypeU2CSystem_ObjectU3EU3E_get_Current_mFD541D50F422EE0CD28B06372985C30800ECFAE3 (U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_TypeU2CSystem_ObjectU3EU3E_get_Current_mFD541D50F422EE0CD28B06372985C30800ECFAE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_TypeU2CSystem_ObjectU3EU3E_get_Current_mFD541D50F422EE0CD28B06372985C30800ECFAE3_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m94251EE0C5199B765A7307865CA7B1F953D2F345 (U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m94251EE0C5199B765A7307865CA7B1F953D2F345_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m94251EE0C5199B765A7307865CA7B1F953D2F345_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m94251EE0C5199B765A7307865CA7B1F953D2F345_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.AspNetCore.Http.Features.FeatureCollection/<GetEnumerator>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_m397B2267FD3DD92FB4A124DF30570F534F536627 (U3CGetEnumeratorU3Ed__14_t8ADC04E7B2E064D0207E0FDE4397E657A841D251* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_m397B2267FD3DD92FB4A124DF30570F534F536627_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_m397B2267FD3DD92FB4A124DF30570F534F536627_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA L_0 = __this->___U3CU3E2__current_1;
		KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA L_1 = L_0;
		RuntimeObject* L_2 = Box(KeyValuePair_2_tEB150CB79DEEFC9D74129B8A1EB95BF14AAF20DA_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CookieOptions_set_Path_mAACBF590C1BE28A9058EF754E4292F4C04CAED1A_inline (CookieOptions_t1601D99FA1A768E00E3A063774DD07083546E643* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CookieOptions_set_Path_mAACBF590C1BE28A9058EF754E4292F4C04CAED1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CookieOptions_set_Path_mAACBF590C1BE28A9058EF754E4292F4C04CAED1A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___value0;
		__this->___U3CPathU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPathU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
