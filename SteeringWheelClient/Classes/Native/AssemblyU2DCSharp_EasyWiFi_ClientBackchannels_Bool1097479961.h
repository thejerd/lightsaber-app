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
// EasyWiFi.Core.BoolBackchannelType
struct BoolBackchannelType_t2882144136;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ClientBackchannels.BoolClientBackchannel
struct  BoolClientBackchannel_t1097479961  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientBackchannels.BoolClientBackchannel::controlName
	String_t* ___controlName_2;
	// System.String EasyWiFi.ClientBackchannels.BoolClientBackchannel::notifyMethod
	String_t* ___notifyMethod_3;
	// EasyWiFi.Core.EasyWiFiConstants/CALL_TYPE EasyWiFi.ClientBackchannels.BoolClientBackchannel::callType
	int32_t ___callType_4;
	// EasyWiFi.Core.BoolBackchannelType EasyWiFi.ClientBackchannels.BoolClientBackchannel::boolBackchannel
	BoolBackchannelType_t2882144136 * ___boolBackchannel_5;
	// System.String EasyWiFi.ClientBackchannels.BoolClientBackchannel::backchannelKey
	String_t* ___backchannelKey_6;
	// System.Boolean EasyWiFi.ClientBackchannels.BoolClientBackchannel::lastValue
	bool ___lastValue_7;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(BoolClientBackchannel_t1097479961, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_notifyMethod_3() { return static_cast<int32_t>(offsetof(BoolClientBackchannel_t1097479961, ___notifyMethod_3)); }
	inline String_t* get_notifyMethod_3() const { return ___notifyMethod_3; }
	inline String_t** get_address_of_notifyMethod_3() { return &___notifyMethod_3; }
	inline void set_notifyMethod_3(String_t* value)
	{
		___notifyMethod_3 = value;
		Il2CppCodeGenWriteBarrier(&___notifyMethod_3, value);
	}

	inline static int32_t get_offset_of_callType_4() { return static_cast<int32_t>(offsetof(BoolClientBackchannel_t1097479961, ___callType_4)); }
	inline int32_t get_callType_4() const { return ___callType_4; }
	inline int32_t* get_address_of_callType_4() { return &___callType_4; }
	inline void set_callType_4(int32_t value)
	{
		___callType_4 = value;
	}

	inline static int32_t get_offset_of_boolBackchannel_5() { return static_cast<int32_t>(offsetof(BoolClientBackchannel_t1097479961, ___boolBackchannel_5)); }
	inline BoolBackchannelType_t2882144136 * get_boolBackchannel_5() const { return ___boolBackchannel_5; }
	inline BoolBackchannelType_t2882144136 ** get_address_of_boolBackchannel_5() { return &___boolBackchannel_5; }
	inline void set_boolBackchannel_5(BoolBackchannelType_t2882144136 * value)
	{
		___boolBackchannel_5 = value;
		Il2CppCodeGenWriteBarrier(&___boolBackchannel_5, value);
	}

	inline static int32_t get_offset_of_backchannelKey_6() { return static_cast<int32_t>(offsetof(BoolClientBackchannel_t1097479961, ___backchannelKey_6)); }
	inline String_t* get_backchannelKey_6() const { return ___backchannelKey_6; }
	inline String_t** get_address_of_backchannelKey_6() { return &___backchannelKey_6; }
	inline void set_backchannelKey_6(String_t* value)
	{
		___backchannelKey_6 = value;
		Il2CppCodeGenWriteBarrier(&___backchannelKey_6, value);
	}

	inline static int32_t get_offset_of_lastValue_7() { return static_cast<int32_t>(offsetof(BoolClientBackchannel_t1097479961, ___lastValue_7)); }
	inline bool get_lastValue_7() const { return ___lastValue_7; }
	inline bool* get_address_of_lastValue_7() { return &___lastValue_7; }
	inline void set_lastValue_7(bool value)
	{
		___lastValue_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
