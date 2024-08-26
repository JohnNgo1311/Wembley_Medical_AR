#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Linq.Expressions.Expression`1<System.Func`3<System.IServiceProvider,System.Object[],System.Object>>
struct Expression_1_tB6A4FCFB0F165962F00D9953932C64360137E3C4;
// System.Linq.Expressions.Expression`1<System.Func`5<System.IServiceProvider,System.Type,System.Type,System.Boolean,System.Object>>
struct Expression_1_t2DC7D6BAB49660BD547C350C2817540D483211C2;
// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7;
// System.Func`1<System.Security.Claims.ClaimsPrincipal>
struct Func_1_tBF78A7C5465BEAFB7E0437596541E97B7B3C8D1E;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t60B0B212E646FAA748170ABB47E557CC31788685;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Collections.Generic.IEnumerable`1<System.Security.Claims.ClaimsIdentity>,System.Security.Claims.ClaimsIdentity>
struct Func_2_tA5771E9D24D52C033031611D7AB2AB65DEC96016;
// System.Func`2<Microsoft.AspNetCore.Connections.ConnectionContext,System.Threading.Tasks.Task>
struct Func_2_tD632BF20BE4B0170CF4C4D2C2597133418575B60;
// System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>
struct Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E;
// System.Func`2<Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate>
struct Func_2_tCA0F70EA96DEE508D3DDED8AF26BF05F3A47200E;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`3<Microsoft.AspNetCore.Connections.ConnectionContext,System.Func`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task>
struct Func_3_t00A12F33E416BA030A962398AFC6588B8D243E1D;
// System.Func`3<System.IServiceProvider,System.Object[],System.Object>
struct Func_3_t2D3C1B6F5B4B14BE6C8E7004CC36F4E57001C093;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
// System.Collections.Generic.IDictionary`2<System.Type,System.Object>
struct IDictionary_2_t7AE3EBA7008B31E9D8A2BE7AC43EC4189B67D06A;
// System.Collections.Generic.IEnumerable`1<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>>
struct IEnumerable_1_tCA38098D0A48A6F9E0AB8D45AAA0A3BF1CF2B9C5;
// System.Collections.Generic.IEnumerable`1<System.Func`2<Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate>>
struct IEnumerable_1_t438E38EC43C75093D1151A4221888DEC0F54DDB9;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t327FF232159D9644239A65F54312F684DB7BE375;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IList`1<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>>
struct IList_1_t47E08B2255D1895CB3A86708E4B253B5760483FF;
// System.Collections.Generic.IList`1<System.Func`2<Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate>>
struct IList_1_tC99A7F96E87345AB89CFD2D7689FB1FE28DA7980;
// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression>
struct IReadOnlyList_1_tB86476F62FBF3BB3389F17E0FFB65836DD3F2F65;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.List`1<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>>
struct List_1_t01EEEC97C68EAA8DDC25C28810FA20D96EFDD1B4;
// System.Collections.Generic.List`1<System.Func`2<Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate>>
struct List_1_t3A2CFA79535DAF064F8592CBC052C5CF6EA6EF63;
// System.Collections.Generic.List`1<System.Security.Claims.ClaimsIdentity>
struct List_1_t206E0A79B9344DF051AC5785FDB177444DC37EA9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo>
struct ReadOnlyCollection_1_tDAE35E503783CF053392CFBB43ACBDCE72C6C996;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
// System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>[]
struct Func_2U5BU5D_tEF33ED9B1C5A16AE5BF17E2CA0C973B957C3C111;
// System.Func`2<Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate>[]
struct Func_2U5BU5D_t14EB15A8633D6F1485CCA0DAB955461FABBD0383;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
// System.Nullable`1<System.Int32>[]
struct Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Microsoft.Extensions.Internal.ActivatorUtilitiesConstructorAttribute
struct ActivatorUtilitiesConstructorAttribute_tD3527F1CD4BD3A3156C90E15E1FC36C724545E73;
// Microsoft.AspNetCore.Connections.AddressInUseException
struct AddressInUseException_t741BAAE42E542C0FD9727F318E8D529CE3DD402D;
// System.Diagnostics.CodeAnalysis.AllowNullAttribute
struct AllowNullAttribute_t06B9046F4271D49C5D63462607FA5A8BC439AAD4;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// Microsoft.AspNetCore.Connections.BaseConnectionContext
struct BaseConnectionContext_tE415977D178CA1218669730776F715CF7D0A1BF5;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Security.Claims.ClaimsPrincipal
struct ClaimsPrincipal_t89FDDE5202B3ACA5770F1BE38D14615C94086F2D;
// Microsoft.AspNetCore.Connections.ConnectionAbortedException
struct ConnectionAbortedException_tCEA39F0E36681CB0895178FC04862FA69F1C12A9;
// Microsoft.AspNetCore.Connections.ConnectionBuilder
struct ConnectionBuilder_t3B3AAA1967A807400FF94FCEE93D4B8AA5E393E5;
// Microsoft.AspNetCore.Connections.ConnectionContext
struct ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D;
// Microsoft.AspNetCore.Connections.ConnectionDelegate
struct ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18;
// Microsoft.AspNetCore.Connections.ConnectionHandler
struct ConnectionHandler_t417077A9F428509A6BD4FDCE32738EF7AC022A51;
// Microsoft.AspNetCore.Connections.ConnectionItems
struct ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3;
// Microsoft.AspNetCore.Connections.ConnectionResetException
struct ConnectionResetException_t99ED4BC36E2026243A53B0333F2E589108E62FBF;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Microsoft.AspNetCore.Connections.DefaultConnectionContext
struct DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Diagnostics.CodeAnalysis.DisallowNullAttribute
struct DisallowNullAttribute_tA13214F26BC638FF6A747151F48E6134E8240D4D;
// System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute
struct DoesNotReturnAttribute_tBEF6E798FED20AFB38ADE4A80094262F1EFAC727;
// System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute
struct DoesNotReturnIfAttribute_tF99ACD73498C544128FB49F06CBD057479821DE0;
// System.Diagnostics.CodeAnalysis.DynamicallyAccessedMembersAttribute
struct DynamicallyAccessedMembersAttribute_t34850C4C362B50C72A8EEFF95DA2ED9E740F2110;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t0EB9AC381B00A7F9807A23F4575BFE92FF8E9063;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// Microsoft.AspNetCore.Http.Features.FeatureCollection
struct FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6;
// Microsoft.AspNetCore.Connections.FileHandleEndPoint
struct FileHandleEndPoint_tAE3ACC024998749ED28ADCCB3595DD94FF05A518;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Microsoft.AspNetCore.Connections.IConnectionBuilder
struct IConnectionBuilder_t5CDB87FE8EAFBC47572AD7068574716A7933EE59;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IO.Pipelines.IDuplexPipe
struct IDuplexPipe_tF4727E222DD7F3301F5C79FE74DF1A170BD945CD;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Microsoft.AspNetCore.Http.Features.IFeatureCollection
struct IFeatureCollection_t06D0760E0994CEA073C4481013861DEF0D029A44;
// Microsoft.AspNetCore.Connections.Experimental.IMultiplexedConnectionBuilder
struct IMultiplexedConnectionBuilder_t647BC5A936A3B884C972DC244B639215E1EBB8F4;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.IServiceProvider
struct IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6;
// System.Linq.Expressions.IndexExpression
struct IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Diagnostics.CodeAnalysis.MaybeNullAttribute
struct MaybeNullAttribute_t678C8DA0C6EF66810CAE0E0FFCAB1B194F4F928B;
// System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute
struct MaybeNullWhenAttribute_t9E01EA6C044569276F1C1900D4EAE44FA4DC1ACD;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Diagnostics.CodeAnalysis.MemberNotNullAttribute
struct MemberNotNullAttribute_t1D1F9DD0F4442DF9E090895DD57890CD4C67FEC6;
// System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute
struct MemberNotNullWhenAttribute_tD9AD81C18AAE8104943183543FE0440CCDFFF175;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionBuilder
struct MultiplexedConnectionBuilder_t533FAC2EEB9BF069237F8C0EC7B1DE8835EDDB98;
// Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionContext
struct MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1;
// Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate
struct MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF;
// System.Linq.Expressions.NewExpression
struct NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51;
// System.Diagnostics.CodeAnalysis.NotNullAttribute
struct NotNullAttribute_tA2EEE2325A48BBADB831F811578D85972D6D8055;
// System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute
struct NotNullIfNotNullAttribute_tB9BF13D030AE72A320D19EB13DC0AD582862ED98;
// System.Diagnostics.CodeAnalysis.NotNullWhenAttribute
struct NotNullWhenAttribute_t0F0BFC29C08BE23DD9CB42F4BA053A05A36BD098;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_tD34B4A2674283F569097BDA09D88486156159E16;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t6BD5C6FA9DB59EFBD90BE9E6C5803ADFB6C28A71;
// Microsoft.Extensions.Internal.ObjectFactory
struct ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA;
// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
// Microsoft.Extensions.Internal.ParameterDefaultValue
struct ParameterDefaultValue_t82553849D3385F28470C0E4867E3383893035C81;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// System.Threading.TimerCallback
struct TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// Microsoft.AspNetCore.Connections.UriEndPoint
struct UriEndPoint_tFA8B3694ECDAE7B72FB863586BB9004895AE92DD;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// Microsoft.Extensions.Internal.ActivatorUtilities/<>c
struct U3CU3Ec_t50B7BFC8BCDC3DFE6E74552F905F652BAC62FB49;
// Microsoft.AspNetCore.Connections.ConnectionBuilder/<>c
struct U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC;
// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tAD8DF23097ED4C225495D391DC0FA365EC24B8BF;
// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_1
struct U3CU3Ec__DisplayClass1_1_t47C8CF2F47B68957E10E714AE2FEF246F5FD58F3;
// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_2
struct U3CU3Ec__DisplayClass1_2_t7BD209E5DAD4704654907BD579587B854619F642;
// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t12686E36E783FC4E36362E079A8839E060582893;
// Microsoft.AspNetCore.Connections.DefaultConnectionContext/<>c
struct U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900;
// Microsoft.AspNetCore.Http.Features.FeatureCollection/KeyComparer
struct KeyComparer_t301D522C8DA2540FE01BB6FA47133C86C917B249;
// Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionBuilder/<>c
struct U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionAbortedException_tCEA39F0E36681CB0895178FC04862FA69F1C12A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t60B0B212E646FAA748170ABB47E557CC31788685_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t1577F0DDE3B34F1E97BB144908224A716AE1C2A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t464820FD275DB37D5FEB4A60C2F31365A66BB6A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tC7D2EE6D54C56127F341C61A3E514E6F3AB43651_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConnectionBuilder_t5CDB87FE8EAFBC47572AD7068574716A7933EE59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConnectionLifetimeFeature_t0F0E789C8323541D429E6D48DD896732761545D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t438E38EC43C75093D1151A4221888DEC0F54DDB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t62CCC8C17677893BE99939DD1210D67697098FFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tCA38098D0A48A6F9E0AB8D45AAA0A3BF1CF2B9C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9DDCA341A6EC6C1ACFCCFBCF72D7E022E674C266_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD0054AD8AB0F9468AFC55F5C14F34231B4F68F23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE7C3B18FC120FEBAB253C60BB2CA6EFD02F97176_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t01EEEC97C68EAA8DDC25C28810FA20D96EFDD1B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3A2CFA79535DAF064F8592CBC052C5CF6EA6EF63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterDefaultValue_t82553849D3385F28470C0E4867E3383893035C81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_tAD8DF23097ED4C225495D391DC0FA365EC24B8BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_1_t47C8CF2F47B68957E10E714AE2FEF246F5FD58F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_2_t7BD209E5DAD4704654907BD579587B854619F642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t12686E36E783FC4E36362E079A8839E060582893_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t50B7BFC8BCDC3DFE6E74552F905F652BAC62FB49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral059AB8FE8DEC48B335F3DEEC5DD071299BB001AC;
IL2CPP_EXTERN_C String_t* _stringLiteral106CF8B6C25989122240E7EB1263C2EB32DB3F16;
IL2CPP_EXTERN_C String_t* _stringLiteral10C63C8C602DD5E38BE4A758C90EBAC324CD3E69;
IL2CPP_EXTERN_C String_t* _stringLiteral13DCDFFEB463790670FB61F0955FDAE4CFA8DF73;
IL2CPP_EXTERN_C String_t* _stringLiteral167C65EB6C975B3A8544FD111059B733CFBA964A;
IL2CPP_EXTERN_C String_t* _stringLiteral175C84C8167E36B12F4445F08F3CCFAE61121D5A;
IL2CPP_EXTERN_C String_t* _stringLiteral1E9918A305DD44C6C5253BF7305AB7758C686BB5;
IL2CPP_EXTERN_C String_t* _stringLiteral25DF26F9216E3E00ED168A90DD0E9DAF1C534586;
IL2CPP_EXTERN_C String_t* _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral689F3378765A4F6E5473B7A9517A050AB962198D;
IL2CPP_EXTERN_C String_t* _stringLiteral68FB1D2C9FFF0D771B9B705E90F8A5891EA88BDA;
IL2CPP_EXTERN_C String_t* _stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral8B8AA5273679EF7F7E3FB552E405DCF30B14ECA1;
IL2CPP_EXTERN_C String_t* _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_CreateInstance_mBA0A226E521EC864B1ECA2706E520B4E303C06E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_FindApplicableConstructor_m8F7242370719D57262491512EF2A03E192ACF7D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_GetMethodInfo_TisFunc_5_t8BEA11C86578CFEBA7F26FF34A0A60F01431DCB0_mB7B11F35ABEDD82E7DD04D5FF33585B295E883FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_GetService_m7AC092E824B4590F4F716E4E43673BE856435C86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_ThrowMarkedCtorDoesNotTakeAllProvidedArguments_m047C53D26F8BEE18820978E05E27969655B31855_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_ThrowMultipleCtorsMarkedWithAttributeException_mED279EA5B80859D8DEB172DE79DB2D688A679FE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivatorUtilities_TryFindMatchingConstructor_m4BDC1C6B3A07CCA0891F6A9D777DBA579BF44FFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConstructorMatcher_CreateInstance_m04286FDF0C5CFB9B4E49DB22EB208F7DF0C3154C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisFunc_2_tABD83A4369BBAF753476777E752F329F79F9A08E_mE9CE5E7437D16AF0BBF75275EEA687B211153FF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Reverse_TisFunc_2_tCA0F70EA96DEE508D3DDED8AF26BF05F3A47200E_m25141522776F3C3EFE1FFF6529D5C71FABE31285_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_1_Compile_m1C4DD85947C855F964A4D02BDB8D3BE5940C54A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Lambda_TisFunc_3_t2D3C1B6F5B4B14BE6C8E7004CC36F4E57001C093_m23DEF827804CA29573E8BCF658B151FF955DE0F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Expression_Lambda_TisFunc_5_t8BEA11C86578CFEBA7F26FF34A0A60F01431DCB0_m259A292B2C8778D6341D0DD5552309535E5C2E78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileHandleEndPoint__ctor_mA6B0B0E0BFDD394F918366560181ED6F02A8BF02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3_Invoke_m3920D23C723D5053989C3EC0075342E6FA056206_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IFeatureCollection_Get_TisIConnectionLifetimeFeature_t0F0E789C8323541D429E6D48DD896732761545D3_m600F7632A8C49BB5292B8C0D3F20B21B39A0B4B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IFeatureCollection_Set_TisIConnectionEndPointFeature_tE6C15E679D0FA4DD53120BE703EAF28626B7CDDB_mB988FB6A872317589071E103114702F11A38BDE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IFeatureCollection_Set_TisIConnectionIdFeature_t13D89CD9B75EC3EDD2D035C5323A27BB1BAED227_m09DB46446A4DFF8AE1BF3BD79131B393A3028EC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IFeatureCollection_Set_TisIConnectionItemsFeature_tCDC9C8EFE8BF99926CDFE5991C97055A693B27F0_mB554251FA5C48DABE8B955840AE7A911B37A49F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IFeatureCollection_Set_TisIConnectionLifetimeFeature_t0F0E789C8323541D429E6D48DD896732761545D3_m6F303437FB1B469C5026F6091089E225C8006CE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IFeatureCollection_Set_TisIConnectionTransportFeature_t977639FE92595385FF45FEE677CF41671AE51BA3_m765EEA95C47AF9755BA54AB73124B81147CB491F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IFeatureCollection_Set_TisIConnectionUserFeature_t9B07915FD680FEB0BA095A0937702D9575A0A88F_m6098F683D012588D81804620290C57C0AF0BEDA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4E90DE7FE8420DB703F80C915AC0E024CEB5E783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7CC38969032F703713B07A4677D95F74F59DB9D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParameterDefaultValue_TryGetDefaultValue_m386B67FD66A3395501D1C3F1C6C3080C907B529F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAbortU3Eb__39_0_m341DA14C44D2DA972A0BE3C1A23ED1411F293D7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CBuildU3Eb__6_0_m2B7C3F95D1DD2F81B27C8861E617EB06BD5F5657_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CBuildU3Eb__6_0_m58BADFB518A425C31B8307D587C2A05453E9CE25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CUseU3Eb__0_mE8DFE1C507B597F8095743CD17C1DB33A18E8080_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_1_U3CUseU3Eb__1_m6524645637133127E18FA818698B0324176F0F32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_2_U3CUseU3Eb__2_m42687403694FB9387883C65886B4391726610B37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CRunU3Eb__0_m08E0CC51339C1B478880CE4E6C1187CAC16EAFA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CRunU3Eb__1_m1FD0804009FDA214A0050B1A6D26F709953290A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UriEndPoint__ctor_mA7B5F0B6F746037FD4AE11A9DB78991E35A3C1A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ActivatorUtilitiesConstructorAttribute_tD3527F1CD4BD3A3156C90E15E1FC36C724545E73_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Type_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;;
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com;
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com;;
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke;
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke;;

struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t61FE013526774635B0BFB562930AAEA2F18CA1F1 
{
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* ____entries_1;
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
	KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* ____values_8;
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

// System.Collections.Generic.List`1<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>>
struct List_1_t01EEEC97C68EAA8DDC25C28810FA20D96EFDD1B4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Func_2U5BU5D_tEF33ED9B1C5A16AE5BF17E2CA0C973B957C3C111* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t01EEEC97C68EAA8DDC25C28810FA20D96EFDD1B4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Func_2U5BU5D_tEF33ED9B1C5A16AE5BF17E2CA0C973B957C3C111* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Func`2<Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate>>
struct List_1_t3A2CFA79535DAF064F8592CBC052C5CF6EA6EF63  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Func_2U5BU5D_t14EB15A8633D6F1485CCA0DAB955461FABBD0383* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3A2CFA79535DAF064F8592CBC052C5CF6EA6EF63_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Func_2U5BU5D_t14EB15A8633D6F1485CCA0DAB955461FABBD0383* ___s_emptyArray_5;
};

// Microsoft.Extensions.Internal.ActivatorUtilities
struct ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631  : public RuntimeObject
{
};

struct ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_StaticFields
{
	// System.Reflection.MethodInfo Microsoft.Extensions.Internal.ActivatorUtilities::GetServiceInfo
	MethodInfo_t* ___GetServiceInfo_0;
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

// System.Security.Claims.ClaimsPrincipal
struct ClaimsPrincipal_t89FDDE5202B3ACA5770F1BE38D14615C94086F2D  : public RuntimeObject
{
	// System.String System.Security.Claims.ClaimsPrincipal::m_version
	String_t* ___m_version_0;
	// System.String System.Security.Claims.ClaimsPrincipal::m_serializedClaimsIdentities
	String_t* ___m_serializedClaimsIdentities_1;
	// System.Collections.Generic.List`1<System.Security.Claims.ClaimsIdentity> System.Security.Claims.ClaimsPrincipal::m_identities
	List_1_t206E0A79B9344DF051AC5785FDB177444DC37EA9* ___m_identities_2;
};

struct ClaimsPrincipal_t89FDDE5202B3ACA5770F1BE38D14615C94086F2D_StaticFields
{
	// System.Func`2<System.Collections.Generic.IEnumerable`1<System.Security.Claims.ClaimsIdentity>,System.Security.Claims.ClaimsIdentity> System.Security.Claims.ClaimsPrincipal::s_identitySelector
	Func_2_tA5771E9D24D52C033031611D7AB2AB65DEC96016* ___s_identitySelector_3;
	// System.Func`1<System.Security.Claims.ClaimsPrincipal> System.Security.Claims.ClaimsPrincipal::s_principalSelector
	Func_1_tBF78A7C5465BEAFB7E0437596541E97B7B3C8D1E* ___s_principalSelector_4;
};

// Microsoft.AspNetCore.Connections.ConnectionBuilder
struct ConnectionBuilder_t3B3AAA1967A807400FF94FCEE93D4B8AA5E393E5  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>> Microsoft.AspNetCore.Connections.ConnectionBuilder::_components
	RuntimeObject* ____components_0;
	// System.IServiceProvider Microsoft.AspNetCore.Connections.ConnectionBuilder::<ApplicationServices>k__BackingField
	RuntimeObject* ___U3CApplicationServicesU3Ek__BackingField_1;
};

// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions
struct ConnectionBuilderExtensions_tE404CEA098053B7B56CD6E4C28AD73F6AA91B205  : public RuntimeObject
{
};

// Microsoft.AspNetCore.Connections.ConnectionHandler
struct ConnectionHandler_t417077A9F428509A6BD4FDCE32738EF7AC022A51  : public RuntimeObject
{
};

// Microsoft.AspNetCore.Connections.ConnectionItems
struct ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.Object,System.Object> Microsoft.AspNetCore.Connections.ConnectionItems::<Items>k__BackingField
	RuntimeObject* ___U3CItemsU3Ek__BackingField_0;
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t* ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject* ___m_stackTrace_1;
};

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
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

// Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionBuilder
struct MultiplexedConnectionBuilder_t533FAC2EEB9BF069237F8C0EC7B1DE8835EDDB98  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<System.Func`2<Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate>> Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionBuilder::_components
	RuntimeObject* ____components_0;
	// System.IServiceProvider Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionBuilder::<ApplicationServices>k__BackingField
	RuntimeObject* ___U3CApplicationServicesU3Ek__BackingField_1;
};

// Microsoft.Extensions.Internal.ParameterDefaultValue
struct ParameterDefaultValue_t82553849D3385F28470C0E4867E3383893035C81  : public RuntimeObject
{
};

struct ParameterDefaultValue_t82553849D3385F28470C0E4867E3383893035C81_StaticFields
{
	// System.Type Microsoft.Extensions.Internal.ParameterDefaultValue::_nullable
	Type_t* ____nullable_0;
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
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

// Microsoft.Extensions.Internal.ActivatorUtilities/<>c
struct U3CU3Ec_t50B7BFC8BCDC3DFE6E74552F905F652BAC62FB49  : public RuntimeObject
{
};

struct U3CU3Ec_t50B7BFC8BCDC3DFE6E74552F905F652BAC62FB49_StaticFields
{
	// Microsoft.Extensions.Internal.ActivatorUtilities/<>c Microsoft.Extensions.Internal.ActivatorUtilities/<>c::<>9
	U3CU3Ec_t50B7BFC8BCDC3DFE6E74552F905F652BAC62FB49* ___U3CU3E9_0;
};

// Microsoft.AspNetCore.Connections.ConnectionBuilder/<>c
struct U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC  : public RuntimeObject
{
};

struct U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_StaticFields
{
	// Microsoft.AspNetCore.Connections.ConnectionBuilder/<>c Microsoft.AspNetCore.Connections.ConnectionBuilder/<>c::<>9
	U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC* ___U3CU3E9_0;
	// Microsoft.AspNetCore.Connections.ConnectionDelegate Microsoft.AspNetCore.Connections.ConnectionBuilder/<>c::<>9__6_0
	ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* ___U3CU3E9__6_0_1;
};

// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tAD8DF23097ED4C225495D391DC0FA365EC24B8BF  : public RuntimeObject
{
	// System.Func`3<Microsoft.AspNetCore.Connections.ConnectionContext,System.Func`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task> Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_0::middleware
	Func_3_t00A12F33E416BA030A962398AFC6588B8D243E1D* ___middleware_0;
};

// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_1
struct U3CU3Ec__DisplayClass1_1_t47C8CF2F47B68957E10E714AE2FEF246F5FD58F3  : public RuntimeObject
{
	// Microsoft.AspNetCore.Connections.ConnectionDelegate Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_1::next
	ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* ___next_0;
	// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_0 Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass1_0_tAD8DF23097ED4C225495D391DC0FA365EC24B8BF* ___CSU24U3CU3E8__locals1_1;
};

// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_2
struct U3CU3Ec__DisplayClass1_2_t7BD209E5DAD4704654907BD579587B854619F642  : public RuntimeObject
{
	// Microsoft.AspNetCore.Connections.ConnectionContext Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_2::context
	ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___context_0;
	// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_1 Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_2::CS$<>8__locals2
	U3CU3Ec__DisplayClass1_1_t47C8CF2F47B68957E10E714AE2FEF246F5FD58F3* ___CSU24U3CU3E8__locals2_1;
};

// Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t12686E36E783FC4E36362E079A8839E060582893  : public RuntimeObject
{
	// System.Func`2<Microsoft.AspNetCore.Connections.ConnectionContext,System.Threading.Tasks.Task> Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass2_0::middleware
	Func_2_tD632BF20BE4B0170CF4C4D2C2597133418575B60* ___middleware_0;
	// Microsoft.AspNetCore.Connections.ConnectionDelegate Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass2_0::<>9__1
	ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* ___U3CU3E9__1_1;
};

// Microsoft.AspNetCore.Connections.DefaultConnectionContext/<>c
struct U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900  : public RuntimeObject
{
};

struct U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_StaticFields
{
	// Microsoft.AspNetCore.Connections.DefaultConnectionContext/<>c Microsoft.AspNetCore.Connections.DefaultConnectionContext/<>c::<>9
	U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900* ___U3CU3E9_0;
	// System.Threading.WaitCallback Microsoft.AspNetCore.Connections.DefaultConnectionContext/<>c::<>9__39_0
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___U3CU3E9__39_0_1;
};

// Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionBuilder/<>c
struct U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3  : public RuntimeObject
{
};

struct U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_StaticFields
{
	// Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionBuilder/<>c Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionBuilder/<>c::<>9
	U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3* ___U3CU3E9_0;
	// Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionBuilder/<>c::<>9__6_0
	MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* ___U3CU3E9__6_0_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// Microsoft.Extensions.Internal.ActivatorUtilitiesConstructorAttribute
struct ActivatorUtilitiesConstructorAttribute_tD3527F1CD4BD3A3156C90E15E1FC36C724545E73  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.AllowNullAttribute
struct AllowNullAttribute_t06B9046F4271D49C5D63462607FA5A8BC439AAD4  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::<Right>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CRightU3Ek__BackingField_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::<Left>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CLeftU3Ek__BackingField_4;
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

// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Object System.Linq.Expressions.ConstantExpression::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_3;
};

// System.Diagnostics.CodeAnalysis.DisallowNullAttribute
struct DisallowNullAttribute_tA13214F26BC638FF6A747151F48E6134E8240D4D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.DoesNotReturnAttribute
struct DoesNotReturnAttribute_tBEF6E798FED20AFB38ADE4A80094262F1EFAC727  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute
struct DoesNotReturnIfAttribute_tF99ACD73498C544128FB49F06CBD057479821DE0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute::<ParameterValue>k__BackingField
	bool ___U3CParameterValueU3Ek__BackingField_0;
};

// System.Diagnostics.CodeAnalysis.DynamicallyAccessedMembersAttribute
struct DynamicallyAccessedMembersAttribute_t34850C4C362B50C72A8EEFF95DA2ED9E740F2110  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Diagnostics.CodeAnalysis.DynamicallyAccessedMemberTypes System.Diagnostics.CodeAnalysis.DynamicallyAccessedMembersAttribute::<MemberTypes>k__BackingField
	int32_t ___U3CMemberTypesU3Ek__BackingField_0;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t0EB9AC381B00A7F9807A23F4575BFE92FF8E9063  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Microsoft.AspNetCore.Connections.FileHandleEndPoint
struct FileHandleEndPoint_tAE3ACC024998749ED28ADCCB3595DD94FF05A518  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.UInt64 Microsoft.AspNetCore.Connections.FileHandleEndPoint::<FileHandle>k__BackingField
	uint64_t ___U3CFileHandleU3Ek__BackingField_0;
	// Microsoft.AspNetCore.Connections.FileHandleType Microsoft.AspNetCore.Connections.FileHandleEndPoint::<FileHandleType>k__BackingField
	int32_t ___U3CFileHandleTypeU3Ek__BackingField_1;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Linq.Expressions.IndexExpression
struct IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.IndexExpression::_arguments
	RuntimeObject* ____arguments_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.IndexExpression::<Object>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CObjectU3Ek__BackingField_4;
	// System.Reflection.PropertyInfo System.Linq.Expressions.IndexExpression::<Indexer>k__BackingField
	PropertyInfo_t* ___U3CIndexerU3Ek__BackingField_5;
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

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// System.Diagnostics.CodeAnalysis.MaybeNullAttribute
struct MaybeNullAttribute_t678C8DA0C6EF66810CAE0E0FFCAB1B194F4F928B  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute
struct MaybeNullWhenAttribute_t9E01EA6C044569276F1C1900D4EAE44FA4DC1ACD  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute::<ReturnValue>k__BackingField
	bool ___U3CReturnValueU3Ek__BackingField_0;
};

// System.Diagnostics.CodeAnalysis.MemberNotNullAttribute
struct MemberNotNullAttribute_t1D1F9DD0F4442DF9E090895DD57890CD4C67FEC6  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String[] System.Diagnostics.CodeAnalysis.MemberNotNullAttribute::<Members>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CMembersU3Ek__BackingField_0;
};

// System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute
struct MemberNotNullWhenAttribute_tD9AD81C18AAE8104943183543FE0440CCDFFF175  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::<ReturnValue>k__BackingField
	bool ___U3CReturnValueU3Ek__BackingField_0;
	// System.String[] System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::<Members>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CMembersU3Ek__BackingField_1;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Reflection.MethodInfo System.Linq.Expressions.MethodCallExpression::<Method>k__BackingField
	MethodInfo_t* ___U3CMethodU3Ek__BackingField_3;
};

// System.Linq.Expressions.NewExpression
struct NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewExpression::_arguments
	RuntimeObject* ____arguments_3;
	// System.Reflection.ConstructorInfo System.Linq.Expressions.NewExpression::<Constructor>k__BackingField
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___U3CConstructorU3Ek__BackingField_4;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo> System.Linq.Expressions.NewExpression::<Members>k__BackingField
	ReadOnlyCollection_1_tDAE35E503783CF053392CFBB43ACBDCE72C6C996* ___U3CMembersU3Ek__BackingField_5;
};

// System.Diagnostics.CodeAnalysis.NotNullAttribute
struct NotNullAttribute_tA2EEE2325A48BBADB831F811578D85972D6D8055  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute
struct NotNullIfNotNullAttribute_tB9BF13D030AE72A320D19EB13DC0AD582862ED98  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute::<ParameterName>k__BackingField
	String_t* ___U3CParameterNameU3Ek__BackingField_0;
};

// System.Diagnostics.CodeAnalysis.NotNullWhenAttribute
struct NotNullWhenAttribute_t0F0BFC29C08BE23DD9CB42F4BA053A05A36BD098  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.Diagnostics.CodeAnalysis.NotNullWhenAttribute::<ReturnValue>k__BackingField
	bool ___U3CReturnValueU3Ek__BackingField_0;
};

// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_tD34B4A2674283F569097BDA09D88486156159E16  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags_0;
};

// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t6BD5C6FA9DB59EFBD90BE9E6C5803ADFB6C28A71  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;
};

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Type System.Linq.Expressions.UnaryExpression::<Type>k__BackingField
	Type_t* ___U3CTypeU3Ek__BackingField_3;
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.UnaryExpression::<NodeType>k__BackingField
	int32_t ___U3CNodeTypeU3Ek__BackingField_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::<Operand>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3COperandU3Ek__BackingField_5;
	// System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::<Method>k__BackingField
	MethodInfo_t* ___U3CMethodU3Ek__BackingField_6;
};

// Microsoft.AspNetCore.Connections.UriEndPoint
struct UriEndPoint_tFA8B3694ECDAE7B72FB863586BB9004895AE92DD  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Uri Microsoft.AspNetCore.Connections.UriEndPoint::<Uri>k__BackingField
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___U3CUriU3Ek__BackingField_0;
};

// System.Threading.Tasks.ValueTask
struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F 
{
	// System.Object System.Threading.Tasks.ValueTask::_obj
	RuntimeObject* ____obj_1;
	// System.Int16 System.Threading.Tasks.ValueTask::_token
	int16_t ____token_2;
	// System.Boolean System.Threading.Tasks.ValueTask::_continueOnCapturedContext
	bool ____continueOnCapturedContext_3;
};

struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F_StaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::s_canceledTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___s_canceledTask_0;
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

// Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher
struct ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1 
{
	// System.Reflection.ConstructorInfo Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher::_constructor
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ____constructor_0;
	// System.Reflection.ParameterInfo[] Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher::_parameters
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ____parameters_1;
	// System.Object[] Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher::_parameterValues
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____parameterValues_2;
};
// Native definition for P/Invoke marshalling of Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher
struct ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1_marshaled_pinvoke
{
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ____constructor_0;
	ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke** ____parameters_1;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____parameterValues_2;
};
// Native definition for COM marshalling of Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher
struct ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1_marshaled_com
{
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ____constructor_0;
	ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com** ____parameters_1;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____parameterValues_2;
};

// System.Linq.Expressions.Expression`1<System.Func`3<System.IServiceProvider,System.Object[],System.Object>>
struct Expression_1_tB6A4FCFB0F165962F00D9953932C64360137E3C4  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};

// System.Linq.Expressions.Expression`1<System.Func`5<System.IServiceProvider,System.Type,System.Type,System.Boolean,System.Object>>
struct Expression_1_t2DC7D6BAB49660BD547C350C2817540D483211C2  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};

// Microsoft.AspNetCore.Connections.BaseConnectionContext
struct BaseConnectionContext_tE415977D178CA1218669730776F715CF7D0A1BF5  : public RuntimeObject
{
	// System.Threading.CancellationToken Microsoft.AspNetCore.Connections.BaseConnectionContext::<ConnectionClosed>k__BackingField
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___U3CConnectionClosedU3Ek__BackingField_0;
	// System.Net.EndPoint Microsoft.AspNetCore.Connections.BaseConnectionContext::<LocalEndPoint>k__BackingField
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___U3CLocalEndPointU3Ek__BackingField_1;
	// System.Net.EndPoint Microsoft.AspNetCore.Connections.BaseConnectionContext::<RemoteEndPoint>k__BackingField
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___U3CRemoteEndPointU3Ek__BackingField_2;
};

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
};

struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.RuntimeMethodHandle
struct RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 
{
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// Microsoft.AspNetCore.Connections.ConnectionContext
struct ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D  : public BaseConnectionContext_tE415977D178CA1218669730776F715CF7D0A1BF5
{
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

// Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionContext
struct MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1  : public BaseConnectionContext_tE415977D178CA1218669730776F715CF7D0A1BF5
{
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

// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t60B0B212E646FAA748170ABB47E557CC31788685  : public MulticastDelegate_t
{
};

// System.Func`2<Microsoft.AspNetCore.Connections.ConnectionContext,System.Threading.Tasks.Task>
struct Func_2_tD632BF20BE4B0170CF4C4D2C2597133418575B60  : public MulticastDelegate_t
{
};

// System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>
struct Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E  : public MulticastDelegate_t
{
};

// System.Func`2<Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate>
struct Func_2_tCA0F70EA96DEE508D3DDED8AF26BF05F3A47200E  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`3<Microsoft.AspNetCore.Connections.ConnectionContext,System.Func`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task>
struct Func_3_t00A12F33E416BA030A962398AFC6588B8D243E1D  : public MulticastDelegate_t
{
};

// System.Func`3<System.IServiceProvider,System.Object[],System.Object>
struct Func_3_t2D3C1B6F5B4B14BE6C8E7004CC36F4E57001C093  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// Microsoft.AspNetCore.Connections.ConnectionDelegate
struct ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18  : public MulticastDelegate_t
{
};

// Microsoft.AspNetCore.Connections.DefaultConnectionContext
struct DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798  : public ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D
{
	// System.Threading.CancellationTokenSource Microsoft.AspNetCore.Connections.DefaultConnectionContext::_connectionClosedTokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____connectionClosedTokenSource_3;
	// System.String Microsoft.AspNetCore.Connections.DefaultConnectionContext::<ConnectionId>k__BackingField
	String_t* ___U3CConnectionIdU3Ek__BackingField_4;
	// Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Connections.DefaultConnectionContext::<Features>k__BackingField
	RuntimeObject* ___U3CFeaturesU3Ek__BackingField_5;
	// System.Security.Claims.ClaimsPrincipal Microsoft.AspNetCore.Connections.DefaultConnectionContext::<User>k__BackingField
	ClaimsPrincipal_t89FDDE5202B3ACA5770F1BE38D14615C94086F2D* ___U3CUserU3Ek__BackingField_6;
	// System.Collections.Generic.IDictionary`2<System.Object,System.Object> Microsoft.AspNetCore.Connections.DefaultConnectionContext::<Items>k__BackingField
	RuntimeObject* ___U3CItemsU3Ek__BackingField_7;
	// System.IO.Pipelines.IDuplexPipe Microsoft.AspNetCore.Connections.DefaultConnectionContext::<Application>k__BackingField
	RuntimeObject* ___U3CApplicationU3Ek__BackingField_8;
	// System.IO.Pipelines.IDuplexPipe Microsoft.AspNetCore.Connections.DefaultConnectionContext::<Transport>k__BackingField
	RuntimeObject* ___U3CTransportU3Ek__BackingField_9;
	// System.Threading.CancellationToken Microsoft.AspNetCore.Connections.DefaultConnectionContext::<ConnectionClosed>k__BackingField
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___U3CConnectionClosedU3Ek__BackingField_10;
	// System.Net.EndPoint Microsoft.AspNetCore.Connections.DefaultConnectionContext::<LocalEndPoint>k__BackingField
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___U3CLocalEndPointU3Ek__BackingField_11;
	// System.Net.EndPoint Microsoft.AspNetCore.Connections.DefaultConnectionContext::<RemoteEndPoint>k__BackingField
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___U3CRemoteEndPointU3Ek__BackingField_12;
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate
struct MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Microsoft.Extensions.Internal.ObjectFactory
struct ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA  : public MulticastDelegate_t
{
};

// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
};

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};

// Microsoft.AspNetCore.Connections.AddressInUseException
struct AddressInUseException_t741BAAE42E542C0FD9727F318E8D529CE3DD402D  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// Microsoft.AspNetCore.Connections.ConnectionAbortedException
struct ConnectionAbortedException_tCEA39F0E36681CB0895178FC04862FA69F1C12A9  : public OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662
{
};

// Microsoft.AspNetCore.Connections.ConnectionResetException
struct ConnectionResetException_t99ED4BC36E2026243A53B0333F2E589108E62FBF  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
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
// System.Nullable`1<System.Int32>[]
struct Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43  : public RuntimeArray
{
	ALIGN_FIELD (8) Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 m_Items[1];

	inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 value)
	{
		m_Items[index] = value;
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F  : public RuntimeArray
{
	ALIGN_FIELD (8) Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* m_Items[1];

	inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 m_Items[1];

	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke(const ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F& unmarshaled, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke_back(const ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke& marshaled, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F& unmarshaled);
IL2CPP_EXTERN_C void ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke_cleanup(ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_com(const ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F& unmarshaled, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_com_back(const ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com& marshaled, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F& unmarshaled);
IL2CPP_EXTERN_C void ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_com_cleanup(ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com& marshaled);

// System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression::Lambda<System.Object>(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* Expression_Lambda_TisRuntimeObject_m43F07C2527F3E7D93E3099A9627771361B451038_gshared (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___body0, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___parameters1, const RuntimeMethod* method) ;
// TDelegate System.Linq.Expressions.Expression`1<System.Object>::Compile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Expression_1_Compile_mAE60BB2984F0B64C621A225AA174F670BBAE11EC_gshared (Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo Microsoft.Extensions.Internal.ActivatorUtilities::GetMethodInfo<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* ActivatorUtilities_GetMethodInfo_TisRuntimeObject_mCF0511148A2C3EC5EC81F54C27C4F1F307BE9C54_gshared (Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___expr0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisRuntimeObject_mF7B0A079765A37716D52A158EBD61E57C390CBC9_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TResult System.Func`3<System.Object,System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4 (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher::.ctor(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstructorMatcher__ctor_m2A876A496310A3615DA238359A35665AC4F58BF2 (ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1* __this, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___constructor0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Int32 Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher::Match(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConstructorMatcher_Match_mAD81318EA3F6A7F94CEDE82322F5DA9D26DFEDCC (ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___givenParameters0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities::ThrowMultipleCtorsMarkedWithAttributeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities_ThrowMultipleCtorsMarkedWithAttributeException_mED279EA5B80859D8DEB172DE79DB2D688A679FE5 (const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities::ThrowMarkedCtorDoesNotTakeAllProvidedArguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities_ThrowMarkedCtorDoesNotTakeAllProvidedArguments_m047C53D26F8BEE18820978E05E27969655B31855 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Object Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher::CreateInstance(System.IServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConstructorMatcher_CreateInstance_m04286FDF0C5CFB9B4E49DB22EB208F7DF0C3154C (ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities::FindApplicableConstructor(System.Type,System.Type[],System.Reflection.ConstructorInfo&,System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities_FindApplicableConstructor_m8F7242370719D57262491512EF2A03E192ACF7D5 (Type_t* ___instanceType0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___argumentTypes1, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** ___matchingConstructor2, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43** ___parameterMap3, const RuntimeMethod* method) ;
// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.Expression::Parameter(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* Expression_Parameter_mF825EFB5FBAABE8355C9D44B286AB4EA02F8B992 (Type_t* ___type0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Linq.Expressions.Expression Microsoft.Extensions.Internal.ActivatorUtilities::BuildFactoryExpression(System.Reflection.ConstructorInfo,System.Nullable`1<System.Int32>[],System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ActivatorUtilities_BuildFactoryExpression_mF7E8D3679890883B9D5B7491E0541F7481FE6403 (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___constructor0, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* ___parameterMap1, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___serviceProvider2, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___factoryArgumentArray3, const RuntimeMethod* method) ;
// System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression::Lambda<System.Func`3<System.IServiceProvider,System.Object[],System.Object>>(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[])
inline Expression_1_tB6A4FCFB0F165962F00D9953932C64360137E3C4* Expression_Lambda_TisFunc_3_t2D3C1B6F5B4B14BE6C8E7004CC36F4E57001C093_m23DEF827804CA29573E8BCF658B151FF955DE0F1 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___body0, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___parameters1, const RuntimeMethod* method)
{
	return ((  Expression_1_tB6A4FCFB0F165962F00D9953932C64360137E3C4* (*) (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*, const RuntimeMethod*))Expression_Lambda_TisRuntimeObject_m43F07C2527F3E7D93E3099A9627771361B451038_gshared)(___body0, ___parameters1, method);
}
// TDelegate System.Linq.Expressions.Expression`1<System.Func`3<System.IServiceProvider,System.Object[],System.Object>>::Compile()
inline Func_3_t2D3C1B6F5B4B14BE6C8E7004CC36F4E57001C093* Expression_1_Compile_m1C4DD85947C855F964A4D02BDB8D3BE5940C54A8 (Expression_1_tB6A4FCFB0F165962F00D9953932C64360137E3C4* __this, const RuntimeMethod* method)
{
	return ((  Func_3_t2D3C1B6F5B4B14BE6C8E7004CC36F4E57001C093* (*) (Expression_1_tB6A4FCFB0F165962F00D9953932C64360137E3C4*, const RuntimeMethod*))Expression_1_Compile_mAE60BB2984F0B64C621A225AA174F670BBAE11EC_gshared)(__this, method);
}
// System.Void Microsoft.Extensions.Internal.ObjectFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectFactory__ctor_mED6401D9D1F3567054072ABE2331E2E6B4136341 (ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Object Microsoft.Extensions.Internal.ActivatorUtilities::CreateInstance(System.IServiceProvider,System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActivatorUtilities_CreateInstance_mBA0A226E521EC864B1ECA2706E520B4E303C06E6 (RuntimeObject* ___provider0, Type_t* ___instanceType1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters2, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Internal.ParameterDefaultValue::TryGetDefaultValue(System.Reflection.ParameterInfo,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterDefaultValue_TryGetDefaultValue_m386B67FD66A3395501D1C3F1C6C3080C907B529F (ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___parameter0, RuntimeObject** ___defaultValue1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* Expression_Constant_mF3E703732161EF83B1848E433F7DD1FB166BFE44 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Linq.Expressions.IndexExpression System.Linq.Expressions.Expression::ArrayAccess(System.Linq.Expressions.Expression,System.Linq.Expressions.Expression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347* Expression_ArrayAccess_m0ECEC416D1865DCB4564B2A6AF08C8B82DA51A60 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___array0, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ___indexes1, const RuntimeMethod* method) ;
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* Expression_Constant_m71DA28DF529697FFF5205A455CACAD09A4FD30CE (RuntimeObject* ___value0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Reflection.MethodInfo,System.Linq.Expressions.Expression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* Expression_Call_mD94E7CF72C83BF40BEEB31F7EB6519741A0043D2 (MethodInfo_t* ___method0, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ___arguments1, const RuntimeMethod* method) ;
// System.Linq.Expressions.BinaryExpression System.Linq.Expressions.Expression::Coalesce(System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* Expression_Coalesce_m1C145BF8302D605BA953321A8F0E21B0F56ADB23 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___left0, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___right1, const RuntimeMethod* method) ;
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Convert(System.Linq.Expressions.Expression,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* Expression_Convert_mD5233B60383B3FD0F5A044E4440FB32CBF9609D5 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___expression0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Linq.Expressions.NewExpression System.Linq.Expressions.Expression::New(System.Reflection.ConstructorInfo,System.Linq.Expressions.Expression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* Expression_New_m447E4F4F22912AE5F06493267B37F481F5818E75 (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___constructor0, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ___arguments1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Internal.ActivatorUtilities::TryFindPreferredConstructor(System.Type,System.Type[],System.Reflection.ConstructorInfo&,System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivatorUtilities_TryFindPreferredConstructor_m76DC5304EB89175B8DA90EB1F9D2441D9E56FCB0 (Type_t* ___instanceType0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___argumentTypes1, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** ___matchingConstructor2, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43** ___parameterMap3, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Internal.ActivatorUtilities::TryFindMatchingConstructor(System.Type,System.Type[],System.Reflection.ConstructorInfo&,System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivatorUtilities_TryFindMatchingConstructor_m4BDC1C6B3A07CCA0891F6A9D777DBA579BF44FFB (Type_t* ___instanceType0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___argumentTypes1, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** ___matchingConstructor2, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43** ___parameterMap3, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Extensions.Internal.ActivatorUtilities::TryCreateParameterMap(System.Reflection.ParameterInfo[],System.Type[],System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivatorUtilities_TryCreateParameterMap_mDAAB7E7BECCA97FED6E3EB56F9ECDD0F2573E3F9 (ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ___constructorParameters0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___argumentTypes1, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43** ___parameterMap2, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.ConstructorInfo::op_Inequality(System.Reflection.ConstructorInfo,System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4 (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___left0, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___right1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___value0, method);
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodBase_t* MethodBase_GetMethodFromHandle_m55E706B5156C0FDC1EA1DEF95B4FE36FE6A96EA9 (RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 ___handle0, const RuntimeMethod* method) ;
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Linq.Expressions.Expression,System.Reflection.MethodInfo,System.Linq.Expressions.Expression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* Expression_Call_mF08321E4E99D835F221F58B40C8077C60530CE62 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___instance0, MethodInfo_t* ___method1, ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* ___arguments2, const RuntimeMethod* method) ;
// System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression::Lambda<System.Func`5<System.IServiceProvider,System.Type,System.Type,System.Boolean,System.Object>>(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[])
inline Expression_1_t2DC7D6BAB49660BD547C350C2817540D483211C2* Expression_Lambda_TisFunc_5_t8BEA11C86578CFEBA7F26FF34A0A60F01431DCB0_m259A292B2C8778D6341D0DD5552309535E5C2E78 (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___body0, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___parameters1, const RuntimeMethod* method)
{
	return ((  Expression_1_t2DC7D6BAB49660BD547C350C2817540D483211C2* (*) (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*, const RuntimeMethod*))Expression_Lambda_TisRuntimeObject_m43F07C2527F3E7D93E3099A9627771361B451038_gshared)(___body0, ___parameters1, method);
}
// System.Reflection.MethodInfo Microsoft.Extensions.Internal.ActivatorUtilities::GetMethodInfo<System.Func`5<System.IServiceProvider,System.Type,System.Type,System.Boolean,System.Object>>(System.Linq.Expressions.Expression`1<T>)
inline MethodInfo_t* ActivatorUtilities_GetMethodInfo_TisFunc_5_t8BEA11C86578CFEBA7F26FF34A0A60F01431DCB0_mB7B11F35ABEDD82E7DD04D5FF33585B295E883FE (Expression_1_t2DC7D6BAB49660BD547C350C2817540D483211C2* ___expr0, const RuntimeMethod* method)
{
	return ((  MethodInfo_t* (*) (Expression_1_t2DC7D6BAB49660BD547C350C2817540D483211C2*, const RuntimeMethod*))ActivatorUtilities_GetMethodInfo_TisRuntimeObject_mCF0511148A2C3EC5EC81F54C27C4F1F307BE9C54_gshared)(___expr0, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters0, const RuntimeMethod* method) ;
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) ;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___source0, const RuntimeMethod* method) ;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBD95E09621FC0F44096FF1B23DF7ADE0D8178367 (U3CU3Ec_t50B7BFC8BCDC3DFE6E74552F905F652BAC62FB49* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___nullableType0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Object System.Enum::ToObject(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF (Type_t* ___enumType0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>>::.ctor()
inline void List_1__ctor_m4E90DE7FE8420DB703F80C915AC0E024CEB5E783 (List_1_t01EEEC97C68EAA8DDC25C28810FA20D96EFDD1B4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01EEEC97C68EAA8DDC25C28810FA20D96EFDD1B4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionDelegate__ctor_mD96F5DC967928F61763C1028F4FE3DA937652A0B (ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Reverse_TisFunc_2_tABD83A4369BBAF753476777E752F329F79F9A08E_mE9CE5E7437D16AF0BBF75275EEA687B211153FF6 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisRuntimeObject_mF7B0A079765A37716D52A158EBD61E57C390CBC9_gshared)(___source0, method);
}
// TResult System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>::Invoke(T)
inline ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* Func_2_Invoke_m1052E4C09095578425DE710F13B5ECA03226F8C9_inline (Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E* __this, ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* ___arg0, const RuntimeMethod* method)
{
	return ((  ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* (*) (Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E*, ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m61553AB28F9C1700926273E5B6C2071E85402F92 (U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m79A75EE96033E88DAD52A1DDED25806F4C535FAE (U3CU3Ec__DisplayClass1_0_tAD8DF23097ED4C225495D391DC0FA365EC24B8BF* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC3D44C4512780404A16112263A15B30A914A8FF0 (Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mC2EE79CC78588AB178E39ABB6F30E37936A551AA (U3CU3Ec__DisplayClass2_0_t12686E36E783FC4E36362E079A8839E060582893* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_1__ctor_mCBF3723E8C26921B897F090B5EEC571659091F5B (U3CU3Ec__DisplayClass1_1_t47C8CF2F47B68957E10E714AE2FEF246F5FD58F3* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_2__ctor_mC18DD9070585687190968F6DC54A9586CEEC68CC (U3CU3Ec__DisplayClass1_2_t7BD209E5DAD4704654907BD579587B854619F642* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m6980BCC56FF4CA762C712085B3CCD3CE13C5C67E (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// TResult System.Func`3<Microsoft.AspNetCore.Connections.ConnectionContext,System.Func`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task>::Invoke(T1,T2)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Func_3_Invoke_mB27CEA1731838CF4DF830FCB1A4B46C7C6AB0646_inline (Func_3_t00A12F33E416BA030A962398AFC6588B8D243E1D* __this, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___arg10, Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* ___arg21, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Func_3_t00A12F33E416BA030A962398AFC6588B8D243E1D*, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D*, Func_1_t60B0B212E646FAA748170ABB47E557CC31788685*, const RuntimeMethod*))Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.ConnectionDelegate::Invoke(Microsoft.AspNetCore.Connections.ConnectionContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_inline (ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* __this, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___connection0, const RuntimeMethod* method) ;
// TResult System.Func`2<Microsoft.AspNetCore.Connections.ConnectionContext,System.Threading.Tasks.Task>::Invoke(T)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Func_2_Invoke_m5D1360AEB4128439D5C51DAAB87555FC2F4A034D_inline (Func_2_tD632BF20BE4B0170CF4C4D2C2597133418575B60* __this, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___arg0, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Func_2_tD632BF20BE4B0170CF4C4D2C2597133418575B60*, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionAbortedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionAbortedException__ctor_mA4AA50CCA113597CACEF3E041F8C56B570EDB3C6 (ConnectionAbortedException_tCEA39F0E36681CB0895178FC04862FA69F1C12A9* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.AspNetCore.Connections.BaseConnectionContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseConnectionContext__ctor_m12224E58C2C9D3103BEFC62C9290ED983B945C82 (BaseConnectionContext_tE415977D178CA1218669730776F715CF7D0A1BF5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
inline void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionItems::.ctor(System.Collections.Generic.IDictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionItems__ctor_mA32F094EE2E64E1EEE292D7D002A7F0E08322625 (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, RuntimeObject* ___items0, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object> Microsoft.AspNetCore.Connections.ConnectionItems::get_Items()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___objA0, RuntimeObject* ___objB1, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext__ctor_m4A13BAFACB93E455F9CB0A7023EADF7F266EAB4D (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, String_t* ___id0, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AspNetCore.Connections.ConnectionItems::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionItems__ctor_mA8E1C9ABA3732C84B2771AE883AEE893970CAAFF (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AspNetCore.Connections.ConnectionContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionContext__ctor_m524B6301BC7651330FD746C06D52943DC6A658F1 (ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AspNetCore.Http.Features.FeatureCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeatureCollection__ctor_m2B04E053D56130600AC53F5A88531DD175ED54D2 (FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4 (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::set_Application(System.IO.Pipelines.IDuplexPipe)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_Application_mD12F1057D3F696617F745B322EBCC84BBF0FBC7B_inline (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ThreadPool::UnsafeQueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_UnsafeQueueUserWorkItem_m05CF00E355CE07D625386779E3F3D3D2341FEE86 (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___callBack0, RuntimeObject* ___state1, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenSource::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Dispose_m5096059D16078E130BB87D268D4871849B53449B (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask Microsoft.AspNetCore.Connections.BaseConnectionContext::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F BaseConnectionContext_DisposeAsync_m16A3DB0D5D857D173ED394CC087CF083271D9B15 (BaseConnectionContext_tE415977D178CA1218669730776F715CF7D0A1BF5* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEE86474018E27AD6885FB90887721D6BB425E2D3 (U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenSource::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.OperationCanceledException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationCanceledException__ctor_m980BF7ABCE5C603648AA46FB4C75437D110D0B5D (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.OperationCanceledException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationCanceledException__ctor_m26EBF695EF42CD2A1D0CAFD2F60DF1151E22D17F (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.Net.EndPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndPoint__ctor_m4CD393A3D801B696473199A2D2F7EC80E8036F5D (EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Uri Microsoft.AspNetCore.Connections.UriEndPoint::get_Uri()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* UriEndPoint_get_Uri_mA1AAB03A730B0161B041773C93E721FFF83EFE1E_inline (UriEndPoint_tFA8B3694ECDAE7B72FB863586BB9004895AE92DD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Func`2<Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate>>::.ctor()
inline void List_1__ctor_m7CC38969032F703713B07A4677D95F74F59DB9D8 (List_1_t3A2CFA79535DAF064F8592CBC052C5CF6EA6EF63* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A2CFA79535DAF064F8592CBC052C5CF6EA6EF63*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplexedConnectionDelegate__ctor_mD9B0DCCD10349C6B80214701659F2F779507E50E (MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse<System.Func`2<Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate>>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Reverse_TisFunc_2_tCA0F70EA96DEE508D3DDED8AF26BF05F3A47200E_m25141522776F3C3EFE1FFF6529D5C71FABE31285 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisRuntimeObject_mF7B0A079765A37716D52A158EBD61E57C390CBC9_gshared)(___source0, method);
}
// TResult System.Func`2<Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate>::Invoke(T)
inline MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* Func_2_Invoke_m9AD97CCAAAFF850AB9F30C894DBE3B68DBF81C53_inline (Func_2_tCA0F70EA96DEE508D3DDED8AF26BF05F3A47200E* __this, MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* ___arg0, const RuntimeMethod* method)
{
	return ((  MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* (*) (Func_2_tCA0F70EA96DEE508D3DDED8AF26BF05F3A47200E*, MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.Void Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE2C12E75578D0D82965A2470C0B698B3C54581F2 (U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m72B1593DB80D9B6A77E2B643552C6733EE020CD5 (EmbeddedAttribute_t0EB9AC381B00A7F9807A23F4575BFE92FF8E9063* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_mDC9E34099FE48938CFF13C1C372C91691791F77F (NullableAttribute_tD34B4A2674283F569097BDA09D88486156159E16* __this, uint8_t p0, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m630AE3A603DD1646A3D88EE0B38E26CEB3EDFB1B (NullableAttribute_tD34B4A2674283F569097BDA09D88486156159E16* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* p0, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_m74D094A5D86B3DBCFBE25011B29681CF9194ECF5 (NullableContextAttribute_t6BD5C6FA9DB59EFBD90BE9E6C5803ADFB6C28A71* __this, uint8_t p0, const RuntimeMethod* method) 
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
// System.Void System.Diagnostics.CodeAnalysis.DynamicallyAccessedMembersAttribute::.ctor(System.Diagnostics.CodeAnalysis.DynamicallyAccessedMemberTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicallyAccessedMembersAttribute__ctor_m7760E4F7631E285911173312244B22D9B8DDF3A0 (DynamicallyAccessedMembersAttribute_t34850C4C362B50C72A8EEFF95DA2ED9E740F2110* __this, int32_t ___memberTypes0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___memberTypes0;
		__this->___U3CMemberTypesU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Diagnostics.CodeAnalysis.DynamicallyAccessedMemberTypes System.Diagnostics.CodeAnalysis.DynamicallyAccessedMembersAttribute::get_MemberTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicallyAccessedMembersAttribute_get_MemberTypes_m0DEFADE83EFA0E18D3776C09983D2A25DF0A7A8D (DynamicallyAccessedMembersAttribute_t34850C4C362B50C72A8EEFF95DA2ED9E740F2110* __this, const RuntimeMethod* method) 
{
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
// System.Void System.Diagnostics.CodeAnalysis.AllowNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllowNullAttribute__ctor_m5BB27699C0E02B72D081D76D44FC92BF2A18FB50 (AllowNullAttribute_t06B9046F4271D49C5D63462607FA5A8BC439AAD4* __this, const RuntimeMethod* method) 
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
// System.Void System.Diagnostics.CodeAnalysis.DisallowNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisallowNullAttribute__ctor_m328C58D38A82B2173D7342B1C165B436ABD7C13D (DisallowNullAttribute_tA13214F26BC638FF6A747151F48E6134E8240D4D* __this, const RuntimeMethod* method) 
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
// System.Void System.Diagnostics.CodeAnalysis.MaybeNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaybeNullAttribute__ctor_m5D0CAE2AE5D12DF0AA82ED27A6356F28D15C49E8 (MaybeNullAttribute_t678C8DA0C6EF66810CAE0E0FFCAB1B194F4F928B* __this, const RuntimeMethod* method) 
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
// System.Void System.Diagnostics.CodeAnalysis.NotNullAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullAttribute__ctor_m5558676329EB6D49887763DFD361156301DDCA1B (NotNullAttribute_tA2EEE2325A48BBADB831F811578D85972D6D8055* __this, const RuntimeMethod* method) 
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
// System.Void System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaybeNullWhenAttribute__ctor_m2473D9E6F6C27890356A2CAE46DC4DF8F67AC851 (MaybeNullWhenAttribute_t9E01EA6C044569276F1C1900D4EAE44FA4DC1ACD* __this, bool ___returnValue0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___returnValue0;
		__this->___U3CReturnValueU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Diagnostics.CodeAnalysis.MaybeNullWhenAttribute::get_ReturnValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaybeNullWhenAttribute_get_ReturnValue_m9BB029E8A584EA3FAA6CB6920BFA22349553DE5E (MaybeNullWhenAttribute_t9E01EA6C044569276F1C1900D4EAE44FA4DC1ACD* __this, const RuntimeMethod* method) 
{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullWhenAttribute__ctor_m67BD5E9CC76E76290436983F578C7E739054BBB8 (NotNullWhenAttribute_t0F0BFC29C08BE23DD9CB42F4BA053A05A36BD098* __this, bool ___returnValue0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___returnValue0;
		__this->___U3CReturnValueU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Diagnostics.CodeAnalysis.NotNullWhenAttribute::get_ReturnValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotNullWhenAttribute_get_ReturnValue_mB4B8E71D6EE6710EE1743F9D8DB1690E662B9F72 (NotNullWhenAttribute_t0F0BFC29C08BE23DD9CB42F4BA053A05A36BD098* __this, const RuntimeMethod* method) 
{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotNullIfNotNullAttribute__ctor_m626F268A3C4EC70DBCA3568D50AAC47FB007CE4D (NotNullIfNotNullAttribute_tB9BF13D030AE72A320D19EB13DC0AD582862ED98* __this, String_t* ___parameterName0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___parameterName0;
		__this->___U3CParameterNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParameterNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String System.Diagnostics.CodeAnalysis.NotNullIfNotNullAttribute::get_ParameterName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NotNullIfNotNullAttribute_get_ParameterName_mB07EA5CD23E8BA585661AA5973E8C671E38DA26B (NotNullIfNotNullAttribute_tB9BF13D030AE72A320D19EB13DC0AD582862ED98* __this, const RuntimeMethod* method) 
{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoesNotReturnAttribute__ctor_m887E59317627C91EE9930477C7AF8D60159B0499 (DoesNotReturnAttribute_tBEF6E798FED20AFB38ADE4A80094262F1EFAC727* __this, const RuntimeMethod* method) 
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
// System.Void System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoesNotReturnIfAttribute__ctor_m3E3D88AF1F17AC1A3C59D2B6128754D32C891E1C (DoesNotReturnIfAttribute_tF99ACD73498C544128FB49F06CBD057479821DE0* __this, bool ___parameterValue0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___parameterValue0;
		__this->___U3CParameterValueU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Diagnostics.CodeAnalysis.DoesNotReturnIfAttribute::get_ParameterValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DoesNotReturnIfAttribute_get_ParameterValue_m90CAD4B6996338284B6E47180EC5CFC0B4C8159C (DoesNotReturnIfAttribute_tF99ACD73498C544128FB49F06CBD057479821DE0* __this, const RuntimeMethod* method) 
{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberNotNullAttribute__ctor_m91AF53BB933348643F060A93FBB2914DF0540AF5 (MemberNotNullAttribute_t1D1F9DD0F4442DF9E090895DD57890CD4C67FEC6* __this, String_t* ___member0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberNotNullAttribute__ctor_m1673F7AADC84DF2B39EB62664B5BECBA25A50A29 (MemberNotNullAttribute_t1D1F9DD0F4442DF9E090895DD57890CD4C67FEC6* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___members0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___members0;
		__this->___U3CMembersU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMembersU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String[] System.Diagnostics.CodeAnalysis.MemberNotNullAttribute::get_Members()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MemberNotNullAttribute_get_Members_m5E5915361703478E66205A3114492B8B76545A0E (MemberNotNullAttribute_t1D1F9DD0F4442DF9E090895DD57890CD4C67FEC6* __this, const RuntimeMethod* method) 
{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberNotNullWhenAttribute__ctor_mB65D6D777EEB05B9B9A12A84A55CB21BF53DE795 (MemberNotNullWhenAttribute_tD9AD81C18AAE8104943183543FE0440CCDFFF175* __this, bool ___returnValue0, String_t* ___member1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberNotNullWhenAttribute__ctor_m600554061757A7335D7F328A1B5B2062608829F6 (MemberNotNullWhenAttribute_tD9AD81C18AAE8104943183543FE0440CCDFFF175* __this, bool ___returnValue0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___members1, const RuntimeMethod* method) 
{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberNotNullWhenAttribute_get_ReturnValue_m3FD6DCCDD23733555141FF21484C4765C9ACC40D (MemberNotNullWhenAttribute_tD9AD81C18AAE8104943183543FE0440CCDFFF175* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CReturnValueU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String[] System.Diagnostics.CodeAnalysis.MemberNotNullWhenAttribute::get_Members()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MemberNotNullWhenAttribute_get_Members_m16C717095CC1C8AE11E1407A553F9ED8AAB13DB1 (MemberNotNullWhenAttribute_tD9AD81C18AAE8104943183543FE0440CCDFFF175* __this, const RuntimeMethod* method) 
{
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
// System.Object Microsoft.Extensions.Internal.ActivatorUtilities::CreateInstance(System.IServiceProvider,System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActivatorUtilities_CreateInstance_mBA0A226E521EC864B1ECA2706E520B4E303C06E6 (RuntimeObject* ___provider0, Type_t* ___instanceType1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilitiesConstructorAttribute_tD3527F1CD4BD3A3156C90E15E1FC36C724545E73_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t62CCC8C17677893BE99939DD1210D67697098FFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD0054AD8AB0F9468AFC55F5C14F34231B4F68F23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* V_4 = NULL;
	ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	int32_t V_7 = 0;
	{
		V_0 = (-1);
		V_1 = (bool)0;
		il2cpp_codegen_initobj((&V_2), sizeof(ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1));
		Type_t* L_0 = ___instanceType1;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_1, NULL);
		if (L_2)
		{
			goto IL_00ae;
		}
	}
	{
		Type_t* L_3 = ___instanceType1;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_4;
		L_4 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_3, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(133 /* System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> System.Reflection.TypeInfo::get_DeclaredConstructors() */, L_4);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator() */, IEnumerable_1_t62CCC8C17677893BE99939DD1210D67697098FFC_il2cpp_TypeInfo_var, L_5);
		V_3 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a4:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_3;
					if (!L_7)
					{
						goto IL_00ad;
					}
				}
				{
					RuntimeObject* L_8 = V_3;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_00ad:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_009a_1;
			}

IL_002f_1:
			{
				RuntimeObject* L_9 = V_3;
				NullCheck(L_9);
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_10;
				L_10 = InterfaceFuncInvoker0< ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current() */, IEnumerator_1_tD0054AD8AB0F9468AFC55F5C14F34231B4F68F23_il2cpp_TypeInfo_var, L_9);
				V_4 = L_10;
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_11 = V_4;
				NullCheck(L_11);
				bool L_12;
				L_12 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_11, NULL);
				if (L_12)
				{
					goto IL_009a_1;
				}
			}
			{
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_13 = V_4;
				NullCheck(L_13);
				bool L_14;
				L_14 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_13, NULL);
				if (!L_14)
				{
					goto IL_009a_1;
				}
			}
			{
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_15 = V_4;
				ConstructorMatcher__ctor_m2A876A496310A3615DA238359A35665AC4F58BF2((&V_5), L_15, NULL);
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_16 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (ActivatorUtilitiesConstructorAttribute_tD3527F1CD4BD3A3156C90E15E1FC36C724545E73_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				NullCheck(L_16);
				bool L_19;
				L_19 = VirtualFuncInvoker2< bool, Type_t*, bool >::Invoke(12 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_16, L_18, (bool)0);
				V_6 = L_19;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = ___parameters2;
				int32_t L_21;
				L_21 = ConstructorMatcher_Match_mAD81318EA3F6A7F94CEDE82322F5DA9D26DFEDCC((&V_5), L_20, NULL);
				V_7 = L_21;
				bool L_22 = V_6;
				if (!L_22)
				{
					goto IL_0086_1;
				}
			}
			{
				bool L_23 = V_1;
				if (!L_23)
				{
					goto IL_007c_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
				ActivatorUtilities_ThrowMultipleCtorsMarkedWithAttributeException_mED279EA5B80859D8DEB172DE79DB2D688A679FE5(NULL);
			}

IL_007c_1:
			{
				int32_t L_24 = V_7;
				if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
				{
					goto IL_0086_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
				ActivatorUtilities_ThrowMarkedCtorDoesNotTakeAllProvidedArguments_m047C53D26F8BEE18820978E05E27969655B31855(NULL);
			}

IL_0086_1:
			{
				bool L_25 = V_6;
				if (L_25)
				{
					goto IL_008f_1;
				}
			}
			{
				int32_t L_26 = V_0;
				int32_t L_27 = V_7;
				if ((((int32_t)L_26) >= ((int32_t)L_27)))
				{
					goto IL_0095_1;
				}
			}

IL_008f_1:
			{
				int32_t L_28 = V_7;
				V_0 = L_28;
				ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1 L_29 = V_5;
				V_2 = L_29;
			}

IL_0095_1:
			{
				bool L_30 = V_1;
				bool L_31 = V_6;
				V_1 = (bool)((int32_t)((int32_t)L_30|(int32_t)L_31));
			}

IL_009a_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck(L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				if (L_33)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_00ae;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ae:
	{
		int32_t L_34 = V_0;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00c3;
		}
	}
	{
		Type_t* L_35 = ___instanceType1;
		String_t* L_36;
		L_36 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral175C84C8167E36B12F4445F08F3CCFAE61121D5A)), L_35, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_37 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_37);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_37, L_36, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActivatorUtilities_CreateInstance_mBA0A226E521EC864B1ECA2706E520B4E303C06E6_RuntimeMethod_var)));
	}

IL_00c3:
	{
		RuntimeObject* L_38 = ___provider0;
		RuntimeObject* L_39;
		L_39 = ConstructorMatcher_CreateInstance_m04286FDF0C5CFB9B4E49DB22EB208F7DF0C3154C((&V_2), L_38, NULL);
		return L_39;
	}
}
// Microsoft.Extensions.Internal.ObjectFactory Microsoft.Extensions.Internal.ActivatorUtilities::CreateFactory(System.Type,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA* ActivatorUtilities_CreateFactory_m7FF0A8839301C789F9E7A1D3AC47BA60C2110E50 (Type_t* ___instanceType0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___argumentTypes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_1_Compile_m1C4DD85947C855F964A4D02BDB8D3BE5940C54A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_Lambda_TisFunc_3_t2D3C1B6F5B4B14BE6C8E7004CC36F4E57001C093_m23DEF827804CA29573E8BCF658B151FF955DE0F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_Invoke_m3920D23C723D5053989C3EC0075342E6FA056206_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral167C65EB6C975B3A8544FD111059B733CFBA964A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E9918A305DD44C6C5253BF7305AB7758C686BB5);
		s_Il2CppMethodInitialized = true;
	}
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* V_0 = NULL;
	Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* V_1 = NULL;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_2 = NULL;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_3 = NULL;
	{
		Type_t* L_0 = ___instanceType0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = ___argumentTypes1;
		il2cpp_codegen_runtime_class_init_inline(ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
		ActivatorUtilities_FindApplicableConstructor_m8F7242370719D57262491512EF2A03E192ACF7D5(L_0, L_1, (&V_0), (&V_1), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_4;
		L_4 = Expression_Parameter_mF825EFB5FBAABE8355C9D44B286AB4EA02F8B992(L_3, _stringLiteral1E9918A305DD44C6C5253BF7305AB7758C686BB5, NULL);
		V_2 = L_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_7;
		L_7 = Expression_Parameter_mF825EFB5FBAABE8355C9D44B286AB4EA02F8B992(L_6, _stringLiteral167C65EB6C975B3A8544FD111059B733CFBA964A, NULL);
		V_3 = L_7;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_8 = V_0;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_9 = V_1;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_10 = V_2;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_11 = V_3;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_12;
		L_12 = ActivatorUtilities_BuildFactoryExpression_mF7E8D3679890883B9D5B7491E0541F7481FE6403(L_8, L_9, L_10, L_11, NULL);
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_13 = (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)SZArrayNew(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var, (uint32_t)2);
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_14 = L_13;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_15 = V_2;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_15);
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_16 = L_14;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_17 = V_3;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_17);
		Expression_1_tB6A4FCFB0F165962F00D9953932C64360137E3C4* L_18;
		L_18 = Expression_Lambda_TisFunc_3_t2D3C1B6F5B4B14BE6C8E7004CC36F4E57001C093_m23DEF827804CA29573E8BCF658B151FF955DE0F1(L_12, L_16, Expression_Lambda_TisFunc_3_t2D3C1B6F5B4B14BE6C8E7004CC36F4E57001C093_m23DEF827804CA29573E8BCF658B151FF955DE0F1_RuntimeMethod_var);
		NullCheck(L_18);
		Func_3_t2D3C1B6F5B4B14BE6C8E7004CC36F4E57001C093* L_19;
		L_19 = Expression_1_Compile_m1C4DD85947C855F964A4D02BDB8D3BE5940C54A8(L_18, Expression_1_Compile_m1C4DD85947C855F964A4D02BDB8D3BE5940C54A8_RuntimeMethod_var);
		ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA* L_20 = (ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA*)il2cpp_codegen_object_new(ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		ObjectFactory__ctor_mED6401D9D1F3567054072ABE2331E2E6B4136341(L_20, L_19, (intptr_t)((void*)Func_3_Invoke_m3920D23C723D5053989C3EC0075342E6FA056206_RuntimeMethod_var), NULL);
		return L_20;
	}
}
// System.Object Microsoft.Extensions.Internal.ActivatorUtilities::GetServiceOrCreateInstance(System.IServiceProvider,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActivatorUtilities_GetServiceOrCreateInstance_m73F4A28AD17C7D04B5CB607A1DAE4782BDEFFA9C (RuntimeObject* ___provider0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ___provider0;
		Type_t* L_1 = ___type1;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* System.Object System.IServiceProvider::GetService(System.Type) */, IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_4 = ___provider0;
		Type_t* L_5 = ___type1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = ActivatorUtilities_CreateInstance_mBA0A226E521EC864B1ECA2706E520B4E303C06E6(L_4, L_5, L_6, NULL);
		G_B2_0 = L_7;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// System.Object Microsoft.Extensions.Internal.ActivatorUtilities::GetService(System.IServiceProvider,System.Type,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActivatorUtilities_GetService_m7AC092E824B4590F4F716E4E43673BE856435C86 (RuntimeObject* ___sp0, Type_t* ___type1, Type_t* ___requiredBy2, bool ___isDefaultParameterRequired3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		RuntimeObject* L_0 = ___sp0;
		Type_t* L_1 = ___type1;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* System.Object System.IServiceProvider::GetService(System.Type) */, IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_001f;
		}
	}
	{
		bool L_4 = ___isDefaultParameterRequired3;
		G_B2_0 = G_B1_0;
		if (L_4)
		{
			G_B3_0 = G_B1_0;
			goto IL_001f;
		}
	}
	{
		Type_t* L_5 = ___type1;
		Type_t* L_6 = ___requiredBy2;
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25DF26F9216E3E00ED168A90DD0E9DAF1C534586)), L_5, L_6, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActivatorUtilities_GetService_m7AC092E824B4590F4F716E4E43673BE856435C86_RuntimeMethod_var)));
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.Linq.Expressions.Expression Microsoft.Extensions.Internal.ActivatorUtilities::BuildFactoryExpression(System.Reflection.ConstructorInfo,System.Nullable`1<System.Int32>[],System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ActivatorUtilities_BuildFactoryExpression_mF7E8D3679890883B9D5B7491E0541F7481FE6403 (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___constructor0, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* ___parameterMap1, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___serviceProvider2, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___factoryArgumentArray3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterDefaultValue_t82553849D3385F28470C0E4867E3383893035C81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_0 = NULL;
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* V_1 = NULL;
	int32_t V_2 = 0;
	Type_t* V_3 = NULL;
	bool V_4 = false;
	RuntimeObject* V_5 = NULL;
	ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* V_6 = NULL;
	ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* V_7 = NULL;
	{
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_0 = ___constructor0;
		NullCheck(L_0);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_1;
		L_1 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		V_0 = L_1;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_2 = V_0;
		NullCheck(L_2);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_3 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_1 = L_3;
		V_2 = 0;
		goto IL_00dc;
	}

IL_0017:
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_8 = L_7;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_8);
		V_3 = L_9;
		il2cpp_codegen_runtime_class_init_inline(ParameterDefaultValue_t82553849D3385F28470C0E4867E3383893035C81_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = ParameterDefaultValue_TryGetDefaultValue_m386B67FD66A3395501D1C3F1C6C3080C907B529F(L_8, (&V_5), NULL);
		V_4 = L_10;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_11 = ___parameterMap1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		bool L_13;
		L_13 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_005d;
		}
	}
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_14 = V_1;
		int32_t L_15 = V_2;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16 = ___factoryArgumentArray3;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_17 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)1);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_18 = L_17;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_19 = ___parameterMap1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_23 = L_22;
		RuntimeObject* L_24 = Box(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_il2cpp_TypeInfo_var, &L_23);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_25;
		L_25 = Expression_Constant_mF3E703732161EF83B1848E433F7DD1FB166BFE44(L_24, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_25);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25);
		IndexExpression_t3EE6D9B088DD1886D3206BBB603C988A4B817347* L_26;
		L_26 = Expression_ArrayAccess_m0ECEC416D1865DCB4564B2A6AF08C8B82DA51A60(L_16, L_18, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_26);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_26);
		goto IL_00b2;
	}

IL_005d:
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_27 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)4);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_28 = L_27;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_29 = ___serviceProvider2;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_29);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_30 = L_28;
		Type_t* L_31 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_34;
		L_34 = Expression_Constant_m71DA28DF529697FFF5205A455CACAD09A4FD30CE(L_31, L_33, NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_34);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_34);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_35 = L_30;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_36 = ___constructor0;
		NullCheck(L_36);
		Type_t* L_37;
		L_37 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_36);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_40;
		L_40 = Expression_Constant_m71DA28DF529697FFF5205A455CACAD09A4FD30CE(L_37, L_39, NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_40);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_40);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_41 = L_35;
		bool L_42 = V_4;
		bool L_43 = L_42;
		RuntimeObject* L_44 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_43);
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_45;
		L_45 = Expression_Constant_mF3E703732161EF83B1848E433F7DD1FB166BFE44(L_44, NULL);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_45);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(3), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_45);
		V_6 = L_41;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_46 = V_1;
		int32_t L_47 = V_2;
		il2cpp_codegen_runtime_class_init_inline(ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
		MethodInfo_t* L_48 = ((ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_StaticFields*)il2cpp_codegen_static_fields_for(ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var))->___GetServiceInfo_0;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_49 = V_6;
		MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* L_50;
		L_50 = Expression_Call_mD94E7CF72C83BF40BEEB31F7EB6519741A0043D2(L_48, L_49, NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_50);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_50);
	}

IL_00b2:
	{
		bool L_51 = V_4;
		if (!L_51)
		{
			goto IL_00cc;
		}
	}
	{
		RuntimeObject* L_52 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_53;
		L_53 = Expression_Constant_mF3E703732161EF83B1848E433F7DD1FB166BFE44(L_52, NULL);
		V_7 = L_53;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_54 = V_1;
		int32_t L_55 = V_2;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_56 = V_1;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_60 = V_7;
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_61;
		L_61 = Expression_Coalesce_m1C145BF8302D605BA953321A8F0E21B0F56ADB23(L_59, L_60, NULL);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_61);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_61);
	}

IL_00cc:
	{
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_62 = V_1;
		int32_t L_63 = V_2;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_64 = V_1;
		int32_t L_65 = V_2;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		Type_t* L_68 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_69;
		L_69 = Expression_Convert_mD5233B60383B3FD0F5A044E4440FB32CBF9609D5(L_67, L_68, NULL);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_69);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_69);
		int32_t L_70 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_00dc:
	{
		int32_t L_71 = V_2;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_72 = V_0;
		NullCheck(L_72);
		if ((((int32_t)L_71) < ((int32_t)((int32_t)(((RuntimeArray*)L_72)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_73 = ___constructor0;
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_74 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* L_75;
		L_75 = Expression_New_m447E4F4F22912AE5F06493267B37F481F5818E75(L_73, L_74, NULL);
		return L_75;
	}
}
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities::FindApplicableConstructor(System.Type,System.Type[],System.Reflection.ConstructorInfo&,System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities_FindApplicableConstructor_m8F7242370719D57262491512EF2A03E192ACF7D5 (Type_t* ___instanceType0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___argumentTypes1, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** ___matchingConstructor2, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43** ___parameterMap3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** L_0 = ___matchingConstructor2;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43** L_1 = ___parameterMap3;
		*((RuntimeObject**)L_1) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)NULL);
		Type_t* L_2 = ___instanceType0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = ___argumentTypes1;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** L_4 = ___matchingConstructor2;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43** L_5 = ___parameterMap3;
		il2cpp_codegen_runtime_class_init_inline(ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = ActivatorUtilities_TryFindPreferredConstructor_m76DC5304EB89175B8DA90EB1F9D2441D9E56FCB0(L_2, L_3, L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		Type_t* L_7 = ___instanceType0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8 = ___argumentTypes1;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** L_9 = ___matchingConstructor2;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43** L_10 = ___parameterMap3;
		il2cpp_codegen_runtime_class_init_inline(ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = ActivatorUtilities_TryFindMatchingConstructor_m4BDC1C6B3A07CCA0891F6A9D777DBA579BF44FFB(L_7, L_8, L_9, L_10, NULL);
		if (L_11)
		{
			goto IL_002d;
		}
	}
	{
		Type_t* L_12 = ___instanceType0;
		String_t* L_13;
		L_13 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral175C84C8167E36B12F4445F08F3CCFAE61121D5A)), L_12, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActivatorUtilities_FindApplicableConstructor_m8F7242370719D57262491512EF2A03E192ACF7D5_RuntimeMethod_var)));
	}

IL_002d:
	{
		return;
	}
}
// System.Boolean Microsoft.Extensions.Internal.ActivatorUtilities::TryFindMatchingConstructor(System.Type,System.Type[],System.Reflection.ConstructorInfo&,System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivatorUtilities_TryFindMatchingConstructor_m4BDC1C6B3A07CCA0891F6A9D777DBA579BF44FFB (Type_t* ___instanceType0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___argumentTypes1, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** ___matchingConstructor2, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43** ___parameterMap3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t62CCC8C17677893BE99939DD1210D67697098FFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD0054AD8AB0F9468AFC55F5C14F34231B4F68F23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* V_1 = NULL;
	Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* V_2 = NULL;
	{
		Type_t* L_0 = ___instanceType0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(133 /* System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> System.Reflection.TypeInfo::get_DeclaredConstructors() */, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator() */, IEnumerable_1_t62CCC8C17677893BE99939DD1210D67697098FFC_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_006e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005b_1;
			}

IL_0013_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_7;
				L_7 = InterfaceFuncInvoker0< ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current() */, IEnumerator_1_tD0054AD8AB0F9468AFC55F5C14F34231B4F68F23_il2cpp_TypeInfo_var, L_6);
				V_1 = L_7;
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_8 = V_1;
				NullCheck(L_8);
				bool L_9;
				L_9 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_8, NULL);
				if (L_9)
				{
					goto IL_005b_1;
				}
			}
			{
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_10 = V_1;
				NullCheck(L_10);
				bool L_11;
				L_11 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_10, NULL);
				if (!L_11)
				{
					goto IL_005b_1;
				}
			}
			{
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_12 = V_1;
				NullCheck(L_12);
				ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_13;
				L_13 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_12);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = ___argumentTypes1;
				il2cpp_codegen_runtime_class_init_inline(ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
				bool L_15;
				L_15 = ActivatorUtilities_TryCreateParameterMap_mDAAB7E7BECCA97FED6E3EB56F9ECDD0F2573E3F9(L_13, L_14, (&V_2), NULL);
				if (!L_15)
				{
					goto IL_005b_1;
				}
			}
			{
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** L_16 = ___matchingConstructor2;
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_17 = *((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB**)L_16);
				il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4(L_17, (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, NULL);
				if (!L_18)
				{
					goto IL_0055_1;
				}
			}
			{
				Type_t* L_19 = ___instanceType0;
				String_t* L_20;
				L_20 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68FB1D2C9FFF0D771B9B705E90F8A5891EA88BDA)), L_19, NULL);
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				NullCheck(L_21);
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, L_20, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActivatorUtilities_TryFindMatchingConstructor_m4BDC1C6B3A07CCA0891F6A9D777DBA579BF44FFB_RuntimeMethod_var)));
			}

IL_0055_1:
			{
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** L_22 = ___matchingConstructor2;
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_23 = V_1;
				*((RuntimeObject**)L_22) = (RuntimeObject*)L_23;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_22, (void*)(RuntimeObject*)L_23);
				Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43** L_24 = ___parameterMap3;
				Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_25 = V_2;
				*((RuntimeObject**)L_24) = (RuntimeObject*)L_25;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_24, (void*)(RuntimeObject*)L_25);
			}

IL_005b_1:
			{
				RuntimeObject* L_26 = V_0;
				NullCheck(L_26);
				bool L_27;
				L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				if (L_27)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_006f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** L_28 = ___matchingConstructor2;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_29 = *((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB**)L_28);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4(L_29, (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, NULL);
		return L_30;
	}
}
// System.Boolean Microsoft.Extensions.Internal.ActivatorUtilities::TryFindPreferredConstructor(System.Type,System.Type[],System.Reflection.ConstructorInfo&,System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivatorUtilities_TryFindPreferredConstructor_m76DC5304EB89175B8DA90EB1F9D2441D9E56FCB0 (Type_t* ___instanceType0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___argumentTypes1, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** ___matchingConstructor2, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43** ___parameterMap3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilitiesConstructorAttribute_tD3527F1CD4BD3A3156C90E15E1FC36C724545E73_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t62CCC8C17677893BE99939DD1210D67697098FFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD0054AD8AB0F9468AFC55F5C14F34231B4F68F23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* V_2 = NULL;
	Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* V_3 = NULL;
	{
		V_0 = (bool)0;
		Type_t* L_0 = ___instanceType0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(133 /* System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> System.Reflection.TypeInfo::get_DeclaredConstructors() */, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator() */, IEnumerable_1_t62CCC8C17677893BE99939DD1210D67697098FFC_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_0077;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0077:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0064_1;
			}

IL_0015_1:
			{
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_7;
				L_7 = InterfaceFuncInvoker0< ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current() */, IEnumerator_1_tD0054AD8AB0F9468AFC55F5C14F34231B4F68F23_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_8 = V_2;
				NullCheck(L_8);
				bool L_9;
				L_9 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_8, NULL);
				if (L_9)
				{
					goto IL_0064_1;
				}
			}
			{
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_10 = V_2;
				NullCheck(L_10);
				bool L_11;
				L_11 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_10, NULL);
				if (!L_11)
				{
					goto IL_0064_1;
				}
			}
			{
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_12 = V_2;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (ActivatorUtilitiesConstructorAttribute_tD3527F1CD4BD3A3156C90E15E1FC36C724545E73_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_14;
				L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
				NullCheck(L_12);
				bool L_15;
				L_15 = VirtualFuncInvoker2< bool, Type_t*, bool >::Invoke(12 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_12, L_14, (bool)0);
				if (!L_15)
				{
					goto IL_0064_1;
				}
			}
			{
				bool L_16 = V_0;
				if (!L_16)
				{
					goto IL_0047_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
				ActivatorUtilities_ThrowMultipleCtorsMarkedWithAttributeException_mED279EA5B80859D8DEB172DE79DB2D688A679FE5(NULL);
			}

IL_0047_1:
			{
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_17 = V_2;
				NullCheck(L_17);
				ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_18;
				L_18 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_17);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19 = ___argumentTypes1;
				il2cpp_codegen_runtime_class_init_inline(ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
				bool L_20;
				L_20 = ActivatorUtilities_TryCreateParameterMap_mDAAB7E7BECCA97FED6E3EB56F9ECDD0F2573E3F9(L_18, L_19, (&V_3), NULL);
				if (L_20)
				{
					goto IL_005c_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
				ActivatorUtilities_ThrowMarkedCtorDoesNotTakeAllProvidedArguments_m047C53D26F8BEE18820978E05E27969655B31855(NULL);
			}

IL_005c_1:
			{
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** L_21 = ___matchingConstructor2;
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_22 = V_2;
				*((RuntimeObject**)L_21) = (RuntimeObject*)L_22;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_21, (void*)(RuntimeObject*)L_22);
				Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43** L_23 = ___parameterMap3;
				Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_24 = V_3;
				*((RuntimeObject**)L_23) = (RuntimeObject*)L_24;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_23, (void*)(RuntimeObject*)L_24);
				V_0 = (bool)1;
			}

IL_0064_1:
			{
				RuntimeObject* L_25 = V_1;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0078;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0078:
	{
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** L_27 = ___matchingConstructor2;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_28 = *((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB**)L_27);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4(L_28, (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, NULL);
		return L_29;
	}
}
// System.Boolean Microsoft.Extensions.Internal.ActivatorUtilities::TryCreateParameterMap(System.Reflection.ParameterInfo[],System.Type[],System.Nullable`1<System.Int32>[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActivatorUtilities_TryCreateParameterMap_mDAAB7E7BECCA97FED6E3EB56F9ECDD0F2573E3F9 (ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* ___constructorParameters0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___argumentTypes1, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43** ___parameterMap2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43** L_0 = ___parameterMap2;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_1 = ___constructorParameters0;
		NullCheck(L_1);
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_2 = (Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43*)(Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43*)SZArrayNew(Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		V_0 = 0;
		goto IL_0066;
	}

IL_000e:
	{
		V_1 = (bool)0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = ___argumentTypes1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Type_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_7;
		L_7 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_6, NULL);
		V_2 = L_7;
		V_3 = 0;
		goto IL_0057;
	}

IL_001d:
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43** L_8 = ___parameterMap2;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_9 = *((Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43**)L_8);
		int32_t L_10 = V_3;
		NullCheck(L_9);
		bool L_11;
		L_11 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_12 = ___constructorParameters0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_15);
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_17;
		L_17 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_16, NULL);
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_18 = V_2;
		NullCheck(L_17);
		bool L_19;
		L_19 = VirtualFuncInvoker1< bool, TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* >::Invoke(136 /* System.Boolean System.Reflection.TypeInfo::IsAssignableFrom(System.Reflection.TypeInfo) */, L_17, L_18);
		if (!L_19)
		{
			goto IL_0053;
		}
	}
	{
		V_1 = (bool)1;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43** L_20 = ___parameterMap2;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_21 = *((Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43**)L_20);
		int32_t L_22 = V_3;
		int32_t L_23 = V_0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_24), L_23, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)L_24);
		goto IL_005d;
	}

IL_0053:
	{
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0057:
	{
		int32_t L_26 = V_3;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_27 = ___constructorParameters0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_001d;
		}
	}

IL_005d:
	{
		bool L_28 = V_1;
		if (L_28)
		{
			goto IL_0062;
		}
	}
	{
		return (bool)0;
	}

IL_0062:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0066:
	{
		int32_t L_30 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_31 = ___argumentTypes1;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities::ThrowMultipleCtorsMarkedWithAttributeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities_ThrowMultipleCtorsMarkedWithAttributeException_mED279EA5B80859D8DEB172DE79DB2D688A679FE5 (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral059AB8FE8DEC48B335F3DEEC5DD071299BB001AC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActivatorUtilities_ThrowMultipleCtorsMarkedWithAttributeException_mED279EA5B80859D8DEB172DE79DB2D688A679FE5_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities::ThrowMarkedCtorDoesNotTakeAllProvidedArguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities_ThrowMarkedCtorDoesNotTakeAllProvidedArguments_m047C53D26F8BEE18820978E05E27969655B31855 (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral106CF8B6C25989122240E7EB1263C2EB32DB3F16)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ActivatorUtilities_ThrowMarkedCtorDoesNotTakeAllProvidedArguments_m047C53D26F8BEE18820978E05E27969655B31855_RuntimeMethod_var)));
	}
}
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilities__cctor_m7584383609AB4AFB4417B7E2CEE47FC7351C8CCA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_GetMethodInfo_TisFunc_5_t8BEA11C86578CFEBA7F26FF34A0A60F01431DCB0_mB7B11F35ABEDD82E7DD04D5FF33585B295E883FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_GetService_m7AC092E824B4590F4F716E4E43673BE856435C86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_Lambda_TisFunc_5_t8BEA11C86578CFEBA7F26FF34A0A60F01431DCB0_m259A292B2C8778D6341D0DD5552309535E5C2E78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B8AA5273679EF7F7E3FB552E405DCF30B14ECA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423);
		s_Il2CppMethodInitialized = true;
	}
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_0 = NULL;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_1 = NULL;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_2 = NULL;
	ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* V_3 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_2;
		L_2 = Expression_Parameter_mF825EFB5FBAABE8355C9D44B286AB4EA02F8B992(L_1, _stringLiteral8B8AA5273679EF7F7E3FB552E405DCF30B14ECA1, NULL);
		V_0 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_5;
		L_5 = Expression_Parameter_mF825EFB5FBAABE8355C9D44B286AB4EA02F8B992(L_4, _stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2, NULL);
		V_1 = L_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = Expression_Parameter_mF825EFB5FBAABE8355C9D44B286AB4EA02F8B992(L_7, _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423, NULL);
		V_2 = L_8;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_11;
		L_11 = Expression_Parameter_mF825EFB5FBAABE8355C9D44B286AB4EA02F8B992(L_10, _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A, NULL);
		V_3 = L_11;
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_12 = { reinterpret_cast<intptr_t> (ActivatorUtilities_GetService_m7AC092E824B4590F4F716E4E43673BE856435C86_RuntimeMethod_var) };
		MethodBase_t* L_13;
		L_13 = MethodBase_GetMethodFromHandle_m55E706B5156C0FDC1EA1DEF95B4FE36FE6A96EA9(L_12, NULL);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_14 = (ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F*)SZArrayNew(ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F_il2cpp_TypeInfo_var, (uint32_t)4);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_15 = L_14;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_16 = V_0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_16);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_17 = L_15;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_18 = V_1;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_19 = L_17;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_20 = V_2;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_20);
		ExpressionU5BU5D_tA9F782C3F01235FA1BEE94C80141F0CE1CB1BF6F* L_21 = L_19;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_22 = V_3;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22);
		MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* L_23;
		L_23 = Expression_Call_mF08321E4E99D835F221F58B40C8077C60530CE62((Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)NULL, ((MethodInfo_t*)CastclassClass((RuntimeObject*)L_13, MethodInfo_t_il2cpp_TypeInfo_var)), L_21, NULL);
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_24 = (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)SZArrayNew(ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C_il2cpp_TypeInfo_var, (uint32_t)4);
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_25 = L_24;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_26 = V_0;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_26);
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_27 = L_25;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_28 = V_1;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_28);
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_29 = L_27;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_30 = V_2;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_30);
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_31 = L_29;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_32 = V_3;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*)L_32);
		Expression_1_t2DC7D6BAB49660BD547C350C2817540D483211C2* L_33;
		L_33 = Expression_Lambda_TisFunc_5_t8BEA11C86578CFEBA7F26FF34A0A60F01431DCB0_m259A292B2C8778D6341D0DD5552309535E5C2E78(L_23, L_31, Expression_Lambda_TisFunc_5_t8BEA11C86578CFEBA7F26FF34A0A60F01431DCB0_m259A292B2C8778D6341D0DD5552309535E5C2E78_RuntimeMethod_var);
		MethodInfo_t* L_34;
		L_34 = ActivatorUtilities_GetMethodInfo_TisFunc_5_t8BEA11C86578CFEBA7F26FF34A0A60F01431DCB0_mB7B11F35ABEDD82E7DD04D5FF33585B295E883FE(L_33, ActivatorUtilities_GetMethodInfo_TisFunc_5_t8BEA11C86578CFEBA7F26FF34A0A60F01431DCB0_mB7B11F35ABEDD82E7DD04D5FF33585B295E883FE_RuntimeMethod_var);
		((ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_StaticFields*)il2cpp_codegen_static_fields_for(ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var))->___GetServiceInfo_0 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_StaticFields*)il2cpp_codegen_static_fields_for(ActivatorUtilities_t06DA6FC7F6F48CFDEFABEBA468A10BC8C6E30631_il2cpp_TypeInfo_var))->___GetServiceInfo_0), (void*)L_34);
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


// Conversion methods for marshalling of: Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher
IL2CPP_EXTERN_C void ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1_marshal_pinvoke(const ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1& unmarshaled, ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1_marshaled_pinvoke& marshaled)
{
	Exception_t* ____constructor_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_constructor' of type 'ConstructorMatcher': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____constructor_0Exception, NULL);
}
IL2CPP_EXTERN_C void ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1_marshal_pinvoke_back(const ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1_marshaled_pinvoke& marshaled, ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1& unmarshaled)
{
	Exception_t* ____constructor_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_constructor' of type 'ConstructorMatcher': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____constructor_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher
IL2CPP_EXTERN_C void ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1_marshal_pinvoke_cleanup(ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher
IL2CPP_EXTERN_C void ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1_marshal_com(const ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1& unmarshaled, ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1_marshaled_com& marshaled)
{
	Exception_t* ____constructor_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_constructor' of type 'ConstructorMatcher': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____constructor_0Exception, NULL);
}
IL2CPP_EXTERN_C void ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1_marshal_com_back(const ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1_marshaled_com& marshaled, ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1& unmarshaled)
{
	Exception_t* ____constructor_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_constructor' of type 'ConstructorMatcher': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____constructor_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher
IL2CPP_EXTERN_C void ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1_marshal_com_cleanup(ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1_marshaled_com& marshaled)
{
}
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher::.ctor(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstructorMatcher__ctor_m2A876A496310A3615DA238359A35665AC4F58BF2 (ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1* __this, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___constructor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_0 = ___constructor0;
		__this->____constructor_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____constructor_0), (void*)L_0);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_1 = __this->____constructor_0;
		NullCheck(L_1);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_2;
		L_2 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		__this->____parameters_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parameters_1), (void*)L_2);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_3 = __this->____parameters_1;
		NullCheck(L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		__this->____parameterValues_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parameterValues_2), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void ConstructorMatcher__ctor_m2A876A496310A3615DA238359A35665AC4F58BF2_AdjustorThunk (RuntimeObject* __this, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___constructor0, const RuntimeMethod* method)
{
	ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1*>(__this + _offset);
	ConstructorMatcher__ctor_m2A876A496310A3615DA238359A35665AC4F58BF2(_thisAdjusted, ___constructor0, method);
}
// System.Int32 Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher::Match(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConstructorMatcher_Match_mAD81318EA3F6A7F94CEDE82322F5DA9D26DFEDCC (ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___givenParameters0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* G_B4_0 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		goto IL_008e;
	}

IL_000b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___givenParameters0;
		int32_t L_1 = V_2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		RuntimeObject* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0015;
		}
	}
	{
		G_B4_0 = ((TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D*)(NULL));
		goto IL_001f;
	}

IL_0015:
	{
		NullCheck(G_B3_0);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(G_B3_0, NULL);
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_6;
		L_6 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_5, NULL);
		G_B4_0 = L_6;
	}

IL_001f:
	{
		V_3 = G_B4_0;
		V_4 = (bool)0;
		int32_t L_7 = V_0;
		V_5 = L_7;
		goto IL_0074;
	}

IL_0028:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____parameterValues_2;
		int32_t L_9 = V_5;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (L_11)
		{
			goto IL_006e;
		}
	}
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_12 = __this->____parameters_1;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_15);
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_17;
		L_17 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_16, NULL);
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_18 = V_3;
		NullCheck(L_17);
		bool L_19;
		L_19 = VirtualFuncInvoker1< bool, TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* >::Invoke(136 /* System.Boolean System.Reflection.TypeInfo::IsAssignableFrom(System.Reflection.TypeInfo) */, L_17, L_18);
		if (!L_19)
		{
			goto IL_006e;
		}
	}
	{
		V_4 = (bool)1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = __this->____parameterValues_2;
		int32_t L_21 = V_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = ___givenParameters0;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_25);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (RuntimeObject*)L_25);
		int32_t L_26 = V_0;
		int32_t L_27 = V_5;
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t L_29 = V_5;
		int32_t L_30 = V_2;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_31 = V_5;
		V_1 = L_31;
	}

IL_006e:
	{
		int32_t L_32 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0074:
	{
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_34 = V_5;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_35 = __this->____parameters_1;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_0028;
		}
	}

IL_0084:
	{
		bool L_36 = V_4;
		if (L_36)
		{
			goto IL_008a;
		}
	}
	{
		return (-1);
	}

IL_008a:
	{
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_008e:
	{
		int32_t L_38 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = ___givenParameters0;
		NullCheck(L_39);
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)(((RuntimeArray*)L_39)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_40 = V_1;
		return L_40;
	}
}
IL2CPP_EXTERN_C  int32_t ConstructorMatcher_Match_mAD81318EA3F6A7F94CEDE82322F5DA9D26DFEDCC_AdjustorThunk (RuntimeObject* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___givenParameters0, const RuntimeMethod* method)
{
	ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConstructorMatcher_Match_mAD81318EA3F6A7F94CEDE82322F5DA9D26DFEDCC(_thisAdjusted, ___givenParameters0, method);
	return _returnValue;
}
// System.Object Microsoft.Extensions.Internal.ActivatorUtilities/ConstructorMatcher::CreateInstance(System.IServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConstructorMatcher_CreateInstance_m04286FDF0C5CFB9B4E49DB22EB208F7DF0C3154C (ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterDefaultValue_t82553849D3385F28470C0E4867E3383893035C81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* G_B13_0 = NULL;
	TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	{
		V_0 = 0;
		goto IL_0076;
	}

IL_0004:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____parameterValues_2;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (L_3)
		{
			goto IL_0072;
		}
	}
	{
		RuntimeObject* L_4 = ___provider0;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_5 = __this->____parameters_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_8);
		NullCheck(L_4);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* System.Object System.IServiceProvider::GetService(System.Type) */, IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_il2cpp_TypeInfo_var, L_4, L_9);
		V_1 = L_10;
		RuntimeObject* L_11 = V_1;
		if (L_11)
		{
			goto IL_0069;
		}
	}
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_12 = __this->____parameters_1;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		il2cpp_codegen_runtime_class_init_inline(ParameterDefaultValue_t82553849D3385F28470C0E4867E3383893035C81_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = ParameterDefaultValue_TryGetDefaultValue_m386B67FD66A3395501D1C3F1C6C3080C907B529F(L_15, (&V_2), NULL);
		if (L_16)
		{
			goto IL_005e;
		}
	}
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_17 = __this->____parameters_1;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Type_t* L_21;
		L_21 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_20);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_22 = __this->____constructor_0;
		NullCheck(L_22);
		Type_t* L_23;
		L_23 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_22);
		String_t* L_24;
		L_24 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25DF26F9216E3E00ED168A90DD0E9DAF1C534586)), L_21, L_23, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConstructorMatcher_CreateInstance_m04286FDF0C5CFB9B4E49DB22EB208F7DF0C3154C_RuntimeMethod_var)));
	}

IL_005e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = __this->____parameterValues_2;
		int32_t L_27 = V_0;
		RuntimeObject* L_28 = V_2;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (RuntimeObject*)L_28);
		goto IL_0072;
	}

IL_0069:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = __this->____parameterValues_2;
		int32_t L_30 = V_0;
		RuntimeObject* L_31 = V_1;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (RuntimeObject*)L_31);
	}

IL_0072:
	{
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0076:
	{
		int32_t L_33 = V_0;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_34 = __this->____parameters_1;
		NullCheck(L_34);
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_35 = __this->____constructor_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = __this->____parameterValues_2;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE(L_35, L_36, NULL);
		V_3 = L_37;
		goto IL_00c7;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
	}
	{// begin filter(depth: 1)
		bool __filter_local = false;
		try
		{// begin implicit try block
			{
				TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* L_38 = ((TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2*)IsInstSealed((RuntimeObject*)((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var))));
				G_B12_0 = L_38;
				if (L_38)
				{
					G_B13_0 = L_38;
					goto IL_00a2;
				}
			}
			{
				G_B14_0 = 0;
				goto IL_00b1;
			}

IL_00a2:
			{
				V_4 = G_B13_0;
				TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* L_39 = V_4;
				NullCheck(L_39);
				Exception_t* L_40;
				L_40 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_39, NULL);
				G_B14_0 = ((!(((uint32_t)((!(((RuntimeObject*)(Exception_t*)L_40) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) <= ((uint32_t)0)))? 1 : 0);
			}

IL_00b1:
			{
				__filter_local = (G_B14_0) ? true : false;
			}
		}// end implicit try block
		catch(Il2CppExceptionWrapper&)
		{// begin implicit catch block
			__filter_local = false;
		}// end implicit catch block
		if (__filter_local)
		{
			goto FILTER_00b3;
		}
		else
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConstructorMatcher_CreateInstance_m04286FDF0C5CFB9B4E49DB22EB208F7DF0C3154C_RuntimeMethod_var)));
		}
	}// end filter (depth: 1)

FILTER_00b3:
	{// begin catch(filter)
		TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* L_41 = V_4;
		NullCheck(L_41);
		Exception_t* L_42;
		L_42 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_41, NULL);
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_43;
		L_43 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_42, NULL);
		NullCheck(L_43);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_43, NULL);
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

IL_00c7:
	{
		RuntimeObject* L_44 = V_3;
		return L_44;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ConstructorMatcher_CreateInstance_m04286FDF0C5CFB9B4E49DB22EB208F7DF0C3154C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConstructorMatcher_t5833335FD49C021EACC16D6EB2C7CBE99662FCF1*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = ConstructorMatcher_CreateInstance_m04286FDF0C5CFB9B4E49DB22EB208F7DF0C3154C(_thisAdjusted, ___provider0, method);
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
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m881F8A53B3FB2027B00462AC94D0CA960C5B7699 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t50B7BFC8BCDC3DFE6E74552F905F652BAC62FB49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t50B7BFC8BCDC3DFE6E74552F905F652BAC62FB49* L_0 = (U3CU3Ec_t50B7BFC8BCDC3DFE6E74552F905F652BAC62FB49*)il2cpp_codegen_object_new(U3CU3Ec_t50B7BFC8BCDC3DFE6E74552F905F652BAC62FB49_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mBD95E09621FC0F44096FF1B23DF7ADE0D8178367(L_0, NULL);
		((U3CU3Ec_t50B7BFC8BCDC3DFE6E74552F905F652BAC62FB49_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50B7BFC8BCDC3DFE6E74552F905F652BAC62FB49_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t50B7BFC8BCDC3DFE6E74552F905F652BAC62FB49_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t50B7BFC8BCDC3DFE6E74552F905F652BAC62FB49_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.Extensions.Internal.ActivatorUtilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBD95E09621FC0F44096FF1B23DF7ADE0D8178367 (U3CU3Ec_t50B7BFC8BCDC3DFE6E74552F905F652BAC62FB49* __this, const RuntimeMethod* method) 
{
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
// System.Void Microsoft.Extensions.Internal.ActivatorUtilitiesConstructorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivatorUtilitiesConstructorAttribute__ctor_mAC398238C060F81C2D44DB9D64EF9467AF579301 (ActivatorUtilitiesConstructorAttribute_tD3527F1CD4BD3A3156C90E15E1FC36C724545E73* __this, const RuntimeMethod* method) 
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
RuntimeObject* ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F_Multicast(ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA* __this, RuntimeObject* ___serviceProvider0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arguments1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA* currentDelegate = reinterpret_cast<ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___serviceProvider0, ___arguments1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F_OpenInst(ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA* __this, RuntimeObject* ___serviceProvider0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arguments1, const RuntimeMethod* method)
{
	NullCheck(___serviceProvider0);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___serviceProvider0, ___arguments1, method);
}
RuntimeObject* ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F_OpenStatic(ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA* __this, RuntimeObject* ___serviceProvider0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arguments1, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___serviceProvider0, ___arguments1, method);
}
RuntimeObject* ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F_OpenStaticInvoker(ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA* __this, RuntimeObject* ___serviceProvider0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arguments1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(__this->___method_ptr_0, method, NULL, ___serviceProvider0, ___arguments1);
}
RuntimeObject* ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F_ClosedStaticInvoker(ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA* __this, RuntimeObject* ___serviceProvider0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arguments1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< RuntimeObject*, RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___serviceProvider0, ___arguments1);
}
RuntimeObject* ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F_OpenVirtual(ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA* __this, RuntimeObject* ___serviceProvider0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arguments1, const RuntimeMethod* method)
{
	NullCheck(___serviceProvider0);
	return VirtualFuncInvoker1< RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(il2cpp_codegen_method_get_slot(method), ___serviceProvider0, ___arguments1);
}
RuntimeObject* ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F_OpenInterface(ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA* __this, RuntimeObject* ___serviceProvider0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arguments1, const RuntimeMethod* method)
{
	NullCheck(___serviceProvider0);
	return InterfaceFuncInvoker1< RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___serviceProvider0, ___arguments1);
}
RuntimeObject* ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F_OpenGenericVirtual(ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA* __this, RuntimeObject* ___serviceProvider0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arguments1, const RuntimeMethod* method)
{
	NullCheck(___serviceProvider0);
	return GenericVirtualFuncInvoker1< RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(method, ___serviceProvider0, ___arguments1);
}
RuntimeObject* ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F_OpenGenericInterface(ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA* __this, RuntimeObject* ___serviceProvider0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arguments1, const RuntimeMethod* method)
{
	NullCheck(___serviceProvider0);
	return GenericInterfaceFuncInvoker1< RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(method, ___serviceProvider0, ___arguments1);
}
// System.Void Microsoft.Extensions.Internal.ObjectFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectFactory__ctor_mED6401D9D1F3567054072ABE2331E2E6B4136341 (ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F_Multicast;
}
// System.Object Microsoft.Extensions.Internal.ObjectFactory::Invoke(System.IServiceProvider,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectFactory_Invoke_m5F7D330B33A9EB81FF00022B6CBC828936452F2F (ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA* __this, RuntimeObject* ___serviceProvider0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arguments1, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___serviceProvider0, ___arguments1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Microsoft.Extensions.Internal.ObjectFactory::BeginInvoke(System.IServiceProvider,System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectFactory_BeginInvoke_m397ADF962B9E63DC60B05FFF3F4D521E58F48014 (ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA* __this, RuntimeObject* ___serviceProvider0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arguments1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___serviceProvider0;
	__d_args[1] = ___arguments1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Object Microsoft.Extensions.Internal.ObjectFactory::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectFactory_EndInvoke_m2A4E728F0D49DEEE87BB6850599A0826E8BA2369 (ObjectFactory_t1C00F4BE2F78DE05726F095FEC34FEB72BECF8BA* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Microsoft.Extensions.Internal.ParameterDefaultValue::TryGetDefaultValue(System.Reflection.ParameterInfo,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterDefaultValue_TryGetDefaultValue_m386B67FD66A3395501D1C3F1C6C3080C907B529F (ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* ___parameter0, RuntimeObject** ___defaultValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterDefaultValue_t82553849D3385F28470C0E4867E3383893035C81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Type_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* G_B4_0 = NULL;
	FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		V_1 = (bool)1;
		RuntimeObject** L_0 = ___defaultValue1;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
	}
	try
	{// begin try (depth: 1)
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_1 = ___parameter0;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Reflection.ParameterInfo::get_HasDefaultValue() */, L_1);
		V_0 = L_2;
		goto IL_003c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
	}
	{// begin filter(depth: 1)
		bool __filter_local = false;
		try
		{// begin implicit try block
			{
				FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_3 = ((FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)IsInstClass((RuntimeObject*)((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var))));
				G_B3_0 = L_3;
				if (L_3)
				{
					G_B4_0 = L_3;
					goto IL_001a;
				}
			}
			{
				G_B5_0 = 0;
				goto IL_0033;
			}

IL_001a:
			{
				ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_4 = ___parameter0;
				NullCheck(L_4);
				Type_t* L_5;
				L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_4);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var))) };
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
				Type_t* L_7;
				L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
				bool L_8;
				L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
				G_B5_0 = ((!(((uint32_t)L_8) <= ((uint32_t)0)))? 1 : 0);
			}

IL_0033:
			{
				__filter_local = (G_B5_0) ? true : false;
			}
		}// end implicit try block
		catch(Il2CppExceptionWrapper&)
		{// begin implicit catch block
			__filter_local = false;
		}// end implicit catch block
		if (__filter_local)
		{
			goto FILTER_0035;
		}
		else
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ParameterDefaultValue_TryGetDefaultValue_m386B67FD66A3395501D1C3F1C6C3080C907B529F_RuntimeMethod_var)));
		}
	}// end filter (depth: 1)

FILTER_0035:
	{// begin catch(filter)
		V_0 = (bool)1;
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003c;
	}// end catch (depth: 1)

IL_003c:
	{
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_00b7;
		}
	}
	{
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		RuntimeObject** L_11 = ___defaultValue1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_12 = ___parameter0;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(13 /* System.Object System.Reflection.ParameterInfo::get_DefaultValue() */, L_12);
		*((RuntimeObject**)L_11) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)L_13);
	}

IL_004a:
	{
		RuntimeObject** L_14 = ___defaultValue1;
		RuntimeObject* L_15 = *((RuntimeObject**)L_14);
		if (L_15)
		{
			goto IL_0068;
		}
	}
	{
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_16 = ___parameter0;
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_16);
		NullCheck(L_17);
		bool L_18;
		L_18 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_17, NULL);
		if (!L_18)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject** L_19 = ___defaultValue1;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_20 = ___parameter0;
		NullCheck(L_20);
		Type_t* L_21;
		L_21 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_20);
		RuntimeObject* L_22;
		L_22 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_21, NULL);
		*((RuntimeObject**)L_19) = (RuntimeObject*)L_22;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_19, (void*)(RuntimeObject*)L_22);
	}

IL_0068:
	{
		RuntimeObject** L_23 = ___defaultValue1;
		RuntimeObject* L_24 = *((RuntimeObject**)L_23);
		if (!L_24)
		{
			goto IL_00b7;
		}
	}
	{
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_25 = ___parameter0;
		NullCheck(L_25);
		Type_t* L_26;
		L_26 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_25);
		NullCheck(L_26);
		bool L_27;
		L_27 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_26);
		if (!L_27)
		{
			goto IL_00b7;
		}
	}
	{
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_28 = ___parameter0;
		NullCheck(L_28);
		Type_t* L_29;
		L_29 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_28);
		NullCheck(L_29);
		Type_t* L_30;
		L_30 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_29);
		il2cpp_codegen_runtime_class_init_inline(ParameterDefaultValue_t82553849D3385F28470C0E4867E3383893035C81_il2cpp_TypeInfo_var);
		Type_t* L_31 = ((ParameterDefaultValue_t82553849D3385F28470C0E4867E3383893035C81_StaticFields*)il2cpp_codegen_static_fields_for(ParameterDefaultValue_t82553849D3385F28470C0E4867E3383893035C81_il2cpp_TypeInfo_var))->____nullable_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_30, L_31, NULL);
		if (!L_32)
		{
			goto IL_00b7;
		}
	}
	{
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_33 = ___parameter0;
		NullCheck(L_33);
		Type_t* L_34;
		L_34 = VirtualFuncInvoker0< Type_t* >::Invoke(11 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_33);
		Type_t* L_35;
		L_35 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_34, NULL);
		V_2 = L_35;
		Type_t* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_36, (Type_t*)NULL, NULL);
		if (!L_37)
		{
			goto IL_00b7;
		}
	}
	{
		Type_t* L_38 = V_2;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_38);
		if (!L_39)
		{
			goto IL_00b7;
		}
	}
	{
		RuntimeObject** L_40 = ___defaultValue1;
		Type_t* L_41 = V_2;
		RuntimeObject** L_42 = ___defaultValue1;
		RuntimeObject* L_43 = *((RuntimeObject**)L_42);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_44;
		L_44 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_41, L_43, NULL);
		*((RuntimeObject**)L_40) = (RuntimeObject*)L_44;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_40, (void*)(RuntimeObject*)L_44);
	}

IL_00b7:
	{
		bool L_45 = V_0;
		return L_45;
	}
}
// System.Void Microsoft.Extensions.Internal.ParameterDefaultValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterDefaultValue__ctor_m741BB7F39650DBC0858C3A13F08DDD7304E0CBFF (ParameterDefaultValue_t82553849D3385F28470C0E4867E3383893035C81* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.Extensions.Internal.ParameterDefaultValue::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterDefaultValue__cctor_m4BCDAF669A590DCD5ADB39C66C7E2DE846612034 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterDefaultValue_t82553849D3385F28470C0E4867E3383893035C81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Nullable_1_tCC12E6AC31BF7E862A033EBEFF48D5000D6291E6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		((ParameterDefaultValue_t82553849D3385F28470C0E4867E3383893035C81_StaticFields*)il2cpp_codegen_static_fields_for(ParameterDefaultValue_t82553849D3385F28470C0E4867E3383893035C81_il2cpp_TypeInfo_var))->____nullable_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ParameterDefaultValue_t82553849D3385F28470C0E4867E3383893035C81_StaticFields*)il2cpp_codegen_static_fields_for(ParameterDefaultValue_t82553849D3385F28470C0E4867E3383893035C81_il2cpp_TypeInfo_var))->____nullable_0), (void*)L_1);
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
// System.Threading.CancellationToken Microsoft.AspNetCore.Connections.BaseConnectionContext::get_ConnectionClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED BaseConnectionContext_get_ConnectionClosed_m50249BBBDEFA2836CA3ABEC8C7300FE10EBBEF7C (BaseConnectionContext_tE415977D178CA1218669730776F715CF7D0A1BF5* __this, const RuntimeMethod* method) 
{
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->___U3CConnectionClosedU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.BaseConnectionContext::set_ConnectionClosed(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseConnectionContext_set_ConnectionClosed_mC211F7A657D7D48AB439328DA59E8D65BF7CE6B6 (BaseConnectionContext_tE415977D178CA1218669730776F715CF7D0A1BF5* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___value0, const RuntimeMethod* method) 
{
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___value0;
		__this->___U3CConnectionClosedU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CConnectionClosedU3Ek__BackingField_0))->____source_0), (void*)NULL);
		return;
	}
}
// System.Net.EndPoint Microsoft.AspNetCore.Connections.BaseConnectionContext::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* BaseConnectionContext_get_LocalEndPoint_mB2BDEF46065E32C7AA8E109B6DA8F1264A43F359 (BaseConnectionContext_tE415977D178CA1218669730776F715CF7D0A1BF5* __this, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = __this->___U3CLocalEndPointU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.BaseConnectionContext::set_LocalEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseConnectionContext_set_LocalEndPoint_mF34FCBDCDF1BD94DCBFE5A593F74B8BFBA3C157A (BaseConnectionContext_tE415977D178CA1218669730776F715CF7D0A1BF5* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___value0, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___value0;
		__this->___U3CLocalEndPointU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLocalEndPointU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Net.EndPoint Microsoft.AspNetCore.Connections.BaseConnectionContext::get_RemoteEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* BaseConnectionContext_get_RemoteEndPoint_m21EE5B78B30CA1ACADF93D49D2C348C21107E2E2 (BaseConnectionContext_tE415977D178CA1218669730776F715CF7D0A1BF5* __this, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = __this->___U3CRemoteEndPointU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.BaseConnectionContext::set_RemoteEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseConnectionContext_set_RemoteEndPoint_m5216368D0109015C006CB2C341A526CD439B8B1D (BaseConnectionContext_tE415977D178CA1218669730776F715CF7D0A1BF5* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___value0, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___value0;
		__this->___U3CRemoteEndPointU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRemoteEndPointU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Threading.Tasks.ValueTask Microsoft.AspNetCore.Connections.BaseConnectionContext::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F BaseConnectionContext_DisposeAsync_m16A3DB0D5D857D173ED394CC087CF083271D9B15 (BaseConnectionContext_tE415977D178CA1218669730776F715CF7D0A1BF5* __this, const RuntimeMethod* method) 
{
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F));
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_0 = V_0;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.BaseConnectionContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseConnectionContext__ctor_m12224E58C2C9D3103BEFC62C9290ED983B945C82 (BaseConnectionContext_tE415977D178CA1218669730776F715CF7D0A1BF5* __this, const RuntimeMethod* method) 
{
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
// System.IServiceProvider Microsoft.AspNetCore.Connections.ConnectionBuilder::get_ApplicationServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionBuilder_get_ApplicationServices_m6D7F40F3F9A919FFA05F7BB254F39E3FFF026CF0 (ConnectionBuilder_t3B3AAA1967A807400FF94FCEE93D4B8AA5E393E5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CApplicationServicesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilder::.ctor(System.IServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionBuilder__ctor_m65A2A33E1921B8012A62F148201B1488CC6DC2BA (ConnectionBuilder_t3B3AAA1967A807400FF94FCEE93D4B8AA5E393E5* __this, RuntimeObject* ___applicationServices0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4E90DE7FE8420DB703F80C915AC0E024CEB5E783_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t01EEEC97C68EAA8DDC25C28810FA20D96EFDD1B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t01EEEC97C68EAA8DDC25C28810FA20D96EFDD1B4* L_0 = (List_1_t01EEEC97C68EAA8DDC25C28810FA20D96EFDD1B4*)il2cpp_codegen_object_new(List_1_t01EEEC97C68EAA8DDC25C28810FA20D96EFDD1B4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4E90DE7FE8420DB703F80C915AC0E024CEB5E783(L_0, List_1__ctor_m4E90DE7FE8420DB703F80C915AC0E024CEB5E783_RuntimeMethod_var);
		__this->____components_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____components_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_1 = ___applicationServices0;
		__this->___U3CApplicationServicesU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CApplicationServicesU3Ek__BackingField_1), (void*)L_1);
		return;
	}
}
// Microsoft.AspNetCore.Connections.IConnectionBuilder Microsoft.AspNetCore.Connections.ConnectionBuilder::Use(System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionBuilder_Use_mC964FB5F6186D99CD92AC9ECF68B9599442EF60D (ConnectionBuilder_t3B3AAA1967A807400FF94FCEE93D4B8AA5E393E5* __this, Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E* ___middleware0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t464820FD275DB37D5FEB4A60C2F31365A66BB6A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____components_0;
		Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E* L_1 = ___middleware0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>>::Add(T) */, ICollection_1_t464820FD275DB37D5FEB4A60C2F31365A66BB6A5_il2cpp_TypeInfo_var, L_0, L_1);
		return __this;
	}
}
// Microsoft.AspNetCore.Connections.ConnectionDelegate Microsoft.AspNetCore.Connections.ConnectionBuilder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* ConnectionBuilder_Build_mF9E6894DE78259FD9171C2F3F9DDB8E157A8B7B3 (ConnectionBuilder_t3B3AAA1967A807400FF94FCEE93D4B8AA5E393E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisFunc_2_tABD83A4369BBAF753476777E752F329F79F9A08E_mE9CE5E7437D16AF0BBF75275EEA687B211153FF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCA38098D0A48A6F9E0AB8D45AAA0A3BF1CF2B9C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9DDCA341A6EC6C1ACFCCFBCF72D7E022E674C266_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CBuildU3Eb__6_0_m2B7C3F95D1DD2F81B27C8861E617EB06BD5F5657_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* G_B2_0 = NULL;
	ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_il2cpp_TypeInfo_var);
		ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* L_0 = ((U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
		ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_il2cpp_TypeInfo_var);
		U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC* L_2 = ((U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* L_3 = (ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18*)il2cpp_codegen_object_new(ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ConnectionDelegate__ctor_mD96F5DC967928F61763C1028F4FE3DA937652A0B(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CBuildU3Eb__6_0_m2B7C3F95D1DD2F81B27C8861E617EB06BD5F5657_RuntimeMethod_var), NULL);
		ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* L_4 = L_3;
		((U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		V_0 = G_B2_0;
		RuntimeObject* L_5 = __this->____components_0;
		RuntimeObject* L_6;
		L_6 = Enumerable_Reverse_TisFunc_2_tABD83A4369BBAF753476777E752F329F79F9A08E_mE9CE5E7437D16AF0BBF75275EEA687B211153FF6(L_5, Enumerable_Reverse_TisFunc_2_tABD83A4369BBAF753476777E752F329F79F9A08E_mE9CE5E7437D16AF0BBF75275EEA687B211153FF6_RuntimeMethod_var);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>>::GetEnumerator() */, IEnumerable_1_tCA38098D0A48A6F9E0AB8D45AAA0A3BF1CF2B9C5_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_1;
					if (!L_8)
					{
						goto IL_0053;
					}
				}
				{
					RuntimeObject* L_9 = V_1;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_0053:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0040_1;
			}

IL_0033_1:
			{
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E* L_11;
				L_11 = InterfaceFuncInvoker0< Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>>::get_Current() */, IEnumerator_1_t9DDCA341A6EC6C1ACFCCFBCF72D7E022E674C266_il2cpp_TypeInfo_var, L_10);
				ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* L_12 = V_0;
				NullCheck(L_11);
				ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* L_13;
				L_13 = Func_2_Invoke_m1052E4C09095578425DE710F13B5ECA03226F8C9_inline(L_11, L_12, NULL);
				V_0 = L_13;
			}

IL_0040_1:
			{
				RuntimeObject* L_14 = V_1;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0033_1;
				}
			}
			{
				goto IL_0054;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* L_16 = V_0;
		return L_16;
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilder/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m674E9C57E281ACFEA28716018CCD6D84FC141180 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC* L_0 = (U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC*)il2cpp_codegen_object_new(U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m61553AB28F9C1700926273E5B6C2071E85402F92(L_0, NULL);
		((U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m61553AB28F9C1700926273E5B6C2071E85402F92 (U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.ConnectionBuilder/<>c::<Build>b__6_0(Microsoft.AspNetCore.Connections.ConnectionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* U3CU3Ec_U3CBuildU3Eb__6_0_m2B7C3F95D1DD2F81B27C8861E617EB06BD5F5657 (U3CU3Ec_tBD0527CC8539FF67AE64AF3CB533C4A6DFA0EFCC* __this, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___features0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0;
		L_0 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
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
// Microsoft.AspNetCore.Connections.IConnectionBuilder Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions::Use(Microsoft.AspNetCore.Connections.IConnectionBuilder,System.Func`3<Microsoft.AspNetCore.Connections.ConnectionContext,System.Func`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionBuilderExtensions_Use_mB982FFAADCA3B4B84B4BD4AACBAA76F8A306265F (RuntimeObject* ___connectionBuilder0, Func_3_t00A12F33E416BA030A962398AFC6588B8D243E1D* ___middleware1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConnectionBuilder_t5CDB87FE8EAFBC47572AD7068574716A7933EE59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CUseU3Eb__0_mE8DFE1C507B597F8095743CD17C1DB33A18E8080_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_tAD8DF23097ED4C225495D391DC0FA365EC24B8BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_tAD8DF23097ED4C225495D391DC0FA365EC24B8BF* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_tAD8DF23097ED4C225495D391DC0FA365EC24B8BF* L_0 = (U3CU3Ec__DisplayClass1_0_tAD8DF23097ED4C225495D391DC0FA365EC24B8BF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_tAD8DF23097ED4C225495D391DC0FA365EC24B8BF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m79A75EE96033E88DAD52A1DDED25806F4C535FAE(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_tAD8DF23097ED4C225495D391DC0FA365EC24B8BF* L_1 = V_0;
		Func_3_t00A12F33E416BA030A962398AFC6588B8D243E1D* L_2 = ___middleware1;
		NullCheck(L_1);
		L_1->___middleware_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___middleware_0), (void*)L_2);
		RuntimeObject* L_3 = ___connectionBuilder0;
		U3CU3Ec__DisplayClass1_0_tAD8DF23097ED4C225495D391DC0FA365EC24B8BF* L_4 = V_0;
		Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E* L_5 = (Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E*)il2cpp_codegen_object_new(Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mC3D44C4512780404A16112263A15B30A914A8FF0(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CUseU3Eb__0_mE8DFE1C507B597F8095743CD17C1DB33A18E8080_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E* >::Invoke(1 /* Microsoft.AspNetCore.Connections.IConnectionBuilder Microsoft.AspNetCore.Connections.IConnectionBuilder::Use(System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>) */, IConnectionBuilder_t5CDB87FE8EAFBC47572AD7068574716A7933EE59_il2cpp_TypeInfo_var, L_3, L_5);
		return L_6;
	}
}
// Microsoft.AspNetCore.Connections.IConnectionBuilder Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions::Run(Microsoft.AspNetCore.Connections.IConnectionBuilder,System.Func`2<Microsoft.AspNetCore.Connections.ConnectionContext,System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionBuilderExtensions_Run_mFD1FF70BF1F2B503D16CD3DA95D845CCF0213FDC (RuntimeObject* ___connectionBuilder0, Func_2_tD632BF20BE4B0170CF4C4D2C2597133418575B60* ___middleware1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConnectionBuilder_t5CDB87FE8EAFBC47572AD7068574716A7933EE59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CRunU3Eb__0_m08E0CC51339C1B478880CE4E6C1187CAC16EAFA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t12686E36E783FC4E36362E079A8839E060582893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t12686E36E783FC4E36362E079A8839E060582893* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t12686E36E783FC4E36362E079A8839E060582893* L_0 = (U3CU3Ec__DisplayClass2_0_t12686E36E783FC4E36362E079A8839E060582893*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t12686E36E783FC4E36362E079A8839E060582893_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_mC2EE79CC78588AB178E39ABB6F30E37936A551AA(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t12686E36E783FC4E36362E079A8839E060582893* L_1 = V_0;
		Func_2_tD632BF20BE4B0170CF4C4D2C2597133418575B60* L_2 = ___middleware1;
		NullCheck(L_1);
		L_1->___middleware_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___middleware_0), (void*)L_2);
		RuntimeObject* L_3 = ___connectionBuilder0;
		U3CU3Ec__DisplayClass2_0_t12686E36E783FC4E36362E079A8839E060582893* L_4 = V_0;
		Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E* L_5 = (Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E*)il2cpp_codegen_object_new(Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mC3D44C4512780404A16112263A15B30A914A8FF0(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CRunU3Eb__0_m08E0CC51339C1B478880CE4E6C1187CAC16EAFA7_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, Func_2_tABD83A4369BBAF753476777E752F329F79F9A08E* >::Invoke(1 /* Microsoft.AspNetCore.Connections.IConnectionBuilder Microsoft.AspNetCore.Connections.IConnectionBuilder::Use(System.Func`2<Microsoft.AspNetCore.Connections.ConnectionDelegate,Microsoft.AspNetCore.Connections.ConnectionDelegate>) */, IConnectionBuilder_t5CDB87FE8EAFBC47572AD7068574716A7933EE59_il2cpp_TypeInfo_var, L_3, L_5);
		return L_6;
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m79A75EE96033E88DAD52A1DDED25806F4C535FAE (U3CU3Ec__DisplayClass1_0_tAD8DF23097ED4C225495D391DC0FA365EC24B8BF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.AspNetCore.Connections.ConnectionDelegate Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_0::<Use>b__0(Microsoft.AspNetCore.Connections.ConnectionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* U3CU3Ec__DisplayClass1_0_U3CUseU3Eb__0_mE8DFE1C507B597F8095743CD17C1DB33A18E8080 (U3CU3Ec__DisplayClass1_0_tAD8DF23097ED4C225495D391DC0FA365EC24B8BF* __this, ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* ___next0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_1_U3CUseU3Eb__1_m6524645637133127E18FA818698B0324176F0F32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_1_t47C8CF2F47B68957E10E714AE2FEF246F5FD58F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass1_1_t47C8CF2F47B68957E10E714AE2FEF246F5FD58F3* L_0 = (U3CU3Ec__DisplayClass1_1_t47C8CF2F47B68957E10E714AE2FEF246F5FD58F3*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_1_t47C8CF2F47B68957E10E714AE2FEF246F5FD58F3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_1__ctor_mCBF3723E8C26921B897F090B5EEC571659091F5B(L_0, NULL);
		U3CU3Ec__DisplayClass1_1_t47C8CF2F47B68957E10E714AE2FEF246F5FD58F3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals1_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___CSU24U3CU3E8__locals1_1), (void*)__this);
		U3CU3Ec__DisplayClass1_1_t47C8CF2F47B68957E10E714AE2FEF246F5FD58F3* L_2 = L_1;
		ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* L_3 = ___next0;
		NullCheck(L_2);
		L_2->___next_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___next_0), (void*)L_3);
		ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* L_4 = (ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18*)il2cpp_codegen_object_new(ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ConnectionDelegate__ctor_mD96F5DC967928F61763C1028F4FE3DA937652A0B(L_4, L_2, (intptr_t)((void*)U3CU3Ec__DisplayClass1_1_U3CUseU3Eb__1_m6524645637133127E18FA818698B0324176F0F32_RuntimeMethod_var), NULL);
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_1__ctor_mCBF3723E8C26921B897F090B5EEC571659091F5B (U3CU3Ec__DisplayClass1_1_t47C8CF2F47B68957E10E714AE2FEF246F5FD58F3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_1::<Use>b__1(Microsoft.AspNetCore.Connections.ConnectionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* U3CU3Ec__DisplayClass1_1_U3CUseU3Eb__1_m6524645637133127E18FA818698B0324176F0F32 (U3CU3Ec__DisplayClass1_1_t47C8CF2F47B68957E10E714AE2FEF246F5FD58F3* __this, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t60B0B212E646FAA748170ABB47E557CC31788685_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_2_U3CUseU3Eb__2_m42687403694FB9387883C65886B4391726610B37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_2_t7BD209E5DAD4704654907BD579587B854619F642_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_2_t7BD209E5DAD4704654907BD579587B854619F642* V_0 = NULL;
	Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass1_2_t7BD209E5DAD4704654907BD579587B854619F642* L_0 = (U3CU3Ec__DisplayClass1_2_t7BD209E5DAD4704654907BD579587B854619F642*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_2_t7BD209E5DAD4704654907BD579587B854619F642_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_2__ctor_mC18DD9070585687190968F6DC54A9586CEEC68CC(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_2_t7BD209E5DAD4704654907BD579587B854619F642* L_1 = V_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals2_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___CSU24U3CU3E8__locals2_1), (void*)__this);
		U3CU3Ec__DisplayClass1_2_t7BD209E5DAD4704654907BD579587B854619F642* L_2 = V_0;
		ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* L_3 = ___context0;
		NullCheck(L_2);
		L_2->___context_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___context_0), (void*)L_3);
		U3CU3Ec__DisplayClass1_2_t7BD209E5DAD4704654907BD579587B854619F642* L_4 = V_0;
		Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* L_5 = (Func_1_t60B0B212E646FAA748170ABB47E557CC31788685*)il2cpp_codegen_object_new(Func_1_t60B0B212E646FAA748170ABB47E557CC31788685_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_1__ctor_m6980BCC56FF4CA762C712085B3CCD3CE13C5C67E(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass1_2_U3CUseU3Eb__2_m42687403694FB9387883C65886B4391726610B37_RuntimeMethod_var), NULL);
		V_1 = L_5;
		U3CU3Ec__DisplayClass1_0_tAD8DF23097ED4C225495D391DC0FA365EC24B8BF* L_6 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_6);
		Func_3_t00A12F33E416BA030A962398AFC6588B8D243E1D* L_7 = L_6->___middleware_0;
		U3CU3Ec__DisplayClass1_2_t7BD209E5DAD4704654907BD579587B854619F642* L_8 = V_0;
		NullCheck(L_8);
		ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* L_9 = L_8->___context_0;
		Func_1_t60B0B212E646FAA748170ABB47E557CC31788685* L_10 = V_1;
		NullCheck(L_7);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_11;
		L_11 = Func_3_Invoke_mB27CEA1731838CF4DF830FCB1A4B46C7C6AB0646_inline(L_7, L_9, L_10, NULL);
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_2__ctor_mC18DD9070585687190968F6DC54A9586CEEC68CC (U3CU3Ec__DisplayClass1_2_t7BD209E5DAD4704654907BD579587B854619F642* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass1_2::<Use>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* U3CU3Ec__DisplayClass1_2_U3CUseU3Eb__2_m42687403694FB9387883C65886B4391726610B37 (U3CU3Ec__DisplayClass1_2_t7BD209E5DAD4704654907BD579587B854619F642* __this, const RuntimeMethod* method) 
{
	{
		U3CU3Ec__DisplayClass1_1_t47C8CF2F47B68957E10E714AE2FEF246F5FD58F3* L_0 = __this->___CSU24U3CU3E8__locals2_1;
		NullCheck(L_0);
		ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* L_1 = L_0->___next_0;
		ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* L_2 = __this->___context_0;
		NullCheck(L_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_inline(L_1, L_2, NULL);
		return L_3;
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mC2EE79CC78588AB178E39ABB6F30E37936A551AA (U3CU3Ec__DisplayClass2_0_t12686E36E783FC4E36362E079A8839E060582893* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Microsoft.AspNetCore.Connections.ConnectionDelegate Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass2_0::<Run>b__0(Microsoft.AspNetCore.Connections.ConnectionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* U3CU3Ec__DisplayClass2_0_U3CRunU3Eb__0_m08E0CC51339C1B478880CE4E6C1187CAC16EAFA7 (U3CU3Ec__DisplayClass2_0_t12686E36E783FC4E36362E079A8839E060582893* __this, ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* ___next0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CRunU3Eb__1_m1FD0804009FDA214A0050B1A6D26F709953290A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* V_0 = NULL;
	ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* G_B2_0 = NULL;
	ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* G_B1_0 = NULL;
	{
		ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* L_0 = __this->___U3CU3E9__1_1;
		ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* L_2 = (ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18*)il2cpp_codegen_object_new(ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ConnectionDelegate__ctor_mD96F5DC967928F61763C1028F4FE3DA937652A0B(L_2, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CRunU3Eb__1_m1FD0804009FDA214A0050B1A6D26F709953290A9_RuntimeMethod_var), NULL);
		ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* L_3 = L_2;
		V_0 = L_3;
		__this->___U3CU3E9__1_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__1_1), (void*)L_3);
		ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_001f:
	{
		return G_B2_0;
	}
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.ConnectionBuilderExtensions/<>c__DisplayClass2_0::<Run>b__1(Microsoft.AspNetCore.Connections.ConnectionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* U3CU3Ec__DisplayClass2_0_U3CRunU3Eb__1_m1FD0804009FDA214A0050B1A6D26F709953290A9 (U3CU3Ec__DisplayClass2_0_t12686E36E783FC4E36362E079A8839E060582893* __this, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___context0, const RuntimeMethod* method) 
{
	{
		Func_2_tD632BF20BE4B0170CF4C4D2C2597133418575B60* L_0 = __this->___middleware_0;
		ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* L_1 = ___context0;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = Func_2_Invoke_m5D1360AEB4128439D5C51DAAB87555FC2F4A034D_inline(L_0, L_1, NULL);
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionContext::Abort(Microsoft.AspNetCore.Connections.ConnectionAbortedException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionContext_Abort_m187EBF4B59ADAB100128D9F5375FCBC799795C3E (ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* __this, ConnectionAbortedException_tCEA39F0E36681CB0895178FC04862FA69F1C12A9* ___abortReason0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConnectionLifetimeFeature_t0F0E789C8323541D429E6D48DD896732761545D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFeatureCollection_Get_TisIConnectionLifetimeFeature_t0F0E789C8323541D429E6D48DD896732761545D3_m600F7632A8C49BB5292B8C0D3F20B21B39A0B4B2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Connections.BaseConnectionContext::get_Features() */, __this);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IFeatureCollection_Get_TisIConnectionLifetimeFeature_t0F0E789C8323541D429E6D48DD896732761545D3_m600F7632A8C49BB5292B8C0D3F20B21B39A0B4B2_RuntimeMethod_var, L_0);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Microsoft.AspNetCore.Connections.Features.IConnectionLifetimeFeature::Abort() */, IConnectionLifetimeFeature_t0F0E789C8323541D429E6D48DD896732761545D3_il2cpp_TypeInfo_var, G_B2_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionContext::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionContext_Abort_m11B8826DD89942C28AA87F12673C85D9C3857003 (ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionAbortedException_tCEA39F0E36681CB0895178FC04862FA69F1C12A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral689F3378765A4F6E5473B7A9517A050AB962198D);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConnectionAbortedException_tCEA39F0E36681CB0895178FC04862FA69F1C12A9* L_0 = (ConnectionAbortedException_tCEA39F0E36681CB0895178FC04862FA69F1C12A9*)il2cpp_codegen_object_new(ConnectionAbortedException_tCEA39F0E36681CB0895178FC04862FA69F1C12A9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConnectionAbortedException__ctor_mA4AA50CCA113597CACEF3E041F8C56B570EDB3C6(L_0, _stringLiteral689F3378765A4F6E5473B7A9517A050AB962198D, NULL);
		VirtualActionInvoker1< ConnectionAbortedException_tCEA39F0E36681CB0895178FC04862FA69F1C12A9* >::Invoke(17 /* System.Void Microsoft.AspNetCore.Connections.BaseConnectionContext::Abort(Microsoft.AspNetCore.Connections.ConnectionAbortedException) */, __this, L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionContext__ctor_m524B6301BC7651330FD746C06D52943DC6A658F1 (ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* __this, const RuntimeMethod* method) 
{
	{
		BaseConnectionContext__ctor_m12224E58C2C9D3103BEFC62C9290ED983B945C82(__this, NULL);
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
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_Multicast(ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* __this, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___connection0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* currentDelegate = reinterpret_cast<ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18*>(delegatesToInvoke[i]);
		typedef Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*FunctionPointerType) (RuntimeObject*, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___connection0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_OpenInst(ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* __this, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___connection0, const RuntimeMethod* method)
{
	NullCheck(___connection0);
	typedef Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*FunctionPointerType) (ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___connection0, method);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_OpenStatic(ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* __this, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___connection0, const RuntimeMethod* method)
{
	typedef Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*FunctionPointerType) (ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___connection0, method);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_OpenStaticInvoker(ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* __this, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___connection0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* >::Invoke(__this->___method_ptr_0, method, NULL, ___connection0);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_ClosedStaticInvoker(ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* __this, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___connection0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, RuntimeObject*, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___connection0);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_OpenVirtual(ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* __this, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___connection0, const RuntimeMethod* method)
{
	NullCheck(___connection0);
	return VirtualFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(il2cpp_codegen_method_get_slot(method), ___connection0);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_OpenInterface(ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* __this, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___connection0, const RuntimeMethod* method)
{
	NullCheck(___connection0);
	return InterfaceFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___connection0);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_OpenGenericVirtual(ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* __this, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___connection0, const RuntimeMethod* method)
{
	NullCheck(___connection0);
	return GenericVirtualFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(method, ___connection0);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_OpenGenericInterface(ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* __this, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___connection0, const RuntimeMethod* method)
{
	NullCheck(___connection0);
	return GenericInterfaceFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(method, ___connection0);
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionDelegate__ctor_mD96F5DC967928F61763C1028F4FE3DA937652A0B (ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_Multicast;
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.ConnectionDelegate::Invoke(Microsoft.AspNetCore.Connections.ConnectionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA (ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* __this, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___connection0, const RuntimeMethod* method) 
{
	typedef Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*FunctionPointerType) (RuntimeObject*, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___connection0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Microsoft.AspNetCore.Connections.ConnectionDelegate::BeginInvoke(Microsoft.AspNetCore.Connections.ConnectionContext,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionDelegate_BeginInvoke_mD8079838124F68BF72AFD1A1174B647715F39300 (ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* __this, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___connection0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___connection0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.ConnectionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ConnectionDelegate_EndInvoke_m5B577972836BA26DC8BE0FD6E888B46DFF0B74B5 (ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.AspNetCore.Connections.ConnectionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionHandler__ctor_mCF25B29D1A1BED46CB591616C3D5311ED8BE1D3F (ConnectionHandler_t417077A9F428509A6BD4FDCE32738EF7AC022A51* __this, const RuntimeMethod* method) 
{
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionItems::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionItems__ctor_mA8E1C9ABA3732C84B2771AE883AEE893970CAAFF (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_0 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_0, Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_RuntimeMethod_var);
		ConnectionItems__ctor_mA32F094EE2E64E1EEE292D7D002A7F0E08322625(__this, L_0, NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionItems::.ctor(System.Collections.Generic.IDictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionItems__ctor_mA32F094EE2E64E1EEE292D7D002A7F0E08322625 (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, RuntimeObject* ___items0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___items0;
		__this->___U3CItemsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CItemsU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.Object,System.Object> Microsoft.AspNetCore.Connections.ConnectionItems::get_Items()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247 (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CItemsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Object Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.IDictionary<System.Object,System.Object>.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionItems_System_Collections_Generic_IDictionaryU3CSystem_ObjectU2CSystem_ObjectU3E_get_Item_m3E539F5F082024D9C9C1C05007959F43C70707B0 (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline(__this, NULL);
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		return NULL;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.IDictionary<System.Object,System.Object>.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionItems_System_Collections_Generic_IDictionaryU3CSystem_ObjectU2CSystem_ObjectU3E_set_Item_mB8A547A8D77DD1EF7F8F1456C2E73C96F78A58F3 (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline(__this, NULL);
		RuntimeObject* L_1 = ___key0;
		RuntimeObject* L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.IDictionary<System.Object,System.Object>.Add(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionItems_System_Collections_Generic_IDictionaryU3CSystem_ObjectU2CSystem_ObjectU3E_Add_mA1F5F35309FF3F76190C69B02A3C1038EB691D06 (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline(__this, NULL);
		RuntimeObject* L_1 = ___key0;
		RuntimeObject* L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Add(TKey,TValue) */, IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.IDictionary<System.Object,System.Object>.ContainsKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionItems_System_Collections_Generic_IDictionaryU3CSystem_ObjectU2CSystem_ObjectU3E_ContainsKey_mD8A8D8A6229EE9D8ECD17D2F3B76951BE89C0AAB (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline(__this, NULL);
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.IDictionary<System.Object,System.Object>.get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionItems_System_Collections_Generic_IDictionaryU3CSystem_ObjectU2CSystem_ObjectU3E_get_Keys_m6D2E8E1E113CF54C4C18D49A21B75268F2F22B11 (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Keys() */, IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.IDictionary<System.Object,System.Object>.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionItems_System_Collections_Generic_IDictionaryU3CSystem_ObjectU2CSystem_ObjectU3E_Remove_mEE29DE0189FFE068D9E9BD33A493D203FBA5299A (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline(__this, NULL);
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Remove(TKey) */, IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Boolean Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.IDictionary<System.Object,System.Object>.TryGetValue(System.Object,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionItems_System_Collections_Generic_IDictionaryU3CSystem_ObjectU2CSystem_ObjectU3E_TryGetValue_m84DEF6697237BC0BB2E8688271BA8ECB69A8998F (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline(__this, NULL);
		RuntimeObject* L_1 = ___key0;
		RuntimeObject** L_2 = ___value1;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.IDictionary<System.Object,System.Object>.get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionItems_System_Collections_Generic_IDictionaryU3CSystem_ObjectU2CSystem_ObjectU3E_get_Values_m959BF16407C77696EBA0A1C914C5E254D824C5A1 (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Values() */, IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.Add(System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionItems_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_ObjectU2CSystem_ObjectU3EU3E_Add_mA33E7CE8E06D274552355CBCDB70D64A759F223B (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t1577F0DDE3B34F1E97BB144908224A716AE1C2A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline(__this, NULL);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1 = ___item0;
		NullCheck(L_0);
		InterfaceActionInvoker1< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T) */, ICollection_1_t1577F0DDE3B34F1E97BB144908224A716AE1C2A1_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionItems_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_ObjectU2CSystem_ObjectU3EU3E_Clear_mA6C3EE3D9976888D112D02FA138E62C343AC6379 (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t1577F0DDE3B34F1E97BB144908224A716AE1C2A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear() */, ICollection_1_t1577F0DDE3B34F1E97BB144908224A716AE1C2A1_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Boolean Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.Contains(System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionItems_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_ObjectU2CSystem_ObjectU3EU3E_Contains_mE58FE881577842C861D63EC7EA5E247E1F1D43FE (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t1577F0DDE3B34F1E97BB144908224A716AE1C2A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline(__this, NULL);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1 = ___item0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T) */, ICollection_1_t1577F0DDE3B34F1E97BB144908224A716AE1C2A1_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.CopyTo(System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionItems_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_ObjectU2CSystem_ObjectU3EU3E_CopyTo_mDB4E9A837B4D7862E1D226973B8FC14131306C34 (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t1577F0DDE3B34F1E97BB144908224A716AE1C2A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline(__this, NULL);
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck(L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32) */, ICollection_1_t1577F0DDE3B34F1E97BB144908224A716AE1C2A1_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Int32 Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionItems_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_ObjectU2CSystem_ObjectU3EU3E_get_Count_mB00DED9314842F3C59A7253E19594D8B8254583F (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t1577F0DDE3B34F1E97BB144908224A716AE1C2A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, ICollection_1_t1577F0DDE3B34F1E97BB144908224A716AE1C2A1_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionItems_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_ObjectU2CSystem_ObjectU3EU3E_get_IsReadOnly_m62E3C0956E5BC903D3C0CCE23FAF35487D739B49 (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t1577F0DDE3B34F1E97BB144908224A716AE1C2A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_IsReadOnly() */, ICollection_1_t1577F0DDE3B34F1E97BB144908224A716AE1C2A1_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.Remove(System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConnectionItems_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_ObjectU2CSystem_ObjectU3EU3E_Remove_mE196366C8CCAEBC0623FCE7C0262A5B9FCEC3A84 (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline(__this, NULL);
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&___item0), KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline((&___item0), KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_RuntimeMethod_var);
		RuntimeObject* L_4 = V_0;
		bool L_5;
		L_5 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_6;
		L_6 = ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline(__this, NULL);
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&___item0), KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_RuntimeMethod_var);
		NullCheck(L_6);
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Remove(TKey) */, IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED_il2cpp_TypeInfo_var, L_6, L_7);
		return L_8;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>> Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionItems_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_ObjectU2CSystem_ObjectU3EU3E_GetEnumerator_m27F7357DE3E98A4A2B02B850A4C4E341BC84E206 (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator Microsoft.AspNetCore.Connections.ConnectionItems::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionItems_System_Collections_IEnumerable_GetEnumerator_mCBC43504144BA9E05EA335AE2CBBAA984ED91203 (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50_il2cpp_TypeInfo_var, L_0);
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
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext__ctor_m3E247FCDA1822B16D66C9D3E10D6CADF231654E5 (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		DefaultConnectionContext__ctor_m4A13BAFACB93E455F9CB0A7023EADF7F266EAB4D(__this, L_1, NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext__ctor_m4A13BAFACB93E455F9CB0A7023EADF7F266EAB4D (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFeatureCollection_Set_TisIConnectionEndPointFeature_tE6C15E679D0FA4DD53120BE703EAF28626B7CDDB_mB988FB6A872317589071E103114702F11A38BDE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFeatureCollection_Set_TisIConnectionIdFeature_t13D89CD9B75EC3EDD2D035C5323A27BB1BAED227_m09DB46446A4DFF8AE1BF3BD79131B393A3028EC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFeatureCollection_Set_TisIConnectionItemsFeature_tCDC9C8EFE8BF99926CDFE5991C97055A693B27F0_mB554251FA5C48DABE8B955840AE7A911B37A49F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFeatureCollection_Set_TisIConnectionLifetimeFeature_t0F0E789C8323541D429E6D48DD896732761545D3_m6F303437FB1B469C5026F6091089E225C8006CE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFeatureCollection_Set_TisIConnectionTransportFeature_t977639FE92595385FF45FEE677CF41671AE51BA3_m765EEA95C47AF9755BA54AB73124B81147CB491F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFeatureCollection_Set_TisIConnectionUserFeature_t9B07915FD680FEB0BA095A0937702D9575A0A88F_m6098F683D012588D81804620290C57C0AF0BEDA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)il2cpp_codegen_object_new(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C(L_0, NULL);
		__this->____connectionClosedTokenSource_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____connectionClosedTokenSource_3), (void*)L_0);
		ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* L_1 = (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3*)il2cpp_codegen_object_new(ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ConnectionItems__ctor_mA8E1C9ABA3732C84B2771AE883AEE893970CAAFF(L_1, NULL);
		__this->___U3CItemsU3Ek__BackingField_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CItemsU3Ek__BackingField_7), (void*)L_1);
		ConnectionContext__ctor_m524B6301BC7651330FD746C06D52943DC6A658F1(__this, NULL);
		String_t* L_2 = ___id0;
		VirtualActionInvoker1< String_t* >::Invoke(6 /* System.Void Microsoft.AspNetCore.Connections.BaseConnectionContext::set_ConnectionId(System.String) */, __this, L_2);
		FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6* L_3 = (FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6*)il2cpp_codegen_object_new(FeatureCollection_t55884952F26C79D015D3420AF3FFEA14A8055BB6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		FeatureCollection__ctor_m2B04E053D56130600AC53F5A88531DD175ED54D2(L_3, NULL);
		__this->___U3CFeaturesU3Ek__BackingField_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFeaturesU3Ek__BackingField_5), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Connections.BaseConnectionContext::get_Features() */, __this);
		NullCheck(L_4);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IFeatureCollection_Set_TisIConnectionUserFeature_t9B07915FD680FEB0BA095A0937702D9575A0A88F_m6098F683D012588D81804620290C57C0AF0BEDA4_RuntimeMethod_var, L_4, __this);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Connections.BaseConnectionContext::get_Features() */, __this);
		NullCheck(L_5);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IFeatureCollection_Set_TisIConnectionItemsFeature_tCDC9C8EFE8BF99926CDFE5991C97055A693B27F0_mB554251FA5C48DABE8B955840AE7A911B37A49F0_RuntimeMethod_var, L_5, __this);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Connections.BaseConnectionContext::get_Features() */, __this);
		NullCheck(L_6);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IFeatureCollection_Set_TisIConnectionIdFeature_t13D89CD9B75EC3EDD2D035C5323A27BB1BAED227_m09DB46446A4DFF8AE1BF3BD79131B393A3028EC1_RuntimeMethod_var, L_6, __this);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Connections.BaseConnectionContext::get_Features() */, __this);
		NullCheck(L_7);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IFeatureCollection_Set_TisIConnectionTransportFeature_t977639FE92595385FF45FEE677CF41671AE51BA3_m765EEA95C47AF9755BA54AB73124B81147CB491F_RuntimeMethod_var, L_7, __this);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Connections.BaseConnectionContext::get_Features() */, __this);
		NullCheck(L_8);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IFeatureCollection_Set_TisIConnectionLifetimeFeature_t0F0E789C8323541D429E6D48DD896732761545D3_m6F303437FB1B469C5026F6091089E225C8006CE7_RuntimeMethod_var, L_8, __this);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Connections.BaseConnectionContext::get_Features() */, __this);
		NullCheck(L_9);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IFeatureCollection_Set_TisIConnectionEndPointFeature_tE6C15E679D0FA4DD53120BE703EAF28626B7CDDB_mB988FB6A872317589071E103114702F11A38BDE5_RuntimeMethod_var, L_9, __this);
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_10 = __this->____connectionClosedTokenSource_3;
		NullCheck(L_10);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11;
		L_11 = CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4(L_10, NULL);
		VirtualActionInvoker1< CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(11 /* System.Void Microsoft.AspNetCore.Connections.BaseConnectionContext::set_ConnectionClosed(System.Threading.CancellationToken) */, __this, L_11);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::.ctor(System.String,System.IO.Pipelines.IDuplexPipe,System.IO.Pipelines.IDuplexPipe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext__ctor_mC6CD156F807ECD17A86998C8A5BFD8B738DF65AA (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, String_t* ___id0, RuntimeObject* ___transport1, RuntimeObject* ___application2, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___id0;
		DefaultConnectionContext__ctor_m4A13BAFACB93E455F9CB0A7023EADF7F266EAB4D(__this, L_0, NULL);
		RuntimeObject* L_1 = ___transport1;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(20 /* System.Void Microsoft.AspNetCore.Connections.ConnectionContext::set_Transport(System.IO.Pipelines.IDuplexPipe) */, __this, L_1);
		RuntimeObject* L_2 = ___application2;
		DefaultConnectionContext_set_Application_mD12F1057D3F696617F745B322EBCC84BBF0FBC7B_inline(__this, L_2, NULL);
		return;
	}
}
// System.String Microsoft.AspNetCore.Connections.DefaultConnectionContext::get_ConnectionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultConnectionContext_get_ConnectionId_mFE4D2EE4CEF248BC329A798F338D3BD37C5D11C2 (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CConnectionIdU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::set_ConnectionId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_ConnectionId_m0B6A2A2877B3634DEA8CFEE96C1E68EA1811EB90 (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CConnectionIdU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConnectionIdU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// Microsoft.AspNetCore.Http.Features.IFeatureCollection Microsoft.AspNetCore.Connections.DefaultConnectionContext::get_Features()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultConnectionContext_get_Features_m2123CC6B3A45EC656C7ED9323A0DCF91EEE41959 (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CFeaturesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Security.Claims.ClaimsPrincipal Microsoft.AspNetCore.Connections.DefaultConnectionContext::get_User()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClaimsPrincipal_t89FDDE5202B3ACA5770F1BE38D14615C94086F2D* DefaultConnectionContext_get_User_m1594C5B533A4FA9FB6F6F32F08A291C712477D49 (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, const RuntimeMethod* method) 
{
	{
		ClaimsPrincipal_t89FDDE5202B3ACA5770F1BE38D14615C94086F2D* L_0 = __this->___U3CUserU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::set_User(System.Security.Claims.ClaimsPrincipal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_User_m5085F3D4895A860ADA910F9C3EECAB20A94DC60F (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, ClaimsPrincipal_t89FDDE5202B3ACA5770F1BE38D14615C94086F2D* ___value0, const RuntimeMethod* method) 
{
	{
		ClaimsPrincipal_t89FDDE5202B3ACA5770F1BE38D14615C94086F2D* L_0 = ___value0;
		__this->___U3CUserU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.Object,System.Object> Microsoft.AspNetCore.Connections.DefaultConnectionContext::get_Items()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultConnectionContext_get_Items_m89D64BF0C824C59C97AABBC88E52D6BBADD6E448 (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CItemsU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::set_Items(System.Collections.Generic.IDictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_Items_m7CBF5439324F4368942814CBF503146E04D5390A (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CItemsU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CItemsU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.IO.Pipelines.IDuplexPipe Microsoft.AspNetCore.Connections.DefaultConnectionContext::get_Application()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultConnectionContext_get_Application_mEAC443A62FCA4C8D7D7D3B5C44A784A40FCE7F3D (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CApplicationU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::set_Application(System.IO.Pipelines.IDuplexPipe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_Application_mD12F1057D3F696617F745B322EBCC84BBF0FBC7B (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CApplicationU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CApplicationU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.IO.Pipelines.IDuplexPipe Microsoft.AspNetCore.Connections.DefaultConnectionContext::get_Transport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultConnectionContext_get_Transport_mB8372F0615549EDD76441EAEED2B610A476BE427 (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTransportU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::set_Transport(System.IO.Pipelines.IDuplexPipe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_Transport_m26BD8933A03DB72AD196F5975FC6F7A475CF8B7F (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CTransportU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTransportU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Threading.CancellationToken Microsoft.AspNetCore.Connections.DefaultConnectionContext::get_ConnectionClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED DefaultConnectionContext_get_ConnectionClosed_m630F31A479D8B82BEC9DF05E81E966844661704F (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, const RuntimeMethod* method) 
{
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->___U3CConnectionClosedU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::set_ConnectionClosed(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_ConnectionClosed_mB952EA65FC2F501794B3681922E1485ED5B2DF24 (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___value0, const RuntimeMethod* method) 
{
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___value0;
		__this->___U3CConnectionClosedU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CConnectionClosedU3Ek__BackingField_10))->____source_0), (void*)NULL);
		return;
	}
}
// System.Net.EndPoint Microsoft.AspNetCore.Connections.DefaultConnectionContext::get_LocalEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* DefaultConnectionContext_get_LocalEndPoint_mD4870196374E9B4E8979413DF02B2721024CA0DE (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = __this->___U3CLocalEndPointU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::set_LocalEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_LocalEndPoint_m9BBF3E39F6E008D850F80F70920CD8E69982FBE7 (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___value0, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___value0;
		__this->___U3CLocalEndPointU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLocalEndPointU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// System.Net.EndPoint Microsoft.AspNetCore.Connections.DefaultConnectionContext::get_RemoteEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* DefaultConnectionContext_get_RemoteEndPoint_mE08ED855075BFEB9B2F519A7E1AFBB6D28FA42DD (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = __this->___U3CRemoteEndPointU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::set_RemoteEndPoint(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_RemoteEndPoint_m24D3F104CA7E656F5E21A2EEB793310AF2144095 (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___value0, const RuntimeMethod* method) 
{
	{
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_0 = ___value0;
		__this->___U3CRemoteEndPointU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRemoteEndPointU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext::Abort(Microsoft.AspNetCore.Connections.ConnectionAbortedException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConnectionContext_Abort_m10C80286CF1AC40A9A916C921789420EF1C58289 (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, ConnectionAbortedException_tCEA39F0E36681CB0895178FC04862FA69F1C12A9* ___abortReason0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAbortU3Eb__39_0_m341DA14C44D2DA972A0BE3C1A23ED1411F293D7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* G_B2_0 = NULL;
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_il2cpp_TypeInfo_var);
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_0 = ((U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_il2cpp_TypeInfo_var))->___U3CU3E9__39_0_1;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_il2cpp_TypeInfo_var);
		U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900* L_2 = ((U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_3 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CAbortU3Eb__39_0_m341DA14C44D2DA972A0BE3C1A23ED1411F293D7B_RuntimeMethod_var), NULL);
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_4 = L_3;
		((U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_il2cpp_TypeInfo_var))->___U3CU3E9__39_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_il2cpp_TypeInfo_var))->___U3CU3E9__39_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_5 = __this->____connectionClosedTokenSource_3;
		bool L_6;
		L_6 = ThreadPool_UnsafeQueueUserWorkItem_m05CF00E355CE07D625386779E3F3D3D2341FEE86(G_B2_0, L_5, NULL);
		return;
	}
}
// System.Threading.Tasks.ValueTask Microsoft.AspNetCore.Connections.DefaultConnectionContext::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F DefaultConnectionContext_DisposeAsync_mBB0C9592D72C476F0B19ED5F482C19BAC4D70715 (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, const RuntimeMethod* method) 
{
	{
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = __this->____connectionClosedTokenSource_3;
		NullCheck(L_0);
		CancellationTokenSource_Dispose_m5096059D16078E130BB87D268D4871849B53449B(L_0, NULL);
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_1;
		L_1 = BaseConnectionContext_DisposeAsync_m16A3DB0D5D857D173ED394CC087CF083271D9B15(__this, NULL);
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
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m94A0FBC3B4327A66576B074B628058088F721C95 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900* L_0 = (U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900*)il2cpp_codegen_object_new(U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mEE86474018E27AD6885FB90887721D6BB425E2D3(L_0, NULL);
		((U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEE86474018E27AD6885FB90887721D6BB425E2D3 (U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.DefaultConnectionContext/<>c::<Abort>b__39_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAbortU3Eb__39_0_m341DA14C44D2DA972A0BE3C1A23ED1411F293D7B (U3CU3Ec_tCF23CD52813CAEA2DB76964BC83A8BFBEC748900* __this, RuntimeObject* ___cts0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___cts0;
		NullCheck(((CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var)));
		CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B(((CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var)), NULL);
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
// System.Void Microsoft.AspNetCore.Connections.AddressInUseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressInUseException__ctor_m1272EFAD276597A5D79F19696FCE64AC2AB75E49 (AddressInUseException_t741BAAE42E542C0FD9727F318E8D529CE3DD402D* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(__this, L_0, NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.AddressInUseException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressInUseException__ctor_mF1C44E1F39B92F10082958CBE4C4B882AAF804D3 (AddressInUseException_t741BAAE42E542C0FD9727F318E8D529CE3DD402D* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___inner1;
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(__this, L_0, L_1, NULL);
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionAbortedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionAbortedException__ctor_mDAFDC1E52BDE05FDF9802DC3AD9ADCBC3E257856 (ConnectionAbortedException_tCEA39F0E36681CB0895178FC04862FA69F1C12A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13DCDFFEB463790670FB61F0955FDAE4CFA8DF73);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConnectionAbortedException__ctor_mA4AA50CCA113597CACEF3E041F8C56B570EDB3C6(__this, _stringLiteral13DCDFFEB463790670FB61F0955FDAE4CFA8DF73, NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionAbortedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionAbortedException__ctor_mA4AA50CCA113597CACEF3E041F8C56B570EDB3C6 (ConnectionAbortedException_tCEA39F0E36681CB0895178FC04862FA69F1C12A9* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		OperationCanceledException__ctor_m980BF7ABCE5C603648AA46FB4C75437D110D0B5D(__this, L_0, NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionAbortedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionAbortedException__ctor_m4CE001C63437A7CD710D50D56C5724B94A873FA3 (ConnectionAbortedException_tCEA39F0E36681CB0895178FC04862FA69F1C12A9* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___inner1;
		OperationCanceledException__ctor_m26EBF695EF42CD2A1D0CAFD2F60DF1151E22D17F(__this, L_0, L_1, NULL);
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
// System.Void Microsoft.AspNetCore.Connections.ConnectionResetException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResetException__ctor_mF4FF4634D846DCF28410231D075595383B53234B (ConnectionResetException_t99ED4BC36E2026243A53B0333F2E589108E62FBF* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(__this, L_0, NULL);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.ConnectionResetException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResetException__ctor_m1CEE23ED6348CBE6FE4D73DB009E842098CE7039 (ConnectionResetException_t99ED4BC36E2026243A53B0333F2E589108E62FBF* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___inner1;
		IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B(__this, L_0, L_1, NULL);
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
// System.Void Microsoft.AspNetCore.Connections.FileHandleEndPoint::.ctor(System.UInt64,Microsoft.AspNetCore.Connections.FileHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileHandleEndPoint__ctor_mA6B0B0E0BFDD394F918366560181ED6F02A8BF02 (FileHandleEndPoint_tAE3ACC024998749ED28ADCCB3595DD94FF05A518* __this, uint64_t ___fileHandle0, int32_t ___fileHandleType1, const RuntimeMethod* method) 
{
	{
		EndPoint__ctor_m4CD393A3D801B696473199A2D2F7EC80E8036F5D(__this, NULL);
		uint64_t L_0 = ___fileHandle0;
		__this->___U3CFileHandleU3Ek__BackingField_0 = L_0;
		int32_t L_1 = ___fileHandleType1;
		__this->___U3CFileHandleTypeU3Ek__BackingField_1 = L_1;
		int32_t L_2 = ___fileHandleType1;
		if ((!(((uint32_t)L_2) > ((uint32_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_3 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileHandleEndPoint__ctor_mA6B0B0E0BFDD394F918366560181ED6F02A8BF02_RuntimeMethod_var)));
	}

IL_001e:
	{
		return;
	}
}
// System.UInt64 Microsoft.AspNetCore.Connections.FileHandleEndPoint::get_FileHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FileHandleEndPoint_get_FileHandle_m5F471C1925E56D3CEF714A5117706F8ED998B87D (FileHandleEndPoint_tAE3ACC024998749ED28ADCCB3595DD94FF05A518* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___U3CFileHandleU3Ek__BackingField_0;
		return L_0;
	}
}
// Microsoft.AspNetCore.Connections.FileHandleType Microsoft.AspNetCore.Connections.FileHandleEndPoint::get_FileHandleType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FileHandleEndPoint_get_FileHandleType_mD9144737BFF7C39A5D9B1090EEB1B8286FB443F8 (FileHandleEndPoint_tAE3ACC024998749ED28ADCCB3595DD94FF05A518* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFileHandleTypeU3Ek__BackingField_1;
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
// System.Void Microsoft.AspNetCore.Connections.UriEndPoint::.ctor(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriEndPoint__ctor_mA7B5F0B6F746037FD4AE11A9DB78991E35A3C1A6 (UriEndPoint_tFA8B3694ECDAE7B72FB863586BB9004895AE92DD* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri0, const RuntimeMethod* method) 
{
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* G_B2_0 = NULL;
	UriEndPoint_tFA8B3694ECDAE7B72FB863586BB9004895AE92DD* G_B2_1 = NULL;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* G_B1_0 = NULL;
	UriEndPoint_tFA8B3694ECDAE7B72FB863586BB9004895AE92DD* G_B1_1 = NULL;
	{
		EndPoint__ctor_m4CD393A3D801B696473199A2D2F7EC80E8036F5D(__this, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___uri0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10C63C8C602DD5E38BE4A758C90EBAC324CD3E69)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UriEndPoint__ctor_mA7B5F0B6F746037FD4AE11A9DB78991E35A3C1A6_RuntimeMethod_var)));
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		G_B2_1->___U3CUriU3Ek__BackingField_0 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___U3CUriU3Ek__BackingField_0), (void*)G_B2_0);
		return;
	}
}
// System.Uri Microsoft.AspNetCore.Connections.UriEndPoint::get_Uri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* UriEndPoint_get_Uri_mA1AAB03A730B0161B041773C93E721FFF83EFE1E (UriEndPoint_tFA8B3694ECDAE7B72FB863586BB9004895AE92DD* __this, const RuntimeMethod* method) 
{
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___U3CUriU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String Microsoft.AspNetCore.Connections.UriEndPoint::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UriEndPoint_ToString_m48128BAAE86B79D1291968A703A6C4D3AFB381E4 (UriEndPoint_tFA8B3694ECDAE7B72FB863586BB9004895AE92DD* __this, const RuntimeMethod* method) 
{
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0;
		L_0 = UriEndPoint_get_Uri_mA1AAB03A730B0161B041773C93E721FFF83EFE1E_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
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
// System.IServiceProvider Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionBuilder::get_ApplicationServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultiplexedConnectionBuilder_get_ApplicationServices_m49E3FF268BCECD23FECBF148ADE78CA305BDD319 (MultiplexedConnectionBuilder_t533FAC2EEB9BF069237F8C0EC7B1DE8835EDDB98* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CApplicationServicesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionBuilder::.ctor(System.IServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplexedConnectionBuilder__ctor_m56DDC8DEFD15881DF228565758228B35580F321B (MultiplexedConnectionBuilder_t533FAC2EEB9BF069237F8C0EC7B1DE8835EDDB98* __this, RuntimeObject* ___applicationServices0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7CC38969032F703713B07A4677D95F74F59DB9D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3A2CFA79535DAF064F8592CBC052C5CF6EA6EF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3A2CFA79535DAF064F8592CBC052C5CF6EA6EF63* L_0 = (List_1_t3A2CFA79535DAF064F8592CBC052C5CF6EA6EF63*)il2cpp_codegen_object_new(List_1_t3A2CFA79535DAF064F8592CBC052C5CF6EA6EF63_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7CC38969032F703713B07A4677D95F74F59DB9D8(L_0, List_1__ctor_m7CC38969032F703713B07A4677D95F74F59DB9D8_RuntimeMethod_var);
		__this->____components_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____components_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_1 = ___applicationServices0;
		__this->___U3CApplicationServicesU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CApplicationServicesU3Ek__BackingField_1), (void*)L_1);
		return;
	}
}
// Microsoft.AspNetCore.Connections.Experimental.IMultiplexedConnectionBuilder Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionBuilder::Use(System.Func`2<Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultiplexedConnectionBuilder_Use_mA1124BB97F78F3139C34089B71B6F0DC7F909843 (MultiplexedConnectionBuilder_t533FAC2EEB9BF069237F8C0EC7B1DE8835EDDB98* __this, Func_2_tCA0F70EA96DEE508D3DDED8AF26BF05F3A47200E* ___middleware0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tC7D2EE6D54C56127F341C61A3E514E6F3AB43651_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____components_0;
		Func_2_tCA0F70EA96DEE508D3DDED8AF26BF05F3A47200E* L_1 = ___middleware0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Func_2_tCA0F70EA96DEE508D3DDED8AF26BF05F3A47200E* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Func`2<Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate>>::Add(T) */, ICollection_1_tC7D2EE6D54C56127F341C61A3E514E6F3AB43651_il2cpp_TypeInfo_var, L_0, L_1);
		return __this;
	}
}
// Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionBuilder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* MultiplexedConnectionBuilder_Build_mFD2B122A0FA37F24AB39C53B5F5603F285A10784 (MultiplexedConnectionBuilder_t533FAC2EEB9BF069237F8C0EC7B1DE8835EDDB98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Reverse_TisFunc_2_tCA0F70EA96DEE508D3DDED8AF26BF05F3A47200E_m25141522776F3C3EFE1FFF6529D5C71FABE31285_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t438E38EC43C75093D1151A4221888DEC0F54DDB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE7C3B18FC120FEBAB253C60BB2CA6EFD02F97176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CBuildU3Eb__6_0_m58BADFB518A425C31B8307D587C2A05453E9CE25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* G_B2_0 = NULL;
	MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_il2cpp_TypeInfo_var);
		MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* L_0 = ((U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
		MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_il2cpp_TypeInfo_var);
		U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3* L_2 = ((U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* L_3 = (MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF*)il2cpp_codegen_object_new(MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MultiplexedConnectionDelegate__ctor_mD9B0DCCD10349C6B80214701659F2F779507E50E(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CBuildU3Eb__6_0_m58BADFB518A425C31B8307D587C2A05453E9CE25_RuntimeMethod_var), NULL);
		MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* L_4 = L_3;
		((U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		V_0 = G_B2_0;
		RuntimeObject* L_5 = __this->____components_0;
		RuntimeObject* L_6;
		L_6 = Enumerable_Reverse_TisFunc_2_tCA0F70EA96DEE508D3DDED8AF26BF05F3A47200E_m25141522776F3C3EFE1FFF6529D5C71FABE31285(L_5, Enumerable_Reverse_TisFunc_2_tCA0F70EA96DEE508D3DDED8AF26BF05F3A47200E_m25141522776F3C3EFE1FFF6529D5C71FABE31285_RuntimeMethod_var);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Func`2<Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate>>::GetEnumerator() */, IEnumerable_1_t438E38EC43C75093D1151A4221888DEC0F54DDB9_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_1;
					if (!L_8)
					{
						goto IL_0053;
					}
				}
				{
					RuntimeObject* L_9 = V_1;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_0053:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0040_1;
			}

IL_0033_1:
			{
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				Func_2_tCA0F70EA96DEE508D3DDED8AF26BF05F3A47200E* L_11;
				L_11 = InterfaceFuncInvoker0< Func_2_tCA0F70EA96DEE508D3DDED8AF26BF05F3A47200E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Func`2<Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate,Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate>>::get_Current() */, IEnumerator_1_tE7C3B18FC120FEBAB253C60BB2CA6EFD02F97176_il2cpp_TypeInfo_var, L_10);
				MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* L_12 = V_0;
				NullCheck(L_11);
				MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* L_13;
				L_13 = Func_2_Invoke_m9AD97CCAAAFF850AB9F30C894DBE3B68DBF81C53_inline(L_11, L_12, NULL);
				V_0 = L_13;
			}

IL_0040_1:
			{
				RuntimeObject* L_14 = V_1;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0033_1;
				}
			}
			{
				goto IL_0054;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* L_16 = V_0;
		return L_16;
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
// System.Void Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionBuilder/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA1B05503CC2F16970E5AA313154920E3CD9F8471 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3* L_0 = (U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3*)il2cpp_codegen_object_new(U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mE2C12E75578D0D82965A2470C0B698B3C54581F2(L_0, NULL);
		((U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE2C12E75578D0D82965A2470C0B698B3C54581F2 (U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionBuilder/<>c::<Build>b__6_0(Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* U3CU3Ec_U3CBuildU3Eb__6_0_m58BADFB518A425C31B8307D587C2A05453E9CE25 (U3CU3Ec_tE003B5A8F05D50E011D357E511CDBAF9B7FB71B3* __this, MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1* ___features0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0;
		L_0 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
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
// System.Void Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplexedConnectionContext__ctor_mFDA1A4DC18922AC7F8F8C97A141F60A97ADC6A45 (MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1* __this, const RuntimeMethod* method) 
{
	{
		BaseConnectionContext__ctor_m12224E58C2C9D3103BEFC62C9290ED983B945C82(__this, NULL);
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
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560_Multicast(MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* __this, MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1* ___connection0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* currentDelegate = reinterpret_cast<MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF*>(delegatesToInvoke[i]);
		typedef Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*FunctionPointerType) (RuntimeObject*, MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___connection0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560_OpenInst(MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* __this, MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1* ___connection0, const RuntimeMethod* method)
{
	NullCheck(___connection0);
	typedef Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*FunctionPointerType) (MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___connection0, method);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560_OpenStatic(MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* __this, MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1* ___connection0, const RuntimeMethod* method)
{
	typedef Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*FunctionPointerType) (MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___connection0, method);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560_OpenStaticInvoker(MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* __this, MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1* ___connection0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1* >::Invoke(__this->___method_ptr_0, method, NULL, ___connection0);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560_ClosedStaticInvoker(MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* __this, MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1* ___connection0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, RuntimeObject*, MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___connection0);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560_OpenVirtual(MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* __this, MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1* ___connection0, const RuntimeMethod* method)
{
	NullCheck(___connection0);
	return VirtualFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(il2cpp_codegen_method_get_slot(method), ___connection0);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560_OpenInterface(MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* __this, MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1* ___connection0, const RuntimeMethod* method)
{
	NullCheck(___connection0);
	return InterfaceFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___connection0);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560_OpenGenericVirtual(MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* __this, MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1* ___connection0, const RuntimeMethod* method)
{
	NullCheck(___connection0);
	return GenericVirtualFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(method, ___connection0);
}
Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560_OpenGenericInterface(MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* __this, MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1* ___connection0, const RuntimeMethod* method)
{
	NullCheck(___connection0);
	return GenericInterfaceFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(method, ___connection0);
}
// System.Void Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiplexedConnectionDelegate__ctor_mD9B0DCCD10349C6B80214701659F2F779507E50E (MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560_Multicast;
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate::Invoke(Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* MultiplexedConnectionDelegate_Invoke_mDF817606234862BD44D63012F0A04E05AB5F7560 (MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* __this, MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1* ___connection0, const RuntimeMethod* method) 
{
	typedef Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*FunctionPointerType) (RuntimeObject*, MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___connection0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate::BeginInvoke(Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionContext,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultiplexedConnectionDelegate_BeginInvoke_mF4602D4ED999A602F2BBA1CA4D8A674AFDA4FFA7 (MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* __this, MultiplexedConnectionContext_t75E2D0BE4F22BE4A48034ECAB29569AB0FD84DD1* ___connection0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___connection0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Threading.Tasks.Task Microsoft.AspNetCore.Connections.Experimental.MultiplexedConnectionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* MultiplexedConnectionDelegate_EndInvoke_m188C6ABD91C3B033E96794EDD75EB902A9D53EB0 (MultiplexedConnectionDelegate_t8F255ED6DC4B6CDF7FC9BCDF7B17E9D4354C23DF* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->____innerException_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ConnectionDelegate_Invoke_mCDFB1AA4E52F725CA4C3DAC2F0A256313AB8EACA_inline (ConnectionDelegate_t746E3EBA79ED1F39EDF1E858A2FC6C940B813F18* __this, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D* ___connection0, const RuntimeMethod* method) 
{
	typedef Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*FunctionPointerType) (RuntimeObject*, ConnectionContext_tE35872760C35462C28AFA1D42FD21C11860E602D*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___connection0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConnectionItems_get_Items_m3242E4609BF410DF3C24BD4A11426D42FADEE247_inline (ConnectionItems_tA5F9D3FB14A25D8BD7C16C083E4DE76DAE1925F3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CItemsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DefaultConnectionContext_set_Application_mD12F1057D3F696617F745B322EBCC84BBF0FBC7B_inline (DefaultConnectionContext_t526B11F18C66B3563C4B77057D4B1590810B5798* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CApplicationU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CApplicationU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* UriEndPoint_get_Uri_mA1AAB03A730B0161B041773C93E721FFF83EFE1E_inline (UriEndPoint_tFA8B3694ECDAE7B72FB863586BB9004895AE92DD* __this, const RuntimeMethod* method) 
{
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___U3CUriU3Ek__BackingField_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
