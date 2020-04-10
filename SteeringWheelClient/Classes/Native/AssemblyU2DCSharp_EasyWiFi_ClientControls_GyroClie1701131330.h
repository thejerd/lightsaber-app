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
// EasyWiFi.Core.GyroControllerType
struct GyroControllerType_t1141684161;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ClientControls.GyroClientController
struct  GyroClientController_t1701131330  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientControls.GyroClientController::controlName
	String_t* ___controlName_2;
	// EasyWiFi.Core.GyroControllerType EasyWiFi.ClientControls.GyroClientController::gyro
	GyroControllerType_t1141684161 * ___gyro_3;
	// System.String EasyWiFi.ClientControls.GyroClientController::gyroKey
	String_t* ___gyroKey_4;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(GyroClientController_t1701131330, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_gyro_3() { return static_cast<int32_t>(offsetof(GyroClientController_t1701131330, ___gyro_3)); }
	inline GyroControllerType_t1141684161 * get_gyro_3() const { return ___gyro_3; }
	inline GyroControllerType_t1141684161 ** get_address_of_gyro_3() { return &___gyro_3; }
	inline void set_gyro_3(GyroControllerType_t1141684161 * value)
	{
		___gyro_3 = value;
		Il2CppCodeGenWriteBarrier(&___gyro_3, value);
	}

	inline static int32_t get_offset_of_gyroKey_4() { return static_cast<int32_t>(offsetof(GyroClientController_t1701131330, ___gyroKey_4)); }
	inline String_t* get_gyroKey_4() const { return ___gyroKey_4; }
	inline String_t** get_address_of_gyroKey_4() { return &___gyroKey_4; }
	inline void set_gyroKey_4(String_t* value)
	{
		___gyroKey_4 = value;
		Il2CppCodeGenWriteBarrier(&___gyroKey_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
