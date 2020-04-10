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

// UnityEngine.RectTransform
struct RectTransform_t3349966182;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spedometer
struct  Spedometer_t2778621704  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform Spedometer::myRectTransform
	RectTransform_t3349966182 * ___myRectTransform_2;
	// System.Single Spedometer::currentSpeed
	float ___currentSpeed_3;
	// UnityEngine.Vector3 Spedometer::myRotation
	Vector3_t2243707580  ___myRotation_4;

public:
	inline static int32_t get_offset_of_myRectTransform_2() { return static_cast<int32_t>(offsetof(Spedometer_t2778621704, ___myRectTransform_2)); }
	inline RectTransform_t3349966182 * get_myRectTransform_2() const { return ___myRectTransform_2; }
	inline RectTransform_t3349966182 ** get_address_of_myRectTransform_2() { return &___myRectTransform_2; }
	inline void set_myRectTransform_2(RectTransform_t3349966182 * value)
	{
		___myRectTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___myRectTransform_2, value);
	}

	inline static int32_t get_offset_of_currentSpeed_3() { return static_cast<int32_t>(offsetof(Spedometer_t2778621704, ___currentSpeed_3)); }
	inline float get_currentSpeed_3() const { return ___currentSpeed_3; }
	inline float* get_address_of_currentSpeed_3() { return &___currentSpeed_3; }
	inline void set_currentSpeed_3(float value)
	{
		___currentSpeed_3 = value;
	}

	inline static int32_t get_offset_of_myRotation_4() { return static_cast<int32_t>(offsetof(Spedometer_t2778621704, ___myRotation_4)); }
	inline Vector3_t2243707580  get_myRotation_4() const { return ___myRotation_4; }
	inline Vector3_t2243707580 * get_address_of_myRotation_4() { return &___myRotation_4; }
	inline void set_myRotation_4(Vector3_t2243707580  value)
	{
		___myRotation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
