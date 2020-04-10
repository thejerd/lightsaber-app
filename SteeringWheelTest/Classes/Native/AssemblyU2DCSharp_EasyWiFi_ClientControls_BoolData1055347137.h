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
// EasyWiFi.Core.BoolBackchannelType
struct BoolBackchannelType_t2882144136;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ClientControls.BoolDataClientController
struct  BoolDataClientController_t1055347137  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientControls.BoolDataClientController::controlName
	String_t* ___controlName_2;
	// EasyWiFi.Core.BoolBackchannelType EasyWiFi.ClientControls.BoolDataClientController::boolData
	BoolBackchannelType_t2882144136 * ___boolData_3;
	// System.String EasyWiFi.ClientControls.BoolDataClientController::boolKey
	String_t* ___boolKey_4;
	// System.Boolean EasyWiFi.ClientControls.BoolDataClientController::value
	bool ___value_5;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(BoolDataClientController_t1055347137, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_boolData_3() { return static_cast<int32_t>(offsetof(BoolDataClientController_t1055347137, ___boolData_3)); }
	inline BoolBackchannelType_t2882144136 * get_boolData_3() const { return ___boolData_3; }
	inline BoolBackchannelType_t2882144136 ** get_address_of_boolData_3() { return &___boolData_3; }
	inline void set_boolData_3(BoolBackchannelType_t2882144136 * value)
	{
		___boolData_3 = value;
		Il2CppCodeGenWriteBarrier(&___boolData_3, value);
	}

	inline static int32_t get_offset_of_boolKey_4() { return static_cast<int32_t>(offsetof(BoolDataClientController_t1055347137, ___boolKey_4)); }
	inline String_t* get_boolKey_4() const { return ___boolKey_4; }
	inline String_t** get_address_of_boolKey_4() { return &___boolKey_4; }
	inline void set_boolKey_4(String_t* value)
	{
		___boolKey_4 = value;
		Il2CppCodeGenWriteBarrier(&___boolKey_4, value);
	}

	inline static int32_t get_offset_of_value_5() { return static_cast<int32_t>(offsetof(BoolDataClientController_t1055347137, ___value_5)); }
	inline bool get_value_5() const { return ___value_5; }
	inline bool* get_address_of_value_5() { return &___value_5; }
	inline void set_value_5(bool value)
	{
		___value_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
