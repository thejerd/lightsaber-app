#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// EasyWiFi.Core.AccelerometerControllerType
struct AccelerometerControllerType_t3828026217;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ClientControls.AccelerometerClientController
struct  AccelerometerClientController_t2104022768  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientControls.AccelerometerClientController::controlName
	String_t* ___controlName_2;
	// EasyWiFi.Core.AccelerometerControllerType EasyWiFi.ClientControls.AccelerometerClientController::accelerometer
	AccelerometerControllerType_t3828026217 * ___accelerometer_3;
	// System.String EasyWiFi.ClientControls.AccelerometerClientController::accelerometerKey
	String_t* ___accelerometerKey_4;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(AccelerometerClientController_t2104022768, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_accelerometer_3() { return static_cast<int32_t>(offsetof(AccelerometerClientController_t2104022768, ___accelerometer_3)); }
	inline AccelerometerControllerType_t3828026217 * get_accelerometer_3() const { return ___accelerometer_3; }
	inline AccelerometerControllerType_t3828026217 ** get_address_of_accelerometer_3() { return &___accelerometer_3; }
	inline void set_accelerometer_3(AccelerometerControllerType_t3828026217 * value)
	{
		___accelerometer_3 = value;
		Il2CppCodeGenWriteBarrier(&___accelerometer_3, value);
	}

	inline static int32_t get_offset_of_accelerometerKey_4() { return static_cast<int32_t>(offsetof(AccelerometerClientController_t2104022768, ___accelerometerKey_4)); }
	inline String_t* get_accelerometerKey_4() const { return ___accelerometerKey_4; }
	inline String_t** get_address_of_accelerometerKey_4() { return &___accelerometerKey_4; }
	inline void set_accelerometerKey_4(String_t* value)
	{
		___accelerometerKey_4 = value;
		Il2CppCodeGenWriteBarrier(&___accelerometerKey_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
