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
// EasyWiFi.Core.FloatBackchannelType
struct FloatBackchannelType_t2207651142;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ClientControls.FloatDataClientController
struct  FloatDataClientController_t1025455211  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientControls.FloatDataClientController::controlName
	String_t* ___controlName_2;
	// EasyWiFi.Core.FloatBackchannelType EasyWiFi.ClientControls.FloatDataClientController::floatData
	FloatBackchannelType_t2207651142 * ___floatData_3;
	// System.String EasyWiFi.ClientControls.FloatDataClientController::floatKey
	String_t* ___floatKey_4;
	// System.Single EasyWiFi.ClientControls.FloatDataClientController::value
	float ___value_5;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(FloatDataClientController_t1025455211, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_floatData_3() { return static_cast<int32_t>(offsetof(FloatDataClientController_t1025455211, ___floatData_3)); }
	inline FloatBackchannelType_t2207651142 * get_floatData_3() const { return ___floatData_3; }
	inline FloatBackchannelType_t2207651142 ** get_address_of_floatData_3() { return &___floatData_3; }
	inline void set_floatData_3(FloatBackchannelType_t2207651142 * value)
	{
		___floatData_3 = value;
		Il2CppCodeGenWriteBarrier(&___floatData_3, value);
	}

	inline static int32_t get_offset_of_floatKey_4() { return static_cast<int32_t>(offsetof(FloatDataClientController_t1025455211, ___floatKey_4)); }
	inline String_t* get_floatKey_4() const { return ___floatKey_4; }
	inline String_t** get_address_of_floatKey_4() { return &___floatKey_4; }
	inline void set_floatKey_4(String_t* value)
	{
		___floatKey_4 = value;
		Il2CppCodeGenWriteBarrier(&___floatKey_4, value);
	}

	inline static int32_t get_offset_of_value_5() { return static_cast<int32_t>(offsetof(FloatDataClientController_t1025455211, ___value_5)); }
	inline float get_value_5() const { return ___value_5; }
	inline float* get_address_of_value_5() { return &___value_5; }
	inline void set_value_5(float value)
	{
		___value_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
