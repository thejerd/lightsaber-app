#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_EasyWiFi_Core_EasyWiFiConstants_3300391112.h"
#include "AssemblyU2DCSharp_EasyWiFi_Core_EasyWiFiConstants_3035635272.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFiManager
struct  EasyWiFiManager_t995954870  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 EasyWiFiManager::serverSocketPort
	int32_t ___serverSocketPort_2;
	// System.Int32 EasyWiFiManager::clientSocketPort
	int32_t ___clientSocketPort_3;
	// EasyWiFi.Core.EasyWiFiConstants/PEER_TYPE EasyWiFiManager::peerType
	int32_t ___peerType_4;
	// System.Single EasyWiFiManager::clientTimeout
	float ___clientTimeout_5;
	// System.Boolean EasyWiFiManager::serverSendBackchannel
	bool ___serverSendBackchannel_6;
	// System.Single EasyWiFiManager::serverSendHeartbeatRate
	float ___serverSendHeartbeatRate_7;
	// System.Boolean EasyWiFiManager::clientConnectAutomatically
	bool ___clientConnectAutomatically_8;
	// EasyWiFi.Core.EasyWiFiConstants/CONTROLLERDATA_MAX_SEND_RATE EasyWiFiManager::clientMaxSendRate
	int32_t ___clientMaxSendRate_9;
	// System.Single EasyWiFiManager::heartbeatTimeout
	float ___heartbeatTimeout_10;
	// System.Boolean EasyWiFiManager::logVerbose
	bool ___logVerbose_11;
	// System.String EasyWiFiManager::applicationName
	String_t* ___applicationName_12;
	// System.Boolean EasyWiFiManager::transmittedInventory
	bool ___transmittedInventory_13;
	// System.Int32 EasyWiFiManager::packetNumber
	int32_t ___packetNumber_14;
	// System.Int32 EasyWiFiManager::heartbeatPacketNumber
	int32_t ___heartbeatPacketNumber_15;
	// System.Int32 EasyWiFiManager::consecutiveAttempts
	int32_t ___consecutiveAttempts_16;
	// System.Single EasyWiFiManager::lastSendTime
	float ___lastSendTime_17;
	// System.Single EasyWiFiManager::maxRate
	float ___maxRate_18;

public:
	inline static int32_t get_offset_of_serverSocketPort_2() { return static_cast<int32_t>(offsetof(EasyWiFiManager_t995954870, ___serverSocketPort_2)); }
	inline int32_t get_serverSocketPort_2() const { return ___serverSocketPort_2; }
	inline int32_t* get_address_of_serverSocketPort_2() { return &___serverSocketPort_2; }
	inline void set_serverSocketPort_2(int32_t value)
	{
		___serverSocketPort_2 = value;
	}

	inline static int32_t get_offset_of_clientSocketPort_3() { return static_cast<int32_t>(offsetof(EasyWiFiManager_t995954870, ___clientSocketPort_3)); }
	inline int32_t get_clientSocketPort_3() const { return ___clientSocketPort_3; }
	inline int32_t* get_address_of_clientSocketPort_3() { return &___clientSocketPort_3; }
	inline void set_clientSocketPort_3(int32_t value)
	{
		___clientSocketPort_3 = value;
	}

	inline static int32_t get_offset_of_peerType_4() { return static_cast<int32_t>(offsetof(EasyWiFiManager_t995954870, ___peerType_4)); }
	inline int32_t get_peerType_4() const { return ___peerType_4; }
	inline int32_t* get_address_of_peerType_4() { return &___peerType_4; }
	inline void set_peerType_4(int32_t value)
	{
		___peerType_4 = value;
	}

	inline static int32_t get_offset_of_clientTimeout_5() { return static_cast<int32_t>(offsetof(EasyWiFiManager_t995954870, ___clientTimeout_5)); }
	inline float get_clientTimeout_5() const { return ___clientTimeout_5; }
	inline float* get_address_of_clientTimeout_5() { return &___clientTimeout_5; }
	inline void set_clientTimeout_5(float value)
	{
		___clientTimeout_5 = value;
	}

	inline static int32_t get_offset_of_serverSendBackchannel_6() { return static_cast<int32_t>(offsetof(EasyWiFiManager_t995954870, ___serverSendBackchannel_6)); }
	inline bool get_serverSendBackchannel_6() const { return ___serverSendBackchannel_6; }
	inline bool* get_address_of_serverSendBackchannel_6() { return &___serverSendBackchannel_6; }
	inline void set_serverSendBackchannel_6(bool value)
	{
		___serverSendBackchannel_6 = value;
	}

	inline static int32_t get_offset_of_serverSendHeartbeatRate_7() { return static_cast<int32_t>(offsetof(EasyWiFiManager_t995954870, ___serverSendHeartbeatRate_7)); }
	inline float get_serverSendHeartbeatRate_7() const { return ___serverSendHeartbeatRate_7; }
	inline float* get_address_of_serverSendHeartbeatRate_7() { return &___serverSendHeartbeatRate_7; }
	inline void set_serverSendHeartbeatRate_7(float value)
	{
		___serverSendHeartbeatRate_7 = value;
	}

	inline static int32_t get_offset_of_clientConnectAutomatically_8() { return static_cast<int32_t>(offsetof(EasyWiFiManager_t995954870, ___clientConnectAutomatically_8)); }
	inline bool get_clientConnectAutomatically_8() const { return ___clientConnectAutomatically_8; }
	inline bool* get_address_of_clientConnectAutomatically_8() { return &___clientConnectAutomatically_8; }
	inline void set_clientConnectAutomatically_8(bool value)
	{
		___clientConnectAutomatically_8 = value;
	}

	inline static int32_t get_offset_of_clientMaxSendRate_9() { return static_cast<int32_t>(offsetof(EasyWiFiManager_t995954870, ___clientMaxSendRate_9)); }
	inline int32_t get_clientMaxSendRate_9() const { return ___clientMaxSendRate_9; }
	inline int32_t* get_address_of_clientMaxSendRate_9() { return &___clientMaxSendRate_9; }
	inline void set_clientMaxSendRate_9(int32_t value)
	{
		___clientMaxSendRate_9 = value;
	}

	inline static int32_t get_offset_of_heartbeatTimeout_10() { return static_cast<int32_t>(offsetof(EasyWiFiManager_t995954870, ___heartbeatTimeout_10)); }
	inline float get_heartbeatTimeout_10() const { return ___heartbeatTimeout_10; }
	inline float* get_address_of_heartbeatTimeout_10() { return &___heartbeatTimeout_10; }
	inline void set_heartbeatTimeout_10(float value)
	{
		___heartbeatTimeout_10 = value;
	}

	inline static int32_t get_offset_of_logVerbose_11() { return static_cast<int32_t>(offsetof(EasyWiFiManager_t995954870, ___logVerbose_11)); }
	inline bool get_logVerbose_11() const { return ___logVerbose_11; }
	inline bool* get_address_of_logVerbose_11() { return &___logVerbose_11; }
	inline void set_logVerbose_11(bool value)
	{
		___logVerbose_11 = value;
	}

	inline static int32_t get_offset_of_applicationName_12() { return static_cast<int32_t>(offsetof(EasyWiFiManager_t995954870, ___applicationName_12)); }
	inline String_t* get_applicationName_12() const { return ___applicationName_12; }
	inline String_t** get_address_of_applicationName_12() { return &___applicationName_12; }
	inline void set_applicationName_12(String_t* value)
	{
		___applicationName_12 = value;
		Il2CppCodeGenWriteBarrier(&___applicationName_12, value);
	}

	inline static int32_t get_offset_of_transmittedInventory_13() { return static_cast<int32_t>(offsetof(EasyWiFiManager_t995954870, ___transmittedInventory_13)); }
	inline bool get_transmittedInventory_13() const { return ___transmittedInventory_13; }
	inline bool* get_address_of_transmittedInventory_13() { return &___transmittedInventory_13; }
	inline void set_transmittedInventory_13(bool value)
	{
		___transmittedInventory_13 = value;
	}

	inline static int32_t get_offset_of_packetNumber_14() { return static_cast<int32_t>(offsetof(EasyWiFiManager_t995954870, ___packetNumber_14)); }
	inline int32_t get_packetNumber_14() const { return ___packetNumber_14; }
	inline int32_t* get_address_of_packetNumber_14() { return &___packetNumber_14; }
	inline void set_packetNumber_14(int32_t value)
	{
		___packetNumber_14 = value;
	}

	inline static int32_t get_offset_of_heartbeatPacketNumber_15() { return static_cast<int32_t>(offsetof(EasyWiFiManager_t995954870, ___heartbeatPacketNumber_15)); }
	inline int32_t get_heartbeatPacketNumber_15() const { return ___heartbeatPacketNumber_15; }
	inline int32_t* get_address_of_heartbeatPacketNumber_15() { return &___heartbeatPacketNumber_15; }
	inline void set_heartbeatPacketNumber_15(int32_t value)
	{
		___heartbeatPacketNumber_15 = value;
	}

	inline static int32_t get_offset_of_consecutiveAttempts_16() { return static_cast<int32_t>(offsetof(EasyWiFiManager_t995954870, ___consecutiveAttempts_16)); }
	inline int32_t get_consecutiveAttempts_16() const { return ___consecutiveAttempts_16; }
	inline int32_t* get_address_of_consecutiveAttempts_16() { return &___consecutiveAttempts_16; }
	inline void set_consecutiveAttempts_16(int32_t value)
	{
		___consecutiveAttempts_16 = value;
	}

	inline static int32_t get_offset_of_lastSendTime_17() { return static_cast<int32_t>(offsetof(EasyWiFiManager_t995954870, ___lastSendTime_17)); }
	inline float get_lastSendTime_17() const { return ___lastSendTime_17; }
	inline float* get_address_of_lastSendTime_17() { return &___lastSendTime_17; }
	inline void set_lastSendTime_17(float value)
	{
		___lastSendTime_17 = value;
	}

	inline static int32_t get_offset_of_maxRate_18() { return static_cast<int32_t>(offsetof(EasyWiFiManager_t995954870, ___maxRate_18)); }
	inline float get_maxRate_18() const { return ___maxRate_18; }
	inline float* get_address_of_maxRate_18() { return &___maxRate_18; }
	inline void set_maxRate_18(float value)
	{
		___maxRate_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
