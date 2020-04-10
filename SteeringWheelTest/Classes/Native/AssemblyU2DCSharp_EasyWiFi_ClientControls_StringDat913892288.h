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
// EasyWiFi.Core.StringBackchannelType
struct StringBackchannelType_t3173550963;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ClientControls.StringDataClientController
struct  StringDataClientController_t913892288  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientControls.StringDataClientController::controlName
	String_t* ___controlName_2;
	// EasyWiFi.Core.StringBackchannelType EasyWiFi.ClientControls.StringDataClientController::stringData
	StringBackchannelType_t3173550963 * ___stringData_3;
	// System.String EasyWiFi.ClientControls.StringDataClientController::stringKey
	String_t* ___stringKey_4;
	// System.String EasyWiFi.ClientControls.StringDataClientController::value
	String_t* ___value_5;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(StringDataClientController_t913892288, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_stringData_3() { return static_cast<int32_t>(offsetof(StringDataClientController_t913892288, ___stringData_3)); }
	inline StringBackchannelType_t3173550963 * get_stringData_3() const { return ___stringData_3; }
	inline StringBackchannelType_t3173550963 ** get_address_of_stringData_3() { return &___stringData_3; }
	inline void set_stringData_3(StringBackchannelType_t3173550963 * value)
	{
		___stringData_3 = value;
		Il2CppCodeGenWriteBarrier(&___stringData_3, value);
	}

	inline static int32_t get_offset_of_stringKey_4() { return static_cast<int32_t>(offsetof(StringDataClientController_t913892288, ___stringKey_4)); }
	inline String_t* get_stringKey_4() const { return ___stringKey_4; }
	inline String_t** get_address_of_stringKey_4() { return &___stringKey_4; }
	inline void set_stringKey_4(String_t* value)
	{
		___stringKey_4 = value;
		Il2CppCodeGenWriteBarrier(&___stringKey_4, value);
	}

	inline static int32_t get_offset_of_value_5() { return static_cast<int32_t>(offsetof(StringDataClientController_t913892288, ___value_5)); }
	inline String_t* get_value_5() const { return ___value_5; }
	inline String_t** get_address_of_value_5() { return &___value_5; }
	inline void set_value_5(String_t* value)
	{
		___value_5 = value;
		Il2CppCodeGenWriteBarrier(&___value_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
