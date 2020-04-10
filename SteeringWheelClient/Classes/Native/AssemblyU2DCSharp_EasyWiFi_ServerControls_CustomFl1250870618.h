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
// EasyWiFi.Core.FloatBackchannelType[]
struct FloatBackchannelTypeU5BU5D_t4181098211;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ServerControls.CustomFloatDataServerController
struct  CustomFloatDataServerController_t1250870618  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ServerControls.CustomFloatDataServerController::control
	String_t* ___control_2;
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER EasyWiFi.ServerControls.CustomFloatDataServerController::player
	int32_t ___player_3;
	// System.String EasyWiFi.ServerControls.CustomFloatDataServerController::notifyMethod
	String_t* ___notifyMethod_4;
	// EasyWiFi.Core.FloatBackchannelType[] EasyWiFi.ServerControls.CustomFloatDataServerController::floatController
	FloatBackchannelTypeU5BU5D_t4181098211* ___floatController_5;
	// System.Int32 EasyWiFi.ServerControls.CustomFloatDataServerController::currentNumberControllers
	int32_t ___currentNumberControllers_6;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(CustomFloatDataServerController_t1250870618, ___control_2)); }
	inline String_t* get_control_2() const { return ___control_2; }
	inline String_t** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(String_t* value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(CustomFloatDataServerController_t1250870618, ___player_3)); }
	inline int32_t get_player_3() const { return ___player_3; }
	inline int32_t* get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(int32_t value)
	{
		___player_3 = value;
	}

	inline static int32_t get_offset_of_notifyMethod_4() { return static_cast<int32_t>(offsetof(CustomFloatDataServerController_t1250870618, ___notifyMethod_4)); }
	inline String_t* get_notifyMethod_4() const { return ___notifyMethod_4; }
	inline String_t** get_address_of_notifyMethod_4() { return &___notifyMethod_4; }
	inline void set_notifyMethod_4(String_t* value)
	{
		___notifyMethod_4 = value;
		Il2CppCodeGenWriteBarrier(&___notifyMethod_4, value);
	}

	inline static int32_t get_offset_of_floatController_5() { return static_cast<int32_t>(offsetof(CustomFloatDataServerController_t1250870618, ___floatController_5)); }
	inline FloatBackchannelTypeU5BU5D_t4181098211* get_floatController_5() const { return ___floatController_5; }
	inline FloatBackchannelTypeU5BU5D_t4181098211** get_address_of_floatController_5() { return &___floatController_5; }
	inline void set_floatController_5(FloatBackchannelTypeU5BU5D_t4181098211* value)
	{
		___floatController_5 = value;
		Il2CppCodeGenWriteBarrier(&___floatController_5, value);
	}

	inline static int32_t get_offset_of_currentNumberControllers_6() { return static_cast<int32_t>(offsetof(CustomFloatDataServerController_t1250870618, ___currentNumberControllers_6)); }
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
