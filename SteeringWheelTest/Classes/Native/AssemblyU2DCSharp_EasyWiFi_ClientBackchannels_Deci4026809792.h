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
// EasyWiFi.Core.DecimalBackchannelType
struct DecimalBackchannelType_t2415977533;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ClientBackchannels.DecimalClientBackchannel
struct  DecimalClientBackchannel_t4026809792  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientBackchannels.DecimalClientBackchannel::controlName
	String_t* ___controlName_2;
	// System.String EasyWiFi.ClientBackchannels.DecimalClientBackchannel::notifyMethod
	String_t* ___notifyMethod_3;
	// EasyWiFi.Core.DecimalBackchannelType EasyWiFi.ClientBackchannels.DecimalClientBackchannel::decimalBackchannel
	DecimalBackchannelType_t2415977533 * ___decimalBackchannel_4;
	// System.String EasyWiFi.ClientBackchannels.DecimalClientBackchannel::backchannelKey
	String_t* ___backchannelKey_5;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(DecimalClientBackchannel_t4026809792, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_notifyMethod_3() { return static_cast<int32_t>(offsetof(DecimalClientBackchannel_t4026809792, ___notifyMethod_3)); }
	inline String_t* get_notifyMethod_3() const { return ___notifyMethod_3; }
	inline String_t** get_address_of_notifyMethod_3() { return &___notifyMethod_3; }
	inline void set_notifyMethod_3(String_t* value)
	{
		___notifyMethod_3 = value;
		Il2CppCodeGenWriteBarrier(&___notifyMethod_3, value);
	}

	inline static int32_t get_offset_of_decimalBackchannel_4() { return static_cast<int32_t>(offsetof(DecimalClientBackchannel_t4026809792, ___decimalBackchannel_4)); }
	inline DecimalBackchannelType_t2415977533 * get_decimalBackchannel_4() const { return ___decimalBackchannel_4; }
	inline DecimalBackchannelType_t2415977533 ** get_address_of_decimalBackchannel_4() { return &___decimalBackchannel_4; }
	inline void set_decimalBackchannel_4(DecimalBackchannelType_t2415977533 * value)
	{
		___decimalBackchannel_4 = value;
		Il2CppCodeGenWriteBarrier(&___decimalBackchannel_4, value);
	}

	inline static int32_t get_offset_of_backchannelKey_5() { return static_cast<int32_t>(offsetof(DecimalClientBackchannel_t4026809792, ___backchannelKey_5)); }
	inline String_t* get_backchannelKey_5() const { return ___backchannelKey_5; }
	inline String_t** get_address_of_backchannelKey_5() { return &___backchannelKey_5; }
	inline void set_backchannelKey_5(String_t* value)
	{
		___backchannelKey_5 = value;
		Il2CppCodeGenWriteBarrier(&___backchannelKey_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
