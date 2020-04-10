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
// EasyWiFi.Core.DoubleBackchannelType
struct DoubleBackchannelType_t1312126943;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ClientControls.DoubleDataClientController
struct  DoubleDataClientController_t130221576  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientControls.DoubleDataClientController::controlName
	String_t* ___controlName_2;
	// EasyWiFi.Core.DoubleBackchannelType EasyWiFi.ClientControls.DoubleDataClientController::doubleData
	DoubleBackchannelType_t1312126943 * ___doubleData_3;
	// System.String EasyWiFi.ClientControls.DoubleDataClientController::doubleKey
	String_t* ___doubleKey_4;
	// System.Double EasyWiFi.ClientControls.DoubleDataClientController::value
	double ___value_5;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(DoubleDataClientController_t130221576, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_doubleData_3() { return static_cast<int32_t>(offsetof(DoubleDataClientController_t130221576, ___doubleData_3)); }
	inline DoubleBackchannelType_t1312126943 * get_doubleData_3() const { return ___doubleData_3; }
	inline DoubleBackchannelType_t1312126943 ** get_address_of_doubleData_3() { return &___doubleData_3; }
	inline void set_doubleData_3(DoubleBackchannelType_t1312126943 * value)
	{
		___doubleData_3 = value;
		Il2CppCodeGenWriteBarrier(&___doubleData_3, value);
	}

	inline static int32_t get_offset_of_doubleKey_4() { return static_cast<int32_t>(offsetof(DoubleDataClientController_t130221576, ___doubleKey_4)); }
	inline String_t* get_doubleKey_4() const { return ___doubleKey_4; }
	inline String_t** get_address_of_doubleKey_4() { return &___doubleKey_4; }
	inline void set_doubleKey_4(String_t* value)
	{
		___doubleKey_4 = value;
		Il2CppCodeGenWriteBarrier(&___doubleKey_4, value);
	}

	inline static int32_t get_offset_of_value_5() { return static_cast<int32_t>(offsetof(DoubleDataClientController_t130221576, ___value_5)); }
	inline double get_value_5() const { return ___value_5; }
	inline double* get_address_of_value_5() { return &___value_5; }
	inline void set_value_5(double value)
	{
		___value_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
