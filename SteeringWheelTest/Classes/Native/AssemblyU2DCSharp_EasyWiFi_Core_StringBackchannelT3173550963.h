#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_EasyWiFi_Core_BaseControllerType1678381931.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.StringBackchannelType
struct  StringBackchannelType_t3173550963  : public BaseControllerType_t1678381931
{
public:
	// System.String EasyWiFi.Core.StringBackchannelType::STRING_VALUE
	String_t* ___STRING_VALUE_9;

public:
	inline static int32_t get_offset_of_STRING_VALUE_9() { return static_cast<int32_t>(offsetof(StringBackchannelType_t3173550963, ___STRING_VALUE_9)); }
	inline String_t* get_STRING_VALUE_9() const { return ___STRING_VALUE_9; }
	inline String_t** get_address_of_STRING_VALUE_9() { return &___STRING_VALUE_9; }
	inline void set_STRING_VALUE_9(String_t* value)
	{
		___STRING_VALUE_9 = value;
		Il2CppCodeGenWriteBarrier(&___STRING_VALUE_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
