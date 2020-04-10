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

// EasyWiFi.ClientBackchannels.DoubleClientBackchannel
struct  DoubleClientBackchannel_t4278032086  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientBackchannels.DoubleClientBackchannel::controlName
	String_t* ___controlName_2;
	// System.String EasyWiFi.ClientBackchannels.DoubleClientBackchannel::notifyMethod
	String_t* ___notifyMethod_3;
	// EasyWiFi.Core.DoubleBackchannelType EasyWiFi.ClientBackchannels.DoubleClientBackchannel::doubleBackchannel
	DoubleBackchannelType_t1312126943 * ___doubleBackchannel_4;
	// System.String EasyWiFi.ClientBackchannels.DoubleClientBackchannel::backchannelKey
	String_t* ___backchannelKey_5;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(DoubleClientBackchannel_t4278032086, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_notifyMethod_3() { return static_cast<int32_t>(offsetof(DoubleClientBackchannel_t4278032086, ___notifyMethod_3)); }
	inline String_t* get_notifyMethod_3() const { return ___notifyMethod_3; }
	inline String_t** get_address_of_notifyMethod_3() { return &___notifyMethod_3; }
	inline void set_notifyMethod_3(String_t* value)
	{
		___notifyMethod_3 = value;
		Il2CppCodeGenWriteBarrier(&___notifyMethod_3, value);
	}

	inline static int32_t get_offset_of_doubleBackchannel_4() { return static_cast<int32_t>(offsetof(DoubleClientBackchannel_t4278032086, ___doubleBackchannel_4)); }
	inline DoubleBackchannelType_t1312126943 * get_doubleBackchannel_4() const { return ___doubleBackchannel_4; }
	inline DoubleBackchannelType_t1312126943 ** get_address_of_doubleBackchannel_4() { return &___doubleBackchannel_4; }
	inline void set_doubleBackchannel_4(DoubleBackchannelType_t1312126943 * value)
	{
		___doubleBackchannel_4 = value;
		Il2CppCodeGenWriteBarrier(&___doubleBackchannel_4, value);
	}

	inline static int32_t get_offset_of_backchannelKey_5() { return static_cast<int32_t>(offsetof(DoubleClientBackchannel_t4278032086, ___backchannelKey_5)); }
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
