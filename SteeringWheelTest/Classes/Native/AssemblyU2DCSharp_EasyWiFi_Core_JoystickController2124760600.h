#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_EasyWiFi_Core_BaseControllerType1678381931.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.JoystickControllerType
struct  JoystickControllerType_t2124760600  : public BaseControllerType_t1678381931
{
public:
	// System.Single EasyWiFi.Core.JoystickControllerType::JOYSTICK_HORIZONTAL
	float ___JOYSTICK_HORIZONTAL_9;
	// System.Single EasyWiFi.Core.JoystickControllerType::JOYSTICK_VERTICAL
	float ___JOYSTICK_VERTICAL_10;

public:
	inline static int32_t get_offset_of_JOYSTICK_HORIZONTAL_9() { return static_cast<int32_t>(offsetof(JoystickControllerType_t2124760600, ___JOYSTICK_HORIZONTAL_9)); }
	inline float get_JOYSTICK_HORIZONTAL_9() const { return ___JOYSTICK_HORIZONTAL_9; }
	inline float* get_address_of_JOYSTICK_HORIZONTAL_9() { return &___JOYSTICK_HORIZONTAL_9; }
	inline void set_JOYSTICK_HORIZONTAL_9(float value)
	{
		___JOYSTICK_HORIZONTAL_9 = value;
	}

	inline static int32_t get_offset_of_JOYSTICK_VERTICAL_10() { return static_cast<int32_t>(offsetof(JoystickControllerType_t2124760600, ___JOYSTICK_VERTICAL_10)); }
	inline float get_JOYSTICK_VERTICAL_10() const { return ___JOYSTICK_VERTICAL_10; }
	inline float* get_address_of_JOYSTICK_VERTICAL_10() { return &___JOYSTICK_VERTICAL_10; }
	inline void set_JOYSTICK_VERTICAL_10(float value)
	{
		___JOYSTICK_VERTICAL_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
