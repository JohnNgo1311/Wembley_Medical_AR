﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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

// System.Action`1<System.Action>
struct Action_1_t3137749576010DD307B29662A2E47C43C7F7D04C;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Buffers.ArrayPool`1<System.Char>
struct ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B;
// Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1<System.Action>
struct ChangeTokenRegistration_1_tAC55EB34CD2A589FFDE276FBF20E6987055C3228;
// Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1<System.Object>
struct ChangeTokenRegistration_1_t8189B9CD59FF00416FDBD80E8F1F7022C5D9DF10;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53;
// System.Func`1<Microsoft.Extensions.Primitives.IChangeToken>
struct Func_1_t6C80A64083C62B959A18BE3345BBEDD49165891B;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8;
// System.Collections.Generic.IEnumerator`1<Microsoft.Extensions.Primitives.StringSegment>
struct IEnumerator_1_t5D2D2EC3372249244F38A97498BC93B976B9E399;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Extensions.Primitives.IChangeToken>
struct IReadOnlyList_1_t1B8586830493B3849734231A6150B4844C4BA276;
// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1/NoopDisposable<System.Action>
struct NoopDisposable_t6E2938636018B407457956874FE0BF6BD4331696;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IDisposable[]
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE;
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
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Assembly
struct Assembly_t;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// Microsoft.Extensions.Primitives.CancellationChangeToken
struct CancellationChangeToken_t8A239246F4A5926729773EADF24383304A99CFE4;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// Microsoft.Extensions.Primitives.CompositeChangeToken
struct CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t1FA21428DB08FE0D47D0D57D11EA9A8EF8386FAC;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// Microsoft.Extensions.Primitives.IChangeToken
struct IChangeToken_tB14C21F22F312048580D1201C9162D542478E1E8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tDEE701BD41E9E5D260606F79F75427B42C4CC0C0;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct IsByRefLikeAttribute_tE70BF3E95975D249311666CED7181199026A7C62;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tEFF56D0311066F5CDCF167C8390DE368804E5BF5;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
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
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// Microsoft.Extensions.Primitives.StringSegment
struct StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91;
// Microsoft.Extensions.Primitives.StringSegmentComparer
struct StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// System.Threading.TimerCallback
struct TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD;
// System.Type
struct Type_t;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.Extensions.Primitives.CancellationChangeToken/NullDisposable
struct NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783;
// Microsoft.Extensions.Primitives.ChangeToken/<>c
struct U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3137749576010DD307B29662A2E47C43C7F7D04C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChangeTokenRegistration_1_tAC55EB34CD2A589FFDE276FBF20E6987055C3228_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgument_t32AD450A3D33390C6B353D9285958924BE8941D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionResource_t432DBAAF27B4FCB46455FFC1DD2B1FF919883EB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IChangeToken_tB14C21F22F312048580D1201C9162D542478E1E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t56239D955EA743E49C018AB27DC01D6688C3858D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t1B8586830493B3849734231A6150B4844C4BA276_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0980062477F0BABC828F151DDEF5E66FB1026D9A;
IL2CPP_EXTERN_C String_t* _stringLiteral123EAF9538507C08A07445DAE9C88F0397B65DB2;
IL2CPP_EXTERN_C String_t* _stringLiteral23AAD24B88E1254E39EC85AA38C64D9187D6D7D4;
IL2CPP_EXTERN_C String_t* _stringLiteral413EC544BFFA4B43AA529368BCBB164E2778CA6F;
IL2CPP_EXTERN_C String_t* _stringLiteral5AE8234F3A25D04BF2F28CAD03A3E970785334E9;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralAE0B5180C14DE0B9488545AA41677AB561B37B31;
IL2CPP_EXTERN_C String_t* _stringLiteralAEBAFF7CF96ED14FE69438A6E7EB058295D4E7A5;
IL2CPP_EXTERN_C String_t* _stringLiteralAF7B6F2693161F3E2D2D919BBDBF555A5AD41F71;
IL2CPP_EXTERN_C String_t* _stringLiteralB5528CA07A43AEA4EFA2F7B2DEF38E0A5D87ECD6;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralF0611B3944B8BEC8B61CAE8B2170CBD1CF617E26;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChangeTokenRegistration_1__ctor_m1C7C24FD4002D0CB8692C4B353424C6143764755_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChangeToken_OnChange_m6707303C4B500A239C947C9869F205B4360560E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompositeChangeToken_OnChange_m2193D178F3DF8047C34B098A66F9E2273D9B8FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompositeChangeToken__ctor_m8D816C023F03F57286420B2A09E2EABFAF6299C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_System_Collections_IEnumerator_Reset_mF24ABCB4DEC32DF3A874FAAA9D8DBA461ADEE514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3E57006B1E4E3BF3DC969B90445C1E58B246619D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB4C51AD04BB1308274A370FED1FA4A1651C5766F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mCBCCB576B0AE4B4F273E4547424F1892F9AFEA10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mACBC5D11FA8B9B7269C23FAD9CC5B77EB29E2E7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringSegment_ThrowInvalidArguments_m20F7DC8E12CE9642291ABD1A8CDEA9185E1C4A8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringSegment_ThrowInvalidArguments_mF3FC47196407DFDB2F1A409DD14C4ABD7A2651BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringValues_CopyTo_m07B061281018E07B88B63A2460DF80E07493D6B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Add_m5BCF426EFF1E288E18D6897FA37BA058E34C11D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Clear_m5D403A5F69CBC382B4B8766A963F11FC7E604543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Remove_mA4CED1A746707984E2E37CD807ABF490DA9B88CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_Insert_m14199DDBBCC20EB7E0F19FC15AF46DD42CBC4DC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_RemoveAt_m0880F0AF13704148BFA86D7EC42E554F1F9CBBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_set_Item_m9AC23B767355DB1F49A7FE9DC87D138A048D7A6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentException_mAC8809CE1EEF0A27E0A8BAEBC535CD2719F81DB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentNullException_mC8181555627D844BE8402FEA5A0099A4E711E23B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowArgumentOutOfRangeException_m5753DB221AF0A5BD32B5B86378CF16954F34D7EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowInvalidOperationException_m2FA84AEC2C3CB1E961E316A09942EB7AA40A769D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowInvalidOperationException_m4809554DF34B714F5691F67D36D710825255EBDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnChangeU3Eb__0_0_mEF04A376EF86BDC978BFFD970D2BB4EB828EE25F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SR_t987EF062CD382CAD4B16483F7F0C0AE9FB7DB962_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91;;
struct StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_com;
struct StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_com;;
struct StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_pinvoke;
struct StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_pinvoke;;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
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
struct U3CModuleU3E_t0CCC198D81F73E2715E5E22C094A4E1009FF5264 
{
};

// System.Buffers.ArrayPool`1<System.Char>
struct ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B  : public RuntimeObject
{
};

struct ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_StaticFields
{
	// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::<Shared>k__BackingField
	ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* ___U3CSharedU3Ek__BackingField_0;
};

// Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1<System.Action>
struct ChangeTokenRegistration_1_tAC55EB34CD2A589FFDE276FBF20E6987055C3228  : public RuntimeObject
{
	// System.Func`1<Microsoft.Extensions.Primitives.IChangeToken> Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1::_changeTokenProducer
	Func_1_t6C80A64083C62B959A18BE3345BBEDD49165891B* ____changeTokenProducer_0;
	// System.Action`1<TState> Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1::_changeTokenConsumer
	Action_1_t3137749576010DD307B29662A2E47C43C7F7D04C* ____changeTokenConsumer_1;
	// TState Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1::_state
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____state_2;
	// System.IDisposable Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1::_disposable
	RuntimeObject* ____disposable_3;
};

struct ChangeTokenRegistration_1_tAC55EB34CD2A589FFDE276FBF20E6987055C3228_StaticFields
{
	// Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1/NoopDisposable<TState> Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1::_disposedSentinel
	NoopDisposable_t6E2938636018B407457956874FE0BF6BD4331696* ____disposedSentinel_4;
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

// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* ___s_emptyArray_5;
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
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B  : public RuntimeObject
{
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_kernelEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E* ____registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_state
	int32_t ____state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_threadIDExecutingCallbacks
	int32_t ____threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::_disposed
	bool ____disposed_11;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_executingCallback
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ____executingCallback_12;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_timer
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ____timer_13;
};

struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_StaticFields
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_canceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_canceledSource_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_neverCanceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_neverCanceledSource_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* ___s_timerCallback_14;
};

// Microsoft.Extensions.Primitives.ChangeToken
struct ChangeToken_tD05443EC4BCCC27B2258F738A70580A0E83E5FF4  : public RuntimeObject
{
};

// Microsoft.Extensions.Primitives.CompositeChangeToken
struct CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B  : public RuntimeObject
{
	// System.Object Microsoft.Extensions.Primitives.CompositeChangeToken::_callbackLock
	RuntimeObject* ____callbackLock_1;
	// System.Threading.CancellationTokenSource Microsoft.Extensions.Primitives.CompositeChangeToken::_cancellationTokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____cancellationTokenSource_2;
	// System.Boolean Microsoft.Extensions.Primitives.CompositeChangeToken::_registeredCallbackProxy
	bool ____registeredCallbackProxy_3;
	// System.Collections.Generic.List`1<System.IDisposable> Microsoft.Extensions.Primitives.CompositeChangeToken::_disposables
	List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* ____disposables_4;
	// System.Collections.Generic.IReadOnlyList`1<Microsoft.Extensions.Primitives.IChangeToken> Microsoft.Extensions.Primitives.CompositeChangeToken::<ChangeTokens>k__BackingField
	RuntimeObject* ___U3CChangeTokensU3Ek__BackingField_5;
	// System.Boolean Microsoft.Extensions.Primitives.CompositeChangeToken::<ActiveChangeCallbacks>k__BackingField
	bool ___U3CActiveChangeCallbacksU3Ek__BackingField_6;
};

struct CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B_StaticFields
{
	// System.Action`1<System.Object> Microsoft.Extensions.Primitives.CompositeChangeToken::_onChangeDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____onChangeDelegate_0;
};

// Microsoft.Extensions.Primitives.Extensions
struct Extensions_t80AA7337F3310ED66E16BD15D46C649DAC9682E2  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// FxResources.Microsoft.Extensions.Primitives.SR
struct SR_t987EF062CD382CAD4B16483F7F0C0AE9FB7DB962  : public RuntimeObject
{
};

// System.SR
struct SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF  : public RuntimeObject
{
};

struct SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_StaticFields
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

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
};

struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
};

// Microsoft.Extensions.Primitives.StringSegmentComparer
struct StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80  : public RuntimeObject
{
	// System.StringComparison Microsoft.Extensions.Primitives.StringSegmentComparer::<Comparison>k__BackingField
	int32_t ___U3CComparisonU3Ek__BackingField_2;
	// System.StringComparer Microsoft.Extensions.Primitives.StringSegmentComparer::<Comparer>k__BackingField
	StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___U3CComparerU3Ek__BackingField_3;
};

struct StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_StaticFields
{
	// Microsoft.Extensions.Primitives.StringSegmentComparer Microsoft.Extensions.Primitives.StringSegmentComparer::<Ordinal>k__BackingField
	StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* ___U3COrdinalU3Ek__BackingField_0;
	// Microsoft.Extensions.Primitives.StringSegmentComparer Microsoft.Extensions.Primitives.StringSegmentComparer::<OrdinalIgnoreCase>k__BackingField
	StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* ___U3COrdinalIgnoreCaseU3Ek__BackingField_1;
};

// Microsoft.Extensions.Primitives.ThrowHelper
struct ThrowHelper_tBD03CC198672BE086972C4B973D626627FDC0C21  : public RuntimeObject
{
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

// Microsoft.Extensions.Primitives.CancellationChangeToken/NullDisposable
struct NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783  : public RuntimeObject
{
};

struct NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783_StaticFields
{
	// Microsoft.Extensions.Primitives.CancellationChangeToken/NullDisposable Microsoft.Extensions.Primitives.CancellationChangeToken/NullDisposable::Instance
	NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783* ___Instance_0;
};

// Microsoft.Extensions.Primitives.ChangeToken/<>c
struct U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C  : public RuntimeObject
{
};

struct U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_StaticFields
{
	// Microsoft.Extensions.Primitives.ChangeToken/<>c Microsoft.Extensions.Primitives.ChangeToken/<>c::<>9
	U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C* ___U3CU3E9_0;
	// System.Action`1<System.Action> Microsoft.Extensions.Primitives.ChangeToken/<>c::<>9__0_0
	Action_1_t3137749576010DD307B29662A2E47C43C7F7D04C* ___U3CU3E9__0_0_1;
};

// System.ReadOnlyMemory`1<System.Char>
struct ReadOnlyMemory_1_t9495785584BC99CFCF956B34621F038E83C257D6 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::_source
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::_index
	int32_t ____index_1;
};

// System.Threading.AsyncFlowControl
struct AsyncFlowControl_t1BB65380CA8AA973CAE0814179796E762403EF92 
{
	// System.Boolean System.Threading.AsyncFlowControl::useEC
	bool ___useEC_0;
	// System.Threading.ExecutionContext System.Threading.AsyncFlowControl::_ec
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____ec_1;
	// System.Threading.Thread System.Threading.AsyncFlowControl::_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ____thread_2;
};
// Native definition for P/Invoke marshalling of System.Threading.AsyncFlowControl
struct AsyncFlowControl_t1BB65380CA8AA973CAE0814179796E762403EF92_marshaled_pinvoke
{
	int32_t ___useEC_0;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____ec_1;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ____thread_2;
};
// Native definition for COM marshalling of System.Threading.AsyncFlowControl
struct AsyncFlowControl_t1BB65380CA8AA973CAE0814179796E762403EF92_marshaled_com
{
	int32_t ___useEC_0;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____ec_1;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ____thread_2;
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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
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
struct EmbeddedAttribute_t1FA21428DB08FE0D47D0D57D11EA9A8EF8386FAC  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// Microsoft.Extensions.Internal.HashCodeCombiner
struct HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D 
{
	// System.Int64 Microsoft.Extensions.Internal.HashCodeCombiner::_combinedHash64
	int64_t ____combinedHash64_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Runtime.CompilerServices.IsByRefLikeAttribute
struct IsByRefLikeAttribute_tE70BF3E95975D249311666CED7181199026A7C62  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tEFF56D0311066F5CDCF167C8390DE368804E5BF5  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.OrdinalComparer
struct OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;
};

// Microsoft.Extensions.Primitives.StringSegment
struct StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 
{
	// System.String Microsoft.Extensions.Primitives.StringSegment::<Buffer>k__BackingField
	String_t* ___U3CBufferU3Ek__BackingField_1;
	// System.Int32 Microsoft.Extensions.Primitives.StringSegment::<Offset>k__BackingField
	int32_t ___U3COffsetU3Ek__BackingField_2;
	// System.Int32 Microsoft.Extensions.Primitives.StringSegment::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_3;
};

struct StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_StaticFields
{
	// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::Empty
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___Empty_0;
};
// Native definition for P/Invoke marshalling of Microsoft.Extensions.Primitives.StringSegment
struct StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_pinvoke
{
	char* ___U3CBufferU3Ek__BackingField_1;
	int32_t ___U3COffsetU3Ek__BackingField_2;
	int32_t ___U3CLengthU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Microsoft.Extensions.Primitives.StringSegment
struct StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_com
{
	Il2CppChar* ___U3CBufferU3Ek__BackingField_1;
	int32_t ___U3COffsetU3Ek__BackingField_2;
	int32_t ___U3CLengthU3Ek__BackingField_3;
};

// Microsoft.Extensions.Primitives.StringValues
struct StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 
{
	// System.Object Microsoft.Extensions.Primitives.StringValues::_values
	RuntimeObject* ____values_1;
};

struct StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_StaticFields
{
	// Microsoft.Extensions.Primitives.StringValues Microsoft.Extensions.Primitives.StringValues::Empty
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___Empty_0;
};
// Native definition for P/Invoke marshalling of Microsoft.Extensions.Primitives.StringValues
struct StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_marshaled_pinvoke
{
	Il2CppIUnknown* ____values_1;
};
// Native definition for COM marshalling of Microsoft.Extensions.Primitives.StringValues
struct StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_marshaled_com
{
	Il2CppIUnknown* ____values_1;
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

// Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t8151A26CD3CBDB0A7459E03783EB049C236DC107 
{
	// System.String Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass52_0::buffer
	String_t* ___buffer_0;
	// System.Int32 Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass52_0::offset
	int32_t ___offset_1;
	// System.Int32 Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass52_0::length
	int32_t ___length_2;
};

// Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass53_0
struct U3CU3Ec__DisplayClass53_0_t7945554BCBB566200645355E4BC14D4350FCF614 
{
	// System.Int32 Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass53_0::offset
	int32_t ___offset_0;
	// System.Int32 Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass53_0::length
	int32_t ___length_1;
};

// Microsoft.Extensions.Primitives.StringValues/Enumerator
struct Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A 
{
	// System.String[] Microsoft.Extensions.Primitives.StringValues/Enumerator::_values
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____values_0;
	// System.String Microsoft.Extensions.Primitives.StringValues/Enumerator::_current
	String_t* ____current_1;
	// System.Int32 Microsoft.Extensions.Primitives.StringValues/Enumerator::_index
	int32_t ____index_2;
};
// Native definition for P/Invoke marshalling of Microsoft.Extensions.Primitives.StringValues/Enumerator
struct Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_marshaled_pinvoke
{
	char** ____values_0;
	char* ____current_1;
	int32_t ____index_2;
};
// Native definition for COM marshalling of Microsoft.Extensions.Primitives.StringValues/Enumerator
struct Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_marshaled_com
{
	Il2CppChar** ____values_0;
	Il2CppChar* ____current_1;
	int32_t ____index_2;
};

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// Microsoft.Extensions.Primitives.CancellationChangeToken
struct CancellationChangeToken_t8A239246F4A5926729773EADF24383304A99CFE4  : public RuntimeObject
{
	// System.Boolean Microsoft.Extensions.Primitives.CancellationChangeToken::<ActiveChangeCallbacks>k__BackingField
	bool ___U3CActiveChangeCallbacksU3Ek__BackingField_0;
	// System.Threading.CancellationToken Microsoft.Extensions.Primitives.CancellationChangeToken::<Token>k__BackingField
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___U3CTokenU3Ek__BackingField_1;
};

// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
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

// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};

// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Microsoft.Extensions.Primitives.StringTokenizer
struct StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540 
{
	// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringTokenizer::_value
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ____value_0;
	// System.Char[] Microsoft.Extensions.Primitives.StringTokenizer::_separators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____separators_1;
};
// Native definition for P/Invoke marshalling of Microsoft.Extensions.Primitives.StringTokenizer
struct StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540_marshaled_pinvoke
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_pinvoke ____value_0;
	uint8_t* ____separators_1;
};
// Native definition for COM marshalling of Microsoft.Extensions.Primitives.StringTokenizer
struct StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540_marshaled_com
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_com ____value_0;
	uint8_t* ____separators_1;
};

// Microsoft.Extensions.Primitives.StringTokenizer/Enumerator
struct Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0 
{
	// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::_value
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ____value_0;
	// System.Char[] Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::_separators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____separators_1;
	// System.Int32 Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::_index
	int32_t ____index_2;
	// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::<Current>k__BackingField
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___U3CCurrentU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of Microsoft.Extensions.Primitives.StringTokenizer/Enumerator
struct Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_marshaled_pinvoke
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_pinvoke ____value_0;
	uint8_t* ____separators_1;
	int32_t ____index_2;
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_pinvoke ___U3CCurrentU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Microsoft.Extensions.Primitives.StringTokenizer/Enumerator
struct Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_marshaled_com
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_com ____value_0;
	uint8_t* ____separators_1;
	int32_t ____index_2;
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_com ___U3CCurrentU3Ek__BackingField_3;
};

// System.ReadOnlySpan`1<System.Char>
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Char>
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
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

// System.Action`1<System.Action>
struct Action_1_t3137749576010DD307B29662A2E47C43C7F7D04C  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`1<Microsoft.Extensions.Primitives.IChangeToken>
struct Func_1_t6C80A64083C62B959A18BE3345BBEDD49165891B  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
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

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Text.ValueStringBuilder
struct ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A 
{
	// System.Char[] System.Text.ValueStringBuilder::_arrayToReturnToPool
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____arrayToReturnToPool_0;
	// System.Span`1<System.Char> System.Text.ValueStringBuilder::_chars
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ____chars_1;
	// System.Int32 System.Text.ValueStringBuilder::_pos
	int32_t ____pos_2;
};
// Native definition for P/Invoke marshalling of System.Text.ValueStringBuilder
struct ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A_marshaled_pinvoke
{
	uint8_t* ____arrayToReturnToPool_0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ____chars_1;
	int32_t ____pos_2;
};
// Native definition for COM marshalling of System.Text.ValueStringBuilder
struct ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A_marshaled_com
{
	uint8_t* ____arrayToReturnToPool_0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ____chars_1;
	int32_t ____pos_2;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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

IL2CPP_EXTERN_C void StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_pinvoke(const StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91& unmarshaled, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_pinvoke_back(const StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_pinvoke& marshaled, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91& unmarshaled);
IL2CPP_EXTERN_C void StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_pinvoke_cleanup(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_com(const StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91& unmarshaled, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_com& marshaled);
IL2CPP_EXTERN_C void StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_com_back(const StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_com& marshaled, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91& unmarshaled);
IL2CPP_EXTERN_C void StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_com_cleanup(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_com& marshaled);

// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1<System.Char>::get_Shared()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_gshared_inline (const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Char>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Char>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.Span`1<System.Char>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Span`1<System.Char>::op_Implicit(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, const RuntimeMethod* method) ;
// System.Boolean System.Span`1<System.Char>::TryCopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::Fill(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1<System.Object>::.ctor(System.Func`1<Microsoft.Extensions.Primitives.IChangeToken>,System.Action`1<TState>,TState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeTokenRegistration_1__ctor_mEEC3D99ADC08A7B65B29E28630321677717943C3_gshared (ChangeTokenRegistration_1_t8189B9CD59FF00416FDBD80E8F1F7022C5D9DF10* __this, Func_1_t6C80A64083C62B959A18BE3345BBEDD49165891B* ___changeTokenProducer0, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___changeTokenConsumer1, RuntimeObject* ___state2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_mB210ED03D58BC227BCF20E83DC139FA0186B6A74_inline (const RuntimeMethod* method) ;
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_mB01B784566B8EC5ECAD0F9EC78A37BB0A36BF9C9 (const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m0E0E707439C7E3B85AF1309BB755B8155A605F0D (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method) ;
// System.Boolean System.AppContext::TryGetSwitch(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppContext_TryGetSwitch_mD2500DB32F941228B6964BC53CAA0EA7047AEB78 (String_t* ___switchName0, bool* ___isEnabled1, const RuntimeMethod* method) ;
// System.Void System.Text.ValueStringBuilder::.ctor(System.Span`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder__ctor_mCFAC21B37B6FB0166F7292C9E084A4620A8B1CB4 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___initialBuffer0, const RuntimeMethod* method) ;
// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1<System.Char>::get_Shared()
inline ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline (const RuntimeMethod* method)
{
	return ((  ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* (*) (const RuntimeMethod*))ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_gshared_inline)(method);
}
// System.Span`1<T> System.Span`1<System.Char>::op_Implicit(T[])
inline Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, const RuntimeMethod* method)
{
	return ((  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D (*) (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, const RuntimeMethod*))Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_gshared)(___array0, method);
}
// System.Void System.Text.ValueStringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder__ctor_mDD3390AC05005530F7E1A6DA8DFD43936FA831C3 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___initialCapacity0, const RuntimeMethod* method) ;
// System.Int32 System.Text.ValueStringBuilder::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ValueStringBuilder_get_Length_mCE34BD1632C668ADCDE6DECCF893446F73AB32EF_inline (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, const RuntimeMethod* method) ;
// System.Void System.Text.ValueStringBuilder::set_Length(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_set_Length_m28AD8981376A0DF1D6131FE3A81F07309F40E463_inline (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Char>::get_Length()
inline int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline)(__this, method);
}
// System.Int32 System.Text.ValueStringBuilder::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueStringBuilder_get_Capacity_m549E93C906175996AEC68548F2E7481FA4A30756 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, const RuntimeMethod* method) ;
// System.Void System.Text.ValueStringBuilder::Grow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Grow_m3BD5B20A4E621AC246B7A60B04EE9F57FEFBAAAA (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___additionalCapacityBeyondPos0, const RuntimeMethod* method) ;
// System.Void System.Text.ValueStringBuilder::EnsureCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_EnsureCapacity_m8074CFFCAF1DB00C9B092F19EB5C22697C7164C7 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Char>(System.Span`1<T>)
inline Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527 (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527_gshared)(___span0, method);
}
// System.Char& System.Text.ValueStringBuilder::GetPinnableReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* ValueStringBuilder_GetPinnableReference_m0D1EF212B4105300B897D2EB0860575884E843DA (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, const RuntimeMethod* method) ;
// System.Char& System.Text.ValueStringBuilder::GetPinnableReference(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* ValueStringBuilder_GetPinnableReference_m19ECE855D74CEDFDEA32888B9DD8D0E6C0EEEA90 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, bool ___terminate0, const RuntimeMethod* method) ;
// System.Char& System.Text.ValueStringBuilder::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* ValueStringBuilder_get_Item_m281500178ACCE923FF0F8F2979C2633D9E56D5FF (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32,System.Int32)
inline Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.String System.Span`1<System.Char>::ToString()
inline String_t* Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980 (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980_gshared)(__this, method);
}
// System.Void System.Text.ValueStringBuilder::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Dispose_mB72FDAE544AB72CBE78BA48C982B1C1744F4C721_inline (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, const RuntimeMethod* method) ;
// System.String System.Text.ValueStringBuilder::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueStringBuilder_ToString_m94BBB436E92758F1C659F554545284631C186E67 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, const RuntimeMethod* method) ;
// System.Span`1<System.Char> System.Text.ValueStringBuilder::get_RawChars()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ValueStringBuilder_get_RawChars_m46F4A6BD3DB09A1AE42040313088C530E330B7D8_inline (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Span`1<System.Char>::op_Implicit(System.Span`1<T>)
inline ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4 (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_gshared)(___span0, method);
}
// System.ReadOnlySpan`1<System.Char> System.Text.ValueStringBuilder::AsSpan(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ValueStringBuilder_AsSpan_m7627EB5616266E6FD9D0E76A23718D24AF424E7F (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, bool ___terminate0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Char> System.Text.ValueStringBuilder::AsSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ValueStringBuilder_AsSpan_m53E022C1A726EC407945CDA091EC66B539EC0AB8 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Char> System.Text.ValueStringBuilder::AsSpan(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ValueStringBuilder_AsSpan_m0FA4358885A00FEDC79E62F8F978C95EA9E4B11C (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Char> System.Text.ValueStringBuilder::AsSpan(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ValueStringBuilder_AsSpan_m582E6CB58F50092ADA37BAA0DEFD3B1679A8A958 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Boolean System.Span`1<System.Char>::TryCopyTo(System.Span`1<T>)
inline bool Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8 (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, const RuntimeMethod* method)
{
	return ((  bool (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8_gshared)(__this, ___destination0, method);
}
// System.Boolean System.Text.ValueStringBuilder::TryCopyTo(System.Span`1<System.Char>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueStringBuilder_TryCopyTo_mB7472369527C85B45855F5066C951DC8EAB30EC1 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, int32_t* ___charsWritten1, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32)
inline Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, int32_t, const RuntimeMethod*))Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline)(__this, ___start0, method);
}
// System.Void System.Span`1<System.Char>::CopyTo(System.Span`1<T>)
inline void Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_gshared)(__this, ___destination0, method);
}
// System.Void System.Span`1<System.Char>::Fill(T)
inline void Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254 (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar, const RuntimeMethod*))Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254_gshared)(__this, ___value0, method);
}
// System.Void System.Text.ValueStringBuilder::Insert(System.Int32,System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Insert_mC2331515EC44B7B40C41254AAFB8FC36C9A36109 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___index0, Il2CppChar ___value1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Char> System.MemoryExtensions::AsSpan(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline (String_t* ___text0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::CopyTo(System.Span`1<T>)
inline void ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_gshared)(__this, ___destination0, method);
}
// System.Void System.Text.ValueStringBuilder::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Insert_mBC9BBFBDD990A1B0A95B41EF5C31BBF8C8F5CF8C (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___index0, String_t* ___s1, const RuntimeMethod* method) ;
// System.Void System.Text.ValueStringBuilder::GrowAndAppend(System.Char)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_GrowAndAppend_m6D16FA902C6FA430EB2E0CE41562CA6A39FD6B18 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Void System.Text.ValueStringBuilder::Append(System.Char)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_m71B6E13363208B3F75815AF4A6CC2F6C02B2066D_inline (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Text.ValueStringBuilder::AppendSlow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_AppendSlow_mB8FA5062946A3F440123995DA504CB9590769A60 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.Text.ValueStringBuilder::Append(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_mD65BFDE00924F3EB0FD12A4C93600DD774D710E7_inline (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.Text.ValueStringBuilder::Append(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_m5FB3434115E3B7B75407C27E138208554317A977 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.Text.ValueStringBuilder::Append(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_mA89EC6995E316C491EE0A00164080BCADD8CFFA5 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, Il2CppChar* ___value0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline)(__this, method);
}
// System.Void System.Text.ValueStringBuilder::Append(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_mBBB24E871F4D70FE2B8428F524F6CCEAD4024BFA (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___value0, const RuntimeMethod* method) ;
// System.Span`1<System.Char> System.Text.ValueStringBuilder::AppendSpan(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ValueStringBuilder_AppendSpan_mD8EA197F63A0DC9686345FD68B2A5A035532EFCC_inline (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___length0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Int32 System.Int64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Internal.HashCodeCombiner::get_CombinedHash()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashCodeCombiner_get_CombinedHash_mA98B348E24539488D4F458BD008811CECA5D82D2_inline (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::.ctor(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner__ctor_m7F65BB70C45C7F576868747896C74795DA4B9431_inline (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* __this, int64_t ___seed0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::Add(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m1BF86C4A930E9EAF3EE2925DE5BFE9F5240DCE76_inline (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::Add(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m51DEECBFCAE37DD7D244132A6A2C30F92FFA5D87_inline (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* __this, RuntimeObject* ___o0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::Add(System.Collections.IEnumerable)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_mBDF58DB330B88AEFBC93BA7D24669FCA0BDB7284_inline (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* __this, RuntimeObject* ___e0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::Add(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m141FE360DA80661BEAA03176A0E311904D27FCCA_inline (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken Microsoft.Extensions.Primitives.CancellationChangeToken::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationChangeToken_get_Token_mB1FFD354FA96636D4C4073DEEE6C8B48AA11D6A8_inline (CancellationChangeToken_t8A239246F4A5926729773EADF24383304A99CFE4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ExecutionContext::IsFlowSuppressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExecutionContext_IsFlowSuppressed_m307C8462F6006452BF19416E8257AE94508049C9 (const RuntimeMethod* method) ;
// System.Threading.AsyncFlowControl System.Threading.ExecutionContext::SuppressFlow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncFlowControl_t1BB65380CA8AA973CAE0814179796E762403EF92 ExecutionContext_SuppressFlow_mFE0FD20AC0849AFCA8B1A7E8AE52A0CC3CC0272B (const RuntimeMethod* method) ;
// System.Void System.Threading.ExecutionContext::RestoreFlow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RestoreFlow_mCADCBD6E3BCE7D109A59FEFFA8A245C33C678A8A (const RuntimeMethod* method) ;
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 CancellationToken_Register_m3FF09C47C4EE3D6677023BE242DF174594B81859 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callback0, RuntimeObject* ___state1, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.CancellationChangeToken::set_ActiveChangeCallbacks(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationChangeToken_set_ActiveChangeCallbacks_m45F15D00347B46D3A3632ED6A873F29FEFCF4F79_inline (CancellationChangeToken_t8A239246F4A5926729773EADF24383304A99CFE4* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.CancellationChangeToken/NullDisposable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullDisposable__ctor_m88FE6F9051480E004C251EC079AD4BE57FBED715 (NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Action>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFA877965916B8B97F7CC0928953439734751D90F (Action_1_t3137749576010DD307B29662A2E47C43C7F7D04C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3137749576010DD307B29662A2E47C43C7F7D04C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.Extensions.Primitives.ChangeToken/ChangeTokenRegistration`1<System.Action>::.ctor(System.Func`1<Microsoft.Extensions.Primitives.IChangeToken>,System.Action`1<TState>,TState)
inline void ChangeTokenRegistration_1__ctor_m1C7C24FD4002D0CB8692C4B353424C6143764755 (ChangeTokenRegistration_1_tAC55EB34CD2A589FFDE276FBF20E6987055C3228* __this, Func_1_t6C80A64083C62B959A18BE3345BBEDD49165891B* ___changeTokenProducer0, Action_1_t3137749576010DD307B29662A2E47C43C7F7D04C* ___changeTokenConsumer1, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___state2, const RuntimeMethod* method)
{
	((  void (*) (ChangeTokenRegistration_1_tAC55EB34CD2A589FFDE276FBF20E6987055C3228*, Func_1_t6C80A64083C62B959A18BE3345BBEDD49165891B*, Action_1_t3137749576010DD307B29662A2E47C43C7F7D04C*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))ChangeTokenRegistration_1__ctor_mEEC3D99ADC08A7B65B29E28630321677717943C3_gshared)(__this, ___changeTokenProducer0, ___changeTokenConsumer1, ___state2, method);
}
// System.Void Microsoft.Extensions.Primitives.ChangeToken/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB5557195D56559CDD06FD64191FE96EC650010EF (U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Extensions.Primitives.IChangeToken> Microsoft.Extensions.Primitives.CompositeChangeToken::get_ChangeTokens()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompositeChangeToken_get_ChangeTokens_m88E933B2C65F6169F97E4C5F50B8D1DC10EBCEB0_inline (CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.CompositeChangeToken::EnsureCallbacksInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeChangeToken_EnsureCallbacksInitialized_m9FB964C9F4A63949D2C28709086C2AACA8E7F440 (CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4 (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.CompositeChangeToken::OnChange(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeChangeToken_OnChange_m2193D178F3DF8047C34B098A66F9E2273D9B8FC7 (RuntimeObject* ___state0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.IDisposable>::.ctor()
inline void List_1__ctor_mB4C51AD04BB1308274A370FED1FA4A1651C5766F (List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.IDisposable>::Add(T)
inline void List_1_Add_m3E57006B1E4E3BF3DC969B90445C1E58B246619D_inline (List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Threading.CancellationTokenSource::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.IDisposable>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_mACBC5D11FA8B9B7269C23FAD9CC5B77EB29E2E7E (List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.IDisposable>::get_Count()
inline int32_t List_1_get_Count_mCBCCB576B0AE4B4F273E4547424F1892F9AFEA10_inline (List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.String Microsoft.Extensions.Primitives.StringSegment::get_Buffer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703 (StringBuilder_t* __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringSegment::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegment__ctor_mC935BFECAC01086B0B9708C016FB4EA67B1A8DF7 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, String_t* ___buffer0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringSegment::ThrowInvalidArguments(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegment_ThrowInvalidArguments_mF3FC47196407DFDB2F1A409DD14C4ABD7A2651BB (String_t* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringSegment::.ctor(System.String,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringSegment__ctor_m676980906628B81CDA65E232AF0EC1AE45EFA992_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, String_t* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::get_HasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Primitives.StringSegment::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringSegment_get_Value_mE407D9CAF5FB71A173D322100019E40C116A8462 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.ThrowHelper::ThrowArgumentOutOfRangeException(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m5753DB221AF0A5BD32B5B86378CF16954F34D7EC (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Char Microsoft.Extensions.Primitives.StringSegment::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringSegment_get_Item_m7A7FA25298808FD10B5279E7FFCFF6A38EE5C2A9 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Char> System.MemoryExtensions::AsSpan(System.String,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m8409F3DA0EF95BF6B3A8741E5C56E729B0A824C6_inline (String_t* ___text0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Char> Microsoft.Extensions.Primitives.StringSegment::AsSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 StringSegment_AsSpan_mA29C031A1FC86AFEE5380B91818E18633BC0D366 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) ;
// System.ReadOnlyMemory`1<System.Char> System.MemoryExtensions::AsMemory(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t9495785584BC99CFCF956B34621F038E83C257D6 MemoryExtensions_AsMemory_m012EE69ACEE433EE3B5AB2A23298C2A7A66FC62D (String_t* ___text0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.ReadOnlyMemory`1<System.Char> Microsoft.Extensions.Primitives.StringSegment::AsMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t9495785584BC99CFCF956B34621F038E83C257D6 StringSegment_AsMemory_m0FA1A0294C4B9AD89C05A6AB3749DC279DD3041D (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m68FBA6075A0142439B0249D884863356D99090CF (String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, int32_t ___comparisonType5, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_mB472D631CA8F7BD839573D068BE51064A04341DF (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___other0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_m2A35EE2AA3B4C6CD850317E8CD44F5E1946009DE (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(Microsoft.Extensions.Primitives.StringSegment,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_m86A8E734AAA588028E650342535929EF513022C2 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___other0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(System.String,System.StringComparison)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringSegment_Equals_m4DF7D767E55B81E5EE3C3558F45C2096F0C245F5_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_m13DCEB5914D9F34C621A69763A45846A5FBABB4E (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.ThrowHelper::ThrowArgumentNullException(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_mC8181555627D844BE8402FEA5A0099A4E711E23B (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_GetHashCode_m3B755070692E166625922408555028247FB8E551_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::StartsWith(System.String,System.StringComparison)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringSegment_StartsWith_m69DB34A10F49EB2A089BD69FAFDB2718C3A933DD_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::EndsWith(System.String,System.StringComparison)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringSegment_EndsWith_mC0AB932389704E2E96B79D499023D3E01705D871_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Primitives.StringSegment::Substring(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringSegment_Substring_mD329186D36540C757C84F0608168C15001964373_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Primitives.StringSegment::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringSegment_Substring_mE6A3DFD807A91E2D720581F0867A63CB3A8044BE (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, int32_t ___offset0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringSegment::ThrowInvalidArguments(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegment_ThrowInvalidArguments_m20F7DC8E12CE9642291ABD1A8CDEA9185E1C4A8F (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method) ;
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::Subsegment(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 StringSegment_Subsegment_m0B23E9973B603CF998AF33DE20C61B3B9FC1604B (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method) ;
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::Subsegment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 StringSegment_Subsegment_m7388377259C163E08DE637767C82FC955CFD75D0 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, int32_t ___offset0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mFD81FEE71234D44F45A4924CD51AD6169C722ACB (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOf(System.Char,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOf_m1957192987904D26891AA4884965743D760C3548_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, Il2CppChar ___c0, int32_t ___start1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOf_m82DFF8579FEC30F2607EE922A35E8ED8AC746BD8 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, Il2CppChar ___c0, int32_t ___start1, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOf_m6C2E8BFAE2B39494EA44F855AD3B00F173CBF32F (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_m740B0108B7FAFFAB1C3F88E782B094195A4E3B75 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___anyOf0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOfAny(System.Char[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOfAny_m067E9DB75ADC1887F028382F387ABF12E11A146E_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___anyOf0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOfAny(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOfAny_m7ECA0FE9D96E6391EE83687AEF9AD49044B29CB1 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___anyOf0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOfAny(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOfAny_m4F22060C5F049D93E63F896E44E76808DD4F40CA (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___anyOf0, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_mC92062EF4E7765DD44424828FA75C027AA325442 (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_LastIndexOf_mF5A3D55DA0EAB4D86F6FB6E3574F51C16AF53448 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::TrimStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 StringSegment_TrimStart_mCD7D8F9FA4870C471310F1E6601595C923D11037 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) ;
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::TrimEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 StringSegment_TrimEnd_mD529B4552EFB399F3FFAB58670598D49C55B55D4 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) ;
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 StringSegment_Trim_mE1985FE1F36E52EA7242E87A33EDE6D9053E3F75 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD (const RuntimeMethod* method) ;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringTokenizer::.ctor(Microsoft.Extensions.Primitives.StringSegment,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringTokenizer__ctor_m132204A652E2AAD0B992C3DA1174636771F08ED6 (StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___value0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separators1, const RuntimeMethod* method) ;
// Microsoft.Extensions.Primitives.StringTokenizer Microsoft.Extensions.Primitives.StringSegment::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540 StringSegment_Split_m9D5472E7840CCE6C6F641032AA529B0C1715138D (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars0, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Primitives.StringSegment::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringSegment_ToString_mB8FF0B6038EB4334E46F84A6D1740CEDBC583FC3 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) ;
// System.Exception Microsoft.Extensions.Primitives.StringSegment::<ThrowInvalidArguments>g__GetInvalidArgumentsException|52_0(Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass52_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* StringSegment_U3CThrowInvalidArgumentsU3Eg__GetInvalidArgumentsExceptionU7C52_0_mC0055E35A4DF0EA889909ECB9DA6C99AD671F466 (U3CU3Ec__DisplayClass52_0_t8151A26CD3CBDB0A7459E03783EB049C236DC107* p0, const RuntimeMethod* method) ;
// System.Exception Microsoft.Extensions.Primitives.StringSegment::<ThrowInvalidArguments>g__GetInvalidArgumentsException|53_0(System.Boolean,Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass53_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* StringSegment_U3CThrowInvalidArgumentsU3Eg__GetInvalidArgumentsExceptionU7C53_0_m3915B11CF554CBB841E453E38349ECE5377EF44A (bool ___hasValue0, U3CU3Ec__DisplayClass53_0_t7945554BCBB566200645355E4BC14D4350FCF614* p1, const RuntimeMethod* method) ;
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 StringSegment_op_Implicit_m970638A4B04FFAB57D8447C2C99D0CDF47F3B91E (String_t* ___value0, const RuntimeMethod* method) ;
// System.ArgumentNullException Microsoft.Extensions.Primitives.ThrowHelper::GetArgumentNullException(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* ThrowHelper_GetArgumentNullException_mCC27246D89BBF2BFADEF78C81E7A1986761ACF82 (int32_t ___argument0, const RuntimeMethod* method) ;
// System.ArgumentOutOfRangeException Microsoft.Extensions.Primitives.ThrowHelper::GetArgumentOutOfRangeException(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* ThrowHelper_GetArgumentOutOfRangeException_mA168A9D5CC98E8DB73FC6E309FE2653A5CD8C28C (int32_t ___argument0, const RuntimeMethod* method) ;
// System.ArgumentException Microsoft.Extensions.Primitives.ThrowHelper::GetArgumentException(Microsoft.Extensions.Primitives.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* ThrowHelper_GetArgumentException_mC566A081E2A06B39E400A5B772F5B6E0FE20FA7A (int32_t ___resource0, const RuntimeMethod* method) ;
// System.StringComparison Microsoft.Extensions.Primitives.StringSegmentComparer::get_Comparison()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegmentComparer_get_Comparison_m24630E531EB28547EDA6C9B6671681CE58D9B531_inline (StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::Compare(Microsoft.Extensions.Primitives.StringSegment,Microsoft.Extensions.Primitives.StringSegment,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_Compare_m4FE69AAAAE1916F858E23463F1EB928EDF2EDA59 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___a0, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___b1, int32_t ___comparisonType2, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(Microsoft.Extensions.Primitives.StringSegment,Microsoft.Extensions.Primitives.StringSegment,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_m8323268A0CC425AB145F2E1402DE4B16AB37EFBF (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___a0, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___b1, int32_t ___comparisonType2, const RuntimeMethod* method) ;
// System.StringComparer Microsoft.Extensions.Primitives.StringSegmentComparer::get_Comparer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringSegmentComparer_get_Comparer_mA78CCF108147741E75938756D5DB52C7127065CA_inline (StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* __this, const RuntimeMethod* method) ;
// System.StringComparer System.StringComparer::get_Ordinal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringSegmentComparer::.ctor(System.StringComparison,System.StringComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegmentComparer__ctor_m326D94B8B18F1AA6FB29B09497F93702D0766E38 (StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* __this, int32_t ___comparison0, StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___comparer1, const RuntimeMethod* method) ;
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringTokenizer::.ctor(System.String,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringTokenizer__ctor_m2F0DECEBCA16F7E5617469C59FD73B0BCB4086D9 (StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* __this, String_t* ___value0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separators1, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::.ctor(Microsoft.Extensions.Primitives.StringSegment&,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m72790328D620D79F354460F6AA424471B1617AB0 (Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* ___value0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separators1, const RuntimeMethod* method) ;
// Microsoft.Extensions.Primitives.StringTokenizer/Enumerator Microsoft.Extensions.Primitives.StringTokenizer::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0 StringTokenizer_GetEnumerator_m437FEE445A357E3A9BBA8A304F1E4313E916AC26 (StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Microsoft.Extensions.Primitives.StringSegment> Microsoft.Extensions.Primitives.StringTokenizer::System.Collections.Generic.IEnumerable<Microsoft.Extensions.Primitives.StringSegment>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringTokenizer_System_Collections_Generic_IEnumerableU3CMicrosoft_Extensions_Primitives_StringSegmentU3E_GetEnumerator_m055B727574409E0C009F75F42F39C3A6EF80F7A0 (StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Microsoft.Extensions.Primitives.StringTokenizer::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringTokenizer_System_Collections_IEnumerable_GetEnumerator_m7B4AF765A3A76D1BF0AFBB6976AD5CCBEAB8E5F8 (StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::set_Current(Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_set_Current_mF72154922B4D89F06916FC3963F5FB3D4ADE5A3D_inline (Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::.ctor(Microsoft.Extensions.Primitives.StringTokenizer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mCEB97CE66C5F3B0F7F37B323B9A91D2731246CD4 (Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* __this, StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* ___tokenizer0, const RuntimeMethod* method) ;
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 Enumerator_get_Current_mB2793DD93766476DD63E3CA915C7875C5801321C_inline (Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* __this, const RuntimeMethod* method) ;
// System.Object Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m48EC64DED4BFC318EE5A8B2F8189200E3D9AA5B4 (Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m6F9B6F124979DA8EBB9D2E2E36A0016690464A2D (Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6EC9D7176F3840E1DCE729EAA30F3B3BE982F822 (Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m8D02D31B6029215AADEC1273AE6E4B9EE25738CA (Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringValues::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringValues__ctor_m18EEE44065E67724625C81BF4AE22C6A0A2B7117_inline (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringValues::.ctor(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringValues__ctor_m9B3C55052BF08BFDA9A49F952D7C5E2D24C3F7D9_inline (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Primitives.StringValues::GetStringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_GetStringValue_m732B28B58B69ADD7F532C351B0BA1A27C3A6D020 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) ;
// System.String[] Microsoft.Extensions.Primitives.StringValues::GetArrayValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* StringValues_GetArrayValue_mA83857365250C5B25D256A4525870724F38FDCC3 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Primitives.StringValues::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringValues_get_Count_mA861D3B8E0735D73D323C3195C7486C8FF167DF8_inline (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_get_IsReadOnly_m664BFFF9EC58B213DC909DC63E1F8EC372A261BE (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Primitives.StringValues::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringValues_get_Item_m0B764CEA57AF1AF7E4ED5A3B306F7402B7190B50_inline (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_get_Item_m73D0C189B84B1EFCE6CEBCAC714E80A353E90B91 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.set_Item(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_set_Item_m9AC23B767355DB1F49A7FE9DC87D138A048D7A6D (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Primitives.StringValues::OutOfBounds()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR String_t* StringValues_OutOfBounds_m9E496C506C9CFEF804F05F76185400D3D1A12D40 (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.String>()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.String Microsoft.Extensions.Primitives.StringValues::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_ToString_m325D8EF55B11605CFAD2D5B16B302B506C78DA4D (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Primitives.StringValues::<GetStringValue>g__GetStringValueFromArray|19_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_U3CGetStringValueU3Eg__GetStringValueFromArrayU7C19_0_m5AC369BB7CF4ECB41E81A780BE37CD6AFB0D5197 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.String[] Microsoft.Extensions.Primitives.StringValues::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* StringValues_ToArray_m3BFFE64F96DA6D28559828D297DAB3C20858FC60 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Primitives.StringValues::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringValues_IndexOf_mCC7889C0239CB74664A47867DCE0A958C1913A05 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, String_t* ___item0, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_IndexOf_m4F97B8DD973CFBAB8CE52539D540DFAA81B83864 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, String_t* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Contains_m257F996C3DFF429399F41ABA6A87C58718EDB248 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, String_t* ___item0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringValues::CopyTo(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_CopyTo_m07B061281018E07B88B63A2460DF80E07493D6B5 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.CopyTo(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_CopyTo_mC1D4529BACA96F8A609DD367D3AB9033A140BE57 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Add_m5BCF426EFF1E288E18D6897FA37BA058E34C11D6 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, String_t* ___item0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_Insert_m14199DDBBCC20EB7E0F19FC15AF46DD42CBC4DC6 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, int32_t ___index0, String_t* ___item1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Remove_mA4CED1A746707984E2E37CD807ABF490DA9B88CB (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, String_t* ___item0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_RemoveAt_m0880F0AF13704148BFA86D7EC42E554F1F9CBBE0 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Clear_m5D403A5F69CBC382B4B8766A963F11FC7E604543 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringValues/Enumerator::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mDD3C6E367D3F946442E65356682BCABE862FD267 (Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// Microsoft.Extensions.Primitives.StringValues/Enumerator Microsoft.Extensions.Primitives.StringValues::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A StringValues_GetEnumerator_m5AF25E6CA6D564A9E66807DDA71CC6649C2924E7 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.String> Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringValues_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mE7EE9A8443B451DE6075271767B8AF6B0B41A1DE (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Microsoft.Extensions.Primitives.StringValues::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringValues_System_Collections_IEnumerable_GetEnumerator_m882822DCEED6CD2964AA1D3FB55CC0347C1B98C0 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(Microsoft.Extensions.Primitives.StringValues,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___left0, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___right1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m3A228559A204B52C9BD0CF93B9756BC5034F6C87 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___other0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m8EF5C7B02B14673B8521970AE2F5D2914DD6A55E (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, String_t* ___other0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_mA716FF54907E44BFA3140CB59CB7E359CE8B65D8 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___other0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m3752B7C0E1230E7F3D3F00E79FC16FABE20FDF26 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(Microsoft.Extensions.Primitives.StringValues,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m80DD26DA051B31A5CE266FE942345ECF1C6DBBD9 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___left0, String_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(Microsoft.Extensions.Primitives.StringValues,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m44EAC8AD93E3CCD26506691038D693B46776F0DD (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___left0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___right1, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Primitives.StringValues::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringValues_GetHashCode_m05E0E5064A56310A62B54B602351A195222F1333 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Primitives.StringValues::<GetStringValue>g__GetJoinedStringValueFromArray|19_1(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_U3CGetStringValueU3Eg__GetJoinedStringValueFromArrayU7C19_1_mF40A5AEC98F1EA8BC35B5C78DA7F4EAF5BDDC8D3 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringValues/Enumerator::.ctor(Microsoft.Extensions.Primitives.StringValues&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m110F8147370E7E566851600D5EF274D6B43984BC (Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* __this, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* ___values0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Primitives.StringValues/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9DB634A63D12BFDCEE7D908756AFD6692C3597E0 (Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Primitives.StringValues/Enumerator::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Enumerator_get_Current_mCA92A105310E78E07692AB2976E51EEA84FF0F00_inline (Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* __this, const RuntimeMethod* method) ;
// System.Object Microsoft.Extensions.Primitives.StringValues/Enumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m6754EFA7F3868659B65E5AC8A0AD480C6E64BC1B_inline (Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringValues/Enumerator::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Collections_IEnumerator_Reset_mF24ABCB4DEC32DF3A874FAAA9D8DBA461ADEE514 (Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Primitives.StringValues/Enumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2A54B91F47C69C6AC7E55A876F700297F77661C5 (Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* __this, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Primitives.ThrowHelper::GetArgumentName(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetArgumentName_mC4DD0B700B4CE743AD893A0FB52BC71C9E93FD4E (int32_t ___argument0, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Primitives.ThrowHelper::GetResourceText(Microsoft.Extensions.Primitives.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetResourceText_m360CBC87FAF9D180F816EFE374EEE4A669F0303C (int32_t ___resource0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String Microsoft.Extensions.Primitives.ThrowHelper::GetResourceName(Microsoft.Extensions.Primitives.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetResourceName_m9E7AFB94B84B83F9C5E2F59E07459AAE26D828A6 (int32_t ___resource0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___ptr0, ___length1, method);
}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m5FFA73247F2D561BE3EA66352F25E4C0E9619978 (EmbeddedAttribute_t1FA21428DB08FE0D47D0D57D11EA9A8EF8386FAC* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mA19C62771A0B12F172DFD982D3DC0C1F84F126C9 (IsReadOnlyAttribute_tEFF56D0311066F5CDCF167C8390DE368804E5BF5* __this, const RuntimeMethod* method) 
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
// System.Void System.Runtime.CompilerServices.IsByRefLikeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsByRefLikeAttribute__ctor_mA70901AAE339DE7991E0CD1F36D91DB372EAEB4C (IsByRefLikeAttribute_tE70BF3E95975D249311666CED7181199026A7C62* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_mB210ED03D58BC227BCF20E83DC139FA0186B6A74 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		bool L_0 = ((SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_StaticFields*)il2cpp_codegen_static_fields_for(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var))->___s_usingResourceKeys_0;
		return L_0;
	}
}
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m0E0E707439C7E3B85AF1309BB755B8155A605F0D (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mB210ED03D58BC227BCF20E83DC139FA0186B6A74_inline(NULL);
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
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_4;
		L_4 = SR_get_ResourceManager_mB01B784566B8EC5ECAD0F9EC78A37BB0A36BF9C9(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m658A0AA6C83D434779FD9029E0D95E53382909EB (String_t* ___resourceFormat0, RuntimeObject* ___p11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mB210ED03D58BC227BCF20E83DC139FA0186B6A74_inline(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m83D0019F89F533C1A3CD7979EBA472AC6502C23E (String_t* ___resourceFormat0, RuntimeObject* ___p11, RuntimeObject* ___p22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mB210ED03D58BC227BCF20E83DC139FA0186B6A74_inline(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m42011A9CD4E9DC4DFB9053B5DDF70DCF3340DDF8 (String_t* ___resourceFormat0, RuntimeObject* ___p11, RuntimeObject* ___p22, RuntimeObject* ___p33, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mB210ED03D58BC227BCF20E83DC139FA0186B6A74_inline(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m0321E056FB9284C4CC54CC345EAEBA8D5E258F85 (String_t* ___resourceFormat0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
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
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SR_UsingResourceKeys_mB210ED03D58BC227BCF20E83DC139FA0186B6A74_inline(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mAA6E74A4CF6C5D9B78A56DDF1283BE44C70FC58C (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject* ___p12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mB210ED03D58BC227BCF20E83DC139FA0186B6A74_inline(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m0992FCB92EA71066873A774CB75C279D4A4A619A (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject* ___p12, RuntimeObject* ___p23, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mB210ED03D58BC227BCF20E83DC139FA0186B6A74_inline(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m3BB8BF17F613D9E700FB1DA97EFBF9E6104DE12D (RuntimeObject* ___provider0, String_t* ___resourceFormat1, RuntimeObject* ___p12, RuntimeObject* ___p23, RuntimeObject* ___p34, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = SR_UsingResourceKeys_mB210ED03D58BC227BCF20E83DC139FA0186B6A74_inline(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m458258B9570070E699B992127501E88E94BD9761 (RuntimeObject* ___provider0, String_t* ___resourceFormat1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
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
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SR_UsingResourceKeys_mB210ED03D58BC227BCF20E83DC139FA0186B6A74_inline(NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_mB01B784566B8EC5ECAD0F9EC78A37BB0A36BF9C9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t987EF062CD382CAD4B16483F7F0C0AE9FB7DB962_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B2_0 = NULL;
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0 = ((SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_StaticFields*)il2cpp_codegen_static_fields_for(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var))->___s_resourceManager_1;
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (SR_t987EF062CD382CAD4B16483F7F0C0AE9FB7DB962_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_4 = (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB*)il2cpp_codegen_object_new(ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784(L_4, L_3, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_5 = L_4;
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		((SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_StaticFields*)il2cpp_codegen_static_fields_for(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var))->___s_resourceManager_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_StaticFields*)il2cpp_codegen_static_fields_for(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var))->___s_resourceManager_1), (void*)L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// System.String System.SR::get_Argument_InvalidOffsetLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_InvalidOffsetLength_m8690F17199044733471175ADA057B8ECB35CDEA7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE0B5180C14DE0B9488545AA41677AB561B37B31);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m0E0E707439C7E3B85AF1309BB755B8155A605F0D(_stringLiteralAE0B5180C14DE0B9488545AA41677AB561B37B31, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.String System.SR::get_Argument_InvalidOffsetLengthStringSegment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Argument_InvalidOffsetLengthStringSegment_m1A6D5758B48021A865F134101F827AEC56680880 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEBAFF7CF96ED14FE69438A6E7EB058295D4E7A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m0E0E707439C7E3B85AF1309BB755B8155A605F0D(_stringLiteralAEBAFF7CF96ED14FE69438A6E7EB058295D4E7A5, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.String System.SR::get_Capacity_CannotChangeAfterWriteStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Capacity_CannotChangeAfterWriteStarted_m6DCA64629D4B91EEE1D9111199EFD8DA7D19BA6A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral413EC544BFFA4B43AA529368BCBB164E2778CA6F);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m0E0E707439C7E3B85AF1309BB755B8155A605F0D(_stringLiteral413EC544BFFA4B43AA529368BCBB164E2778CA6F, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.String System.SR::get_Capacity_NotEnough()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Capacity_NotEnough_m83E3A45D779C40BA7E85F76AB560AC41D6EC56AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0980062477F0BABC828F151DDEF5E66FB1026D9A);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m0E0E707439C7E3B85AF1309BB755B8155A605F0D(_stringLiteral0980062477F0BABC828F151DDEF5E66FB1026D9A, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.String System.SR::get_Capacity_NotUsedEntirely()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_Capacity_NotUsedEntirely_m4E5D203A609812C6E48220CE4E539687E849CEBC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0611B3944B8BEC8B61CAE8B2170CBD1CF617E26);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = SR_GetResourceString_m0E0E707439C7E3B85AF1309BB755B8155A605F0D(_stringLiteralF0611B3944B8BEC8B61CAE8B2170CBD1CF617E26, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.Void System.SR::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SR__cctor_m6887BC854886AF8DFD17752D3CFF6FA7B5705B65 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppContext_t0380D19FAC72CD59D46947D86DC1DAA3BCE638E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
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
		((SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_StaticFields*)il2cpp_codegen_static_fields_for(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var))->___s_usingResourceKeys_0 = (bool)G_B3_0;
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
// Conversion methods for marshalling of: System.Text.ValueStringBuilder
IL2CPP_EXTERN_C void ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A_marshal_pinvoke(const ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A& unmarshaled, ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.____arrayToReturnToPool_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaled_arrayToReturnToPool_Length = (unmarshaled.____arrayToReturnToPool_0)->max_length;
		marshaled.____arrayToReturnToPool_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled_arrayToReturnToPool_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_arrayToReturnToPool_Length); i++)
		{
			(marshaled.____arrayToReturnToPool_0)[i] = static_cast<uint8_t>((unmarshaled.____arrayToReturnToPool_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____arrayToReturnToPool_0 = NULL;
	}
	marshaled.____chars_1 = unmarshaled.____chars_1;
	marshaled.____pos_2 = unmarshaled.____pos_2;
}
IL2CPP_EXTERN_C void ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A_marshal_pinvoke_back(const ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A_marshaled_pinvoke& marshaled, ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____arrayToReturnToPool_0 != NULL)
	{
		if (unmarshaled.____arrayToReturnToPool_0 == NULL)
		{
			unmarshaled.____arrayToReturnToPool_0 = reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____arrayToReturnToPool_0), (void*)reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.____arrayToReturnToPool_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.____arrayToReturnToPool_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____arrayToReturnToPool_0)[i]));
		}
	}
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D unmarshaled_chars_temp_1;
	memset((&unmarshaled_chars_temp_1), 0, sizeof(unmarshaled_chars_temp_1));
	unmarshaled_chars_temp_1 = marshaled.____chars_1;
	unmarshaled.____chars_1 = unmarshaled_chars_temp_1;
	int32_t unmarshaled_pos_temp_2 = 0;
	unmarshaled_pos_temp_2 = marshaled.____pos_2;
	unmarshaled.____pos_2 = unmarshaled_pos_temp_2;
}
// Conversion method for clean up from marshalling of: System.Text.ValueStringBuilder
IL2CPP_EXTERN_C void ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A_marshal_pinvoke_cleanup(ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A_marshaled_pinvoke& marshaled)
{
	if (marshaled.____arrayToReturnToPool_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____arrayToReturnToPool_0);
		marshaled.____arrayToReturnToPool_0 = NULL;
	}
}
// Conversion methods for marshalling of: System.Text.ValueStringBuilder
IL2CPP_EXTERN_C void ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A_marshal_com(const ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A& unmarshaled, ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A_marshaled_com& marshaled)
{
	if (unmarshaled.____arrayToReturnToPool_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaled_arrayToReturnToPool_Length = (unmarshaled.____arrayToReturnToPool_0)->max_length;
		marshaled.____arrayToReturnToPool_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled_arrayToReturnToPool_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_arrayToReturnToPool_Length); i++)
		{
			(marshaled.____arrayToReturnToPool_0)[i] = static_cast<uint8_t>((unmarshaled.____arrayToReturnToPool_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____arrayToReturnToPool_0 = NULL;
	}
	marshaled.____chars_1 = unmarshaled.____chars_1;
	marshaled.____pos_2 = unmarshaled.____pos_2;
}
IL2CPP_EXTERN_C void ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A_marshal_com_back(const ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A_marshaled_com& marshaled, ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____arrayToReturnToPool_0 != NULL)
	{
		if (unmarshaled.____arrayToReturnToPool_0 == NULL)
		{
			unmarshaled.____arrayToReturnToPool_0 = reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____arrayToReturnToPool_0), (void*)reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.____arrayToReturnToPool_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.____arrayToReturnToPool_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____arrayToReturnToPool_0)[i]));
		}
	}
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D unmarshaled_chars_temp_1;
	memset((&unmarshaled_chars_temp_1), 0, sizeof(unmarshaled_chars_temp_1));
	unmarshaled_chars_temp_1 = marshaled.____chars_1;
	unmarshaled.____chars_1 = unmarshaled_chars_temp_1;
	int32_t unmarshaled_pos_temp_2 = 0;
	unmarshaled_pos_temp_2 = marshaled.____pos_2;
	unmarshaled.____pos_2 = unmarshaled_pos_temp_2;
}
// Conversion method for clean up from marshalling of: System.Text.ValueStringBuilder
IL2CPP_EXTERN_C void ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A_marshal_com_cleanup(ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A_marshaled_com& marshaled)
{
	if (marshaled.____arrayToReturnToPool_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____arrayToReturnToPool_0);
		marshaled.____arrayToReturnToPool_0 = NULL;
	}
}
// System.Void System.Text.ValueStringBuilder::.ctor(System.Span`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder__ctor_mCFAC21B37B6FB0166F7292C9E084A4620A8B1CB4 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___initialBuffer0, const RuntimeMethod* method) 
{
	{
		__this->____arrayToReturnToPool_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrayToReturnToPool_0), (void*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = ___initialBuffer0;
		__this->____chars_1 = L_0;
		__this->____pos_2 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder__ctor_mCFAC21B37B6FB0166F7292C9E084A4620A8B1CB4_AdjustorThunk (RuntimeObject* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___initialBuffer0, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ValueStringBuilder__ctor_mCFAC21B37B6FB0166F7292C9E084A4620A8B1CB4(_thisAdjusted, ___initialBuffer0, method);
}
// System.Void System.Text.ValueStringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder__ctor_mDD3390AC05005530F7E1A6DA8DFD43936FA831C3 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___initialCapacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_0;
		L_0 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		int32_t L_1 = ___initialCapacity0;
		NullCheck(L_0);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2;
		L_2 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Char>::Rent(System.Int32) */, L_0, L_1);
		__this->____arrayToReturnToPool_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrayToReturnToPool_0), (void*)L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->____arrayToReturnToPool_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_4;
		L_4 = Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98(L_3, Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		__this->____chars_1 = L_4;
		__this->____pos_2 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder__ctor_mDD3390AC05005530F7E1A6DA8DFD43936FA831C3_AdjustorThunk (RuntimeObject* __this, int32_t ___initialCapacity0, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ValueStringBuilder__ctor_mDD3390AC05005530F7E1A6DA8DFD43936FA831C3(_thisAdjusted, ___initialCapacity0, method);
}
// System.Int32 System.Text.ValueStringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueStringBuilder_get_Length_mCE34BD1632C668ADCDE6DECCF893446F73AB32EF (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pos_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ValueStringBuilder_get_Length_mCE34BD1632C668ADCDE6DECCF893446F73AB32EF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueStringBuilder_get_Length_mCE34BD1632C668ADCDE6DECCF893446F73AB32EF_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Text.ValueStringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_set_Length_m28AD8981376A0DF1D6131FE3A81F07309F40E463 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____pos_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder_set_Length_m28AD8981376A0DF1D6131FE3A81F07309F40E463_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ValueStringBuilder_set_Length_m28AD8981376A0DF1D6131FE3A81F07309F40E463_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 System.Text.ValueStringBuilder::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueStringBuilder_get_Capacity_m549E93C906175996AEC68548F2E7481FA4A30756 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_0 = (&__this->____chars_1);
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_0, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueStringBuilder_get_Capacity_m549E93C906175996AEC68548F2E7481FA4A30756_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueStringBuilder_get_Capacity_m549E93C906175996AEC68548F2E7481FA4A30756(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Text.ValueStringBuilder::EnsureCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_EnsureCapacity_m8074CFFCAF1DB00C9B092F19EB5C22697C7164C7 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___capacity0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_1 = (&__this->____chars_1);
		int32_t L_2;
		L_2 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_1, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_3 = ___capacity0;
		int32_t L_4 = __this->____pos_2;
		ValueStringBuilder_Grow_m3BD5B20A4E621AC246B7A60B04EE9F57FEFBAAAA(__this, ((int32_t)il2cpp_codegen_subtract(L_3, L_4)), NULL);
	}

IL_001c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder_EnsureCapacity_m8074CFFCAF1DB00C9B092F19EB5C22697C7164C7_AdjustorThunk (RuntimeObject* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ValueStringBuilder_EnsureCapacity_m8074CFFCAF1DB00C9B092F19EB5C22697C7164C7(_thisAdjusted, ___capacity0, method);
}
// System.Char& System.Text.ValueStringBuilder::GetPinnableReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* ValueStringBuilder_GetPinnableReference_m0D1EF212B4105300B897D2EB0860575884E843DA (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = __this->____chars_1;
		Il2CppChar* L_1;
		L_1 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527(L_0, MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Il2CppChar* ValueStringBuilder_GetPinnableReference_m0D1EF212B4105300B897D2EB0860575884E843DA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	Il2CppChar* _returnValue;
	_returnValue = ValueStringBuilder_GetPinnableReference_m0D1EF212B4105300B897D2EB0860575884E843DA(_thisAdjusted, method);
	return _returnValue;
}
// System.Char& System.Text.ValueStringBuilder::GetPinnableReference(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* ValueStringBuilder_GetPinnableReference_m19ECE855D74CEDFDEA32888B9DD8D0E6C0EEEA90 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, bool ___terminate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___terminate0;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1;
		L_1 = ValueStringBuilder_get_Length_mCE34BD1632C668ADCDE6DECCF893446F73AB32EF_inline(__this, NULL);
		ValueStringBuilder_EnsureCapacity_m8074CFFCAF1DB00C9B092F19EB5C22697C7164C7(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_2 = (&__this->____chars_1);
		int32_t L_3;
		L_3 = ValueStringBuilder_get_Length_mCE34BD1632C668ADCDE6DECCF893446F73AB32EF_inline(__this, NULL);
		Il2CppChar* L_4;
		L_4 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&((L_2)->____pointer_0))->value, (L_3), (L_2)->____length_1);
		*((int16_t*)L_4) = (int16_t)0;
	}

IL_0024:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_5 = __this->____chars_1;
		Il2CppChar* L_6;
		L_6 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527(L_5, MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m7FA6FA19030FDE5E3810FBFFD0FD8D6D36172527_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_EXTERN_C  Il2CppChar* ValueStringBuilder_GetPinnableReference_m19ECE855D74CEDFDEA32888B9DD8D0E6C0EEEA90_AdjustorThunk (RuntimeObject* __this, bool ___terminate0, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	Il2CppChar* _returnValue;
	_returnValue = ValueStringBuilder_GetPinnableReference_m19ECE855D74CEDFDEA32888B9DD8D0E6C0EEEA90(_thisAdjusted, ___terminate0, method);
	return _returnValue;
}
// System.Char& System.Text.ValueStringBuilder::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* ValueStringBuilder_get_Item_m281500178ACCE923FF0F8F2979C2633D9E56D5FF (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_0 = (&__this->____chars_1);
		int32_t L_1 = ___index0;
		Il2CppChar* L_2;
		L_2 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&((L_0)->____pointer_0))->value, (L_1), (L_0)->____length_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Il2CppChar* ValueStringBuilder_get_Item_m281500178ACCE923FF0F8F2979C2633D9E56D5FF_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	Il2CppChar* _returnValue;
	_returnValue = ValueStringBuilder_get_Item_m281500178ACCE923FF0F8F2979C2633D9E56D5FF(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.String System.Text.ValueStringBuilder::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueStringBuilder_ToString_m94BBB436E92758F1C659F554545284631C186E67 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_0 = (&__this->____chars_1);
		int32_t L_1 = __this->____pos_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2;
		L_2 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_0, 0, L_1, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		V_1 = L_2;
		String_t* L_3;
		L_3 = Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980((&V_1), Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980_RuntimeMethod_var);
		V_0 = L_3;
		ValueStringBuilder_Dispose_mB72FDAE544AB72CBE78BA48C982B1C1744F4C721_inline(__this, NULL);
		String_t* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* ValueStringBuilder_ToString_m94BBB436E92758F1C659F554545284631C186E67_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueStringBuilder_ToString_m94BBB436E92758F1C659F554545284631C186E67(_thisAdjusted, method);
	return _returnValue;
}
// System.Span`1<System.Char> System.Text.ValueStringBuilder::get_RawChars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ValueStringBuilder_get_RawChars_m46F4A6BD3DB09A1AE42040313088C530E330B7D8 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, const RuntimeMethod* method) 
{
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = __this->____chars_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ValueStringBuilder_get_RawChars_m46F4A6BD3DB09A1AE42040313088C530E330B7D8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D _returnValue;
	_returnValue = ValueStringBuilder_get_RawChars_m46F4A6BD3DB09A1AE42040313088C530E330B7D8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.ReadOnlySpan`1<System.Char> System.Text.ValueStringBuilder::AsSpan(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ValueStringBuilder_AsSpan_m7627EB5616266E6FD9D0E76A23718D24AF424E7F (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, bool ___terminate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___terminate0;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1;
		L_1 = ValueStringBuilder_get_Length_mCE34BD1632C668ADCDE6DECCF893446F73AB32EF_inline(__this, NULL);
		ValueStringBuilder_EnsureCapacity_m8074CFFCAF1DB00C9B092F19EB5C22697C7164C7(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_2 = (&__this->____chars_1);
		int32_t L_3;
		L_3 = ValueStringBuilder_get_Length_mCE34BD1632C668ADCDE6DECCF893446F73AB32EF_inline(__this, NULL);
		Il2CppChar* L_4;
		L_4 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&((L_2)->____pointer_0))->value, (L_3), (L_2)->____length_1);
		*((int16_t*)L_4) = (int16_t)0;
	}

IL_0024:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_5 = (&__this->____chars_1);
		int32_t L_6 = __this->____pos_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_7;
		L_7 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_5, 0, L_6, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8;
		L_8 = Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4(L_7, Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		return L_8;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ValueStringBuilder_AsSpan_m7627EB5616266E6FD9D0E76A23718D24AF424E7F_AdjustorThunk (RuntimeObject* __this, bool ___terminate0, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 _returnValue;
	_returnValue = ValueStringBuilder_AsSpan_m7627EB5616266E6FD9D0E76A23718D24AF424E7F(_thisAdjusted, ___terminate0, method);
	return _returnValue;
}
// System.ReadOnlySpan`1<System.Char> System.Text.ValueStringBuilder::AsSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ValueStringBuilder_AsSpan_m53E022C1A726EC407945CDA091EC66B539EC0AB8 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_0 = (&__this->____chars_1);
		int32_t L_1 = __this->____pos_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2;
		L_2 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_0, 0, L_1, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
		L_3 = Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4(L_2, Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ValueStringBuilder_AsSpan_m53E022C1A726EC407945CDA091EC66B539EC0AB8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 _returnValue;
	_returnValue = ValueStringBuilder_AsSpan_m53E022C1A726EC407945CDA091EC66B539EC0AB8(_thisAdjusted, method);
	return _returnValue;
}
// System.ReadOnlySpan`1<System.Char> System.Text.ValueStringBuilder::AsSpan(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ValueStringBuilder_AsSpan_m0FA4358885A00FEDC79E62F8F978C95EA9E4B11C (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_0 = (&__this->____chars_1);
		int32_t L_1 = ___start0;
		int32_t L_2 = __this->____pos_2;
		int32_t L_3 = ___start0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_4;
		L_4 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_0, L_1, ((int32_t)il2cpp_codegen_subtract(L_2, L_3)), Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5;
		L_5 = Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4(L_4, Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ValueStringBuilder_AsSpan_m0FA4358885A00FEDC79E62F8F978C95EA9E4B11C_AdjustorThunk (RuntimeObject* __this, int32_t ___start0, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 _returnValue;
	_returnValue = ValueStringBuilder_AsSpan_m0FA4358885A00FEDC79E62F8F978C95EA9E4B11C(_thisAdjusted, ___start0, method);
	return _returnValue;
}
// System.ReadOnlySpan`1<System.Char> System.Text.ValueStringBuilder::AsSpan(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ValueStringBuilder_AsSpan_m582E6CB58F50092ADA37BAA0DEFD3B1679A8A958 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_0 = (&__this->____chars_1);
		int32_t L_1 = ___start0;
		int32_t L_2 = ___length1;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_3;
		L_3 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_0, L_1, L_2, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_4;
		L_4 = Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4(L_3, Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		return L_4;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ValueStringBuilder_AsSpan_m582E6CB58F50092ADA37BAA0DEFD3B1679A8A958_AdjustorThunk (RuntimeObject* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 _returnValue;
	_returnValue = ValueStringBuilder_AsSpan_m582E6CB58F50092ADA37BAA0DEFD3B1679A8A958(_thisAdjusted, ___start0, ___length1, method);
	return _returnValue;
}
// System.Boolean System.Text.ValueStringBuilder::TryCopyTo(System.Span`1<System.Char>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueStringBuilder_TryCopyTo_mB7472369527C85B45855F5066C951DC8EAB30EC1 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, int32_t* ___charsWritten1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_0 = (&__this->____chars_1);
		int32_t L_1 = __this->____pos_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2;
		L_2 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_0, 0, L_1, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		V_0 = L_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_3 = ___destination0;
		bool L_4;
		L_4 = Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8((&V_0), L_3, Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		int32_t* L_5 = ___charsWritten1;
		int32_t L_6 = __this->____pos_2;
		*((int32_t*)L_5) = (int32_t)L_6;
		ValueStringBuilder_Dispose_mB72FDAE544AB72CBE78BA48C982B1C1744F4C721_inline(__this, NULL);
		return (bool)1;
	}

IL_002d:
	{
		int32_t* L_7 = ___charsWritten1;
		*((int32_t*)L_7) = (int32_t)0;
		ValueStringBuilder_Dispose_mB72FDAE544AB72CBE78BA48C982B1C1744F4C721_inline(__this, NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueStringBuilder_TryCopyTo_mB7472369527C85B45855F5066C951DC8EAB30EC1_AdjustorThunk (RuntimeObject* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, int32_t* ___charsWritten1, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueStringBuilder_TryCopyTo_mB7472369527C85B45855F5066C951DC8EAB30EC1(_thisAdjusted, ___destination0, ___charsWritten1, method);
	return _returnValue;
}
// System.Void System.Text.ValueStringBuilder::Insert(System.Int32,System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Insert_mC2331515EC44B7B40C41254AAFB8FC36C9A36109 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___index0, Il2CppChar ___value1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->____pos_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_1 = (&__this->____chars_1);
		int32_t L_2;
		L_2 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_1, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		int32_t L_3 = ___count2;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = ___count2;
		ValueStringBuilder_Grow_m3BD5B20A4E621AC246B7A60B04EE9F57FEFBAAAA(__this, L_4, NULL);
	}

IL_001c:
	{
		int32_t L_5 = __this->____pos_2;
		int32_t L_6 = ___index0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_7 = (&__this->____chars_1);
		int32_t L_8 = ___index0;
		int32_t L_9 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10;
		L_10 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_7, L_8, L_9, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		V_1 = L_10;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_11 = (&__this->____chars_1);
		int32_t L_12 = ___index0;
		int32_t L_13 = ___count2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_14;
		L_14 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline(L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E((&V_1), L_14, Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_RuntimeMethod_var);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_15 = (&__this->____chars_1);
		int32_t L_16 = ___index0;
		int32_t L_17 = ___count2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_18;
		L_18 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_15, L_16, L_17, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		V_1 = L_18;
		Il2CppChar L_19 = ___value1;
		Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254((&V_1), L_19, Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254_RuntimeMethod_var);
		int32_t L_20 = __this->____pos_2;
		int32_t L_21 = ___count2;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder_Insert_mC2331515EC44B7B40C41254AAFB8FC36C9A36109_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, Il2CppChar ___value1, int32_t ___count2, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ValueStringBuilder_Insert_mC2331515EC44B7B40C41254AAFB8FC36C9A36109(_thisAdjusted, ___index0, ___value1, ___count2, method);
}
// System.Void System.Text.ValueStringBuilder::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Insert_mBC9BBFBDD990A1B0A95B41EF5C31BBF8C8F5CF8C (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___index0, String_t* ___s1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_2;
	memset((&V_2), 0, sizeof(V_2));
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		String_t* L_0 = ___s1;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		String_t* L_1 = ___s1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = __this->____pos_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_4 = (&__this->____chars_1);
		int32_t L_5;
		L_5 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_4, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		int32_t L_6 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_7 = V_0;
		ValueStringBuilder_Grow_m3BD5B20A4E621AC246B7A60B04EE9F57FEFBAAAA(__this, L_7, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____pos_2;
		int32_t L_9 = ___index0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, L_9));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_10 = (&__this->____chars_1);
		int32_t L_11 = ___index0;
		int32_t L_12 = V_1;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_13;
		L_13 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_10, L_11, L_12, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		V_2 = L_13;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_14 = (&__this->____chars_1);
		int32_t L_15 = ___index0;
		int32_t L_16 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_17;
		L_17 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline(L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E((&V_2), L_17, Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_RuntimeMethod_var);
		String_t* L_18 = ___s1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_19;
		L_19 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_18, NULL);
		V_3 = L_19;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_20 = (&__this->____chars_1);
		int32_t L_21 = ___index0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_22;
		L_22 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline(L_20, L_21, Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030((&V_3), L_22, ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		int32_t L_23 = __this->____pos_2;
		int32_t L_24 = V_0;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder_Insert_mBC9BBFBDD990A1B0A95B41EF5C31BBF8C8F5CF8C_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, String_t* ___s1, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ValueStringBuilder_Insert_mBC9BBFBDD990A1B0A95B41EF5C31BBF8C8F5CF8C(_thisAdjusted, ___index0, ___s1, method);
}
// System.Void System.Text.ValueStringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_m71B6E13363208B3F75815AF4A6CC2F6C02B2066D (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, Il2CppChar ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____pos_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_2 = (&__this->____chars_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_2, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) < ((uint32_t)L_3))))
		{
			goto IL_002d;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_4 = (&__this->____chars_1);
		int32_t L_5 = V_0;
		Il2CppChar* L_6;
		L_6 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&((L_4)->____pointer_0))->value, (L_5), (L_4)->____length_1);
		Il2CppChar L_7 = ___c0;
		*((int16_t*)L_6) = (int16_t)L_7;
		int32_t L_8 = V_0;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_002d:
	{
		Il2CppChar L_9 = ___c0;
		ValueStringBuilder_GrowAndAppend_m6D16FA902C6FA430EB2E0CE41562CA6A39FD6B18(__this, L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder_Append_m71B6E13363208B3F75815AF4A6CC2F6C02B2066D_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ValueStringBuilder_Append_m71B6E13363208B3F75815AF4A6CC2F6C02B2066D_inline(_thisAdjusted, ___c0, method);
}
// System.Void System.Text.ValueStringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_mD65BFDE00924F3EB0FD12A4C93600DD774D710E7 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		int32_t L_1 = __this->____pos_2;
		V_0 = L_1;
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_4 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_5 = (&__this->____chars_1);
		int32_t L_6;
		L_6 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_5, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((!(((uint32_t)L_4) < ((uint32_t)L_6))))
		{
			goto IL_0040;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_7 = (&__this->____chars_1);
		int32_t L_8 = V_0;
		Il2CppChar* L_9;
		L_9 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&((L_7)->____pointer_0))->value, (L_8), (L_7)->____length_1);
		String_t* L_10 = ___s0;
		NullCheck(L_10);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, 0, NULL);
		*((int16_t*)L_9) = (int16_t)L_11;
		int32_t L_12 = V_0;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}

IL_0040:
	{
		String_t* L_13 = ___s0;
		ValueStringBuilder_AppendSlow_mB8FA5062946A3F440123995DA504CB9590769A60(__this, L_13, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder_Append_mD65BFDE00924F3EB0FD12A4C93600DD774D710E7_AdjustorThunk (RuntimeObject* __this, String_t* ___s0, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ValueStringBuilder_Append_mD65BFDE00924F3EB0FD12A4C93600DD774D710E7_inline(_thisAdjusted, ___s0, method);
}
// System.Void System.Text.ValueStringBuilder::AppendSlow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_AppendSlow_mB8FA5062946A3F440123995DA504CB9590769A60 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->____pos_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_2 = (&__this->____chars_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_2, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		String_t* L_4 = ___s0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_5)))))
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		ValueStringBuilder_Grow_m3BD5B20A4E621AC246B7A60B04EE9F57FEFBAAAA(__this, L_7, NULL);
	}

IL_0028:
	{
		String_t* L_8 = ___s0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_9;
		L_9 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_8, NULL);
		V_1 = L_9;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_10 = (&__this->____chars_1);
		int32_t L_11 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		L_12 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline(L_10, L_11, Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030((&V_1), L_12, ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		int32_t L_13 = __this->____pos_2;
		String_t* L_14 = ___s0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_13, L_15));
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder_AppendSlow_mB8FA5062946A3F440123995DA504CB9590769A60_AdjustorThunk (RuntimeObject* __this, String_t* ___s0, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ValueStringBuilder_AppendSlow_mB8FA5062946A3F440123995DA504CB9590769A60(_thisAdjusted, ___s0, method);
}
// System.Void System.Text.ValueStringBuilder::Append(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_m5FB3434115E3B7B75407C27E138208554317A977 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____pos_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_1 = (&__this->____chars_1);
		int32_t L_2;
		L_2 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_1, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		int32_t L_3 = ___count1;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = ___count1;
		ValueStringBuilder_Grow_m3BD5B20A4E621AC246B7A60B04EE9F57FEFBAAAA(__this, L_4, NULL);
	}

IL_001c:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_5 = (&__this->____chars_1);
		int32_t L_6 = __this->____pos_2;
		int32_t L_7 = ___count1;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8;
		L_8 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_5, L_6, L_7, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0041;
	}

IL_0033:
	{
		int32_t L_9 = V_1;
		Il2CppChar* L_10;
		L_10 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&V_0))->____pointer_0))->value, (L_9), ((&V_0))->____length_1);
		Il2CppChar L_11 = ___c0;
		*((int16_t*)L_10) = (int16_t)L_11;
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0041:
	{
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&V_0), Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_15 = __this->____pos_2;
		int32_t L_16 = ___count1;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_15, L_16));
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder_Append_m5FB3434115E3B7B75407C27E138208554317A977_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ValueStringBuilder_Append_m5FB3434115E3B7B75407C27E138208554317A977(_thisAdjusted, ___c0, ___count1, method);
}
// System.Void System.Text.ValueStringBuilder::Append(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_mA89EC6995E316C491EE0A00164080BCADD8CFFA5 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, Il2CppChar* ___value0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____pos_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_2 = (&__this->____chars_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_2, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		int32_t L_4 = ___length1;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4)))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_5 = ___length1;
		ValueStringBuilder_Grow_m3BD5B20A4E621AC246B7A60B04EE9F57FEFBAAAA(__this, L_5, NULL);
	}

IL_001e:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_6 = (&__this->____chars_1);
		int32_t L_7 = __this->____pos_2;
		int32_t L_8 = ___length1;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_9;
		L_9 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_6, L_7, L_8, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		V_1 = L_9;
		V_2 = 0;
		goto IL_0049;
	}

IL_0035:
	{
		int32_t L_10 = V_2;
		Il2CppChar* L_11;
		L_11 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_10), ((&V_1))->____length_1);
		Il2CppChar* L_12 = ___value0;
		Il2CppChar* L_13 = L_12;
		___value0 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_13, 2));
		int32_t L_14 = *((uint16_t*)L_13);
		*((int16_t*)L_11) = (int16_t)L_14;
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0049:
	{
		int32_t L_16 = V_2;
		int32_t L_17;
		L_17 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&V_1), Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_18 = __this->____pos_2;
		int32_t L_19 = ___length1;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder_Append_mA89EC6995E316C491EE0A00164080BCADD8CFFA5_AdjustorThunk (RuntimeObject* __this, Il2CppChar* ___value0, int32_t ___length1, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ValueStringBuilder_Append_mA89EC6995E316C491EE0A00164080BCADD8CFFA5(_thisAdjusted, ___value0, ___length1, method);
}
// System.Void System.Text.ValueStringBuilder::Append(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_mBBB24E871F4D70FE2B8428F524F6CCEAD4024BFA (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____pos_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_2 = (&__this->____chars_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_2, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___value0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4)))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___value0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		ValueStringBuilder_Grow_m3BD5B20A4E621AC246B7A60B04EE9F57FEFBAAAA(__this, L_5, NULL);
	}

IL_002a:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_6 = (&__this->____chars_1);
		int32_t L_7 = __this->____pos_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8;
		L_8 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline(L_6, L_7, Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030((&___value0), L_8, ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		int32_t L_9 = __this->____pos_2;
		int32_t L_10;
		L_10 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___value0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder_Append_mBBB24E871F4D70FE2B8428F524F6CCEAD4024BFA_AdjustorThunk (RuntimeObject* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___value0, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ValueStringBuilder_Append_mBBB24E871F4D70FE2B8428F524F6CCEAD4024BFA(_thisAdjusted, ___value0, method);
}
// System.Span`1<System.Char> System.Text.ValueStringBuilder::AppendSpan(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ValueStringBuilder_AppendSpan_mD8EA197F63A0DC9686345FD68B2A5A035532EFCC (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___length0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____pos_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_2 = (&__this->____chars_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_2, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		int32_t L_4 = ___length0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4)))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_5 = ___length0;
		ValueStringBuilder_Grow_m3BD5B20A4E621AC246B7A60B04EE9F57FEFBAAAA(__this, L_5, NULL);
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = ___length0;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_8 = (&__this->____chars_1);
		int32_t L_9 = V_0;
		int32_t L_10 = ___length0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_11;
		L_11 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_8, L_9, L_10, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		return L_11;
	}
}
IL2CPP_EXTERN_C  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ValueStringBuilder_AppendSpan_mD8EA197F63A0DC9686345FD68B2A5A035532EFCC_AdjustorThunk (RuntimeObject* __this, int32_t ___length0, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D _returnValue;
	_returnValue = ValueStringBuilder_AppendSpan_mD8EA197F63A0DC9686345FD68B2A5A035532EFCC_inline(_thisAdjusted, ___length0, method);
	return _returnValue;
}
// System.Void System.Text.ValueStringBuilder::GrowAndAppend(System.Char)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_GrowAndAppend_m6D16FA902C6FA430EB2E0CE41562CA6A39FD6B18 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, Il2CppChar ___c0, const RuntimeMethod* method) 
{
	{
		ValueStringBuilder_Grow_m3BD5B20A4E621AC246B7A60B04EE9F57FEFBAAAA(__this, 1, NULL);
		Il2CppChar L_0 = ___c0;
		ValueStringBuilder_Append_m71B6E13363208B3F75815AF4A6CC2F6C02B2066D_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder_GrowAndAppend_m6D16FA902C6FA430EB2E0CE41562CA6A39FD6B18_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ValueStringBuilder_GrowAndAppend_m6D16FA902C6FA430EB2E0CE41562CA6A39FD6B18(_thisAdjusted, ___c0, method);
}
// System.Void System.Text.ValueStringBuilder::Grow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Grow_m3BD5B20A4E621AC246B7A60B04EE9F57FEFBAAAA (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___additionalCapacityBeyondPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_2;
	memset((&V_2), 0, sizeof(V_2));
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_0;
		L_0 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		int32_t L_1 = __this->____pos_2;
		int32_t L_2 = ___additionalCapacityBeyondPos0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_3 = (&__this->____chars_1);
		int32_t L_4;
		L_4 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_3, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)il2cpp_codegen_add(L_1, L_2)), ((int32_t)il2cpp_codegen_multiply(L_4, 2)), NULL);
		NullCheck(L_0);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6;
		L_6 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Char>::Rent(System.Int32) */, L_0, L_5);
		V_0 = L_6;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_7 = (&__this->____chars_1);
		int32_t L_8 = __this->____pos_2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_9;
		L_9 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_7, 0, L_8, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		V_2 = L_9;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_11;
		L_11 = Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98(L_10, Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E((&V_2), L_11, Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = __this->____arrayToReturnToPool_0;
		V_1 = L_12;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = L_13;
		V_3 = L_14;
		__this->____arrayToReturnToPool_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrayToReturnToPool_0), (void*)L_14);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = V_3;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_16;
		L_16 = Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98(L_15, Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		__this->____chars_1 = L_16;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = V_1;
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_18;
		L_18 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = V_1;
		NullCheck(L_18);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Char>::Return(T[],System.Boolean) */, L_18, L_19, (bool)0);
	}

IL_0070:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder_Grow_m3BD5B20A4E621AC246B7A60B04EE9F57FEFBAAAA_AdjustorThunk (RuntimeObject* __this, int32_t ___additionalCapacityBeyondPos0, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ValueStringBuilder_Grow_m3BD5B20A4E621AC246B7A60B04EE9F57FEFBAAAA(_thisAdjusted, ___additionalCapacityBeyondPos0, method);
}
// System.Void System.Text.ValueStringBuilder::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueStringBuilder_Dispose_mB72FDAE544AB72CBE78BA48C982B1C1744F4C721 (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____arrayToReturnToPool_0;
		V_0 = L_0;
		il2cpp_codegen_initobj(__this, sizeof(ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_2;
		L_2 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Char>::Return(T[],System.Boolean) */, L_2, L_3, (bool)0);
	}

IL_001d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ValueStringBuilder_Dispose_mB72FDAE544AB72CBE78BA48C982B1C1744F4C721_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A*>(__this + _offset);
	ValueStringBuilder_Dispose_mB72FDAE544AB72CBE78BA48C982B1C1744F4C721_inline(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Microsoft.Extensions.Internal.HashCodeCombiner::get_CombinedHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeCombiner_get_CombinedHash_mA98B348E24539488D4F458BD008811CECA5D82D2 (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* __this, const RuntimeMethod* method) 
{
	{
		int64_t* L_0 = (&__this->____combinedHash64_0);
		int32_t L_1;
		L_1 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t HashCodeCombiner_get_CombinedHash_mA98B348E24539488D4F458BD008811CECA5D82D2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = HashCodeCombiner_get_CombinedHash_mA98B348E24539488D4F458BD008811CECA5D82D2_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCodeCombiner__ctor_m7F65BB70C45C7F576868747896C74795DA4B9431 (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* __this, int64_t ___seed0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___seed0;
		__this->____combinedHash64_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void HashCodeCombiner__ctor_m7F65BB70C45C7F576868747896C74795DA4B9431_AdjustorThunk (RuntimeObject* __this, int64_t ___seed0, const RuntimeMethod* method)
{
	HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D*>(__this + _offset);
	HashCodeCombiner__ctor_m7F65BB70C45C7F576868747896C74795DA4B9431_inline(_thisAdjusted, ___seed0, method);
}
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::Add(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_mBDF58DB330B88AEFBC93BA7D24669FCA0BDB7284 (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* __this, RuntimeObject* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___e0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		HashCodeCombiner_Add_m1BF86C4A930E9EAF3EE2925DE5BFE9F5240DCE76_inline(__this, 0, NULL);
		return;
	}

IL_000b:
	{
		V_0 = 0;
		RuntimeObject* L_1 = ___e0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_4 = V_3;
					if (!L_4)
					{
						goto IL_0042;
					}
				}
				{
					RuntimeObject* L_5 = V_3;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0042:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_0016_1:
			{
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				RuntimeObject* L_8 = V_2;
				HashCodeCombiner_Add_m51DEECBFCAE37DD7D244132A6A2C30F92FFA5D87_inline(__this, L_8, NULL);
				int32_t L_9 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
			}

IL_0028_1:
			{
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		int32_t L_12 = V_0;
		HashCodeCombiner_Add_m1BF86C4A930E9EAF3EE2925DE5BFE9F5240DCE76_inline(__this, L_12, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void HashCodeCombiner_Add_mBDF58DB330B88AEFBC93BA7D24669FCA0BDB7284_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___e0, const RuntimeMethod* method)
{
	HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D*>(__this + _offset);
	HashCodeCombiner_Add_mBDF58DB330B88AEFBC93BA7D24669FCA0BDB7284_inline(_thisAdjusted, ___e0, method);
}
// System.Int32 Microsoft.Extensions.Internal.HashCodeCombiner::op_Implicit(Microsoft.Extensions.Internal.HashCodeCombiner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeCombiner_op_Implicit_mFE8C00E4EAB076498BF61980BE0AB509FA7C837F (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D ___self0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = HashCodeCombiner_get_CombinedHash_mA98B348E24539488D4F458BD008811CECA5D82D2_inline((&___self0), NULL);
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::Add(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m1BF86C4A930E9EAF3EE2925DE5BFE9F5240DCE76 (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____combinedHash64_0;
		int64_t L_1 = __this->____combinedHash64_0;
		int32_t L_2 = ___i0;
		__this->____combinedHash64_0 = ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(L_0<<5)), L_1))^((int64_t)L_2)));
		return;
	}
}
IL2CPP_EXTERN_C  void HashCodeCombiner_Add_m1BF86C4A930E9EAF3EE2925DE5BFE9F5240DCE76_AdjustorThunk (RuntimeObject* __this, int32_t ___i0, const RuntimeMethod* method)
{
	HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D*>(__this + _offset);
	HashCodeCombiner_Add_m1BF86C4A930E9EAF3EE2925DE5BFE9F5240DCE76_inline(_thisAdjusted, ___i0, method);
}
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m141FE360DA80661BEAA03176A0E311904D27FCCA (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000c;
	}

IL_0006:
	{
		String_t* L_1 = ___s0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		int32_t L_3 = V_0;
		HashCodeCombiner_Add_m1BF86C4A930E9EAF3EE2925DE5BFE9F5240DCE76_inline(__this, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void HashCodeCombiner_Add_m141FE360DA80661BEAA03176A0E311904D27FCCA_AdjustorThunk (RuntimeObject* __this, String_t* ___s0, const RuntimeMethod* method)
{
	HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D*>(__this + _offset);
	HashCodeCombiner_Add_m141FE360DA80661BEAA03176A0E311904D27FCCA_inline(_thisAdjusted, ___s0, method);
}
// System.Void Microsoft.Extensions.Internal.HashCodeCombiner::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m51DEECBFCAE37DD7D244132A6A2C30F92FFA5D87 (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___o0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___o0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		int32_t L_3 = V_0;
		HashCodeCombiner_Add_m1BF86C4A930E9EAF3EE2925DE5BFE9F5240DCE76_inline(__this, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void HashCodeCombiner_Add_m51DEECBFCAE37DD7D244132A6A2C30F92FFA5D87_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___o0, const RuntimeMethod* method)
{
	HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D*>(__this + _offset);
	HashCodeCombiner_Add_m51DEECBFCAE37DD7D244132A6A2C30F92FFA5D87_inline(_thisAdjusted, ___o0, method);
}
// Microsoft.Extensions.Internal.HashCodeCombiner Microsoft.Extensions.Internal.HashCodeCombiner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D HashCodeCombiner_Start_mC67A4D7419B6BDB770CA67778587B401BA1164B8 (const RuntimeMethod* method) 
{
	{
		HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D L_0;
		memset((&L_0), 0, sizeof(L_0));
		HashCodeCombiner__ctor_m7F65BB70C45C7F576868747896C74795DA4B9431_inline((&L_0), ((int64_t)((int32_t)5381)), /*hidden argument*/NULL);
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
// System.Void Microsoft.Extensions.Primitives.CancellationChangeToken::.ctor(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationChangeToken__ctor_m50E663376839332BD08D593C5D938C47BFA3F55E (CancellationChangeToken_t8A239246F4A5926729773EADF24383304A99CFE4* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) 
{
	{
		__this->___U3CActiveChangeCallbacksU3Ek__BackingField_0 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___cancellationToken0;
		__this->___U3CTokenU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CTokenU3Ek__BackingField_1))->____source_0), (void*)NULL);
		return;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.CancellationChangeToken::get_ActiveChangeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationChangeToken_get_ActiveChangeCallbacks_m7F46B4AEDF3449239C197AEEFA30AB052D886A9B (CancellationChangeToken_t8A239246F4A5926729773EADF24383304A99CFE4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CActiveChangeCallbacksU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Primitives.CancellationChangeToken::set_ActiveChangeCallbacks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationChangeToken_set_ActiveChangeCallbacks_m45F15D00347B46D3A3632ED6A873F29FEFCF4F79 (CancellationChangeToken_t8A239246F4A5926729773EADF24383304A99CFE4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CActiveChangeCallbacksU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.CancellationChangeToken::get_HasChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationChangeToken_get_HasChanged_mB178A362A284987AB423B82E4557CDAF995E3F39 (CancellationChangeToken_t8A239246F4A5926729773EADF24383304A99CFE4* __this, const RuntimeMethod* method) 
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0;
		L_0 = CancellationChangeToken_get_Token_mB1FFD354FA96636D4C4073DEEE6C8B48AA11D6A8_inline(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&V_0), NULL);
		return L_1;
	}
}
// System.Threading.CancellationToken Microsoft.Extensions.Primitives.CancellationChangeToken::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationChangeToken_get_Token_mB1FFD354FA96636D4C4073DEEE6C8B48AA11D6A8 (CancellationChangeToken_t8A239246F4A5926729773EADF24383304A99CFE4* __this, const RuntimeMethod* method) 
{
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->___U3CTokenU3Ek__BackingField_1;
		return L_0;
	}
}
// System.IDisposable Microsoft.Extensions.Primitives.CancellationChangeToken::RegisterChangeCallback(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CancellationChangeToken_RegisterChangeCallback_m06E3BAB3BA6802B708D7BAD2FA150D84BF9E6AF4 (CancellationChangeToken_t8A239246F4A5926729773EADF24383304A99CFE4* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callback0, RuntimeObject* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = ExecutionContext_IsFlowSuppressed_m307C8462F6006452BF19416E8257AE94508049C9(NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		AsyncFlowControl_t1BB65380CA8AA973CAE0814179796E762403EF92 L_1;
		L_1 = ExecutionContext_SuppressFlow_mFE0FD20AC0849AFCA8B1A7E8AE52A0CC3CC0272B(NULL);
		V_0 = (bool)1;
	}

IL_0011:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_0;
					if (!L_2)
					{
						goto IL_003c;
					}
				}
				{
					il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
					ExecutionContext_RestoreFlow_mCADCBD6E3BCE7D109A59FEFFA8A245C33C678A8A(NULL);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
				L_3 = CancellationChangeToken_get_Token_mB1FFD354FA96636D4C4073DEEE6C8B48AA11D6A8_inline(__this, NULL);
				V_1 = L_3;
				Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ___callback0;
				RuntimeObject* L_5 = ___state1;
				CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_6;
				L_6 = CancellationToken_Register_m3FF09C47C4EE3D6677023BE242DF174594B81859((&V_1), L_4, L_5, NULL);
				CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_7 = L_6;
				RuntimeObject* L_8 = Box(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var, &L_7);
				V_2 = (RuntimeObject*)L_8;
				goto IL_0043;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_002a_1;
				}
				throw e;
			}

CATCH_002a_1:
			{// begin catch(System.ObjectDisposedException)
				CancellationChangeToken_set_ActiveChangeCallbacks_m45F15D00347B46D3A3632ED6A873F29FEFCF4F79_inline(__this, (bool)0, NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_003d;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		il2cpp_codegen_runtime_class_init_inline(NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783_il2cpp_TypeInfo_var);
		NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783* L_9 = ((NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783_StaticFields*)il2cpp_codegen_static_fields_for(NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783_il2cpp_TypeInfo_var))->___Instance_0;
		return L_9;
	}

IL_0043:
	{
		RuntimeObject* L_10 = V_2;
		return L_10;
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
// System.Void Microsoft.Extensions.Primitives.CancellationChangeToken/NullDisposable::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullDisposable_Dispose_m5C6EF1A2D3E962AF4CF711A11471F043B461D059 (NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Primitives.CancellationChangeToken/NullDisposable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullDisposable__ctor_m88FE6F9051480E004C251EC079AD4BE57FBED715 (NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Primitives.CancellationChangeToken/NullDisposable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullDisposable__cctor_m6E9D70B4FEE960FC1F9F57BD9D6B43CDB43CE28A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783* L_0 = (NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783*)il2cpp_codegen_object_new(NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NullDisposable__ctor_m88FE6F9051480E004C251EC079AD4BE57FBED715(L_0, NULL);
		((NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783_StaticFields*)il2cpp_codegen_static_fields_for(NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783_StaticFields*)il2cpp_codegen_static_fields_for(NullDisposable_tC5C536C037FA9741DF8DA5AE2DD9EF064BC0E783_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
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
// System.IDisposable Microsoft.Extensions.Primitives.ChangeToken::OnChange(System.Func`1<Microsoft.Extensions.Primitives.IChangeToken>,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChangeToken_OnChange_m6707303C4B500A239C947C9869F205B4360560E8 (Func_1_t6C80A64083C62B959A18BE3345BBEDD49165891B* ___changeTokenProducer0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___changeTokenConsumer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3137749576010DD307B29662A2E47C43C7F7D04C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeTokenRegistration_1__ctor_m1C7C24FD4002D0CB8692C4B353424C6143764755_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeTokenRegistration_1_tAC55EB34CD2A589FFDE276FBF20E6987055C3228_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnChangeU3Eb__0_0_mEF04A376EF86BDC978BFFD970D2BB4EB828EE25F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3137749576010DD307B29662A2E47C43C7F7D04C* G_B6_0 = NULL;
	Func_1_t6C80A64083C62B959A18BE3345BBEDD49165891B* G_B6_1 = NULL;
	Action_1_t3137749576010DD307B29662A2E47C43C7F7D04C* G_B5_0 = NULL;
	Func_1_t6C80A64083C62B959A18BE3345BBEDD49165891B* G_B5_1 = NULL;
	{
		Func_1_t6C80A64083C62B959A18BE3345BBEDD49165891B* L_0 = ___changeTokenProducer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF7B6F2693161F3E2D2D919BBDBF555A5AD41F71)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChangeToken_OnChange_m6707303C4B500A239C947C9869F205B4360560E8_RuntimeMethod_var)));
	}

IL_000e:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___changeTokenConsumer1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AE8234F3A25D04BF2F28CAD03A3E970785334E9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChangeToken_OnChange_m6707303C4B500A239C947C9869F205B4360560E8_RuntimeMethod_var)));
	}

IL_001c:
	{
		Func_1_t6C80A64083C62B959A18BE3345BBEDD49165891B* L_4 = ___changeTokenProducer0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_il2cpp_TypeInfo_var);
		Action_1_t3137749576010DD307B29662A2E47C43C7F7D04C* L_5 = ((U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Action_1_t3137749576010DD307B29662A2E47C43C7F7D04C* L_6 = L_5;
		G_B5_0 = L_6;
		G_B5_1 = L_4;
		if (L_6)
		{
			G_B6_0 = L_6;
			G_B6_1 = L_4;
			goto IL_003c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_il2cpp_TypeInfo_var);
		U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C* L_7 = ((U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t3137749576010DD307B29662A2E47C43C7F7D04C* L_8 = (Action_1_t3137749576010DD307B29662A2E47C43C7F7D04C*)il2cpp_codegen_object_new(Action_1_t3137749576010DD307B29662A2E47C43C7F7D04C_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_mFA877965916B8B97F7CC0928953439734751D90F(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3COnChangeU3Eb__0_0_mEF04A376EF86BDC978BFFD970D2BB4EB828EE25F_RuntimeMethod_var), NULL);
		Action_1_t3137749576010DD307B29662A2E47C43C7F7D04C* L_9 = L_8;
		((U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_9);
		G_B6_0 = L_9;
		G_B6_1 = G_B5_1;
	}

IL_003c:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = ___changeTokenConsumer1;
		ChangeTokenRegistration_1_tAC55EB34CD2A589FFDE276FBF20E6987055C3228* L_11 = (ChangeTokenRegistration_1_tAC55EB34CD2A589FFDE276FBF20E6987055C3228*)il2cpp_codegen_object_new(ChangeTokenRegistration_1_tAC55EB34CD2A589FFDE276FBF20E6987055C3228_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ChangeTokenRegistration_1__ctor_m1C7C24FD4002D0CB8692C4B353424C6143764755(L_11, G_B6_1, G_B6_0, L_10, ChangeTokenRegistration_1__ctor_m1C7C24FD4002D0CB8692C4B353424C6143764755_RuntimeMethod_var);
		return L_11;
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
// System.Void Microsoft.Extensions.Primitives.ChangeToken/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m76CFB7896AF30E56A12B25DC343C5E6508E7C3D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C* L_0 = (U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C*)il2cpp_codegen_object_new(U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mB5557195D56559CDD06FD64191FE96EC650010EF(L_0, NULL);
		((U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Extensions.Primitives.ChangeToken/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB5557195D56559CDD06FD64191FE96EC650010EF (U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Primitives.ChangeToken/<>c::<OnChange>b__0_0(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnChangeU3Eb__0_0_mEF04A376EF86BDC978BFFD970D2BB4EB828EE25F (U3CU3Ec_tF758CBE1C59DB1ED64CDA71D8B67162F1C84575C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback0, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___callback0;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
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
// System.Void Microsoft.Extensions.Primitives.CompositeChangeToken::.ctor(System.Collections.Generic.IReadOnlyList`1<Microsoft.Extensions.Primitives.IChangeToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeChangeToken__ctor_m8D816C023F03F57286420B2A09E2EABFAF6299C2 (CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B* __this, RuntimeObject* ___changeTokens0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChangeToken_tB14C21F22F312048580D1201C9162D542478E1E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t56239D955EA743E49C018AB27DC01D6688C3858D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1B8586830493B3849734231A6150B4844C4BA276_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* G_B2_0 = NULL;
	CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->____callbackLock_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____callbackLock_1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_1 = ___changeTokens0;
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral123EAF9538507C08A07445DAE9C88F0397B65DB2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompositeChangeToken__ctor_m8D816C023F03F57286420B2A09E2EABFAF6299C2_RuntimeMethod_var)));
	}

IL_0022:
	{
		NullCheck(G_B2_1);
		G_B2_1->___U3CChangeTokensU3Ek__BackingField_5 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___U3CChangeTokensU3Ek__BackingField_5), (void*)G_B2_0);
		V_0 = 0;
		goto IL_004a;
	}

IL_002b:
	{
		RuntimeObject* L_4;
		L_4 = CompositeChangeToken_get_ChangeTokens_m88E933B2C65F6169F97E4C5F50B8D1DC10EBCEB0_inline(__this, NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Microsoft.Extensions.Primitives.IChangeToken>::get_Item(System.Int32) */, IReadOnlyList_1_t1B8586830493B3849734231A6150B4844C4BA276_il2cpp_TypeInfo_var, L_4, L_5);
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Microsoft.Extensions.Primitives.IChangeToken::get_ActiveChangeCallbacks() */, IChangeToken_tB14C21F22F312048580D1201C9162D542478E1E8_il2cpp_TypeInfo_var, L_6);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		__this->___U3CActiveChangeCallbacksU3Ek__BackingField_6 = (bool)1;
		return;
	}

IL_0046:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_004a:
	{
		int32_t L_9 = V_0;
		RuntimeObject* L_10;
		L_10 = CompositeChangeToken_get_ChangeTokens_m88E933B2C65F6169F97E4C5F50B8D1DC10EBCEB0_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.Extensions.Primitives.IChangeToken>::get_Count() */, IReadOnlyCollection_1_t56239D955EA743E49C018AB27DC01D6688C3858D_il2cpp_TypeInfo_var, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_002b;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Extensions.Primitives.IChangeToken> Microsoft.Extensions.Primitives.CompositeChangeToken::get_ChangeTokens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompositeChangeToken_get_ChangeTokens_m88E933B2C65F6169F97E4C5F50B8D1DC10EBCEB0 (CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CChangeTokensU3Ek__BackingField_5;
		return L_0;
	}
}
// System.IDisposable Microsoft.Extensions.Primitives.CompositeChangeToken::RegisterChangeCallback(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompositeChangeToken_RegisterChangeCallback_m8619525F92CAEF43BAAEEF29A93DD1022FE6465A (CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callback0, RuntimeObject* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CompositeChangeToken_EnsureCallbacksInitialized_m9FB964C9F4A63949D2C28709086C2AACA8E7F440(__this, NULL);
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = __this->____cancellationTokenSource_2;
		NullCheck(L_0);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1;
		L_1 = CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4(L_0, NULL);
		V_0 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___callback0;
		RuntimeObject* L_3 = ___state1;
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_4;
		L_4 = CancellationToken_Register_m3FF09C47C4EE3D6677023BE242DF174594B81859((&V_0), L_2, L_3, NULL);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_5 = L_4;
		RuntimeObject* L_6 = Box(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var, &L_5);
		return (RuntimeObject*)L_6;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.CompositeChangeToken::get_HasChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompositeChangeToken_get_HasChanged_mA0A46946616E30EBFE09DE864AD5139BB5B1890C (CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChangeToken_tB14C21F22F312048580D1201C9162D542478E1E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t56239D955EA743E49C018AB27DC01D6688C3858D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1B8586830493B3849734231A6150B4844C4BA276_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = __this->____cancellationTokenSource_2;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_1 = __this->____cancellationTokenSource_2;
		NullCheck(L_1);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2;
		L_2 = CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4(L_1, NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&V_0), NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		return (bool)1;
	}

IL_001f:
	{
		V_1 = 0;
		goto IL_0042;
	}

IL_0023:
	{
		RuntimeObject* L_4;
		L_4 = CompositeChangeToken_get_ChangeTokens_m88E933B2C65F6169F97E4C5F50B8D1DC10EBCEB0_inline(__this, NULL);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Microsoft.Extensions.Primitives.IChangeToken>::get_Item(System.Int32) */, IReadOnlyList_1_t1B8586830493B3849734231A6150B4844C4BA276_il2cpp_TypeInfo_var, L_4, L_5);
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.Extensions.Primitives.IChangeToken::get_HasChanged() */, IChangeToken_tB14C21F22F312048580D1201C9162D542478E1E8_il2cpp_TypeInfo_var, L_6);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B_il2cpp_TypeInfo_var);
		CompositeChangeToken_OnChange_m2193D178F3DF8047C34B098A66F9E2273D9B8FC7(__this, NULL);
		return (bool)1;
	}

IL_003e:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0042:
	{
		int32_t L_9 = V_1;
		RuntimeObject* L_10;
		L_10 = CompositeChangeToken_get_ChangeTokens_m88E933B2C65F6169F97E4C5F50B8D1DC10EBCEB0_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.Extensions.Primitives.IChangeToken>::get_Count() */, IReadOnlyCollection_1_t56239D955EA743E49C018AB27DC01D6688C3858D_il2cpp_TypeInfo_var, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.CompositeChangeToken::get_ActiveChangeCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompositeChangeToken_get_ActiveChangeCallbacks_m923C622EABBCB62B1DF301B8BBA6C7161455FB1C (CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CActiveChangeCallbacksU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Primitives.CompositeChangeToken::EnsureCallbacksInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeChangeToken_EnsureCallbacksInitialized_m9FB964C9F4A63949D2C28709086C2AACA8E7F440 (CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChangeToken_tB14C21F22F312048580D1201C9162D542478E1E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t56239D955EA743E49C018AB27DC01D6688C3858D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t1B8586830493B3849734231A6150B4844C4BA276_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3E57006B1E4E3BF3DC969B90445C1E58B246619D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB4C51AD04BB1308274A370FED1FA4A1651C5766F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		bool L_0 = __this->____registeredCallbackProxy_3;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		RuntimeObject* L_1 = __this->____callbackLock_1;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0090:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0099;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0099:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				bool L_5 = __this->____registeredCallbackProxy_3;
				if (!L_5)
				{
					goto IL_0024_1;
				}
			}
			{
				goto IL_009a;
			}

IL_0024_1:
			{
				CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_6 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)il2cpp_codegen_object_new(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C(L_6, NULL);
				__this->____cancellationTokenSource_2 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____cancellationTokenSource_2), (void*)L_6);
				List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* L_7 = (List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05*)il2cpp_codegen_object_new(List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				List_1__ctor_mB4C51AD04BB1308274A370FED1FA4A1651C5766F(L_7, List_1__ctor_mB4C51AD04BB1308274A370FED1FA4A1651C5766F_RuntimeMethod_var);
				__this->____disposables_4 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____disposables_4), (void*)L_7);
				V_2 = 0;
				goto IL_0079_1;
			}

IL_003e_1:
			{
				RuntimeObject* L_8;
				L_8 = CompositeChangeToken_get_ChangeTokens_m88E933B2C65F6169F97E4C5F50B8D1DC10EBCEB0_inline(__this, NULL);
				int32_t L_9 = V_2;
				NullCheck(L_8);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Microsoft.Extensions.Primitives.IChangeToken>::get_Item(System.Int32) */, IReadOnlyList_1_t1B8586830493B3849734231A6150B4844C4BA276_il2cpp_TypeInfo_var, L_8, L_9);
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Microsoft.Extensions.Primitives.IChangeToken::get_ActiveChangeCallbacks() */, IChangeToken_tB14C21F22F312048580D1201C9162D542478E1E8_il2cpp_TypeInfo_var, L_10);
				if (!L_11)
				{
					goto IL_0075_1;
				}
			}
			{
				RuntimeObject* L_12;
				L_12 = CompositeChangeToken_get_ChangeTokens_m88E933B2C65F6169F97E4C5F50B8D1DC10EBCEB0_inline(__this, NULL);
				int32_t L_13 = V_2;
				NullCheck(L_12);
				RuntimeObject* L_14;
				L_14 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<Microsoft.Extensions.Primitives.IChangeToken>::get_Item(System.Int32) */, IReadOnlyList_1_t1B8586830493B3849734231A6150B4844C4BA276_il2cpp_TypeInfo_var, L_12, L_13);
				il2cpp_codegen_runtime_class_init_inline(CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B_il2cpp_TypeInfo_var);
				Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_15 = ((CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B_StaticFields*)il2cpp_codegen_static_fields_for(CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B_il2cpp_TypeInfo_var))->____onChangeDelegate_0;
				NullCheck(L_14);
				RuntimeObject* L_16;
				L_16 = InterfaceFuncInvoker2< RuntimeObject*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(2 /* System.IDisposable Microsoft.Extensions.Primitives.IChangeToken::RegisterChangeCallback(System.Action`1<System.Object>,System.Object) */, IChangeToken_tB14C21F22F312048580D1201C9162D542478E1E8_il2cpp_TypeInfo_var, L_14, L_15, __this);
				V_3 = L_16;
				List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* L_17 = __this->____disposables_4;
				RuntimeObject* L_18 = V_3;
				NullCheck(L_17);
				List_1_Add_m3E57006B1E4E3BF3DC969B90445C1E58B246619D_inline(L_17, L_18, List_1_Add_m3E57006B1E4E3BF3DC969B90445C1E58B246619D_RuntimeMethod_var);
			}

IL_0075_1:
			{
				int32_t L_19 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
			}

IL_0079_1:
			{
				int32_t L_20 = V_2;
				RuntimeObject* L_21;
				L_21 = CompositeChangeToken_get_ChangeTokens_m88E933B2C65F6169F97E4C5F50B8D1DC10EBCEB0_inline(__this, NULL);
				NullCheck(L_21);
				int32_t L_22;
				L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.Extensions.Primitives.IChangeToken>::get_Count() */, IReadOnlyCollection_1_t56239D955EA743E49C018AB27DC01D6688C3858D_il2cpp_TypeInfo_var, L_21);
				if ((((int32_t)L_20) < ((int32_t)L_22)))
				{
					goto IL_003e_1;
				}
			}
			{
				__this->____registeredCallbackProxy_3 = (bool)1;
				goto IL_009a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009a:
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Primitives.CompositeChangeToken::OnChange(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeChangeToken_OnChange_m2193D178F3DF8047C34B098A66F9E2273D9B8FC7 (RuntimeObject* ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCBCCB576B0AE4B4F273E4547424F1892F9AFEA10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mACBC5D11FA8B9B7269C23FAD9CC5B77EB29E2E7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B* V_0 = NULL;
	List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___state0;
		V_0 = ((CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B*)CastclassClass((RuntimeObject*)L_0, CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B_il2cpp_TypeInfo_var));
		CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B* L_1 = V_0;
		NullCheck(L_1);
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_2 = L_1->____cancellationTokenSource_2;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->____callbackLock_1;
		V_2 = L_4;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				{
					bool L_5 = V_3;
					if (!L_5)
					{
						goto IL_003a;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_003a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_7 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, (&V_3), NULL);
			}
			try
			{// begin try (depth: 2)
				CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B* L_8 = V_0;
				NullCheck(L_8);
				CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_9 = L_8->____cancellationTokenSource_2;
				NullCheck(L_9);
				CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B(L_9, NULL);
				goto IL_003b;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_002e_1;
				}
				throw e;
			}

CATCH_002e_1:
			{// begin catch(System.Object)
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_003b;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B* L_10 = V_0;
		NullCheck(L_10);
		List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* L_11 = L_10->____disposables_4;
		V_1 = L_11;
		V_4 = 0;
		goto IL_005a;
	}

IL_0047:
	{
		List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		RuntimeObject* L_14;
		L_14 = List_1_get_Item_mACBC5D11FA8B9B7269C23FAD9CC5B77EB29E2E7E(L_12, L_13, List_1_get_Item_mACBC5D11FA8B9B7269C23FAD9CC5B77EB29E2E7E_RuntimeMethod_var);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005a:
	{
		int32_t L_16 = V_4;
		List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mCBCCB576B0AE4B4F273E4547424F1892F9AFEA10_inline(L_17, List_1_get_Count_mCBCCB576B0AE4B4F273E4547424F1892F9AFEA10_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0047;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.Extensions.Primitives.CompositeChangeToken::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeChangeToken__cctor_m7B388010CADC7E228A31254A7591E3FBFA70C885 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompositeChangeToken_OnChange_m2193D178F3DF8047C34B098A66F9E2273D9B8FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)CompositeChangeToken_OnChange_m2193D178F3DF8047C34B098A66F9E2273D9B8FC7_RuntimeMethod_var), NULL);
		((CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B_StaticFields*)il2cpp_codegen_static_fields_for(CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B_il2cpp_TypeInfo_var))->____onChangeDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B_StaticFields*)il2cpp_codegen_static_fields_for(CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B_il2cpp_TypeInfo_var))->____onChangeDelegate_0), (void*)L_0);
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
// System.Text.StringBuilder Microsoft.Extensions.Primitives.Extensions::Append(System.Text.StringBuilder,Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* Extensions_Append_mE4C99C6815F977FAD7F1632258860AB804813065 (StringBuilder_t* ___builder0, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___segment1, const RuntimeMethod* method) 
{
	{
		StringBuilder_t* L_0 = ___builder0;
		String_t* L_1;
		L_1 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline((&___segment1), NULL);
		int32_t L_2;
		L_2 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline((&___segment1), NULL);
		int32_t L_3;
		L_3 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline((&___segment1), NULL);
		NullCheck(L_0);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_0, L_1, L_2, L_3, NULL);
		return L_4;
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
// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringSegment
IL2CPP_EXTERN_C void StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_pinvoke(const StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91& unmarshaled, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CBufferU3Ek__BackingField_1 = il2cpp_codegen_marshal_string(unmarshaled.___U3CBufferU3Ek__BackingField_1);
	marshaled.___U3COffsetU3Ek__BackingField_2 = unmarshaled.___U3COffsetU3Ek__BackingField_2;
	marshaled.___U3CLengthU3Ek__BackingField_3 = unmarshaled.___U3CLengthU3Ek__BackingField_3;
}
IL2CPP_EXTERN_C void StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_pinvoke_back(const StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_pinvoke& marshaled, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91& unmarshaled)
{
	unmarshaled.___U3CBufferU3Ek__BackingField_1 = il2cpp_codegen_marshal_string_result(marshaled.___U3CBufferU3Ek__BackingField_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CBufferU3Ek__BackingField_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___U3CBufferU3Ek__BackingField_1));
	int32_t unmarshaledU3COffsetU3Ek__BackingField_temp_1 = 0;
	unmarshaledU3COffsetU3Ek__BackingField_temp_1 = marshaled.___U3COffsetU3Ek__BackingField_2;
	unmarshaled.___U3COffsetU3Ek__BackingField_2 = unmarshaledU3COffsetU3Ek__BackingField_temp_1;
	int32_t unmarshaledU3CLengthU3Ek__BackingField_temp_2 = 0;
	unmarshaledU3CLengthU3Ek__BackingField_temp_2 = marshaled.___U3CLengthU3Ek__BackingField_3;
	unmarshaled.___U3CLengthU3Ek__BackingField_3 = unmarshaledU3CLengthU3Ek__BackingField_temp_2;
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringSegment
IL2CPP_EXTERN_C void StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_pinvoke_cleanup(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CBufferU3Ek__BackingField_1);
	marshaled.___U3CBufferU3Ek__BackingField_1 = NULL;
}
// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringSegment
IL2CPP_EXTERN_C void StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_com(const StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91& unmarshaled, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_com& marshaled)
{
	marshaled.___U3CBufferU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___U3CBufferU3Ek__BackingField_1);
	marshaled.___U3COffsetU3Ek__BackingField_2 = unmarshaled.___U3COffsetU3Ek__BackingField_2;
	marshaled.___U3CLengthU3Ek__BackingField_3 = unmarshaled.___U3CLengthU3Ek__BackingField_3;
}
IL2CPP_EXTERN_C void StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_com_back(const StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_com& marshaled, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91& unmarshaled)
{
	unmarshaled.___U3CBufferU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___U3CBufferU3Ek__BackingField_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CBufferU3Ek__BackingField_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___U3CBufferU3Ek__BackingField_1));
	int32_t unmarshaledU3COffsetU3Ek__BackingField_temp_1 = 0;
	unmarshaledU3COffsetU3Ek__BackingField_temp_1 = marshaled.___U3COffsetU3Ek__BackingField_2;
	unmarshaled.___U3COffsetU3Ek__BackingField_2 = unmarshaledU3COffsetU3Ek__BackingField_temp_1;
	int32_t unmarshaledU3CLengthU3Ek__BackingField_temp_2 = 0;
	unmarshaledU3CLengthU3Ek__BackingField_temp_2 = marshaled.___U3CLengthU3Ek__BackingField_3;
	unmarshaled.___U3CLengthU3Ek__BackingField_3 = unmarshaledU3CLengthU3Ek__BackingField_temp_2;
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringSegment
IL2CPP_EXTERN_C void StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_com_cleanup(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CBufferU3Ek__BackingField_1);
	marshaled.___U3CBufferU3Ek__BackingField_1 = NULL;
}
// System.Void Microsoft.Extensions.Primitives.StringSegment::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegment__ctor_mC935BFECAC01086B0B9708C016FB4EA67B1A8DF7 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, String_t* ___buffer0, const RuntimeMethod* method) 
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* G_B2_0 = NULL;
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* G_B3_1 = NULL;
	{
		String_t* L_0 = ___buffer0;
		__this->___U3CBufferU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBufferU3Ek__BackingField_1), (void*)L_0);
		__this->___U3COffsetU3Ek__BackingField_2 = 0;
		String_t* L_1 = ___buffer0;
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0015:
	{
		String_t* L_2 = ___buffer0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		G_B3_1->___U3CLengthU3Ek__BackingField_3 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void StringSegment__ctor_mC935BFECAC01086B0B9708C016FB4EA67B1A8DF7_AdjustorThunk (RuntimeObject* __this, String_t* ___buffer0, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	StringSegment__ctor_mC935BFECAC01086B0B9708C016FB4EA67B1A8DF7(_thisAdjusted, ___buffer0, method);
}
// System.Void Microsoft.Extensions.Primitives.StringSegment::.ctor(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegment__ctor_m676980906628B81CDA65E232AF0EC1AE45EFA992 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, String_t* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___buffer0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___offset1;
		String_t* L_2 = ___buffer0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((!(((uint32_t)L_1) <= ((uint32_t)L_3))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_4 = ___length2;
		String_t* L_5 = ___buffer0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		int32_t L_7 = ___offset1;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))))))
		{
			goto IL_001f;
		}
	}

IL_0017:
	{
		String_t* L_8 = ___buffer0;
		int32_t L_9 = ___offset1;
		int32_t L_10 = ___length2;
		il2cpp_codegen_runtime_class_init_inline(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var);
		StringSegment_ThrowInvalidArguments_mF3FC47196407DFDB2F1A409DD14C4ABD7A2651BB(L_8, L_9, L_10, NULL);
	}

IL_001f:
	{
		String_t* L_11 = ___buffer0;
		__this->___U3CBufferU3Ek__BackingField_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBufferU3Ek__BackingField_1), (void*)L_11);
		int32_t L_12 = ___offset1;
		__this->___U3COffsetU3Ek__BackingField_2 = L_12;
		int32_t L_13 = ___length2;
		__this->___U3CLengthU3Ek__BackingField_3 = L_13;
		return;
	}
}
IL2CPP_EXTERN_C  void StringSegment__ctor_m676980906628B81CDA65E232AF0EC1AE45EFA992_AdjustorThunk (RuntimeObject* __this, String_t* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	StringSegment__ctor_m676980906628B81CDA65E232AF0EC1AE45EFA992_inline(_thisAdjusted, ___buffer0, ___offset1, ___length2, method);
}
// System.String Microsoft.Extensions.Primitives.StringSegment::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CBufferU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3COffsetU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Primitives.StringSegment::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringSegment_get_Value_mE407D9CAF5FB71A173D322100019E40C116A8462 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5(__this, NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_1;
		L_1 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		int32_t L_2;
		L_2 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_3;
		L_3 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		NullCheck(L_1);
		String_t* L_4;
		L_4 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_1, L_2, L_3, NULL);
		return L_4;
	}

IL_0020:
	{
		return (String_t*)NULL;
	}
}
IL2CPP_EXTERN_C  String_t* StringSegment_get_Value_mE407D9CAF5FB71A173D322100019E40C116A8462_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StringSegment_get_Value_mE407D9CAF5FB71A173D322100019E40C116A8462(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::get_HasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		return (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	bool _returnValue;
	_returnValue = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5(_thisAdjusted, method);
	return _returnValue;
}
// System.Char Microsoft.Extensions.Primitives.StringSegment::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringSegment_get_Item_m7A7FA25298808FD10B5279E7FFCFF6A38EE5C2A9 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1;
		L_1 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5753DB221AF0A5BD32B5B86378CF16954F34D7EC(6, NULL);
	}

IL_000f:
	{
		String_t* L_2;
		L_2 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		int32_t L_3;
		L_3 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_4 = ___index0;
		NullCheck(L_2);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, ((int32_t)il2cpp_codegen_add(L_3, L_4)), NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  Il2CppChar StringSegment_get_Item_m7A7FA25298808FD10B5279E7FFCFF6A38EE5C2A9_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	Il2CppChar _returnValue;
	_returnValue = StringSegment_get_Item_m7A7FA25298808FD10B5279E7FFCFF6A38EE5C2A9(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.ReadOnlySpan`1<System.Char> Microsoft.Extensions.Primitives.StringSegment::AsSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 StringSegment_AsSpan_mA29C031A1FC86AFEE5380B91818E18633BC0D366 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		int32_t L_1;
		L_1 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_2;
		L_2 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
		L_3 = MemoryExtensions_AsSpan_m8409F3DA0EF95BF6B3A8741E5C56E729B0A824C6_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 StringSegment_AsSpan_mA29C031A1FC86AFEE5380B91818E18633BC0D366_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 _returnValue;
	_returnValue = StringSegment_AsSpan_mA29C031A1FC86AFEE5380B91818E18633BC0D366(_thisAdjusted, method);
	return _returnValue;
}
// System.ReadOnlyMemory`1<System.Char> Microsoft.Extensions.Primitives.StringSegment::AsMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t9495785584BC99CFCF956B34621F038E83C257D6 StringSegment_AsMemory_m0FA1A0294C4B9AD89C05A6AB3749DC279DD3041D (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		int32_t L_1;
		L_1 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_2;
		L_2 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		ReadOnlyMemory_1_t9495785584BC99CFCF956B34621F038E83C257D6 L_3;
		L_3 = MemoryExtensions_AsMemory_m012EE69ACEE433EE3B5AB2A23298C2A7A66FC62D(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  ReadOnlyMemory_1_t9495785584BC99CFCF956B34621F038E83C257D6 StringSegment_AsMemory_m0FA1A0294C4B9AD89C05A6AB3749DC279DD3041D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	ReadOnlyMemory_1_t9495785584BC99CFCF956B34621F038E83C257D6 _returnValue;
	_returnValue = StringSegment_AsMemory_m0FA1A0294C4B9AD89C05A6AB3749DC279DD3041D(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::Compare(Microsoft.Extensions.Primitives.StringSegment,Microsoft.Extensions.Primitives.StringSegment,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_Compare_m4FE69AAAAE1916F858E23463F1EB928EDF2EDA59 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___a0, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___b1, int32_t ___comparisonType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline((&___a0), NULL);
		int32_t L_1;
		L_1 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline((&___b1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_0, L_1, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline((&___a0), NULL);
		int32_t L_4;
		L_4 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline((&___a0), NULL);
		String_t* L_5;
		L_5 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline((&___b1), NULL);
		int32_t L_6;
		L_6 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline((&___b1), NULL);
		int32_t L_7 = V_0;
		int32_t L_8 = ___comparisonType2;
		int32_t L_9;
		L_9 = String_Compare_m68FBA6075A0142439B0249D884863356D99090CF(L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		V_1 = L_9;
		int32_t L_10 = V_1;
		if (L_10)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_11;
		L_11 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline((&___a0), NULL);
		int32_t L_12;
		L_12 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline((&___b1), NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
	}

IL_004b:
	{
		int32_t L_13 = V_1;
		return L_13;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_m2A35EE2AA3B4C6CD850317E8CD44F5E1946009DE (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 V_0;
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
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = ___obj0;
		V_0 = ((*(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*)((StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*)(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*)UnBox(L_2, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var))));
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_3 = V_0;
		bool L_4;
		L_4 = StringSegment_Equals_mB472D631CA8F7BD839573D068BE51064A04341DF(__this, L_3, NULL);
		return L_4;
	}

IL_001c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool StringSegment_Equals_m2A35EE2AA3B4C6CD850317E8CD44F5E1946009DE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	bool _returnValue;
	_returnValue = StringSegment_Equals_m2A35EE2AA3B4C6CD850317E8CD44F5E1946009DE(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_mB472D631CA8F7BD839573D068BE51064A04341DF (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___other0, const RuntimeMethod* method) 
{
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_0 = ___other0;
		bool L_1;
		L_1 = StringSegment_Equals_m86A8E734AAA588028E650342535929EF513022C2(__this, L_0, 4, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool StringSegment_Equals_mB472D631CA8F7BD839573D068BE51064A04341DF_AdjustorThunk (RuntimeObject* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___other0, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	bool _returnValue;
	_returnValue = StringSegment_Equals_mB472D631CA8F7BD839573D068BE51064A04341DF(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(Microsoft.Extensions.Primitives.StringSegment,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_m86A8E734AAA588028E650342535929EF513022C2 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___other0, int32_t ___comparisonType1, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		int32_t L_1;
		L_1 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline((&___other0), NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		String_t* L_2;
		L_2 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		int32_t L_3;
		L_3 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		String_t* L_4;
		L_4 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline((&___other0), NULL);
		int32_t L_5;
		L_5 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline((&___other0), NULL);
		int32_t L_6;
		L_6 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline((&___other0), NULL);
		int32_t L_7 = ___comparisonType1;
		int32_t L_8;
		L_8 = String_Compare_m68FBA6075A0142439B0249D884863356D99090CF(L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool StringSegment_Equals_m86A8E734AAA588028E650342535929EF513022C2_AdjustorThunk (RuntimeObject* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___other0, int32_t ___comparisonType1, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	bool _returnValue;
	_returnValue = StringSegment_Equals_m86A8E734AAA588028E650342535929EF513022C2(_thisAdjusted, ___other0, ___comparisonType1, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(Microsoft.Extensions.Primitives.StringSegment,Microsoft.Extensions.Primitives.StringSegment,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_m8323268A0CC425AB145F2E1402DE4B16AB37EFBF (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___a0, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___b1, int32_t ___comparisonType2, const RuntimeMethod* method) 
{
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_0 = ___b1;
		int32_t L_1 = ___comparisonType2;
		bool L_2;
		L_2 = StringSegment_Equals_m86A8E734AAA588028E650342535929EF513022C2((&___a0), L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_m13DCEB5914D9F34C621A69763A45846A5FBABB4E (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___text0;
		bool L_1;
		L_1 = StringSegment_Equals_m4DF7D767E55B81E5EE3C3558F45C2096F0C245F5_inline(__this, L_0, 4, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool StringSegment_Equals_m13DCEB5914D9F34C621A69763A45846A5FBABB4E_AdjustorThunk (RuntimeObject* __this, String_t* ___text0, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	bool _returnValue;
	_returnValue = StringSegment_Equals_m13DCEB5914D9F34C621A69763A45846A5FBABB4E(_thisAdjusted, ___text0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_Equals_m4DF7D767E55B81E5EE3C3558F45C2096F0C245F5 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_mC8181555627D844BE8402FEA5A0099A4E711E23B(3, NULL);
	}

IL_0009:
	{
		String_t* L_1 = ___text0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5(__this, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4;
		L_4 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0023;
		}
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		String_t* L_6;
		L_6 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		int32_t L_7;
		L_7 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		String_t* L_8 = ___text0;
		int32_t L_9 = V_0;
		int32_t L_10 = ___comparisonType1;
		int32_t L_11;
		L_11 = String_Compare_m68FBA6075A0142439B0249D884863356D99090CF(L_6, L_7, L_8, 0, L_9, L_10, NULL);
		return (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool StringSegment_Equals_m4DF7D767E55B81E5EE3C3558F45C2096F0C245F5_AdjustorThunk (RuntimeObject* __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	bool _returnValue;
	_returnValue = StringSegment_Equals_m4DF7D767E55B81E5EE3C3558F45C2096F0C245F5_inline(_thisAdjusted, ___text0, ___comparisonType1, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_GetHashCode_m3B755070692E166625922408555028247FB8E551 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0;
		L_0 = StringSegment_get_Value_mE407D9CAF5FB71A173D322100019E40C116A8462(__this, NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, G_B2_0);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_GetHashCode_m3B755070692E166625922408555028247FB8E551_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_GetHashCode_m3B755070692E166625922408555028247FB8E551_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::op_Equality(Microsoft.Extensions.Primitives.StringSegment,Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_op_Equality_mB4C757FE0C84DF25936A7CAE99978BCE2C19590F (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___left0, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___right1, const RuntimeMethod* method) 
{
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_0 = ___right1;
		bool L_1;
		L_1 = StringSegment_Equals_mB472D631CA8F7BD839573D068BE51064A04341DF((&___left0), L_0, NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::op_Inequality(Microsoft.Extensions.Primitives.StringSegment,Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_op_Inequality_m5E6352B8671CDD2523608B1645741FB9FE85AF70 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___left0, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___right1, const RuntimeMethod* method) 
{
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_0 = ___right1;
		bool L_1;
		L_1 = StringSegment_Equals_mB472D631CA8F7BD839573D068BE51064A04341DF((&___left0), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 StringSegment_op_Implicit_m970638A4B04FFAB57D8447C2C99D0CDF47F3B91E (String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringSegment__ctor_mC935BFECAC01086B0B9708C016FB4EA67B1A8DF7((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.ReadOnlySpan`1<System.Char> Microsoft.Extensions.Primitives.StringSegment::op_Implicit(Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 StringSegment_op_Implicit_mA0BBEC8BAEDFE463222F7E440B36D5F79F097D65 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___segment0, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0;
		L_0 = StringSegment_AsSpan_mA29C031A1FC86AFEE5380B91818E18633BC0D366((&___segment0), NULL);
		return L_0;
	}
}
// System.ReadOnlyMemory`1<System.Char> Microsoft.Extensions.Primitives.StringSegment::op_Implicit(Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t9495785584BC99CFCF956B34621F038E83C257D6 StringSegment_op_Implicit_mF64635F44B1D7A253E0D392EFE17967CA7F99DC2 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___segment0, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemory_1_t9495785584BC99CFCF956B34621F038E83C257D6 L_0;
		L_0 = StringSegment_AsMemory_m0FA1A0294C4B9AD89C05A6AB3749DC279DD3041D((&___segment0), NULL);
		return L_0;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_StartsWith_m69DB34A10F49EB2A089BD69FAFDB2718C3A933DD (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_mC8181555627D844BE8402FEA5A0099A4E711E23B(3, NULL);
	}

IL_0009:
	{
		V_0 = (bool)0;
		String_t* L_1 = ___text0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		V_1 = L_2;
		bool L_3;
		L_3 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5(__this, NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_4;
		L_4 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_6;
		L_6 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		int32_t L_7;
		L_7 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		String_t* L_8 = ___text0;
		int32_t L_9 = V_1;
		int32_t L_10 = ___comparisonType1;
		int32_t L_11;
		L_11 = String_Compare_m68FBA6075A0142439B0249D884863356D99090CF(L_6, L_7, L_8, 0, L_9, L_10, NULL);
		V_0 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
	}

IL_003c:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C  bool StringSegment_StartsWith_m69DB34A10F49EB2A089BD69FAFDB2718C3A933DD_AdjustorThunk (RuntimeObject* __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	bool _returnValue;
	_returnValue = StringSegment_StartsWith_m69DB34A10F49EB2A089BD69FAFDB2718C3A933DD_inline(_thisAdjusted, ___text0, ___comparisonType1, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_EndsWith_mC0AB932389704E2E96B79D499023D3E01705D871 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_mC8181555627D844BE8402FEA5A0099A4E711E23B(3, NULL);
	}

IL_0009:
	{
		V_0 = (bool)0;
		String_t* L_1 = ___text0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_4;
		L_4 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		int32_t L_5 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), L_5));
		bool L_6;
		L_6 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5(__this, NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_8;
		L_8 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		int32_t L_9 = V_2;
		String_t* L_10 = ___text0;
		int32_t L_11 = V_1;
		int32_t L_12 = ___comparisonType1;
		int32_t L_13;
		L_13 = String_Compare_m68FBA6075A0142439B0249D884863356D99090CF(L_8, L_9, L_10, 0, L_11, L_12, NULL);
		V_0 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
	}

IL_0042:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C  bool StringSegment_EndsWith_mC0AB932389704E2E96B79D499023D3E01705D871_AdjustorThunk (RuntimeObject* __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	bool _returnValue;
	_returnValue = StringSegment_EndsWith_mC0AB932389704E2E96B79D499023D3E01705D871_inline(_thisAdjusted, ___text0, ___comparisonType1, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Primitives.StringSegment::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringSegment_Substring_mE6A3DFD807A91E2D720581F0867A63CB3A8044BE (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, int32_t ___offset0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		int32_t L_1;
		L_1 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		int32_t L_2 = ___offset0;
		String_t* L_3;
		L_3 = StringSegment_Substring_mD329186D36540C757C84F0608168C15001964373_inline(__this, L_0, ((int32_t)il2cpp_codegen_subtract(L_1, L_2)), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* StringSegment_Substring_mE6A3DFD807A91E2D720581F0867A63CB3A8044BE_AdjustorThunk (RuntimeObject* __this, int32_t ___offset0, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StringSegment_Substring_mE6A3DFD807A91E2D720581F0867A63CB3A8044BE(_thisAdjusted, ___offset0, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Primitives.StringSegment::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringSegment_Substring_mD329186D36540C757C84F0608168C15001964373 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5(__this, NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = ___offset0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = ___offset0;
		int32_t L_4 = ___length1;
		int32_t L_5;
		L_5 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) > ((uint32_t)L_5))))
		{
			goto IL_0023;
		}
	}

IL_001b:
	{
		int32_t L_6 = ___offset0;
		int32_t L_7 = ___length1;
		StringSegment_ThrowInvalidArguments_m20F7DC8E12CE9642291ABD1A8CDEA9185E1C4A8F(__this, L_6, L_7, NULL);
	}

IL_0023:
	{
		String_t* L_8;
		L_8 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		int32_t L_9;
		L_9 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_10 = ___offset0;
		int32_t L_11 = ___length1;
		NullCheck(L_8);
		String_t* L_12;
		L_12 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_8, ((int32_t)il2cpp_codegen_add(L_9, L_10)), L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  String_t* StringSegment_Substring_mD329186D36540C757C84F0608168C15001964373_AdjustorThunk (RuntimeObject* __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StringSegment_Substring_mD329186D36540C757C84F0608168C15001964373_inline(_thisAdjusted, ___offset0, ___length1, method);
	return _returnValue;
}
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::Subsegment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 StringSegment_Subsegment_m7388377259C163E08DE637767C82FC955CFD75D0 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, int32_t ___offset0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		int32_t L_1;
		L_1 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		int32_t L_2 = ___offset0;
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_3;
		L_3 = StringSegment_Subsegment_m0B23E9973B603CF998AF33DE20C61B3B9FC1604B(__this, L_0, ((int32_t)il2cpp_codegen_subtract(L_1, L_2)), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 StringSegment_Subsegment_m7388377259C163E08DE637767C82FC955CFD75D0_AdjustorThunk (RuntimeObject* __this, int32_t ___offset0, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 _returnValue;
	_returnValue = StringSegment_Subsegment_m7388377259C163E08DE637767C82FC955CFD75D0(_thisAdjusted, ___offset0, method);
	return _returnValue;
}
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::Subsegment(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 StringSegment_Subsegment_m0B23E9973B603CF998AF33DE20C61B3B9FC1604B (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5(__this, NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = ___offset0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = ___offset0;
		int32_t L_4 = ___length1;
		int32_t L_5;
		L_5 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) > ((uint32_t)L_5))))
		{
			goto IL_0023;
		}
	}

IL_001b:
	{
		int32_t L_6 = ___offset0;
		int32_t L_7 = ___length1;
		StringSegment_ThrowInvalidArguments_m20F7DC8E12CE9642291ABD1A8CDEA9185E1C4A8F(__this, L_6, L_7, NULL);
	}

IL_0023:
	{
		String_t* L_8;
		L_8 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		int32_t L_9;
		L_9 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_10 = ___offset0;
		int32_t L_11 = ___length1;
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_12;
		memset((&L_12), 0, sizeof(L_12));
		StringSegment__ctor_m676980906628B81CDA65E232AF0EC1AE45EFA992_inline((&L_12), L_8, ((int32_t)il2cpp_codegen_add(L_9, L_10)), L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 StringSegment_Subsegment_m0B23E9973B603CF998AF33DE20C61B3B9FC1604B_AdjustorThunk (RuntimeObject* __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 _returnValue;
	_returnValue = StringSegment_Subsegment_m0B23E9973B603CF998AF33DE20C61B3B9FC1604B(_thisAdjusted, ___offset0, ___length1, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOf(System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOf_m1957192987904D26891AA4884965743D760C3548 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, Il2CppChar ___c0, int32_t ___start1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		bool L_2;
		L_2 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5(__this, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___start1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = V_0;
		String_t* L_5;
		L_5 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if ((!(((uint32_t)L_4) > ((uint32_t)L_6))))
		{
			goto IL_0029;
		}
	}

IL_0023:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5753DB221AF0A5BD32B5B86378CF16954F34D7EC(4, NULL);
	}

IL_0029:
	{
		int32_t L_7 = ___count2;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5753DB221AF0A5BD32B5B86378CF16954F34D7EC(5, NULL);
	}

IL_0033:
	{
		String_t* L_8;
		L_8 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		Il2CppChar L_9 = ___c0;
		int32_t L_10 = V_0;
		int32_t L_11 = ___count2;
		NullCheck(L_8);
		int32_t L_12;
		L_12 = String_IndexOf_mFD81FEE71234D44F45A4924CD51AD6169C722ACB(L_8, L_9, L_10, L_11, NULL);
		V_1 = L_12;
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)(-1))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
	}

IL_004f:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_IndexOf_m1957192987904D26891AA4884965743D760C3548_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___c0, int32_t ___start1, int32_t ___count2, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_IndexOf_m1957192987904D26891AA4884965743D760C3548_inline(_thisAdjusted, ___c0, ___start1, ___count2, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOf_m82DFF8579FEC30F2607EE922A35E8ED8AC746BD8 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, Il2CppChar ___c0, int32_t ___start1, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___c0;
		int32_t L_1 = ___start1;
		int32_t L_2;
		L_2 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		int32_t L_3 = ___start1;
		int32_t L_4;
		L_4 = StringSegment_IndexOf_m1957192987904D26891AA4884965743D760C3548_inline(__this, L_0, L_1, ((int32_t)il2cpp_codegen_subtract(L_2, L_3)), NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_IndexOf_m82DFF8579FEC30F2607EE922A35E8ED8AC746BD8_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___c0, int32_t ___start1, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_IndexOf_m82DFF8579FEC30F2607EE922A35E8ED8AC746BD8(_thisAdjusted, ___c0, ___start1, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOf_m6C2E8BFAE2B39494EA44F855AD3B00F173CBF32F (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, Il2CppChar ___c0, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___c0;
		int32_t L_1;
		L_1 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		int32_t L_2;
		L_2 = StringSegment_IndexOf_m1957192987904D26891AA4884965743D760C3548_inline(__this, L_0, 0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_IndexOf_m6C2E8BFAE2B39494EA44F855AD3B00F173CBF32F_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___c0, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_IndexOf_m6C2E8BFAE2B39494EA44F855AD3B00F173CBF32F(_thisAdjusted, ___c0, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOfAny(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOfAny_m067E9DB75ADC1887F028382F387ABF12E11A146E (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___anyOf0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		bool L_0;
		L_0 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5(__this, NULL);
		if (!L_0)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_1 = ___startIndex1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2;
		L_2 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_3 = ___startIndex1;
		String_t* L_4;
		L_4 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3))) <= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}

IL_0023:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5753DB221AF0A5BD32B5B86378CF16954F34D7EC(4, NULL);
	}

IL_0029:
	{
		int32_t L_6 = ___count2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_7;
		L_7 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_8 = ___startIndex1;
		int32_t L_9 = ___count2;
		String_t* L_10;
		L_10 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9))) <= ((int32_t)L_11)))
		{
			goto IL_004a;
		}
	}

IL_0044:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5753DB221AF0A5BD32B5B86378CF16954F34D7EC(5, NULL);
	}

IL_004a:
	{
		String_t* L_12;
		L_12 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = ___anyOf0;
		int32_t L_14;
		L_14 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_15 = ___startIndex1;
		int32_t L_16 = ___count2;
		NullCheck(L_12);
		int32_t L_17;
		L_17 = String_IndexOfAny_m740B0108B7FAFFAB1C3F88E782B094195A4E3B75(L_12, L_13, ((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16, NULL);
		V_0 = L_17;
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)(-1))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, L_20));
	}

IL_006d:
	{
		int32_t L_21 = V_0;
		return L_21;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_IndexOfAny_m067E9DB75ADC1887F028382F387ABF12E11A146E_AdjustorThunk (RuntimeObject* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___anyOf0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_IndexOfAny_m067E9DB75ADC1887F028382F387ABF12E11A146E_inline(_thisAdjusted, ___anyOf0, ___startIndex1, ___count2, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOfAny(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOfAny_m7ECA0FE9D96E6391EE83687AEF9AD49044B29CB1 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___anyOf0, int32_t ___startIndex1, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___anyOf0;
		int32_t L_1 = ___startIndex1;
		int32_t L_2;
		L_2 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		int32_t L_3 = ___startIndex1;
		int32_t L_4;
		L_4 = StringSegment_IndexOfAny_m067E9DB75ADC1887F028382F387ABF12E11A146E_inline(__this, L_0, L_1, ((int32_t)il2cpp_codegen_subtract(L_2, L_3)), NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_IndexOfAny_m7ECA0FE9D96E6391EE83687AEF9AD49044B29CB1_AdjustorThunk (RuntimeObject* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___anyOf0, int32_t ___startIndex1, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_IndexOfAny_m7ECA0FE9D96E6391EE83687AEF9AD49044B29CB1(_thisAdjusted, ___anyOf0, ___startIndex1, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::IndexOfAny(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOfAny_m4F22060C5F049D93E63F896E44E76808DD4F40CA (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___anyOf0, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___anyOf0;
		int32_t L_1;
		L_1 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		int32_t L_2;
		L_2 = StringSegment_IndexOfAny_m067E9DB75ADC1887F028382F387ABF12E11A146E_inline(__this, L_0, 0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_IndexOfAny_m4F22060C5F049D93E63F896E44E76808DD4F40CA_AdjustorThunk (RuntimeObject* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___anyOf0, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_IndexOfAny_m4F22060C5F049D93E63F896E44E76808DD4F40CA(_thisAdjusted, ___anyOf0, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegment::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegment_LastIndexOf_mF5A3D55DA0EAB4D86F6FB6E3574F51C16AF53448 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, Il2CppChar ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		bool L_0;
		L_0 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5(__this, NULL);
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_1;
		L_1 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		Il2CppChar L_2 = ___value0;
		int32_t L_3;
		L_3 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_4;
		L_4 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		int32_t L_5;
		L_5 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_6;
		L_6 = String_LastIndexOf_mC92062EF4E7765DD44424828FA75C027AA325442(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, L_9));
	}

IL_0039:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t StringSegment_LastIndexOf_mF5A3D55DA0EAB4D86F6FB6E3574F51C16AF53448_AdjustorThunk (RuntimeObject* __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringSegment_LastIndexOf_mF5A3D55DA0EAB4D86F6FB6E3574F51C16AF53448(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 StringSegment_Trim_mE1985FE1F36E52EA7242E87A33EDE6D9053E3F75 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) 
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_0;
		L_0 = StringSegment_TrimStart_mCD7D8F9FA4870C471310F1E6601595C923D11037(__this, NULL);
		V_0 = L_0;
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_1;
		L_1 = StringSegment_TrimEnd_mD529B4552EFB399F3FFAB58670598D49C55B55D4((&V_0), NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 StringSegment_Trim_mE1985FE1F36E52EA7242E87A33EDE6D9053E3F75_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 _returnValue;
	_returnValue = StringSegment_Trim_mE1985FE1F36E52EA7242E87A33EDE6D9053E3F75(_thisAdjusted, method);
	return _returnValue;
}
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::TrimStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 StringSegment_TrimStart_mCD7D8F9FA4870C471310F1E6601595C923D11037 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar* V_2 = NULL;
	String_t* V_3 = NULL;
	Il2CppChar V_4 = 0x0;
	{
		int32_t L_0;
		L_0 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_2;
		L_2 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		String_t* L_3;
		L_3 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		V_3 = L_3;
		String_t* L_4 = V_3;
		V_2 = (Il2CppChar*)((uintptr_t)L_4);
		Il2CppChar* L_5 = V_2;
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		Il2CppChar* L_6 = V_2;
		int32_t L_7;
		L_7 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
		V_2 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_6, L_7));
		goto IL_0042;
	}

IL_002c:
	{
		Il2CppChar* L_8 = V_2;
		int32_t L_9 = V_0;
		int32_t L_10 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 2)))));
		V_4 = L_10;
		Il2CppChar L_11 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924(L_11, NULL);
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0042:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002c;
		}
	}

IL_0046:
	{
		V_3 = (String_t*)NULL;
		String_t* L_16;
		L_16 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_20;
		memset((&L_20), 0, sizeof(L_20));
		StringSegment__ctor_m676980906628B81CDA65E232AF0EC1AE45EFA992_inline((&L_20), L_16, L_17, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), /*hidden argument*/NULL);
		return L_20;
	}
}
IL2CPP_EXTERN_C  StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 StringSegment_TrimStart_mCD7D8F9FA4870C471310F1E6601595C923D11037_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 _returnValue;
	_returnValue = StringSegment_TrimStart_mCD7D8F9FA4870C471310F1E6601595C923D11037(_thisAdjusted, method);
	return _returnValue;
}
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringSegment::TrimEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 StringSegment_TrimEnd_mD529B4552EFB399F3FFAB58670598D49C55B55D4 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar* V_2 = NULL;
	String_t* V_3 = NULL;
	Il2CppChar V_4 = 0x0;
	{
		int32_t L_0;
		L_0 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1));
		String_t* L_3;
		L_3 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		V_3 = L_3;
		String_t* L_4 = V_3;
		V_2 = (Il2CppChar*)((uintptr_t)L_4);
		Il2CppChar* L_5 = V_2;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		Il2CppChar* L_6 = V_2;
		int32_t L_7;
		L_7 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
		V_2 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_6, L_7));
		goto IL_003f;
	}

IL_0029:
	{
		Il2CppChar* L_8 = V_2;
		int32_t L_9 = V_1;
		int32_t L_10 = *((uint16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 2)))));
		V_4 = L_10;
		Il2CppChar L_11 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924(L_11, NULL);
		if (!L_12)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_003f:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0029;
		}
	}

IL_0043:
	{
		V_3 = (String_t*)NULL;
		String_t* L_16;
		L_16 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_20;
		memset((&L_20), 0, sizeof(L_20));
		StringSegment__ctor_m676980906628B81CDA65E232AF0EC1AE45EFA992_inline((&L_20), L_16, L_17, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_18, L_19)), 1)), /*hidden argument*/NULL);
		return L_20;
	}
}
IL2CPP_EXTERN_C  StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 StringSegment_TrimEnd_mD529B4552EFB399F3FFAB58670598D49C55B55D4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 _returnValue;
	_returnValue = StringSegment_TrimEnd_mD529B4552EFB399F3FFAB58670598D49C55B55D4(_thisAdjusted, method);
	return _returnValue;
}
// Microsoft.Extensions.Primitives.StringTokenizer Microsoft.Extensions.Primitives.StringSegment::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540 StringSegment_Split_m9D5472E7840CCE6C6F641032AA529B0C1715138D (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars0, const RuntimeMethod* method) 
{
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_0 = (*(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*)__this);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___chars0;
		StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540 L_2;
		memset((&L_2), 0, sizeof(L_2));
		StringTokenizer__ctor_m132204A652E2AAD0B992C3DA1174636771F08ED6((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540 StringSegment_Split_m9D5472E7840CCE6C6F641032AA529B0C1715138D_AdjustorThunk (RuntimeObject* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars0, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540 _returnValue;
	_returnValue = StringSegment_Split_m9D5472E7840CCE6C6F641032AA529B0C1715138D(_thisAdjusted, ___chars0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegment::IsNullOrEmpty(Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegment_IsNullOrEmpty_m0AABEC7A800E86A8E58ACF715405D91958965EC1 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		bool L_0;
		L_0 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5((&___value0), NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1;
		L_1 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline((&___value0), NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		V_0 = (bool)1;
	}

IL_0016:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.String Microsoft.Extensions.Primitives.StringSegment::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringSegment_ToString_mB8FF0B6038EB4334E46F84A6D1740CEDBC583FC3 (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0;
		L_0 = StringSegment_get_Value_mE407D9CAF5FB71A173D322100019E40C116A8462(__this, NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C  String_t* StringSegment_ToString_mB8FF0B6038EB4334E46F84A6D1740CEDBC583FC3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StringSegment_ToString_mB8FF0B6038EB4334E46F84A6D1740CEDBC583FC3(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.StringSegment::ThrowInvalidArguments(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegment_ThrowInvalidArguments_mF3FC47196407DFDB2F1A409DD14C4ABD7A2651BB (String_t* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	U3CU3Ec__DisplayClass52_0_t8151A26CD3CBDB0A7459E03783EB049C236DC107 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___buffer0;
		(&V_0)->___buffer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___buffer_0), (void*)L_0);
		int32_t L_1 = ___offset1;
		(&V_0)->___offset_1 = L_1;
		int32_t L_2 = ___length2;
		(&V_0)->___length_2 = L_2;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = StringSegment_U3CThrowInvalidArgumentsU3Eg__GetInvalidArgumentsExceptionU7C52_0_mC0055E35A4DF0EA889909ECB9DA6C99AD671F466((&V_0), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringSegment_ThrowInvalidArguments_mF3FC47196407DFDB2F1A409DD14C4ABD7A2651BB_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.Extensions.Primitives.StringSegment::ThrowInvalidArguments(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegment_ThrowInvalidArguments_m20F7DC8E12CE9642291ABD1A8CDEA9185E1C4A8F (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method) 
{
	U3CU3Ec__DisplayClass53_0_t7945554BCBB566200645355E4BC14D4350FCF614 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___offset0;
		(&V_0)->___offset_0 = L_0;
		int32_t L_1 = ___length1;
		(&V_0)->___length_1 = L_1;
		bool L_2;
		L_2 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = StringSegment_U3CThrowInvalidArgumentsU3Eg__GetInvalidArgumentsExceptionU7C53_0_m3915B11CF554CBB841E453E38349ECE5377EF44A(L_2, (&V_0), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringSegment_ThrowInvalidArguments_m20F7DC8E12CE9642291ABD1A8CDEA9185E1C4A8F_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void StringSegment_ThrowInvalidArguments_m20F7DC8E12CE9642291ABD1A8CDEA9185E1C4A8F_AdjustorThunk (RuntimeObject* __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*>(__this + _offset);
	StringSegment_ThrowInvalidArguments_m20F7DC8E12CE9642291ABD1A8CDEA9185E1C4A8F(_thisAdjusted, ___offset0, ___length1, method);
}
// System.Void Microsoft.Extensions.Primitives.StringSegment::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegment__cctor_m5D7943595C38B21F078F72CA0C844CB20C935D90 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_1;
		L_1 = StringSegment_op_Implicit_m970638A4B04FFAB57D8447C2C99D0CDF47F3B91E(L_0, NULL);
		((StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_StaticFields*)il2cpp_codegen_static_fields_for(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var))->___Empty_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&((StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_StaticFields*)il2cpp_codegen_static_fields_for(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var))->___Empty_0))->___U3CBufferU3Ek__BackingField_1), (void*)NULL);
		return;
	}
}
// System.Exception Microsoft.Extensions.Primitives.StringSegment::<ThrowInvalidArguments>g__GetInvalidArgumentsException|52_0(Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass52_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* StringSegment_U3CThrowInvalidArgumentsU3Eg__GetInvalidArgumentsExceptionU7C52_0_mC0055E35A4DF0EA889909ECB9DA6C99AD671F466 (U3CU3Ec__DisplayClass52_0_t8151A26CD3CBDB0A7459E03783EB049C236DC107* p0, const RuntimeMethod* method) 
{
	{
		U3CU3Ec__DisplayClass52_0_t8151A26CD3CBDB0A7459E03783EB049C236DC107* L_0 = p0;
		String_t* L_1 = L_0->___buffer_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2;
		L_2 = ThrowHelper_GetArgumentNullException_mCC27246D89BBF2BFADEF78C81E7A1986761ACF82(0, NULL);
		return L_2;
	}

IL_000f:
	{
		U3CU3Ec__DisplayClass52_0_t8151A26CD3CBDB0A7459E03783EB049C236DC107* L_3 = p0;
		int32_t L_4 = L_3->___offset_1;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5;
		L_5 = ThrowHelper_GetArgumentOutOfRangeException_mA168A9D5CC98E8DB73FC6E309FE2653A5CD8C28C(1, NULL);
		return L_5;
	}

IL_001f:
	{
		U3CU3Ec__DisplayClass52_0_t8151A26CD3CBDB0A7459E03783EB049C236DC107* L_6 = p0;
		int32_t L_7 = L_6->___length_2;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8;
		L_8 = ThrowHelper_GetArgumentOutOfRangeException_mA168A9D5CC98E8DB73FC6E309FE2653A5CD8C28C(2, NULL);
		return L_8;
	}

IL_002f:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9;
		L_9 = ThrowHelper_GetArgumentException_mC566A081E2A06B39E400A5B772F5B6E0FE20FA7A(0, NULL);
		return L_9;
	}
}
// System.Exception Microsoft.Extensions.Primitives.StringSegment::<ThrowInvalidArguments>g__GetInvalidArgumentsException|53_0(System.Boolean,Microsoft.Extensions.Primitives.StringSegment/<>c__DisplayClass53_0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* StringSegment_U3CThrowInvalidArgumentsU3Eg__GetInvalidArgumentsExceptionU7C53_0_m3915B11CF554CBB841E453E38349ECE5377EF44A (bool ___hasValue0, U3CU3Ec__DisplayClass53_0_t7945554BCBB566200645355E4BC14D4350FCF614* p1, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___hasValue0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1;
		L_1 = ThrowHelper_GetArgumentOutOfRangeException_mA168A9D5CC98E8DB73FC6E309FE2653A5CD8C28C(1, NULL);
		return L_1;
	}

IL_000a:
	{
		U3CU3Ec__DisplayClass53_0_t7945554BCBB566200645355E4BC14D4350FCF614* L_2 = p1;
		int32_t L_3 = L_2->___offset_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4;
		L_4 = ThrowHelper_GetArgumentOutOfRangeException_mA168A9D5CC98E8DB73FC6E309FE2653A5CD8C28C(1, NULL);
		return L_4;
	}

IL_001a:
	{
		U3CU3Ec__DisplayClass53_0_t7945554BCBB566200645355E4BC14D4350FCF614* L_5 = p1;
		int32_t L_6 = L_5->___length_1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7;
		L_7 = ThrowHelper_GetArgumentOutOfRangeException_mA168A9D5CC98E8DB73FC6E309FE2653A5CD8C28C(2, NULL);
		return L_7;
	}

IL_002a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8;
		L_8 = ThrowHelper_GetArgumentException_mC566A081E2A06B39E400A5B772F5B6E0FE20FA7A(1, NULL);
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
// Microsoft.Extensions.Primitives.StringSegmentComparer Microsoft.Extensions.Primitives.StringSegmentComparer::get_Ordinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* StringSegmentComparer_get_Ordinal_m6BA46DF560787EAB067A4D197D858AA136BC46CA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_il2cpp_TypeInfo_var);
		StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* L_0 = ((StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_StaticFields*)il2cpp_codegen_static_fields_for(StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_il2cpp_TypeInfo_var))->___U3COrdinalU3Ek__BackingField_0;
		return L_0;
	}
}
// Microsoft.Extensions.Primitives.StringSegmentComparer Microsoft.Extensions.Primitives.StringSegmentComparer::get_OrdinalIgnoreCase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* StringSegmentComparer_get_OrdinalIgnoreCase_mB52C4F16D9F4F1ACAD373E80CB0D12459898D3F0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_il2cpp_TypeInfo_var);
		StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* L_0 = ((StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_StaticFields*)il2cpp_codegen_static_fields_for(StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_il2cpp_TypeInfo_var))->___U3COrdinalIgnoreCaseU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.Extensions.Primitives.StringSegmentComparer::.ctor(System.StringComparison,System.StringComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegmentComparer__ctor_m326D94B8B18F1AA6FB29B09497F93702D0766E38 (StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* __this, int32_t ___comparison0, StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___comparison0;
		__this->___U3CComparisonU3Ek__BackingField_2 = L_0;
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_1 = ___comparer1;
		__this->___U3CComparerU3Ek__BackingField_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CComparerU3Ek__BackingField_3), (void*)L_1);
		return;
	}
}
// System.StringComparison Microsoft.Extensions.Primitives.StringSegmentComparer::get_Comparison()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegmentComparer_get_Comparison_m24630E531EB28547EDA6C9B6671681CE58D9B531 (StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CComparisonU3Ek__BackingField_2;
		return L_0;
	}
}
// System.StringComparer Microsoft.Extensions.Primitives.StringSegmentComparer::get_Comparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringSegmentComparer_get_Comparer_mA78CCF108147741E75938756D5DB52C7127065CA (StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* __this, const RuntimeMethod* method) 
{
	{
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_0 = __this->___U3CComparerU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegmentComparer::Compare(Microsoft.Extensions.Primitives.StringSegment,Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegmentComparer_Compare_m83ED2AFE111D9E83A8EED3B9F77772A719888C2A (StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___x0, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_0 = ___x0;
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_1 = ___y1;
		int32_t L_2;
		L_2 = StringSegmentComparer_get_Comparison_m24630E531EB28547EDA6C9B6671681CE58D9B531_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = StringSegment_Compare_m4FE69AAAAE1916F858E23463F1EB928EDF2EDA59(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringSegmentComparer::Equals(Microsoft.Extensions.Primitives.StringSegment,Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringSegmentComparer_Equals_m70C29C89010E84F138B77D36351BE17450CAA4E5 (StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___x0, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_0 = ___x0;
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_1 = ___y1;
		int32_t L_2;
		L_2 = StringSegmentComparer_get_Comparison_m24630E531EB28547EDA6C9B6671681CE58D9B531_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringSegment_Equals_m8323268A0CC425AB145F2E1402DE4B16AB37EFBF(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 Microsoft.Extensions.Primitives.StringSegmentComparer::GetHashCode(Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSegmentComparer_GetHashCode_m3334BE73E692FD3110233A7729B09DE3F7741527 (StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___obj0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5((&___obj0), NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_1;
		L_1 = StringSegmentComparer_get_Comparer_mA78CCF108147741E75938756D5DB52C7127065CA_inline(__this, NULL);
		String_t* L_2;
		L_2 = StringSegment_get_Value_mE407D9CAF5FB71A173D322100019E40C116A8462((&___obj0), NULL);
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(12 /* System.Int32 System.StringComparer::GetHashCode(System.String) */, L_1, L_2);
		return L_3;
	}
}
// System.Void Microsoft.Extensions.Primitives.StringSegmentComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSegmentComparer__cctor_m999DE7821F217160D0FEDD75BAF921AD935A1847 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_0;
		L_0 = StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline(NULL);
		StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* L_1 = (StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80*)il2cpp_codegen_object_new(StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringSegmentComparer__ctor_m326D94B8B18F1AA6FB29B09497F93702D0766E38(L_1, 4, L_0, NULL);
		((StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_StaticFields*)il2cpp_codegen_static_fields_for(StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_il2cpp_TypeInfo_var))->___U3COrdinalU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_StaticFields*)il2cpp_codegen_static_fields_for(StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_il2cpp_TypeInfo_var))->___U3COrdinalU3Ek__BackingField_0), (void*)L_1);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_2;
		L_2 = StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline(NULL);
		StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* L_3 = (StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80*)il2cpp_codegen_object_new(StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StringSegmentComparer__ctor_m326D94B8B18F1AA6FB29B09497F93702D0766E38(L_3, 5, L_2, NULL);
		((StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_StaticFields*)il2cpp_codegen_static_fields_for(StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_il2cpp_TypeInfo_var))->___U3COrdinalIgnoreCaseU3Ek__BackingField_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_StaticFields*)il2cpp_codegen_static_fields_for(StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80_il2cpp_TypeInfo_var))->___U3COrdinalIgnoreCaseU3Ek__BackingField_1), (void*)L_3);
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


// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringTokenizer
IL2CPP_EXTERN_C void StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540_marshal_pinvoke(const StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540& unmarshaled, StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540_marshaled_pinvoke& marshaled)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_pinvoke(unmarshaled.____value_0, marshaled.____value_0);
	if (unmarshaled.____separators_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaled_separators_Length = (unmarshaled.____separators_1)->max_length;
		marshaled.____separators_1 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled_separators_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_separators_Length); i++)
		{
			(marshaled.____separators_1)[i] = static_cast<uint8_t>((unmarshaled.____separators_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____separators_1 = NULL;
	}
}
IL2CPP_EXTERN_C void StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540_marshal_pinvoke_back(const StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540_marshaled_pinvoke& marshaled, StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 unmarshaled_value_temp_0;
	memset((&unmarshaled_value_temp_0), 0, sizeof(unmarshaled_value_temp_0));
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_pinvoke_back(marshaled.____value_0, unmarshaled_value_temp_0);
	unmarshaled.____value_0 = unmarshaled_value_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.____value_0))->___U3CBufferU3Ek__BackingField_1), (void*)NULL);
	if (marshaled.____separators_1 != NULL)
	{
		if (unmarshaled.____separators_1 == NULL)
		{
			unmarshaled.____separators_1 = reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____separators_1), (void*)reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.____separators_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.____separators_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____separators_1)[i]));
		}
	}
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringTokenizer
IL2CPP_EXTERN_C void StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540_marshal_pinvoke_cleanup(StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540_marshaled_pinvoke& marshaled)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_pinvoke_cleanup(marshaled.____value_0);
	if (marshaled.____separators_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____separators_1);
		marshaled.____separators_1 = NULL;
	}
}


// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringTokenizer
IL2CPP_EXTERN_C void StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540_marshal_com(const StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540& unmarshaled, StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540_marshaled_com& marshaled)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_com(unmarshaled.____value_0, marshaled.____value_0);
	if (unmarshaled.____separators_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaled_separators_Length = (unmarshaled.____separators_1)->max_length;
		marshaled.____separators_1 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled_separators_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_separators_Length); i++)
		{
			(marshaled.____separators_1)[i] = static_cast<uint8_t>((unmarshaled.____separators_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____separators_1 = NULL;
	}
}
IL2CPP_EXTERN_C void StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540_marshal_com_back(const StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540_marshaled_com& marshaled, StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 unmarshaled_value_temp_0;
	memset((&unmarshaled_value_temp_0), 0, sizeof(unmarshaled_value_temp_0));
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_com_back(marshaled.____value_0, unmarshaled_value_temp_0);
	unmarshaled.____value_0 = unmarshaled_value_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.____value_0))->___U3CBufferU3Ek__BackingField_1), (void*)NULL);
	if (marshaled.____separators_1 != NULL)
	{
		if (unmarshaled.____separators_1 == NULL)
		{
			unmarshaled.____separators_1 = reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____separators_1), (void*)reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.____separators_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.____separators_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____separators_1)[i]));
		}
	}
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringTokenizer
IL2CPP_EXTERN_C void StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540_marshal_com_cleanup(StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540_marshaled_com& marshaled)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_com_cleanup(marshaled.____value_0);
	if (marshaled.____separators_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____separators_1);
		marshaled.____separators_1 = NULL;
	}
}
// System.Void Microsoft.Extensions.Primitives.StringTokenizer::.ctor(System.String,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringTokenizer__ctor_m2F0DECEBCA16F7E5617469C59FD73B0BCB4086D9 (StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* __this, String_t* ___value0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separators1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_mC8181555627D844BE8402FEA5A0099A4E711E23B(7, NULL);
	}

IL_0009:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___separators1;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_mC8181555627D844BE8402FEA5A0099A4E711E23B(((int32_t)9), NULL);
	}

IL_0013:
	{
		String_t* L_2 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var);
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_3;
		L_3 = StringSegment_op_Implicit_m970638A4B04FFAB57D8447C2C99D0CDF47F3B91E(L_2, NULL);
		__this->____value_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_0))->___U3CBufferU3Ek__BackingField_1), (void*)NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ___separators1;
		__this->____separators_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____separators_1), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void StringTokenizer__ctor_m2F0DECEBCA16F7E5617469C59FD73B0BCB4086D9_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separators1, const RuntimeMethod* method)
{
	StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540*>(__this + _offset);
	StringTokenizer__ctor_m2F0DECEBCA16F7E5617469C59FD73B0BCB4086D9(_thisAdjusted, ___value0, ___separators1, method);
}
// System.Void Microsoft.Extensions.Primitives.StringTokenizer::.ctor(Microsoft.Extensions.Primitives.StringSegment,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringTokenizer__ctor_m132204A652E2AAD0B992C3DA1174636771F08ED6 (StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___value0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separators1, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5((&___value0), NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_mC8181555627D844BE8402FEA5A0099A4E711E23B(7, NULL);
	}

IL_000f:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___separators1;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_mC8181555627D844BE8402FEA5A0099A4E711E23B(((int32_t)9), NULL);
	}

IL_0019:
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_2 = ___value0;
		__this->____value_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_0))->___U3CBufferU3Ek__BackingField_1), (void*)NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = ___separators1;
		__this->____separators_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____separators_1), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void StringTokenizer__ctor_m132204A652E2AAD0B992C3DA1174636771F08ED6_AdjustorThunk (RuntimeObject* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___value0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separators1, const RuntimeMethod* method)
{
	StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540*>(__this + _offset);
	StringTokenizer__ctor_m132204A652E2AAD0B992C3DA1174636771F08ED6(_thisAdjusted, ___value0, ___separators1, method);
}
// Microsoft.Extensions.Primitives.StringTokenizer/Enumerator Microsoft.Extensions.Primitives.StringTokenizer::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0 StringTokenizer_GetEnumerator_m437FEE445A357E3A9BBA8A304F1E4313E916AC26 (StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* __this, const RuntimeMethod* method) 
{
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* L_0 = (&__this->____value_0);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = __this->____separators_1;
		Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Enumerator__ctor_m72790328D620D79F354460F6AA424471B1617AB0((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0 StringTokenizer_GetEnumerator_m437FEE445A357E3A9BBA8A304F1E4313E916AC26_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540*>(__this + _offset);
	Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0 _returnValue;
	_returnValue = StringTokenizer_GetEnumerator_m437FEE445A357E3A9BBA8A304F1E4313E916AC26(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerator`1<Microsoft.Extensions.Primitives.StringSegment> Microsoft.Extensions.Primitives.StringTokenizer::System.Collections.Generic.IEnumerable<Microsoft.Extensions.Primitives.StringSegment>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringTokenizer_System_Collections_Generic_IEnumerableU3CMicrosoft_Extensions_Primitives_StringSegmentU3E_GetEnumerator_m055B727574409E0C009F75F42F39C3A6EF80F7A0 (StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0 L_0;
		L_0 = StringTokenizer_GetEnumerator_m437FEE445A357E3A9BBA8A304F1E4313E916AC26(__this, NULL);
		Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0 L_1 = L_0;
		RuntimeObject* L_2 = Box(Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* StringTokenizer_System_Collections_Generic_IEnumerableU3CMicrosoft_Extensions_Primitives_StringSegmentU3E_GetEnumerator_m055B727574409E0C009F75F42F39C3A6EF80F7A0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = StringTokenizer_System_Collections_Generic_IEnumerableU3CMicrosoft_Extensions_Primitives_StringSegmentU3E_GetEnumerator_m055B727574409E0C009F75F42F39C3A6EF80F7A0(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.IEnumerator Microsoft.Extensions.Primitives.StringTokenizer::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringTokenizer_System_Collections_IEnumerable_GetEnumerator_m7B4AF765A3A76D1BF0AFBB6976AD5CCBEAB8E5F8 (StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0 L_0;
		L_0 = StringTokenizer_GetEnumerator_m437FEE445A357E3A9BBA8A304F1E4313E916AC26(__this, NULL);
		Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0 L_1 = L_0;
		RuntimeObject* L_2 = Box(Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* StringTokenizer_System_Collections_IEnumerable_GetEnumerator_m7B4AF765A3A76D1BF0AFBB6976AD5CCBEAB8E5F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = StringTokenizer_System_Collections_IEnumerable_GetEnumerator_m7B4AF765A3A76D1BF0AFBB6976AD5CCBEAB8E5F8(_thisAdjusted, method);
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




// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringTokenizer/Enumerator
IL2CPP_EXTERN_C void Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_marshal_pinvoke(const Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0& unmarshaled, Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_marshaled_pinvoke& marshaled)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_pinvoke(unmarshaled.____value_0, marshaled.____value_0);
	if (unmarshaled.____separators_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaled_separators_Length = (unmarshaled.____separators_1)->max_length;
		marshaled.____separators_1 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled_separators_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_separators_Length); i++)
		{
			(marshaled.____separators_1)[i] = static_cast<uint8_t>((unmarshaled.____separators_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____separators_1 = NULL;
	}
	marshaled.____index_2 = unmarshaled.____index_2;
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_pinvoke(unmarshaled.___U3CCurrentU3Ek__BackingField_3, marshaled.___U3CCurrentU3Ek__BackingField_3);
}
IL2CPP_EXTERN_C void Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_marshal_pinvoke_back(const Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_marshaled_pinvoke& marshaled, Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 unmarshaled_value_temp_0;
	memset((&unmarshaled_value_temp_0), 0, sizeof(unmarshaled_value_temp_0));
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_pinvoke_back(marshaled.____value_0, unmarshaled_value_temp_0);
	unmarshaled.____value_0 = unmarshaled_value_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.____value_0))->___U3CBufferU3Ek__BackingField_1), (void*)NULL);
	if (marshaled.____separators_1 != NULL)
	{
		if (unmarshaled.____separators_1 == NULL)
		{
			unmarshaled.____separators_1 = reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____separators_1), (void*)reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.____separators_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.____separators_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____separators_1)[i]));
		}
	}
	int32_t unmarshaled_index_temp_2 = 0;
	unmarshaled_index_temp_2 = marshaled.____index_2;
	unmarshaled.____index_2 = unmarshaled_index_temp_2;
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 unmarshaledU3CCurrentU3Ek__BackingField_temp_3;
	memset((&unmarshaledU3CCurrentU3Ek__BackingField_temp_3), 0, sizeof(unmarshaledU3CCurrentU3Ek__BackingField_temp_3));
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_pinvoke_back(marshaled.___U3CCurrentU3Ek__BackingField_3, unmarshaledU3CCurrentU3Ek__BackingField_temp_3);
	unmarshaled.___U3CCurrentU3Ek__BackingField_3 = unmarshaledU3CCurrentU3Ek__BackingField_temp_3;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___U3CCurrentU3Ek__BackingField_3))->___U3CBufferU3Ek__BackingField_1), (void*)NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringTokenizer/Enumerator
IL2CPP_EXTERN_C void Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_marshal_pinvoke_cleanup(Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_marshaled_pinvoke& marshaled)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_pinvoke_cleanup(marshaled.____value_0);
	if (marshaled.____separators_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____separators_1);
		marshaled.____separators_1 = NULL;
	}
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_pinvoke_cleanup(marshaled.___U3CCurrentU3Ek__BackingField_3);
}




// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringTokenizer/Enumerator
IL2CPP_EXTERN_C void Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_marshal_com(const Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0& unmarshaled, Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_marshaled_com& marshaled)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_com(unmarshaled.____value_0, marshaled.____value_0);
	if (unmarshaled.____separators_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaled_separators_Length = (unmarshaled.____separators_1)->max_length;
		marshaled.____separators_1 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled_separators_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_separators_Length); i++)
		{
			(marshaled.____separators_1)[i] = static_cast<uint8_t>((unmarshaled.____separators_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____separators_1 = NULL;
	}
	marshaled.____index_2 = unmarshaled.____index_2;
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_com(unmarshaled.___U3CCurrentU3Ek__BackingField_3, marshaled.___U3CCurrentU3Ek__BackingField_3);
}
IL2CPP_EXTERN_C void Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_marshal_com_back(const Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_marshaled_com& marshaled, Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 unmarshaled_value_temp_0;
	memset((&unmarshaled_value_temp_0), 0, sizeof(unmarshaled_value_temp_0));
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_com_back(marshaled.____value_0, unmarshaled_value_temp_0);
	unmarshaled.____value_0 = unmarshaled_value_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.____value_0))->___U3CBufferU3Ek__BackingField_1), (void*)NULL);
	if (marshaled.____separators_1 != NULL)
	{
		if (unmarshaled.____separators_1 == NULL)
		{
			unmarshaled.____separators_1 = reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____separators_1), (void*)reinterpret_cast<CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*>((CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.____separators_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.____separators_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____separators_1)[i]));
		}
	}
	int32_t unmarshaled_index_temp_2 = 0;
	unmarshaled_index_temp_2 = marshaled.____index_2;
	unmarshaled.____index_2 = unmarshaled_index_temp_2;
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 unmarshaledU3CCurrentU3Ek__BackingField_temp_3;
	memset((&unmarshaledU3CCurrentU3Ek__BackingField_temp_3), 0, sizeof(unmarshaledU3CCurrentU3Ek__BackingField_temp_3));
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_com_back(marshaled.___U3CCurrentU3Ek__BackingField_3, unmarshaledU3CCurrentU3Ek__BackingField_temp_3);
	unmarshaled.___U3CCurrentU3Ek__BackingField_3 = unmarshaledU3CCurrentU3Ek__BackingField_temp_3;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___U3CCurrentU3Ek__BackingField_3))->___U3CBufferU3Ek__BackingField_1), (void*)NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringTokenizer/Enumerator
IL2CPP_EXTERN_C void Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_marshal_com_cleanup(Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0_marshaled_com& marshaled)
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_com_cleanup(marshaled.____value_0);
	if (marshaled.____separators_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____separators_1);
		marshaled.____separators_1 = NULL;
	}
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_marshal_com_cleanup(marshaled.___U3CCurrentU3Ek__BackingField_3);
}
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::.ctor(Microsoft.Extensions.Primitives.StringSegment&,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m72790328D620D79F354460F6AA424471B1617AB0 (Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* ___value0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separators1, const RuntimeMethod* method) 
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* L_0 = ___value0;
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_1 = (*(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91*)L_0);
		__this->____value_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_0))->___U3CBufferU3Ek__BackingField_1), (void*)NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___separators1;
		__this->____separators_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____separators_1), (void*)L_2);
		il2cpp_codegen_initobj((&V_0), sizeof(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91));
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_3 = V_0;
		Enumerator_set_Current_mF72154922B4D89F06916FC3963F5FB3D4ADE5A3D_inline(__this, L_3, NULL);
		__this->____index_2 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_m72790328D620D79F354460F6AA424471B1617AB0_AdjustorThunk (RuntimeObject* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* ___value0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separators1, const RuntimeMethod* method)
{
	Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0*>(__this + _offset);
	Enumerator__ctor_m72790328D620D79F354460F6AA424471B1617AB0(_thisAdjusted, ___value0, ___separators1, method);
}
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::.ctor(Microsoft.Extensions.Primitives.StringTokenizer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mCEB97CE66C5F3B0F7F37B323B9A91D2731246CD4 (Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* __this, StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* ___tokenizer0, const RuntimeMethod* method) 
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* L_0 = ___tokenizer0;
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_1 = L_0->____value_0;
		__this->____value_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value_0))->___U3CBufferU3Ek__BackingField_1), (void*)NULL);
		StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* L_2 = ___tokenizer0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2->____separators_1;
		__this->____separators_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____separators_1), (void*)L_3);
		il2cpp_codegen_initobj((&V_0), sizeof(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91));
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_4 = V_0;
		Enumerator_set_Current_mF72154922B4D89F06916FC3963F5FB3D4ADE5A3D_inline(__this, L_4, NULL);
		__this->____index_2 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_mCEB97CE66C5F3B0F7F37B323B9A91D2731246CD4_AdjustorThunk (RuntimeObject* __this, StringTokenizer_tEFDF110354748A12B3D018B8CF30753016344540* ___tokenizer0, const RuntimeMethod* method)
{
	Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0*>(__this + _offset);
	Enumerator__ctor_mCEB97CE66C5F3B0F7F37B323B9A91D2731246CD4(_thisAdjusted, ___tokenizer0, method);
}
// Microsoft.Extensions.Primitives.StringSegment Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 Enumerator_get_Current_mB2793DD93766476DD63E3CA915C7875C5801321C (Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* __this, const RuntimeMethod* method) 
{
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_0 = __this->___U3CCurrentU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 Enumerator_get_Current_mB2793DD93766476DD63E3CA915C7875C5801321C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0*>(__this + _offset);
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 _returnValue;
	_returnValue = Enumerator_get_Current_mB2793DD93766476DD63E3CA915C7875C5801321C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::set_Current(Microsoft.Extensions.Primitives.StringSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_set_Current_mF72154922B4D89F06916FC3963F5FB3D4ADE5A3D (Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___value0, const RuntimeMethod* method) 
{
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_0 = ___value0;
		__this->___U3CCurrentU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CCurrentU3Ek__BackingField_3))->___U3CBufferU3Ek__BackingField_1), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_set_Current_mF72154922B4D89F06916FC3963F5FB3D4ADE5A3D_AdjustorThunk (RuntimeObject* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___value0, const RuntimeMethod* method)
{
	Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0*>(__this + _offset);
	Enumerator_set_Current_mF72154922B4D89F06916FC3963F5FB3D4ADE5A3D_inline(_thisAdjusted, ___value0, method);
}
// System.Object Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m48EC64DED4BFC318EE5A8B2F8189200E3D9AA5B4 (Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_0;
		L_0 = Enumerator_get_Current_mB2793DD93766476DD63E3CA915C7875C5801321C_inline(__this, NULL);
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_1 = L_0;
		RuntimeObject* L_2 = Box(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m48EC64DED4BFC318EE5A8B2F8189200E3D9AA5B4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_m48EC64DED4BFC318EE5A8B2F8189200E3D9AA5B4(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m6F9B6F124979DA8EBB9D2E2E36A0016690464A2D (Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m6F9B6F124979DA8EBB9D2E2E36A0016690464A2D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0*>(__this + _offset);
	Enumerator_Dispose_m6F9B6F124979DA8EBB9D2E2E36A0016690464A2D(_thisAdjusted, method);
}
// System.Boolean Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6EC9D7176F3840E1DCE729EAA30F3B3BE982F822 (Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* L_0 = (&__this->____value_0);
		bool L_1;
		L_1 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5(L_0, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = __this->____index_2;
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* L_3 = (&__this->____value_0);
		int32_t L_4;
		L_4 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(L_3, NULL);
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91));
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_5 = V_1;
		Enumerator_set_Current_mF72154922B4D89F06916FC3963F5FB3D4ADE5A3D_inline(__this, L_5, NULL);
		return (bool)0;
	}

IL_0031:
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* L_6 = (&__this->____value_0);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = __this->____separators_1;
		int32_t L_8 = __this->____index_2;
		int32_t L_9;
		L_9 = StringSegment_IndexOfAny_m7ECA0FE9D96E6391EE83687AEF9AD49044B29CB1(L_6, L_7, L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_0059;
		}
	}
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* L_11 = (&__this->____value_0);
		int32_t L_12;
		L_12 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(L_11, NULL);
		V_0 = L_12;
	}

IL_0059:
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* L_13 = (&__this->____value_0);
		int32_t L_14 = __this->____index_2;
		int32_t L_15 = V_0;
		int32_t L_16 = __this->____index_2;
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_17;
		L_17 = StringSegment_Subsegment_m0B23E9973B603CF998AF33DE20C61B3B9FC1604B(L_13, L_14, ((int32_t)il2cpp_codegen_subtract(L_15, L_16)), NULL);
		Enumerator_set_Current_mF72154922B4D89F06916FC3963F5FB3D4ADE5A3D_inline(__this, L_17, NULL);
		int32_t L_18 = V_0;
		__this->____index_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m6EC9D7176F3840E1DCE729EAA30F3B3BE982F822_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0*>(__this + _offset);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m6EC9D7176F3840E1DCE729EAA30F3B3BE982F822(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.StringTokenizer/Enumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m8D02D31B6029215AADEC1273AE6E4B9EE25738CA (Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* __this, const RuntimeMethod* method) 
{
	StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91));
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_0 = V_0;
		Enumerator_set_Current_mF72154922B4D89F06916FC3963F5FB3D4ADE5A3D_inline(__this, L_0, NULL);
		__this->____index_2 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_m8D02D31B6029215AADEC1273AE6E4B9EE25738CA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0*>(__this + _offset);
	Enumerator_Reset_m8D02D31B6029215AADEC1273AE6E4B9EE25738CA(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringValues
IL2CPP_EXTERN_C void StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_marshal_pinvoke(const StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751& unmarshaled, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.____values_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____values_1))
		{
			marshaled.____values_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.____values_1));
			(marshaled.____values_1)->AddRef();
		}
		else
		{
			marshaled.____values_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.____values_1);
		}
	}
	else
	{
		marshaled.____values_1 = NULL;
	}
}
IL2CPP_EXTERN_C void StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_marshal_pinvoke_back(const StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_marshaled_pinvoke& marshaled, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____values_1 != NULL)
	{
		unmarshaled.____values_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____values_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____values_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____values_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____values_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.____values_1), Il2CppIUnknown::IID, marshaled.____values_1);
		}
	}
	else
	{
		unmarshaled.____values_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____values_1), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringValues
IL2CPP_EXTERN_C void StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_marshal_pinvoke_cleanup(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_marshaled_pinvoke& marshaled)
{
	if (marshaled.____values_1 != NULL)
	{
		(marshaled.____values_1)->Release();
		marshaled.____values_1 = NULL;
	}
}
// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringValues
IL2CPP_EXTERN_C void StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_marshal_com(const StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751& unmarshaled, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_marshaled_com& marshaled)
{
	if (unmarshaled.____values_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____values_1))
		{
			marshaled.____values_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.____values_1));
			(marshaled.____values_1)->AddRef();
		}
		else
		{
			marshaled.____values_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.____values_1);
		}
	}
	else
	{
		marshaled.____values_1 = NULL;
	}
}
IL2CPP_EXTERN_C void StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_marshal_com_back(const StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_marshaled_com& marshaled, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____values_1 != NULL)
	{
		unmarshaled.____values_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____values_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____values_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____values_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____values_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.____values_1), Il2CppIUnknown::IID, marshaled.____values_1);
		}
	}
	else
	{
		unmarshaled.____values_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____values_1), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringValues
IL2CPP_EXTERN_C void StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_marshal_com_cleanup(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_marshaled_com& marshaled)
{
	if (marshaled.____values_1 != NULL)
	{
		(marshaled.____values_1)->Release();
		marshaled.____values_1 = NULL;
	}
}
// System.Void Microsoft.Extensions.Primitives.StringValues::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues__ctor_m18EEE44065E67724625C81BF4AE22C6A0A2B7117 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____values_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StringValues__ctor_m18EEE44065E67724625C81BF4AE22C6A0A2B7117_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	StringValues__ctor_m18EEE44065E67724625C81BF4AE22C6A0A2B7117_inline(_thisAdjusted, ___value0, method);
}
// System.Void Microsoft.Extensions.Primitives.StringValues::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues__ctor_m9B3C55052BF08BFDA9A49F952D7C5E2D24C3F7D9 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___values0;
		__this->____values_1 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_1), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StringValues__ctor_m9B3C55052BF08BFDA9A49F952D7C5E2D24C3F7D9_AdjustorThunk (RuntimeObject* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	StringValues__ctor_m9B3C55052BF08BFDA9A49F952D7C5E2D24C3F7D9_inline(_thisAdjusted, ___values0, method);
}
// Microsoft.Extensions.Primitives.StringValues Microsoft.Extensions.Primitives.StringValues::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 StringValues_op_Implicit_m33E72522077523DB817A4AC134E8962C682FEB9B (String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringValues__ctor_m18EEE44065E67724625C81BF4AE22C6A0A2B7117_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Microsoft.Extensions.Primitives.StringValues Microsoft.Extensions.Primitives.StringValues::op_Implicit(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 StringValues_op_Implicit_m7E39059D19FD8671A907713063567D92C293963A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___values0;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringValues__ctor_m9B3C55052BF08BFDA9A49F952D7C5E2D24C3F7D9_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Microsoft.Extensions.Primitives.StringValues::op_Implicit(Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_op_Implicit_m871778F50740B1B1FAD4051619495B01AFCF4725 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___values0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = StringValues_GetStringValue_m732B28B58B69ADD7F532C351B0BA1A27C3A6D020((&___values0), NULL);
		return L_0;
	}
}
// System.String[] Microsoft.Extensions.Primitives.StringValues::op_Implicit(Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* StringValues_op_Implicit_mB1FE4A7CACFB251F66488E3279B090D336538F2B (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___value0, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = StringValues_GetArrayValue_mA83857365250C5B25D256A4525870724F38FDCC3((&___value0), NULL);
		return L_0;
	}
}
// System.Int32 Microsoft.Extensions.Primitives.StringValues::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringValues_get_Count_mA861D3B8E0735D73D323C3195C7486C8FF167DF8 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____values_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0011;
		}
	}
	{
		return 1;
	}

IL_0011:
	{
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		RuntimeObject* L_3 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = il2cpp_unsafe_as<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*>(L_3);
		NullCheck(L_4);
		return ((int32_t)(((RuntimeArray*)L_4)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t StringValues_get_Count_mA861D3B8E0735D73D323C3195C7486C8FF167DF8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringValues_get_Count_mA861D3B8E0735D73D323C3195C7486C8FF167DF8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_get_IsReadOnly_m664BFFF9EC58B213DC909DC63E1F8EC372A261BE (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_get_IsReadOnly_m664BFFF9EC58B213DC909DC63E1F8EC372A261BE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	bool _returnValue;
	_returnValue = StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_get_IsReadOnly_m664BFFF9EC58B213DC909DC63E1F8EC372A261BE(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_get_Item_m73D0C189B84B1EFCE6CEBCAC714E80A353E90B91 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		String_t* L_1;
		L_1 = StringValues_get_Item_m0B764CEA57AF1AF7E4ED5A3B306F7402B7190B50_inline(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_get_Item_m73D0C189B84B1EFCE6CEBCAC714E80A353E90B91_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_get_Item_m73D0C189B84B1EFCE6CEBCAC714E80A353E90B91(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.set_Item(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_set_Item_m9AC23B767355DB1F49A7FE9DC87D138A048D7A6D (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_set_Item_m9AC23B767355DB1F49A7FE9DC87D138A048D7A6D_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_set_Item_m9AC23B767355DB1F49A7FE9DC87D138A048D7A6D_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_set_Item_m9AC23B767355DB1F49A7FE9DC87D138A048D7A6D(_thisAdjusted, ___index0, ___value1, method);
}
// System.String Microsoft.Extensions.Primitives.StringValues::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_get_Item_m0B764CEA57AF1AF7E4ED5A3B306F7402B7190B50 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____values_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
		String_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___index0;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_4 = V_1;
		return L_4;
	}

IL_0016:
	{
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
		L_7 = il2cpp_unsafe_as<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*>(L_6);
		int32_t L_8 = ___index0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_0022:
	{
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = StringValues_OutOfBounds_m9E496C506C9CFEF804F05F76185400D3D1A12D40(NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C  String_t* StringValues_get_Item_m0B764CEA57AF1AF7E4ED5A3B306F7402B7190B50_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StringValues_get_Item_m0B764CEA57AF1AF7E4ED5A3B306F7402B7190B50_inline(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Primitives.StringValues::OutOfBounds()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR String_t* StringValues_OutOfBounds_m9E496C506C9CFEF804F05F76185400D3D1A12D40 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.String Microsoft.Extensions.Primitives.StringValues::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_ToString_m325D8EF55B11605CFAD2D5B16B302B506C78DA4D (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0;
		L_0 = StringValues_GetStringValue_m732B28B58B69ADD7F532C351B0BA1A27C3A6D020(__this, NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C  String_t* StringValues_ToString_m325D8EF55B11605CFAD2D5B16B302B506C78DA4D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StringValues_ToString_m325D8EF55B11605CFAD2D5B16B302B506C78DA4D(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Primitives.StringValues::GetStringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_GetStringValue_m732B28B58B69ADD7F532C351B0BA1A27C3A6D020 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____values_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
		String_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_3 = V_1;
		return L_3;
	}

IL_0013:
	{
		RuntimeObject* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = StringValues_U3CGetStringValueU3Eg__GetStringValueFromArrayU7C19_0_m5AC369BB7CF4ECB41E81A780BE37CD6AFB0D5197(L_4, NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  String_t* StringValues_GetStringValue_m732B28B58B69ADD7F532C351B0BA1A27C3A6D020_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = StringValues_GetStringValue_m732B28B58B69ADD7F532C351B0BA1A27C3A6D020(_thisAdjusted, method);
	return _returnValue;
}
// System.String[] Microsoft.Extensions.Primitives.StringValues::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* StringValues_ToArray_m3BFFE64F96DA6D28559828D297DAB3C20858FC60 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = StringValues_GetArrayValue_mA83857365250C5B25D256A4525870724F38FDCC3(__this, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* StringValues_ToArray_m3BFFE64F96DA6D28559828D297DAB3C20858FC60_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* _returnValue;
	_returnValue = StringValues_ToArray_m3BFFE64F96DA6D28559828D297DAB3C20858FC60(_thisAdjusted, method);
	return _returnValue;
}
// System.String[] Microsoft.Extensions.Primitives.StringValues::GetArrayValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* StringValues_GetArrayValue_mA83857365250C5B25D256A4525870724F38FDCC3 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____values_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		V_1 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)IsInst((RuntimeObject*)L_1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_1;
		return L_3;
	}

IL_0013:
	{
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		RuntimeObject* L_7 = V_0;
		String_t* L_8;
		L_8 = il2cpp_unsafe_as<String_t*>(L_7);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		return L_6;
	}

IL_0026:
	{
		return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}
}
IL2CPP_EXTERN_C  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* StringValues_GetArrayValue_mA83857365250C5B25D256A4525870724F38FDCC3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* _returnValue;
	_returnValue = StringValues_GetArrayValue_mA83857365250C5B25D256A4525870724F38FDCC3(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_IndexOf_m4F97B8DD973CFBAB8CE52539D540DFAA81B83864 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, String_t* ___item0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___item0;
		int32_t L_1;
		L_1 = StringValues_IndexOf_mCC7889C0239CB74664A47867DCE0A958C1913A05(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_IndexOf_m4F97B8DD973CFBAB8CE52539D540DFAA81B83864_AdjustorThunk (RuntimeObject* __this, String_t* ___item0, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_IndexOf_m4F97B8DD973CFBAB8CE52539D540DFAA81B83864(_thisAdjusted, ___item0, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringValues::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringValues_IndexOf_mCC7889C0239CB74664A47867DCE0A958C1913A05 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, String_t* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = __this->____values_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		V_1 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)IsInst((RuntimeObject*)L_1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_1;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		V_2 = 0;
		goto IL_0027;
	}

IL_0015:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		String_t* L_7 = ___item0;
		bool L_8;
		L_8 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_6, L_7, 4, NULL);
		if (!L_8)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_9 = V_2;
		return L_9;
	}

IL_0023:
	{
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0027:
	{
		int32_t L_11 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		return (-1);
	}

IL_002f:
	{
		RuntimeObject* L_13 = V_0;
		if (!L_13)
		{
			goto IL_0045;
		}
	}
	{
		RuntimeObject* L_14 = V_0;
		String_t* L_15;
		L_15 = il2cpp_unsafe_as<String_t*>(L_14);
		String_t* L_16 = ___item0;
		bool L_17;
		L_17 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_15, L_16, 4, NULL);
		if (L_17)
		{
			goto IL_0043;
		}
	}
	{
		return (-1);
	}

IL_0043:
	{
		return 0;
	}

IL_0045:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C  int32_t StringValues_IndexOf_mCC7889C0239CB74664A47867DCE0A958C1913A05_AdjustorThunk (RuntimeObject* __this, String_t* ___item0, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringValues_IndexOf_mCC7889C0239CB74664A47867DCE0A958C1913A05(_thisAdjusted, ___item0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Contains_m257F996C3DFF429399F41ABA6A87C58718EDB248 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, String_t* ___item0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___item0;
		int32_t L_1;
		L_1 = StringValues_IndexOf_mCC7889C0239CB74664A47867DCE0A958C1913A05(__this, L_0, NULL);
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Contains_m257F996C3DFF429399F41ABA6A87C58718EDB248_AdjustorThunk (RuntimeObject* __this, String_t* ___item0, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	bool _returnValue;
	_returnValue = StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Contains_m257F996C3DFF429399F41ABA6A87C58718EDB248(_thisAdjusted, ___item0, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.CopyTo(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_CopyTo_mC1D4529BACA96F8A609DD367D3AB9033A140BE57 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___array0;
		int32_t L_1 = ___arrayIndex1;
		StringValues_CopyTo_m07B061281018E07B88B63A2460DF80E07493D6B5(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_CopyTo_mC1D4529BACA96F8A609DD367D3AB9033A140BE57_AdjustorThunk (RuntimeObject* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_CopyTo_mC1D4529BACA96F8A609DD367D3AB9033A140BE57(_thisAdjusted, ___array0, ___arrayIndex1, method);
}
// System.Void Microsoft.Extensions.Primitives.StringValues::CopyTo(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_CopyTo_m07B061281018E07B88B63A2460DF80E07493D6B5 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____values_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		V_1 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)IsInst((RuntimeObject*)L_1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_1;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___array0;
		int32_t L_5 = ___arrayIndex1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_1;
		NullCheck(L_6);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		return;
	}

IL_001e:
	{
		RuntimeObject* L_7 = V_0;
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = ___array0;
		if (L_8)
		{
			goto IL_002f;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringValues_CopyTo_m07B061281018E07B88B63A2460DF80E07493D6B5_RuntimeMethod_var)));
	}

IL_002f:
	{
		int32_t L_10 = ___arrayIndex1;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringValues_CopyTo_m07B061281018E07B88B63A2460DF80E07493D6B5_RuntimeMethod_var)));
	}

IL_003e:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ___array0;
		NullCheck(L_12);
		int32_t L_13 = ___arrayIndex1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))) >= ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23AAD24B88E1254E39EC85AA38C64D9187D6D7D4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringValues_CopyTo_m07B061281018E07B88B63A2460DF80E07493D6B5_RuntimeMethod_var)));
	}

IL_0051:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = ___array0;
		int32_t L_16 = ___arrayIndex1;
		RuntimeObject* L_17 = V_0;
		String_t* L_18;
		L_18 = il2cpp_unsafe_as<String_t*>(L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (String_t*)L_18);
	}

IL_005a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void StringValues_CopyTo_m07B061281018E07B88B63A2460DF80E07493D6B5_AdjustorThunk (RuntimeObject* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	StringValues_CopyTo_m07B061281018E07B88B63A2460DF80E07493D6B5(_thisAdjusted, ___array0, ___arrayIndex1, method);
}
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Add_m5BCF426EFF1E288E18D6897FA37BA058E34C11D6 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, String_t* ___item0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Add_m5BCF426EFF1E288E18D6897FA37BA058E34C11D6_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Add_m5BCF426EFF1E288E18D6897FA37BA058E34C11D6_AdjustorThunk (RuntimeObject* __this, String_t* ___item0, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Add_m5BCF426EFF1E288E18D6897FA37BA058E34C11D6(_thisAdjusted, ___item0, method);
}
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_Insert_m14199DDBBCC20EB7E0F19FC15AF46DD42CBC4DC6 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, int32_t ___index0, String_t* ___item1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_Insert_m14199DDBBCC20EB7E0F19FC15AF46DD42CBC4DC6_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_Insert_m14199DDBBCC20EB7E0F19FC15AF46DD42CBC4DC6_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, String_t* ___item1, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_Insert_m14199DDBBCC20EB7E0F19FC15AF46DD42CBC4DC6(_thisAdjusted, ___index0, ___item1, method);
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Remove_mA4CED1A746707984E2E37CD807ABF490DA9B88CB (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, String_t* ___item0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Remove_mA4CED1A746707984E2E37CD807ABF490DA9B88CB_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  bool StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Remove_mA4CED1A746707984E2E37CD807ABF490DA9B88CB_AdjustorThunk (RuntimeObject* __this, String_t* ___item0, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	bool _returnValue;
	_returnValue = StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Remove_mA4CED1A746707984E2E37CD807ABF490DA9B88CB(_thisAdjusted, ___item0, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IList<System.String>.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_RemoveAt_m0880F0AF13704148BFA86D7EC42E554F1F9CBBE0 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_RemoveAt_m0880F0AF13704148BFA86D7EC42E554F1F9CBBE0_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_RemoveAt_m0880F0AF13704148BFA86D7EC42E554F1F9CBBE0_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	StringValues_System_Collections_Generic_IListU3CSystem_StringU3E_RemoveAt_m0880F0AF13704148BFA86D7EC42E554F1F9CBBE0(_thisAdjusted, ___index0, method);
}
// System.Void Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.ICollection<System.String>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Clear_m5D403A5F69CBC382B4B8766A963F11FC7E604543 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Clear_m5D403A5F69CBC382B4B8766A963F11FC7E604543_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Clear_m5D403A5F69CBC382B4B8766A963F11FC7E604543_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	StringValues_System_Collections_Generic_ICollectionU3CSystem_StringU3E_Clear_m5D403A5F69CBC382B4B8766A963F11FC7E604543(_thisAdjusted, method);
}
// Microsoft.Extensions.Primitives.StringValues/Enumerator Microsoft.Extensions.Primitives.StringValues::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A StringValues_GetEnumerator_m5AF25E6CA6D564A9E66807DDA71CC6649C2924E7 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____values_1;
		Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mDD3C6E367D3F946442E65356682BCABE862FD267((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A StringValues_GetEnumerator_m5AF25E6CA6D564A9E66807DDA71CC6649C2924E7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A _returnValue;
	_returnValue = StringValues_GetEnumerator_m5AF25E6CA6D564A9E66807DDA71CC6649C2924E7(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerator`1<System.String> Microsoft.Extensions.Primitives.StringValues::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringValues_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mE7EE9A8443B451DE6075271767B8AF6B0B41A1DE (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A L_0;
		L_0 = StringValues_GetEnumerator_m5AF25E6CA6D564A9E66807DDA71CC6649C2924E7(__this, NULL);
		Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A L_1 = L_0;
		RuntimeObject* L_2 = Box(Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* StringValues_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mE7EE9A8443B451DE6075271767B8AF6B0B41A1DE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = StringValues_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mE7EE9A8443B451DE6075271767B8AF6B0B41A1DE(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.IEnumerator Microsoft.Extensions.Primitives.StringValues::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringValues_System_Collections_IEnumerable_GetEnumerator_m882822DCEED6CD2964AA1D3FB55CC0347C1B98C0 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A L_0;
		L_0 = StringValues_GetEnumerator_m5AF25E6CA6D564A9E66807DDA71CC6649C2924E7(__this, NULL);
		Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A L_1 = L_0;
		RuntimeObject* L_2 = Box(Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* StringValues_System_Collections_IEnumerable_GetEnumerator_m882822DCEED6CD2964AA1D3FB55CC0347C1B98C0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = StringValues_System_Collections_IEnumerable_GetEnumerator_m882822DCEED6CD2964AA1D3FB55CC0347C1B98C0(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::IsNullOrEmpty(Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_IsNullOrEmpty_m5614B66B7C180F2B653F10EF8EB0465D2FB514FA (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_0 = ___value0;
		RuntimeObject* L_1 = L_0.____values_1;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject* L_3 = V_0;
		V_1 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)IsInst((RuntimeObject*)L_3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_1;
		NullCheck(L_5);
		V_2 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		int32_t L_6 = V_2;
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002e;
	}

IL_0023:
	{
		return (bool)1;
	}

IL_0025:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = 0;
		String_t* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		return L_11;
	}

IL_002e:
	{
		return (bool)0;
	}

IL_0030:
	{
		RuntimeObject* L_12 = V_0;
		String_t* L_13;
		L_13 = il2cpp_unsafe_as<String_t*>(L_12);
		bool L_14;
		L_14 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_13, NULL);
		return L_14;
	}
}
// Microsoft.Extensions.Primitives.StringValues Microsoft.Extensions.Primitives.StringValues::Concat(Microsoft.Extensions.Primitives.StringValues,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 StringValues_Concat_mE4B8597B5D3DC9A7217BE5E22A6883DD4D58CB19 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___values10, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___values21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = StringValues_get_Count_mA861D3B8E0735D73D323C3195C7486C8FF167DF8_inline((&___values10), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = StringValues_get_Count_mA861D3B8E0735D73D323C3195C7486C8FF167DF8_inline((&___values21), NULL);
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_3 = ___values21;
		return L_3;
	}

IL_0015:
	{
		int32_t L_4 = V_1;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_5 = ___values10;
		return L_5;
	}

IL_001a:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_6, L_7)));
		V_2 = L_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_2;
		StringValues_CopyTo_m07B061281018E07B88B63A2460DF80E07493D6B5((&___values10), L_9, 0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_2;
		int32_t L_11 = V_0;
		StringValues_CopyTo_m07B061281018E07B88B63A2460DF80E07493D6B5((&___values21), L_10, L_11, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_2;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_13;
		memset((&L_13), 0, sizeof(L_13));
		StringValues__ctor_m9B3C55052BF08BFDA9A49F952D7C5E2D24C3F7D9_inline((&L_13), L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// Microsoft.Extensions.Primitives.StringValues Microsoft.Extensions.Primitives.StringValues::Concat(Microsoft.Extensions.Primitives.StringValues&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 StringValues_Concat_mC8B1FB0D142667776C78493B34D8A33838FE905E (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* ___values0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	{
		String_t* L_0 = ___value1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* L_1 = ___values0;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_2 = (*(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*)L_1);
		return L_2;
	}

IL_000a:
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* L_3 = ___values0;
		int32_t L_4;
		L_4 = StringValues_get_Count_mA861D3B8E0735D73D323C3195C7486C8FF167DF8_inline(L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_6 = ___value1;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_7;
		memset((&L_7), 0, sizeof(L_7));
		StringValues__ctor_m18EEE44065E67724625C81BF4AE22C6A0A2B7117_inline((&L_7), L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_001b:
	{
		int32_t L_8 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_8, 1)));
		V_1 = L_9;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* L_10 = ___values0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_1;
		StringValues_CopyTo_m07B061281018E07B88B63A2460DF80E07493D6B5(L_10, L_11, 0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_1;
		int32_t L_13 = V_0;
		String_t* L_14 = ___value1;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_1;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_16;
		memset((&L_16), 0, sizeof(L_16));
		StringValues__ctor_m9B3C55052BF08BFDA9A49F952D7C5E2D24C3F7D9_inline((&L_16), L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// Microsoft.Extensions.Primitives.StringValues Microsoft.Extensions.Primitives.StringValues::Concat(System.String,Microsoft.Extensions.Primitives.StringValues&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 StringValues_Concat_mA1E49001B7F61E163FE5FD2DDDC90ED5F5FEFB03 (String_t* ___value0, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* ___values1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* L_1 = ___values1;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_2 = (*(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*)L_1);
		return L_2;
	}

IL_000a:
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* L_3 = ___values1;
		int32_t L_4;
		L_4 = StringValues_get_Count_mA861D3B8E0735D73D323C3195C7486C8FF167DF8_inline(L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_6 = ___value0;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_7;
		memset((&L_7), 0, sizeof(L_7));
		StringValues__ctor_m18EEE44065E67724625C81BF4AE22C6A0A2B7117_inline((&L_7), L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_001b:
	{
		int32_t L_8 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_8, 1)));
		V_1 = L_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_1;
		String_t* L_11 = ___value0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* L_12 = ___values1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_1;
		StringValues_CopyTo_m07B061281018E07B88B63A2460DF80E07493D6B5(L_12, L_13, 1, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_1;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_15;
		memset((&L_15), 0, sizeof(L_15));
		StringValues__ctor_m9B3C55052BF08BFDA9A49F952D7C5E2D24C3F7D9_inline((&L_15), L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(Microsoft.Extensions.Primitives.StringValues,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___left0, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___right1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = StringValues_get_Count_mA861D3B8E0735D73D323C3195C7486C8FF167DF8_inline((&___left0), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = StringValues_get_Count_mA861D3B8E0735D73D323C3195C7486C8FF167DF8_inline((&___right1), NULL);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		V_1 = 0;
		goto IL_0035;
	}

IL_0018:
	{
		int32_t L_3 = V_1;
		String_t* L_4;
		L_4 = StringValues_get_Item_m0B764CEA57AF1AF7E4ED5A3B306F7402B7190B50_inline((&___left0), L_3, NULL);
		int32_t L_5 = V_1;
		String_t* L_6;
		L_6 = StringValues_get_Item_m0B764CEA57AF1AF7E4ED5A3B306F7402B7190B50_inline((&___right1), L_5, NULL);
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0031:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Equality(Microsoft.Extensions.Primitives.StringValues,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Equality_m3ECD483CE92DC98CDA224454FCDE57AC4DDE37A4 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___left0, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_0 = ___left0;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_1 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Inequality(Microsoft.Extensions.Primitives.StringValues,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Inequality_mD2AC01F6EAD556B9DC931AA9DD83F8438611B02B (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___left0, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_0 = ___left0;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_1 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m3A228559A204B52C9BD0CF93B9756BC5034F6C87 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_0 = (*(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*)__this);
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_1 = ___other0;
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool StringValues_Equals_m3A228559A204B52C9BD0CF93B9756BC5034F6C87_AdjustorThunk (RuntimeObject* __this, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___other0, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	bool _returnValue;
	_returnValue = StringValues_Equals_m3A228559A204B52C9BD0CF93B9756BC5034F6C87(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(System.String,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m36412F6F4D813B40DC652F59A2C3E96DB29C77F5 (String_t* ___left0, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___left0;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringValues__ctor_m18EEE44065E67724625C81BF4AE22C6A0A2B7117_inline((&L_1), L_0, /*hidden argument*/NULL);
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_2 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(Microsoft.Extensions.Primitives.StringValues,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m80DD26DA051B31A5CE266FE942345ECF1C6DBBD9 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___left0, String_t* ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_0 = ___left0;
		String_t* L_1 = ___right1;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_2;
		memset((&L_2), 0, sizeof(L_2));
		StringValues__ctor_m18EEE44065E67724625C81BF4AE22C6A0A2B7117_inline((&L_2), L_1, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m8EF5C7B02B14673B8521970AE2F5D2914DD6A55E (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, String_t* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_0 = (*(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*)__this);
		String_t* L_1 = ___other0;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_2;
		memset((&L_2), 0, sizeof(L_2));
		StringValues__ctor_m18EEE44065E67724625C81BF4AE22C6A0A2B7117_inline((&L_2), L_1, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool StringValues_Equals_m8EF5C7B02B14673B8521970AE2F5D2914DD6A55E_AdjustorThunk (RuntimeObject* __this, String_t* ___other0, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	bool _returnValue;
	_returnValue = StringValues_Equals_m8EF5C7B02B14673B8521970AE2F5D2914DD6A55E(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(System.String[],Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m638FF103B2138334E1EEA23369857CF22C0DCB79 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___left0, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___left0;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringValues__ctor_m9B3C55052BF08BFDA9A49F952D7C5E2D24C3F7D9_inline((&L_1), L_0, /*hidden argument*/NULL);
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_2 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(Microsoft.Extensions.Primitives.StringValues,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m44EAC8AD93E3CCD26506691038D693B46776F0DD (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___left0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_0 = ___left0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___right1;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_2;
		memset((&L_2), 0, sizeof(L_2));
		StringValues__ctor_m9B3C55052BF08BFDA9A49F952D7C5E2D24C3F7D9_inline((&L_2), L_1, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_mA716FF54907E44BFA3140CB59CB7E359CE8B65D8 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_0 = (*(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*)__this);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___other0;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_2;
		memset((&L_2), 0, sizeof(L_2));
		StringValues__ctor_m9B3C55052BF08BFDA9A49F952D7C5E2D24C3F7D9_inline((&L_2), L_1, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool StringValues_Equals_mA716FF54907E44BFA3140CB59CB7E359CE8B65D8_AdjustorThunk (RuntimeObject* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___other0, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	bool _returnValue;
	_returnValue = StringValues_Equals_mA716FF54907E44BFA3140CB59CB7E359CE8B65D8(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Equality(Microsoft.Extensions.Primitives.StringValues,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Equality_mB3D4D9F12C4C2AAAE64A719CDDCECAD328F03115 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___left0, String_t* ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_0 = ___left0;
		String_t* L_1 = ___right1;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_2;
		memset((&L_2), 0, sizeof(L_2));
		StringValues__ctor_m18EEE44065E67724625C81BF4AE22C6A0A2B7117_inline((&L_2), L_1, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Inequality(Microsoft.Extensions.Primitives.StringValues,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Inequality_m251E7A0AB7A06DEBE1A6EC9FE87A0C26D9E425EC (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___left0, String_t* ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_0 = ___left0;
		String_t* L_1 = ___right1;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_2;
		memset((&L_2), 0, sizeof(L_2));
		StringValues__ctor_m18EEE44065E67724625C81BF4AE22C6A0A2B7117_inline((&L_2), L_1, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_0, L_2, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Equality(System.String,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Equality_mB0238FAF4331193CC966E55416DC61CBC71F721E (String_t* ___left0, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___left0;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringValues__ctor_m18EEE44065E67724625C81BF4AE22C6A0A2B7117_inline((&L_1), L_0, /*hidden argument*/NULL);
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_2 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Inequality(System.String,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Inequality_m907D6DAB7BBC272BAFE74D0871D053B56E4183DF (String_t* ___left0, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___left0;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringValues__ctor_m18EEE44065E67724625C81BF4AE22C6A0A2B7117_inline((&L_1), L_0, /*hidden argument*/NULL);
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_2 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_1, L_2, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Equality(Microsoft.Extensions.Primitives.StringValues,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Equality_mF68D7C0FF9453AE0E9E99BE3090A4B457451DF46 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___left0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_0 = ___left0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___right1;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_2;
		memset((&L_2), 0, sizeof(L_2));
		StringValues__ctor_m9B3C55052BF08BFDA9A49F952D7C5E2D24C3F7D9_inline((&L_2), L_1, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Inequality(Microsoft.Extensions.Primitives.StringValues,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Inequality_m1CE181A5BAAA8B152C2E5DE750A9901F5E32D21F (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___left0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_0 = ___left0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___right1;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_2;
		memset((&L_2), 0, sizeof(L_2));
		StringValues__ctor_m9B3C55052BF08BFDA9A49F952D7C5E2D24C3F7D9_inline((&L_2), L_1, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_0, L_2, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Equality(System.String[],Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Equality_mF1B984980D1FCFFAE6EFC613E1F155967DEDB69A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___left0, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___left0;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringValues__ctor_m9B3C55052BF08BFDA9A49F952D7C5E2D24C3F7D9_inline((&L_1), L_0, /*hidden argument*/NULL);
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_2 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Inequality(System.String[],Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Inequality_m01373FF0B4DD8233024219FDB9F2C022DDDF4F98 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___left0, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___left0;
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringValues__ctor_m9B3C55052BF08BFDA9A49F952D7C5E2D24C3F7D9_inline((&L_1), L_0, /*hidden argument*/NULL);
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_2 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_1, L_2, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Equality(Microsoft.Extensions.Primitives.StringValues,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Equality_m930835F6C76C5E6B1B8B872A7D4A8C2CB36A5F0A (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___left0, RuntimeObject* ___right1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___right1;
		bool L_1;
		L_1 = StringValues_Equals_m3752B7C0E1230E7F3D3F00E79FC16FABE20FDF26((&___left0), L_0, NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Inequality(Microsoft.Extensions.Primitives.StringValues,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Inequality_m7CAE126F4DCDCFA63EDAE592A67AAC713EEB1D31 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___left0, RuntimeObject* ___right1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___right1;
		bool L_1;
		L_1 = StringValues_Equals_m3752B7C0E1230E7F3D3F00E79FC16FABE20FDF26((&___left0), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Equality(System.Object,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Equality_m20194E5EE55118E2C9F6BF1675585B07253F9BEE (RuntimeObject* ___left0, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___right1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___left0;
		bool L_1;
		L_1 = StringValues_Equals_m3752B7C0E1230E7F3D3F00E79FC16FABE20FDF26((&___right1), L_0, NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::op_Inequality(System.Object,Microsoft.Extensions.Primitives.StringValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_op_Inequality_m93B11C0B772C420E830E7457779635F6369062DC (RuntimeObject* ___left0, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 ___right1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___left0;
		bool L_1;
		L_1 = StringValues_Equals_m3752B7C0E1230E7F3D3F00E79FC16FABE20FDF26((&___right1), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValues_Equals_m3752B7C0E1230E7F3D3F00E79FC16FABE20FDF26 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_1 = (*(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*)__this);
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_2 = ((StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_StaticFields*)il2cpp_codegen_static_fields_for(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var))->___Empty_0;
		bool L_3;
		L_3 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_1, L_2, NULL);
		return L_3;
	}

IL_0014:
	{
		RuntimeObject* L_4 = ___obj0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_5 = (*(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*)__this);
		RuntimeObject* L_6 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = StringValues_Equals_m80DD26DA051B31A5CE266FE942345ECF1C6DBBD9(L_5, ((String_t*)CastclassSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var)), NULL);
		return L_7;
	}

IL_002e:
	{
		RuntimeObject* L_8 = ___obj0;
		if (!((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)IsInst((RuntimeObject*)L_8, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_9 = (*(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*)__this);
		RuntimeObject* L_10 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = StringValues_Equals_m44EAC8AD93E3CCD26506691038D693B46776F0DD(L_9, ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_10, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), NULL);
		return L_11;
	}

IL_0048:
	{
		RuntimeObject* L_12 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_12, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_13 = (*(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*)__this);
		RuntimeObject* L_14 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = StringValues_Equals_m721B4D1ED5073CA558D0D7A01FE6B2E05F88574F(L_13, ((*(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*)((StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*)(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*)UnBox(L_14, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var)))), NULL);
		return L_15;
	}

IL_0062:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool StringValues_Equals_m3752B7C0E1230E7F3D3F00E79FC16FABE20FDF26_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	bool _returnValue;
	_returnValue = StringValues_Equals_m3752B7C0E1230E7F3D3F00E79FC16FABE20FDF26(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Microsoft.Extensions.Primitives.StringValues::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringValues_GetHashCode_m05E0E5064A56310A62B54B602351A195222F1333 (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B10_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____values_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		V_1 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)IsInst((RuntimeObject*)L_1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_1;
		if (!L_2)
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_3;
		L_3 = StringValues_get_Count_mA861D3B8E0735D73D323C3195C7486C8FF167DF8_inline(__this, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_4;
		L_4 = StringValues_get_Item_m0B764CEA57AF1AF7E4ED5A3B306F7402B7190B50_inline(__this, 0, NULL);
		String_t* L_5;
		L_5 = il2cpp_unsafe_as<String_t*>(L_4);
		String_t* L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_0039;
		}
	}
	{
		int32_t L_7;
		L_7 = StringValues_get_Count_mA861D3B8E0735D73D323C3195C7486C8FF167DF8_inline(__this, NULL);
		V_3 = L_7;
		int32_t L_8;
		L_8 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_3), NULL);
		return L_8;
	}

IL_0039:
	{
		NullCheck(G_B4_0);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, G_B4_0);
		return L_9;
	}

IL_003f:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D));
		V_4 = 0;
		goto IL_005d;
	}

IL_004c:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		HashCodeCombiner_Add_m141FE360DA80661BEAA03176A0E311904D27FCCA_inline((&V_2), L_13, NULL);
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_005d:
	{
		int32_t L_15 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_17;
		L_17 = HashCodeCombiner_get_CombinedHash_mA98B348E24539488D4F458BD008811CECA5D82D2_inline((&V_2), NULL);
		return L_17;
	}

IL_006c:
	{
		RuntimeObject* L_18 = V_0;
		String_t* L_19;
		L_19 = il2cpp_unsafe_as<String_t*>(L_18);
		String_t* L_20 = L_19;
		G_B10_0 = L_20;
		if (L_20)
		{
			G_B11_0 = L_20;
			goto IL_0085;
		}
	}
	{
		int32_t L_21;
		L_21 = StringValues_get_Count_mA861D3B8E0735D73D323C3195C7486C8FF167DF8_inline(__this, NULL);
		V_3 = L_21;
		int32_t L_22;
		L_22 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_3), NULL);
		return L_22;
	}

IL_0085:
	{
		NullCheck(G_B11_0);
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, G_B11_0);
		return L_23;
	}
}
IL2CPP_EXTERN_C  int32_t StringValues_GetHashCode_m05E0E5064A56310A62B54B602351A195222F1333_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StringValues_GetHashCode_m05E0E5064A56310A62B54B602351A195222F1333(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.StringValues::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValues__cctor_m47B4A75A54E24FFC71E26EB13D4F43AB7F005172 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751 L_1;
		memset((&L_1), 0, sizeof(L_1));
		StringValues__ctor_m9B3C55052BF08BFDA9A49F952D7C5E2D24C3F7D9_inline((&L_1), L_0, /*hidden argument*/NULL);
		((StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_StaticFields*)il2cpp_codegen_static_fields_for(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var))->___Empty_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&((StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_StaticFields*)il2cpp_codegen_static_fields_for(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var))->___Empty_0))->____values_1), (void*)NULL);
		return;
	}
}
// System.String Microsoft.Extensions.Primitives.StringValues::<GetStringValue>g__GetStringValueFromArray|19_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_U3CGetStringValueU3Eg__GetStringValueFromArrayU7C19_0_m5AC369BB7CF4ECB41E81A780BE37CD6AFB0D5197 (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___value0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = il2cpp_unsafe_as<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*>(L_1);
		V_0 = L_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		NullCheck(L_3);
		V_1 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		int32_t L_4 = V_1;
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_001f;
	}

IL_0019:
	{
		return (String_t*)NULL;
	}

IL_001b:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		return L_8;
	}

IL_001f:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = StringValues_U3CGetStringValueU3Eg__GetJoinedStringValueFromArrayU7C19_1_mF40A5AEC98F1EA8BC35B5C78DA7F4EAF5BDDC8D3(L_9, NULL);
		return L_10;
	}
}
// System.String Microsoft.Extensions.Primitives.StringValues::<GetStringValue>g__GetJoinedStringValueFromArray|19_1(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValues_U3CGetStringValueU3Eg__GetJoinedStringValueFromArrayU7C19_1_mF40A5AEC98F1EA8BC35B5C78DA7F4EAF5BDDC8D3 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	{
		V_0 = 0;
		V_3 = 0;
		goto IL_002f;
	}

IL_0006:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___values0;
		int32_t L_1 = V_3;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_4 = L_3;
		String_t* L_4 = V_4;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_5 = V_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0021:
	{
		int32_t L_9 = V_0;
		String_t* L_10 = V_4;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, L_11));
	}

IL_002b:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002f:
	{
		int32_t L_13 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = ___values0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_15 = V_0;
		ValueStringBuilder__ctor_mDD3390AC05005530F7E1A6DA8DFD43936FA831C3((&V_1), L_15, NULL);
		V_2 = (bool)0;
		V_5 = 0;
		goto IL_0075;
	}

IL_0044:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ___values0;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_6 = L_19;
		String_t* L_20 = V_6;
		if (!L_20)
		{
			goto IL_006f;
		}
	}
	{
		String_t* L_21 = V_6;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_21, NULL);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		bool L_23 = V_2;
		if (!L_23)
		{
			goto IL_0064;
		}
	}
	{
		ValueStringBuilder_Append_m71B6E13363208B3F75815AF4A6CC2F6C02B2066D_inline((&V_1), ((int32_t)44), NULL);
	}

IL_0064:
	{
		String_t* L_24 = V_6;
		ValueStringBuilder_Append_mD65BFDE00924F3EB0FD12A4C93600DD774D710E7_inline((&V_1), L_24, NULL);
		V_2 = (bool)1;
	}

IL_006f:
	{
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0075:
	{
		int32_t L_26 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = ___values0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_28;
		L_28 = ValueStringBuilder_ToString_m94BBB436E92758F1C659F554545284631C186E67((&V_1), NULL);
		return L_28;
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
// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringValues/Enumerator
IL2CPP_EXTERN_C void Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_marshal_pinvoke(const Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A& unmarshaled, Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_marshaled_pinvoke& marshaled)
{
	Exception_t* ____values_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_values' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____values_0Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_marshal_pinvoke_back(const Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_marshaled_pinvoke& marshaled, Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A& unmarshaled)
{
	Exception_t* ____values_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_values' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____values_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringValues/Enumerator
IL2CPP_EXTERN_C void Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_marshal_pinvoke_cleanup(Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.Extensions.Primitives.StringValues/Enumerator
IL2CPP_EXTERN_C void Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_marshal_com(const Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A& unmarshaled, Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_marshaled_com& marshaled)
{
	Exception_t* ____values_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_values' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____values_0Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_marshal_com_back(const Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_marshaled_com& marshaled, Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A& unmarshaled)
{
	Exception_t* ____values_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_values' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____values_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Primitives.StringValues/Enumerator
IL2CPP_EXTERN_C void Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_marshal_com_cleanup(Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A_marshaled_com& marshaled)
{
}
// System.Void Microsoft.Extensions.Primitives.StringValues/Enumerator::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mDD3C6E367D3F946442E65356682BCABE862FD267 (Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___value0;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		__this->____values_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_0), (void*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL);
		String_t* L_2 = V_0;
		__this->____current_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current_1), (void*)L_2);
		goto IL_002d;
	}

IL_001a:
	{
		__this->____current_1 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current_1), (void*)(String_t*)NULL);
		RuntimeObject* L_3 = ___value0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = il2cpp_unsafe_as<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*>(L_3);
		__this->____values_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_0), (void*)L_4);
	}

IL_002d:
	{
		__this->____index_2 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_mDD3C6E367D3F946442E65356682BCABE862FD267_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A*>(__this + _offset);
	Enumerator__ctor_mDD3C6E367D3F946442E65356682BCABE862FD267(_thisAdjusted, ___value0, method);
}
// System.Void Microsoft.Extensions.Primitives.StringValues/Enumerator::.ctor(Microsoft.Extensions.Primitives.StringValues&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m110F8147370E7E566851600D5EF274D6B43984BC (Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* __this, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* ___values0, const RuntimeMethod* method) 
{
	{
		StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* L_0 = ___values0;
		RuntimeObject* L_1 = L_0->____values_1;
		Enumerator__ctor_mDD3C6E367D3F946442E65356682BCABE862FD267(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_m110F8147370E7E566851600D5EF274D6B43984BC_AdjustorThunk (RuntimeObject* __this, StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* ___values0, const RuntimeMethod* method)
{
	Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A*>(__this + _offset);
	Enumerator__ctor_m110F8147370E7E566851600D5EF274D6B43984BC(_thisAdjusted, ___values0, method);
}
// System.Boolean Microsoft.Extensions.Primitives.StringValues/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9DB634A63D12BFDCEE7D908756AFD6692C3597E0 (Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	{
		int32_t L_0 = __this->____index_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->____values_0;
		V_1 = L_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_1;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_4 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_1;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) < ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_6 = V_0;
		__this->____index_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_1;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->____current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current_1), (void*)L_10);
		return (bool)1;
	}

IL_0031:
	{
		__this->____index_2 = (-1);
		return (bool)0;
	}

IL_003a:
	{
		__this->____index_2 = (-1);
		String_t* L_11 = __this->____current_1;
		return (bool)((!(((RuntimeObject*)(String_t*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m9DB634A63D12BFDCEE7D908756AFD6692C3597E0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A*>(__this + _offset);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m9DB634A63D12BFDCEE7D908756AFD6692C3597E0(_thisAdjusted, method);
	return _returnValue;
}
// System.String Microsoft.Extensions.Primitives.StringValues/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enumerator_get_Current_mCA92A105310E78E07692AB2976E51EEA84FF0F00 (Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Enumerator_get_Current_mCA92A105310E78E07692AB2976E51EEA84FF0F00_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Enumerator_get_Current_mCA92A105310E78E07692AB2976E51EEA84FF0F00_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Object Microsoft.Extensions.Primitives.StringValues/Enumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m6754EFA7F3868659B65E5AC8A0AD480C6E64BC1B (Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m6754EFA7F3868659B65E5AC8A0AD480C6E64BC1B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_m6754EFA7F3868659B65E5AC8A0AD480C6E64BC1B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Extensions.Primitives.StringValues/Enumerator::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Collections_IEnumerator_Reset_mF24ABCB4DEC32DF3A874FAAA9D8DBA461ADEE514 (Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerator_System_Collections_IEnumerator_Reset_mF24ABCB4DEC32DF3A874FAAA9D8DBA461ADEE514_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void Enumerator_System_Collections_IEnumerator_Reset_mF24ABCB4DEC32DF3A874FAAA9D8DBA461ADEE514_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A*>(__this + _offset);
	Enumerator_System_Collections_IEnumerator_Reset_mF24ABCB4DEC32DF3A874FAAA9D8DBA461ADEE514(_thisAdjusted, method);
}
// System.Void Microsoft.Extensions.Primitives.StringValues/Enumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2A54B91F47C69C6AC7E55A876F700297F77661C5 (Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m2A54B91F47C69C6AC7E55A876F700297F77661C5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A*>(__this + _offset);
	Enumerator_Dispose_m2A54B91F47C69C6AC7E55A876F700297F77661C5(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Extensions.Primitives.ThrowHelper::ThrowArgumentNullException(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_mC8181555627D844BE8402FEA5A0099A4E711E23B (int32_t ___argument0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___argument0;
		String_t* L_1;
		L_1 = ThrowHelper_GetArgumentName_mC4DD0B700B4CE743AD893A0FB52BC71C9E93FD4E(L_0, NULL);
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentNullException_mC8181555627D844BE8402FEA5A0099A4E711E23B_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.Extensions.Primitives.ThrowHelper::ThrowArgumentOutOfRangeException(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m5753DB221AF0A5BD32B5B86378CF16954F34D7EC (int32_t ___argument0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___argument0;
		String_t* L_1;
		L_1 = ThrowHelper_GetArgumentName_mC4DD0B700B4CE743AD893A0FB52BC71C9E93FD4E(L_0, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentOutOfRangeException_m5753DB221AF0A5BD32B5B86378CF16954F34D7EC_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.Extensions.Primitives.ThrowHelper::ThrowArgumentException(Microsoft.Extensions.Primitives.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_mAC8809CE1EEF0A27E0A8BAEBC535CD2719F81DB9 (int32_t ___resource0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___resource0;
		String_t* L_1;
		L_1 = ThrowHelper_GetResourceText_m360CBC87FAF9D180F816EFE374EEE4A669F0303C(L_0, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowArgumentException_mAC8809CE1EEF0A27E0A8BAEBC535CD2719F81DB9_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.Extensions.Primitives.ThrowHelper::ThrowInvalidOperationException(Microsoft.Extensions.Primitives.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_m4809554DF34B714F5691F67D36D710825255EBDA (int32_t ___resource0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___resource0;
		String_t* L_1;
		L_1 = ThrowHelper_GetResourceText_m360CBC87FAF9D180F816EFE374EEE4A669F0303C(L_0, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowInvalidOperationException_m4809554DF34B714F5691F67D36D710825255EBDA_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.Extensions.Primitives.ThrowHelper::ThrowInvalidOperationException(Microsoft.Extensions.Primitives.ExceptionResource,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_m2FA84AEC2C3CB1E961E316A09942EB7AA40A769D (int32_t ___resource0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___resource0;
		String_t* L_1;
		L_1 = ThrowHelper_GetResourceText_m360CBC87FAF9D180F816EFE374EEE4A669F0303C(L_0, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args1;
		String_t* L_3;
		L_3 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_1, L_2, NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowHelper_ThrowInvalidOperationException_m2FA84AEC2C3CB1E961E316A09942EB7AA40A769D_RuntimeMethod_var)));
	}
}
// System.ArgumentNullException Microsoft.Extensions.Primitives.ThrowHelper::GetArgumentNullException(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* ThrowHelper_GetArgumentNullException_mCC27246D89BBF2BFADEF78C81E7A1986761ACF82 (int32_t ___argument0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___argument0;
		String_t* L_1;
		L_1 = ThrowHelper_GetArgumentName_mC4DD0B700B4CE743AD893A0FB52BC71C9E93FD4E(L_0, NULL);
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, L_1, NULL);
		return L_2;
	}
}
// System.ArgumentOutOfRangeException Microsoft.Extensions.Primitives.ThrowHelper::GetArgumentOutOfRangeException(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* ThrowHelper_GetArgumentOutOfRangeException_mA168A9D5CC98E8DB73FC6E309FE2653A5CD8C28C (int32_t ___argument0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___argument0;
		String_t* L_1;
		L_1 = ThrowHelper_GetArgumentName_mC4DD0B700B4CE743AD893A0FB52BC71C9E93FD4E(L_0, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, L_1, NULL);
		return L_2;
	}
}
// System.ArgumentException Microsoft.Extensions.Primitives.ThrowHelper::GetArgumentException(Microsoft.Extensions.Primitives.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* ThrowHelper_GetArgumentException_mC566A081E2A06B39E400A5B772F5B6E0FE20FA7A (int32_t ___resource0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___resource0;
		String_t* L_1;
		L_1 = ThrowHelper_GetResourceText_m360CBC87FAF9D180F816EFE374EEE4A669F0303C(L_0, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, L_1, NULL);
		return L_2;
	}
}
// System.String Microsoft.Extensions.Primitives.ThrowHelper::GetResourceText(Microsoft.Extensions.Primitives.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetResourceText_m360CBC87FAF9D180F816EFE374EEE4A669F0303C (int32_t ___resource0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___resource0;
		String_t* L_1;
		L_1 = ThrowHelper_GetResourceName_m9E7AFB94B84B83F9C5E2F59E07459AAE26D828A6(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = SR_GetResourceString_m0E0E707439C7E3B85AF1309BB755B8155A605F0D(L_1, (String_t*)NULL, NULL);
		return L_2;
	}
}
// System.String Microsoft.Extensions.Primitives.ThrowHelper::GetArgumentName(Microsoft.Extensions.Primitives.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetArgumentName_mC4DD0B700B4CE743AD893A0FB52BC71C9E93FD4E (int32_t ___argument0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgument_t32AD450A3D33390C6B353D9285958924BE8941D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppFakeBox<int32_t> L_0(ExceptionArgument_t32AD450A3D33390C6B353D9285958924BE8941D2_il2cpp_TypeInfo_var, (&___argument0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		return L_1;
	}
}
// System.String Microsoft.Extensions.Primitives.ThrowHelper::GetResourceName(Microsoft.Extensions.Primitives.ExceptionResource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetResourceName_m9E7AFB94B84B83F9C5E2F59E07459AAE26D828A6 (int32_t ___resource0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionResource_t432DBAAF27B4FCB46455FFC1DD2B1FF919883EB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppFakeBox<int32_t> L_0(ExceptionResource_t432DBAAF27B4FCB46455FFC1DD2B1FF919883EB8_il2cpp_TypeInfo_var, (&___resource0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_mB210ED03D58BC227BCF20E83DC139FA0186B6A74_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var);
		bool L_0 = ((SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_StaticFields*)il2cpp_codegen_static_fields_for(SR_t87465A3032A69294AA5C0BEAE9FA7E51767A06CF_il2cpp_TypeInfo_var))->___s_usingResourceKeys_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ValueStringBuilder_get_Length_mCE34BD1632C668ADCDE6DECCF893446F73AB32EF_inline (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pos_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_set_Length_m28AD8981376A0DF1D6131FE3A81F07309F40E463_inline (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____pos_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Dispose_mB72FDAE544AB72CBE78BA48C982B1C1744F4C721_inline (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____arrayToReturnToPool_0;
		V_0 = L_0;
		il2cpp_codegen_initobj(__this, sizeof(ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_2;
		L_2 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Char>::Return(T[],System.Boolean) */, L_2, L_3, (bool)0);
	}

IL_001d:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ValueStringBuilder_get_RawChars_m46F4A6BD3DB09A1AE42040313088C530E330B7D8_inline (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, const RuntimeMethod* method) 
{
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = __this->____chars_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline (String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___text0;
		NullCheck(L_2);
		Il2CppChar* L_3;
		L_3 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_2, NULL);
		String_t* L_4 = ___text0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_6), L_3, L_5, /*hidden argument*/ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_m71B6E13363208B3F75815AF4A6CC2F6C02B2066D_inline (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, Il2CppChar ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____pos_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_2 = (&__this->____chars_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_2, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) < ((uint32_t)L_3))))
		{
			goto IL_002d;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_4 = (&__this->____chars_1);
		int32_t L_5 = V_0;
		Il2CppChar* L_6;
		L_6 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&((L_4)->____pointer_0))->value, (L_5), (L_4)->____length_1);
		Il2CppChar L_7 = ___c0;
		*((int16_t*)L_6) = (int16_t)L_7;
		int32_t L_8 = V_0;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}

IL_002d:
	{
		Il2CppChar L_9 = ___c0;
		ValueStringBuilder_GrowAndAppend_m6D16FA902C6FA430EB2E0CE41562CA6A39FD6B18(__this, L_9, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueStringBuilder_Append_mD65BFDE00924F3EB0FD12A4C93600DD774D710E7_inline (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		int32_t L_1 = __this->____pos_2;
		V_0 = L_1;
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_4 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_5 = (&__this->____chars_1);
		int32_t L_6;
		L_6 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_5, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		if ((!(((uint32_t)L_4) < ((uint32_t)L_6))))
		{
			goto IL_0040;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_7 = (&__this->____chars_1);
		int32_t L_8 = V_0;
		Il2CppChar* L_9;
		L_9 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&((L_7)->____pointer_0))->value, (L_8), (L_7)->____length_1);
		String_t* L_10 = ___s0;
		NullCheck(L_10);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, 0, NULL);
		*((int16_t*)L_9) = (int16_t)L_11;
		int32_t L_12 = V_0;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}

IL_0040:
	{
		String_t* L_13 = ___s0;
		ValueStringBuilder_AppendSlow_mB8FA5062946A3F440123995DA504CB9590769A60(__this, L_13, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ValueStringBuilder_AppendSpan_mD8EA197F63A0DC9686345FD68B2A5A035532EFCC_inline (ValueStringBuilder_t84781CC1C6A0DB61FE17DB390AD0024786BE4E8A* __this, int32_t ___length0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____pos_2;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_2 = (&__this->____chars_1);
		int32_t L_3;
		L_3 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline(L_2, Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		int32_t L_4 = ___length0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4)))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_5 = ___length0;
		ValueStringBuilder_Grow_m3BD5B20A4E621AC246B7A60B04EE9F57FEFBAAAA(__this, L_5, NULL);
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = ___length0;
		__this->____pos_2 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* L_8 = (&__this->____chars_1);
		int32_t L_9 = V_0;
		int32_t L_10 = ___length0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_11;
		L_11 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline(L_8, L_9, L_10, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashCodeCombiner_get_CombinedHash_mA98B348E24539488D4F458BD008811CECA5D82D2_inline (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* __this, const RuntimeMethod* method) 
{
	{
		int64_t* L_0 = (&__this->____combinedHash64_0);
		int32_t L_1;
		L_1 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner__ctor_m7F65BB70C45C7F576868747896C74795DA4B9431_inline (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* __this, int64_t ___seed0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___seed0;
		__this->____combinedHash64_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m1BF86C4A930E9EAF3EE2925DE5BFE9F5240DCE76_inline (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____combinedHash64_0;
		int64_t L_1 = __this->____combinedHash64_0;
		int32_t L_2 = ___i0;
		__this->____combinedHash64_0 = ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)(L_0<<5)), L_1))^((int64_t)L_2)));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m51DEECBFCAE37DD7D244132A6A2C30F92FFA5D87_inline (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___o0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___o0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		int32_t L_3 = V_0;
		HashCodeCombiner_Add_m1BF86C4A930E9EAF3EE2925DE5BFE9F5240DCE76_inline(__this, L_3, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_mBDF58DB330B88AEFBC93BA7D24669FCA0BDB7284_inline (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* __this, RuntimeObject* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___e0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		HashCodeCombiner_Add_m1BF86C4A930E9EAF3EE2925DE5BFE9F5240DCE76_inline(__this, 0, NULL);
		return;
	}

IL_000b:
	{
		V_0 = 0;
		RuntimeObject* L_1 = ___e0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_4 = V_3;
					if (!L_4)
					{
						goto IL_0042;
					}
				}
				{
					RuntimeObject* L_5 = V_3;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0042:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_0016_1:
			{
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				RuntimeObject* L_8 = V_2;
				HashCodeCombiner_Add_m51DEECBFCAE37DD7D244132A6A2C30F92FFA5D87_inline(__this, L_8, NULL);
				int32_t L_9 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
			}

IL_0028_1:
			{
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		int32_t L_12 = V_0;
		HashCodeCombiner_Add_m1BF86C4A930E9EAF3EE2925DE5BFE9F5240DCE76_inline(__this, L_12, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashCodeCombiner_Add_m141FE360DA80661BEAA03176A0E311904D27FCCA_inline (HashCodeCombiner_t802085603494F7F5A37649A18543FBE4D583131D* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000c;
	}

IL_0006:
	{
		String_t* L_1 = ___s0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		int32_t L_3 = V_0;
		HashCodeCombiner_Add_m1BF86C4A930E9EAF3EE2925DE5BFE9F5240DCE76_inline(__this, L_3, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationChangeToken_get_Token_mB1FFD354FA96636D4C4073DEEE6C8B48AA11D6A8_inline (CancellationChangeToken_t8A239246F4A5926729773EADF24383304A99CFE4* __this, const RuntimeMethod* method) 
{
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->___U3CTokenU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CancellationChangeToken_set_ActiveChangeCallbacks_m45F15D00347B46D3A3632ED6A873F29FEFCF4F79_inline (CancellationChangeToken_t8A239246F4A5926729773EADF24383304A99CFE4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CActiveChangeCallbacksU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompositeChangeToken_get_ChangeTokens_m88E933B2C65F6169F97E4C5F50B8D1DC10EBCEB0_inline (CompositeChangeToken_t2A87BA1410CD4ED351B41052B0665DEC868EF86B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CChangeTokensU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CBufferU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3COffsetU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringSegment__ctor_m676980906628B81CDA65E232AF0EC1AE45EFA992_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, String_t* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___buffer0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___offset1;
		String_t* L_2 = ___buffer0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((!(((uint32_t)L_1) <= ((uint32_t)L_3))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_4 = ___length2;
		String_t* L_5 = ___buffer0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		int32_t L_7 = ___offset1;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))))))
		{
			goto IL_001f;
		}
	}

IL_0017:
	{
		String_t* L_8 = ___buffer0;
		int32_t L_9 = ___offset1;
		int32_t L_10 = ___length2;
		il2cpp_codegen_runtime_class_init_inline(StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91_il2cpp_TypeInfo_var);
		StringSegment_ThrowInvalidArguments_mF3FC47196407DFDB2F1A409DD14C4ABD7A2651BB(L_8, L_9, L_10, NULL);
	}

IL_001f:
	{
		String_t* L_11 = ___buffer0;
		__this->___U3CBufferU3Ek__BackingField_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBufferU3Ek__BackingField_1), (void*)L_11);
		int32_t L_12 = ___offset1;
		__this->___U3COffsetU3Ek__BackingField_2 = L_12;
		int32_t L_13 = ___length2;
		__this->___U3CLengthU3Ek__BackingField_3 = L_13;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m8409F3DA0EF95BF6B3A8741E5C56E729B0A824C6_inline (String_t* ___text0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_0010;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)24), NULL);
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3 = V_0;
		return L_3;
	}

IL_001a:
	{
		int32_t L_4 = ___start1;
		String_t* L_5 = ___text0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_7 = ___length2;
		String_t* L_8 = ___text0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		int32_t L_10 = ___start1;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0035;
		}
	}

IL_002e:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)24), NULL);
	}

IL_0035:
	{
		String_t* L_11 = ___text0;
		NullCheck(L_11);
		Il2CppChar* L_12;
		L_12 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_11, NULL);
		int32_t L_13 = ___start1;
		Il2CppChar* L_14;
		L_14 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_12, L_13);
		int32_t L_15 = ___length2;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_16;
		memset((&L_16), 0, sizeof(L_16));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_16), L_14, L_15, /*hidden argument*/ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringSegment_Equals_m4DF7D767E55B81E5EE3C3558F45C2096F0C245F5_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_mC8181555627D844BE8402FEA5A0099A4E711E23B(3, NULL);
	}

IL_0009:
	{
		String_t* L_1 = ___text0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5(__this, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4;
		L_4 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0023;
		}
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		String_t* L_6;
		L_6 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		int32_t L_7;
		L_7 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		String_t* L_8 = ___text0;
		int32_t L_9 = V_0;
		int32_t L_10 = ___comparisonType1;
		int32_t L_11;
		L_11 = String_Compare_m68FBA6075A0142439B0249D884863356D99090CF(L_6, L_7, L_8, 0, L_9, L_10, NULL);
		return (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_GetHashCode_m3B755070692E166625922408555028247FB8E551_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0;
		L_0 = StringSegment_get_Value_mE407D9CAF5FB71A173D322100019E40C116A8462(__this, NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, G_B2_0);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringSegment_StartsWith_m69DB34A10F49EB2A089BD69FAFDB2718C3A933DD_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_mC8181555627D844BE8402FEA5A0099A4E711E23B(3, NULL);
	}

IL_0009:
	{
		V_0 = (bool)0;
		String_t* L_1 = ___text0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		V_1 = L_2;
		bool L_3;
		L_3 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5(__this, NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_4;
		L_4 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_6;
		L_6 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		int32_t L_7;
		L_7 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		String_t* L_8 = ___text0;
		int32_t L_9 = V_1;
		int32_t L_10 = ___comparisonType1;
		int32_t L_11;
		L_11 = String_Compare_m68FBA6075A0142439B0249D884863356D99090CF(L_6, L_7, L_8, 0, L_9, L_10, NULL);
		V_0 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
	}

IL_003c:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringSegment_EndsWith_mC0AB932389704E2E96B79D499023D3E01705D871_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, String_t* ___text0, int32_t ___comparisonType1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_mC8181555627D844BE8402FEA5A0099A4E711E23B(3, NULL);
	}

IL_0009:
	{
		V_0 = (bool)0;
		String_t* L_1 = ___text0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_4;
		L_4 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		int32_t L_5 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), L_5));
		bool L_6;
		L_6 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5(__this, NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_8;
		L_8 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		int32_t L_9 = V_2;
		String_t* L_10 = ___text0;
		int32_t L_11 = V_1;
		int32_t L_12 = ___comparisonType1;
		int32_t L_13;
		L_13 = String_Compare_m68FBA6075A0142439B0249D884863356D99090CF(L_8, L_9, L_10, 0, L_11, L_12, NULL);
		V_0 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
	}

IL_0042:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringSegment_Substring_mD329186D36540C757C84F0608168C15001964373_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, int32_t ___offset0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5(__this, NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = ___offset0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = ___offset0;
		int32_t L_4 = ___length1;
		int32_t L_5;
		L_5 = StringSegment_get_Length_m887CFBF475DEE1A090A4D0F95EE74BF875688FC9_inline(__this, NULL);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) > ((uint32_t)L_5))))
		{
			goto IL_0023;
		}
	}

IL_001b:
	{
		int32_t L_6 = ___offset0;
		int32_t L_7 = ___length1;
		StringSegment_ThrowInvalidArguments_m20F7DC8E12CE9642291ABD1A8CDEA9185E1C4A8F(__this, L_6, L_7, NULL);
	}

IL_0023:
	{
		String_t* L_8;
		L_8 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		int32_t L_9;
		L_9 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_10 = ___offset0;
		int32_t L_11 = ___length1;
		NullCheck(L_8);
		String_t* L_12;
		L_12 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_8, ((int32_t)il2cpp_codegen_add(L_9, L_10)), L_11, NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOf_m1957192987904D26891AA4884965743D760C3548_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, Il2CppChar ___c0, int32_t ___start1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		bool L_2;
		L_2 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5(__this, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___start1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = V_0;
		String_t* L_5;
		L_5 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if ((!(((uint32_t)L_4) > ((uint32_t)L_6))))
		{
			goto IL_0029;
		}
	}

IL_0023:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5753DB221AF0A5BD32B5B86378CF16954F34D7EC(4, NULL);
	}

IL_0029:
	{
		int32_t L_7 = ___count2;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5753DB221AF0A5BD32B5B86378CF16954F34D7EC(5, NULL);
	}

IL_0033:
	{
		String_t* L_8;
		L_8 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		Il2CppChar L_9 = ___c0;
		int32_t L_10 = V_0;
		int32_t L_11 = ___count2;
		NullCheck(L_8);
		int32_t L_12;
		L_12 = String_IndexOf_mFD81FEE71234D44F45A4924CD51AD6169C722ACB(L_8, L_9, L_10, L_11, NULL);
		V_1 = L_12;
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)(-1))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
	}

IL_004f:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegment_IndexOfAny_m067E9DB75ADC1887F028382F387ABF12E11A146E_inline (StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___anyOf0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		bool L_0;
		L_0 = StringSegment_get_HasValue_m37D61B3538C1EC906C437BA2F3751D862EA688C5(__this, NULL);
		if (!L_0)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_1 = ___startIndex1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2;
		L_2 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_3 = ___startIndex1;
		String_t* L_4;
		L_4 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_2, L_3))) <= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}

IL_0023:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5753DB221AF0A5BD32B5B86378CF16954F34D7EC(4, NULL);
	}

IL_0029:
	{
		int32_t L_6 = ___count2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_7;
		L_7 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_8 = ___startIndex1;
		int32_t L_9 = ___count2;
		String_t* L_10;
		L_10 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9))) <= ((int32_t)L_11)))
		{
			goto IL_004a;
		}
	}

IL_0044:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5753DB221AF0A5BD32B5B86378CF16954F34D7EC(5, NULL);
	}

IL_004a:
	{
		String_t* L_12;
		L_12 = StringSegment_get_Buffer_mC36DF017BE49B4583832BBD393DF0606EB2F6082_inline(__this, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = ___anyOf0;
		int32_t L_14;
		L_14 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		int32_t L_15 = ___startIndex1;
		int32_t L_16 = ___count2;
		NullCheck(L_12);
		int32_t L_17;
		L_17 = String_IndexOfAny_m740B0108B7FAFFAB1C3F88E782B094195A4E3B75(L_12, L_13, ((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16, NULL);
		V_0 = L_17;
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)(-1))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = StringSegment_get_Offset_mBD66D7019A57E29C0DC6B0EDC4FD77ECDDFEE5F4_inline(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, L_20));
	}

IL_006d:
	{
		int32_t L_21 = V_0;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringSegmentComparer_get_Comparison_m24630E531EB28547EDA6C9B6671681CE58D9B531_inline (StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CComparisonU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringSegmentComparer_get_Comparer_mA78CCF108147741E75938756D5DB52C7127065CA_inline (StringSegmentComparer_t225774FEDC1105A2118EF940E7B899C104B7CF80* __this, const RuntimeMethod* method) 
{
	{
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_0 = __this->___U3CComparerU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinal_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinalIgnoreCase_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_set_Current_mF72154922B4D89F06916FC3963F5FB3D4ADE5A3D_inline (Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* __this, StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 ___value0, const RuntimeMethod* method) 
{
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_0 = ___value0;
		__this->___U3CCurrentU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CCurrentU3Ek__BackingField_3))->___U3CBufferU3Ek__BackingField_1), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 Enumerator_get_Current_mB2793DD93766476DD63E3CA915C7875C5801321C_inline (Enumerator_t89B67CFACEFBBB3036B75AE7346318B800E8D5A0* __this, const RuntimeMethod* method) 
{
	{
		StringSegment_t41BB810A1E1A36CD0223C2B0771599297EFF1B91 L_0 = __this->___U3CCurrentU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringValues__ctor_m18EEE44065E67724625C81BF4AE22C6A0A2B7117_inline (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____values_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringValues__ctor_m9B3C55052BF08BFDA9A49F952D7C5E2D24C3F7D9_inline (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___values0;
		__this->____values_1 = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_1), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringValues_get_Count_mA861D3B8E0735D73D323C3195C7486C8FF167DF8_inline (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____values_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0011;
		}
	}
	{
		return 1;
	}

IL_0011:
	{
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		RuntimeObject* L_3 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = il2cpp_unsafe_as<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*>(L_3);
		NullCheck(L_4);
		return ((int32_t)(((RuntimeArray*)L_4)->max_length));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringValues_get_Item_m0B764CEA57AF1AF7E4ED5A3B306F7402B7190B50_inline (StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____values_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
		String_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___index0;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_4 = V_1;
		return L_4;
	}

IL_0016:
	{
		RuntimeObject* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
		L_7 = il2cpp_unsafe_as<StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*>(L_6);
		int32_t L_8 = ___index0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_0022:
	{
		il2cpp_codegen_runtime_class_init_inline(StringValues_t08A448B15DE2E4CFD99A7F81686A82186A175751_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = StringValues_OutOfBounds_m9E496C506C9CFEF804F05F76185400D3D1A12D40(NULL);
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Enumerator_get_Current_mCA92A105310E78E07692AB2976E51EEA84FF0F00_inline (Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____current_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m6754EFA7F3868659B65E5AC8A0AD480C6E64BC1B_inline (Enumerator_t3EC08428CCFD6EB1B8492A314270EEA5BE1CF44A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____current_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_0 = ((ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___U3CSharedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4 = ___start0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___start0;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		int32_t L_9 = ___length1;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___start0;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___start0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___ptr0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___ptr0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
