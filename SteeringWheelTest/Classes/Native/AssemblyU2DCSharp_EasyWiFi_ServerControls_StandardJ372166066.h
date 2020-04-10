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
#include "AssemblyU2DCSharp_EasyWiFi_Core_EasyWiFiConstants_1791157770.h"
#include "AssemblyU2DCSharp_EasyWiFi_Core_EasyWiFiConstants_A966232690.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.String
struct String_t;
// EasyWiFi.Core.JoystickControllerType[]
struct JoystickControllerTypeU5BU5D_t19801737;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ServerControls.StandardJoystickServerController
struct  StandardJoystickServerController_t372166066  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ServerControls.StandardJoystickServerController::control
	String_t* ___control_2;
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER EasyWiFi.ServerControls.StandardJoystickServerController::player
	int32_t ___player_3;
	// EasyWiFi.Core.EasyWiFiConstants/AXIS EasyWiFi.ServerControls.StandardJoystickServerController::joystickHorizontal
	int32_t ___joystickHorizontal_4;
	// EasyWiFi.Core.EasyWiFiConstants/AXIS EasyWiFi.ServerControls.StandardJoystickServerController::joystickVertical
	int32_t ___joystickVertical_5;
	// EasyWiFi.Core.EasyWiFiConstants/ACTION_TYPE EasyWiFi.ServerControls.StandardJoystickServerController::action
	int32_t ___action_6;
	// System.Single EasyWiFi.ServerControls.StandardJoystickServerController::sensitivity
	float ___sensitivity_7;
	// EasyWiFi.Core.JoystickControllerType[] EasyWiFi.ServerControls.StandardJoystickServerController::joystick
	JoystickControllerTypeU5BU5D_t19801737* ___joystick_8;
	// System.Int32 EasyWiFi.ServerControls.StandardJoystickServerController::currentNumberControllers
	int32_t ___currentNumberControllers_9;
	// UnityEngine.Vector3 EasyWiFi.ServerControls.StandardJoystickServerController::actionVector3
	Vector3_t2243707580  ___actionVector3_10;
	// System.Single EasyWiFi.ServerControls.StandardJoystickServerController::horizontal
	float ___horizontal_11;
	// System.Single EasyWiFi.ServerControls.StandardJoystickServerController::vertical
	float ___vertical_12;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(StandardJoystickServerController_t372166066, ___control_2)); }
	inline String_t* get_control_2() const { return ___control_2; }
	inline String_t** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(String_t* value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(StandardJoystickServerController_t372166066, ___player_3)); }
	inline int32_t get_player_3() const { return ___player_3; }
	inline int32_t* get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(int32_t value)
	{
		___player_3 = value;
	}

	inline static int32_t get_offset_of_joystickHorizontal_4() { return static_cast<int32_t>(offsetof(StandardJoystickServerController_t372166066, ___joystickHorizontal_4)); }
	inline int32_t get_joystickHorizontal_4() const { return ___joystickHorizontal_4; }
	inline int32_t* get_address_of_joystickHorizontal_4() { return &___joystickHorizontal_4; }
	inline void set_joystickHorizontal_4(int32_t value)
	{
		___joystickHorizontal_4 = value;
	}

	inline static int32_t get_offset_of_joystickVertical_5() { return static_cast<int32_t>(offsetof(StandardJoystickServerController_t372166066, ___joystickVertical_5)); }
	inline int32_t get_joystickVertical_5() const { return ___joystickVertical_5; }
	inline int32_t* get_address_of_joystickVertical_5() { return &___joystickVertical_5; }
	inline void set_joystickVertical_5(int32_t value)
	{
		___joystickVertical_5 = value;
	}

	inline static int32_t get_offset_of_action_6() { return static_cast<int32_t>(offsetof(StandardJoystickServerController_t372166066, ___action_6)); }
	inline int32_t get_action_6() const { return ___action_6; }
	inline int32_t* get_address_of_action_6() { return &___action_6; }
	inline void set_action_6(int32_t value)
	{
		___action_6 = value;
	}

	inline static int32_t get_offset_of_sensitivity_7() { return static_cast<int32_t>(offsetof(StandardJoystickServerController_t372166066, ___sensitivity_7)); }
	inline float get_sensitivity_7() const { return ___sensitivity_7; }
	inline float* get_address_of_sensitivity_7() { return &___sensitivity_7; }
	inline void set_sensitivity_7(float value)
	{
		___sensitivity_7 = value;
	}

	inline static int32_t get_offset_of_joystick_8() { return static_cast<int32_t>(offsetof(StandardJoystickServerController_t372166066, ___joystick_8)); }
	inline JoystickControllerTypeU5BU5D_t19801737* get_joystick_8() const { return ___joystick_8; }
	inline JoystickControllerTypeU5BU5D_t19801737** get_address_of_joystick_8() { return &___joystick_8; }
	inline void set_joystick_8(JoystickControllerTypeU5BU5D_t19801737* value)
	{
		___joystick_8 = value;
		Il2CppCodeGenWriteBarrier(&___joystick_8, value);
	}

	inline static int32_t get_offset_of_currentNumberControllers_9() { return static_cast<int32_t>(offsetof(StandardJoystickServerController_t372166066, ___currentNumberControllers_9)); }
	inline int32_t get_currentNumberControllers_9() const { return ___currentNumberControllers_9; }
	inline int32_t* get_address_of_currentNumberControllers_9() { return &___currentNumberControllers_9; }
	inline void set_currentNumberControllers_9(int32_t value)
	{
		___currentNumberControllers_9 = value;
	}

	inline static int32_t get_offset_of_actionVector3_10() { return static_cast<int32_t>(offsetof(StandardJoystickServerController_t372166066, ___actionVector3_10)); }
	inline Vector3_t2243707580  get_actionVector3_10() const { return ___actionVector3_10; }
	inline Vector3_t2243707580 * get_address_of_actionVector3_10() { return &___actionVector3_10; }
	inline void set_actionVector3_10(Vector3_t2243707580  value)
	{
		___actionVector3_10 = value;
	}

	inline static int32_t get_offset_of_horizontal_11() { return static_cast<int32_t>(offsetof(StandardJoystickServerController_t372166066, ___horizontal_11)); }
	inline float get_horizontal_11() const { return ___horizontal_11; }
	inline float* get_address_of_horizontal_11() { return &___horizontal_11; }
	inline void set_horizontal_11(float value)
	{
		___horizontal_11 = value;
	}

	inline static int32_t get_offset_of_vertical_12() { return static_cast<int32_t>(offsetof(StandardJoystickServerController_t372166066, ___vertical_12)); }
	inline float get_vertical_12() const { return ___vertical_12; }
	inline float* get_address_of_vertical_12() { return &___vertical_12; }
	inline void set_vertical_12(float value)
	{
		___vertical_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
