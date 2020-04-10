#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.BaseControllerType
struct  BaseControllerType_t1678381931  : public Il2CppObject
{
public:
	// System.String EasyWiFi.Core.BaseControllerType::clientKey
	String_t* ___clientKey_0;
	// System.String EasyWiFi.Core.BaseControllerType::serverKey
	String_t* ___serverKey_1;
	// System.String EasyWiFi.Core.BaseControllerType::clientIP
	String_t* ___clientIP_2;
	// System.String EasyWiFi.Core.BaseControllerType::controllerType
	String_t* ___controllerType_3;
	// System.Int32 EasyWiFi.Core.BaseControllerType::lastPacketNumber
	int32_t ___lastPacketNumber_4;
	// System.Boolean EasyWiFi.Core.BaseControllerType::justReconnected
	bool ___justReconnected_5;
	// System.Int32 EasyWiFi.Core.BaseControllerType::logicalPlayerNumber
	int32_t ___logicalPlayerNumber_6;
	// System.Int32 EasyWiFi.Core.BaseControllerType::previousConnectionPlayerNumber
	int32_t ___previousConnectionPlayerNumber_7;
	// System.DateTime EasyWiFi.Core.BaseControllerType::lastReceivedPacketTime
	DateTime_t693205669  ___lastReceivedPacketTime_8;

public:
	inline static int32_t get_offset_of_clientKey_0() { return static_cast<int32_t>(offsetof(BaseControllerType_t1678381931, ___clientKey_0)); }
	inline String_t* get_clientKey_0() const { return ___clientKey_0; }
	inline String_t** get_address_of_clientKey_0() { return &___clientKey_0; }
	inline void set_clientKey_0(String_t* value)
	{
		___clientKey_0 = value;
		Il2CppCodeGenWriteBarrier(&___clientKey_0, value);
	}

	inline static int32_t get_offset_of_serverKey_1() { return static_cast<int32_t>(offsetof(BaseControllerType_t1678381931, ___serverKey_1)); }
	inline String_t* get_serverKey_1() const { return ___serverKey_1; }
	inline String_t** get_address_of_serverKey_1() { return &___serverKey_1; }
	inline void set_serverKey_1(String_t* value)
	{
		___serverKey_1 = value;
		Il2CppCodeGenWriteBarrier(&___serverKey_1, value);
	}

	inline static int32_t get_offset_of_clientIP_2() { return static_cast<int32_t>(offsetof(BaseControllerType_t1678381931, ___clientIP_2)); }
	inline String_t* get_clientIP_2() const { return ___clientIP_2; }
	inline String_t** get_address_of_clientIP_2() { return &___clientIP_2; }
	inline void set_clientIP_2(String_t* value)
	{
		___clientIP_2 = value;
		Il2CppCodeGenWriteBarrier(&___clientIP_2, value);
	}

	inline static int32_t get_offset_of_controllerType_3() { return static_cast<int32_t>(offsetof(BaseControllerType_t1678381931, ___controllerType_3)); }
	inline String_t* get_controllerType_3() const { return ___controllerType_3; }
	inline String_t** get_address_of_controllerType_3() { return &___controllerType_3; }
	inline void set_controllerType_3(String_t* value)
	{
		___controllerType_3 = value;
		Il2CppCodeGenWriteBarrier(&___controllerType_3, value);
	}

	inline static int32_t get_offset_of_lastPacketNumber_4() { return static_cast<int32_t>(offsetof(BaseControllerType_t1678381931, ___lastPacketNumber_4)); }
	inline int32_t get_lastPacketNumber_4() const { return ___lastPacketNumber_4; }
	inline int32_t* get_address_of_lastPacketNumber_4() { return &___lastPacketNumber_4; }
	inline void set_lastPacketNumber_4(int32_t value)
	{
		___lastPacketNumber_4 = value;
	}

	inline static int32_t get_offset_of_justReconnected_5() { return static_cast<int32_t>(offsetof(BaseControllerType_t1678381931, ___justReconnected_5)); }
	inline bool get_justReconnected_5() const { return ___justReconnected_5; }
	inline bool* get_address_of_justReconnected_5() { return &___justReconnected_5; }
	inline void set_justReconnected_5(bool value)
	{
		___justReconnected_5 = value;
	}

	inline static int32_t get_offset_of_logicalPlayerNumber_6() { return static_cast<int32_t>(offsetof(BaseControllerType_t1678381931, ___logicalPlayerNumber_6)); }
	inline int32_t get_logicalPlayerNumber_6() const { return ___logicalPlayerNumber_6; }
	inline int32_t* get_address_of_logicalPlayerNumber_6() { return &___logicalPlayerNumber_6; }
	inline void set_logicalPlayerNumber_6(int32_t value)
	{
		___logicalPlayerNumber_6 = value;
	}

	inline static int32_t get_offset_of_previousConnectionPlayerNumber_7() { return static_cast<int32_t>(offsetof(BaseControllerType_t1678381931, ___previousConnectionPlayerNumber_7)); }
	inline int32_t get_previousConnectionPlayerNumber_7() const { return ___previousConnectionPlayerNumber_7; }
	inline int32_t* get_address_of_previousConnectionPlayerNumber_7() { return &___previousConnectionPlayerNumber_7; }
	inline void set_previousConnectionPlayerNumber_7(int32_t value)
	{
		___previousConnectionPlayerNumber_7 = value;
	}

	inline static int32_t get_offset_of_lastReceivedPacketTime_8() { return static_cast<int32_t>(offsetof(BaseControllerType_t1678381931, ___lastReceivedPacketTime_8)); }
	inline DateTime_t693205669  get_lastReceivedPacketTime_8() const { return ___lastReceivedPacketTime_8; }
	inline DateTime_t693205669 * get_address_of_lastReceivedPacketTime_8() { return &___lastReceivedPacketTime_8; }
	inline void set_lastReceivedPacketTime_8(DateTime_t693205669  value)
	{
		___lastReceivedPacketTime_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
