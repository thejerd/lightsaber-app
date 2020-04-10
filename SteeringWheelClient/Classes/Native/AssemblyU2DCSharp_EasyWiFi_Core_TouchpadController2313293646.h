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

// EasyWiFi.Core.TouchpadControllerType
struct  TouchpadControllerType_t2313293646  : public BaseControllerType_t1678381931
{
public:
	// System.Single EasyWiFi.Core.TouchpadControllerType::POSITION_HORIZONTAL
	float ___POSITION_HORIZONTAL_9;
	// System.Single EasyWiFi.Core.TouchpadControllerType::POSITION_VERTICAL
	float ___POSITION_VERTICAL_10;
	// System.Boolean EasyWiFi.Core.TouchpadControllerType::IS_TOUCHING
	bool ___IS_TOUCHING_11;

public:
	inline static int32_t get_offset_of_POSITION_HORIZONTAL_9() { return static_cast<int32_t>(offsetof(TouchpadControllerType_t2313293646, ___POSITION_HORIZONTAL_9)); }
	inline float get_POSITION_HORIZONTAL_9() const { return ___POSITION_HORIZONTAL_9; }
	inline float* get_address_of_POSITION_HORIZONTAL_9() { return &___POSITION_HORIZONTAL_9; }
	inline void set_POSITION_HORIZONTAL_9(float value)
	{
		___POSITION_HORIZONTAL_9 = value;
	}

	inline static int32_t get_offset_of_POSITION_VERTICAL_10() { return static_cast<int32_t>(offsetof(TouchpadControllerType_t2313293646, ___POSITION_VERTICAL_10)); }
	inline float get_POSITION_VERTICAL_10() const { return ___POSITION_VERTICAL_10; }
	inline float* get_address_of_POSITION_VERTICAL_10() { return &___POSITION_VERTICAL_10; }
	inline void set_POSITION_VERTICAL_10(float value)
	{
		___POSITION_VERTICAL_10 = value;
	}

	inline static int32_t get_offset_of_IS_TOUCHING_11() { return static_cast<int32_t>(offsetof(TouchpadControllerType_t2313293646, ___IS_TOUCHING_11)); }
	inline bool get_IS_TOUCHING_11() const { return ___IS_TOUCHING_11; }
	inline bool* get_address_of_IS_TOUCHING_11() { return &___IS_TOUCHING_11; }
	inline void set_IS_TOUCHING_11(bool value)
	{
		___IS_TOUCHING_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
