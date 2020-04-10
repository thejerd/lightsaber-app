#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_EasyWiFi_Core_EasyWiFiConstants_3970436476.h"

// System.String
struct String_t;
// EasyWiFi.Core.StringBackchannelType
struct StringBackchannelType_t3173550963;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ClientBackchannels.StringClientBackchannel
struct  StringClientBackchannel_t3133755146  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientBackchannels.StringClientBackchannel::controlName
	String_t* ___controlName_2;
	// System.String EasyWiFi.ClientBackchannels.StringClientBackchannel::notifyMethod
	String_t* ___notifyMethod_3;
	// EasyWiFi.Core.EasyWiFiConstants/CALL_TYPE EasyWiFi.ClientBackchannels.StringClientBackchannel::callType
	int32_t ___callType_4;
	// EasyWiFi.Core.StringBackchannelType EasyWiFi.ClientBackchannels.StringClientBackchannel::stringBackchannel
	StringBackchannelType_t3173550963 * ___stringBackchannel_5;
	// System.String EasyWiFi.ClientBackchannels.StringClientBackchannel::backchannelKey
	String_t* ___backchannelKey_6;
	// System.String EasyWiFi.ClientBackchannels.StringClientBackchannel::lastValue
	String_t* ___lastValue_7;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(StringClientBackchannel_t3133755146, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_notifyMethod_3() { return static_cast<int32_t>(offsetof(StringClientBackchannel_t3133755146, ___notifyMethod_3)); }
	inline String_t* get_notifyMethod_3() const { return ___notifyMethod_3; }
	inline String_t** get_address_of_notifyMethod_3() { return &___notifyMethod_3; }
	inline void set_notifyMethod_3(String_t* value)
	{
		___notifyMethod_3 = value;
		Il2CppCodeGenWriteBarrier(&___notifyMethod_3, value);
	}

	inline static int32_t get_offset_of_callType_4() { return static_cast<int32_t>(offsetof(StringClientBackchannel_t3133755146, ___callType_4)); }
	inline int32_t get_callType_4() const { return ___callType_4; }
	inline int32_t* get_address_of_callType_4() { return &___callType_4; }
	inline void set_callType_4(int32_t value)
	{
		___callType_4 = value;
	}

	inline static int32_t get_offset_of_stringBackchannel_5() { return static_cast<int32_t>(offsetof(StringClientBackchannel_t3133755146, ___stringBackchannel_5)); }
	inline StringBackchannelType_t3173550963 * get_stringBackchannel_5() const { return ___stringBackchannel_5; }
	inline StringBackchannelType_t3173550963 ** get_address_of_stringBackchannel_5() { return &___stringBackchannel_5; }
	inline void set_stringBackchannel_5(StringBackchannelType_t3173550963 * value)
	{
		___stringBackchannel_5 = value;
		Il2CppCodeGenWriteBarrier(&___stringBackchannel_5, value);
	}

	inline static int32_t get_offset_of_backchannelKey_6() { return static_cast<int32_t>(offsetof(StringClientBackchannel_t3133755146, ___backchannelKey_6)); }
	inline String_t* get_backchannelKey_6() const { return ___backchannelKey_6; }
	inline String_t** get_address_of_backchannelKey_6() { return &___backchannelKey_6; }
	inline void set_backchannelKey_6(String_t* value)
	{
		___backchannelKey_6 = value;
		Il2CppCodeGenWriteBarrier(&___backchannelKey_6, value);
	}

	inline static int32_t get_offset_of_lastValue_7() { return static_cast<int32_t>(offsetof(StringClientBackchannel_t3133755146, ___lastValue_7)); }
	inline String_t* get_lastValue_7() const { return ___lastValue_7; }
	inline String_t** get_address_of_lastValue_7() { return &___lastValue_7; }
	inline void set_lastValue_7(String_t* value)
	{
		___lastValue_7 = value;
		Il2CppCodeGenWriteBarrier(&___lastValue_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
