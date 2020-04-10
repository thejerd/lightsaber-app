#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_EasyWiFi_Core_EasyWiFiConstants_4244905158.h"

// System.String
struct String_t;
// EasyWiFi.Core.IntBackchannelType[]
struct IntBackchannelTypeU5BU5D_t3803191164;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ServerControls.CustomIntDataServerController
struct  CustomIntDataServerController_t2949552843  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ServerControls.CustomIntDataServerController::control
	String_t* ___control_2;
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER EasyWiFi.ServerControls.CustomIntDataServerController::player
	int32_t ___player_3;
	// System.String EasyWiFi.ServerControls.CustomIntDataServerController::notifyMethod
	String_t* ___notifyMethod_4;
	// EasyWiFi.Core.IntBackchannelType[] EasyWiFi.ServerControls.CustomIntDataServerController::intController
	IntBackchannelTypeU5BU5D_t3803191164* ___intController_5;
	// System.Int32 EasyWiFi.ServerControls.CustomIntDataServerController::currentNumberControllers
	int32_t ___currentNumberControllers_6;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(CustomIntDataServerController_t2949552843, ___control_2)); }
	inline String_t* get_control_2() const { return ___control_2; }
	inline String_t** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(String_t* value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(CustomIntDataServerController_t2949552843, ___player_3)); }
	inline int32_t get_player_3() const { return ___player_3; }
	inline int32_t* get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(int32_t value)
	{
		___player_3 = value;
	}

	inline static int32_t get_offset_of_notifyMethod_4() { return static_cast<int32_t>(offsetof(CustomIntDataServerController_t2949552843, ___notifyMethod_4)); }
	inline String_t* get_notifyMethod_4() const { return ___notifyMethod_4; }
	inline String_t** get_address_of_notifyMethod_4() { return &___notifyMethod_4; }
	inline void set_notifyMethod_4(String_t* value)
	{
		___notifyMethod_4 = value;
		Il2CppCodeGenWriteBarrier(&___notifyMethod_4, value);
	}

	inline static int32_t get_offset_of_intController_5() { return static_cast<int32_t>(offsetof(CustomIntDataServerController_t2949552843, ___intController_5)); }
	inline IntBackchannelTypeU5BU5D_t3803191164* get_intController_5() const { return ___intController_5; }
	inline IntBackchannelTypeU5BU5D_t3803191164** get_address_of_intController_5() { return &___intController_5; }
	inline void set_intController_5(IntBackchannelTypeU5BU5D_t3803191164* value)
	{
		___intController_5 = value;
		Il2CppCodeGenWriteBarrier(&___intController_5, value);
	}

	inline static int32_t get_offset_of_currentNumberControllers_6() { return static_cast<int32_t>(offsetof(CustomIntDataServerController_t2949552843, ___currentNumberControllers_6)); }
	inline int32_t get_currentNumberControllers_6() const { return ___currentNumberControllers_6; }
	inline int32_t* get_address_of_currentNumberControllers_6() { return &___currentNumberControllers_6; }
	inline void set_currentNumberControllers_6(int32_t value)
	{
		___currentNumberControllers_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
