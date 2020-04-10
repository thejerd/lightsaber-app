#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// EasyWiFi.ServerBackchannels.FloatServerBackchannel
struct FloatServerBackchannel_t2674763181;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Steering
struct  Steering_t3902932603  : public MonoBehaviour_t1158329972
{
public:
	// EasyWiFi.ServerBackchannels.FloatServerBackchannel Steering::floatBackchannel
	FloatServerBackchannel_t2674763181 * ___floatBackchannel_2;
	// UnityEngine.Rigidbody Steering::myRigidbody
	Rigidbody_t4233889191 * ___myRigidbody_3;
	// UnityEngine.Vector3 Steering::accel
	Vector3_t2243707580  ___accel_4;
	// System.Single Steering::horizontal
	float ___horizontal_5;
	// System.Single Steering::vertical
	float ___vertical_6;
	// System.Single Steering::normalizeDegrees
	float ___normalizeDegrees_7;
	// System.Single Steering::sensitivity
	float ___sensitivity_8;
	// UnityEngine.Vector3 Steering::actionVectorPosition
	Vector3_t2243707580  ___actionVectorPosition_9;
	// UnityEngine.Vector3 Steering::computerVector
	Vector3_t2243707580  ___computerVector_10;

public:
	inline static int32_t get_offset_of_floatBackchannel_2() { return static_cast<int32_t>(offsetof(Steering_t3902932603, ___floatBackchannel_2)); }
	inline FloatServerBackchannel_t2674763181 * get_floatBackchannel_2() const { return ___floatBackchannel_2; }
	inline FloatServerBackchannel_t2674763181 ** get_address_of_floatBackchannel_2() { return &___floatBackchannel_2; }
	inline void set_floatBackchannel_2(FloatServerBackchannel_t2674763181 * value)
	{
		___floatBackchannel_2 = value;
		Il2CppCodeGenWriteBarrier(&___floatBackchannel_2, value);
	}

	inline static int32_t get_offset_of_myRigidbody_3() { return static_cast<int32_t>(offsetof(Steering_t3902932603, ___myRigidbody_3)); }
	inline Rigidbody_t4233889191 * get_myRigidbody_3() const { return ___myRigidbody_3; }
	inline Rigidbody_t4233889191 ** get_address_of_myRigidbody_3() { return &___myRigidbody_3; }
	inline void set_myRigidbody_3(Rigidbody_t4233889191 * value)
	{
		___myRigidbody_3 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidbody_3, value);
	}

	inline static int32_t get_offset_of_accel_4() { return static_cast<int32_t>(offsetof(Steering_t3902932603, ___accel_4)); }
	inline Vector3_t2243707580  get_accel_4() const { return ___accel_4; }
	inline Vector3_t2243707580 * get_address_of_accel_4() { return &___accel_4; }
	inline void set_accel_4(Vector3_t2243707580  value)
	{
		___accel_4 = value;
	}

	inline static int32_t get_offset_of_horizontal_5() { return static_cast<int32_t>(offsetof(Steering_t3902932603, ___horizontal_5)); }
	inline float get_horizontal_5() const { return ___horizontal_5; }
	inline float* get_address_of_horizontal_5() { return &___horizontal_5; }
	inline void set_horizontal_5(float value)
	{
		___horizontal_5 = value;
	}

	inline static int32_t get_offset_of_vertical_6() { return static_cast<int32_t>(offsetof(Steering_t3902932603, ___vertical_6)); }
	inline float get_vertical_6() const { return ___vertical_6; }
	inline float* get_address_of_vertical_6() { return &___vertical_6; }
	inline void set_vertical_6(float value)
	{
		___vertical_6 = value;
	}

	inline static int32_t get_offset_of_normalizeDegrees_7() { return static_cast<int32_t>(offsetof(Steering_t3902932603, ___normalizeDegrees_7)); }
	inline float get_normalizeDegrees_7() const { return ___normalizeDegrees_7; }
	inline float* get_address_of_normalizeDegrees_7() { return &___normalizeDegrees_7; }
	inline void set_normalizeDegrees_7(float value)
	{
		___normalizeDegrees_7 = value;
	}

	inline static int32_t get_offset_of_sensitivity_8() { return static_cast<int32_t>(offsetof(Steering_t3902932603, ___sensitivity_8)); }
	inline float get_sensitivity_8() const { return ___sensitivity_8; }
	inline float* get_address_of_sensitivity_8() { return &___sensitivity_8; }
	inline void set_sensitivity_8(float value)
	{
		___sensitivity_8 = value;
	}

	inline static int32_t get_offset_of_actionVectorPosition_9() { return static_cast<int32_t>(offsetof(Steering_t3902932603, ___actionVectorPosition_9)); }
	inline Vector3_t2243707580  get_actionVectorPosition_9() const { return ___actionVectorPosition_9; }
	inline Vector3_t2243707580 * get_address_of_actionVectorPosition_9() { return &___actionVectorPosition_9; }
	inline void set_actionVectorPosition_9(Vector3_t2243707580  value)
	{
		___actionVectorPosition_9 = value;
	}

	inline static int32_t get_offset_of_computerVector_10() { return static_cast<int32_t>(offsetof(Steering_t3902932603, ___computerVector_10)); }
	inline Vector3_t2243707580  get_computerVector_10() const { return ___computerVector_10; }
	inline Vector3_t2243707580 * get_address_of_computerVector_10() { return &___computerVector_10; }
	inline void set_computerVector_10(Vector3_t2243707580  value)
	{
		___computerVector_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
