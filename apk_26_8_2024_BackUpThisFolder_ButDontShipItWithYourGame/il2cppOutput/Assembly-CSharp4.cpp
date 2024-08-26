#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
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

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
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
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel
struct IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62;
// System.IOAsyncCallback
struct IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// System.Net.IPHostEntry
struct IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490;
// uPLibrary.Networking.M2Mqtt.Internal.InternalEvent
struct InternalEvent_tC239B49C40C425EF2A2775CA3DE46B3F39DD72BB;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException
struct MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859;
// uPLibrary.Networking.M2Mqtt.Session.MqttClientSession
struct MqttClientSession_t2390D9200EDEDD86184F29FF771535FBA0897AA1;
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException
struct MqttCommunicationException_t016BFB6E56C108061FB2FE6CE77E280AEF4E2EBC;
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttConnectionException
struct MqttConnectionException_t4133D9B042197DC8ACE467698F13BCD634939476;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase
struct MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack
struct MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect
struct MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnectEventArgs
struct MqttMsgConnectEventArgs_tDC1F0CC3DF63277C03DDF6CCD0FDB67408CBDD2A;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext
struct MqttMsgContext_tE731ACDDFB1629FDA8ED42C65A68DC6A7F18E4DE;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgDisconnect
struct MqttMsgDisconnect_tAB8CFF7568901F18C26692D83A7A42EF274580EC;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq
struct MqttMsgPingReq_t5D2F79FE9F7C0678B735A32DBCF68E64023D149D;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp
struct MqttMsgPingResp_t0BCC7EA7F37072B34129A456C5284C19E15DEC7B;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback
struct MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp
struct MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish
struct MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs
struct MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs
struct MqttMsgPublishedEventArgs_t8E13328196C17B2D79751AB851666268175DA0B0;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec
struct MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel
struct MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback
struct MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe
struct MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs
struct MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs
struct MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback
struct MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe
struct MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs
struct MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs
struct MqttMsgUnsubscribedEventArgs_t46F3D712F85B4F54BD19B4355690C775FAC35E5D;
// uPLibrary.Networking.M2Mqtt.MqttNetworkChannel
struct MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C;
// uPLibrary.Networking.M2Mqtt.Session.MqttSession
struct MqttSession_t9CBE2025CB89850878CB6DDD2E8A2253BD80588D;
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttTimeoutException
struct MqttTimeoutException_t43973937D83859B52199C9D855F55A16DFB478A1;
// uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent
struct MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84;
// uPLibrary.Networking.M2Mqtt.Internal.MsgPublishedInternalEvent
struct MsgPublishedInternalEvent_t77F08FECAE4E4CB4F4926233C27C164CADC43873;
// System.Collections.Queue
struct Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// uPLibrary.Networking.M2Mqtt.Utility.WriteTrace
struct WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5;
// uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate
struct QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961;
// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C;
// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgDisconnect_tAB8CFF7568901F18C26692D83A7A42EF274580EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgFlow_t593469B1595349C089C92575E6BE8717A9772868_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPingReq_t5D2F79FE9F7C0678B735A32DBCF68E64023D149D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPingResp_t0BCC7EA7F37072B34129A456C5284C19E15DEC7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral007C04A0DF8705F559207300B106C58F8E308FDC;
IL2CPP_EXTERN_C String_t* _stringLiteral104B875A8B5EC2251F312AB0E6A63BF2351E1919;
IL2CPP_EXTERN_C String_t* _stringLiteral134A5BC016353C36AC521E17B63768B82B9BCD3D;
IL2CPP_EXTERN_C String_t* _stringLiteral16576817F53DF82E7D178FAD65744BD1F22DCADD;
IL2CPP_EXTERN_C String_t* _stringLiteral1F05F385A53C37686A0F0D62F6A95587A4380660;
IL2CPP_EXTERN_C String_t* _stringLiteral214631B825B91100AD363326A29F29251D11EA85;
IL2CPP_EXTERN_C String_t* _stringLiteral27CD295CC1E6AC78ED410A498B4D95A9BC04C355;
IL2CPP_EXTERN_C String_t* _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE72AE7C1BE0D0A3142920BDAA4B27896C11E2B;
IL2CPP_EXTERN_C String_t* _stringLiteral40E78183273E7A7EB88118AE32A5046802C1323A;
IL2CPP_EXTERN_C String_t* _stringLiteral4C69A5ABD36AE74665BC61E90B89CFBA61C28AF8;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84;
IL2CPP_EXTERN_C String_t* _stringLiteral5B62E2B5EAD21CB1CA240884FC41C2983538E241;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA6580C20ED76DE9C202A5BAAC5C5AC79A0B69F;
IL2CPP_EXTERN_C String_t* _stringLiteral5E25278C6D8EFBF66FBDDF1966B58707737A0302;
IL2CPP_EXTERN_C String_t* _stringLiteral6013A4D41D8DCE7521FE81D366DBEBB957AA266D;
IL2CPP_EXTERN_C String_t* _stringLiteral693360C5A1F202D66DB2FE87ECF47A1E0A47B8E9;
IL2CPP_EXTERN_C String_t* _stringLiteral74FB4E4B01F7AE144E63083EC53D9222473FB16B;
IL2CPP_EXTERN_C String_t* _stringLiteral7DDD1ECCF16C3E7724EC716DBB45ABABB8A6BDE2;
IL2CPP_EXTERN_C String_t* _stringLiteral81EF5BEF778AAB25FEF11CFCB72FD28EE589A915;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral90D7DA45FDC50B94D085992496733AAA2278BC9A;
IL2CPP_EXTERN_C String_t* _stringLiteral93DF057C369004121117C6673B3E24C2366F967C;
IL2CPP_EXTERN_C String_t* _stringLiteral972DC3C29D81D1DCE50793C97A574777A78A1A3C;
IL2CPP_EXTERN_C String_t* _stringLiteral9CB0D6CC754B7CE9DE61E479EAF4BCC5070C50FE;
IL2CPP_EXTERN_C String_t* _stringLiteral9FBAF2AC0A0A42D2A1CB1F9F72F2EFB29F3C70FE;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralADB9696F2FAD87DE15432AED421F08A3B655D52C;
IL2CPP_EXTERN_C String_t* _stringLiteralAEC326A6692604AB65616A2EBEDEFA56D4F572A2;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralC007C7DED5CDBA0115FD08526C8AF99FA050B84E;
IL2CPP_EXTERN_C String_t* _stringLiteralC08CAC839B88D8127EF0D900F536BDB8BFD78836;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC547B2F00A9A1E99E291F02403121ED047425195;
IL2CPP_EXTERN_C String_t* _stringLiteralC75761AFD847946FA4E424AAA30BBCCEAF105DB1;
IL2CPP_EXTERN_C String_t* _stringLiteralC9ABEA54E864150EDBDE3863FA7913E6586073BC;
IL2CPP_EXTERN_C String_t* _stringLiteralD0A44DD84CB7856E3402EFE3721DA69F60D04AB9;
IL2CPP_EXTERN_C String_t* _stringLiteralD18BB8748E10A644F72B745C6F647001B495C4A0;
IL2CPP_EXTERN_C String_t* _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
IL2CPP_EXTERN_C String_t* _stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73;
IL2CPP_EXTERN_C String_t* _stringLiteralF11FFD471542CC88349AF88242C2DE74F1E4F415;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgConnack_Parse_mF176898C4A01F203B82F08E60E419DF980989F5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgConnect_GetBytes_m96CF8B8667EC640CA0EF2B1EB65058012F8DA6C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgConnect_Parse_mD438FDC90D31BB76AB101FBA201F2DE0C29C89E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgDisconnect_Parse_m2D045F72A40C3442BF0CA1836A7445B91C1F51CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPingReq_Parse_m6880FA27401A206DF7B3207F89D6B51D637395F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPingResp_Parse_mA79F4E4C3E06E71002BF3A5AFE5EB7BCFA0785D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPuback_Parse_mC85BE03448D7751D6206D8B7324DB15A5FFE3F9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPubcomp_Parse_mFF7E638FF02FFC2634AC319551A3B8493035CDAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPublish_GetBytes_m340EEC3C62DF70AB15B3DD792C5919F5F757FB36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPublish_Parse_m6E5CE86359CFBAC2952E151726CEE05F58DCAB53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPubrec_Parse_m3DB26E5FEB864D49A4DFDC3DCEB29C35B6CFA131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgPubrel_Parse_m17EAD687465D39B4BC2BF31E17D10483E1FA0A3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgSuback_Parse_m47D0130E2A428D6094ED726B3959F94556E85925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgSubscribe_Parse_mD81D31FEB3833854720D69EF53514CC052E82C17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgUnsuback_Parse_m3487BA8F1FE928B7AF963A1FDC039B7C1D5F3065_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgUnsubscribe_GetBytes_m937D276453E8FB292ACBEE1B4BAC08A757B95A54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttMsgUnsubscribe_Parse_mEB4D26A94F7AC4DCEFE93455EAC41CDAB277185F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttNetworkChannel__ctor_m62D2797AC906A025A482EB2B51AF8B748DB84CF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttSslUtility_ToSslPlatformEnum_m0DC1F4FE314F8F3C532650BEBDA7594831478E3E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
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

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// uPLibrary.Networking.M2Mqtt.IPAddressUtility
struct IPAddressUtility_t5FB79A8BE6C4EA674C57D5A5979AB3C8C420D46B  : public RuntimeObject
{
};

// System.Net.IPHostEntry
struct IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490  : public RuntimeObject
{
	// System.String System.Net.IPHostEntry::hostName
	String_t* ___hostName_0;
	// System.String[] System.Net.IPHostEntry::aliases
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___aliases_1;
	// System.Net.IPAddress[] System.Net.IPHostEntry::addressList
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___addressList_2;
	// System.Boolean System.Net.IPHostEntry::isTrustedHost
	bool ___isTrustedHost_3;
};

// uPLibrary.Networking.M2Mqtt.Internal.InternalEvent
struct InternalEvent_tC239B49C40C425EF2A2775CA3DE46B3F39DD72BB  : public RuntimeObject
{
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase
struct MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB  : public RuntimeObject
{
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::type
	uint8_t ___type_50;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::dupFlag
	bool ___dupFlag_51;
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::qosLevel
	uint8_t ___qosLevel_52;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::retain
	bool ___retain_53;
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::messageId
	uint16_t ___messageId_54;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext
struct MqttMsgContext_tE731ACDDFB1629FDA8ED42C65A68DC6A7F18E4DE  : public RuntimeObject
{
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<Message>k__BackingField
	MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* ___U3CMessageU3Ek__BackingField_0;
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_1;
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<Flow>k__BackingField
	int32_t ___U3CFlowU3Ek__BackingField_2;
	// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<Timestamp>k__BackingField
	int32_t ___U3CTimestampU3Ek__BackingField_3;
	// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<Attempt>k__BackingField
	int32_t ___U3CAttemptU3Ek__BackingField_4;
};

// uPLibrary.Networking.M2Mqtt.MqttNetworkChannel
struct MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C  : public RuntimeObject
{
	// System.Net.Security.RemoteCertificateValidationCallback uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::userCertificateValidationCallback
	RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___userCertificateValidationCallback_0;
	// System.Net.Security.LocalCertificateSelectionCallback uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::userCertificateSelectionCallback
	LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___userCertificateSelectionCallback_1;
	// System.String uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::remoteHostName
	String_t* ___remoteHostName_2;
	// System.Net.IPAddress uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::remoteIpAddress
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___remoteIpAddress_3;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::remotePort
	int32_t ___remotePort_4;
	// System.Net.Sockets.Socket uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::socket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket_5;
	// System.Boolean uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::secure
	bool ___secure_6;
	// System.Security.Cryptography.X509Certificates.X509Certificate uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::caCert
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___caCert_7;
	// System.Security.Cryptography.X509Certificates.X509Certificate uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::serverCert
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___serverCert_8;
	// System.Security.Cryptography.X509Certificates.X509Certificate uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::clientCert
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___clientCert_9;
	// uPLibrary.Networking.M2Mqtt.MqttSslProtocols uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::sslProtocol
	int32_t ___sslProtocol_10;
};

// uPLibrary.Networking.M2Mqtt.Session.MqttSession
struct MqttSession_t9CBE2025CB89850878CB6DDD2E8A2253BD80588D  : public RuntimeObject
{
	// System.String uPLibrary.Networking.M2Mqtt.Session.MqttSession::<ClientId>k__BackingField
	String_t* ___U3CClientIdU3Ek__BackingField_0;
	// System.Collections.Hashtable uPLibrary.Networking.M2Mqtt.Session.MqttSession::<InflightMessages>k__BackingField
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___U3CInflightMessagesU3Ek__BackingField_1;
};

// uPLibrary.Networking.M2Mqtt.MqttSslUtility
struct MqttSslUtility_t6638142DB09672951FD371576BD71D1920204E88  : public RuntimeObject
{
};

// System.Collections.Queue
struct Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC  : public RuntimeObject
{
	// System.Object[] System.Collections.Queue::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Queue::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Queue::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Queue::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Queue::_growFactor
	int32_t ____growFactor_4;
	// System.Int32 System.Collections.Queue::_version
	int32_t ____version_5;
	// System.Object System.Collections.Queue::_syncRoot
	RuntimeObject* ____syncRoot_6;
};

// uPLibrary.Networking.M2Mqtt.Utility.QueueExtension
struct QueueExtension_t45EE0560EB571BF3F8CE2E547F58B5F92CDE8867  : public RuntimeObject
{
};

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E  : public RuntimeObject
{
	// System.Net.Sockets.Socket/CachedEventArgs System.Net.Sockets.Socket::_cachedTaskEventArgs
	CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C* ____cachedTaskEventArgs_6;
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_13;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_14;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_15;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_16;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_17;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_18;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___m_Handle_19;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___seed_endpoint_20;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___ReadSem_21;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___WriteSem_22;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_23;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_24;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_25;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_26;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_27;
};

struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_StaticFields
{
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::AcceptCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___AcceptCompletedHandler_0;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::ReceiveCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___ReceiveCompletedHandler_1;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::SendCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___SendCompletedHandler_2;
	// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> System.Net.Sockets.Socket::s_rentedSocketSentinel
	TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___s_rentedSocketSentinel_3;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket::s_rentedInt32Sentinel
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___s_rentedInt32Sentinel_4;
	// System.Threading.Tasks.Task`1<System.Int32> System.Net.Sockets.Socket::s_zeroTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_zeroTask_5;
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_12;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___AcceptAsyncCallback_28;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptReceiveCallback_30;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ConnectAsyncCallback_31;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginConnectCallback_32;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___DisconnectAsyncCallback_33;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginDisconnectCallback_34;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveAsyncCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveCallback_36;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveGenericCallback_37;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveFromAsyncCallback_38;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveFromCallback_39;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendAsyncCallback_40;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginSendGenericCallback_41;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendToAsyncCallback_42;
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

// uPLibrary.Networking.M2Mqtt.Utility.Trace
struct Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF  : public RuntimeObject
{
};

struct Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_StaticFields
{
	// uPLibrary.Networking.M2Mqtt.Utility.TraceLevel uPLibrary.Networking.M2Mqtt.Utility.Trace::TraceLevel
	int32_t ___TraceLevel_0;
	// uPLibrary.Networking.M2Mqtt.Utility.WriteTrace uPLibrary.Networking.M2Mqtt.Utility.Trace::TraceListener
	WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* ___TraceListener_1;
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

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_0;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_1;
};

struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_3;
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

// uPLibrary.Networking.M2Mqtt.Session.MqttClientSession
struct MqttClientSession_t2390D9200EDEDD86184F29FF771535FBA0897AA1  : public MqttSession_t9CBE2025CB89850878CB6DDD2E8A2253BD80588D
{
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack
struct MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::sessionPresent
	bool ___sessionPresent_70;
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::returnCode
	uint8_t ___returnCode_71;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect
struct MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::protocolName
	String_t* ___protocolName_89;
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::protocolVersion
	uint8_t ___protocolVersion_90;
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::clientId
	String_t* ___clientId_91;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::willRetain
	bool ___willRetain_92;
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::willQosLevel
	uint8_t ___willQosLevel_93;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::willFlag
	bool ___willFlag_94;
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::willTopic
	String_t* ___willTopic_95;
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::willMessage
	String_t* ___willMessage_96;
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::username
	String_t* ___username_97;
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::password
	String_t* ___password_98;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::cleanSession
	bool ___cleanSession_99;
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::keepAlivePeriod
	uint16_t ___keepAlivePeriod_100;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnectEventArgs
struct MqttMsgConnectEventArgs_tDC1F0CC3DF63277C03DDF6CCD0FDB67408CBDD2A  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnectEventArgs::<Message>k__BackingField
	MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* ___U3CMessageU3Ek__BackingField_1;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgDisconnect
struct MqttMsgDisconnect_tAB8CFF7568901F18C26692D83A7A42EF274580EC  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq
struct MqttMsgPingReq_t5D2F79FE9F7C0678B735A32DBCF68E64023D149D  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp
struct MqttMsgPingResp_t0BCC7EA7F37072B34129A456C5284C19E15DEC7B  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback
struct MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp
struct MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish
struct MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::topic
	String_t* ___topic_55;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::message
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___message_56;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs
struct MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::topic
	String_t* ___topic_1;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::message
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___message_2;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::dupFlag
	bool ___dupFlag_3;
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::qosLevel
	uint8_t ___qosLevel_4;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::retain
	bool ___retain_5;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs
struct MqttMsgPublishedEventArgs_t8E13328196C17B2D79751AB851666268175DA0B0  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::messageId
	uint16_t ___messageId_1;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::isPublished
	bool ___isPublished_2;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec
struct MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel
struct MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback
struct MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::grantedQosLevels
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___grantedQosLevels_55;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe
struct MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
	// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::topics
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics_55;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::qosLevels
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qosLevels_56;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs
struct MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::messageId
	uint16_t ___messageId_1;
	// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::topics
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics_2;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::qosLevels
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qosLevels_3;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs
struct MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::messageId
	uint16_t ___messageId_1;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::grantedQosLevels
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___grantedQosLevels_2;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback
struct MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe
struct MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98  : public MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB
{
	// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::topics
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics_55;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs
struct MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::messageId
	uint16_t ___messageId_1;
	// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::topics
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics_2;
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs
struct MqttMsgUnsubscribedEventArgs_t46F3D712F85B4F54BD19B4355690C775FAC35E5D  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs::messageId
	uint16_t ___messageId_1;
};

// uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent
struct MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84  : public InternalEvent_tC239B49C40C425EF2A2775CA3DE46B3F39DD72BB
{
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent::msg
	MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* ___msg_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// uPLibrary.Networking.M2Mqtt.Internal.MsgPublishedInternalEvent
struct MsgPublishedInternalEvent_t77F08FECAE4E4CB4F4926233C27C164CADC43873  : public MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84
{
	// System.Boolean uPLibrary.Networking.M2Mqtt.Internal.MsgPublishedInternalEvent::isPublished
	bool ___isPublished_1;
};

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ___impl_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyCertHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyCertHash_1;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySerialNumber
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazySerialNumber_2;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyIssuer
	String_t* ___lazyIssuer_3;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySubject
	String_t* ___lazySubject_4;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithm
	String_t* ___lazyKeyAlgorithm_5;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithmParameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyKeyAlgorithmParameters_6;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyPublicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyPublicKey_7;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotBefore
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotBefore_8;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotAfter
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotAfter_9;
};

// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException
struct MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859  : public Exception_t
{
	// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::errorCode
	int32_t ___errorCode_18;
};

// uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException
struct MqttCommunicationException_t016BFB6E56C108061FB2FE6CE77E280AEF4E2EBC  : public Exception_t
{
};

// uPLibrary.Networking.M2Mqtt.Exceptions.MqttConnectionException
struct MqttConnectionException_t4133D9B042197DC8ACE467698F13BCD634939476  : public Exception_t
{
};

// uPLibrary.Networking.M2Mqtt.Exceptions.MqttTimeoutException
struct MqttTimeoutException_t43973937D83859B52199C9D855F55A16DFB478A1  : public Exception_t
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
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

// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859  : public MulticastDelegate_t
{
};

// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955  : public MulticastDelegate_t
{
};

// uPLibrary.Networking.M2Mqtt.Utility.WriteTrace
struct WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9  : public MulticastDelegate_t
{
};

// uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate
struct QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D  : public RuntimeArray
{
	ALIGN_FIELD (8) IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* m_Items[1];

	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;

// System.Int32 System.Net.Sockets.Socket::get_Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_get_Available_mDF4623F5A739F3F642D25A8905E0AF35BD7D7757 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::.ctor(System.Net.Sockets.Socket,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,uPLibrary.Networking.M2Mqtt.MqttSslProtocols,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel__ctor_mAE0A0C51688D4F8DF3F794C460250C6FD2622A75 (MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, bool ___secure1, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___serverCert2, int32_t ___sslProtocol3, RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___userCertificateValidationCallback4, LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___userCertificateSelectionCallback5, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::.ctor(System.String,System.Int32,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Certificate,uPLibrary.Networking.M2Mqtt.MqttSslProtocols,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel__ctor_m62D2797AC906A025A482EB2B51AF8B748DB84CF4 (MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C* __this, String_t* ___remoteHostName0, int32_t ___remotePort1, bool ___secure2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___caCert3, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___clientCert4, int32_t ___sslProtocol5, RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___userCertificateValidationCallback6, LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___userCertificateSelectionCallback7, const RuntimeMethod* method) ;
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23 (String_t* ___ipString0, const RuntimeMethod* method) ;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* Dns_GetHostEntry_m08417F96132B4230D46BE63C6B36CD984362ED53 (String_t* ___hostNameOrAddress0, const RuntimeMethod* method) ;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline (IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Net.Sockets.AddressFamily uPLibrary.Networking.M2Mqtt.IPAddressUtility::GetAddressFamily(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddressUtility_GetAddressFamily_m957FC4686D7C42B0177CCAD98A5F07B5D49A25E7 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___ipAddress0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___addressFamily0, int32_t ___socketType1, int32_t ___protocolType2, const RuntimeMethod* method) ;
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___address0, int32_t ___port1, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Connect_m874A510F986F4D91446B2F53688D0BCFFE0A6BE1 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___remoteEP0, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Send_mF846BE4031BE538814BC497FFDC8BB02AC9F5A33 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Receive_m29FED7D6FE4F95DD3B71CE6425AE19A3781FADBE (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, const RuntimeMethod* method) ;
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_Poll_m65D8E383FBE5A1D4A115942182620422B6646B98 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___microSeconds0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Receive(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttNetworkChannel_Receive_mFBB198BBDBF40F8263FB95E5C9721A853FE342A9 (MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate::Invoke(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_inline (QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::Invoke(System.String,System.Object[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WriteTrace_Invoke_mFE650B81232ABC5DF50C8A9D6B7BCE3670E4D05A_inline (WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSession__ctor_m75DDE1C4D2AAE34330E03AE5A73FD6A168D08A84 (MqttSession_t9CBE2025CB89850878CB6DDD2E8A2253BD80588D* __this, String_t* ___clientId0, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::set_ClientId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MqttSession_set_ClientId_mFFA166189D9D9A7D44FAB44D65781C09C5A1B481_inline (MqttSession_t9CBE2025CB89850878CB6DDD2E8A2253BD80588D* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::set_InflightMessages(System.Collections.Hashtable)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MqttSession_set_InflightMessages_m7E7CBC47033BB2FD213E0B4DDA9D2C829D4CD5B6_inline (MqttSession_t9CBE2025CB89850878CB6DDD2E8A2253BD80588D* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___value0, const RuntimeMethod* method) ;
// System.Collections.Hashtable uPLibrary.Networking.M2Mqtt.Session.MqttSession::get_InflightMessages()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* MqttSession_get_InflightMessages_m8EDD5AD4B2326B394FDEE8D8E07F2DD3A3556CB0_inline (MqttSession_t9CBE2025CB89850878CB6DDD2E8A2253BD80588D* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Object uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::GetStringObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MqttMsgBase_GetStringObject_m845AFFF8349F565565E1055EC9999AAB09554917 (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnack__ctor_m9DC0B9219E32D98964FBE8ADECCCC3E7919F1D61 (MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::.ctor(uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* __this, int32_t ___errorCode0, const RuntimeMethod* method) ;
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::decodeRemainingLength(uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C (RuntimeObject* ___channel0, const RuntimeMethod* method) ;
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::encodeRemainingLength(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0 (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, int32_t ___remainingLength0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___index2, const RuntimeMethod* method) ;
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::GetTraceString(System.String,System.Object[],System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539 (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, String_t* ___name0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___fieldNames1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___fieldValues2, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::.ctor(System.String,System.String,System.String,System.Boolean,System.Byte,System.Boolean,System.String,System.String,System.Boolean,System.UInt16,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect__ctor_m350F9EBDC8792A4A0C1769017F4448532F0C4B6B (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, String_t* ___clientId0, String_t* ___username1, String_t* ___password2, bool ___willRetain3, uint8_t ___willQosLevel4, bool ___willFlag5, String_t* ___willTopic6, String_t* ___willMessage7, bool ___cleanSession8, uint16_t ___keepAlivePeriod9, uint8_t ___protocolVersion10, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect__ctor_mE46A25E3E15C2D87E4442050527BE5CF737D9B9A (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnectEventArgs::set_Message(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MqttMsgConnectEventArgs_set_Message_mF618C75C6F254DFBDAA0AC7F1254D1DEE7871AD3_inline (MqttMsgConnectEventArgs_tDC1F0CC3DF63277C03DDF6CCD0FDB67408CBDD2A* __this, MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* ___value0, const RuntimeMethod* method) ;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Flow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_Flow_m2697D59B454DCBC8FE299191AAC199E9A8959B94_inline (MqttMsgContext_tE731ACDDFB1629FDA8ED42C65A68DC6A7F18E4DE* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* MqttMsgContext_get_Message_m116B080E9FF59F8BD705D8D83F10DFB5CEDEF0B9_inline (MqttMsgContext_tE731ACDDFB1629FDA8ED42C65A68DC6A7F18E4DE* __this, const RuntimeMethod* method) ;
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_MessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgBase_get_MessageId_mB5D7DB290F2DABCDEED25C96F285D5F876856AD9 (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, const RuntimeMethod* method) ;
// System.String System.UInt16::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_m57629B7E74D92A54414073D5C27D6827C93A4DD5 (uint16_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgDisconnect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgDisconnect__ctor_m1CD1F70A995CD4B1267153CDDA55D7F2414B2679 (MqttMsgDisconnect_tAB8CFF7568901F18C26692D83A7A42EF274580EC* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPingReq__ctor_m5900AB0EC0A0F92FCF735E46A1E6AAAFA9FEE96D (MqttMsgPingReq_t5D2F79FE9F7C0678B735A32DBCF68E64023D149D* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPingResp__ctor_m5F4815F8FBD9AB6594458CD0DB7A9561AAD54873 (MqttMsgPingResp_t0BCC7EA7F37072B34129A456C5284C19E15DEC7B* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPuback__ctor_mF180301EA3419DCBD8C8CE4E5E691A2B585A05AD (MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubcomp__ctor_m7FEB6335A05D280A6C6F2EB4EBFEBE23508E5A1E (MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::.ctor(System.String,System.Byte[],System.Boolean,System.Byte,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublish__ctor_m293046A7E9F398FC7DAD0B30DFDDFDC1999BC2D7 (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, String_t* ___topic0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___message1, bool ___dupFlag2, uint8_t ___qosLevel3, bool ___retain4, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublish__ctor_mEBCB0917FF5442CAB39A95FAE1F70598989D187E (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::.ctor(System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventArgs__ctor_m37945B4C38E4232B730B87A6AFCFAC6CE2659939 (MqttMsgPublishedEventArgs_t8E13328196C17B2D79751AB851666268175DA0B0* __this, uint16_t ___messageId0, bool ___isPublished1, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubrec__ctor_mB30BDB84C12336787A6E4A86AEF1BD72607938D2 (MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubrel__ctor_m0F8CDE90BB655C17120673B7E73A5F1408FDD6EB (MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSuback__ctor_m469D8F0B93A0B36C1A4D295F3AEB14E5B0FBFDBC (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribe__ctor_m5E9AA30D36FD0659C42FAC4A226DF27878B210DA (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared)(__this, method);
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsuback__ctor_mE20D77A0C9F8A1F6F6B4D4597A11A4C6747FC568 (MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribe__ctor_mB5999A22CD1515F66ACEE158BA9533E04B6EFEC7 (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Internal.InternalEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalEvent__ctor_mCA1DB6F9F0C187BBE3C18FDD5B93919DAFC004EC (InternalEvent_tC239B49C40C425EF2A2775CA3DE46B3F39DD72BB* __this, const RuntimeMethod* method) ;
// System.Void uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent::.ctor(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgInternalEvent__ctor_mD2ECF81AE8634E936664761C86E173B6D85824D7 (MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84* __this, MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* ___msg0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::get_RemoteHostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttNetworkChannel_get_RemoteHostName_mFE7240728174BC09DB6F16B72145A7B9D3AAB352 (MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// public string RemoteHostName { get { return this.remoteHostName; } }
		String_t* L_0 = __this->___remoteHostName_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string RemoteHostName { get { return this.remoteHostName; } }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Net.IPAddress uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::get_RemoteIpAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* MqttNetworkChannel_get_RemoteIpAddress_m6C98A457D904C044D0ACF17E16EA92D108028C10 (MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C* __this, const RuntimeMethod* method) 
{
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_0 = NULL;
	{
		// public IPAddress RemoteIpAddress { get { return this.remoteIpAddress; } }
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = __this->___remoteIpAddress_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public IPAddress RemoteIpAddress { get { return this.remoteIpAddress; } }
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::get_RemotePort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttNetworkChannel_get_RemotePort_m659ED376104B1194B77175B5F3D25D8B9505B208 (MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public int RemotePort { get { return this.remotePort; } }
		int32_t L_0 = __this->___remotePort_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public int RemotePort { get { return this.remotePort; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::get_DataAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttNetworkChannel_get_DataAvailable_m066B45463175C64DD8BBEA34308BFC1E86D7A04F (MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return (this.socket.Available > 0);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Socket_get_Available_mDF4623F5A739F3F642D25A8905E0AF35BD7D7757(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::.ctor(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel__ctor_m5D539DD3F3EA54222EA9BE2A2DF4ACDDE794C68C (MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, const RuntimeMethod* method) 
{
	{
		// : this(socket, false, null, MqttSslProtocols.None, null, null)
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___socket0;
		MqttNetworkChannel__ctor_mAE0A0C51688D4F8DF3F794C460250C6FD2622A75(__this, L_0, (bool)0, (X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*)NULL, 0, (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955*)NULL, (LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859*)NULL, NULL);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::.ctor(System.Net.Sockets.Socket,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,uPLibrary.Networking.M2Mqtt.MqttSslProtocols,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel__ctor_mAE0A0C51688D4F8DF3F794C460250C6FD2622A75 (MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C* __this, Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___socket0, bool ___secure1, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___serverCert2, int32_t ___sslProtocol3, RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___userCertificateValidationCallback4, LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___userCertificateSelectionCallback5, const RuntimeMethod* method) 
{
	{
		// public MqttNetworkChannel(Socket socket, bool secure, X509Certificate serverCert, MqttSslProtocols sslProtocol,
		//     RemoteCertificateValidationCallback userCertificateValidationCallback,
		//     LocalCertificateSelectionCallback userCertificateSelectionCallback)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.socket = socket;
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = ___socket0;
		__this->___socket_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___socket_5), (void*)L_0);
		// this.secure = secure;
		bool L_1 = ___secure1;
		__this->___secure_6 = L_1;
		// this.serverCert = serverCert;
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_2 = ___serverCert2;
		__this->___serverCert_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___serverCert_8), (void*)L_2);
		// this.sslProtocol = sslProtocol;
		int32_t L_3 = ___sslProtocol3;
		__this->___sslProtocol_10 = L_3;
		// this.userCertificateValidationCallback = userCertificateValidationCallback;
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_4 = ___userCertificateValidationCallback4;
		__this->___userCertificateValidationCallback_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___userCertificateValidationCallback_0), (void*)L_4);
		// this.userCertificateSelectionCallback = userCertificateSelectionCallback;
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_5 = ___userCertificateSelectionCallback5;
		__this->___userCertificateSelectionCallback_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___userCertificateSelectionCallback_1), (void*)L_5);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel__ctor_m54167B12CD4B71B8EBD2B7BD71A4072B5EAE4821 (MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C* __this, String_t* ___remoteHostName0, int32_t ___remotePort1, const RuntimeMethod* method) 
{
	{
		// : this(remoteHostName, remotePort, false, null, null, MqttSslProtocols.None, null, null)
		String_t* L_0 = ___remoteHostName0;
		int32_t L_1 = ___remotePort1;
		MqttNetworkChannel__ctor_m62D2797AC906A025A482EB2B51AF8B748DB84CF4(__this, L_0, L_1, (bool)0, (X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*)NULL, (X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*)NULL, 0, (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955*)NULL, (LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859*)NULL, NULL);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::.ctor(System.String,System.Int32,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Certificate,uPLibrary.Networking.M2Mqtt.MqttSslProtocols,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel__ctor_m62D2797AC906A025A482EB2B51AF8B748DB84CF4 (MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C* __this, String_t* ___remoteHostName0, int32_t ___remotePort1, bool ___secure2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___caCert3, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___clientCert4, int32_t ___sslProtocol5, RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___userCertificateValidationCallback6, LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ___userCertificateSelectionCallback7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_0 = NULL;
	bool V_1 = false;
	IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B7_0 = 0;
	{
		// public MqttNetworkChannel(string remoteHostName, int remotePort, bool secure, X509Certificate caCert, X509Certificate clientCert, MqttSslProtocols sslProtocol,
		//     RemoteCertificateValidationCallback userCertificateValidationCallback,
		//     LocalCertificateSelectionCallback userCertificateSelectionCallback)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// IPAddress remoteIpAddress = null;
		V_0 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)NULL;
	}
	try
	{// begin try (depth: 1)
		// remoteIpAddress = IPAddress.Parse(remoteHostName);
		String_t* L_0 = ___remoteHostName0;
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_1;
		L_1 = IPAddress_Parse_mF946F1810061D91C5A1A96FF9968F07138F3CE23(L_0, NULL);
		V_0 = L_1;
		goto IL_001a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0015;
		}
		throw e;
	}

CATCH_0015:
	{// begin catch(System.Object)
		// catch
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001a;
	}// end catch (depth: 1)

IL_001a:
	{
		// if (remoteIpAddress == null)
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0076;
		}
	}
	{
		// IPHostEntry hostEntry = Dns.GetHostEntry(remoteHostName);
		String_t* L_4 = ___remoteHostName0;
		IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* L_5;
		L_5 = Dns_GetHostEntry_m08417F96132B4230D46BE63C6B36CD984362ED53(L_4, NULL);
		V_2 = L_5;
		// if ((hostEntry != null) && (hostEntry.AddressList.Length > 0))
		IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* L_7 = V_2;
		NullCheck(L_7);
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_8;
		L_8 = IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline(L_7, NULL);
		NullCheck(L_8);
		G_B7_0 = ((!(((uint32_t)(((RuntimeArray*)L_8)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B7_0 = 0;
	}

IL_003a:
	{
		V_3 = (bool)G_B7_0;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		// int i = 0;
		V_4 = 0;
		goto IL_004a;
	}

IL_0044:
	{
		// while (hostEntry.AddressList[i] == null) i++;
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_004a:
	{
		// while (hostEntry.AddressList[i] == null) i++;
		IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* L_11 = V_2;
		NullCheck(L_11);
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_12;
		L_12 = IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline(L_11, NULL);
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_5 = (bool)((((RuntimeObject*)(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)L_15) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0044;
		}
	}
	{
		// remoteIpAddress = hostEntry.AddressList[i];
		IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* L_17 = V_2;
		NullCheck(L_17);
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_18;
		L_18 = IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline(L_17, NULL);
		int32_t L_19 = V_4;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = L_21;
		goto IL_0075;
	}

IL_0069:
	{
		// throw new Exception("No address found for the remote host name");
		Exception_t* L_22 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27CD295CC1E6AC78ED410A498B4D95A9BC04C355)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttNetworkChannel__ctor_m62D2797AC906A025A482EB2B51AF8B748DB84CF4_RuntimeMethod_var)));
	}

IL_0075:
	{
	}

IL_0076:
	{
		// this.remoteHostName = remoteHostName;
		String_t* L_23 = ___remoteHostName0;
		__this->___remoteHostName_2 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___remoteHostName_2), (void*)L_23);
		// this.remoteIpAddress = remoteIpAddress;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_24 = V_0;
		__this->___remoteIpAddress_3 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___remoteIpAddress_3), (void*)L_24);
		// this.remotePort = remotePort;
		int32_t L_25 = ___remotePort1;
		__this->___remotePort_4 = L_25;
		// this.secure = secure;
		bool L_26 = ___secure2;
		__this->___secure_6 = L_26;
		// this.caCert = caCert;
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_27 = ___caCert3;
		__this->___caCert_7 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___caCert_7), (void*)L_27);
		// this.clientCert = clientCert;
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_28 = ___clientCert4;
		__this->___clientCert_9 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clientCert_9), (void*)L_28);
		// this.sslProtocol = sslProtocol;
		int32_t L_29 = ___sslProtocol5;
		__this->___sslProtocol_10 = L_29;
		// this.userCertificateValidationCallback = userCertificateValidationCallback;
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_30 = ___userCertificateValidationCallback6;
		__this->___userCertificateValidationCallback_0 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___userCertificateValidationCallback_0), (void*)L_30);
		// this.userCertificateSelectionCallback = userCertificateSelectionCallback;
		LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* L_31 = ___userCertificateSelectionCallback7;
		__this->___userCertificateSelectionCallback_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___userCertificateSelectionCallback_1), (void*)L_31);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel_Connect_m493B32B4B200505CF880A2F296C271D8E7822F13 (MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.socket = new Socket(this.remoteIpAddress.GetAddressFamily(), SocketType.Stream, ProtocolType.Tcp);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = __this->___remoteIpAddress_3;
		int32_t L_1;
		L_1 = IPAddressUtility_GetAddressFamily_m957FC4686D7C42B0177CCAD98A5F07B5D49A25E7(L_0, NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_2 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)il2cpp_codegen_object_new(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595(L_2, L_1, 1, 6, NULL);
		__this->___socket_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___socket_5), (void*)L_2);
		// this.socket.Connect(new IPEndPoint(this.remoteIpAddress, this.remotePort));
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_3 = __this->___socket_5;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_4 = __this->___remoteIpAddress_3;
		int32_t L_5 = __this->___remotePort_4;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_6 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_6, L_4, L_5, NULL);
		NullCheck(L_3);
		Socket_Connect_m874A510F986F4D91446B2F53688D0BCFFE0A6BE1(L_3, L_6, NULL);
		// }
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttNetworkChannel_Send_m2F4B9D36F43CC952A24B24FF1CF35B9922A14236 (MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return this.socket.Send(buffer, 0, buffer.Length, SocketFlags.None);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buffer0;
		NullCheck(L_2);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = Socket_Send_mF846BE4031BE538814BC497FFDC8BB02AC9F5A33(L_0, L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), 0, NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Receive(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttNetworkChannel_Receive_mFBB198BBDBF40F8263FB95E5C9721A853FE342A9 (MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		// int idx = 0, read = 0;
		V_0 = 0;
		// int idx = 0, read = 0;
		V_1 = 0;
		goto IL_002d;
	}

IL_0007:
	{
		// read = this.socket.Receive(buffer, idx, buffer.Length - idx, SocketFlags.None);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		NullCheck(L_3);
		int32_t L_4 = V_0;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = Socket_Receive_m29FED7D6FE4F95DD3B71CE6425AE19A3781FADBE(L_0, L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4)), 0, NULL);
		V_1 = L_5;
		// if (read == 0)
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0028;
		}
	}
	{
		// return 0;
		V_3 = 0;
		goto IL_003f;
	}

IL_0028:
	{
		// idx += read;
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
	}

IL_002d:
	{
		// while (idx < buffer.Length)
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___buffer0;
		NullCheck(L_11);
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0007;
		}
	}
	{
		// return buffer.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___buffer0;
		NullCheck(L_13);
		V_3 = ((int32_t)(((RuntimeArray*)L_13)->max_length));
		goto IL_003f;
	}

IL_003f:
	{
		// }
		int32_t L_14 = V_3;
		return L_14;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Receive(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttNetworkChannel_Receive_m33FDD48337F2FD9D84541083D576F98BD01AEBEA (MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___timeout1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (this.socket.Poll(timeout * 1000, SelectMode.SelectRead))
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_5;
		int32_t L_1 = ___timeout1;
		NullCheck(L_0);
		bool L_2;
		L_2 = Socket_Poll_m65D8E383FBE5A1D4A115942182620422B6646B98(L_0, ((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)1000))), 0, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// return this.Receive(buffer);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___buffer0;
		int32_t L_5;
		L_5 = MqttNetworkChannel_Receive_mFBB198BBDBF40F8263FB95E5C9721A853FE342A9(__this, L_4, NULL);
		V_1 = L_5;
		goto IL_0028;
	}

IL_0023:
	{
		// return 0;
		V_1 = 0;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel_Close_m75161AA68585EC2985A5A02091A550A612A29390 (MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C* __this, const RuntimeMethod* method) 
{
	{
		// this.socket.Close();
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___socket_5;
		NullCheck(L_0);
		Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4(L_0, NULL);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Accept()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel_Accept_m1A1D81EA37116CB846B180A3BC3DEC4A2AB54438 (MqttNetworkChannel_t22CB957A2C9C0410ED47639211FCBF4CA6CC4A7C* __this, const RuntimeMethod* method) 
{
	{
		// return;
		goto IL_0003;
	}

IL_0003:
	{
		// }
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
// System.Net.Sockets.AddressFamily uPLibrary.Networking.M2Mqtt.IPAddressUtility::GetAddressFamily(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddressUtility_GetAddressFamily_m957FC4686D7C42B0177CCAD98A5F07B5D49A25E7 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___ipAddress0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return ipAddress.AddressFamily;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = ___ipAddress0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_2 = V_0;
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
// System.Security.Authentication.SslProtocols uPLibrary.Networking.M2Mqtt.MqttSslUtility::ToSslPlatformEnum(uPLibrary.Networking.M2Mqtt.MqttSslProtocols)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttSslUtility_ToSslPlatformEnum_m0DC1F4FE314F8F3C532650BEBDA7594831478E3E (int32_t ___mqttSslProtocol0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// switch (mqttSslProtocol)
		int32_t L_0 = ___mqttSslProtocol0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_002d;
			}
			case 3:
			{
				goto IL_0035;
			}
			case 4:
			{
				goto IL_0035;
			}
		}
	}
	{
		goto IL_0035;
	}

IL_0021:
	{
		// return SslProtocols.None;
		V_2 = 0;
		goto IL_0040;
	}

IL_0025:
	{
		// return SslProtocols.Tls;
		V_2 = ((int32_t)192);
		goto IL_0040;
	}

IL_002d:
	{
		// return SslProtocols.Tls;
		V_2 = ((int32_t)192);
		goto IL_0040;
	}

IL_0035:
	{
		// throw new ArgumentException("SSL/TLS protocol version not supported");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CB0D6CC754B7CE9DE61E479EAF4BCC5070C50FE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttSslUtility_ToSslPlatformEnum_m0DC1F4FE314F8F3C532650BEBDA7594831478E3E_RuntimeMethod_var)));
	}

IL_0040:
	{
		// }
		int32_t L_4 = V_2;
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
// System.Object uPLibrary.Networking.M2Mqtt.Utility.QueueExtension::Get(System.Collections.Queue,uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QueueExtension_Get_mBDF549720ABE09C37169D4AFBA486F724A329E39 (Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* ___queue0, QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961* ___predicate1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		// foreach (var item in queue)
		Queue_t82FD2BE12D138AF4D22C801CB5044DAEC2BA66BC* L_0 = ___queue0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Collections.IEnumerator System.Collections.Queue::GetEnumerator() */, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_4;
					if (!L_3)
					{
						goto IL_0041;
					}
				}
				{
					RuntimeObject* L_4 = V_4;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0041:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0023_1;
			}

IL_000b_1:
			{
				// foreach (var item in queue)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// if (predicate(item))
				QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961* L_7 = ___predicate1;
				RuntimeObject* L_8 = V_1;
				NullCheck(L_7);
				bool L_9;
				L_9 = QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_inline(L_7, L_8, NULL);
				V_2 = L_9;
				bool L_10 = V_2;
				if (!L_10)
				{
					goto IL_0022_1;
				}
			}
			{
				// return item;
				RuntimeObject* L_11 = V_1;
				V_3 = L_11;
				goto IL_0046;
			}

IL_0022_1:
			{
			}

IL_0023_1:
			{
				// foreach (var item in queue)
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		// return null;
		V_3 = NULL;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		RuntimeObject* L_14 = V_3;
		return L_14;
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
bool QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_Multicast(QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961* currentDelegate = reinterpret_cast<QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___item0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_OpenInst(QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___item0, method);
}
bool QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_OpenStatic(QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___item0, method);
}
bool QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_OpenStaticInvoker(QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___item0);
}
bool QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_ClosedStaticInvoker(QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___item0);
}
bool QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_OpenVirtual(QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	return VirtualFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___item0);
}
bool QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_OpenInterface(QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	return InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___item0);
}
bool QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_OpenGenericVirtual(QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	return GenericVirtualFuncInvoker0< bool >::Invoke(method, ___item0);
}
bool QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_OpenGenericInterface(QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	return GenericInterfaceFuncInvoker0< bool >::Invoke(method, ___item0);
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueuePredicate__ctor_mD81E57F512D7764520CCF2CD158868A604FF8D1D (QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_OpenStatic;
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
						__this->___invoke_impl_1 = (intptr_t)&QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_OpenInst;
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
	__this->___extra_arg_5 = (intptr_t)&QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_Multicast;
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57 (QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___item0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QueuePredicate_BeginInvoke_m8EEF5B881CB3F8A4CC2243FCDCB329CFD413408F (QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961* __this, RuntimeObject* ___item0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___item0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QueuePredicate_EndInvoke_mA8F6288C2E1A5C15B3DA6A9B80A0167001BF8E40 (QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteTrace_Invoke_mFE650B81232ABC5DF50C8A9D6B7BCE3670E4D05A_Multicast(WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* currentDelegate = reinterpret_cast<WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___format0, ___args1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteTrace_Invoke_mFE650B81232ABC5DF50C8A9D6B7BCE3670E4D05A_OpenInst(WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	NullCheck(___format0);
	typedef void (*FunctionPointerType) (String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___format0, ___args1, method);
}
void WriteTrace_Invoke_mFE650B81232ABC5DF50C8A9D6B7BCE3670E4D05A_OpenStatic(WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___format0, ___args1, method);
}
void WriteTrace_Invoke_mFE650B81232ABC5DF50C8A9D6B7BCE3670E4D05A_OpenStaticInvoker(WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(__this->___method_ptr_0, method, NULL, ___format0, ___args1);
}
void WriteTrace_Invoke_mFE650B81232ABC5DF50C8A9D6B7BCE3670E4D05A_ClosedStaticInvoker(WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___format0, ___args1);
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteTrace__ctor_m2EE3BE67838BD364984CC601AC6875179AE67CFE (WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&WriteTrace_Invoke_mFE650B81232ABC5DF50C8A9D6B7BCE3670E4D05A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteTrace_Invoke_mFE650B81232ABC5DF50C8A9D6B7BCE3670E4D05A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteTrace_Invoke_mFE650B81232ABC5DF50C8A9D6B7BCE3670E4D05A_OpenStatic;
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
			__this->___invoke_impl_1 = (intptr_t)&WriteTrace_Invoke_mFE650B81232ABC5DF50C8A9D6B7BCE3670E4D05A_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteTrace_Invoke_mFE650B81232ABC5DF50C8A9D6B7BCE3670E4D05A_Multicast;
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteTrace_Invoke_mFE650B81232ABC5DF50C8A9D6B7BCE3670E4D05A (WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___format0, ___args1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::BeginInvoke(System.String,System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteTrace_BeginInvoke_m5051AF7AE8CAEC7170E57A799D48C3CF49E2354A (WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___format0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteTrace_EndInvoke_m713291280A8C74ED320139A552182A397D7B870D (WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.Utility.Trace::Debug(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trace_Debug_mE4FDAF4963EA886402EC14284A1FB9CFC5DDD7DC (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (TraceListener != null)
		WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* L_0 = ((Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var))->___TraceListener_1;
		V_0 = (bool)((!(((RuntimeObject*)(WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// TraceListener(format, args);
		WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* L_2 = ((Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var))->___TraceListener_1;
		String_t* L_3 = ___format0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___args1;
		NullCheck(L_2);
		WriteTrace_Invoke_mFE650B81232ABC5DF50C8A9D6B7BCE3670E4D05A_inline(L_2, L_3, L_4, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.Trace::WriteLine(uPLibrary.Networking.M2Mqtt.Utility.TraceLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trace_WriteLine_mF16F3A609AC3289C8C7D5D656436855CC54D67AF (int32_t ___level0, String_t* ___format1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (TraceListener != null && (level & TraceLevel) > 0)
		WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* L_0 = ((Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var))->___TraceListener_1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___level0;
		int32_t L_2 = ((Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var))->___TraceLevel_0;
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_1&(int32_t)L_2))) > ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// TraceListener(format);
		WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* L_4 = ((Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var))->___TraceListener_1;
		String_t* L_5 = ___format1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_4);
		WriteTrace_Invoke_mFE650B81232ABC5DF50C8A9D6B7BCE3670E4D05A_inline(L_4, L_5, L_6, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.Trace::WriteLine(uPLibrary.Networking.M2Mqtt.Utility.TraceLevel,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trace_WriteLine_mF9150299A7D4BA3BFC2E2256C9C1D31E838DE1EA (int32_t ___level0, String_t* ___format1, RuntimeObject* ___arg12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (TraceListener != null && (level & TraceLevel) > 0)
		WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* L_0 = ((Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var))->___TraceListener_1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___level0;
		int32_t L_2 = ((Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var))->___TraceLevel_0;
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_1&(int32_t)L_2))) > ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// TraceListener(format, arg1);
		WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* L_4 = ((Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var))->___TraceListener_1;
		String_t* L_5 = ___format1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		RuntimeObject* L_8 = ___arg12;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		NullCheck(L_4);
		WriteTrace_Invoke_mFE650B81232ABC5DF50C8A9D6B7BCE3670E4D05A_inline(L_4, L_5, L_7, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.Trace::WriteLine(uPLibrary.Networking.M2Mqtt.Utility.TraceLevel,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trace_WriteLine_m86F4D0E3C11E0E4A07A96D0BFB74C5EE5BEDC552 (int32_t ___level0, String_t* ___format1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (TraceListener != null && (level & TraceLevel) > 0)
		WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* L_0 = ((Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var))->___TraceListener_1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___level0;
		int32_t L_2 = ((Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var))->___TraceLevel_0;
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_1&(int32_t)L_2))) > ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// TraceListener(format, arg1, arg2);
		WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* L_4 = ((Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var))->___TraceListener_1;
		String_t* L_5 = ___format1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		RuntimeObject* L_8 = ___arg12;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___arg23;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		NullCheck(L_4);
		WriteTrace_Invoke_mFE650B81232ABC5DF50C8A9D6B7BCE3670E4D05A_inline(L_4, L_5, L_9, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.Trace::WriteLine(uPLibrary.Networking.M2Mqtt.Utility.TraceLevel,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trace_WriteLine_m9CD0EB979CD1A54A0E3FF5E704EF341ECD966E38 (int32_t ___level0, String_t* ___format1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (TraceListener != null && (level & TraceLevel) > 0)
		WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* L_0 = ((Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var))->___TraceListener_1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___level0;
		int32_t L_2 = ((Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var))->___TraceLevel_0;
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_1&(int32_t)L_2))) > ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// TraceListener(format, arg1, arg2, arg3);
		WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* L_4 = ((Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t583BF66BA0904C931AB7B3DBC0052EE1896266FF_il2cpp_TypeInfo_var))->___TraceListener_1;
		String_t* L_5 = ___format1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		RuntimeObject* L_8 = ___arg12;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___arg23;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___arg34;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		NullCheck(L_4);
		WriteTrace_Invoke_mFE650B81232ABC5DF50C8A9D6B7BCE3670E4D05A_inline(L_4, L_5, L_11, NULL);
	}

IL_003a:
	{
		// }
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
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttClientSession::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClientSession__ctor_m93858DF9C51CDFC0019C52BB0BAFD937742B8582 (MqttClientSession_t2390D9200EDEDD86184F29FF771535FBA0897AA1* __this, String_t* ___clientId0, const RuntimeMethod* method) 
{
	{
		// : base(clientId)
		String_t* L_0 = ___clientId0;
		MqttSession__ctor_m75DDE1C4D2AAE34330E03AE5A73FD6A168D08A84(__this, L_0, NULL);
		// }
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
// System.String uPLibrary.Networking.M2Mqtt.Session.MqttSession::get_ClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttSession_get_ClientId_m2B887DAB5DD68CD18DE588DF46E3B22776DDE177 (MqttSession_t9CBE2025CB89850878CB6DDD2E8A2253BD80588D* __this, const RuntimeMethod* method) 
{
	{
		// public string ClientId { get; set; }
		String_t* L_0 = __this->___U3CClientIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::set_ClientId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSession_set_ClientId_mFFA166189D9D9A7D44FAB44D65781C09C5A1B481 (MqttSession_t9CBE2025CB89850878CB6DDD2E8A2253BD80588D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ClientId { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CClientIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Hashtable uPLibrary.Networking.M2Mqtt.Session.MqttSession::get_InflightMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* MqttSession_get_InflightMessages_m8EDD5AD4B2326B394FDEE8D8E07F2DD3A3556CB0 (MqttSession_t9CBE2025CB89850878CB6DDD2E8A2253BD80588D* __this, const RuntimeMethod* method) 
{
	{
		// public Hashtable InflightMessages { get; set; }
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->___U3CInflightMessagesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::set_InflightMessages(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSession_set_InflightMessages_m7E7CBC47033BB2FD213E0B4DDA9D2C829D4CD5B6 (MqttSession_t9CBE2025CB89850878CB6DDD2E8A2253BD80588D* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___value0, const RuntimeMethod* method) 
{
	{
		// public Hashtable InflightMessages { get; set; }
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = ___value0;
		__this->___U3CInflightMessagesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInflightMessagesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSession__ctor_m92E475272216F10D3B971C1C37880809303488E4 (MqttSession_t9CBE2025CB89850878CB6DDD2E8A2253BD80588D* __this, const RuntimeMethod* method) 
{
	{
		// : this(null)
		MqttSession__ctor_m75DDE1C4D2AAE34330E03AE5A73FD6A168D08A84(__this, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSession__ctor_m75DDE1C4D2AAE34330E03AE5A73FD6A168D08A84 (MqttSession_t9CBE2025CB89850878CB6DDD2E8A2253BD80588D* __this, String_t* ___clientId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MqttSession(string clientId)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.ClientId = clientId;
		String_t* L_0 = ___clientId0;
		MqttSession_set_ClientId_mFFA166189D9D9A7D44FAB44D65781C09C5A1B481_inline(__this, L_0, NULL);
		// this.InflightMessages = new Hashtable();
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_1, NULL);
		MqttSession_set_InflightMessages_m7E7CBC47033BB2FD213E0B4DDA9D2C829D4CD5B6_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSession_Clear_m634CA89B54A491EA945FA21BED713F736A397807 (MqttSession_t9CBE2025CB89850878CB6DDD2E8A2253BD80588D* __this, const RuntimeMethod* method) 
{
	{
		// this.ClientId = null;
		MqttSession_set_ClientId_mFFA166189D9D9A7D44FAB44D65781C09C5A1B481_inline(__this, (String_t*)NULL, NULL);
		// this.InflightMessages.Clear();
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0;
		L_0 = MqttSession_get_InflightMessages_m8EDD5AD4B2326B394FDEE8D8E07F2DD3A3556CB0_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(24 /* System.Void System.Collections.Hashtable::Clear() */, L_0);
		// }
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
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MqttMsgBase_get_Type_mFBC9F62B677216E35506C058CD98E25547A0B380 (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		// get { return this.type; }
		uint8_t L_0 = __this->___type_50;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.type; }
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::set_Type(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgBase_set_Type_m7C1A127FD300FFC76E065095EEF5AB24FC8319D4 (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.type = value; }
		uint8_t L_0 = ___value0;
		__this->___type_50 = L_0;
		// set { this.type = value; }
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_DupFlag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttMsgBase_get_DupFlag_m9515B8ABD8080AEFC49C6915F2A03627A52F8F2E (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return this.dupFlag; }
		bool L_0 = __this->___dupFlag_51;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.dupFlag; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::set_DupFlag(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgBase_set_DupFlag_m5614C9E9B6B04B8AC020D7C14F06A5EC1D767094 (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.dupFlag = value; }
		bool L_0 = ___value0;
		__this->___dupFlag_51 = L_0;
		// set { this.dupFlag = value; }
		return;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_QosLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MqttMsgBase_get_QosLevel_mE49CCCD4AB1DF6C8053ED230FA518F074464F5CB (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		// get { return this.qosLevel; }
		uint8_t L_0 = __this->___qosLevel_52;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.qosLevel; }
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::set_QosLevel(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgBase_set_QosLevel_m64FE000BD0FAFDBF689CB6F7DE8D28CF8D3CFC6D (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.qosLevel = value; }
		uint8_t L_0 = ___value0;
		__this->___qosLevel_52 = L_0;
		// set { this.qosLevel = value; }
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_Retain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttMsgBase_get_Retain_m3CD4FE6AB3B391B4ADFC88237BA6376126BD045E (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return this.retain; }
		bool L_0 = __this->___retain_53;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.retain; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::set_Retain(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgBase_set_Retain_m286B79F6FBFBC4F6FBB3F7CF8091DE4CB491521B (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.retain = value; }
		bool L_0 = ___value0;
		__this->___retain_53 = L_0;
		// set { this.retain = value; }
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_MessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgBase_get_MessageId_mB5D7DB290F2DABCDEED25C96F285D5F876856AD9 (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		// get { return this.messageId; }
		uint16_t L_0 = __this->___messageId_54;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.messageId; }
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::set_MessageId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgBase_set_MessageId_m66784CE56A3257B8BCE9DFF35ABBBFEBA1E8DB28 (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.messageId = value; }
		uint16_t L_0 = ___value0;
		__this->___messageId_54 = L_0;
		// set { this.messageId = value; }
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::encodeRemainingLength(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0 (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, int32_t ___remainingLength0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___index2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// int digit = 0;
		V_0 = 0;
	}

IL_0003:
	{
		// digit = remainingLength % 128;
		int32_t L_0 = ___remainingLength0;
		V_0 = ((int32_t)(L_0%((int32_t)128)));
		// remainingLength /= 128;
		int32_t L_1 = ___remainingLength0;
		___remainingLength0 = ((int32_t)(L_1/((int32_t)128)));
		// if (remainingLength > 0)
		int32_t L_2 = ___remainingLength0;
		V_1 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// digit = digit | 0x80;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4|((int32_t)128)));
	}

IL_0025:
	{
		// buffer[index++] = (byte)digit;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___buffer1;
		int32_t L_6 = ___index2;
		int32_t L_7 = L_6;
		___index2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)((int32_t)(uint8_t)L_8));
		// } while (remainingLength > 0);
		int32_t L_9 = ___remainingLength0;
		V_2 = (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0003;
		}
	}
	{
		// return index;
		int32_t L_11 = ___index2;
		V_3 = L_11;
		goto IL_003c;
	}

IL_003c:
	{
		// }
		int32_t L_12 = V_3;
		return L_12;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::decodeRemainingLength(uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C (RuntimeObject* ___channel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		// int multiplier = 1;
		V_0 = 1;
		// int value = 0;
		V_1 = 0;
		// int digit = 0;
		V_2 = 0;
		// byte[] nextByte = new byte[1];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		V_3 = L_0;
	}

IL_000e:
	{
		// channel.Receive(nextByte);
		RuntimeObject* L_1 = ___channel0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_1, L_2);
		// digit = nextByte[0];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_3;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// value += ((digit & 127) * multiplier);
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_8&((int32_t)127))), L_9))));
		// multiplier *= 128;
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)128)));
		// } while ((digit & 128) != 0);
		int32_t L_11 = V_2;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_11&((int32_t)128)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_000e;
		}
	}
	{
		// return value;
		int32_t L_13 = V_1;
		V_5 = L_13;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		int32_t L_14 = V_5;
		return L_14;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::GetTraceString(System.String,System.Object[],System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539 (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, String_t* ___name0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___fieldNames1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___fieldValues2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	String_t* V_7 = NULL;
	int32_t G_B3_0 = 0;
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// sb.Append(name);
		StringBuilder_t* L_1 = V_0;
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_2, NULL);
		// if ((fieldNames != null) && (fieldValues != null))
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___fieldNames1;
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = ___fieldValues2;
		G_B3_0 = ((!(((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_009a;
		}
	}
	{
		// sb.Append("(");
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, NULL);
		// bool addComma = false;
		V_2 = (bool)0;
		// for (int i = 0; i < fieldValues.Length; i++)
		V_3 = 0;
		goto IL_0081;
	}

IL_0030:
	{
		// if (fieldValues[i] != null)
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___fieldValues2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_12) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_007c;
		}
	}
	{
		// if (addComma)
		bool L_14 = V_2;
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0053;
		}
	}
	{
		// sb.Append(",");
		StringBuilder_t* L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
	}

IL_0053:
	{
		// sb.Append(fieldNames[i]);
		StringBuilder_t* L_18 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = ___fieldNames1;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_18, L_22, NULL);
		// sb.Append(":");
		StringBuilder_t* L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		// sb.Append(GetStringObject(fieldValues[i]));
		StringBuilder_t* L_26 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = ___fieldValues2;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		RuntimeObject* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		RuntimeObject* L_31;
		L_31 = MqttMsgBase_GetStringObject_m845AFFF8349F565565E1055EC9999AAB09554917(__this, L_30, NULL);
		NullCheck(L_26);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_26, L_31, NULL);
		// addComma = true;
		V_2 = (bool)1;
	}

IL_007c:
	{
		// for (int i = 0; i < fieldValues.Length; i++)
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0081:
	{
		// for (int i = 0; i < fieldValues.Length; i++)
		int32_t L_34 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = ___fieldValues2;
		NullCheck(L_35);
		V_6 = (bool)((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))? 1 : 0);
		bool L_36 = V_6;
		if (L_36)
		{
			goto IL_0030;
		}
	}
	{
		// sb.Append(")");
		StringBuilder_t* L_37 = V_0;
		NullCheck(L_37);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
	}

IL_009a:
	{
		// return sb.ToString();
		StringBuilder_t* L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_39);
		V_7 = L_40;
		goto IL_00a4;
	}

IL_00a4:
	{
		// }
		String_t* L_41 = V_7;
		return L_41;
	}
}
// System.Object uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::GetStringObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MqttMsgBase_GetStringObject_m845AFFF8349F565565E1055EC9999AAB09554917 (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	StringBuilder_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	StringBuilder_t* V_9 = NULL;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	{
		// byte[] binary = value as byte[];
		RuntimeObject* L_0 = ___value0;
		V_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)IsInst((RuntimeObject*)L_0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		// if (binary != null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0071;
		}
	}
	{
		// string hexChars = "0123456789ABCDEF";
		V_3 = _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84;
		// StringBuilder sb = new StringBuilder(binary.Length * 2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t* L_4 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_4, ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2)), NULL);
		V_4 = L_4;
		// for (int i = 0; i < binary.Length; ++i)
		V_5 = 0;
		goto IL_0059;
	}

IL_0028:
	{
		// sb.Append(hexChars[binary[i] >> 4]);
		StringBuilder_t* L_5 = V_4;
		String_t* L_6 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, ((int32_t)((int32_t)L_10>>4)), NULL);
		NullCheck(L_5);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_5, L_11, NULL);
		// sb.Append(hexChars[binary[i] & 0x0F]);
		StringBuilder_t* L_13 = V_4;
		String_t* L_14 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		Il2CppChar L_19;
		L_19 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_14, ((int32_t)((int32_t)L_18&((int32_t)15))), NULL);
		NullCheck(L_13);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, L_19, NULL);
		// for (int i = 0; i < binary.Length; ++i)
		int32_t L_21 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0059:
	{
		// for (int i = 0; i < binary.Length; ++i)
		int32_t L_22 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		NullCheck(L_23);
		V_6 = (bool)((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))? 1 : 0);
		bool L_24 = V_6;
		if (L_24)
		{
			goto IL_0028;
		}
	}
	{
		// return sb.ToString();
		StringBuilder_t* L_25 = V_4;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		V_7 = L_26;
		goto IL_00e9;
	}

IL_0071:
	{
		// object[] list = value as object[];
		RuntimeObject* L_27 = ___value0;
		V_1 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_27, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		// if (list != null)
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = V_1;
		V_8 = (bool)((!(((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_00e4;
		}
	}
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_30 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_30, NULL);
		V_9 = L_30;
		// sb.Append('[');
		StringBuilder_t* L_31 = V_9;
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_31, ((int32_t)91), NULL);
		// for (int i = 0; i < list.Length; ++i)
		V_10 = 0;
		goto IL_00c2;
	}

IL_0099:
	{
		// if (i > 0) sb.Append(',');
		int32_t L_33 = V_10;
		V_11 = (bool)((((int32_t)L_33) > ((int32_t)0))? 1 : 0);
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_00af;
		}
	}
	{
		// if (i > 0) sb.Append(',');
		StringBuilder_t* L_35 = V_9;
		NullCheck(L_35);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_35, ((int32_t)44), NULL);
	}

IL_00af:
	{
		// sb.Append(list[i]);
		StringBuilder_t* L_37 = V_9;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_1;
		int32_t L_39 = V_10;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		RuntimeObject* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_37);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_37, L_41, NULL);
		// for (int i = 0; i < list.Length; ++i)
		int32_t L_43 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00c2:
	{
		// for (int i = 0; i < list.Length; ++i)
		int32_t L_44 = V_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = V_1;
		NullCheck(L_45);
		V_12 = (bool)((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))? 1 : 0);
		bool L_46 = V_12;
		if (L_46)
		{
			goto IL_0099;
		}
	}
	{
		// sb.Append(']');
		StringBuilder_t* L_47 = V_9;
		NullCheck(L_47);
		StringBuilder_t* L_48;
		L_48 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_47, ((int32_t)93), NULL);
		// return sb.ToString();
		StringBuilder_t* L_49 = V_9;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_49);
		V_7 = L_50;
		goto IL_00e9;
	}

IL_00e4:
	{
		// return value;
		RuntimeObject* L_51 = ___value0;
		V_7 = L_51;
		goto IL_00e9;
	}

IL_00e9:
	{
		// }
		RuntimeObject* L_52 = V_7;
		return L_52;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A (MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* __this, const RuntimeMethod* method) 
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
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::get_SessionPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttMsgConnack_get_SessionPresent_m9BFC2BFA92F1FDFE025EA6A2F0A7B291003494D1 (MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return this.sessionPresent; }
		bool L_0 = __this->___sessionPresent_70;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.sessionPresent; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::set_SessionPresent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnack_set_SessionPresent_m197F00FF4E750306E45826643595A98F8B935D64 (MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.sessionPresent = value; }
		bool L_0 = ___value0;
		__this->___sessionPresent_70 = L_0;
		// set { this.sessionPresent = value; }
		return;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::get_ReturnCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MqttMsgConnack_get_ReturnCode_m4EFDCAC156656B0552A3EA8A8BD336C44E60F485 (MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		// get { return this.returnCode; }
		uint8_t L_0 = __this->___returnCode_71;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.returnCode; }
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::set_ReturnCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnack_set_ReturnCode_m15AADAFF2279E86B295A5F51D0DE514029D89036 (MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.returnCode = value; }
		uint8_t L_0 = ___value0;
		__this->___returnCode_71 = L_0;
		// set { this.returnCode = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnack__ctor_m9DC0B9219E32D98964FBE8ADECCCC3E7919F1D61 (MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgConnack()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_CONNACK_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)2;
		// }
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE* MqttMsgConnack_Parse_mF176898C4A01F203B82F08E60E419DF980989F5A (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE* V_6 = NULL;
	{
		// MqttMsgConnack msg = new MqttMsgConnack();
		MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE* L_0 = (MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE*)il2cpp_codegen_object_new(MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgConnack__ctor_m9DC0B9219E32D98964FBE8ADECCCC3E7919F1D61(L_0, NULL);
		V_1 = L_0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion1;
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// if ((fixedHeaderFirstByte & MSG_FLAG_BITS_MASK) != MQTT_MSG_CONNACK_FLAG_BITS)
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidFlagBits);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgConnack_Parse_mF176898C4A01F203B82F08E60E419DF980989F5A_RuntimeMethod_var)));
	}

IL_0025:
	{
	}

IL_0026:
	{
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_2 = L_7;
		// buffer = new byte[remainingLength];
		int32_t L_8 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		// channel.Receive(buffer);
		RuntimeObject* L_10 = ___channel2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_10, L_11);
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_13 = ___protocolVersion1;
		V_5 = (bool)((((int32_t)L_13) == ((int32_t)4))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0056;
		}
	}
	{
		// msg.sessionPresent = (buffer[CONN_ACK_FLAGS_BYTE_OFFSET] & SESSION_PRESENT_FLAG_MASK) != 0x00;
		MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE* L_15 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = 0;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_15);
		L_15->___sessionPresent_70 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_18&1))) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0056:
	{
		// msg.returnCode = buffer[CONN_RETURN_CODE_BYTE_OFFSET];
		MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE* L_19 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = 1;
		uint8_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_19);
		L_19->___returnCode_71 = L_22;
		// return msg;
		MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE* L_23 = V_1;
		V_6 = L_23;
		goto IL_0064;
	}

IL_0064:
	{
		// }
		MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE* L_24 = V_6;
		return L_24;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgConnack_GetBytes_mEFCBC3285917A27038AB270FD5FF427D2A714073 (MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE* __this, uint8_t ___ProtocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_11 = NULL;
	int32_t G_B11_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B11_1 = NULL;
	int32_t G_B10_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B10_1 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B12_2 = NULL;
	{
		// int fixedHeaderSize = 0;
		V_0 = 0;
		// int varHeaderSize = 0;
		V_1 = 0;
		// int payloadSize = 0;
		V_2 = 0;
		// int remainingLength = 0;
		V_3 = 0;
		// int index = 0;
		V_5 = 0;
		// if (ProtocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_0 = ___ProtocolVersion0;
		V_7 = (bool)((((int32_t)L_0) == ((int32_t)4))? 1 : 0);
		bool L_1 = V_7;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// varHeaderSize += (CONN_ACK_FLAGS_BYTE_SIZE + CONN_RETURN_CODE_BYTE_SIZE);
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 2));
		goto IL_0020;
	}

IL_001c:
	{
		// varHeaderSize += (TOPIC_NAME_COMP_RESP_BYTE_SIZE + CONN_RETURN_CODE_BYTE_SIZE);
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 2));
	}

IL_0020:
	{
		// remainingLength += (varHeaderSize + payloadSize);
		int32_t L_4 = V_3;
		int32_t L_5 = V_1;
		int32_t L_6 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)il2cpp_codegen_add(L_5, L_6))));
		// fixedHeaderSize = 1;
		V_0 = 1;
		// int temp = remainingLength;
		int32_t L_7 = V_3;
		V_6 = L_7;
	}

IL_002b:
	{
		// fixedHeaderSize++;
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// temp = temp / 128;
		int32_t L_9 = V_6;
		V_6 = ((int32_t)(L_9/((int32_t)128)));
		// } while (temp > 0);
		int32_t L_10 = V_6;
		V_8 = (bool)((((int32_t)L_10) > ((int32_t)0))? 1 : 0);
		bool L_11 = V_8;
		if (L_11)
		{
			goto IL_002b;
		}
	}
	{
		// buffer = new byte[fixedHeaderSize + varHeaderSize + payloadSize];
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_12, L_13)), L_14)));
		V_4 = L_15;
		// if (ProtocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_16 = ___ProtocolVersion0;
		V_9 = (bool)((((int32_t)L_16) == ((int32_t)4))? 1 : 0);
		bool L_17 = V_9;
		if (!L_17)
		{
			goto IL_006a;
		}
	}
	{
		// buffer[index++] = (MQTT_MSG_CONNACK_TYPE << MSG_TYPE_OFFSET) | MQTT_MSG_CONNACK_FLAG_BITS; // [v.3.1.1]
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)((int32_t)32));
		goto IL_0076;
	}

IL_006a:
	{
		// buffer[index++] = (byte)(MQTT_MSG_CONNACK_TYPE << MSG_TYPE_OFFSET);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_4;
		int32_t L_22 = V_5;
		int32_t L_23 = L_22;
		V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)((int32_t)32));
	}

IL_0076:
	{
		// index = this.encodeRemainingLength(remainingLength, buffer, index);
		int32_t L_24 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27;
		L_27 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_24, L_25, L_26, NULL);
		V_5 = L_27;
		// if (ProtocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_28 = ___ProtocolVersion0;
		V_10 = (bool)((((int32_t)L_28) == ((int32_t)4))? 1 : 0);
		bool L_29 = V_10;
		if (!L_29)
		{
			goto IL_00a5;
		}
	}
	{
		// buffer[index++] = this.sessionPresent ? (byte)(1 << SESSION_PRESENT_FLAG_OFFSET) : (byte)0x00;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_4;
		int32_t L_31 = V_5;
		int32_t L_32 = L_31;
		V_5 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		bool L_33 = __this->___sessionPresent_70;
		G_B10_0 = L_32;
		G_B10_1 = L_30;
		if (L_33)
		{
			G_B11_0 = L_32;
			G_B11_1 = L_30;
			goto IL_00a1;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_00a2;
	}

IL_00a1:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_00a2:
	{
		NullCheck(G_B12_2);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (uint8_t)G_B12_0);
		goto IL_00b0;
	}

IL_00a5:
	{
		// buffer[index++] = 0x00;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_4;
		int32_t L_35 = V_5;
		int32_t L_36 = L_35;
		V_5 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint8_t)0);
	}

IL_00b0:
	{
		// buffer[index++] = this.returnCode;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_4;
		int32_t L_38 = V_5;
		int32_t L_39 = L_38;
		V_5 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		uint8_t L_40 = __this->___returnCode_71;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (uint8_t)L_40);
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_4;
		V_11 = L_41;
		goto IL_00c6;
	}

IL_00c6:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_11;
		return L_42;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgConnack_ToString_mD11EC7D923A4143E4B751D60A10A514A8B5804A9 (MqttMsgConnack_t62678D13F44CF1E8767309C3EE9216254FCF27BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral007C04A0DF8705F559207300B106C58F8E308FDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral693360C5A1F202D66DB2FE87ECF47A1E0A47B8E9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return this.GetTraceString(
		//     "CONNACK",
		//     new object[] { "returnCode" },
		//     new object[] { this.returnCode });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral007C04A0DF8705F559207300B106C58F8E308FDC);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral007C04A0DF8705F559207300B106C58F8E308FDC);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		uint8_t L_4 = __this->___returnCode_71;
		uint8_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		String_t* L_7;
		L_7 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteral693360C5A1F202D66DB2FE87ECF47A1E0A47B8E9, L_1, L_3, NULL);
		V_0 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		String_t* L_8 = V_0;
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
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_ProtocolName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgConnect_get_ProtocolName_mEBD6725301BB856EBD44D4091847D5207ED3888E (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return this.protocolName; }
		String_t* L_0 = __this->___protocolName_89;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.protocolName; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_ProtocolName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect_set_ProtocolName_m6A89FCF8881D6BA2B723EAEA69D5361B943A1BF3 (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.protocolName = value; }
		String_t* L_0 = ___value0;
		__this->___protocolName_89 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___protocolName_89), (void*)L_0);
		// set { this.protocolName = value; }
		return;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_ProtocolVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MqttMsgConnect_get_ProtocolVersion_m5B2BCB8BA0379C2FB2E64E9D52D0C7799BCC3A5E (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		// get { return this.protocolVersion; }
		uint8_t L_0 = __this->___protocolVersion_90;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.protocolVersion; }
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_ProtocolVersion(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect_set_ProtocolVersion_mDC6E135540FD2C830F2EFA6C87F68382C71AF3F4 (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.protocolVersion = value; }
		uint8_t L_0 = ___value0;
		__this->___protocolVersion_90 = L_0;
		// set { this.protocolVersion = value; }
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_ClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgConnect_get_ClientId_mAFED0AD344B144E0CDCCA7D805C3D4E63313413F (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return this.clientId; }
		String_t* L_0 = __this->___clientId_91;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.clientId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_ClientId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect_set_ClientId_m2B20DB41E5C07E582FBE864B2CC8C29306BB6293 (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.clientId = value; }
		String_t* L_0 = ___value0;
		__this->___clientId_91 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clientId_91), (void*)L_0);
		// set { this.clientId = value; }
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_WillRetain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttMsgConnect_get_WillRetain_m255FE49612D6C7D1F66FF9B871EBA6E20868E529 (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return this.willRetain; }
		bool L_0 = __this->___willRetain_92;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.willRetain; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_WillRetain(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect_set_WillRetain_m09768D8DA0B1C8FE941AC700CF849C7532DDEBAB (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.willRetain = value; }
		bool L_0 = ___value0;
		__this->___willRetain_92 = L_0;
		// set { this.willRetain = value; }
		return;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_WillQosLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MqttMsgConnect_get_WillQosLevel_mF4D411884D2ECBD7C0590765296B60C8166458B8 (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		// get { return this.willQosLevel; }
		uint8_t L_0 = __this->___willQosLevel_93;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.willQosLevel; }
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_WillQosLevel(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect_set_WillQosLevel_mDA0126AE2C7F31866D2DDB8E9013606A2A26E58A (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.willQosLevel = value; }
		uint8_t L_0 = ___value0;
		__this->___willQosLevel_93 = L_0;
		// set { this.willQosLevel = value; }
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_WillFlag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttMsgConnect_get_WillFlag_mAA64D7E1B4D8F512D9DAC5530681EFFB55946305 (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return this.willFlag; }
		bool L_0 = __this->___willFlag_94;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.willFlag; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_WillFlag(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect_set_WillFlag_m90DDE1AEB81AB21C9A63EB799A2FC3B91806F4E7 (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.willFlag = value; }
		bool L_0 = ___value0;
		__this->___willFlag_94 = L_0;
		// set { this.willFlag = value; }
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_WillTopic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgConnect_get_WillTopic_m584444661C1C00619575EE45FF0035CA88E6456A (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return this.willTopic; }
		String_t* L_0 = __this->___willTopic_95;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.willTopic; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_WillTopic(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect_set_WillTopic_m28FE76A997AACD2E986F2FAE52F34D2E8F291CF1 (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.willTopic = value; }
		String_t* L_0 = ___value0;
		__this->___willTopic_95 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___willTopic_95), (void*)L_0);
		// set { this.willTopic = value; }
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_WillMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgConnect_get_WillMessage_m0E7FCCADAC70C49CC9CDEE497FBD9E7AECED3E31 (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return this.willMessage; }
		String_t* L_0 = __this->___willMessage_96;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.willMessage; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_WillMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect_set_WillMessage_m28D679F68E7FBEFC7A2E35D601D787010588DF98 (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.willMessage = value; }
		String_t* L_0 = ___value0;
		__this->___willMessage_96 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___willMessage_96), (void*)L_0);
		// set { this.willMessage = value; }
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_Username()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgConnect_get_Username_mAB1E387C172481FC06F094F1B3F9977A43AF6F22 (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return this.username; }
		String_t* L_0 = __this->___username_97;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.username; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_Username(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect_set_Username_mA48723AC5627B36DECABB2AABB323D8EA4D1B3ED (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.username = value; }
		String_t* L_0 = ___value0;
		__this->___username_97 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___username_97), (void*)L_0);
		// set { this.username = value; }
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_Password()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgConnect_get_Password_m9A98A1DEFCAD24A00B666533EDE8A439C67679DA (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return this.password; }
		String_t* L_0 = __this->___password_98;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.password; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_Password(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect_set_Password_mD20A0CED81A879C29FB47025D88FF4E421C735DC (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.password = value; }
		String_t* L_0 = ___value0;
		__this->___password_98 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___password_98), (void*)L_0);
		// set { this.password = value; }
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_CleanSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttMsgConnect_get_CleanSession_m0A8619FB0A5A1318A83436C7EF61FE908F37E1ED (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return this.cleanSession; }
		bool L_0 = __this->___cleanSession_99;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.cleanSession; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_CleanSession(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect_set_CleanSession_mC743C6D4CFD15FE903F33227AD73D3E74F0F4D29 (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.cleanSession = value; }
		bool L_0 = ___value0;
		__this->___cleanSession_99 = L_0;
		// set { this.cleanSession = value; }
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_KeepAlivePeriod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgConnect_get_KeepAlivePeriod_m766A1BC5A8A5180488224B67BAFD664AEA5263D0 (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		// get { return this.keepAlivePeriod; }
		uint16_t L_0 = __this->___keepAlivePeriod_100;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.keepAlivePeriod; }
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_KeepAlivePeriod(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect_set_KeepAlivePeriod_m6C7313C243573A6B7AFA592B6115CA163F60C6B8 (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.keepAlivePeriod = value; }
		uint16_t L_0 = ___value0;
		__this->___keepAlivePeriod_100 = L_0;
		// set { this.keepAlivePeriod = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect__ctor_mE46A25E3E15C2D87E4442050527BE5CF737D9B9A (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgConnect()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_CONNECT_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)1;
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect__ctor_mE17FAE1BEE2162C8600EDEAE7760950771A96885 (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, String_t* ___clientId0, const RuntimeMethod* method) 
{
	{
		// this(clientId, null, null, false, QOS_LEVEL_AT_LEAST_ONCE, false, null, null, true, KEEP_ALIVE_PERIOD_DEFAULT, PROTOCOL_VERSION_V3_1_1)
		String_t* L_0 = ___clientId0;
		MqttMsgConnect__ctor_m350F9EBDC8792A4A0C1769017F4448532F0C4B6B(__this, L_0, (String_t*)NULL, (String_t*)NULL, (bool)0, (uint8_t)1, (bool)0, (String_t*)NULL, (String_t*)NULL, (bool)1, (uint16_t)((int32_t)60), (uint8_t)4, NULL);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::.ctor(System.String,System.String,System.String,System.Boolean,System.Byte,System.Boolean,System.String,System.String,System.Boolean,System.UInt16,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnect__ctor_m350F9EBDC8792A4A0C1769017F4448532F0C4B6B (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, String_t* ___clientId0, String_t* ___username1, String_t* ___password2, bool ___willRetain3, uint8_t ___willQosLevel4, bool ___willFlag5, String_t* ___willTopic6, String_t* ___willMessage7, bool ___cleanSession8, uint16_t ___keepAlivePeriod9, uint8_t ___protocolVersion10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F05F385A53C37686A0F0D62F6A95587A4380660);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC75761AFD847946FA4E424AAA30BBCCEAF105DB1);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* G_B2_0 = NULL;
	MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* G_B3_1 = NULL;
	{
		// public MqttMsgConnect(string clientId,
		//     string username,
		//     string password,
		//     bool willRetain,
		//     byte willQosLevel,
		//     bool willFlag,
		//     string willTopic,
		//     string willMessage,
		//     bool cleanSession,
		//     ushort keepAlivePeriod,
		//     byte protocolVersion
		//     )
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_CONNECT_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)1;
		// this.clientId = clientId;
		String_t* L_0 = ___clientId0;
		__this->___clientId_91 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clientId_91), (void*)L_0);
		// this.username = username;
		String_t* L_1 = ___username1;
		__this->___username_97 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___username_97), (void*)L_1);
		// this.password = password;
		String_t* L_2 = ___password2;
		__this->___password_98 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___password_98), (void*)L_2);
		// this.willRetain = willRetain;
		bool L_3 = ___willRetain3;
		__this->___willRetain_92 = L_3;
		// this.willQosLevel = willQosLevel;
		uint8_t L_4 = ___willQosLevel4;
		__this->___willQosLevel_93 = L_4;
		// this.willFlag = willFlag;
		bool L_5 = ___willFlag5;
		__this->___willFlag_94 = L_5;
		// this.willTopic = willTopic;
		String_t* L_6 = ___willTopic6;
		__this->___willTopic_95 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___willTopic_95), (void*)L_6);
		// this.willMessage = willMessage;
		String_t* L_7 = ___willMessage7;
		__this->___willMessage_96 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___willMessage_96), (void*)L_7);
		// this.cleanSession = cleanSession;
		bool L_8 = ___cleanSession8;
		__this->___cleanSession_99 = L_8;
		// this.keepAlivePeriod = keepAlivePeriod;
		uint16_t L_9 = ___keepAlivePeriod9;
		__this->___keepAlivePeriod_100 = L_9;
		// this.protocolVersion = protocolVersion;
		uint8_t L_10 = ___protocolVersion10;
		__this->___protocolVersion_90 = L_10;
		// this.protocolName = (this.protocolVersion == PROTOCOL_VERSION_V3_1_1) ? PROTOCOL_NAME_V3_1_1 : PROTOCOL_NAME_V3_1;
		uint8_t L_11 = __this->___protocolVersion_90;
		G_B1_0 = __this;
		if ((((int32_t)L_11) == ((int32_t)4)))
		{
			G_B2_0 = __this;
			goto IL_0075;
		}
	}
	{
		G_B3_0 = _stringLiteralC75761AFD847946FA4E424AAA30BBCCEAF105DB1;
		G_B3_1 = G_B1_0;
		goto IL_007a;
	}

IL_0075:
	{
		G_B3_0 = _stringLiteral1F05F385A53C37686A0F0D62F6A95587A4380660;
		G_B3_1 = G_B2_0;
	}

IL_007a:
	{
		NullCheck(G_B3_1);
		G_B3_1->___protocolName_89 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___protocolName_89), (void*)G_B3_0);
		// }
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* MqttMsgConnect_Parse_mD438FDC90D31BB76AB101FBA201F2DE0C29C89E2 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F05F385A53C37686A0F0D62F6A95587A4380660);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC75761AFD847946FA4E424AAA30BBCCEAF105DB1);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t V_8 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	int32_t V_10 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_11 = NULL;
	int32_t V_12 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_13 = NULL;
	int32_t V_14 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_15 = NULL;
	MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* V_16 = NULL;
	int32_t V_17 = 0;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* V_24 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B14_0 = 0;
	{
		// int index = 0;
		V_1 = 0;
		// MqttMsgConnect msg = new MqttMsgConnect();
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_0 = (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6*)il2cpp_codegen_object_new(MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgConnect__ctor_mE46A25E3E15C2D87E4442050527BE5CF737D9B9A(L_0, NULL);
		V_16 = L_0;
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_1 = ___channel2;
		int32_t L_2;
		L_2 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_1, NULL);
		V_17 = L_2;
		// buffer = new byte[remainingLength];
		int32_t L_3 = V_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_0 = L_4;
		// channel.Receive(buffer);
		RuntimeObject* L_5 = ___channel2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_5, L_6);
		// protNameUtf8Length = ((buffer[index++] << 8) & 0xFF00);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		NullCheck(L_8);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = ((int32_t)(((int32_t)((int32_t)L_12<<8))&((int32_t)65280)));
		// protNameUtf8Length |= buffer[index++];
		int32_t L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = ((int32_t)(L_13|(int32_t)L_18));
		// protNameUtf8 = new byte[protNameUtf8Length];
		int32_t L_19 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_3 = L_20;
		// Array.Copy(buffer, index, protNameUtf8, 0, protNameUtf8Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		int32_t L_22 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_3;
		int32_t L_24 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, L_22, (RuntimeArray*)L_23, 0, L_24, NULL);
		// index += protNameUtf8Length;
		int32_t L_25 = V_1;
		int32_t L_26 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
		// msg.protocolName = new String(Encoding.UTF8.GetChars(protNameUtf8));
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_27 = V_16;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_28;
		L_28 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_3;
		NullCheck(L_28);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_30;
		L_30 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(24 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_28, L_29);
		String_t* L_31;
		L_31 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_30, NULL);
		NullCheck(L_27);
		L_27->___protocolName_89 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___protocolName_89), (void*)L_31);
		// if (!msg.protocolName.Equals(PROTOCOL_NAME_V3_1) && !msg.protocolName.Equals(PROTOCOL_NAME_V3_1_1))
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_32 = V_16;
		NullCheck(L_32);
		String_t* L_33 = L_32->___protocolName_89;
		NullCheck(L_33);
		bool L_34;
		L_34 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_33, _stringLiteralC75761AFD847946FA4E424AAA30BBCCEAF105DB1, NULL);
		if (L_34)
		{
			goto IL_0092;
		}
	}
	{
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_35 = V_16;
		NullCheck(L_35);
		String_t* L_36 = L_35->___protocolName_89;
		NullCheck(L_36);
		bool L_37;
		L_37 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_36, _stringLiteral1F05F385A53C37686A0F0D62F6A95587A4380660, NULL);
		G_B3_0 = ((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		goto IL_0093;
	}

IL_0092:
	{
		G_B3_0 = 0;
	}

IL_0093:
	{
		V_18 = (bool)G_B3_0;
		bool L_38 = V_18;
		if (!L_38)
		{
			goto IL_00a1;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidProtocolName);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_39 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_39);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_39, ((int32_t)15), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgConnect_Parse_mD438FDC90D31BB76AB101FBA201F2DE0C29C89E2_RuntimeMethod_var)));
	}

IL_00a1:
	{
		// msg.protocolVersion = buffer[index];
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_40 = V_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_0;
		int32_t L_42 = V_1;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		uint8_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_40);
		L_40->___protocolVersion_90 = L_44;
		// index += PROTOCOL_VERSION_SIZE;
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		// if ((msg.protocolVersion == PROTOCOL_VERSION_V3_1_1) &&
		//     ((buffer[index] & RESERVED_FLAG_MASK) != 0x00))
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_46 = V_16;
		NullCheck(L_46);
		uint8_t L_47 = L_46->___protocolVersion_90;
		if ((!(((uint32_t)L_47) == ((uint32_t)4))))
		{
			goto IL_00c3;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_0;
		int32_t L_49 = V_1;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		uint8_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		G_B8_0 = ((!(((uint32_t)((int32_t)((int32_t)L_51&1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_00c4;
	}

IL_00c3:
	{
		G_B8_0 = 0;
	}

IL_00c4:
	{
		V_19 = (bool)G_B8_0;
		bool L_52 = V_19;
		if (!L_52)
		{
			goto IL_00d2;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidConnectFlags);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_53 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_53);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_53, ((int32_t)13), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgConnect_Parse_mD438FDC90D31BB76AB101FBA201F2DE0C29C89E2_RuntimeMethod_var)));
	}

IL_00d2:
	{
		// isUsernameFlag = (buffer[index] & USERNAME_FLAG_MASK) != 0x00;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_0;
		int32_t L_55 = V_1;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		uint8_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_57&((int32_t)128)))) <= ((uint32_t)0)))? 1 : 0);
		// isPasswordFlag = (buffer[index] & PASSWORD_FLAG_MASK) != 0x00;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_0;
		int32_t L_59 = V_1;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		uint8_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_61&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		// msg.willRetain = (buffer[index] & WILL_RETAIN_FLAG_MASK) != 0x00;
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_62 = V_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_0;
		int32_t L_64 = V_1;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		uint8_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_62);
		L_62->___willRetain_92 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_66&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		// msg.willQosLevel = (byte)((buffer[index] & WILL_QOS_FLAG_MASK) >> WILL_QOS_FLAG_OFFSET);
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_67 = V_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_0;
		int32_t L_69 = V_1;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		uint8_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_67);
		L_67->___willQosLevel_93 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_71&((int32_t)24)))>>3)));
		// msg.willFlag = (buffer[index] & WILL_FLAG_MASK) != 0x00;
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_72 = V_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = V_0;
		int32_t L_74 = V_1;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		uint8_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_72);
		L_72->___willFlag_94 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_76&4))) <= ((uint32_t)0)))? 1 : 0);
		// msg.cleanSession = (buffer[index] & CLEAN_SESSION_FLAG_MASK) != 0x00;
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_77 = V_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = V_0;
		int32_t L_79 = V_1;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		uint8_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_77);
		L_77->___cleanSession_99 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_81&2))) <= ((uint32_t)0)))? 1 : 0);
		// index += CONNECT_FLAGS_SIZE;
		int32_t L_82 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_82, 1));
		// msg.keepAlivePeriod = (ushort)((buffer[index++] << 8) & 0xFF00);
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_83 = V_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = V_0;
		int32_t L_85 = V_1;
		int32_t L_86 = L_85;
		V_1 = ((int32_t)il2cpp_codegen_add(L_86, 1));
		NullCheck(L_84);
		int32_t L_87 = L_86;
		uint8_t L_88 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_83);
		L_83->___keepAlivePeriod_100 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_88<<8))&((int32_t)65280))));
		// msg.keepAlivePeriod |= buffer[index++];
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_89 = V_16;
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_90 = L_89;
		NullCheck(L_90);
		uint16_t L_91 = L_90->___keepAlivePeriod_100;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = V_0;
		int32_t L_93 = V_1;
		int32_t L_94 = L_93;
		V_1 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		NullCheck(L_92);
		int32_t L_95 = L_94;
		uint8_t L_96 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		NullCheck(L_90);
		L_90->___keepAlivePeriod_100 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_91|(int32_t)L_96)));
		// clientIdUtf8Length = ((buffer[index++] << 8) & 0xFF00);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = V_0;
		int32_t L_98 = V_1;
		int32_t L_99 = L_98;
		V_1 = ((int32_t)il2cpp_codegen_add(L_99, 1));
		NullCheck(L_97);
		int32_t L_100 = L_99;
		uint8_t L_101 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		V_6 = ((int32_t)(((int32_t)((int32_t)L_101<<8))&((int32_t)65280)));
		// clientIdUtf8Length |= buffer[index++];
		int32_t L_102 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = V_0;
		int32_t L_104 = V_1;
		int32_t L_105 = L_104;
		V_1 = ((int32_t)il2cpp_codegen_add(L_105, 1));
		NullCheck(L_103);
		int32_t L_106 = L_105;
		uint8_t L_107 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_6 = ((int32_t)(L_102|(int32_t)L_107));
		// clientIdUtf8 = new byte[clientIdUtf8Length];
		int32_t L_108 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_108);
		V_7 = L_109;
		// Array.Copy(buffer, index, clientIdUtf8, 0, clientIdUtf8Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_110 = V_0;
		int32_t L_111 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_7;
		int32_t L_113 = V_6;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_110, L_111, (RuntimeArray*)L_112, 0, L_113, NULL);
		// index += clientIdUtf8Length;
		int32_t L_114 = V_1;
		int32_t L_115 = V_6;
		V_1 = ((int32_t)il2cpp_codegen_add(L_114, L_115));
		// msg.clientId = new String(Encoding.UTF8.GetChars(clientIdUtf8));
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_116 = V_16;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_117;
		L_117 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_118 = V_7;
		NullCheck(L_117);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_119;
		L_119 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(24 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_117, L_118);
		String_t* L_120;
		L_120 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_119, NULL);
		NullCheck(L_116);
		L_116->___clientId_91 = L_120;
		Il2CppCodeGenWriteBarrier((void**)(&L_116->___clientId_91), (void*)L_120);
		// if ((msg.protocolVersion == PROTOCOL_VERSION_V3_1_1) && (clientIdUtf8Length == 0) && (!msg.cleanSession))
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_121 = V_16;
		NullCheck(L_121);
		uint8_t L_122 = L_121->___protocolVersion_90;
		if ((!(((uint32_t)L_122) == ((uint32_t)4))))
		{
			goto IL_01c4;
		}
	}
	{
		int32_t L_123 = V_6;
		if (L_123)
		{
			goto IL_01c4;
		}
	}
	{
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_124 = V_16;
		NullCheck(L_124);
		bool L_125 = L_124->___cleanSession_99;
		G_B14_0 = ((((int32_t)L_125) == ((int32_t)0))? 1 : 0);
		goto IL_01c5;
	}

IL_01c4:
	{
		G_B14_0 = 0;
	}

IL_01c5:
	{
		V_20 = (bool)G_B14_0;
		bool L_126 = V_20;
		if (!L_126)
		{
			goto IL_01d3;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidClientId);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_127 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_127);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_127, ((int32_t)14), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_127, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgConnect_Parse_mD438FDC90D31BB76AB101FBA201F2DE0C29C89E2_RuntimeMethod_var)));
	}

IL_01d3:
	{
		// if (msg.willFlag)
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_128 = V_16;
		NullCheck(L_128);
		bool L_129 = L_128->___willFlag_94;
		V_21 = L_129;
		bool L_130 = V_21;
		if (!L_130)
		{
			goto IL_0285;
		}
	}
	{
		// willTopicUtf8Length = ((buffer[index++] << 8) & 0xFF00);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_131 = V_0;
		int32_t L_132 = V_1;
		int32_t L_133 = L_132;
		V_1 = ((int32_t)il2cpp_codegen_add(L_133, 1));
		NullCheck(L_131);
		int32_t L_134 = L_133;
		uint8_t L_135 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		V_8 = ((int32_t)(((int32_t)((int32_t)L_135<<8))&((int32_t)65280)));
		// willTopicUtf8Length |= buffer[index++];
		int32_t L_136 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_137 = V_0;
		int32_t L_138 = V_1;
		int32_t L_139 = L_138;
		V_1 = ((int32_t)il2cpp_codegen_add(L_139, 1));
		NullCheck(L_137);
		int32_t L_140 = L_139;
		uint8_t L_141 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		V_8 = ((int32_t)(L_136|(int32_t)L_141));
		// willTopicUtf8 = new byte[willTopicUtf8Length];
		int32_t L_142 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_143 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_142);
		V_9 = L_143;
		// Array.Copy(buffer, index, willTopicUtf8, 0, willTopicUtf8Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_144 = V_0;
		int32_t L_145 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_146 = V_9;
		int32_t L_147 = V_8;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_144, L_145, (RuntimeArray*)L_146, 0, L_147, NULL);
		// index += willTopicUtf8Length;
		int32_t L_148 = V_1;
		int32_t L_149 = V_8;
		V_1 = ((int32_t)il2cpp_codegen_add(L_148, L_149));
		// msg.willTopic = new String(Encoding.UTF8.GetChars(willTopicUtf8));
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_150 = V_16;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_151;
		L_151 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_152 = V_9;
		NullCheck(L_151);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_153;
		L_153 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(24 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_151, L_152);
		String_t* L_154;
		L_154 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_153, NULL);
		NullCheck(L_150);
		L_150->___willTopic_95 = L_154;
		Il2CppCodeGenWriteBarrier((void**)(&L_150->___willTopic_95), (void*)L_154);
		// willMessageUtf8Length = ((buffer[index++] << 8) & 0xFF00);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_155 = V_0;
		int32_t L_156 = V_1;
		int32_t L_157 = L_156;
		V_1 = ((int32_t)il2cpp_codegen_add(L_157, 1));
		NullCheck(L_155);
		int32_t L_158 = L_157;
		uint8_t L_159 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		V_10 = ((int32_t)(((int32_t)((int32_t)L_159<<8))&((int32_t)65280)));
		// willMessageUtf8Length |= buffer[index++];
		int32_t L_160 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_161 = V_0;
		int32_t L_162 = V_1;
		int32_t L_163 = L_162;
		V_1 = ((int32_t)il2cpp_codegen_add(L_163, 1));
		NullCheck(L_161);
		int32_t L_164 = L_163;
		uint8_t L_165 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		V_10 = ((int32_t)(L_160|(int32_t)L_165));
		// willMessageUtf8 = new byte[willMessageUtf8Length];
		int32_t L_166 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_167 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_166);
		V_11 = L_167;
		// Array.Copy(buffer, index, willMessageUtf8, 0, willMessageUtf8Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_168 = V_0;
		int32_t L_169 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_170 = V_11;
		int32_t L_171 = V_10;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_168, L_169, (RuntimeArray*)L_170, 0, L_171, NULL);
		// index += willMessageUtf8Length;
		int32_t L_172 = V_1;
		int32_t L_173 = V_10;
		V_1 = ((int32_t)il2cpp_codegen_add(L_172, L_173));
		// msg.willMessage = new String(Encoding.UTF8.GetChars(willMessageUtf8));
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_174 = V_16;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_175;
		L_175 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_176 = V_11;
		NullCheck(L_175);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_177;
		L_177 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(24 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_175, L_176);
		String_t* L_178;
		L_178 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_177, NULL);
		NullCheck(L_174);
		L_174->___willMessage_96 = L_178;
		Il2CppCodeGenWriteBarrier((void**)(&L_174->___willMessage_96), (void*)L_178);
	}

IL_0285:
	{
		// if (isUsernameFlag)
		bool L_179 = V_4;
		V_22 = L_179;
		bool L_180 = V_22;
		if (!L_180)
		{
			goto IL_02df;
		}
	}
	{
		// usernameUtf8Length = ((buffer[index++] << 8) & 0xFF00);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_181 = V_0;
		int32_t L_182 = V_1;
		int32_t L_183 = L_182;
		V_1 = ((int32_t)il2cpp_codegen_add(L_183, 1));
		NullCheck(L_181);
		int32_t L_184 = L_183;
		uint8_t L_185 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		V_12 = ((int32_t)(((int32_t)((int32_t)L_185<<8))&((int32_t)65280)));
		// usernameUtf8Length |= buffer[index++];
		int32_t L_186 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_187 = V_0;
		int32_t L_188 = V_1;
		int32_t L_189 = L_188;
		V_1 = ((int32_t)il2cpp_codegen_add(L_189, 1));
		NullCheck(L_187);
		int32_t L_190 = L_189;
		uint8_t L_191 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		V_12 = ((int32_t)(L_186|(int32_t)L_191));
		// usernameUtf8 = new byte[usernameUtf8Length];
		int32_t L_192 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_193 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_192);
		V_13 = L_193;
		// Array.Copy(buffer, index, usernameUtf8, 0, usernameUtf8Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_194 = V_0;
		int32_t L_195 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_196 = V_13;
		int32_t L_197 = V_12;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_194, L_195, (RuntimeArray*)L_196, 0, L_197, NULL);
		// index += usernameUtf8Length;
		int32_t L_198 = V_1;
		int32_t L_199 = V_12;
		V_1 = ((int32_t)il2cpp_codegen_add(L_198, L_199));
		// msg.username = new String(Encoding.UTF8.GetChars(usernameUtf8));
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_200 = V_16;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_201;
		L_201 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_202 = V_13;
		NullCheck(L_201);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_203;
		L_203 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(24 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_201, L_202);
		String_t* L_204;
		L_204 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_203, NULL);
		NullCheck(L_200);
		L_200->___username_97 = L_204;
		Il2CppCodeGenWriteBarrier((void**)(&L_200->___username_97), (void*)L_204);
	}

IL_02df:
	{
		// if (isPasswordFlag)
		bool L_205 = V_5;
		V_23 = L_205;
		bool L_206 = V_23;
		if (!L_206)
		{
			goto IL_0339;
		}
	}
	{
		// passwordUtf8Length = ((buffer[index++] << 8) & 0xFF00);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_207 = V_0;
		int32_t L_208 = V_1;
		int32_t L_209 = L_208;
		V_1 = ((int32_t)il2cpp_codegen_add(L_209, 1));
		NullCheck(L_207);
		int32_t L_210 = L_209;
		uint8_t L_211 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		V_14 = ((int32_t)(((int32_t)((int32_t)L_211<<8))&((int32_t)65280)));
		// passwordUtf8Length |= buffer[index++];
		int32_t L_212 = V_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_213 = V_0;
		int32_t L_214 = V_1;
		int32_t L_215 = L_214;
		V_1 = ((int32_t)il2cpp_codegen_add(L_215, 1));
		NullCheck(L_213);
		int32_t L_216 = L_215;
		uint8_t L_217 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		V_14 = ((int32_t)(L_212|(int32_t)L_217));
		// passwordUtf8 = new byte[passwordUtf8Length];
		int32_t L_218 = V_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_219 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_218);
		V_15 = L_219;
		// Array.Copy(buffer, index, passwordUtf8, 0, passwordUtf8Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_220 = V_0;
		int32_t L_221 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_222 = V_15;
		int32_t L_223 = V_14;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_220, L_221, (RuntimeArray*)L_222, 0, L_223, NULL);
		// index += passwordUtf8Length;
		int32_t L_224 = V_1;
		int32_t L_225 = V_14;
		V_1 = ((int32_t)il2cpp_codegen_add(L_224, L_225));
		// msg.password = new String(Encoding.UTF8.GetChars(passwordUtf8));
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_226 = V_16;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_227;
		L_227 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_228 = V_15;
		NullCheck(L_227);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_229;
		L_229 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(24 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_227, L_228);
		String_t* L_230;
		L_230 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_229, NULL);
		NullCheck(L_226);
		L_226->___password_98 = L_230;
		Il2CppCodeGenWriteBarrier((void**)(&L_226->___password_98), (void*)L_230);
	}

IL_0339:
	{
		// return msg;
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_231 = V_16;
		V_24 = L_231;
		goto IL_033f;
	}

IL_033f:
	{
		// }
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_232 = V_24;
		return L_232;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgConnect_GetBytes_m96CF8B8667EC640CA0EF2B1EB65058012F8DA6C2 (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, uint8_t ___protocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F05F385A53C37686A0F0D62F6A95587A4380660);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC75761AFD847946FA4E424AAA30BBCCEAF105DB1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	int32_t V_11 = 0;
	uint8_t V_12 = 0x0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_26 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B8_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B12_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B16_0 = NULL;
	int32_t G_B26_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B45_0 = 0;
	int32_t G_B53_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B63_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B64_0 = 0;
	int32_t G_B64_1 = 0;
	int32_t G_B66_0 = 0;
	int32_t G_B65_0 = 0;
	int32_t G_B67_0 = 0;
	int32_t G_B67_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	uint8_t G_B77_0 = 0x0;
	uint8_t G_B76_0 = 0x0;
	int32_t G_B78_0 = 0;
	uint8_t G_B78_1 = 0x0;
	uint8_t G_B80_0 = 0x0;
	uint8_t G_B79_0 = 0x0;
	int32_t G_B81_0 = 0;
	uint8_t G_B81_1 = 0x0;
	uint8_t G_B83_0 = 0x0;
	uint8_t G_B82_0 = 0x0;
	int32_t G_B84_0 = 0;
	uint8_t G_B84_1 = 0x0;
	uint8_t G_B88_0 = 0x0;
	uint8_t G_B87_0 = 0x0;
	int32_t G_B89_0 = 0;
	uint8_t G_B89_1 = 0x0;
	uint8_t G_B91_0 = 0x0;
	uint8_t G_B90_0 = 0x0;
	int32_t G_B92_0 = 0;
	uint8_t G_B92_1 = 0x0;
	int32_t G_B95_0 = 0;
	int32_t G_B100_0 = 0;
	{
		// int fixedHeaderSize = 0;
		V_0 = 0;
		// int varHeaderSize = 0;
		V_1 = 0;
		// int payloadSize = 0;
		V_2 = 0;
		// int remainingLength = 0;
		V_3 = 0;
		// int index = 0;
		V_5 = 0;
		// byte[] clientIdUtf8 = Encoding.UTF8.GetBytes(this.clientId);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = __this->___clientId_91;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_6 = L_2;
		// byte[] willTopicUtf8 = (this.willFlag && (this.willTopic != null)) ? Encoding.UTF8.GetBytes(this.willTopic) : null;
		bool L_3 = __this->___willFlag_94;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_4 = __this->___willTopic_95;
		if (L_4)
		{
			goto IL_0031;
		}
	}

IL_002e:
	{
		G_B4_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(NULL));
		goto IL_0041;
	}

IL_0031:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
		L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_6 = __this->___willTopic_95;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
		G_B4_0 = L_7;
	}

IL_0041:
	{
		V_7 = G_B4_0;
		// byte[] willMessageUtf8 = (this.willFlag && (this.willMessage != null)) ? Encoding.UTF8.GetBytes(this.willMessage) : null;
		bool L_8 = __this->___willFlag_94;
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_9 = __this->___willMessage_96;
		if (L_9)
		{
			goto IL_0056;
		}
	}

IL_0053:
	{
		G_B8_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(NULL));
		goto IL_0066;
	}

IL_0056:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_11 = __this->___willMessage_96;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_10, L_11);
		G_B8_0 = L_12;
	}

IL_0066:
	{
		V_8 = G_B8_0;
		// byte[] usernameUtf8 = ((this.username != null) && (this.username.Length > 0)) ? Encoding.UTF8.GetBytes(this.username) : null;
		String_t* L_13 = __this->___username_97;
		if (!L_13)
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_14 = __this->___username_97;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_0081;
		}
	}

IL_007e:
	{
		G_B12_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(NULL));
		goto IL_0091;
	}

IL_0081:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_16;
		L_16 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_17 = __this->___username_97;
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_16, L_17);
		G_B12_0 = L_18;
	}

IL_0091:
	{
		V_9 = G_B12_0;
		// byte[] passwordUtf8 = ((this.password != null) && (this.password.Length > 0)) ? Encoding.UTF8.GetBytes(this.password) : null;
		String_t* L_19 = __this->___password_98;
		if (!L_19)
		{
			goto IL_00a9;
		}
	}
	{
		String_t* L_20 = __this->___password_98;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_20, NULL);
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_00ac;
		}
	}

IL_00a9:
	{
		G_B16_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(NULL));
		goto IL_00bc;
	}

IL_00ac:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_22;
		L_22 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_23 = __this->___password_98;
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_22, L_23);
		G_B16_0 = L_24;
	}

IL_00bc:
	{
		V_10 = G_B16_0;
		// if (this.protocolVersion == PROTOCOL_VERSION_V3_1_1)
		uint8_t L_25 = __this->___protocolVersion_90;
		V_13 = (bool)((((int32_t)L_25) == ((int32_t)4))? 1 : 0);
		bool L_26 = V_13;
		if (!L_26)
		{
			goto IL_0155;
		}
	}
	{
		// if (this.willFlag &&  ((this.willQosLevel >= 0x03) ||
		//                        (willTopicUtf8 == null) || (willMessageUtf8 == null) ||
		//                        ((willTopicUtf8 != null) && (willTopicUtf8.Length == 0)) ||
		//                        ((willMessageUtf8 != null) && (willMessageUtf8.Length == 0))))
		bool L_27 = __this->___willFlag_94;
		if (!L_27)
		{
			goto IL_0105;
		}
	}
	{
		uint8_t L_28 = __this->___willQosLevel_93;
		if ((((int32_t)L_28) >= ((int32_t)3)))
		{
			goto IL_0102;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_7;
		if (!L_29)
		{
			goto IL_0102;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_8;
		if (!L_30)
		{
			goto IL_0102;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_7;
		if (!L_31)
		{
			goto IL_00f3;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_7;
		NullCheck(L_32);
		if (!(((RuntimeArray*)L_32)->max_length))
		{
			goto IL_0102;
		}
	}

IL_00f3:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_8;
		if (!L_33)
		{
			goto IL_00ff;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_8;
		NullCheck(L_34);
		G_B26_0 = ((((int32_t)(((RuntimeArray*)L_34)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0100;
	}

IL_00ff:
	{
		G_B26_0 = 0;
	}

IL_0100:
	{
		G_B28_0 = G_B26_0;
		goto IL_0103;
	}

IL_0102:
	{
		G_B28_0 = 1;
	}

IL_0103:
	{
		G_B30_0 = G_B28_0;
		goto IL_0106;
	}

IL_0105:
	{
		G_B30_0 = 0;
	}

IL_0106:
	{
		V_14 = (bool)G_B30_0;
		bool L_35 = V_14;
		if (!L_35)
		{
			goto IL_0113;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.WillWrong);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_36 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_36);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_36, 1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgConnect_GetBytes_m96CF8B8667EC640CA0EF2B1EB65058012F8DA6C2_RuntimeMethod_var)));
	}

IL_0113:
	{
		// else if (!this.willFlag && ((this.willRetain) ||
		//                             (willTopicUtf8 != null) || (willMessageUtf8 != null) ||
		//                             ((willTopicUtf8 != null) && (willTopicUtf8.Length != 0)) ||
		//                             ((willMessageUtf8 != null) && (willMessageUtf8.Length != 0))))
		bool L_37 = __this->___willFlag_94;
		if (L_37)
		{
			goto IL_0146;
		}
	}
	{
		bool L_38 = __this->___willRetain_92;
		if (L_38)
		{
			goto IL_0143;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_7;
		if (L_39)
		{
			goto IL_0143;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_8;
		if (L_40)
		{
			goto IL_0143;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_7;
		if (!L_41)
		{
			goto IL_0134;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_7;
		NullCheck(L_42);
		if ((((RuntimeArray*)L_42)->max_length))
		{
			goto IL_0143;
		}
	}

IL_0134:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_8;
		if (!L_43)
		{
			goto IL_0140;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_8;
		NullCheck(L_44);
		G_B41_0 = ((!(((uint32_t)(((RuntimeArray*)L_44)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0141;
	}

IL_0140:
	{
		G_B41_0 = 0;
	}

IL_0141:
	{
		G_B43_0 = G_B41_0;
		goto IL_0144;
	}

IL_0143:
	{
		G_B43_0 = 1;
	}

IL_0144:
	{
		G_B45_0 = G_B43_0;
		goto IL_0147;
	}

IL_0146:
	{
		G_B45_0 = 0;
	}

IL_0147:
	{
		V_15 = (bool)G_B45_0;
		bool L_45 = V_15;
		if (!L_45)
		{
			goto IL_0154;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.WillWrong);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_46 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_46);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_46, 1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgConnect_GetBytes_m96CF8B8667EC640CA0EF2B1EB65058012F8DA6C2_RuntimeMethod_var)));
	}

IL_0154:
	{
	}

IL_0155:
	{
		// if (this.keepAlivePeriod > MAX_KEEP_ALIVE)
		uint16_t L_47 = __this->___keepAlivePeriod_100;
		V_16 = (bool)((((int32_t)L_47) > ((int32_t)((int32_t)65535)))? 1 : 0);
		bool L_48 = V_16;
		if (!L_48)
		{
			goto IL_016f;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.KeepAliveWrong);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_49 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_49);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_49, 2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgConnect_GetBytes_m96CF8B8667EC640CA0EF2B1EB65058012F8DA6C2_RuntimeMethod_var)));
	}

IL_016f:
	{
		// if ((this.willQosLevel < MqttMsgBase.QOS_LEVEL_AT_MOST_ONCE) ||
		//     (this.willQosLevel > MqttMsgBase.QOS_LEVEL_EXACTLY_ONCE))
		uint8_t L_50 = __this->___willQosLevel_93;
		if ((((int32_t)L_50) < ((int32_t)0)))
		{
			goto IL_0183;
		}
	}
	{
		uint8_t L_51 = __this->___willQosLevel_93;
		G_B53_0 = ((((int32_t)L_51) > ((int32_t)2))? 1 : 0);
		goto IL_0184;
	}

IL_0183:
	{
		G_B53_0 = 1;
	}

IL_0184:
	{
		V_17 = (bool)G_B53_0;
		bool L_52 = V_17;
		if (!L_52)
		{
			goto IL_0191;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.WillWrong);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_53 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_53);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_53, 1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgConnect_GetBytes_m96CF8B8667EC640CA0EF2B1EB65058012F8DA6C2_RuntimeMethod_var)));
	}

IL_0191:
	{
		// if (this.protocolVersion == PROTOCOL_VERSION_V3_1)
		uint8_t L_54 = __this->___protocolVersion_90;
		V_18 = (bool)((((int32_t)L_54) == ((int32_t)3))? 1 : 0);
		bool L_55 = V_18;
		if (!L_55)
		{
			goto IL_01a8;
		}
	}
	{
		// varHeaderSize += (PROTOCOL_NAME_LEN_SIZE + PROTOCOL_NAME_V3_1_SIZE);
		int32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_56, 8));
		goto IL_01ae;
	}

IL_01a8:
	{
		// varHeaderSize += (PROTOCOL_NAME_LEN_SIZE + PROTOCOL_NAME_V3_1_1_SIZE);
		int32_t L_57 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_57, 6));
	}

IL_01ae:
	{
		// varHeaderSize += PROTOCOL_VERSION_SIZE;
		int32_t L_58 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		// varHeaderSize += CONNECT_FLAGS_SIZE;
		int32_t L_59 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		// varHeaderSize += KEEP_ALIVE_TIME_SIZE;
		int32_t L_60 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_60, 2));
		// payloadSize += clientIdUtf8.Length + 2;
		int32_t L_61 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = V_6;
		NullCheck(L_62);
		V_2 = ((int32_t)il2cpp_codegen_add(L_61, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_62)->max_length)), 2))));
		// payloadSize += (willTopicUtf8 != null) ? (willTopicUtf8.Length + 2) : 0;
		int32_t L_63 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_7;
		G_B59_0 = L_63;
		if (L_64)
		{
			G_B60_0 = L_63;
			goto IL_01cb;
		}
	}
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_01d1;
	}

IL_01cb:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_7;
		NullCheck(L_65);
		G_B61_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_65)->max_length)), 2));
		G_B61_1 = G_B60_0;
	}

IL_01d1:
	{
		V_2 = ((int32_t)il2cpp_codegen_add(G_B61_1, G_B61_0));
		// payloadSize += (willMessageUtf8 != null) ? (willMessageUtf8.Length + 2) : 0;
		int32_t L_66 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_8;
		G_B62_0 = L_66;
		if (L_67)
		{
			G_B63_0 = L_66;
			goto IL_01db;
		}
	}
	{
		G_B64_0 = 0;
		G_B64_1 = G_B62_0;
		goto IL_01e1;
	}

IL_01db:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_8;
		NullCheck(L_68);
		G_B64_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_68)->max_length)), 2));
		G_B64_1 = G_B63_0;
	}

IL_01e1:
	{
		V_2 = ((int32_t)il2cpp_codegen_add(G_B64_1, G_B64_0));
		// payloadSize += (usernameUtf8 != null) ? (usernameUtf8.Length + 2) : 0;
		int32_t L_69 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = V_9;
		G_B65_0 = L_69;
		if (L_70)
		{
			G_B66_0 = L_69;
			goto IL_01eb;
		}
	}
	{
		G_B67_0 = 0;
		G_B67_1 = G_B65_0;
		goto IL_01f1;
	}

IL_01eb:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = V_9;
		NullCheck(L_71);
		G_B67_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_71)->max_length)), 2));
		G_B67_1 = G_B66_0;
	}

IL_01f1:
	{
		V_2 = ((int32_t)il2cpp_codegen_add(G_B67_1, G_B67_0));
		// payloadSize += (passwordUtf8 != null) ? (passwordUtf8.Length + 2) : 0;
		int32_t L_72 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = V_10;
		G_B68_0 = L_72;
		if (L_73)
		{
			G_B69_0 = L_72;
			goto IL_01fb;
		}
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_0201;
	}

IL_01fb:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = V_10;
		NullCheck(L_74);
		G_B70_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_74)->max_length)), 2));
		G_B70_1 = G_B69_0;
	}

IL_0201:
	{
		V_2 = ((int32_t)il2cpp_codegen_add(G_B70_1, G_B70_0));
		// remainingLength += (varHeaderSize + payloadSize);
		int32_t L_75 = V_3;
		int32_t L_76 = V_1;
		int32_t L_77 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_75, ((int32_t)il2cpp_codegen_add(L_76, L_77))));
		// fixedHeaderSize = 1;
		V_0 = 1;
		// int temp = remainingLength;
		int32_t L_78 = V_3;
		V_11 = L_78;
	}

IL_020e:
	{
		// fixedHeaderSize++;
		int32_t L_79 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_79, 1));
		// temp = temp / 128;
		int32_t L_80 = V_11;
		V_11 = ((int32_t)(L_80/((int32_t)128)));
		// } while (temp > 0);
		int32_t L_81 = V_11;
		V_19 = (bool)((((int32_t)L_81) > ((int32_t)0))? 1 : 0);
		bool L_82 = V_19;
		if (L_82)
		{
			goto IL_020e;
		}
	}
	{
		// buffer = new byte[fixedHeaderSize + varHeaderSize + payloadSize];
		int32_t L_83 = V_0;
		int32_t L_84 = V_1;
		int32_t L_85 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_83, L_84)), L_85)));
		V_4 = L_86;
		// buffer[index++] = (MQTT_MSG_CONNECT_TYPE << MSG_TYPE_OFFSET) | MQTT_MSG_CONNECT_FLAG_BITS; // [v.3.1.1]
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = V_4;
		int32_t L_88 = V_5;
		int32_t L_89 = L_88;
		V_5 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (uint8_t)((int32_t)16));
		// index = this.encodeRemainingLength(remainingLength, buffer, index);
		int32_t L_90 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = V_4;
		int32_t L_92 = V_5;
		int32_t L_93;
		L_93 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_90, L_91, L_92, NULL);
		V_5 = L_93;
		// buffer[index++] = 0; // MSB protocol name size
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = V_4;
		int32_t L_95 = V_5;
		int32_t L_96 = L_95;
		V_5 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(L_96), (uint8_t)0);
		// if (this.protocolVersion == PROTOCOL_VERSION_V3_1)
		uint8_t L_97 = __this->___protocolVersion_90;
		V_20 = (bool)((((int32_t)L_97) == ((int32_t)3))? 1 : 0);
		bool L_98 = V_20;
		if (!L_98)
		{
			goto IL_02a3;
		}
	}
	{
		// buffer[index++] = PROTOCOL_NAME_V3_1_SIZE; // LSB protocol name size
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = V_4;
		int32_t L_100 = V_5;
		int32_t L_101 = L_100;
		V_5 = ((int32_t)il2cpp_codegen_add(L_101, 1));
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(L_101), (uint8_t)6);
		// Array.Copy(Encoding.UTF8.GetBytes(PROTOCOL_NAME_V3_1), 0, buffer, index, PROTOCOL_NAME_V3_1_SIZE);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_102;
		L_102 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		NullCheck(L_102);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103;
		L_103 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_102, _stringLiteralC75761AFD847946FA4E424AAA30BBCCEAF105DB1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = V_4;
		int32_t L_105 = V_5;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_103, 0, (RuntimeArray*)L_104, L_105, 6, NULL);
		// index += PROTOCOL_NAME_V3_1_SIZE;
		int32_t L_106 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_106, 6));
		// buffer[index++] = PROTOCOL_VERSION_V3_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = V_4;
		int32_t L_108 = V_5;
		int32_t L_109 = L_108;
		V_5 = ((int32_t)il2cpp_codegen_add(L_109, 1));
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(L_109), (uint8_t)3);
		goto IL_02dc;
	}

IL_02a3:
	{
		// buffer[index++] = PROTOCOL_NAME_V3_1_1_SIZE; // LSB protocol name size
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_110 = V_4;
		int32_t L_111 = V_5;
		int32_t L_112 = L_111;
		V_5 = ((int32_t)il2cpp_codegen_add(L_112, 1));
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(L_112), (uint8_t)4);
		// Array.Copy(Encoding.UTF8.GetBytes(PROTOCOL_NAME_V3_1_1), 0, buffer, index, PROTOCOL_NAME_V3_1_1_SIZE);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_113;
		L_113 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		NullCheck(L_113);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_114;
		L_114 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_113, _stringLiteral1F05F385A53C37686A0F0D62F6A95587A4380660);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115 = V_4;
		int32_t L_116 = V_5;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_114, 0, (RuntimeArray*)L_115, L_116, 4, NULL);
		// index += PROTOCOL_NAME_V3_1_1_SIZE;
		int32_t L_117 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_117, 4));
		// buffer[index++] = PROTOCOL_VERSION_V3_1_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_118 = V_4;
		int32_t L_119 = V_5;
		int32_t L_120 = L_119;
		V_5 = ((int32_t)il2cpp_codegen_add(L_120, 1));
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(L_120), (uint8_t)4);
	}

IL_02dc:
	{
		// byte connectFlags = 0x00;
		V_12 = (uint8_t)0;
		// connectFlags |= (usernameUtf8 != null) ? (byte)(1 << USERNAME_FLAG_OFFSET) : (byte)0x00;
		uint8_t L_121 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_122 = V_9;
		G_B76_0 = L_121;
		if (L_122)
		{
			G_B77_0 = L_121;
			goto IL_02e8;
		}
	}
	{
		G_B78_0 = 0;
		G_B78_1 = G_B76_0;
		goto IL_02ed;
	}

IL_02e8:
	{
		G_B78_0 = ((int32_t)128);
		G_B78_1 = G_B77_0;
	}

IL_02ed:
	{
		V_12 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)G_B78_1|G_B78_0)));
		// connectFlags |= (passwordUtf8 != null) ? (byte)(1 << PASSWORD_FLAG_OFFSET) : (byte)0x00;
		uint8_t L_123 = V_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_124 = V_10;
		G_B79_0 = L_123;
		if (L_124)
		{
			G_B80_0 = L_123;
			goto IL_02fa;
		}
	}
	{
		G_B81_0 = 0;
		G_B81_1 = G_B79_0;
		goto IL_02fc;
	}

IL_02fa:
	{
		G_B81_0 = ((int32_t)64);
		G_B81_1 = G_B80_0;
	}

IL_02fc:
	{
		V_12 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)G_B81_1|G_B81_0)));
		// connectFlags |= (this.willRetain) ? (byte)(1 << WILL_RETAIN_FLAG_OFFSET) : (byte)0x00;
		uint8_t L_125 = V_12;
		bool L_126 = __this->___willRetain_92;
		G_B82_0 = L_125;
		if (L_126)
		{
			G_B83_0 = L_125;
			goto IL_030d;
		}
	}
	{
		G_B84_0 = 0;
		G_B84_1 = G_B82_0;
		goto IL_030f;
	}

IL_030d:
	{
		G_B84_0 = ((int32_t)32);
		G_B84_1 = G_B83_0;
	}

IL_030f:
	{
		V_12 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)G_B84_1|G_B84_0)));
		// if (this.willFlag)
		bool L_127 = __this->___willFlag_94;
		V_21 = L_127;
		bool L_128 = V_21;
		if (!L_128)
		{
			goto IL_032e;
		}
	}
	{
		// connectFlags |= (byte)(this.willQosLevel << WILL_QOS_FLAG_OFFSET);
		uint8_t L_129 = V_12;
		uint8_t L_130 = __this->___willQosLevel_93;
		V_12 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_129|((int32_t)(uint8_t)((int32_t)((int32_t)L_130<<3))))));
	}

IL_032e:
	{
		// connectFlags |= (this.willFlag) ? (byte)(1 << WILL_FLAG_OFFSET) : (byte)0x00;
		uint8_t L_131 = V_12;
		bool L_132 = __this->___willFlag_94;
		G_B87_0 = L_131;
		if (L_132)
		{
			G_B88_0 = L_131;
			goto IL_033b;
		}
	}
	{
		G_B89_0 = 0;
		G_B89_1 = G_B87_0;
		goto IL_033c;
	}

IL_033b:
	{
		G_B89_0 = 4;
		G_B89_1 = G_B88_0;
	}

IL_033c:
	{
		V_12 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)G_B89_1|G_B89_0)));
		// connectFlags |= (this.cleanSession) ? (byte)(1 << CLEAN_SESSION_FLAG_OFFSET) : (byte)0x00;
		uint8_t L_133 = V_12;
		bool L_134 = __this->___cleanSession_99;
		G_B90_0 = L_133;
		if (L_134)
		{
			G_B91_0 = L_133;
			goto IL_034d;
		}
	}
	{
		G_B92_0 = 0;
		G_B92_1 = G_B90_0;
		goto IL_034e;
	}

IL_034d:
	{
		G_B92_0 = 2;
		G_B92_1 = G_B91_0;
	}

IL_034e:
	{
		V_12 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)G_B92_1|G_B92_0)));
		// buffer[index++] = connectFlags;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_135 = V_4;
		int32_t L_136 = V_5;
		int32_t L_137 = L_136;
		V_5 = ((int32_t)il2cpp_codegen_add(L_137, 1));
		uint8_t L_138 = V_12;
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(L_137), (uint8_t)L_138);
		// buffer[index++] = (byte)((this.keepAlivePeriod >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_139 = V_4;
		int32_t L_140 = V_5;
		int32_t L_141 = L_140;
		V_5 = ((int32_t)il2cpp_codegen_add(L_141, 1));
		uint16_t L_142 = __this->___keepAlivePeriod_100;
		NullCheck(L_139);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(L_141), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_142>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(this.keepAlivePeriod & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_143 = V_4;
		int32_t L_144 = V_5;
		int32_t L_145 = L_144;
		V_5 = ((int32_t)il2cpp_codegen_add(L_145, 1));
		uint16_t L_146 = __this->___keepAlivePeriod_100;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(L_145), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_146&((int32_t)255)))));
		// buffer[index++] = (byte)((clientIdUtf8.Length >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_147 = V_4;
		int32_t L_148 = V_5;
		int32_t L_149 = L_148;
		V_5 = ((int32_t)il2cpp_codegen_add(L_149, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_150 = V_6;
		NullCheck(L_150);
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(L_149), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((RuntimeArray*)L_150)->max_length))>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(clientIdUtf8.Length & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_151 = V_4;
		int32_t L_152 = V_5;
		int32_t L_153 = L_152;
		V_5 = ((int32_t)il2cpp_codegen_add(L_153, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_154 = V_6;
		NullCheck(L_154);
		NullCheck(L_151);
		(L_151)->SetAt(static_cast<il2cpp_array_size_t>(L_153), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((RuntimeArray*)L_154)->max_length))&((int32_t)255)))));
		// Array.Copy(clientIdUtf8, 0, buffer, index, clientIdUtf8.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_155 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_156 = V_4;
		int32_t L_157 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_158 = V_6;
		NullCheck(L_158);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_155, 0, (RuntimeArray*)L_156, L_157, ((int32_t)(((RuntimeArray*)L_158)->max_length)), NULL);
		// index += clientIdUtf8.Length;
		int32_t L_159 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_160 = V_6;
		NullCheck(L_160);
		V_5 = ((int32_t)il2cpp_codegen_add(L_159, ((int32_t)(((RuntimeArray*)L_160)->max_length))));
		// if (this.willFlag && (willTopicUtf8 != null))
		bool L_161 = __this->___willFlag_94;
		if (!L_161)
		{
			goto IL_03e3;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_162 = V_7;
		G_B95_0 = ((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_162) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_03e4;
	}

IL_03e3:
	{
		G_B95_0 = 0;
	}

IL_03e4:
	{
		V_22 = (bool)G_B95_0;
		bool L_163 = V_22;
		if (!L_163)
		{
			goto IL_0432;
		}
	}
	{
		// buffer[index++] = (byte)((willTopicUtf8.Length >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_164 = V_4;
		int32_t L_165 = V_5;
		int32_t L_166 = L_165;
		V_5 = ((int32_t)il2cpp_codegen_add(L_166, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_167 = V_7;
		NullCheck(L_167);
		NullCheck(L_164);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(L_166), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((RuntimeArray*)L_167)->max_length))>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(willTopicUtf8.Length & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_168 = V_4;
		int32_t L_169 = V_5;
		int32_t L_170 = L_169;
		V_5 = ((int32_t)il2cpp_codegen_add(L_170, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_171 = V_7;
		NullCheck(L_171);
		NullCheck(L_168);
		(L_168)->SetAt(static_cast<il2cpp_array_size_t>(L_170), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((RuntimeArray*)L_171)->max_length))&((int32_t)255)))));
		// Array.Copy(willTopicUtf8, 0, buffer, index, willTopicUtf8.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_172 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_173 = V_4;
		int32_t L_174 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_175 = V_7;
		NullCheck(L_175);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_172, 0, (RuntimeArray*)L_173, L_174, ((int32_t)(((RuntimeArray*)L_175)->max_length)), NULL);
		// index += willTopicUtf8.Length;
		int32_t L_176 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_177 = V_7;
		NullCheck(L_177);
		V_5 = ((int32_t)il2cpp_codegen_add(L_176, ((int32_t)(((RuntimeArray*)L_177)->max_length))));
	}

IL_0432:
	{
		// if (this.willFlag && (willMessageUtf8 != null))
		bool L_178 = __this->___willFlag_94;
		if (!L_178)
		{
			goto IL_0441;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_179 = V_8;
		G_B100_0 = ((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_179) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0442;
	}

IL_0441:
	{
		G_B100_0 = 0;
	}

IL_0442:
	{
		V_23 = (bool)G_B100_0;
		bool L_180 = V_23;
		if (!L_180)
		{
			goto IL_0490;
		}
	}
	{
		// buffer[index++] = (byte)((willMessageUtf8.Length >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_181 = V_4;
		int32_t L_182 = V_5;
		int32_t L_183 = L_182;
		V_5 = ((int32_t)il2cpp_codegen_add(L_183, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_184 = V_8;
		NullCheck(L_184);
		NullCheck(L_181);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(L_183), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((RuntimeArray*)L_184)->max_length))>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(willMessageUtf8.Length & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_185 = V_4;
		int32_t L_186 = V_5;
		int32_t L_187 = L_186;
		V_5 = ((int32_t)il2cpp_codegen_add(L_187, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_188 = V_8;
		NullCheck(L_188);
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(L_187), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((RuntimeArray*)L_188)->max_length))&((int32_t)255)))));
		// Array.Copy(willMessageUtf8, 0, buffer, index, willMessageUtf8.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_189 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_190 = V_4;
		int32_t L_191 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_192 = V_8;
		NullCheck(L_192);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_189, 0, (RuntimeArray*)L_190, L_191, ((int32_t)(((RuntimeArray*)L_192)->max_length)), NULL);
		// index += willMessageUtf8.Length;
		int32_t L_193 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_194 = V_8;
		NullCheck(L_194);
		V_5 = ((int32_t)il2cpp_codegen_add(L_193, ((int32_t)(((RuntimeArray*)L_194)->max_length))));
	}

IL_0490:
	{
		// if (usernameUtf8 != null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_195 = V_9;
		V_24 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_195) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_196 = V_24;
		if (!L_196)
		{
			goto IL_04e3;
		}
	}
	{
		// buffer[index++] = (byte)((usernameUtf8.Length >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_197 = V_4;
		int32_t L_198 = V_5;
		int32_t L_199 = L_198;
		V_5 = ((int32_t)il2cpp_codegen_add(L_199, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_200 = V_9;
		NullCheck(L_200);
		NullCheck(L_197);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(L_199), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((RuntimeArray*)L_200)->max_length))>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(usernameUtf8.Length & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_201 = V_4;
		int32_t L_202 = V_5;
		int32_t L_203 = L_202;
		V_5 = ((int32_t)il2cpp_codegen_add(L_203, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_204 = V_9;
		NullCheck(L_204);
		NullCheck(L_201);
		(L_201)->SetAt(static_cast<il2cpp_array_size_t>(L_203), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((RuntimeArray*)L_204)->max_length))&((int32_t)255)))));
		// Array.Copy(usernameUtf8, 0, buffer, index, usernameUtf8.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_205 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_206 = V_4;
		int32_t L_207 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_208 = V_9;
		NullCheck(L_208);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_205, 0, (RuntimeArray*)L_206, L_207, ((int32_t)(((RuntimeArray*)L_208)->max_length)), NULL);
		// index += usernameUtf8.Length;
		int32_t L_209 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_210 = V_9;
		NullCheck(L_210);
		V_5 = ((int32_t)il2cpp_codegen_add(L_209, ((int32_t)(((RuntimeArray*)L_210)->max_length))));
	}

IL_04e3:
	{
		// if (passwordUtf8 != null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_211 = V_10;
		V_25 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_211) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_212 = V_25;
		if (!L_212)
		{
			goto IL_0536;
		}
	}
	{
		// buffer[index++] = (byte)((passwordUtf8.Length >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_213 = V_4;
		int32_t L_214 = V_5;
		int32_t L_215 = L_214;
		V_5 = ((int32_t)il2cpp_codegen_add(L_215, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_216 = V_10;
		NullCheck(L_216);
		NullCheck(L_213);
		(L_213)->SetAt(static_cast<il2cpp_array_size_t>(L_215), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((RuntimeArray*)L_216)->max_length))>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(passwordUtf8.Length & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_217 = V_4;
		int32_t L_218 = V_5;
		int32_t L_219 = L_218;
		V_5 = ((int32_t)il2cpp_codegen_add(L_219, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_220 = V_10;
		NullCheck(L_220);
		NullCheck(L_217);
		(L_217)->SetAt(static_cast<il2cpp_array_size_t>(L_219), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((RuntimeArray*)L_220)->max_length))&((int32_t)255)))));
		// Array.Copy(passwordUtf8, 0, buffer, index, passwordUtf8.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_221 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_222 = V_4;
		int32_t L_223 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_224 = V_10;
		NullCheck(L_224);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_221, 0, (RuntimeArray*)L_222, L_223, ((int32_t)(((RuntimeArray*)L_224)->max_length)), NULL);
		// index += passwordUtf8.Length;
		int32_t L_225 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_226 = V_10;
		NullCheck(L_226);
		V_5 = ((int32_t)il2cpp_codegen_add(L_225, ((int32_t)(((RuntimeArray*)L_226)->max_length))));
	}

IL_0536:
	{
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_227 = V_4;
		V_26 = L_227;
		goto IL_053c;
	}

IL_053c:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_228 = V_26;
		return L_228;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgConnect_ToString_mDE5B27A817021B32001ED908724C90614FAF3C88 (MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral104B875A8B5EC2251F312AB0E6A63BF2351E1919);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16576817F53DF82E7D178FAD65744BD1F22DCADD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C69A5ABD36AE74665BC61E90B89CFBA61C28AF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA6580C20ED76DE9C202A5BAAC5C5AC79A0B69F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E25278C6D8EFBF66FBDDF1966B58707737A0302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6013A4D41D8DCE7521FE81D366DBEBB957AA266D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DDD1ECCF16C3E7724EC716DBB45ABABB8A6BDE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81EF5BEF778AAB25FEF11CFCB72FD28EE589A915);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90D7DA45FDC50B94D085992496733AAA2278BC9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FBAF2AC0A0A42D2A1CB1F9F72F2EFB29F3C70FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC08CAC839B88D8127EF0D900F536BDB8BFD78836);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return this.GetTraceString(
		//     "CONNECT",
		//     new object[] { "protocolName", "protocolVersion", "clientId", "willFlag", "willRetain", "willQosLevel", "willTopic", "willMessage", "username", "password", "cleanSession", "keepAlivePeriod" },
		//     new object[] { this.protocolName, this.protocolVersion, this.clientId, this.willFlag, this.willRetain, this.willQosLevel, this.willTopic, this.willMessage, this.username, this.password, this.cleanSession, this.keepAlivePeriod });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral9FBAF2AC0A0A42D2A1CB1F9F72F2EFB29F3C70FE);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral9FBAF2AC0A0A42D2A1CB1F9F72F2EFB29F3C70FE);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral6013A4D41D8DCE7521FE81D366DBEBB957AA266D);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteral6013A4D41D8DCE7521FE81D366DBEBB957AA266D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral5E25278C6D8EFBF66FBDDF1966B58707737A0302);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral5E25278C6D8EFBF66FBDDF1966B58707737A0302);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral81EF5BEF778AAB25FEF11CFCB72FD28EE589A915);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteral81EF5BEF778AAB25FEF11CFCB72FD28EE589A915);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral90D7DA45FDC50B94D085992496733AAA2278BC9A);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteral90D7DA45FDC50B94D085992496733AAA2278BC9A);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral7DDD1ECCF16C3E7724EC716DBB45ABABB8A6BDE2);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)_stringLiteral7DDD1ECCF16C3E7724EC716DBB45ABABB8A6BDE2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralC08CAC839B88D8127EF0D900F536BDB8BFD78836);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)_stringLiteralC08CAC839B88D8127EF0D900F536BDB8BFD78836);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral104B875A8B5EC2251F312AB0E6A63BF2351E1919);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)_stringLiteral104B875A8B5EC2251F312AB0E6A63BF2351E1919);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)_stringLiteralE3A56BE62F0FB42D8062A17A4957C2142D815735);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)_stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral16576817F53DF82E7D178FAD65744BD1F22DCADD);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)_stringLiteral16576817F53DF82E7D178FAD65744BD1F22DCADD);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral5DA6580C20ED76DE9C202A5BAAC5C5AC79A0B69F);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)_stringLiteral5DA6580C20ED76DE9C202A5BAAC5C5AC79A0B69F);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		String_t* L_15 = __this->___protocolName_89;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_14;
		uint8_t L_17 = __this->___protocolVersion_90;
		uint8_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		String_t* L_21 = __this->___clientId_91;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_20;
		bool L_23 = __this->___willFlag_94;
		bool L_24 = L_23;
		RuntimeObject* L_25 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_22;
		bool L_27 = __this->___willRetain_92;
		bool L_28 = L_27;
		RuntimeObject* L_29 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_26;
		uint8_t L_31 = __this->___willQosLevel_93;
		uint8_t L_32 = L_31;
		RuntimeObject* L_33 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_33);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_30;
		String_t* L_35 = __this->___willTopic_95;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_35);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = L_34;
		String_t* L_37 = __this->___willMessage_96;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_37);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_37);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = L_36;
		String_t* L_39 = __this->___username_97;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_39);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = L_38;
		String_t* L_41 = __this->___password_98;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_41);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = L_40;
		bool L_43 = __this->___cleanSession_99;
		bool L_44 = L_43;
		RuntimeObject* L_45 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_45);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = L_42;
		uint16_t L_47 = __this->___keepAlivePeriod_100;
		uint16_t L_48 = L_47;
		RuntimeObject* L_49 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_49);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject*)L_49);
		String_t* L_50;
		L_50 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteral4C69A5ABD36AE74665BC61E90B89CFBA61C28AF8, L_12, L_46, NULL);
		V_0 = L_50;
		goto IL_010d;
	}

IL_010d:
	{
		// }
		String_t* L_51 = V_0;
		return L_51;
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
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnectEventArgs::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* MqttMsgConnectEventArgs_get_Message_m42944D4D0AE79F8B494F9B75F6E2D5B01895B91F (MqttMsgConnectEventArgs_tDC1F0CC3DF63277C03DDF6CCD0FDB67408CBDD2A* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgConnect Message { get; private set; }
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_0 = __this->___U3CMessageU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnectEventArgs::set_Message(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnectEventArgs_set_Message_mF618C75C6F254DFBDAA0AC7F1254D1DEE7871AD3 (MqttMsgConnectEventArgs_tDC1F0CC3DF63277C03DDF6CCD0FDB67408CBDD2A* __this, MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* ___value0, const RuntimeMethod* method) 
{
	{
		// public MqttMsgConnect Message { get; private set; }
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnectEventArgs::.ctor(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgConnectEventArgs__ctor_mB020F61C1F7003CA45D09EFFC5E5E3306A417577 (MqttMsgConnectEventArgs_tDC1F0CC3DF63277C03DDF6CCD0FDB67408CBDD2A* __this, MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* ___connect0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MqttMsgConnectEventArgs(MqttMsgConnect connect)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// this.Message = connect;
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_0 = ___connect0;
		MqttMsgConnectEventArgs_set_Message_mF618C75C6F254DFBDAA0AC7F1254D1DEE7871AD3_inline(__this, L_0, NULL);
		// }
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
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* MqttMsgContext_get_Message_m116B080E9FF59F8BD705D8D83F10DFB5CEDEF0B9 (MqttMsgContext_tE731ACDDFB1629FDA8ED42C65A68DC6A7F18E4DE* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgBase Message { get; set; }
		MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* L_0 = __this->___U3CMessageU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Message(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContext_set_Message_mB8A0819CB3912D2EDBA83BD64685B469564CE75D (MqttMsgContext_tE731ACDDFB1629FDA8ED42C65A68DC6A7F18E4DE* __this, MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* ___value0, const RuntimeMethod* method) 
{
	{
		// public MqttMsgBase Message { get; set; }
		MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_State_mC5B833819724914F950F61B516022A6F2CC7484A (MqttMsgContext_tE731ACDDFB1629FDA8ED42C65A68DC6A7F18E4DE* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgState State { get; set; }
		int32_t L_0 = __this->___U3CStateU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_State(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContext_set_State_m3823D7A28653C5B5FEE32A5B0F22B74BAD3C4A68 (MqttMsgContext_tE731ACDDFB1629FDA8ED42C65A68DC6A7F18E4DE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public MqttMsgState State { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_1 = L_0;
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Flow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_Flow_m2697D59B454DCBC8FE299191AAC199E9A8959B94 (MqttMsgContext_tE731ACDDFB1629FDA8ED42C65A68DC6A7F18E4DE* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgFlow Flow { get; set; }
		int32_t L_0 = __this->___U3CFlowU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Flow(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContext_set_Flow_m6D8C695BDAD389C80270770143B5C7DBF5068154 (MqttMsgContext_tE731ACDDFB1629FDA8ED42C65A68DC6A7F18E4DE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public MqttMsgFlow Flow { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CFlowU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_Timestamp_m634D1C01C286C9427CE0E27C306547E5793EF6CF (MqttMsgContext_tE731ACDDFB1629FDA8ED42C65A68DC6A7F18E4DE* __this, const RuntimeMethod* method) 
{
	{
		// public int Timestamp { get; set; }
		int32_t L_0 = __this->___U3CTimestampU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Timestamp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContext_set_Timestamp_m18FC79B41BFB160EAD734A08DFDA1EDAFBF0506D (MqttMsgContext_tE731ACDDFB1629FDA8ED42C65A68DC6A7F18E4DE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Timestamp { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CTimestampU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Attempt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_Attempt_mCEE8092CDA8C5B4FB9AB231F84B5583D4108FE81 (MqttMsgContext_tE731ACDDFB1629FDA8ED42C65A68DC6A7F18E4DE* __this, const RuntimeMethod* method) 
{
	{
		// public int Attempt { get; set; }
		int32_t L_0 = __this->___U3CAttemptU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Attempt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContext_set_Attempt_mF675E1964CA65321B263C15FC3B587D216CC19C8 (MqttMsgContext_tE731ACDDFB1629FDA8ED42C65A68DC6A7F18E4DE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int Attempt { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CAttemptU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgContext_get_Key_m97AACAA78249261AAA6632A7E035B84949D2B239 (MqttMsgContext_tE731ACDDFB1629FDA8ED42C65A68DC6A7F18E4DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgFlow_t593469B1595349C089C92575E6BE8717A9772868_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// get { return this.Flow + "_" + this.Message.MessageId; }
		int32_t L_0;
		L_0 = MqttMsgContext_get_Flow_m2697D59B454DCBC8FE299191AAC199E9A8959B94_inline(__this, NULL);
		V_0 = L_0;
		Il2CppFakeBox<int32_t> L_1(MqttMsgFlow_t593469B1595349C089C92575E6BE8717A9772868_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* L_3;
		L_3 = MqttMsgContext_get_Message_m116B080E9FF59F8BD705D8D83F10DFB5CEDEF0B9_inline(__this, NULL);
		NullCheck(L_3);
		uint16_t L_4;
		L_4 = MqttMsgBase_get_MessageId_mB5D7DB290F2DABCDEED25C96F285D5F876856AD9(L_3, NULL);
		V_1 = L_4;
		String_t* L_5;
		L_5 = UInt16_ToString_m57629B7E74D92A54414073D5C27D6827C93A4DD5((&V_1), NULL);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_2, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_5, NULL);
		V_2 = L_6;
		goto IL_0035;
	}

IL_0035:
	{
		// get { return this.Flow + "_" + this.Message.MessageId; }
		String_t* L_7 = V_2;
		return L_7;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContext__ctor_m664D69687B24569969912FBCDEC6E85E1407E33D (MqttMsgContext_tE731ACDDFB1629FDA8ED42C65A68DC6A7F18E4DE* __this, const RuntimeMethod* method) 
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgDisconnect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgDisconnect__ctor_m1CD1F70A995CD4B1267153CDDA55D7F2414B2679 (MqttMsgDisconnect_tAB8CFF7568901F18C26692D83A7A42EF274580EC* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgDisconnect()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_DISCONNECT_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)((int32_t)14);
		// }
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgDisconnect uPLibrary.Networking.M2Mqtt.Messages.MqttMsgDisconnect::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgDisconnect_tAB8CFF7568901F18C26692D83A7A42EF274580EC* MqttMsgDisconnect_Parse_m2D045F72A40C3442BF0CA1836A7445B91C1F51CC (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgDisconnect_tAB8CFF7568901F18C26692D83A7A42EF274580EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgDisconnect_tAB8CFF7568901F18C26692D83A7A42EF274580EC* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	MqttMsgDisconnect_tAB8CFF7568901F18C26692D83A7A42EF274580EC* V_4 = NULL;
	{
		// MqttMsgDisconnect msg = new MqttMsgDisconnect();
		MqttMsgDisconnect_tAB8CFF7568901F18C26692D83A7A42EF274580EC* L_0 = (MqttMsgDisconnect_tAB8CFF7568901F18C26692D83A7A42EF274580EC*)il2cpp_codegen_object_new(MqttMsgDisconnect_tAB8CFF7568901F18C26692D83A7A42EF274580EC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgDisconnect__ctor_m1CD1F70A995CD4B1267153CDDA55D7F2414B2679(L_0, NULL);
		V_0 = L_0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion1;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if ((fixedHeaderFirstByte & MSG_FLAG_BITS_MASK) != MQTT_MSG_DISCONNECT_FLAG_BITS)
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_3 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidFlagBits);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgDisconnect_Parse_m2D045F72A40C3442BF0CA1836A7445B91C1F51CC_RuntimeMethod_var)));
	}

IL_0023:
	{
	}

IL_0024:
	{
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_1 = L_7;
		// return msg;
		MqttMsgDisconnect_tAB8CFF7568901F18C26692D83A7A42EF274580EC* L_8 = V_0;
		V_4 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		MqttMsgDisconnect_tAB8CFF7568901F18C26692D83A7A42EF274580EC* L_9 = V_4;
		return L_9;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgDisconnect::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgDisconnect_GetBytes_mCBAA77ED52AE83FAC1D0ED03F0EEF4E0A275A040 (MqttMsgDisconnect_tAB8CFF7568901F18C26692D83A7A42EF274580EC* __this, uint8_t ___protocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		// byte[] buffer = new byte[2];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		// int index = 0;
		V_1 = 0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// buffer[index++] = (MQTT_MSG_DISCONNECT_TYPE << MSG_TYPE_OFFSET) | MQTT_MSG_DISCONNECT_FLAG_BITS; // [v.3.1.1]
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)224));
		goto IL_002c;
	}

IL_0020:
	{
		// buffer[index++] = (MQTT_MSG_DISCONNECT_TYPE << MSG_TYPE_OFFSET);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)224));
	}

IL_002c:
	{
		// buffer[index++] = 0x00;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)0);
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		V_3 = L_12;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_3;
		return L_13;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgDisconnect::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgDisconnect_ToString_m38455E98B7F9AF26F9958FBF3CCA00F1625C7BBD (MqttMsgDisconnect_tAB8CFF7568901F18C26692D83A7A42EF274580EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0A44DD84CB7856E3402EFE3721DA69F60D04AB9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return this.GetTraceString(
		//     "DISCONNECT",
		//     null,
		//     null);
		String_t* L_0;
		L_0 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteralD0A44DD84CB7856E3402EFE3721DA69F60D04AB9, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		String_t* L_1 = V_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPingReq__ctor_m5900AB0EC0A0F92FCF735E46A1E6AAAFA9FEE96D (MqttMsgPingReq_t5D2F79FE9F7C0678B735A32DBCF68E64023D149D* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgPingReq()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_PINGREQ_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)((int32_t)12);
		// }
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgPingReq_GetBytes_m5FC15EE3770296842E2CD337C3CDBE5D0445B682 (MqttMsgPingReq_t5D2F79FE9F7C0678B735A32DBCF68E64023D149D* __this, uint8_t ___protocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		// byte[] buffer = new byte[2];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		// int index = 0;
		V_1 = 0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// buffer[index++] = (MQTT_MSG_PINGREQ_TYPE << MSG_TYPE_OFFSET) | MQTT_MSG_PINGREQ_FLAG_BITS; // [v.3.1.1]
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)192));
		goto IL_002c;
	}

IL_0020:
	{
		// buffer[index++] = (MQTT_MSG_PINGREQ_TYPE << MSG_TYPE_OFFSET);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)192));
	}

IL_002c:
	{
		// buffer[index++] = 0x00;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)0);
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		V_3 = L_12;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_3;
		return L_13;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPingReq_t5D2F79FE9F7C0678B735A32DBCF68E64023D149D* MqttMsgPingReq_Parse_m6880FA27401A206DF7B3207F89D6B51D637395F0 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgPingReq_t5D2F79FE9F7C0678B735A32DBCF68E64023D149D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgPingReq_t5D2F79FE9F7C0678B735A32DBCF68E64023D149D* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	MqttMsgPingReq_t5D2F79FE9F7C0678B735A32DBCF68E64023D149D* V_4 = NULL;
	{
		// MqttMsgPingReq msg = new MqttMsgPingReq();
		MqttMsgPingReq_t5D2F79FE9F7C0678B735A32DBCF68E64023D149D* L_0 = (MqttMsgPingReq_t5D2F79FE9F7C0678B735A32DBCF68E64023D149D*)il2cpp_codegen_object_new(MqttMsgPingReq_t5D2F79FE9F7C0678B735A32DBCF68E64023D149D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgPingReq__ctor_m5900AB0EC0A0F92FCF735E46A1E6AAAFA9FEE96D(L_0, NULL);
		V_0 = L_0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion1;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if ((fixedHeaderFirstByte & MSG_FLAG_BITS_MASK) != MQTT_MSG_PINGREQ_FLAG_BITS)
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_3 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidFlagBits);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPingReq_Parse_m6880FA27401A206DF7B3207F89D6B51D637395F0_RuntimeMethod_var)));
	}

IL_0023:
	{
	}

IL_0024:
	{
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_1 = L_7;
		// return msg;
		MqttMsgPingReq_t5D2F79FE9F7C0678B735A32DBCF68E64023D149D* L_8 = V_0;
		V_4 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		MqttMsgPingReq_t5D2F79FE9F7C0678B735A32DBCF68E64023D149D* L_9 = V_4;
		return L_9;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPingReq_ToString_mA7FB7073AD15BF60FDD9FB06E01F7B503A20A2FA (MqttMsgPingReq_t5D2F79FE9F7C0678B735A32DBCF68E64023D149D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral214631B825B91100AD363326A29F29251D11EA85);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return this.GetTraceString(
		//     "PINGREQ",
		//     null,
		//     null);
		String_t* L_0;
		L_0 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteral214631B825B91100AD363326A29F29251D11EA85, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		String_t* L_1 = V_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPingResp__ctor_m5F4815F8FBD9AB6594458CD0DB7A9561AAD54873 (MqttMsgPingResp_t0BCC7EA7F37072B34129A456C5284C19E15DEC7B* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgPingResp()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_PINGRESP_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)((int32_t)13);
		// }
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPingResp_t0BCC7EA7F37072B34129A456C5284C19E15DEC7B* MqttMsgPingResp_Parse_mA79F4E4C3E06E71002BF3A5AFE5EB7BCFA0785D8 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgPingResp_t0BCC7EA7F37072B34129A456C5284C19E15DEC7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgPingResp_t0BCC7EA7F37072B34129A456C5284C19E15DEC7B* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	MqttMsgPingResp_t0BCC7EA7F37072B34129A456C5284C19E15DEC7B* V_4 = NULL;
	{
		// MqttMsgPingResp msg = new MqttMsgPingResp();
		MqttMsgPingResp_t0BCC7EA7F37072B34129A456C5284C19E15DEC7B* L_0 = (MqttMsgPingResp_t0BCC7EA7F37072B34129A456C5284C19E15DEC7B*)il2cpp_codegen_object_new(MqttMsgPingResp_t0BCC7EA7F37072B34129A456C5284C19E15DEC7B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgPingResp__ctor_m5F4815F8FBD9AB6594458CD0DB7A9561AAD54873(L_0, NULL);
		V_0 = L_0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion1;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// if ((fixedHeaderFirstByte & MSG_FLAG_BITS_MASK) != MQTT_MSG_PINGRESP_FLAG_BITS)
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_3 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidFlagBits);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPingResp_Parse_mA79F4E4C3E06E71002BF3A5AFE5EB7BCFA0785D8_RuntimeMethod_var)));
	}

IL_0023:
	{
	}

IL_0024:
	{
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_1 = L_7;
		// return msg;
		MqttMsgPingResp_t0BCC7EA7F37072B34129A456C5284C19E15DEC7B* L_8 = V_0;
		V_4 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		MqttMsgPingResp_t0BCC7EA7F37072B34129A456C5284C19E15DEC7B* L_9 = V_4;
		return L_9;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgPingResp_GetBytes_m8CB0E9832E6E67BCAD71D42B6031ACAD5BC75EC3 (MqttMsgPingResp_t0BCC7EA7F37072B34129A456C5284C19E15DEC7B* __this, uint8_t ___protocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		// byte[] buffer = new byte[2];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		// int index = 0;
		V_1 = 0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// buffer[index++] = (MQTT_MSG_PINGRESP_TYPE << MSG_TYPE_OFFSET) | MQTT_MSG_PINGRESP_FLAG_BITS; // [v.3.1.1]
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)208));
		goto IL_002c;
	}

IL_0020:
	{
		// buffer[index++] = (MQTT_MSG_PINGRESP_TYPE << MSG_TYPE_OFFSET);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)208));
	}

IL_002c:
	{
		// buffer[index++] = 0x00;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)0);
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		V_3 = L_12;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_3;
		return L_13;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPingResp_ToString_m5EBF39DA03948DCBF67FE81A62667AFD320E109B (MqttMsgPingResp_t0BCC7EA7F37072B34129A456C5284C19E15DEC7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral972DC3C29D81D1DCE50793C97A574777A78A1A3C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return this.GetTraceString(
		//     "PINGRESP",
		//     null,
		//     null);
		String_t* L_0;
		L_0 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteral972DC3C29D81D1DCE50793C97A574777A78A1A3C, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		String_t* L_1 = V_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPuback__ctor_mF180301EA3419DCBD8C8CE4E5E691A2B585A05AD (MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgPuback()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_PUBACK_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)4;
		// }
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgPuback_GetBytes_m0D3EB8AF4D75353D1CAD9EF2CF2ADA76FF807F04 (MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE* __this, uint8_t ___protocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	{
		// int fixedHeaderSize = 0;
		V_0 = 0;
		// int varHeaderSize = 0;
		V_1 = 0;
		// int payloadSize = 0;
		V_2 = 0;
		// int remainingLength = 0;
		V_3 = 0;
		// int index = 0;
		V_5 = 0;
		// varHeaderSize += MESSAGE_ID_SIZE;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 2));
		// remainingLength += (varHeaderSize + payloadSize);
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3))));
		// fixedHeaderSize = 1;
		V_0 = 1;
		// int temp = remainingLength;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001b:
	{
		// fixedHeaderSize++;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// temp = temp / 128;
		int32_t L_6 = V_6;
		V_6 = ((int32_t)(L_6/((int32_t)128)));
		// } while (temp > 0);
		int32_t L_7 = V_6;
		V_7 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_7;
		if (L_8)
		{
			goto IL_001b;
		}
	}
	{
		// buffer = new byte[fixedHeaderSize + varHeaderSize + payloadSize];
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_9, L_10)), L_11)));
		V_4 = L_12;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_13 = ___protocolVersion0;
		V_8 = (bool)((((int32_t)L_13) == ((int32_t)4))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		// buffer[index++] = (MQTT_MSG_PUBACK_TYPE << MSG_TYPE_OFFSET) | MQTT_MSG_PUBACK_FLAG_BITS; // [v.3.1.1]
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = L_16;
		V_5 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)64));
		goto IL_0066;
	}

IL_005a:
	{
		// buffer[index++] = (MQTT_MSG_PUBACK_TYPE << MSG_TYPE_OFFSET);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)((int32_t)64));
	}

IL_0066:
	{
		// index = this.encodeRemainingLength(remainingLength, buffer, index);
		int32_t L_21 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24;
		L_24 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_21, L_22, L_23, NULL);
		V_5 = L_24;
		// buffer[index++] = (byte)((this.messageId >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = L_26;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		uint16_t L_28 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_28>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(this.messageId & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_4;
		int32_t L_30 = V_5;
		int32_t L_31 = L_30;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		uint16_t L_32 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_32&((int32_t)255)))));
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_4;
		V_9 = L_33;
		goto IL_00a9;
	}

IL_00a9:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_9;
		return L_34;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE* MqttMsgPuback_Parse_mC85BE03448D7751D6206D8B7324DB15A5FFE3F9E (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE* V_6 = NULL;
	{
		// int index = 0;
		V_1 = 0;
		// MqttMsgPuback msg = new MqttMsgPuback();
		MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE* L_0 = (MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE*)il2cpp_codegen_object_new(MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgPuback__ctor_mF180301EA3419DCBD8C8CE4E5E691A2B585A05AD(L_0, NULL);
		V_2 = L_0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion1;
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// if ((fixedHeaderFirstByte & MSG_FLAG_BITS_MASK) != MQTT_MSG_PUBACK_FLAG_BITS)
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidFlagBits);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPuback_Parse_mC85BE03448D7751D6206D8B7324DB15A5FFE3F9E_RuntimeMethod_var)));
	}

IL_0029:
	{
	}

IL_002a:
	{
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_3 = L_7;
		// buffer = new byte[remainingLength];
		int32_t L_8 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		// channel.Receive(buffer);
		RuntimeObject* L_10 = ___channel2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_10, L_11);
		// msg.messageId = (ushort)((buffer[index++] << 8) & 0xFF00);
		MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE* L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_13);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_13)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_18<<8))&((int32_t)65280))));
		// msg.messageId |= (buffer[index++]);
		MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE* L_19 = V_2;
		MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE* L_20 = L_19;
		NullCheck(L_20);
		uint16_t L_21 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId_54;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		NullCheck(L_22);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_20);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_21|(int32_t)L_26)));
		// return msg;
		MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE* L_27 = V_2;
		V_6 = L_27;
		goto IL_0070;
	}

IL_0070:
	{
		// }
		MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE* L_28 = V_6;
		return L_28;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPuback_ToString_m88C0F43C487BD4A400898BA2237262147EA4339B (MqttMsgPuback_t44101DB7519A72D838F3200A75B92C9509A684AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40E78183273E7A7EB88118AE32A5046802C1323A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return this.GetTraceString(
		//     "PUBACK",
		//     new object[] { "messageId" },
		//     new object[] { this.messageId });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		uint16_t L_4 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		uint16_t L_5 = L_4;
		RuntimeObject* L_6 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		String_t* L_7;
		L_7 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteral40E78183273E7A7EB88118AE32A5046802C1323A, L_1, L_3, NULL);
		V_0 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		String_t* L_8 = V_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubcomp__ctor_m7FEB6335A05D280A6C6F2EB4EBFEBE23508E5A1E (MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgPubcomp()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_PUBCOMP_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)7;
		// }
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgPubcomp_GetBytes_mF80B79C071FA3F8DF9D52D6A91A3F81E2BC1AB03 (MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* __this, uint8_t ___protocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	{
		// int fixedHeaderSize = 0;
		V_0 = 0;
		// int varHeaderSize = 0;
		V_1 = 0;
		// int payloadSize = 0;
		V_2 = 0;
		// int remainingLength = 0;
		V_3 = 0;
		// int index = 0;
		V_5 = 0;
		// varHeaderSize += MESSAGE_ID_SIZE;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 2));
		// remainingLength += (varHeaderSize + payloadSize);
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3))));
		// fixedHeaderSize = 1;
		V_0 = 1;
		// int temp = remainingLength;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001b:
	{
		// fixedHeaderSize++;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// temp = temp / 128;
		int32_t L_6 = V_6;
		V_6 = ((int32_t)(L_6/((int32_t)128)));
		// } while (temp > 0);
		int32_t L_7 = V_6;
		V_7 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_7;
		if (L_8)
		{
			goto IL_001b;
		}
	}
	{
		// buffer = new byte[fixedHeaderSize + varHeaderSize + payloadSize];
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_9, L_10)), L_11)));
		V_4 = L_12;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_13 = ___protocolVersion0;
		V_8 = (bool)((((int32_t)L_13) == ((int32_t)4))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		// buffer[index++] = (MQTT_MSG_PUBCOMP_TYPE << MSG_TYPE_OFFSET) | MQTT_MSG_PUBCOMP_FLAG_BITS; // [v.3.1.1]
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = L_16;
		V_5 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)112));
		goto IL_0066;
	}

IL_005a:
	{
		// buffer[index++] = (MQTT_MSG_PUBCOMP_TYPE << MSG_TYPE_OFFSET);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)((int32_t)112));
	}

IL_0066:
	{
		// index = this.encodeRemainingLength(remainingLength, buffer, index);
		int32_t L_21 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24;
		L_24 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_21, L_22, L_23, NULL);
		V_5 = L_24;
		// buffer[index++] = (byte)((this.messageId >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = L_26;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		uint16_t L_28 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_28>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(this.messageId & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_4;
		int32_t L_30 = V_5;
		int32_t L_31 = L_30;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		uint16_t L_32 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_32&((int32_t)255)))));
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_4;
		V_9 = L_33;
		goto IL_00a9;
	}

IL_00a9:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_9;
		return L_34;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* MqttMsgPubcomp_Parse_mFF7E638FF02FFC2634AC319551A3B8493035CDAF (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* V_6 = NULL;
	{
		// int index = 0;
		V_1 = 0;
		// MqttMsgPubcomp msg = new MqttMsgPubcomp();
		MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* L_0 = (MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9*)il2cpp_codegen_object_new(MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgPubcomp__ctor_m7FEB6335A05D280A6C6F2EB4EBFEBE23508E5A1E(L_0, NULL);
		V_2 = L_0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion1;
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// if ((fixedHeaderFirstByte & MSG_FLAG_BITS_MASK) != MQTT_MSG_PUBCOMP_FLAG_BITS)
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidFlagBits);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPubcomp_Parse_mFF7E638FF02FFC2634AC319551A3B8493035CDAF_RuntimeMethod_var)));
	}

IL_0029:
	{
	}

IL_002a:
	{
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_3 = L_7;
		// buffer = new byte[remainingLength];
		int32_t L_8 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		// channel.Receive(buffer);
		RuntimeObject* L_10 = ___channel2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_10, L_11);
		// msg.messageId = (ushort)((buffer[index++] << 8) & 0xFF00);
		MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_13);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_13)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_18<<8))&((int32_t)65280))));
		// msg.messageId |= (buffer[index++]);
		MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* L_19 = V_2;
		MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* L_20 = L_19;
		NullCheck(L_20);
		uint16_t L_21 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId_54;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		NullCheck(L_22);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_20);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_21|(int32_t)L_26)));
		// return msg;
		MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* L_27 = V_2;
		V_6 = L_27;
		goto IL_0070;
	}

IL_0070:
	{
		// }
		MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* L_28 = V_6;
		return L_28;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPubcomp_ToString_m20C7B93EF9D6A51FAB1A0E27829983C64A8413B7 (MqttMsgPubcomp_tE4B64DF6545DA5DC7AE026F77FE1929C38A8EEE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADB9696F2FAD87DE15432AED421F08A3B655D52C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return this.GetTraceString(
		//     "PUBCOMP",
		//     new object[] { "messageId" },
		//     new object[] { this.messageId });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		uint16_t L_4 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		uint16_t L_5 = L_4;
		RuntimeObject* L_6 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		String_t* L_7;
		L_7 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteralADB9696F2FAD87DE15432AED421F08A3B655D52C, L_1, L_3, NULL);
		V_0 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		String_t* L_8 = V_0;
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
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::get_Topic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPublish_get_Topic_mFBFCA12374312BED82162826DB2B9F3D95FB7B52 (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return this.topic; }
		String_t* L_0 = __this->___topic_55;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.topic; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::set_Topic(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublish_set_Topic_mECF930580FEA4F9CF53005EBAA1F16B6CAB2D39B (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.topic = value; }
		String_t* L_0 = ___value0;
		__this->___topic_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topic_55), (void*)L_0);
		// set { this.topic = value; }
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgPublish_get_Message_mCF10D2BA4666A06CEF296F796143A7A6A61D5866 (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// get { return this.message; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___message_56;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.message; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::set_Message(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublish_set_Message_mAD7E89566E5158FB3EEC5E15E1379E521D142278 (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.message = value; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___message_56 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_56), (void*)L_0);
		// set { this.message = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublish__ctor_mEBCB0917FF5442CAB39A95FAE1F70598989D187E (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgPublish()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_PUBLISH_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)3;
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::.ctor(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublish__ctor_m571B87B2E06A04F45534EEC3462BE3391A0106BA (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, String_t* ___topic0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___message1, const RuntimeMethod* method) 
{
	{
		// this(topic, message, false, QOS_LEVEL_AT_MOST_ONCE, false)
		String_t* L_0 = ___topic0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___message1;
		MqttMsgPublish__ctor_m293046A7E9F398FC7DAD0B30DFDDFDC1999BC2D7(__this, L_0, L_1, (bool)0, (uint8_t)0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::.ctor(System.String,System.Byte[],System.Boolean,System.Byte,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublish__ctor_m293046A7E9F398FC7DAD0B30DFDDFDC1999BC2D7 (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, String_t* ___topic0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___message1, bool ___dupFlag2, uint8_t ___qosLevel3, bool ___retain4, const RuntimeMethod* method) 
{
	{
		// bool retain) : base()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_PUBLISH_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)3;
		// this.topic = topic;
		String_t* L_0 = ___topic0;
		__this->___topic_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topic_55), (void*)L_0);
		// this.message = message;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___message1;
		__this->___message_56 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_56), (void*)L_1);
		// this.dupFlag = dupFlag;
		bool L_2 = ___dupFlag2;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___dupFlag_51 = L_2;
		// this.qosLevel = qosLevel;
		uint8_t L_3 = ___qosLevel3;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52 = L_3;
		// this.retain = retain;
		bool L_4 = ___retain4;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___retain_53 = L_4;
		// this.messageId = 0;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54 = (uint16_t)0;
		// }
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgPublish_GetBytes_m340EEC3C62DF70AB15B3DD792C5919F5F757FB36 (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, uint8_t ___protocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_17 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B23_0 = 0;
	uint8_t* G_B23_1 = NULL;
	int32_t G_B22_0 = 0;
	uint8_t* G_B22_1 = NULL;
	int32_t G_B24_0 = 0;
	int32_t G_B24_1 = 0;
	uint8_t* G_B24_2 = NULL;
	int32_t G_B26_0 = 0;
	uint8_t* G_B26_1 = NULL;
	int32_t G_B25_0 = 0;
	uint8_t* G_B25_1 = NULL;
	int32_t G_B27_0 = 0;
	int32_t G_B27_1 = 0;
	uint8_t* G_B27_2 = NULL;
	int32_t G_B30_0 = 0;
	{
		// int fixedHeaderSize = 0;
		V_0 = 0;
		// int varHeaderSize = 0;
		V_1 = 0;
		// int payloadSize = 0;
		V_2 = 0;
		// int remainingLength = 0;
		V_3 = 0;
		// int index = 0;
		V_5 = 0;
		// if ((this.topic.IndexOf('#') != -1) || (this.topic.IndexOf('+') != -1))
		String_t* L_0 = __this->___topic_55;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_0, ((int32_t)35), NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = __this->___topic_55;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_2, ((int32_t)43), NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B3_0 = 1;
	}

IL_0032:
	{
		V_8 = (bool)G_B3_0;
		bool L_4 = V_8;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.TopicWildcard);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, 3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPublish_GetBytes_m340EEC3C62DF70AB15B3DD792C5919F5F757FB36_RuntimeMethod_var)));
	}

IL_003f:
	{
		// if ((this.topic.Length < MIN_TOPIC_LENGTH) || (this.topic.Length > MAX_TOPIC_LENGTH))
		String_t* L_6 = __this->___topic_55;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if ((((int32_t)L_7) < ((int32_t)1)))
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_8 = __this->___topic_55;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		G_B8_0 = ((((int32_t)L_9) > ((int32_t)((int32_t)65535)))? 1 : 0);
		goto IL_0062;
	}

IL_0061:
	{
		G_B8_0 = 1;
	}

IL_0062:
	{
		V_9 = (bool)G_B8_0;
		bool L_10 = V_9;
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.TopicLength);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_11 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_11, 4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPublish_GetBytes_m340EEC3C62DF70AB15B3DD792C5919F5F757FB36_RuntimeMethod_var)));
	}

IL_006f:
	{
		// if (this.qosLevel > QOS_LEVEL_EXACTLY_ONCE)
		uint8_t L_12 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52;
		V_10 = (bool)((((int32_t)L_12) > ((int32_t)2))? 1 : 0);
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_0085;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.QosNotAllowed);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_14 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_14, 5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPublish_GetBytes_m340EEC3C62DF70AB15B3DD792C5919F5F757FB36_RuntimeMethod_var)));
	}

IL_0085:
	{
		// byte[] topicUtf8 = Encoding.UTF8.GetBytes(this.topic);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_15;
		L_15 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_16 = __this->___topic_55;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_15, L_16);
		V_6 = L_17;
		// varHeaderSize += topicUtf8.Length + 2;
		int32_t L_18 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_6;
		NullCheck(L_19);
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_19)->max_length)), 2))));
		// if ((this.qosLevel == QOS_LEVEL_AT_LEAST_ONCE) ||
		//     (this.qosLevel == QOS_LEVEL_EXACTLY_ONCE))
		uint8_t L_20 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52;
		if ((((int32_t)L_20) == ((int32_t)1)))
		{
			goto IL_00b4;
		}
	}
	{
		uint8_t L_21 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52;
		G_B15_0 = ((((int32_t)L_21) == ((int32_t)2))? 1 : 0);
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B15_0 = 1;
	}

IL_00b5:
	{
		V_11 = (bool)G_B15_0;
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_00c1;
		}
	}
	{
		// varHeaderSize += MESSAGE_ID_SIZE;
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 2));
	}

IL_00c1:
	{
		// if (this.message != null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___message_56;
		V_12 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_24) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00db;
		}
	}
	{
		// payloadSize += this.message.Length;
		int32_t L_26 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___message_56;
		NullCheck(L_27);
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)(((RuntimeArray*)L_27)->max_length))));
	}

IL_00db:
	{
		// remainingLength += (varHeaderSize + payloadSize);
		int32_t L_28 = V_3;
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, ((int32_t)il2cpp_codegen_add(L_29, L_30))));
		// fixedHeaderSize = 1;
		V_0 = 1;
		// int temp = remainingLength;
		int32_t L_31 = V_3;
		V_7 = L_31;
	}

IL_00e6:
	{
		// fixedHeaderSize++;
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		// temp = temp / 128;
		int32_t L_33 = V_7;
		V_7 = ((int32_t)(L_33/((int32_t)128)));
		// } while (temp > 0);
		int32_t L_34 = V_7;
		V_13 = (bool)((((int32_t)L_34) > ((int32_t)0))? 1 : 0);
		bool L_35 = V_13;
		if (L_35)
		{
			goto IL_00e6;
		}
	}
	{
		// buffer = new byte[fixedHeaderSize + varHeaderSize + payloadSize];
		int32_t L_36 = V_0;
		int32_t L_37 = V_1;
		int32_t L_38 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_36, L_37)), L_38)));
		V_4 = L_39;
		// buffer[index] = (byte)((MQTT_MSG_PUBLISH_TYPE << MSG_TYPE_OFFSET) |
		//                        (this.qosLevel << QOS_LEVEL_OFFSET));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_4;
		int32_t L_41 = V_5;
		uint8_t L_42 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)48)|((int32_t)((int32_t)L_42<<1))))));
		// buffer[index] |= this.dupFlag ? (byte)(1 << DUP_FLAG_OFFSET) : (byte)0x00;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_4;
		int32_t L_44 = V_5;
		NullCheck(L_43);
		uint8_t* L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)));
		int32_t L_46 = *((uint8_t*)L_45);
		bool L_47 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___dupFlag_51;
		G_B22_0 = L_46;
		G_B22_1 = L_45;
		if (L_47)
		{
			G_B23_0 = L_46;
			G_B23_1 = L_45;
			goto IL_0134;
		}
	}
	{
		G_B24_0 = 0;
		G_B24_1 = G_B22_0;
		G_B24_2 = G_B22_1;
		goto IL_0135;
	}

IL_0134:
	{
		G_B24_0 = 8;
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
	}

IL_0135:
	{
		*((int8_t*)G_B24_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(G_B24_1|G_B24_0)));
		// buffer[index] |= this.retain ? (byte)(1 << RETAIN_FLAG_OFFSET) : (byte)0x00;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_4;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		uint8_t* L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)));
		int32_t L_51 = *((uint8_t*)L_50);
		bool L_52 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___retain_53;
		G_B25_0 = L_51;
		G_B25_1 = L_50;
		if (L_52)
		{
			G_B26_0 = L_51;
			G_B26_1 = L_50;
			goto IL_014e;
		}
	}
	{
		G_B27_0 = 0;
		G_B27_1 = G_B25_0;
		G_B27_2 = G_B25_1;
		goto IL_014f;
	}

IL_014e:
	{
		G_B27_0 = 1;
		G_B27_1 = G_B26_0;
		G_B27_2 = G_B26_1;
	}

IL_014f:
	{
		*((int8_t*)G_B27_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(G_B27_1|G_B27_0)));
		// index++;
		int32_t L_53 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		// index = this.encodeRemainingLength(remainingLength, buffer, index);
		int32_t L_54 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_4;
		int32_t L_56 = V_5;
		int32_t L_57;
		L_57 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_54, L_55, L_56, NULL);
		V_5 = L_57;
		// buffer[index++] = (byte)((topicUtf8.Length >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_4;
		int32_t L_59 = V_5;
		int32_t L_60 = L_59;
		V_5 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_6;
		NullCheck(L_61);
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((RuntimeArray*)L_61)->max_length))>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(topicUtf8.Length & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = V_4;
		int32_t L_63 = V_5;
		int32_t L_64 = L_63;
		V_5 = ((int32_t)il2cpp_codegen_add(L_64, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_6;
		NullCheck(L_65);
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((RuntimeArray*)L_65)->max_length))&((int32_t)255)))));
		// Array.Copy(topicUtf8, 0, buffer, index, topicUtf8.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_4;
		int32_t L_68 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = V_6;
		NullCheck(L_69);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_66, 0, (RuntimeArray*)L_67, L_68, ((int32_t)(((RuntimeArray*)L_69)->max_length)), NULL);
		// index += topicUtf8.Length;
		int32_t L_70 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = V_6;
		NullCheck(L_71);
		V_5 = ((int32_t)il2cpp_codegen_add(L_70, ((int32_t)(((RuntimeArray*)L_71)->max_length))));
		// if ((this.qosLevel == QOS_LEVEL_AT_LEAST_ONCE) ||
		//     (this.qosLevel == QOS_LEVEL_EXACTLY_ONCE))
		uint8_t L_72 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52;
		if ((((int32_t)L_72) == ((int32_t)1)))
		{
			goto IL_01bf;
		}
	}
	{
		uint8_t L_73 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52;
		G_B30_0 = ((((int32_t)L_73) == ((int32_t)2))? 1 : 0);
		goto IL_01c0;
	}

IL_01bf:
	{
		G_B30_0 = 1;
	}

IL_01c0:
	{
		V_14 = (bool)G_B30_0;
		bool L_74 = V_14;
		if (!L_74)
		{
			goto IL_020f;
		}
	}
	{
		// if (this.messageId == 0)
		uint16_t L_75 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		V_15 = (bool)((((int32_t)L_75) == ((int32_t)0))? 1 : 0);
		bool L_76 = V_15;
		if (!L_76)
		{
			goto IL_01de;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.WrongMessageId);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_77 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_77);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_77, ((int32_t)10), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_77, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPublish_GetBytes_m340EEC3C62DF70AB15B3DD792C5919F5F757FB36_RuntimeMethod_var)));
	}

IL_01de:
	{
		// buffer[index++] = (byte)((this.messageId >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = V_4;
		int32_t L_79 = V_5;
		int32_t L_80 = L_79;
		V_5 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		uint16_t L_81 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_81>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(this.messageId & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = V_4;
		int32_t L_83 = V_5;
		int32_t L_84 = L_83;
		V_5 = ((int32_t)il2cpp_codegen_add(L_84, 1));
		uint16_t L_85 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_85&((int32_t)255)))));
	}

IL_020f:
	{
		// if (this.message != null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = __this->___message_56;
		V_16 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_86) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_87 = V_16;
		if (!L_87)
		{
			goto IL_0246;
		}
	}
	{
		// Array.Copy(this.message, 0, buffer, index, this.message.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = __this->___message_56;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = V_4;
		int32_t L_90 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = __this->___message_56;
		NullCheck(L_91);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_88, 0, (RuntimeArray*)L_89, L_90, ((int32_t)(((RuntimeArray*)L_91)->max_length)), NULL);
		// index += this.message.Length;
		int32_t L_92 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = __this->___message_56;
		NullCheck(L_93);
		V_5 = ((int32_t)il2cpp_codegen_add(L_92, ((int32_t)(((RuntimeArray*)L_93)->max_length))));
	}

IL_0246:
	{
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = V_4;
		V_17 = L_94;
		goto IL_024c;
	}

IL_024c:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = V_17;
		return L_95;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* MqttMsgPublish_Parse_m6E5CE86359CFBAC2952E151726CEE05F58DCAB53 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* V_13 = NULL;
	int32_t G_B5_0 = 0;
	{
		// int index = 0;
		V_1 = 0;
		// MqttMsgPublish msg = new MqttMsgPublish();
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_0 = (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE*)il2cpp_codegen_object_new(MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgPublish__ctor_mEBCB0917FF5442CAB39A95FAE1F70598989D187E(L_0, NULL);
		V_4 = L_0;
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_1 = ___channel2;
		int32_t L_2;
		L_2 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_1, NULL);
		V_5 = L_2;
		// buffer = new byte[remainingLength];
		int32_t L_3 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_0 = L_4;
		// int received = channel.Receive(buffer);
		RuntimeObject* L_5 = ___channel2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_5, L_6);
		V_6 = L_7;
		// topicUtf8Length = ((buffer[index++] << 8) & 0xFF00);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		NullCheck(L_8);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)(((int32_t)((int32_t)L_12<<8))&((int32_t)65280)));
		// topicUtf8Length |= buffer[index++];
		int32_t L_13 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = ((int32_t)(L_13|(int32_t)L_18));
		// topicUtf8 = new byte[topicUtf8Length];
		int32_t L_19 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_2 = L_20;
		// Array.Copy(buffer, index, topicUtf8, 0, topicUtf8Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		int32_t L_22 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_2;
		int32_t L_24 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_21, L_22, (RuntimeArray*)L_23, 0, L_24, NULL);
		// index += topicUtf8Length;
		int32_t L_25 = V_1;
		int32_t L_26 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
		// msg.topic = new String(Encoding.UTF8.GetChars(topicUtf8));
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_27 = V_4;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_28;
		L_28 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_2;
		NullCheck(L_28);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_30;
		L_30 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(24 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_28, L_29);
		String_t* L_31;
		L_31 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_30, NULL);
		NullCheck(L_27);
		L_27->___topic_55 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___topic_55), (void*)L_31);
		// msg.qosLevel = (byte)((fixedHeaderFirstByte & QOS_LEVEL_MASK) >> QOS_LEVEL_OFFSET);
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_32 = V_4;
		uint8_t L_33 = ___fixedHeaderFirstByte0;
		NullCheck(L_32);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_32)->___qosLevel_52 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_33&6))>>1)));
		// if (msg.qosLevel > QOS_LEVEL_EXACTLY_ONCE)
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_34 = V_4;
		NullCheck(L_34);
		uint8_t L_35 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_34)->___qosLevel_52;
		V_10 = (bool)((((int32_t)L_35) > ((int32_t)2))? 1 : 0);
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_008e;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.QosNotAllowed);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_37 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_37);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_37, 5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPublish_Parse_m6E5CE86359CFBAC2952E151726CEE05F58DCAB53_RuntimeMethod_var)));
	}

IL_008e:
	{
		// msg.dupFlag = (((fixedHeaderFirstByte & DUP_FLAG_MASK) >> DUP_FLAG_OFFSET) == 0x01);
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_38 = V_4;
		uint8_t L_39 = ___fixedHeaderFirstByte0;
		NullCheck(L_38);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_38)->___dupFlag_51 = (bool)((((int32_t)((int32_t)(((int32_t)((int32_t)L_39&8))>>3))) == ((int32_t)1))? 1 : 0);
		// msg.retain = (((fixedHeaderFirstByte & RETAIN_FLAG_MASK) >> RETAIN_FLAG_OFFSET) == 0x01);
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_40 = V_4;
		uint8_t L_41 = ___fixedHeaderFirstByte0;
		NullCheck(L_40);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_40)->___retain_53 = (bool)((((int32_t)((int32_t)((int32_t)L_41&1))) == ((int32_t)1))? 1 : 0);
		// if ((msg.qosLevel == QOS_LEVEL_AT_LEAST_ONCE) ||
		//     (msg.qosLevel == QOS_LEVEL_EXACTLY_ONCE))
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_42 = V_4;
		NullCheck(L_42);
		uint8_t L_43 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_42)->___qosLevel_52;
		if ((((int32_t)L_43) == ((int32_t)1)))
		{
			goto IL_00c0;
		}
	}
	{
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_44 = V_4;
		NullCheck(L_44);
		uint8_t L_45 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_44)->___qosLevel_52;
		G_B5_0 = ((((int32_t)L_45) == ((int32_t)2))? 1 : 0);
		goto IL_00c1;
	}

IL_00c0:
	{
		G_B5_0 = 1;
	}

IL_00c1:
	{
		V_11 = (bool)G_B5_0;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_00f6;
		}
	}
	{
		// msg.messageId = (ushort)((buffer[index++] << 8) & 0xFF00);
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_47 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_0;
		int32_t L_49 = V_1;
		int32_t L_50 = L_49;
		V_1 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		NullCheck(L_48);
		int32_t L_51 = L_50;
		uint8_t L_52 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_47);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_47)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_52<<8))&((int32_t)65280))));
		// msg.messageId |= (buffer[index++]);
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_53 = V_4;
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_54 = L_53;
		NullCheck(L_54);
		uint16_t L_55 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_54)->___messageId_54;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_0;
		int32_t L_57 = V_1;
		int32_t L_58 = L_57;
		V_1 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		NullCheck(L_56);
		int32_t L_59 = L_58;
		uint8_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		NullCheck(L_54);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_54)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_55|(int32_t)L_60)));
	}

IL_00f6:
	{
		// int messageSize = remainingLength - index;
		int32_t L_61 = V_5;
		int32_t L_62 = V_1;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_61, L_62));
		// int remaining = messageSize;
		int32_t L_63 = V_7;
		V_8 = L_63;
		// int messageOffset = 0;
		V_9 = 0;
		// msg.message = new byte[messageSize];
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_64 = V_4;
		int32_t L_65 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_65);
		NullCheck(L_64);
		L_64->___message_56 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&L_64->___message_56), (void*)L_66);
		// Array.Copy(buffer, index, msg.message, messageOffset, received - index);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_0;
		int32_t L_68 = V_1;
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_69 = V_4;
		NullCheck(L_69);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = L_69->___message_56;
		int32_t L_71 = V_9;
		int32_t L_72 = V_6;
		int32_t L_73 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_67, L_68, (RuntimeArray*)L_70, L_71, ((int32_t)il2cpp_codegen_subtract(L_72, L_73)), NULL);
		// remaining -= (received - index);
		int32_t L_74 = V_8;
		int32_t L_75 = V_6;
		int32_t L_76 = V_1;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_74, ((int32_t)il2cpp_codegen_subtract(L_75, L_76))));
		// messageOffset += (received - index);
		int32_t L_77 = V_9;
		int32_t L_78 = V_6;
		int32_t L_79 = V_1;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, ((int32_t)il2cpp_codegen_subtract(L_78, L_79))));
		goto IL_0166;
	}

IL_013a:
	{
		// received = channel.Receive(buffer);
		RuntimeObject* L_80 = ___channel2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = V_0;
		NullCheck(L_80);
		int32_t L_82;
		L_82 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_80, L_81);
		V_6 = L_82;
		// Array.Copy(buffer, 0, msg.message, messageOffset, received);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = V_0;
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_84 = V_4;
		NullCheck(L_84);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = L_84->___message_56;
		int32_t L_86 = V_9;
		int32_t L_87 = V_6;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_83, 0, (RuntimeArray*)L_85, L_86, L_87, NULL);
		// remaining -= received;
		int32_t L_88 = V_8;
		int32_t L_89 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_88, L_89));
		// messageOffset += received;
		int32_t L_90 = V_9;
		int32_t L_91 = V_6;
		V_9 = ((int32_t)il2cpp_codegen_add(L_90, L_91));
	}

IL_0166:
	{
		// while (remaining > 0)
		int32_t L_92 = V_8;
		V_12 = (bool)((((int32_t)L_92) > ((int32_t)0))? 1 : 0);
		bool L_93 = V_12;
		if (L_93)
		{
			goto IL_013a;
		}
	}
	{
		// return msg;
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_94 = V_4;
		V_13 = L_94;
		goto IL_0177;
	}

IL_0177:
	{
		// }
		MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* L_95 = V_13;
		return L_95;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPublish_ToString_m8265CB85BA26DD4AA05F7ECA9745413C5C29E28F (MqttMsgPublish_t2D16DE1DB1B22313ADF3E338F55056F5A038A9FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC547B2F00A9A1E99E291F02403121ED047425195);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18BB8748E10A644F72B745C6F647001B495C4A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return this.GetTraceString(
		//     "PUBLISH",
		//     new object[] { "messageId", "topic", "message" },
		//     new object[] { this.messageId, this.topic, this.message });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralD18BB8748E10A644F72B745C6F647001B495C4A0);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteralD18BB8748E10A644F72B745C6F647001B495C4A0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		uint16_t L_6 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		uint16_t L_7 = L_6;
		RuntimeObject* L_8 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		String_t* L_10 = __this->___topic_55;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___message_56;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteralC547B2F00A9A1E99E291F02403121ED047425195, L_3, L_11, NULL);
		V_0 = L_13;
		goto IL_0053;
	}

IL_0053:
	{
		// }
		String_t* L_14 = V_0;
		return L_14;
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
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::get_MessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgPublishedEventArgs_get_MessageId_m4593BAD5208396A38961E4F4414885DC727AE00C (MqttMsgPublishedEventArgs_t8E13328196C17B2D79751AB851666268175DA0B0* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		// get { return this.messageId; }
		uint16_t L_0 = __this->___messageId_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.messageId; }
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::set_MessageId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventArgs_set_MessageId_mAD32DE0A57B136D32F25B50C72CD5C7AE6B04244 (MqttMsgPublishedEventArgs_t8E13328196C17B2D79751AB851666268175DA0B0* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.messageId = value; }
		uint16_t L_0 = ___value0;
		__this->___messageId_1 = L_0;
		// internal set { this.messageId = value; }
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::get_IsPublished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttMsgPublishedEventArgs_get_IsPublished_m2D4CE8E17BEB8170D2F86892AF4CA869AC0E1861 (MqttMsgPublishedEventArgs_t8E13328196C17B2D79751AB851666268175DA0B0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return this.isPublished; }
		bool L_0 = __this->___isPublished_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.isPublished; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::set_IsPublished(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventArgs_set_IsPublished_m53D02ED5C8691C12DFA4D64AACB01B908A97BF79 (MqttMsgPublishedEventArgs_t8E13328196C17B2D79751AB851666268175DA0B0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.isPublished = value; }
		bool L_0 = ___value0;
		__this->___isPublished_2 = L_0;
		// internal set { this.isPublished = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::.ctor(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventArgs__ctor_m854CBF244F2CC01B52278E2BA6296850BBC9DF87 (MqttMsgPublishedEventArgs_t8E13328196C17B2D79751AB851666268175DA0B0* __this, uint16_t ___messageId0, const RuntimeMethod* method) 
{
	{
		// : this(messageId, true)
		uint16_t L_0 = ___messageId0;
		MqttMsgPublishedEventArgs__ctor_m37945B4C38E4232B730B87A6AFCFAC6CE2659939(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::.ctor(System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventArgs__ctor_m37945B4C38E4232B730B87A6AFCFAC6CE2659939 (MqttMsgPublishedEventArgs_t8E13328196C17B2D79751AB851666268175DA0B0* __this, uint16_t ___messageId0, bool ___isPublished1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MqttMsgPublishedEventArgs(ushort messageId, bool isPublished)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// this.messageId = messageId;
		uint16_t L_0 = ___messageId0;
		__this->___messageId_1 = L_0;
		// this.isPublished = isPublished;
		bool L_1 = ___isPublished1;
		__this->___isPublished_2 = L_1;
		// }
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
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::get_Topic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPublishEventArgs_get_Topic_m061650CA33601B27674084A690293F09EAAC065E (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return this.topic; }
		String_t* L_0 = __this->___topic_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.topic; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::set_Topic(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventArgs_set_Topic_mD5FA18D790C72EA4D882157638205F0B94671CC5 (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.topic = value; }
		String_t* L_0 = ___value0;
		__this->___topic_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topic_1), (void*)L_0);
		// internal set { this.topic = value; }
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgPublishEventArgs_get_Message_m3F04F811144A7FC49C889389C56757689E328693 (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// get { return this.message; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___message_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.message; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::set_Message(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventArgs_set_Message_m851E5FC1785C4407A569E454DE9891A7E80F8256 (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.message = value; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___message_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_2), (void*)L_0);
		// internal set { this.message = value; }
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::get_DupFlag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttMsgPublishEventArgs_get_DupFlag_m2F6619549F575168C634F6BDD46A7D14530F3804 (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return this.dupFlag; }
		bool L_0 = __this->___dupFlag_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.dupFlag; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::set_DupFlag(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventArgs_set_DupFlag_m6B272B7302862AFCEBD3CEB2A720FF47D253AA8A (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.dupFlag = value; }
		bool L_0 = ___value0;
		__this->___dupFlag_3 = L_0;
		// set { this.dupFlag = value; }
		return;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::get_QosLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t MqttMsgPublishEventArgs_get_QosLevel_m36C0639A6DCE6B5FBF28AA8BDE8F72195B0DEB8B (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		// get { return this.qosLevel; }
		uint8_t L_0 = __this->___qosLevel_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.qosLevel; }
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::set_QosLevel(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventArgs_set_QosLevel_m8F1F2C89D23DE7E95EA6688506FFC7A44379D644 (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.qosLevel = value; }
		uint8_t L_0 = ___value0;
		__this->___qosLevel_4 = L_0;
		// internal set { this.qosLevel = value; }
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::get_Retain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttMsgPublishEventArgs_get_Retain_mB2FBACF7C3AB4C0113B38798EEBC3945B71CCE6F (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return this.retain; }
		bool L_0 = __this->___retain_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.retain; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::set_Retain(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventArgs_set_Retain_mB2FC74F2B21151F28A76F9C5A193FDE57D318579 (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.retain = value; }
		bool L_0 = ___value0;
		__this->___retain_5 = L_0;
		// internal set { this.retain = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::.ctor(System.String,System.Byte[],System.Boolean,System.Byte,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventArgs__ctor_mC973BF4474D2585B305EF27273F574456AB28517 (MqttMsgPublishEventArgs_t4940EC834EA01038279DD241A6F96F73C223CB0B* __this, String_t* ___topic0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___message1, bool ___dupFlag2, uint8_t ___qosLevel3, bool ___retain4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MqttMsgPublishEventArgs(string topic,
		//     byte[] message,
		//     bool dupFlag,
		//     byte qosLevel,
		//     bool retain)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// this.topic = topic;
		String_t* L_0 = ___topic0;
		__this->___topic_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topic_1), (void*)L_0);
		// this.message = message;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___message1;
		__this->___message_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___message_2), (void*)L_1);
		// this.dupFlag = dupFlag;
		bool L_2 = ___dupFlag2;
		__this->___dupFlag_3 = L_2;
		// this.qosLevel = qosLevel;
		uint8_t L_3 = ___qosLevel3;
		__this->___qosLevel_4 = L_3;
		// this.retain = retain;
		bool L_4 = ___retain4;
		__this->___retain_5 = L_4;
		// }
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubrec__ctor_mB30BDB84C12336787A6E4A86AEF1BD72607938D2 (MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgPubrec()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_PUBREC_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)5;
		// }
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgPubrec_GetBytes_m16EE84E6F5F1320F3477F024F05B3012A5EAB7AB (MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* __this, uint8_t ___protocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	{
		// int fixedHeaderSize = 0;
		V_0 = 0;
		// int varHeaderSize = 0;
		V_1 = 0;
		// int payloadSize = 0;
		V_2 = 0;
		// int remainingLength = 0;
		V_3 = 0;
		// int index = 0;
		V_5 = 0;
		// varHeaderSize += MESSAGE_ID_SIZE;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 2));
		// remainingLength += (varHeaderSize + payloadSize);
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3))));
		// fixedHeaderSize = 1;
		V_0 = 1;
		// int temp = remainingLength;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001b:
	{
		// fixedHeaderSize++;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// temp = temp / 128;
		int32_t L_6 = V_6;
		V_6 = ((int32_t)(L_6/((int32_t)128)));
		// } while (temp > 0);
		int32_t L_7 = V_6;
		V_7 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_7;
		if (L_8)
		{
			goto IL_001b;
		}
	}
	{
		// buffer = new byte[fixedHeaderSize + varHeaderSize + payloadSize];
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_9, L_10)), L_11)));
		V_4 = L_12;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_13 = ___protocolVersion0;
		V_8 = (bool)((((int32_t)L_13) == ((int32_t)4))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		// buffer[index++] = (MQTT_MSG_PUBREC_TYPE << MSG_TYPE_OFFSET) | MQTT_MSG_PUBREC_FLAG_BITS; // [v.3.1.1]
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = L_16;
		V_5 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)80));
		goto IL_0066;
	}

IL_005a:
	{
		// buffer[index++] = (MQTT_MSG_PUBREC_TYPE << MSG_TYPE_OFFSET);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)((int32_t)80));
	}

IL_0066:
	{
		// index = this.encodeRemainingLength(remainingLength, buffer, index);
		int32_t L_21 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24;
		L_24 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_21, L_22, L_23, NULL);
		V_5 = L_24;
		// buffer[index++] = (byte)((this.messageId >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = L_26;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		uint16_t L_28 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_28>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(this.messageId & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_4;
		int32_t L_30 = V_5;
		int32_t L_31 = L_30;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		uint16_t L_32 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_32&((int32_t)255)))));
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_4;
		V_9 = L_33;
		goto IL_00a9;
	}

IL_00a9:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_9;
		return L_34;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* MqttMsgPubrec_Parse_m3DB26E5FEB864D49A4DFDC3DCEB29C35B6CFA131 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* V_6 = NULL;
	{
		// int index = 0;
		V_1 = 0;
		// MqttMsgPubrec msg = new MqttMsgPubrec();
		MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* L_0 = (MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98*)il2cpp_codegen_object_new(MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgPubrec__ctor_mB30BDB84C12336787A6E4A86AEF1BD72607938D2(L_0, NULL);
		V_2 = L_0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion1;
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// if ((fixedHeaderFirstByte & MSG_FLAG_BITS_MASK) != MQTT_MSG_PUBREC_FLAG_BITS)
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidFlagBits);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPubrec_Parse_m3DB26E5FEB864D49A4DFDC3DCEB29C35B6CFA131_RuntimeMethod_var)));
	}

IL_0029:
	{
	}

IL_002a:
	{
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_3 = L_7;
		// buffer = new byte[remainingLength];
		int32_t L_8 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		// channel.Receive(buffer);
		RuntimeObject* L_10 = ___channel2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_10, L_11);
		// msg.messageId = (ushort)((buffer[index++] << 8) & 0xFF00);
		MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_13);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_13)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_18<<8))&((int32_t)65280))));
		// msg.messageId |= (buffer[index++]);
		MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* L_19 = V_2;
		MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* L_20 = L_19;
		NullCheck(L_20);
		uint16_t L_21 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId_54;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		NullCheck(L_22);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_20);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_21|(int32_t)L_26)));
		// return msg;
		MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* L_27 = V_2;
		V_6 = L_27;
		goto IL_0070;
	}

IL_0070:
	{
		// }
		MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* L_28 = V_6;
		return L_28;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPubrec_ToString_mD9DACC8A1C52A3D8F2480A8CA12B5B39C489D9DC (MqttMsgPubrec_t46150A4E56147B45839BBC6E56618B24E9419A98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral134A5BC016353C36AC521E17B63768B82B9BCD3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return this.GetTraceString(
		//     "PUBREC",
		//     new object[] { "messageId" },
		//     new object[] { this.messageId });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		uint16_t L_4 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		uint16_t L_5 = L_4;
		RuntimeObject* L_6 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		String_t* L_7;
		L_7 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteral134A5BC016353C36AC521E17B63768B82B9BCD3D, L_1, L_3, NULL);
		V_0 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		String_t* L_8 = V_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPubrel__ctor_m0F8CDE90BB655C17120673B7E73A5F1408FDD6EB (MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgPubrel()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_PUBREL_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)6;
		// this.qosLevel = QOS_LEVEL_AT_LEAST_ONCE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52 = (uint8_t)1;
		// }
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgPubrel_GetBytes_m107F0D310AF4AD936C687B61E8CF5D8DDF095D84 (MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* __this, uint8_t ___protocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	int32_t G_B6_0 = 0;
	uint8_t* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	uint8_t* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	uint8_t* G_B7_2 = NULL;
	{
		// int fixedHeaderSize = 0;
		V_0 = 0;
		// int varHeaderSize = 0;
		V_1 = 0;
		// int payloadSize = 0;
		V_2 = 0;
		// int remainingLength = 0;
		V_3 = 0;
		// int index = 0;
		V_5 = 0;
		// varHeaderSize += MESSAGE_ID_SIZE;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 2));
		// remainingLength += (varHeaderSize + payloadSize);
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3))));
		// fixedHeaderSize = 1;
		V_0 = 1;
		// int temp = remainingLength;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001b:
	{
		// fixedHeaderSize++;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// temp = temp / 128;
		int32_t L_6 = V_6;
		V_6 = ((int32_t)(L_6/((int32_t)128)));
		// } while (temp > 0);
		int32_t L_7 = V_6;
		V_7 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_7;
		if (L_8)
		{
			goto IL_001b;
		}
	}
	{
		// buffer = new byte[fixedHeaderSize + varHeaderSize + payloadSize];
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_9, L_10)), L_11)));
		V_4 = L_12;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_13 = ___protocolVersion0;
		V_8 = (bool)((((int32_t)L_13) == ((int32_t)4))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		// buffer[index++] = (MQTT_MSG_PUBREL_TYPE << MSG_TYPE_OFFSET) | MQTT_MSG_PUBREL_FLAG_BITS; // [v.3.1.1]
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = L_16;
		V_5 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)98));
		goto IL_008d;
	}

IL_005a:
	{
		// buffer[index] = (byte)((MQTT_MSG_PUBREL_TYPE << MSG_TYPE_OFFSET) |
		//                    (this.qosLevel << QOS_LEVEL_OFFSET));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		int32_t L_19 = V_5;
		uint8_t L_20 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)96)|((int32_t)((int32_t)L_20<<1))))));
		// buffer[index] |= this.dupFlag ? (byte)(1 << DUP_FLAG_OFFSET) : (byte)0x00;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_4;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		uint8_t* L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)));
		int32_t L_24 = *((uint8_t*)L_23);
		bool L_25 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___dupFlag_51;
		G_B5_0 = L_24;
		G_B5_1 = L_23;
		if (L_25)
		{
			G_B6_0 = L_24;
			G_B6_1 = L_23;
			goto IL_0082;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0083;
	}

IL_0082:
	{
		G_B7_0 = 8;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0083:
	{
		*((int8_t*)G_B7_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(G_B7_1|G_B7_0)));
		// index++;
		int32_t L_26 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_008d:
	{
		// index = this.encodeRemainingLength(remainingLength, buffer, index);
		int32_t L_27 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_4;
		int32_t L_29 = V_5;
		int32_t L_30;
		L_30 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_27, L_28, L_29, NULL);
		V_5 = L_30;
		// buffer[index++] = (byte)((this.messageId >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_4;
		int32_t L_32 = V_5;
		int32_t L_33 = L_32;
		V_5 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		uint16_t L_34 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_34>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(this.messageId & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_4;
		int32_t L_36 = V_5;
		int32_t L_37 = L_36;
		V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		uint16_t L_38 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_38&((int32_t)255)))));
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_4;
		V_9 = L_39;
		goto IL_00d0;
	}

IL_00d0:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_9;
		return L_40;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* MqttMsgPubrel_Parse_m17EAD687465D39B4BC2BF31E17D10483E1FA0A3F (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* V_7 = NULL;
	{
		// int index = 0;
		V_1 = 0;
		// MqttMsgPubrel msg = new MqttMsgPubrel();
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_0 = (MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B*)il2cpp_codegen_object_new(MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgPubrel__ctor_m0F8CDE90BB655C17120673B7E73A5F1408FDD6EB(L_0, NULL);
		V_2 = L_0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion1;
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// if ((fixedHeaderFirstByte & MSG_FLAG_BITS_MASK) != MQTT_MSG_PUBREL_FLAG_BITS)
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_5 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidFlagBits);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgPubrel_Parse_m17EAD687465D39B4BC2BF31E17D10483E1FA0A3F_RuntimeMethod_var)));
	}

IL_002c:
	{
	}

IL_002d:
	{
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_3 = L_7;
		// buffer = new byte[remainingLength];
		int32_t L_8 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		// channel.Receive(buffer);
		RuntimeObject* L_10 = ___channel2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_10, L_11);
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1)
		uint8_t L_13 = ___protocolVersion1;
		V_6 = (bool)((((int32_t)L_13) == ((int32_t)3))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_0069;
		}
	}
	{
		// msg.qosLevel = (byte)((fixedHeaderFirstByte & QOS_LEVEL_MASK) >> QOS_LEVEL_OFFSET);
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_15 = V_2;
		uint8_t L_16 = ___fixedHeaderFirstByte0;
		NullCheck(L_15);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_15)->___qosLevel_52 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_16&6))>>1)));
		// msg.dupFlag = (((fixedHeaderFirstByte & DUP_FLAG_MASK) >> DUP_FLAG_OFFSET) == 0x01);
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_17 = V_2;
		uint8_t L_18 = ___fixedHeaderFirstByte0;
		NullCheck(L_17);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_17)->___dupFlag_51 = (bool)((((int32_t)((int32_t)(((int32_t)((int32_t)L_18&8))>>3))) == ((int32_t)1))? 1 : 0);
	}

IL_0069:
	{
		// msg.messageId = (ushort)((buffer[index++] << 8) & 0xFF00);
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_19 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		NullCheck(L_20);
		int32_t L_23 = L_22;
		uint8_t L_24 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_19);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_19)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_24<<8))&((int32_t)65280))));
		// msg.messageId |= (buffer[index++]);
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_25 = V_2;
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_26 = L_25;
		NullCheck(L_26);
		uint16_t L_27 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_26)->___messageId_54;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_0;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		NullCheck(L_28);
		int32_t L_31 = L_30;
		uint8_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_26);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_26)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_27|(int32_t)L_32)));
		// return msg;
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_33 = V_2;
		V_7 = L_33;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* L_34 = V_7;
		return L_34;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgPubrel_ToString_m26EBDD54A5BAAE3C702585C0ECC7E4EF97BD9F17 (MqttMsgPubrel_t90D841C85BB36270F6177E6AEE79501A453FB99B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC007C7DED5CDBA0115FD08526C8AF99FA050B84E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return this.GetTraceString(
		//     "PUBREL",
		//     new object[] { "messageId" },
		//     new object[] { this.messageId });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		uint16_t L_4 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		uint16_t L_5 = L_4;
		RuntimeObject* L_6 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		String_t* L_7;
		L_7 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteralC007C7DED5CDBA0115FD08526C8AF99FA050B84E, L_1, L_3, NULL);
		V_0 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		String_t* L_8 = V_0;
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
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::get_GrantedQoSLevels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgSuback_get_GrantedQoSLevels_m881CE92269A02B2C37E26A08FE4F3A4A81128C38 (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// get { return this.grantedQosLevels; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___grantedQosLevels_55;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.grantedQosLevels; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::set_GrantedQoSLevels(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSuback_set_GrantedQoSLevels_m557F90AFAED1457782DF7324B9CF9B0E01CFE7FB (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.grantedQosLevels = value; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___grantedQosLevels_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grantedQosLevels_55), (void*)L_0);
		// set { this.grantedQosLevels = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSuback__ctor_m469D8F0B93A0B36C1A4D295F3AEB14E5B0FBFDBC (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgSuback()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_SUBACK_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)((int32_t)9);
		// }
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* MqttMsgSuback_Parse_m47D0130E2A428D6094ED726B3959F94556E85925 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* V_8 = NULL;
	{
		// int index = 0;
		V_1 = 0;
		// MqttMsgSuback msg = new MqttMsgSuback();
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_0 = (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214*)il2cpp_codegen_object_new(MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgSuback__ctor_m469D8F0B93A0B36C1A4D295F3AEB14E5B0FBFDBC(L_0, NULL);
		V_2 = L_0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion1;
		V_5 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// if ((fixedHeaderFirstByte & MSG_FLAG_BITS_MASK) != MQTT_MSG_SUBACK_FLAG_BITS)
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_6 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_6;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidFlagBits);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSuback_Parse_m47D0130E2A428D6094ED726B3959F94556E85925_RuntimeMethod_var)));
	}

IL_0029:
	{
	}

IL_002a:
	{
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_3 = L_7;
		// buffer = new byte[remainingLength];
		int32_t L_8 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		// channel.Receive(buffer);
		RuntimeObject* L_10 = ___channel2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_10, L_11);
		// msg.messageId = (ushort)((buffer[index++] << 8) & 0xFF00);
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_13);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_13)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_18<<8))&((int32_t)65280))));
		// msg.messageId |= (buffer[index++]);
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_19 = V_2;
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_20 = L_19;
		NullCheck(L_20);
		uint16_t L_21 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId_54;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		NullCheck(L_22);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_20);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_21|(int32_t)L_26)));
		// msg.grantedQosLevels = new byte[remainingLength - MESSAGE_ID_SIZE];
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_27 = V_2;
		int32_t L_28 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_28, 2)));
		NullCheck(L_27);
		L_27->___grantedQosLevels_55 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->___grantedQosLevels_55), (void*)L_29);
		// int qosIdx = 0;
		V_4 = 0;
	}

IL_007c:
	{
		// msg.grantedQosLevels[qosIdx++] = buffer[index++];
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_30 = V_2;
		NullCheck(L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = L_30->___grantedQosLevels_55;
		int32_t L_32 = V_4;
		int32_t L_33 = L_32;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_0;
		int32_t L_35 = V_1;
		int32_t L_36 = L_35;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		NullCheck(L_34);
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (uint8_t)L_38);
		// } while (index < remainingLength);
		int32_t L_39 = V_1;
		int32_t L_40 = V_3;
		V_7 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_7;
		if (L_41)
		{
			goto IL_007c;
		}
	}
	{
		// return msg;
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_42 = V_2;
		V_8 = L_42;
		goto IL_00a2;
	}

IL_00a2:
	{
		// }
		MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* L_43 = V_8;
		return L_43;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgSuback_GetBytes_mD8E27F4456B2A95CC39DC94CC80C034F14D5F352 (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* __this, uint8_t ___protocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	{
		// int fixedHeaderSize = 0;
		V_0 = 0;
		// int varHeaderSize = 0;
		V_1 = 0;
		// int payloadSize = 0;
		V_2 = 0;
		// int remainingLength = 0;
		V_3 = 0;
		// int index = 0;
		V_5 = 0;
		// varHeaderSize += MESSAGE_ID_SIZE;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 2));
		// int grantedQosIdx = 0;
		V_6 = 0;
		// for (grantedQosIdx = 0; grantedQosIdx < this.grantedQosLevels.Length; grantedQosIdx++)
		V_6 = 0;
		goto IL_0024;
	}

IL_0018:
	{
		// payloadSize++;
		int32_t L_1 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// for (grantedQosIdx = 0; grantedQosIdx < this.grantedQosLevels.Length; grantedQosIdx++)
		int32_t L_2 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0024:
	{
		// for (grantedQosIdx = 0; grantedQosIdx < this.grantedQosLevels.Length; grantedQosIdx++)
		int32_t L_3 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___grantedQosLevels_55;
		NullCheck(L_4);
		V_8 = (bool)((((int32_t)L_3) < ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))? 1 : 0);
		bool L_5 = V_8;
		if (L_5)
		{
			goto IL_0018;
		}
	}
	{
		// remainingLength += (varHeaderSize + payloadSize);
		int32_t L_6 = V_3;
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)il2cpp_codegen_add(L_7, L_8))));
		// fixedHeaderSize = 1;
		V_0 = 1;
		// int temp = remainingLength;
		int32_t L_9 = V_3;
		V_7 = L_9;
	}

IL_0041:
	{
		// fixedHeaderSize++;
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// temp = temp / 128;
		int32_t L_11 = V_7;
		V_7 = ((int32_t)(L_11/((int32_t)128)));
		// } while (temp > 0);
		int32_t L_12 = V_7;
		V_9 = (bool)((((int32_t)L_12) > ((int32_t)0))? 1 : 0);
		bool L_13 = V_9;
		if (L_13)
		{
			goto IL_0041;
		}
	}
	{
		// buffer = new byte[fixedHeaderSize + varHeaderSize + payloadSize];
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)));
		V_4 = L_17;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_18 = ___protocolVersion0;
		V_10 = (bool)((((int32_t)L_18) == ((int32_t)4))? 1 : 0);
		bool L_19 = V_10;
		if (!L_19)
		{
			goto IL_0083;
		}
	}
	{
		// buffer[index++] = (MQTT_MSG_SUBACK_TYPE << MSG_TYPE_OFFSET) | MQTT_MSG_SUBACK_FLAG_BITS; // [v.3.1.1]
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_4;
		int32_t L_21 = V_5;
		int32_t L_22 = L_21;
		V_5 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint8_t)((int32_t)144));
		goto IL_0092;
	}

IL_0083:
	{
		// buffer[index++] = (byte)(MQTT_MSG_SUBACK_TYPE << MSG_TYPE_OFFSET);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_4;
		int32_t L_24 = V_5;
		int32_t L_25 = L_24;
		V_5 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)((int32_t)144));
	}

IL_0092:
	{
		// index = this.encodeRemainingLength(remainingLength, buffer, index);
		int32_t L_26 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_4;
		int32_t L_28 = V_5;
		int32_t L_29;
		L_29 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_26, L_27, L_28, NULL);
		V_5 = L_29;
		// buffer[index++] = (byte)((this.messageId >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_4;
		int32_t L_31 = V_5;
		int32_t L_32 = L_31;
		V_5 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		uint16_t L_33 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_33>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(this.messageId & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_4;
		int32_t L_35 = V_5;
		int32_t L_36 = L_35;
		V_5 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		uint16_t L_37 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_37&((int32_t)255)))));
		// for (grantedQosIdx = 0; grantedQosIdx < this.grantedQosLevels.Length; grantedQosIdx++)
		V_6 = 0;
		goto IL_00ef;
	}

IL_00d4:
	{
		// buffer[index++] = this.grantedQosLevels[grantedQosIdx];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_4;
		int32_t L_39 = V_5;
		int32_t L_40 = L_39;
		V_5 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->___grantedQosLevels_55;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		uint8_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (uint8_t)L_44);
		// for (grantedQosIdx = 0; grantedQosIdx < this.grantedQosLevels.Length; grantedQosIdx++)
		int32_t L_45 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00ef:
	{
		// for (grantedQosIdx = 0; grantedQosIdx < this.grantedQosLevels.Length; grantedQosIdx++)
		int32_t L_46 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___grantedQosLevels_55;
		NullCheck(L_47);
		V_11 = (bool)((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))))? 1 : 0);
		bool L_48 = V_11;
		if (L_48)
		{
			goto IL_00d4;
		}
	}
	{
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_4;
		V_12 = L_49;
		goto IL_0107;
	}

IL_0107:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_12;
		return L_50;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgSuback_ToString_mF3452B6FB23598C0DD8E77C1E9B47DF058982E92 (MqttMsgSuback_tED1672CCA4D312154BDA390A60E602BD44794214* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B62E2B5EAD21CB1CA240884FC41C2983538E241);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93DF057C369004121117C6673B3E24C2366F967C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return this.GetTraceString(
		//     "SUBACK",
		//     new object[] { "messageId", "grantedQosLevels" },
		//     new object[] { this.messageId, this.grantedQosLevels });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral5B62E2B5EAD21CB1CA240884FC41C2983538E241);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteral5B62E2B5EAD21CB1CA240884FC41C2983538E241);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		uint16_t L_5 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___grantedQosLevels_55;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		String_t* L_10;
		L_10 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteral93DF057C369004121117C6673B3E24C2366F967C, L_2, L_8, NULL);
		V_0 = L_10;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		String_t* L_11 = V_0;
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
// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::get_Topics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MqttMsgSubscribe_get_Topics_mBF2D19E3B4F35FD5FA75822E174801557A6EFB0D (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// get { return this.topics; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___topics_55;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.topics; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::set_Topics(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribe_set_Topics_m64ABCBE107AE277A744299DECB4C2FE73532F7DE (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.topics = value; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___value0;
		__this->___topics_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics_55), (void*)L_0);
		// set { this.topics = value; }
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::get_QoSLevels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgSubscribe_get_QoSLevels_m727E4E956B6EF2B1D9913AD60CC4F3FF87FDE47F (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// get { return this.qosLevels; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___qosLevels_56;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.qosLevels; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::set_QoSLevels(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribe_set_QoSLevels_m50BF1E2CFA283B48843CB88FD4C093AA3DE96648 (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.qosLevels = value; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___qosLevels_56 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qosLevels_56), (void*)L_0);
		// set { this.qosLevels = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribe__ctor_m5E9AA30D36FD0659C42FAC4A226DF27878B210DA (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgSubscribe()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_SUBSCRIBE_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)8;
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::.ctor(System.String[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribe__ctor_m03C757BE9B7FB41EC068B5AEFEBD42D3F8E9FBAB (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qosLevels1, const RuntimeMethod* method) 
{
	{
		// public MqttMsgSubscribe(string[] topics, byte[] qosLevels)
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_SUBSCRIBE_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)8;
		// this.topics = topics;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___topics0;
		__this->___topics_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics_55), (void*)L_0);
		// this.qosLevels = qosLevels;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___qosLevels1;
		__this->___qosLevels_56 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qosLevels_56), (void*)L_1);
		// this.qosLevel = QOS_LEVEL_AT_LEAST_ONCE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52 = (uint8_t)1;
		// }
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* MqttMsgSubscribe_Parse_mD81D31FEB3833854720D69EF53514CC052E82C17 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* V_15 = NULL;
	{
		// int index = 0;
		V_1 = 0;
		// MqttMsgSubscribe msg = new MqttMsgSubscribe();
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_0 = (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42*)il2cpp_codegen_object_new(MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgSubscribe__ctor_m5E9AA30D36FD0659C42FAC4A226DF27878B210DA(L_0, NULL);
		V_4 = L_0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion1;
		V_9 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_9;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// if ((fixedHeaderFirstByte & MSG_FLAG_BITS_MASK) != MQTT_MSG_SUBSCRIBE_FLAG_BITS)
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_10 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_10;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidFlagBits);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSubscribe_Parse_mD81D31FEB3833854720D69EF53514CC052E82C17_RuntimeMethod_var)));
	}

IL_002d:
	{
	}

IL_002e:
	{
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_5 = L_7;
		// buffer = new byte[remainingLength];
		int32_t L_8 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		// int received = channel.Receive(buffer);
		RuntimeObject* L_10 = ___channel2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_10, L_11);
		V_6 = L_12;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1)
		uint8_t L_13 = ___protocolVersion1;
		V_11 = (bool)((((int32_t)L_13) == ((int32_t)3))? 1 : 0);
		bool L_14 = V_11;
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		// msg.qosLevel = (byte)((fixedHeaderFirstByte & QOS_LEVEL_MASK) >> QOS_LEVEL_OFFSET);
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_15 = V_4;
		uint8_t L_16 = ___fixedHeaderFirstByte0;
		NullCheck(L_15);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_15)->___qosLevel_52 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_16&6))>>1)));
		// msg.dupFlag = (((fixedHeaderFirstByte & DUP_FLAG_MASK) >> DUP_FLAG_OFFSET) == 0x01);
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_17 = V_4;
		uint8_t L_18 = ___fixedHeaderFirstByte0;
		NullCheck(L_17);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_17)->___dupFlag_51 = (bool)((((int32_t)((int32_t)(((int32_t)((int32_t)L_18&8))>>3))) == ((int32_t)1))? 1 : 0);
		// msg.retain = false;
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_19 = V_4;
		NullCheck(L_19);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_19)->___retain_53 = (bool)0;
	}

IL_0077:
	{
		// msg.messageId = (ushort)((buffer[index++] << 8) & 0xFF00);
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_20 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		NullCheck(L_21);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_20);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_25<<8))&((int32_t)65280))));
		// msg.messageId |= (buffer[index++]);
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_26 = V_4;
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_27 = L_26;
		NullCheck(L_27);
		uint16_t L_28 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_27)->___messageId_54;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_0;
		int32_t L_30 = V_1;
		int32_t L_31 = L_30;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		NullCheck(L_29);
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_27);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_27)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_28|(int32_t)L_33)));
		// IList<String> tmpTopics = new List<String>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_34 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_34, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_7 = L_34;
		// IList<byte> tmpQosLevels = new List<byte>();
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_35 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_35, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_8 = L_35;
	}

IL_00b2:
	{
		// topicUtf8Length = ((buffer[index++] << 8) & 0xFF00);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		int32_t L_37 = V_1;
		int32_t L_38 = L_37;
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		NullCheck(L_36);
		int32_t L_39 = L_38;
		uint8_t L_40 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_3 = ((int32_t)(((int32_t)((int32_t)L_40<<8))&((int32_t)65280)));
		// topicUtf8Length |= buffer[index++];
		int32_t L_41 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_0;
		int32_t L_43 = V_1;
		int32_t L_44 = L_43;
		V_1 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		NullCheck(L_42);
		int32_t L_45 = L_44;
		uint8_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_3 = ((int32_t)(L_41|(int32_t)L_46));
		// topicUtf8 = new byte[topicUtf8Length];
		int32_t L_47 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_47);
		V_2 = L_48;
		// Array.Copy(buffer, index, topicUtf8, 0, topicUtf8Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_0;
		int32_t L_50 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_2;
		int32_t L_52 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_49, L_50, (RuntimeArray*)L_51, 0, L_52, NULL);
		// index += topicUtf8Length;
		int32_t L_53 = V_1;
		int32_t L_54 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_53, L_54));
		// tmpTopics.Add(new String(Encoding.UTF8.GetChars(topicUtf8)));
		RuntimeObject* L_55 = V_7;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_56;
		L_56 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_2;
		NullCheck(L_56);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58;
		L_58 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(24 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_56, L_57);
		String_t* L_59;
		L_59 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_58, NULL);
		NullCheck(L_55);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(T) */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_55, L_59);
		// tmpQosLevels.Add(buffer[index++]);
		RuntimeObject* L_60 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_0;
		int32_t L_62 = V_1;
		int32_t L_63 = L_62;
		V_1 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		NullCheck(L_61);
		int32_t L_64 = L_63;
		uint8_t L_65 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_60);
		InterfaceActionInvoker1< uint8_t >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Byte>::Add(T) */, ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var, L_60, L_65);
		// } while (index < remainingLength);
		int32_t L_66 = V_1;
		int32_t L_67 = V_5;
		V_12 = (bool)((((int32_t)L_66) < ((int32_t)L_67))? 1 : 0);
		bool L_68 = V_12;
		if (L_68)
		{
			goto IL_00b2;
		}
	}
	{
		// msg.topics = new string[tmpTopics.Count];
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_69 = V_4;
		RuntimeObject* L_70 = V_7;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_71);
		NullCheck(L_69);
		L_69->___topics_55 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&L_69->___topics_55), (void*)L_72);
		// msg.qosLevels = new byte[tmpQosLevels.Count];
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_73 = V_4;
		RuntimeObject* L_74 = V_8;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t2F3F43301A2C4258285E66980237B7AE65F4CD7C_il2cpp_TypeInfo_var, L_74);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_75);
		NullCheck(L_73);
		L_73->___qosLevels_56 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&L_73->___qosLevels_56), (void*)L_76);
		// for (int i = 0; i < tmpTopics.Count; i++)
		V_13 = 0;
		goto IL_016f;
	}

IL_0141:
	{
		// msg.topics[i] = (string)tmpTopics[i];
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_77 = V_4;
		NullCheck(L_77);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = L_77->___topics_55;
		int32_t L_79 = V_13;
		RuntimeObject* L_80 = V_7;
		int32_t L_81 = V_13;
		NullCheck(L_80);
		String_t* L_82;
		L_82 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.String>::get_Item(System.Int32) */, IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var, L_80, L_81);
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_82);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (String_t*)L_82);
		// msg.qosLevels[i] = (byte)tmpQosLevels[i];
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_83 = V_4;
		NullCheck(L_83);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = L_83->___qosLevels_56;
		int32_t L_85 = V_13;
		RuntimeObject* L_86 = V_8;
		int32_t L_87 = V_13;
		NullCheck(L_86);
		uint8_t L_88;
		L_88 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32) */, IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C_il2cpp_TypeInfo_var, L_86, L_87);
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(L_85), (uint8_t)L_88);
		// for (int i = 0; i < tmpTopics.Count; i++)
		int32_t L_89 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_016f:
	{
		// for (int i = 0; i < tmpTopics.Count; i++)
		int32_t L_90 = V_13;
		RuntimeObject* L_91 = V_7;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_91);
		V_14 = (bool)((((int32_t)L_90) < ((int32_t)L_92))? 1 : 0);
		bool L_93 = V_14;
		if (L_93)
		{
			goto IL_0141;
		}
	}
	{
		// return msg;
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_94 = V_4;
		V_15 = L_94;
		goto IL_0186;
	}

IL_0186:
	{
		// }
		MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* L_95 = V_15;
		return L_95;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1 (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, uint8_t ___protocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_7 = NULL;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_18 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B26_0 = 0;
	uint8_t* G_B26_1 = NULL;
	int32_t G_B25_0 = 0;
	uint8_t* G_B25_1 = NULL;
	int32_t G_B27_0 = 0;
	int32_t G_B27_1 = 0;
	uint8_t* G_B27_2 = NULL;
	{
		// int fixedHeaderSize = 0;
		V_0 = 0;
		// int varHeaderSize = 0;
		V_1 = 0;
		// int payloadSize = 0;
		V_2 = 0;
		// int remainingLength = 0;
		V_3 = 0;
		// int index = 0;
		V_5 = 0;
		// if ((this.topics == null) || (this.topics.Length == 0))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___topics_55;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___topics_55;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 1;
	}

IL_0021:
	{
		V_9 = (bool)G_B3_0;
		bool L_2 = V_9;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.TopicsEmpty);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_3 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_3, 6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1_RuntimeMethod_var)));
	}

IL_002e:
	{
		// if ((this.qosLevels == null) || (this.qosLevels.Length == 0))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___qosLevels_56;
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___qosLevels_56;
		NullCheck(L_5);
		G_B8_0 = ((((int32_t)(((RuntimeArray*)L_5)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 1;
	}

IL_0043:
	{
		V_10 = (bool)G_B8_0;
		bool L_6 = V_10;
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.QosLevelsEmpty);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_7 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_7, 7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1_RuntimeMethod_var)));
	}

IL_0050:
	{
		// if (this.topics.Length != this.qosLevels.Length)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = __this->___topics_55;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___qosLevels_56;
		NullCheck(L_9);
		V_11 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_11;
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.TopicsQosLevelsNotMatch);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_11 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_11, 8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1_RuntimeMethod_var)));
	}

IL_0072:
	{
		// varHeaderSize += MESSAGE_ID_SIZE;
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 2));
		// int topicIdx = 0;
		V_6 = 0;
		// byte[][] topicsUtf8 = new byte[this.topics.Length][];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = __this->___topics_55;
		NullCheck(L_13);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_14 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)));
		V_7 = L_14;
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		V_6 = 0;
		goto IL_00f5;
	}

IL_008d:
	{
		// if ((this.topics[topicIdx].Length < MIN_TOPIC_LENGTH) || (this.topics[topicIdx].Length > MAX_TOPIC_LENGTH))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = __this->___topics_55;
		int32_t L_16 = V_6;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		String_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_18, NULL);
		if ((((int32_t)L_19) < ((int32_t)1)))
		{
			goto IL_00b6;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = __this->___topics_55;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		int32_t L_24;
		L_24 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_23, NULL);
		G_B16_0 = ((((int32_t)L_24) > ((int32_t)((int32_t)65535)))? 1 : 0);
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B16_0 = 1;
	}

IL_00b7:
	{
		V_12 = (bool)G_B16_0;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_00c4;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.TopicLength);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_26 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_26, 4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1_RuntimeMethod_var)));
	}

IL_00c4:
	{
		// topicsUtf8[topicIdx] = Encoding.UTF8.GetBytes(this.topics[topicIdx]);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_27 = V_7;
		int32_t L_28 = V_6;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_29;
		L_29 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = __this->___topics_55;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_29);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34;
		L_34 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_29, L_33);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_34);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_34);
		// payloadSize += 2; // topic size (MSB, LSB)
		int32_t L_35 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_35, 2));
		// payloadSize += topicsUtf8[topicIdx].Length;
		int32_t L_36 = V_2;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_37 = V_7;
		int32_t L_38 = V_6;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		V_2 = ((int32_t)il2cpp_codegen_add(L_36, ((int32_t)(((RuntimeArray*)L_40)->max_length))));
		// payloadSize++; // byte for QoS
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		int32_t L_42 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00f5:
	{
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		int32_t L_43 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = __this->___topics_55;
		NullCheck(L_44);
		V_13 = (bool)((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))))? 1 : 0);
		bool L_45 = V_13;
		if (L_45)
		{
			goto IL_008d;
		}
	}
	{
		// remainingLength += (varHeaderSize + payloadSize);
		int32_t L_46 = V_3;
		int32_t L_47 = V_1;
		int32_t L_48 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, ((int32_t)il2cpp_codegen_add(L_47, L_48))));
		// fixedHeaderSize = 1;
		V_0 = 1;
		// int temp = remainingLength;
		int32_t L_49 = V_3;
		V_8 = L_49;
	}

IL_0112:
	{
		// fixedHeaderSize++;
		int32_t L_50 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		// temp = temp / 128;
		int32_t L_51 = V_8;
		V_8 = ((int32_t)(L_51/((int32_t)128)));
		// } while (temp > 0);
		int32_t L_52 = V_8;
		V_14 = (bool)((((int32_t)L_52) > ((int32_t)0))? 1 : 0);
		bool L_53 = V_14;
		if (L_53)
		{
			goto IL_0112;
		}
	}
	{
		// buffer = new byte[fixedHeaderSize + varHeaderSize + payloadSize];
		int32_t L_54 = V_0;
		int32_t L_55 = V_1;
		int32_t L_56 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_54, L_55)), L_56)));
		V_4 = L_57;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_58 = ___protocolVersion0;
		V_15 = (bool)((((int32_t)L_58) == ((int32_t)4))? 1 : 0);
		bool L_59 = V_15;
		if (!L_59)
		{
			goto IL_0154;
		}
	}
	{
		// buffer[index++] = (MQTT_MSG_SUBSCRIBE_TYPE << MSG_TYPE_OFFSET) | MQTT_MSG_SUBSCRIBE_FLAG_BITS; // [v.3.1.1]
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_4;
		int32_t L_61 = V_5;
		int32_t L_62 = L_61;
		V_5 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (uint8_t)((int32_t)130));
		goto IL_018a;
	}

IL_0154:
	{
		// buffer[index] = (byte)((MQTT_MSG_SUBSCRIBE_TYPE << MSG_TYPE_OFFSET) |
		//                    (this.qosLevel << QOS_LEVEL_OFFSET));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_4;
		int32_t L_64 = V_5;
		uint8_t L_65 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)128)|((int32_t)((int32_t)L_65<<1))))));
		// buffer[index] |= this.dupFlag ? (byte)(1 << DUP_FLAG_OFFSET) : (byte)0x00;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = V_4;
		int32_t L_67 = V_5;
		NullCheck(L_66);
		uint8_t* L_68 = ((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)));
		int32_t L_69 = *((uint8_t*)L_68);
		bool L_70 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___dupFlag_51;
		G_B25_0 = L_69;
		G_B25_1 = L_68;
		if (L_70)
		{
			G_B26_0 = L_69;
			G_B26_1 = L_68;
			goto IL_017f;
		}
	}
	{
		G_B27_0 = 0;
		G_B27_1 = G_B25_0;
		G_B27_2 = G_B25_1;
		goto IL_0180;
	}

IL_017f:
	{
		G_B27_0 = 8;
		G_B27_1 = G_B26_0;
		G_B27_2 = G_B26_1;
	}

IL_0180:
	{
		*((int8_t*)G_B27_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(G_B27_1|G_B27_0)));
		// index++;
		int32_t L_71 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_018a:
	{
		// index = this.encodeRemainingLength(remainingLength, buffer, index);
		int32_t L_72 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = V_4;
		int32_t L_74 = V_5;
		int32_t L_75;
		L_75 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_72, L_73, L_74, NULL);
		V_5 = L_75;
		// if (this.messageId == 0)
		uint16_t L_76 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		V_16 = (bool)((((int32_t)L_76) == ((int32_t)0))? 1 : 0);
		bool L_77 = V_16;
		if (!L_77)
		{
			goto IL_01ae;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.WrongMessageId);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_78 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_78);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_78, ((int32_t)10), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_78, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgSubscribe_GetBytes_m7FCB240ECBD2094E87DB1449A16E5FFD1EDCC4A1_RuntimeMethod_var)));
	}

IL_01ae:
	{
		// buffer[index++] = (byte)((messageId >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = V_4;
		int32_t L_80 = V_5;
		int32_t L_81 = L_80;
		V_5 = ((int32_t)il2cpp_codegen_add(L_81, 1));
		uint16_t L_82 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_82>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(messageId & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = V_4;
		int32_t L_84 = V_5;
		int32_t L_85 = L_84;
		V_5 = ((int32_t)il2cpp_codegen_add(L_85, 1));
		uint16_t L_86 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_85), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_86&((int32_t)255)))));
		// topicIdx = 0;
		V_6 = 0;
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		V_6 = 0;
		goto IL_0256;
	}

IL_01e6:
	{
		// buffer[index++] = (byte)((topicsUtf8[topicIdx].Length >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = V_4;
		int32_t L_88 = V_5;
		int32_t L_89 = L_88;
		V_5 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_90 = V_7;
		int32_t L_91 = V_6;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_93);
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((RuntimeArray*)L_93)->max_length))>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(topicsUtf8[topicIdx].Length & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = V_4;
		int32_t L_95 = V_5;
		int32_t L_96 = L_95;
		V_5 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_97 = V_7;
		int32_t L_98 = V_6;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		NullCheck(L_100);
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(L_96), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((RuntimeArray*)L_100)->max_length))&((int32_t)255)))));
		// Array.Copy(topicsUtf8[topicIdx], 0, buffer, index, topicsUtf8[topicIdx].Length);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_101 = V_7;
		int32_t L_102 = V_6;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_105 = V_4;
		int32_t L_106 = V_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_107 = V_7;
		int32_t L_108 = V_6;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		NullCheck(L_110);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_104, 0, (RuntimeArray*)L_105, L_106, ((int32_t)(((RuntimeArray*)L_110)->max_length)), NULL);
		// index += topicsUtf8[topicIdx].Length;
		int32_t L_111 = V_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_112 = V_7;
		int32_t L_113 = V_6;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_115);
		V_5 = ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)(((RuntimeArray*)L_115)->max_length))));
		// buffer[index++] = this.qosLevels[topicIdx];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_116 = V_4;
		int32_t L_117 = V_5;
		int32_t L_118 = L_117;
		V_5 = ((int32_t)il2cpp_codegen_add(L_118, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_119 = __this->___qosLevels_56;
		int32_t L_120 = V_6;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		uint8_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(L_118), (uint8_t)L_122);
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		int32_t L_123 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_0256:
	{
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		int32_t L_124 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_125 = __this->___topics_55;
		NullCheck(L_125);
		V_17 = (bool)((((int32_t)L_124) < ((int32_t)((int32_t)(((RuntimeArray*)L_125)->max_length))))? 1 : 0);
		bool L_126 = V_17;
		if (L_126)
		{
			goto IL_01e6;
		}
	}
	{
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_127 = V_4;
		V_18 = L_127;
		goto IL_0271;
	}

IL_0271:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_128 = V_18;
		return L_128;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgSubscribe_ToString_mF3C92B0EE686890CF9A58382FD0B170D864C7625 (MqttMsgSubscribe_tB18765B79690B4A5A27453F01BE5F55A6C7BEA42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEC326A6692604AB65616A2EBEDEFA56D4F572A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9ABEA54E864150EDBDE3863FA7913E6586073BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF11FFD471542CC88349AF88242C2DE74F1E4F415);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return this.GetTraceString(
		//     "SUBSCRIBE",
		//     new object[] { "messageId", "topics", "qosLevels" },
		//     new object[] { this.messageId, this.topics, this.qosLevels });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralAEC326A6692604AB65616A2EBEDEFA56D4F572A2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteralAEC326A6692604AB65616A2EBEDEFA56D4F572A2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralF11FFD471542CC88349AF88242C2DE74F1E4F415);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralF11FFD471542CC88349AF88242C2DE74F1E4F415);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		uint16_t L_6 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		uint16_t L_7 = L_6;
		RuntimeObject* L_8 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = __this->___topics_55;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___qosLevels_56;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteralC9ABEA54E864150EDBDE3863FA7913E6586073BC, L_3, L_11, NULL);
		V_0 = L_13;
		goto IL_0053;
	}

IL_0053:
	{
		// }
		String_t* L_14 = V_0;
		return L_14;
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
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::get_MessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgSubscribedEventArgs_get_MessageId_m10214D6CA2D2EBA97FE2CF597C9B8897973773BC (MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		// get { return this.messageId; }
		uint16_t L_0 = __this->___messageId_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.messageId; }
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::set_MessageId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribedEventArgs_set_MessageId_m0A19147B3D040AB104050A0AD70E93F1056399BD (MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.messageId = value; }
		uint16_t L_0 = ___value0;
		__this->___messageId_1 = L_0;
		// internal set { this.messageId = value; }
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::get_GrantedQoSLevels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgSubscribedEventArgs_get_GrantedQoSLevels_m14E08DACF1938D513C6E5E22C175E3F51127B358 (MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// get { return this.grantedQosLevels; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___grantedQosLevels_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.grantedQosLevels; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::set_GrantedQoSLevels(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribedEventArgs_set_GrantedQoSLevels_m8FB3B7ED1B56AABD1880DC863E137D3F8B9A6B17 (MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.grantedQosLevels = value; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___grantedQosLevels_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grantedQosLevels_2), (void*)L_0);
		// internal set { this.grantedQosLevels = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::.ctor(System.UInt16,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribedEventArgs__ctor_mADEE5005EB6EF967769EC330CA265B4E168B147D (MqttMsgSubscribedEventArgs_t8207BBB67D20AE8E6F8F2F3531852BC9D27C6120* __this, uint16_t ___messageId0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___grantedQosLevels1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MqttMsgSubscribedEventArgs(ushort messageId, byte[] grantedQosLevels)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// this.messageId = messageId;
		uint16_t L_0 = ___messageId0;
		__this->___messageId_1 = L_0;
		// this.grantedQosLevels = grantedQosLevels;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___grantedQosLevels1;
		__this->___grantedQosLevels_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grantedQosLevels_2), (void*)L_1);
		// }
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
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::get_MessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgSubscribeEventArgs_get_MessageId_m217AE681D58C5A9ACF401B3300B798B436248AF6 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		// get { return this.messageId; }
		uint16_t L_0 = __this->___messageId_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.messageId; }
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::set_MessageId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribeEventArgs_set_MessageId_mD0841B50AB2347E3C2F110C2F66FC0217CF310D6 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.messageId = value; }
		uint16_t L_0 = ___value0;
		__this->___messageId_1 = L_0;
		// internal set { this.messageId = value; }
		return;
	}
}
// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::get_Topics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MqttMsgSubscribeEventArgs_get_Topics_m08E7E9214E3BBC5E9D655A76E9D930135F24E460 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// get { return this.topics; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___topics_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.topics; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::set_Topics(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribeEventArgs_set_Topics_mB140081EA768D3DAD8029E3AD101ABF370599ED7 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.topics = value; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___value0;
		__this->___topics_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics_2), (void*)L_0);
		// internal set { this.topics = value; }
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::get_QoSLevels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgSubscribeEventArgs_get_QoSLevels_m4F0A6F92F23706C006EFFB732CADF3E52D1D7BA6 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// get { return this.qosLevels; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___qosLevels_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.qosLevels; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::set_QoSLevels(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribeEventArgs_set_QoSLevels_m6C5CEFDFA3B9A5102DE665F588713655B3F38E94 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.qosLevels = value; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___qosLevels_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qosLevels_3), (void*)L_0);
		// internal set { this.qosLevels = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::.ctor(System.UInt16,System.String[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribeEventArgs__ctor_m7C8EBED372A95741DA5954B8015CC96AEAAB6264 (MqttMsgSubscribeEventArgs_t8079AA90C7C462A846490E64B2DD3DA4ECCD3BE5* __this, uint16_t ___messageId0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qosLevels2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MqttMsgSubscribeEventArgs(ushort messageId, string[] topics, byte[] qosLevels)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// this.messageId = messageId;
		uint16_t L_0 = ___messageId0;
		__this->___messageId_1 = L_0;
		// this.topics = topics;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___topics1;
		__this->___topics_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics_2), (void*)L_1);
		// this.qosLevels = qosLevels;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___qosLevels2;
		__this->___qosLevels_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___qosLevels_3), (void*)L_2);
		// }
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsuback__ctor_mE20D77A0C9F8A1F6F6B4D4597A11A4C6747FC568 (MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgUnsuback()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_UNSUBACK_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)((int32_t)11);
		// }
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* MqttMsgUnsuback_Parse_m3487BA8F1FE928B7AF963A1FDC039B7C1D5F3065 (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* V_6 = NULL;
	{
		// int index = 0;
		V_1 = 0;
		// MqttMsgUnsuback msg = new MqttMsgUnsuback();
		MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* L_0 = (MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934*)il2cpp_codegen_object_new(MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgUnsuback__ctor_mE20D77A0C9F8A1F6F6B4D4597A11A4C6747FC568(L_0, NULL);
		V_2 = L_0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion1;
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// if ((fixedHeaderFirstByte & MSG_FLAG_BITS_MASK) != MQTT_MSG_UNSUBACK_FLAG_BITS)
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidFlagBits);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgUnsuback_Parse_m3487BA8F1FE928B7AF963A1FDC039B7C1D5F3065_RuntimeMethod_var)));
	}

IL_0029:
	{
	}

IL_002a:
	{
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_3 = L_7;
		// buffer = new byte[remainingLength];
		int32_t L_8 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		// channel.Receive(buffer);
		RuntimeObject* L_10 = ___channel2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_10, L_11);
		// msg.messageId = (ushort)((buffer[index++] << 8) & 0xFF00);
		MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_13);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_13)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_18<<8))&((int32_t)65280))));
		// msg.messageId |= (buffer[index++]);
		MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* L_19 = V_2;
		MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* L_20 = L_19;
		NullCheck(L_20);
		uint16_t L_21 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId_54;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		NullCheck(L_22);
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_20);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_21|(int32_t)L_26)));
		// return msg;
		MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* L_27 = V_2;
		V_6 = L_27;
		goto IL_0070;
	}

IL_0070:
	{
		// }
		MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* L_28 = V_6;
		return L_28;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgUnsuback_GetBytes_m30DC727322F12E81ECA5151E9CD032F8262D3A62 (MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* __this, uint8_t ___protocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	{
		// int fixedHeaderSize = 0;
		V_0 = 0;
		// int varHeaderSize = 0;
		V_1 = 0;
		// int payloadSize = 0;
		V_2 = 0;
		// int remainingLength = 0;
		V_3 = 0;
		// int index = 0;
		V_5 = 0;
		// varHeaderSize += MESSAGE_ID_SIZE;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, 2));
		// remainingLength += (varHeaderSize + payloadSize);
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3))));
		// fixedHeaderSize = 1;
		V_0 = 1;
		// int temp = remainingLength;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001b:
	{
		// fixedHeaderSize++;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// temp = temp / 128;
		int32_t L_6 = V_6;
		V_6 = ((int32_t)(L_6/((int32_t)128)));
		// } while (temp > 0);
		int32_t L_7 = V_6;
		V_7 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_7;
		if (L_8)
		{
			goto IL_001b;
		}
	}
	{
		// buffer = new byte[fixedHeaderSize + varHeaderSize + payloadSize];
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_9, L_10)), L_11)));
		V_4 = L_12;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_13 = ___protocolVersion0;
		V_8 = (bool)((((int32_t)L_13) == ((int32_t)4))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_005d;
		}
	}
	{
		// buffer[index++] = (MQTT_MSG_UNSUBACK_TYPE << MSG_TYPE_OFFSET) | MQTT_MSG_UNSUBACK_FLAG_BITS; // [v.3.1.1]
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = L_16;
		V_5 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)176));
		goto IL_006c;
	}

IL_005d:
	{
		// buffer[index++] = (byte)(MQTT_MSG_UNSUBACK_TYPE << MSG_TYPE_OFFSET);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)((int32_t)176));
	}

IL_006c:
	{
		// index = this.encodeRemainingLength(remainingLength, buffer, index);
		int32_t L_21 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24;
		L_24 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_21, L_22, L_23, NULL);
		V_5 = L_24;
		// buffer[index++] = (byte)((this.messageId >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = L_26;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		uint16_t L_28 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_28>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(this.messageId & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_4;
		int32_t L_30 = V_5;
		int32_t L_31 = L_30;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		uint16_t L_32 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_32&((int32_t)255)))));
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_4;
		V_9 = L_33;
		goto IL_00af;
	}

IL_00af:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_9;
		return L_34;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgUnsuback_ToString_mB4331A74ADF9109B769B78CC579C614C09200E31 (MqttMsgUnsuback_t1DB5ED5DA2A76E4DCE37B673BA5FA808E1E14934* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE72AE7C1BE0D0A3142920BDAA4B27896C11E2B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return this.GetTraceString(
		//     "UNSUBACK",
		//     new object[] { "messageId" },
		//     new object[] { this.messageId });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		uint16_t L_4 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		uint16_t L_5 = L_4;
		RuntimeObject* L_6 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		String_t* L_7;
		L_7 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteral3EE72AE7C1BE0D0A3142920BDAA4B27896C11E2B, L_1, L_3, NULL);
		V_0 = L_7;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		String_t* L_8 = V_0;
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
// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::get_Topics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MqttMsgUnsubscribe_get_Topics_m3400CA9B22F7F6120033BC64CFBD574A94B9802E (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// get { return this.topics; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___topics_55;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.topics; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::set_Topics(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribe_set_Topics_mFF403E8D2738D5797C0CFA93DD314A5A882C23CB (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.topics = value; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___value0;
		__this->___topics_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics_55), (void*)L_0);
		// set { this.topics = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribe__ctor_mB5999A22CD1515F66ACEE158BA9533E04B6EFEC7 (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgUnsubscribe()
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_UNSUBSCRIBE_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)((int32_t)10);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribe__ctor_m456E5394BB897F90B09436C4A0AF7D5E4955F2B7 (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics0, const RuntimeMethod* method) 
{
	{
		// public MqttMsgUnsubscribe(string[] topics)
		MqttMsgBase__ctor_mF28855DB7DEB32CB604E2F21839C216465C98B6A(__this, NULL);
		// this.type = MQTT_MSG_UNSUBSCRIBE_TYPE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___type_50 = (uint8_t)((int32_t)10);
		// this.topics = topics;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___topics0;
		__this->___topics_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics_55), (void*)L_0);
		// this.qosLevel = QOS_LEVEL_AT_LEAST_ONCE;
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52 = (uint8_t)1;
		// }
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::Parse(System.Byte,System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* MqttMsgUnsubscribe_Parse_mEB4D26A94F7AC4DCEFE93455EAC41CDAB277185F (uint8_t ___fixedHeaderFirstByte0, uint8_t ___protocolVersion1, RuntimeObject* ___channel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* V_14 = NULL;
	{
		// int index = 0;
		V_1 = 0;
		// MqttMsgUnsubscribe msg = new MqttMsgUnsubscribe();
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_0 = (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98*)il2cpp_codegen_object_new(MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MqttMsgUnsubscribe__ctor_mB5999A22CD1515F66ACEE158BA9533E04B6EFEC7(L_0, NULL);
		V_4 = L_0;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_1 = ___protocolVersion1;
		V_8 = (bool)((((int32_t)L_1) == ((int32_t)4))? 1 : 0);
		bool L_2 = V_8;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// if ((fixedHeaderFirstByte & MSG_FLAG_BITS_MASK) != MQTT_MSG_UNSUBSCRIBE_FLAG_BITS)
		uint8_t L_3 = ___fixedHeaderFirstByte0;
		V_9 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_3&((int32_t)15)))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_9;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.InvalidFlagBits);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_5 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_5, ((int32_t)12), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgUnsubscribe_Parse_mEB4D26A94F7AC4DCEFE93455EAC41CDAB277185F_RuntimeMethod_var)));
	}

IL_002d:
	{
	}

IL_002e:
	{
		// int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
		RuntimeObject* L_6 = ___channel2;
		int32_t L_7;
		L_7 = MqttMsgBase_decodeRemainingLength_m32109912AD3FC39DDAD36F80B217EA8D84C8038C(L_6, NULL);
		V_5 = L_7;
		// buffer = new byte[remainingLength];
		int32_t L_8 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		// int received = channel.Receive(buffer);
		RuntimeObject* L_10 = ___channel2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t0322A569D0C96E0640935EDD4E3CFA9B55BE3B62_il2cpp_TypeInfo_var, L_10, L_11);
		V_6 = L_12;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1)
		uint8_t L_13 = ___protocolVersion1;
		V_10 = (bool)((((int32_t)L_13) == ((int32_t)3))? 1 : 0);
		bool L_14 = V_10;
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		// msg.qosLevel = (byte)((fixedHeaderFirstByte & QOS_LEVEL_MASK) >> QOS_LEVEL_OFFSET);
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_15 = V_4;
		uint8_t L_16 = ___fixedHeaderFirstByte0;
		NullCheck(L_15);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_15)->___qosLevel_52 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_16&6))>>1)));
		// msg.dupFlag = (((fixedHeaderFirstByte & DUP_FLAG_MASK) >> DUP_FLAG_OFFSET) == 0x01);
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_17 = V_4;
		uint8_t L_18 = ___fixedHeaderFirstByte0;
		NullCheck(L_17);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_17)->___dupFlag_51 = (bool)((((int32_t)((int32_t)(((int32_t)((int32_t)L_18&8))>>3))) == ((int32_t)1))? 1 : 0);
		// msg.retain = false;
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_19 = V_4;
		NullCheck(L_19);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_19)->___retain_53 = (bool)0;
	}

IL_0077:
	{
		// msg.messageId = (ushort)((buffer[index++] << 8) & 0xFF00);
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_20 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		NullCheck(L_21);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_20);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_20)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)((int32_t)L_25<<8))&((int32_t)65280))));
		// msg.messageId |= (buffer[index++]);
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_26 = V_4;
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_27 = L_26;
		NullCheck(L_27);
		uint16_t L_28 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_27)->___messageId_54;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_0;
		int32_t L_30 = V_1;
		int32_t L_31 = L_30;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		NullCheck(L_29);
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_27);
		((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)L_27)->___messageId_54 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_28|(int32_t)L_33)));
		// IList<String> tmpTopics = new List<String>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_34 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_34, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_7 = L_34;
	}

IL_00ab:
	{
		// topicUtf8Length = ((buffer[index++] << 8) & 0xFF00);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_0;
		int32_t L_36 = V_1;
		int32_t L_37 = L_36;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		NullCheck(L_35);
		int32_t L_38 = L_37;
		uint8_t L_39 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_3 = ((int32_t)(((int32_t)((int32_t)L_39<<8))&((int32_t)65280)));
		// topicUtf8Length |= buffer[index++];
		int32_t L_40 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_0;
		int32_t L_42 = V_1;
		int32_t L_43 = L_42;
		V_1 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		NullCheck(L_41);
		int32_t L_44 = L_43;
		uint8_t L_45 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_3 = ((int32_t)(L_40|(int32_t)L_45));
		// topicUtf8 = new byte[topicUtf8Length];
		int32_t L_46 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_46);
		V_2 = L_47;
		// Array.Copy(buffer, index, topicUtf8, 0, topicUtf8Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_0;
		int32_t L_49 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_2;
		int32_t L_51 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_48, L_49, (RuntimeArray*)L_50, 0, L_51, NULL);
		// index += topicUtf8Length;
		int32_t L_52 = V_1;
		int32_t L_53 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_52, L_53));
		// tmpTopics.Add(new String(Encoding.UTF8.GetChars(topicUtf8)));
		RuntimeObject* L_54 = V_7;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_55;
		L_55 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_2;
		NullCheck(L_55);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_57;
		L_57 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(24 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_55, L_56);
		String_t* L_58;
		L_58 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_57, NULL);
		NullCheck(L_54);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(T) */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_54, L_58);
		// } while (index < remainingLength);
		int32_t L_59 = V_1;
		int32_t L_60 = V_5;
		V_11 = (bool)((((int32_t)L_59) < ((int32_t)L_60))? 1 : 0);
		bool L_61 = V_11;
		if (L_61)
		{
			goto IL_00ab;
		}
	}
	{
		// msg.topics = new string[tmpTopics.Count];
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_62 = V_4;
		RuntimeObject* L_63 = V_7;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_63);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_64);
		NullCheck(L_62);
		L_62->___topics_55 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&L_62->___topics_55), (void*)L_65);
		// for (int i = 0; i < tmpTopics.Count; i++)
		V_12 = 0;
		goto IL_0133;
	}

IL_0118:
	{
		// msg.topics[i] = (string)tmpTopics[i];
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_66 = V_4;
		NullCheck(L_66);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66->___topics_55;
		int32_t L_68 = V_12;
		RuntimeObject* L_69 = V_7;
		int32_t L_70 = V_12;
		NullCheck(L_69);
		String_t* L_71;
		L_71 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.String>::get_Item(System.Int32) */, IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB_il2cpp_TypeInfo_var, L_69, L_70);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_71);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (String_t*)L_71);
		// for (int i = 0; i < tmpTopics.Count; i++)
		int32_t L_72 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_0133:
	{
		// for (int i = 0; i < tmpTopics.Count; i++)
		int32_t L_73 = V_12;
		RuntimeObject* L_74 = V_7;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_74);
		V_13 = (bool)((((int32_t)L_73) < ((int32_t)L_75))? 1 : 0);
		bool L_76 = V_13;
		if (L_76)
		{
			goto IL_0118;
		}
	}
	{
		// return msg;
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_77 = V_4;
		V_14 = L_77;
		goto IL_014a;
	}

IL_014a:
	{
		// }
		MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* L_78 = V_14;
		return L_78;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MqttMsgUnsubscribe_GetBytes_m937D276453E8FB292ACBEE1B4BAC08A757B95A54 (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, uint8_t ___protocolVersion0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_7 = NULL;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_16 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B19_0 = 0;
	uint8_t* G_B19_1 = NULL;
	int32_t G_B18_0 = 0;
	uint8_t* G_B18_1 = NULL;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	uint8_t* G_B20_2 = NULL;
	{
		// int fixedHeaderSize = 0;
		V_0 = 0;
		// int varHeaderSize = 0;
		V_1 = 0;
		// int payloadSize = 0;
		V_2 = 0;
		// int remainingLength = 0;
		V_3 = 0;
		// int index = 0;
		V_5 = 0;
		// if ((this.topics == null) || (this.topics.Length == 0))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___topics_55;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___topics_55;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((RuntimeArray*)L_1)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 1;
	}

IL_0021:
	{
		V_9 = (bool)G_B3_0;
		bool L_2 = V_9;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.TopicsEmpty);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_3 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_3, 6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgUnsubscribe_GetBytes_m937D276453E8FB292ACBEE1B4BAC08A757B95A54_RuntimeMethod_var)));
	}

IL_002e:
	{
		// varHeaderSize += MESSAGE_ID_SIZE;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 2));
		// int topicIdx = 0;
		V_6 = 0;
		// byte[][] topicsUtf8 = new byte[this.topics.Length][];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = __this->___topics_55;
		NullCheck(L_5);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		V_7 = L_6;
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		V_6 = 0;
		goto IL_00ad;
	}

IL_0049:
	{
		// if ((this.topics[topicIdx].Length < MIN_TOPIC_LENGTH) || (this.topics[topicIdx].Length > MAX_TOPIC_LENGTH))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = __this->___topics_55;
		int32_t L_8 = V_6;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		if ((((int32_t)L_11) < ((int32_t)1)))
		{
			goto IL_0072;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = __this->___topics_55;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		G_B9_0 = ((((int32_t)L_16) > ((int32_t)((int32_t)65535)))? 1 : 0);
		goto IL_0073;
	}

IL_0072:
	{
		G_B9_0 = 1;
	}

IL_0073:
	{
		V_10 = (bool)G_B9_0;
		bool L_17 = V_10;
		if (!L_17)
		{
			goto IL_0080;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.TopicLength);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_18 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_18, 4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgUnsubscribe_GetBytes_m937D276453E8FB292ACBEE1B4BAC08A757B95A54_RuntimeMethod_var)));
	}

IL_0080:
	{
		// topicsUtf8[topicIdx] = Encoding.UTF8.GetBytes(this.topics[topicIdx]);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_19 = V_7;
		int32_t L_20 = V_6;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_21;
		L_21 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = __this->___topics_55;
		int32_t L_23 = V_6;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		String_t* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_21, L_25);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_26);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_26);
		// payloadSize += 2; // topic size (MSB, LSB)
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 2));
		// payloadSize += topicsUtf8[topicIdx].Length;
		int32_t L_28 = V_2;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_29 = V_7;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, ((int32_t)(((RuntimeArray*)L_32)->max_length))));
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		int32_t L_33 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00ad:
	{
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		int32_t L_34 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = __this->___topics_55;
		NullCheck(L_35);
		V_11 = (bool)((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))? 1 : 0);
		bool L_36 = V_11;
		if (L_36)
		{
			goto IL_0049;
		}
	}
	{
		// remainingLength += (varHeaderSize + payloadSize);
		int32_t L_37 = V_3;
		int32_t L_38 = V_1;
		int32_t L_39 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_37, ((int32_t)il2cpp_codegen_add(L_38, L_39))));
		// fixedHeaderSize = 1;
		V_0 = 1;
		// int temp = remainingLength;
		int32_t L_40 = V_3;
		V_8 = L_40;
	}

IL_00ca:
	{
		// fixedHeaderSize++;
		int32_t L_41 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		// temp = temp / 128;
		int32_t L_42 = V_8;
		V_8 = ((int32_t)(L_42/((int32_t)128)));
		// } while (temp > 0);
		int32_t L_43 = V_8;
		V_12 = (bool)((((int32_t)L_43) > ((int32_t)0))? 1 : 0);
		bool L_44 = V_12;
		if (L_44)
		{
			goto IL_00ca;
		}
	}
	{
		// buffer = new byte[fixedHeaderSize + varHeaderSize + payloadSize];
		int32_t L_45 = V_0;
		int32_t L_46 = V_1;
		int32_t L_47 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_45, L_46)), L_47)));
		V_4 = L_48;
		// if (protocolVersion == MqttMsgConnect.PROTOCOL_VERSION_V3_1_1)
		uint8_t L_49 = ___protocolVersion0;
		V_13 = (bool)((((int32_t)L_49) == ((int32_t)4))? 1 : 0);
		bool L_50 = V_13;
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		// buffer[index++] = (MQTT_MSG_UNSUBSCRIBE_TYPE << MSG_TYPE_OFFSET) | MQTT_MSG_UNSUBSCRIBE_FLAG_BITS; // [v.3.1.1]
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_4;
		int32_t L_52 = V_5;
		int32_t L_53 = L_52;
		V_5 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (uint8_t)((int32_t)162));
		goto IL_0142;
	}

IL_010c:
	{
		// buffer[index] = (byte)((MQTT_MSG_UNSUBSCRIBE_TYPE << MSG_TYPE_OFFSET) |
		//                    (this.qosLevel << QOS_LEVEL_OFFSET));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_4;
		int32_t L_55 = V_5;
		uint8_t L_56 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___qosLevel_52;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)160)|((int32_t)((int32_t)L_56<<1))))));
		// buffer[index] |= this.dupFlag ? (byte)(1 << DUP_FLAG_OFFSET) : (byte)0x00;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_4;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		uint8_t* L_59 = ((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)));
		int32_t L_60 = *((uint8_t*)L_59);
		bool L_61 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___dupFlag_51;
		G_B18_0 = L_60;
		G_B18_1 = L_59;
		if (L_61)
		{
			G_B19_0 = L_60;
			G_B19_1 = L_59;
			goto IL_0137;
		}
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		goto IL_0138;
	}

IL_0137:
	{
		G_B20_0 = 8;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
	}

IL_0138:
	{
		*((int8_t*)G_B20_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(G_B20_1|G_B20_0)));
		// index++;
		int32_t L_62 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0142:
	{
		// index = this.encodeRemainingLength(remainingLength, buffer, index);
		int32_t L_63 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_4;
		int32_t L_65 = V_5;
		int32_t L_66;
		L_66 = MqttMsgBase_encodeRemainingLength_m43EA5D6E75723B929A7F2D60D97BCAF1D724A3F0(__this, L_63, L_64, L_65, NULL);
		V_5 = L_66;
		// if (this.messageId == 0)
		uint16_t L_67 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		V_14 = (bool)((((int32_t)L_67) == ((int32_t)0))? 1 : 0);
		bool L_68 = V_14;
		if (!L_68)
		{
			goto IL_0166;
		}
	}
	{
		// throw new MqttClientException(MqttClientErrorCode.WrongMessageId);
		MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* L_69 = (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859_il2cpp_TypeInfo_var)));
		NullCheck(L_69);
		MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF(L_69, ((int32_t)10), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MqttMsgUnsubscribe_GetBytes_m937D276453E8FB292ACBEE1B4BAC08A757B95A54_RuntimeMethod_var)));
	}

IL_0166:
	{
		// buffer[index++] = (byte)((messageId >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = V_4;
		int32_t L_71 = V_5;
		int32_t L_72 = L_71;
		V_5 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		uint16_t L_73 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_73>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(messageId & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = V_4;
		int32_t L_75 = V_5;
		int32_t L_76 = L_75;
		V_5 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		uint16_t L_77 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(L_76), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_77&((int32_t)255)))));
		// topicIdx = 0;
		V_6 = 0;
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		V_6 = 0;
		goto IL_01fb;
	}

IL_019e:
	{
		// buffer[index++] = (byte)((topicsUtf8[topicIdx].Length >> 8) & 0x00FF); // MSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = V_4;
		int32_t L_79 = V_5;
		int32_t L_80 = L_79;
		V_5 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_81 = V_7;
		int32_t L_82 = V_6;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((RuntimeArray*)L_84)->max_length))>>8))&((int32_t)255)))));
		// buffer[index++] = (byte)(topicsUtf8[topicIdx].Length & 0x00FF); // LSB
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = V_4;
		int32_t L_86 = V_5;
		int32_t L_87 = L_86;
		V_5 = ((int32_t)il2cpp_codegen_add(L_87, 1));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_88 = V_7;
		int32_t L_89 = V_6;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_91);
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_87), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((RuntimeArray*)L_91)->max_length))&((int32_t)255)))));
		// Array.Copy(topicsUtf8[topicIdx], 0, buffer, index, topicsUtf8[topicIdx].Length);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_92 = V_7;
		int32_t L_93 = V_6;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = V_4;
		int32_t L_97 = V_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_98 = V_7;
		int32_t L_99 = V_6;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_101);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_95, 0, (RuntimeArray*)L_96, L_97, ((int32_t)(((RuntimeArray*)L_101)->max_length)), NULL);
		// index += topicsUtf8[topicIdx].Length;
		int32_t L_102 = V_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_103 = V_7;
		int32_t L_104 = V_6;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		NullCheck(L_106);
		V_5 = ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)(((RuntimeArray*)L_106)->max_length))));
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		int32_t L_107 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_107, 1));
	}

IL_01fb:
	{
		// for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
		int32_t L_108 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_109 = __this->___topics_55;
		NullCheck(L_109);
		V_15 = (bool)((((int32_t)L_108) < ((int32_t)((int32_t)(((RuntimeArray*)L_109)->max_length))))? 1 : 0);
		bool L_110 = V_15;
		if (L_110)
		{
			goto IL_019e;
		}
	}
	{
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111 = V_4;
		V_16 = L_111;
		goto IL_0213;
	}

IL_0213:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_16;
		return L_112;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttMsgUnsubscribe_ToString_m137BEF83C0D58EE8CD6D179111874504F41D3385 (MqttMsgUnsubscribe_t1963F236BAD8490D38E7BAE65B08C43C23C7AC98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74FB4E4B01F7AE144E63083EC53D9222473FB16B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEC326A6692604AB65616A2EBEDEFA56D4F572A2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return this.GetTraceString(
		//     "UNSUBSCRIBE",
		//     new object[] { "messageId", "topics" },
		//     new object[] { this.messageId, this.topics });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral3A89C966CAF63D124829CBE94CF38A7B43E9FC1C);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralAEC326A6692604AB65616A2EBEDEFA56D4F572A2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteralAEC326A6692604AB65616A2EBEDEFA56D4F572A2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		uint16_t L_5 = ((MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB*)__this)->___messageId_54;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = __this->___topics_55;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		String_t* L_10;
		L_10 = MqttMsgBase_GetTraceString_m6D9E6F411392B228473698AE841DA7E84A6FD539(__this, _stringLiteral74FB4E4B01F7AE144E63083EC53D9222473FB16B, L_2, L_8, NULL);
		V_0 = L_10;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		String_t* L_11 = V_0;
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
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs::get_MessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgUnsubscribedEventArgs_get_MessageId_m45D749DAB8C188360DDD1F22B60805621E9EB7CD (MqttMsgUnsubscribedEventArgs_t46F3D712F85B4F54BD19B4355690C775FAC35E5D* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		// get { return this.messageId; }
		uint16_t L_0 = __this->___messageId_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.messageId; }
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs::set_MessageId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribedEventArgs_set_MessageId_m9990BD192EA3CA1FAB52CE7B8E0665DD7971626F (MqttMsgUnsubscribedEventArgs_t46F3D712F85B4F54BD19B4355690C775FAC35E5D* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.messageId = value; }
		uint16_t L_0 = ___value0;
		__this->___messageId_1 = L_0;
		// internal set { this.messageId = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs::.ctor(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribedEventArgs__ctor_m333FE1E9970E80D75E5D22A9067F5C1F86BBE8A4 (MqttMsgUnsubscribedEventArgs_t46F3D712F85B4F54BD19B4355690C775FAC35E5D* __this, uint16_t ___messageId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MqttMsgUnsubscribedEventArgs(ushort messageId)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// this.messageId = messageId;
		uint16_t L_0 = ___messageId0;
		__this->___messageId_1 = L_0;
		// }
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
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::get_MessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgUnsubscribeEventArgs_get_MessageId_m2227CAA42BF53FE4D9FF0927F838E200AD5D9FB0 (MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		// get { return this.messageId; }
		uint16_t L_0 = __this->___messageId_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.messageId; }
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::set_MessageId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribeEventArgs_set_MessageId_m0F8DD20B80B0641CB65354B306818192ADE39FA7 (MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29* __this, uint16_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.messageId = value; }
		uint16_t L_0 = ___value0;
		__this->___messageId_1 = L_0;
		// internal set { this.messageId = value; }
		return;
	}
}
// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::get_Topics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MqttMsgUnsubscribeEventArgs_get_Topics_m193E54AAB9CFA1B5E4F945FAB62B151325B9E5E1 (MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29* __this, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// get { return this.topics; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___topics_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.topics; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::set_Topics(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribeEventArgs_set_Topics_mCFDD5556902E9F81263D1FC06594C0D5103BC5EF (MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.topics = value; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___value0;
		__this->___topics_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics_2), (void*)L_0);
		// internal set { this.topics = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::.ctor(System.UInt16,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribeEventArgs__ctor_m7F674ECBD50170060E07C8CD6DCA65CC38E4950B (MqttMsgUnsubscribeEventArgs_tA68BC3F886142FE585E4C77459616DBF79832F29* __this, uint16_t ___messageId0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___topics1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MqttMsgUnsubscribeEventArgs(ushort messageId, string[] topics)
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		// this.messageId = messageId;
		uint16_t L_0 = ___messageId0;
		__this->___messageId_1 = L_0;
		// this.topics = topics;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___topics1;
		__this->___topics_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topics_2), (void*)L_1);
		// }
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
// System.Void uPLibrary.Networking.M2Mqtt.Internal.InternalEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalEvent__ctor_mCA1DB6F9F0C187BBE3C18FDD5B93919DAFC004EC (InternalEvent_tC239B49C40C425EF2A2775CA3DE46B3F39DD72BB* __this, const RuntimeMethod* method) 
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
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* MsgInternalEvent_get_Message_m28B4FCC92193372BE26B1BC9BF8173A1B7D1DB6F (MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84* __this, const RuntimeMethod* method) 
{
	MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* V_0 = NULL;
	{
		// get { return this.msg; }
		MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* L_0 = __this->___msg_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.msg; }
		MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent::set_Message(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgInternalEvent_set_Message_m8EF55DDB59A3C5D4D4D8693C30F2ACD0D3112199 (MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84* __this, MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.msg = value; }
		MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* L_0 = ___value0;
		__this->___msg_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___msg_0), (void*)L_0);
		// set { this.msg = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Internal.MsgInternalEvent::.ctor(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgInternalEvent__ctor_mD2ECF81AE8634E936664761C86E173B6D85824D7 (MsgInternalEvent_t58B252CBF33A81BB443C2B2A4D77D13FC64B0B84* __this, MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* ___msg0, const RuntimeMethod* method) 
{
	{
		// public MsgInternalEvent(MqttMsgBase msg)
		InternalEvent__ctor_mCA1DB6F9F0C187BBE3C18FDD5B93919DAFC004EC(__this, NULL);
		// this.msg = msg;
		MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* L_0 = ___msg0;
		__this->___msg_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___msg_0), (void*)L_0);
		// }
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
// System.Boolean uPLibrary.Networking.M2Mqtt.Internal.MsgPublishedInternalEvent::get_IsPublished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MsgPublishedInternalEvent_get_IsPublished_mE56C25A2E5769105EF0CA59FDCB10297FE2CCDF4 (MsgPublishedInternalEvent_t77F08FECAE4E4CB4F4926233C27C164CADC43873* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return this.isPublished; }
		bool L_0 = __this->___isPublished_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.isPublished; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Internal.MsgPublishedInternalEvent::set_IsPublished(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgPublishedInternalEvent_set_IsPublished_m08C5E0F5021B70697FD6076C269A74C4358A55DA (MsgPublishedInternalEvent_t77F08FECAE4E4CB4F4926233C27C164CADC43873* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { this.isPublished = value; }
		bool L_0 = ___value0;
		__this->___isPublished_1 = L_0;
		// internal set { this.isPublished = value; }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Internal.MsgPublishedInternalEvent::.ctor(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgPublishedInternalEvent__ctor_mE3654CE99F37363D95DB561D402B778B12DDB894 (MsgPublishedInternalEvent_t77F08FECAE4E4CB4F4926233C27C164CADC43873* __this, MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* ___msg0, bool ___isPublished1, const RuntimeMethod* method) 
{
	{
		// : base(msg)
		MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* L_0 = ___msg0;
		MsgInternalEvent__ctor_mD2ECF81AE8634E936664761C86E173B6D85824D7(__this, L_0, NULL);
		// this.isPublished = isPublished;
		bool L_1 = ___isPublished1;
		__this->___isPublished_1 = L_1;
		// }
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
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::.ctor(uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClientException__ctor_mD99103EBA8073F64C47D8972DB5E21A065869FCF (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* __this, int32_t ___errorCode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MqttClientException(MqttClientErrorCode errorCode)
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// this.errorCode = errorCode;
		int32_t L_0 = ___errorCode0;
		__this->___errorCode_18 = L_0;
		// }
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttClientException_get_ErrorCode_m58062C993177C18A6B3F59F810920634FF3F8B4D (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return this.errorCode; }
		int32_t L_0 = __this->___errorCode_18;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.errorCode; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::set_ErrorCode(uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClientException_set_ErrorCode_mB78CB6ABDB7FE0AF952AEBDC9FD42A3203AB8ADE (MqttClientException_t136E5106197988D23588CC79536F8DB2456B2859* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.errorCode = value; }
		int32_t L_0 = ___value0;
		__this->___errorCode_18 = L_0;
		// set { this.errorCode = value; }
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
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttCommunicationException__ctor_mD4031454FE16E33887D5E318BE3440BFBDF0FB77 (MqttCommunicationException_t016BFB6E56C108061FB2FE6CE77E280AEF4E2EBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MqttCommunicationException()
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttCommunicationException__ctor_m0AF8276EBCE12EDEF85EC8CAB5D75CC3933F392B (MqttCommunicationException_t016BFB6E56C108061FB2FE6CE77E280AEF4E2EBC* __this, Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(String.Empty, e)
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Exception_t* L_1 = ___e0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// }
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
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttConnectionException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttConnectionException__ctor_mB3D08501C9415D641FA2A3EB4F4BBAFB3F36DF37 (MqttConnectionException_t4133D9B042197DC8ACE467698F13BCD634939476* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(message, innerException)
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___innerException1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// }
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
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttTimeoutException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttTimeoutException__ctor_mE628E891112184AE977020286DEB216CC838A7B0 (MqttTimeoutException_t43973937D83859B52199C9D855F55A16DFB478A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* IPHostEntry_get_AddressList_m9D14D52EFB41C53C9C4A36D438E1333A99B7AA71_inline (IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* __this, const RuntimeMethod* method) 
{
	{
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_0 = __this->___addressList_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool QueuePredicate_Invoke_mBDAB5063584DC494848A6B360E575AD768B59A57_inline (QueuePredicate_t80D663FACD523CFD0EF1826C059C8676D16E7961* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___item0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WriteTrace_Invoke_mFE650B81232ABC5DF50C8A9D6B7BCE3670E4D05A_inline (WriteTrace_tCFF20E10EDE427AC04F5962C5203AAE861C546A9* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___format0, ___args1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MqttSession_set_ClientId_mFFA166189D9D9A7D44FAB44D65781C09C5A1B481_inline (MqttSession_t9CBE2025CB89850878CB6DDD2E8A2253BD80588D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string ClientId { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CClientIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MqttSession_set_InflightMessages_m7E7CBC47033BB2FD213E0B4DDA9D2C829D4CD5B6_inline (MqttSession_t9CBE2025CB89850878CB6DDD2E8A2253BD80588D* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___value0, const RuntimeMethod* method) 
{
	{
		// public Hashtable InflightMessages { get; set; }
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = ___value0;
		__this->___U3CInflightMessagesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInflightMessagesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* MqttSession_get_InflightMessages_m8EDD5AD4B2326B394FDEE8D8E07F2DD3A3556CB0_inline (MqttSession_t9CBE2025CB89850878CB6DDD2E8A2253BD80588D* __this, const RuntimeMethod* method) 
{
	{
		// public Hashtable InflightMessages { get; set; }
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->___U3CInflightMessagesU3Ek__BackingField_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MqttMsgConnectEventArgs_set_Message_mF618C75C6F254DFBDAA0AC7F1254D1DEE7871AD3_inline (MqttMsgConnectEventArgs_tDC1F0CC3DF63277C03DDF6CCD0FDB67408CBDD2A* __this, MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* ___value0, const RuntimeMethod* method) 
{
	{
		// public MqttMsgConnect Message { get; private set; }
		MqttMsgConnect_tEFAEF932D8C29301DC2E4D638754CFACFA3E1CB6* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_Flow_m2697D59B454DCBC8FE299191AAC199E9A8959B94_inline (MqttMsgContext_tE731ACDDFB1629FDA8ED42C65A68DC6A7F18E4DE* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgFlow Flow { get; set; }
		int32_t L_0 = __this->___U3CFlowU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* MqttMsgContext_get_Message_m116B080E9FF59F8BD705D8D83F10DFB5CEDEF0B9_inline (MqttMsgContext_tE731ACDDFB1629FDA8ED42C65A68DC6A7F18E4DE* __this, const RuntimeMethod* method) 
{
	{
		// public MqttMsgBase Message { get; set; }
		MqttMsgBase_t399463276B6CC7F475E0CD68BD026FE2863C22DB* L_0 = __this->___U3CMessageU3Ek__BackingField_0;
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
