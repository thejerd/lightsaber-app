#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// EasyWiFi.ClientControls.FloatDataClientController
struct FloatDataClientController_t1025455211;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ComputerInput
struct  ComputerInput_t2065085251  : public MonoBehaviour_t1158329972
{
public:
	// EasyWiFi.ClientControls.FloatDataClientController ComputerInput::xSpeedNotification
	FloatDataClientController_t1025455211 * ___xSpeedNotification_2;
	// EasyWiFi.ClientControls.FloatDataClientController ComputerInput::zSpeedNotification
	FloatDataClientController_t1025455211 * ___zSpeedNotification_3;
	// System.Single ComputerInput::xSpeed
	float ___xSpeed_4;
	// System.Single ComputerInput::zSpeed
	float ___zSpeed_5;
	// System.Boolean ComputerInput::xAscending
	bool ___xAscending_6;
	// System.Boolean ComputerInput::zAscending
	bool ___zAscending_7;

public:
	inline static int32_t get_offset_of_xSpeedNotification_2() { return static_cast<int32_t>(offsetof(ComputerInput_t2065085251, ___xSpeedNotification_2)); }
	inline FloatDataClientController_t1025455211 * get_xSpeedNotification_2() const { return ___xSpeedNotification_2; }
	inline FloatDataClientController_t1025455211 ** get_address_of_xSpeedNotification_2() { return &___xSpeedNotification_2; }
	inline void set_xSpeedNotification_2(FloatDataClientController_t1025455211 * value)
	{
		___xSpeedNotification_2 = value;
		Il2CppCodeGenWriteBarrier(&___xSpeedNotification_2, value);
	}

	inline static int32_t get_offset_of_zSpeedNotification_3() { return static_cast<int32_t>(offsetof(ComputerInput_t2065085251, ___zSpeedNotification_3)); }
	inline FloatDataClientController_t1025455211 * get_zSpeedNotification_3() const { return ___zSpeedNotification_3; }
	inline FloatDataClientController_t1025455211 ** get_address_of_zSpeedNotification_3() { return &___zSpeedNotification_3; }
	inline void set_zSpeedNotification_3(FloatDataClientController_t1025455211 * value)
	{
		___zSpeedNotification_3 = value;
		Il2CppCodeGenWriteBarrier(&___zSpeedNotification_3, value);
	}

	inline static int32_t get_offset_of_xSpeed_4() { return static_cast<int32_t>(offsetof(ComputerInput_t2065085251, ___xSpeed_4)); }
	inline float get_xSpeed_4() const { return ___xSpeed_4; }
	inline float* get_address_of_xSpeed_4() { return &___xSpeed_4; }
	inline void set_xSpeed_4(float value)
	{
		___xSpeed_4 = value;
	}

	inline static int32_t get_offset_of_zSpeed_5() { return static_cast<int32_t>(offsetof(ComputerInput_t2065085251, ___zSpeed_5)); }
	inline float get_zSpeed_5() const { return ___zSpeed_5; }
	inline float* get_address_of_zSpeed_5() { return &___zSpeed_5; }
	inline void set_zSpeed_5(float value)
	{
		___zSpeed_5 = value;
	}

	inline static int32_t get_offset_of_xAscending_6() { return static_cast<int32_t>(offsetof(ComputerInput_t2065085251, ___xAscending_6)); }
	inline bool get_xAscending_6() const { return ___xAscending_6; }
	inline bool* get_address_of_xAscending_6() { return &___xAscending_6; }
	inline void set_xAscending_6(bool value)
	{
		___xAscending_6 = value;
	}

	inline static int32_t get_offset_of_zAscending_7() { return static_cast<int32_t>(offsetof(ComputerInput_t2065085251, ___zAscending_7)); }
	inline bool get_zAscending_7() const { return ___zAscending_7; }
	inline bool* get_address_of_zAscending_7() { return &___zAscending_7; }
	inline void set_zAscending_7(bool value)
	{
		___zAscending_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
