#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_EasyWiFi_Core_EasyWiFiConstants_2152432840.h"
#include "mscorlib_System_DateTime693205669.h"
#include "AssemblyU2DCSharp_EasyWiFi_Core_EasyWiFiConstants_C202723796.h"

// System.String
struct String_t;
// System.Threading.Thread
struct Thread_t241561612;
// EasyWiFi.Core.EasyWiFiController/controllerConnectionsChangedHandler
struct controllerConnectionsChangedHandler_t925268913;
// System.Collections.Generic.Dictionary`2<System.String,EasyWiFi.Core.BaseControllerType>
struct Dictionary_2_t3593161193;
// System.Net.Sockets.UdpClient
struct UdpClient_t1278197702;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;
// System.Collections.Generic.Dictionary`2<System.String,System.Net.Sockets.UdpClient>
struct Dictionary_2_t3192976964;
// System.Collections.Generic.Dictionary`2<System.String,System.Net.IPEndPoint>
struct Dictionary_2_t235225732;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.EasyWiFiController
struct  EasyWiFiController_t2411612381  : public Il2CppObject
{
public:

public:
};

struct EasyWiFiController_t2411612381_StaticFields
{
public:
	// System.String EasyWiFi.Core.EasyWiFiController::peerType
	String_t* ___peerType_0;
	// System.String EasyWiFi.Core.EasyWiFiController::serverIPAddress
	String_t* ___serverIPAddress_1;
	// System.String EasyWiFi.Core.EasyWiFiController::myIPAddress
	String_t* ___myIPAddress_2;
	// System.String EasyWiFi.Core.EasyWiFiController::appName
	String_t* ___appName_3;
	// System.Boolean EasyWiFi.Core.EasyWiFiController::isVerbose
	bool ___isVerbose_4;
	// System.Int32 EasyWiFi.Core.EasyWiFiController::serverSocketListenPort
	int32_t ___serverSocketListenPort_5;
	// System.Int32 EasyWiFi.Core.EasyWiFiController::clientScoketListenPort
	int32_t ___clientScoketListenPort_6;
	// System.Threading.Thread EasyWiFi.Core.EasyWiFiController::listenThread
	Thread_t241561612 * ___listenThread_7;
	// System.Threading.Thread EasyWiFi.Core.EasyWiFiController::broadcastThread
	Thread_t241561612 * ___broadcastThread_8;
	// EasyWiFi.Core.EasyWiFiController/controllerConnectionsChangedHandler EasyWiFi.Core.EasyWiFiController::On_ConnectionsChanged
	controllerConnectionsChangedHandler_t925268913 * ___On_ConnectionsChanged_9;
	// System.Collections.Generic.Dictionary`2<System.String,EasyWiFi.Core.BaseControllerType> EasyWiFi.Core.EasyWiFiController::controllerDataDictionary
	Dictionary_2_t3593161193 * ___controllerDataDictionary_10;
	// EasyWiFi.Core.EasyWiFiConstants/CURRENT_CLIENT_STATE EasyWiFi.Core.EasyWiFiController::clientState
	int32_t ___clientState_11;
	// System.Boolean EasyWiFi.Core.EasyWiFiController::readyToTransmitInventory
	bool ___readyToTransmitInventory_12;
	// System.Boolean EasyWiFi.Core.EasyWiFiController::readyToTransmitBackchannel
	bool ___readyToTransmitBackchannel_13;
	// System.DateTime EasyWiFi.Core.EasyWiFiController::lastHeartbeatTime
	DateTime_t693205669  ___lastHeartbeatTime_14;
	// System.Net.Sockets.UdpClient EasyWiFi.Core.EasyWiFiController::clientBroadcast
	UdpClient_t1278197702 * ___clientBroadcast_15;
	// System.Net.Sockets.UdpClient EasyWiFi.Core.EasyWiFiController::clientSend
	UdpClient_t1278197702 * ___clientSend_16;
	// System.Net.Sockets.UdpClient EasyWiFi.Core.EasyWiFiController::clientListen
	UdpClient_t1278197702 * ___clientListen_17;
	// System.Net.IPEndPoint EasyWiFi.Core.EasyWiFiController::clientBroadcastEndPoint
	IPEndPoint_t2615413766 * ___clientBroadcastEndPoint_18;
	// System.Net.IPEndPoint EasyWiFi.Core.EasyWiFiController::clientSendEndPoint
	IPEndPoint_t2615413766 * ___clientSendEndPoint_19;
	// System.Net.IPEndPoint EasyWiFi.Core.EasyWiFiController::clientListenEndPoint
	IPEndPoint_t2615413766 * ___clientListenEndPoint_20;
	// EasyWiFi.Core.EasyWiFiConstants/CURRENT_SERVER_STATE EasyWiFi.Core.EasyWiFiController::serverState
	int32_t ___serverState_21;
	// System.Net.Sockets.UdpClient EasyWiFi.Core.EasyWiFiController::serverListen
	UdpClient_t1278197702 * ___serverListen_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Net.Sockets.UdpClient> EasyWiFi.Core.EasyWiFiController::serverSendDictionary
	Dictionary_2_t3192976964 * ___serverSendDictionary_23;
	// System.Net.IPEndPoint EasyWiFi.Core.EasyWiFiController::serverListenEndPoint
	IPEndPoint_t2615413766 * ___serverListenEndPoint_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Net.IPEndPoint> EasyWiFi.Core.EasyWiFiController::serverSendEndPointDictionary
	Dictionary_2_t235225732 * ___serverSendEndPointDictionary_25;
	// System.Collections.Generic.List`1<System.String> EasyWiFi.Core.EasyWiFiController::serverSendKeys
	List_1_t1398341365 * ___serverSendKeys_26;
	// System.Int32 EasyWiFi.Core.EasyWiFiController::lastConnectedPlayerNumber
	int32_t ___lastConnectedPlayerNumber_27;
	// System.Boolean EasyWiFi.Core.EasyWiFiController::isConnect
	bool ___isConnect_28;
	// System.Boolean EasyWiFi.Core.EasyWiFiController::isNew
	bool ___isNew_29;
	// System.DateTime EasyWiFi.Core.EasyWiFiController::lastCallbackTime
	DateTime_t693205669  ___lastCallbackTime_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> EasyWiFi.Core.EasyWiFiController::<>f__switch$map0
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map0_31;

public:
	inline static int32_t get_offset_of_peerType_0() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___peerType_0)); }
	inline String_t* get_peerType_0() const { return ___peerType_0; }
	inline String_t** get_address_of_peerType_0() { return &___peerType_0; }
	inline void set_peerType_0(String_t* value)
	{
		___peerType_0 = value;
		Il2CppCodeGenWriteBarrier(&___peerType_0, value);
	}

	inline static int32_t get_offset_of_serverIPAddress_1() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___serverIPAddress_1)); }
	inline String_t* get_serverIPAddress_1() const { return ___serverIPAddress_1; }
	inline String_t** get_address_of_serverIPAddress_1() { return &___serverIPAddress_1; }
	inline void set_serverIPAddress_1(String_t* value)
	{
		___serverIPAddress_1 = value;
		Il2CppCodeGenWriteBarrier(&___serverIPAddress_1, value);
	}

	inline static int32_t get_offset_of_myIPAddress_2() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___myIPAddress_2)); }
	inline String_t* get_myIPAddress_2() const { return ___myIPAddress_2; }
	inline String_t** get_address_of_myIPAddress_2() { return &___myIPAddress_2; }
	inline void set_myIPAddress_2(String_t* value)
	{
		___myIPAddress_2 = value;
		Il2CppCodeGenWriteBarrier(&___myIPAddress_2, value);
	}

	inline static int32_t get_offset_of_appName_3() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___appName_3)); }
	inline String_t* get_appName_3() const { return ___appName_3; }
	inline String_t** get_address_of_appName_3() { return &___appName_3; }
	inline void set_appName_3(String_t* value)
	{
		___appName_3 = value;
		Il2CppCodeGenWriteBarrier(&___appName_3, value);
	}

	inline static int32_t get_offset_of_isVerbose_4() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___isVerbose_4)); }
	inline bool get_isVerbose_4() const { return ___isVerbose_4; }
	inline bool* get_address_of_isVerbose_4() { return &___isVerbose_4; }
	inline void set_isVerbose_4(bool value)
	{
		___isVerbose_4 = value;
	}

	inline static int32_t get_offset_of_serverSocketListenPort_5() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___serverSocketListenPort_5)); }
	inline int32_t get_serverSocketListenPort_5() const { return ___serverSocketListenPort_5; }
	inline int32_t* get_address_of_serverSocketListenPort_5() { return &___serverSocketListenPort_5; }
	inline void set_serverSocketListenPort_5(int32_t value)
	{
		___serverSocketListenPort_5 = value;
	}

	inline static int32_t get_offset_of_clientScoketListenPort_6() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___clientScoketListenPort_6)); }
	inline int32_t get_clientScoketListenPort_6() const { return ___clientScoketListenPort_6; }
	inline int32_t* get_address_of_clientScoketListenPort_6() { return &___clientScoketListenPort_6; }
	inline void set_clientScoketListenPort_6(int32_t value)
	{
		___clientScoketListenPort_6 = value;
	}

	inline static int32_t get_offset_of_listenThread_7() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___listenThread_7)); }
	inline Thread_t241561612 * get_listenThread_7() const { return ___listenThread_7; }
	inline Thread_t241561612 ** get_address_of_listenThread_7() { return &___listenThread_7; }
	inline void set_listenThread_7(Thread_t241561612 * value)
	{
		___listenThread_7 = value;
		Il2CppCodeGenWriteBarrier(&___listenThread_7, value);
	}

	inline static int32_t get_offset_of_broadcastThread_8() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___broadcastThread_8)); }
	inline Thread_t241561612 * get_broadcastThread_8() const { return ___broadcastThread_8; }
	inline Thread_t241561612 ** get_address_of_broadcastThread_8() { return &___broadcastThread_8; }
	inline void set_broadcastThread_8(Thread_t241561612 * value)
	{
		___broadcastThread_8 = value;
		Il2CppCodeGenWriteBarrier(&___broadcastThread_8, value);
	}

	inline static int32_t get_offset_of_On_ConnectionsChanged_9() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___On_ConnectionsChanged_9)); }
	inline controllerConnectionsChangedHandler_t925268913 * get_On_ConnectionsChanged_9() const { return ___On_ConnectionsChanged_9; }
	inline controllerConnectionsChangedHandler_t925268913 ** get_address_of_On_ConnectionsChanged_9() { return &___On_ConnectionsChanged_9; }
	inline void set_On_ConnectionsChanged_9(controllerConnectionsChangedHandler_t925268913 * value)
	{
		___On_ConnectionsChanged_9 = value;
		Il2CppCodeGenWriteBarrier(&___On_ConnectionsChanged_9, value);
	}

	inline static int32_t get_offset_of_controllerDataDictionary_10() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___controllerDataDictionary_10)); }
	inline Dictionary_2_t3593161193 * get_controllerDataDictionary_10() const { return ___controllerDataDictionary_10; }
	inline Dictionary_2_t3593161193 ** get_address_of_controllerDataDictionary_10() { return &___controllerDataDictionary_10; }
	inline void set_controllerDataDictionary_10(Dictionary_2_t3593161193 * value)
	{
		___controllerDataDictionary_10 = value;
		Il2CppCodeGenWriteBarrier(&___controllerDataDictionary_10, value);
	}

	inline static int32_t get_offset_of_clientState_11() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___clientState_11)); }
	inline int32_t get_clientState_11() const { return ___clientState_11; }
	inline int32_t* get_address_of_clientState_11() { return &___clientState_11; }
	inline void set_clientState_11(int32_t value)
	{
		___clientState_11 = value;
	}

	inline static int32_t get_offset_of_readyToTransmitInventory_12() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___readyToTransmitInventory_12)); }
	inline bool get_readyToTransmitInventory_12() const { return ___readyToTransmitInventory_12; }
	inline bool* get_address_of_readyToTransmitInventory_12() { return &___readyToTransmitInventory_12; }
	inline void set_readyToTransmitInventory_12(bool value)
	{
		___readyToTransmitInventory_12 = value;
	}

	inline static int32_t get_offset_of_readyToTransmitBackchannel_13() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___readyToTransmitBackchannel_13)); }
	inline bool get_readyToTransmitBackchannel_13() const { return ___readyToTransmitBackchannel_13; }
	inline bool* get_address_of_readyToTransmitBackchannel_13() { return &___readyToTransmitBackchannel_13; }
	inline void set_readyToTransmitBackchannel_13(bool value)
	{
		___readyToTransmitBackchannel_13 = value;
	}

	inline static int32_t get_offset_of_lastHeartbeatTime_14() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___lastHeartbeatTime_14)); }
	inline DateTime_t693205669  get_lastHeartbeatTime_14() const { return ___lastHeartbeatTime_14; }
	inline DateTime_t693205669 * get_address_of_lastHeartbeatTime_14() { return &___lastHeartbeatTime_14; }
	inline void set_lastHeartbeatTime_14(DateTime_t693205669  value)
	{
		___lastHeartbeatTime_14 = value;
	}

	inline static int32_t get_offset_of_clientBroadcast_15() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___clientBroadcast_15)); }
	inline UdpClient_t1278197702 * get_clientBroadcast_15() const { return ___clientBroadcast_15; }
	inline UdpClient_t1278197702 ** get_address_of_clientBroadcast_15() { return &___clientBroadcast_15; }
	inline void set_clientBroadcast_15(UdpClient_t1278197702 * value)
	{
		___clientBroadcast_15 = value;
		Il2CppCodeGenWriteBarrier(&___clientBroadcast_15, value);
	}

	inline static int32_t get_offset_of_clientSend_16() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___clientSend_16)); }
	inline UdpClient_t1278197702 * get_clientSend_16() const { return ___clientSend_16; }
	inline UdpClient_t1278197702 ** get_address_of_clientSend_16() { return &___clientSend_16; }
	inline void set_clientSend_16(UdpClient_t1278197702 * value)
	{
		___clientSend_16 = value;
		Il2CppCodeGenWriteBarrier(&___clientSend_16, value);
	}

	inline static int32_t get_offset_of_clientListen_17() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___clientListen_17)); }
	inline UdpClient_t1278197702 * get_clientListen_17() const { return ___clientListen_17; }
	inline UdpClient_t1278197702 ** get_address_of_clientListen_17() { return &___clientListen_17; }
	inline void set_clientListen_17(UdpClient_t1278197702 * value)
	{
		___clientListen_17 = value;
		Il2CppCodeGenWriteBarrier(&___clientListen_17, value);
	}

	inline static int32_t get_offset_of_clientBroadcastEndPoint_18() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___clientBroadcastEndPoint_18)); }
	inline IPEndPoint_t2615413766 * get_clientBroadcastEndPoint_18() const { return ___clientBroadcastEndPoint_18; }
	inline IPEndPoint_t2615413766 ** get_address_of_clientBroadcastEndPoint_18() { return &___clientBroadcastEndPoint_18; }
	inline void set_clientBroadcastEndPoint_18(IPEndPoint_t2615413766 * value)
	{
		___clientBroadcastEndPoint_18 = value;
		Il2CppCodeGenWriteBarrier(&___clientBroadcastEndPoint_18, value);
	}

	inline static int32_t get_offset_of_clientSendEndPoint_19() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___clientSendEndPoint_19)); }
	inline IPEndPoint_t2615413766 * get_clientSendEndPoint_19() const { return ___clientSendEndPoint_19; }
	inline IPEndPoint_t2615413766 ** get_address_of_clientSendEndPoint_19() { return &___clientSendEndPoint_19; }
	inline void set_clientSendEndPoint_19(IPEndPoint_t2615413766 * value)
	{
		___clientSendEndPoint_19 = value;
		Il2CppCodeGenWriteBarrier(&___clientSendEndPoint_19, value);
	}

	inline static int32_t get_offset_of_clientListenEndPoint_20() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___clientListenEndPoint_20)); }
	inline IPEndPoint_t2615413766 * get_clientListenEndPoint_20() const { return ___clientListenEndPoint_20; }
	inline IPEndPoint_t2615413766 ** get_address_of_clientListenEndPoint_20() { return &___clientListenEndPoint_20; }
	inline void set_clientListenEndPoint_20(IPEndPoint_t2615413766 * value)
	{
		___clientListenEndPoint_20 = value;
		Il2CppCodeGenWriteBarrier(&___clientListenEndPoint_20, value);
	}

	inline static int32_t get_offset_of_serverState_21() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___serverState_21)); }
	inline int32_t get_serverState_21() const { return ___serverState_21; }
	inline int32_t* get_address_of_serverState_21() { return &___serverState_21; }
	inline void set_serverState_21(int32_t value)
	{
		___serverState_21 = value;
	}

	inline static int32_t get_offset_of_serverListen_22() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___serverListen_22)); }
	inline UdpClient_t1278197702 * get_serverListen_22() const { return ___serverListen_22; }
	inline UdpClient_t1278197702 ** get_address_of_serverListen_22() { return &___serverListen_22; }
	inline void set_serverListen_22(UdpClient_t1278197702 * value)
	{
		___serverListen_22 = value;
		Il2CppCodeGenWriteBarrier(&___serverListen_22, value);
	}

	inline static int32_t get_offset_of_serverSendDictionary_23() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___serverSendDictionary_23)); }
	inline Dictionary_2_t3192976964 * get_serverSendDictionary_23() const { return ___serverSendDictionary_23; }
	inline Dictionary_2_t3192976964 ** get_address_of_serverSendDictionary_23() { return &___serverSendDictionary_23; }
	inline void set_serverSendDictionary_23(Dictionary_2_t3192976964 * value)
	{
		___serverSendDictionary_23 = value;
		Il2CppCodeGenWriteBarrier(&___serverSendDictionary_23, value);
	}

	inline static int32_t get_offset_of_serverListenEndPoint_24() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___serverListenEndPoint_24)); }
	inline IPEndPoint_t2615413766 * get_serverListenEndPoint_24() const { return ___serverListenEndPoint_24; }
	inline IPEndPoint_t2615413766 ** get_address_of_serverListenEndPoint_24() { return &___serverListenEndPoint_24; }
	inline void set_serverListenEndPoint_24(IPEndPoint_t2615413766 * value)
	{
		___serverListenEndPoint_24 = value;
		Il2CppCodeGenWriteBarrier(&___serverListenEndPoint_24, value);
	}

	inline static int32_t get_offset_of_serverSendEndPointDictionary_25() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___serverSendEndPointDictionary_25)); }
	inline Dictionary_2_t235225732 * get_serverSendEndPointDictionary_25() const { return ___serverSendEndPointDictionary_25; }
	inline Dictionary_2_t235225732 ** get_address_of_serverSendEndPointDictionary_25() { return &___serverSendEndPointDictionary_25; }
	inline void set_serverSendEndPointDictionary_25(Dictionary_2_t235225732 * value)
	{
		___serverSendEndPointDictionary_25 = value;
		Il2CppCodeGenWriteBarrier(&___serverSendEndPointDictionary_25, value);
	}

	inline static int32_t get_offset_of_serverSendKeys_26() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___serverSendKeys_26)); }
	inline List_1_t1398341365 * get_serverSendKeys_26() const { return ___serverSendKeys_26; }
	inline List_1_t1398341365 ** get_address_of_serverSendKeys_26() { return &___serverSendKeys_26; }
	inline void set_serverSendKeys_26(List_1_t1398341365 * value)
	{
		___serverSendKeys_26 = value;
		Il2CppCodeGenWriteBarrier(&___serverSendKeys_26, value);
	}

	inline static int32_t get_offset_of_lastConnectedPlayerNumber_27() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___lastConnectedPlayerNumber_27)); }
	inline int32_t get_lastConnectedPlayerNumber_27() const { return ___lastConnectedPlayerNumber_27; }
	inline int32_t* get_address_of_lastConnectedPlayerNumber_27() { return &___lastConnectedPlayerNumber_27; }
	inline void set_lastConnectedPlayerNumber_27(int32_t value)
	{
		___lastConnectedPlayerNumber_27 = value;
	}

	inline static int32_t get_offset_of_isConnect_28() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___isConnect_28)); }
	inline bool get_isConnect_28() const { return ___isConnect_28; }
	inline bool* get_address_of_isConnect_28() { return &___isConnect_28; }
	inline void set_isConnect_28(bool value)
	{
		___isConnect_28 = value;
	}

	inline static int32_t get_offset_of_isNew_29() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___isNew_29)); }
	inline bool get_isNew_29() const { return ___isNew_29; }
	inline bool* get_address_of_isNew_29() { return &___isNew_29; }
	inline void set_isNew_29(bool value)
	{
		___isNew_29 = value;
	}

	inline static int32_t get_offset_of_lastCallbackTime_30() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___lastCallbackTime_30)); }
	inline DateTime_t693205669  get_lastCallbackTime_30() const { return ___lastCallbackTime_30; }
	inline DateTime_t693205669 * get_address_of_lastCallbackTime_30() { return &___lastCallbackTime_30; }
	inline void set_lastCallbackTime_30(DateTime_t693205669  value)
	{
		___lastCallbackTime_30 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_31() { return static_cast<int32_t>(offsetof(EasyWiFiController_t2411612381_StaticFields, ___U3CU3Ef__switchU24map0_31)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map0_31() const { return ___U3CU3Ef__switchU24map0_31; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map0_31() { return &___U3CU3Ef__switchU24map0_31; }
	inline void set_U3CU3Ef__switchU24map0_31(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map0_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
