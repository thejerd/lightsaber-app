#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_EasyWiFi_Core_EasyWiFiConstants_4244905158.h"
#include "AssemblyU2DCSharp_EasyWiFi_Core_EasyWiFiConstants_3970436476.h"

// System.String
struct String_t;
// EasyWiFi.Core.StringBackchannelType[]
struct StringBackchannelTypeU5BU5D_t1010569570;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ServerControls.CustomStringDataServerController
struct  CustomStringDataServerController_t979017321  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ServerControls.CustomStringDataServerController::control
	String_t* ___control_2;
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER EasyWiFi.ServerControls.CustomStringDataServerController::player
	int32_t ___player_3;
	// System.String EasyWiFi.ServerControls.CustomStringDataServerController::notifyMethod
	String_t* ___notifyMethod_4;
	// EasyWiFi.Core.EasyWiFiConstants/CALL_TYPE EasyWiFi.ServerControls.CustomStringDataServerController::callType
	int32_t ___callType_5;
	// EasyWiFi.Core.StringBackchannelType[] EasyWiFi.ServerControls.CustomStringDataServerController::stringController
	StringBackchannelTypeU5BU5D_t1010569570* ___stringController_6;
	// System.Int32 EasyWiFi.ServerControls.CustomStringDataServerController::currentNumberControllers
	int32_t ___currentNumberControllers_7;
	// System.String EasyWiFi.ServerControls.CustomStringDataServerController::lastValue
	String_t* ___lastValue_8;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(CustomStringDataServerController_t979017321, ___control_2)); }
	inline String_t* get_control_2() const { return ___control_2; }
	inline String_t** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(String_t* value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(CustomStringDataServerController_t979017321, ___player_3)); }
	inline int32_t get_player_3() const { return ___player_3; }
	inline int32_t* get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(int32_t value)
	{
		___player_3 = value;
	}

	inline static int32_t get_offset_of_notifyMethod_4() { return static_cast<int32_t>(offsetof(CustomStringDataServerController_t979017321, ___notifyMethod_4)); }
	inline String_t* get_notifyMethod_4() const { return ___notifyMethod_4; }
	inline String_t** get_address_of_notifyMethod_4() { return &___notifyMethod_4; }
	inline void set_notifyMethod_4(String_t* value)
	{
		___notifyMethod_4 = value;
		Il2CppCodeGenWriteBarrier(&___notifyMethod_4, value);
	}

	inline static int32_t get_offset_of_callType_5() { return static_cast<int32_t>(offsetof(CustomStringDataServerController_t979017321, ___callType_5)); }
	inline int32_t get_callType_5() const { return ___callType_5; }
	inline int32_t* get_address_of_callType_5() { return &___callType_5; }
	inline void set_callType_5(int32_t value)
	{
		___callType_5 = value;
	}

	inline static int32_t get_offset_of_stringController_6() { return static_cast<int32_t>(offsetof(CustomStringDataServerController_t979017321, ___stringController_6)); }
	inline StringBackchannelTypeU5BU5D_t1010569570* get_stringController_6() const { return ___stringController_6; }
	inline StringBackchannelTypeU5BU5D_t1010569570** get_address_of_stringController_6() { return &___stringController_6; }
	inline void set_stringController_6(StringBackchannelTypeU5BU5D_t1010569570* value)
	{
		___stringController_6 = value;
		Il2CppCodeGenWriteBarrier(&___stringController_6, value);
	}

	inline static int32_t get_offset_of_currentNumberControllers_7() { return static_cast<int32_t>(offsetof(CustomStringDataServerController_t979017321, ___currentNumberControllers_7)); }
	inline int32_t get_currentNumberControllers_7() const { return ___currentNumberControllers_7; }
	inline int32_t* get_address_of_currentNumberControllers_7() { return &___currentNumberControllers_7; }
	inline void set_currentNumberControllers_7(int32_t value)
	{
		___currentNumberControllers_7 = value;
	}

	inline static int32_t get_offset_of_lastValue_8() { return static_cast<int32_t>(offsetof(CustomStringDataServerController_t979017321, ___lastValue_8)); }
	inline String_t* get_lastValue_8() const { return ___lastValue_8; }
	inline String_t** get_address_of_lastValue_8() { return &___lastValue_8; }
	inline void set_lastValue_8(String_t* value)
	{
		___lastValue_8 = value;
		Il2CppCodeGenWriteBarrier(&___lastValue_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
