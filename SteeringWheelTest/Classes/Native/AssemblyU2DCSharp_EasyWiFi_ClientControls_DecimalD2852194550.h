#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_Decimal724701077.h"

// System.String
struct String_t;
// EasyWiFi.Core.DecimalBackchannelType
struct DecimalBackchannelType_t2415977533;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ClientControls.DecimalDataClientController
struct  DecimalDataClientController_t2852194550  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientControls.DecimalDataClientController::controlName
	String_t* ___controlName_2;
	// EasyWiFi.Core.DecimalBackchannelType EasyWiFi.ClientControls.DecimalDataClientController::decimalData
	DecimalBackchannelType_t2415977533 * ___decimalData_3;
	// System.String EasyWiFi.ClientControls.DecimalDataClientController::decimalKey
	String_t* ___decimalKey_4;
	// System.Decimal EasyWiFi.ClientControls.DecimalDataClientController::value
	Decimal_t724701077  ___value_5;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(DecimalDataClientController_t2852194550, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_decimalData_3() { return static_cast<int32_t>(offsetof(DecimalDataClientController_t2852194550, ___decimalData_3)); }
	inline DecimalBackchannelType_t2415977533 * get_decimalData_3() const { return ___decimalData_3; }
	inline DecimalBackchannelType_t2415977533 ** get_address_of_decimalData_3() { return &___decimalData_3; }
	inline void set_decimalData_3(DecimalBackchannelType_t2415977533 * value)
	{
		___decimalData_3 = value;
		Il2CppCodeGenWriteBarrier(&___decimalData_3, value);
	}

	inline static int32_t get_offset_of_decimalKey_4() { return static_cast<int32_t>(offsetof(DecimalDataClientController_t2852194550, ___decimalKey_4)); }
	inline String_t* get_decimalKey_4() const { return ___decimalKey_4; }
	inline String_t** get_address_of_decimalKey_4() { return &___decimalKey_4; }
	inline void set_decimalKey_4(String_t* value)
	{
		___decimalKey_4 = value;
		Il2CppCodeGenWriteBarrier(&___decimalKey_4, value);
	}

	inline static int32_t get_offset_of_value_5() { return static_cast<int32_t>(offsetof(DecimalDataClientController_t2852194550, ___value_5)); }
	inline Decimal_t724701077  get_value_5() const { return ___value_5; }
	inline Decimal_t724701077 * get_address_of_value_5() { return &___value_5; }
	inline void set_value_5(Decimal_t724701077  value)
	{
		___value_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
