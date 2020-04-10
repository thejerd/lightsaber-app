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
// EasyWiFi.Core.IntBackchannelType
struct IntBackchannelType_t2726195169;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ClientControls.IntDataClientController
struct  IntDataClientController_t1986771004  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientControls.IntDataClientController::controlName
	String_t* ___controlName_2;
	// EasyWiFi.Core.IntBackchannelType EasyWiFi.ClientControls.IntDataClientController::intData
	IntBackchannelType_t2726195169 * ___intData_3;
	// System.String EasyWiFi.ClientControls.IntDataClientController::intKey
	String_t* ___intKey_4;
	// System.Int32 EasyWiFi.ClientControls.IntDataClientController::value
	int32_t ___value_5;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(IntDataClientController_t1986771004, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_intData_3() { return static_cast<int32_t>(offsetof(IntDataClientController_t1986771004, ___intData_3)); }
	inline IntBackchannelType_t2726195169 * get_intData_3() const { return ___intData_3; }
	inline IntBackchannelType_t2726195169 ** get_address_of_intData_3() { return &___intData_3; }
	inline void set_intData_3(IntBackchannelType_t2726195169 * value)
	{
		___intData_3 = value;
		Il2CppCodeGenWriteBarrier(&___intData_3, value);
	}

	inline static int32_t get_offset_of_intKey_4() { return static_cast<int32_t>(offsetof(IntDataClientController_t1986771004, ___intKey_4)); }
	inline String_t* get_intKey_4() const { return ___intKey_4; }
	inline String_t** get_address_of_intKey_4() { return &___intKey_4; }
	inline void set_intKey_4(String_t* value)
	{
		___intKey_4 = value;
		Il2CppCodeGenWriteBarrier(&___intKey_4, value);
	}

	inline static int32_t get_offset_of_value_5() { return static_cast<int32_t>(offsetof(IntDataClientController_t1986771004, ___value_5)); }
	inline int32_t get_value_5() const { return ___value_5; }
	inline int32_t* get_address_of_value_5() { return &___value_5; }
	inline void set_value_5(int32_t value)
	{
		___value_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
