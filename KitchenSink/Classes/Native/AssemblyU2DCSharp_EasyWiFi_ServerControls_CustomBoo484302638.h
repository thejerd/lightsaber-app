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
// EasyWiFi.Core.BoolBackchannelType[]
struct BoolBackchannelTypeU5BU5D_t157843801;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ServerControls.CustomBoolDataServerController
struct  CustomBoolDataServerController_t484302638  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ServerControls.CustomBoolDataServerController::control
	String_t* ___control_2;
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER EasyWiFi.ServerControls.CustomBoolDataServerController::player
	int32_t ___player_3;
	// System.String EasyWiFi.ServerControls.CustomBoolDataServerController::notifyMethod
	String_t* ___notifyMethod_4;
	// EasyWiFi.Core.EasyWiFiConstants/CALL_TYPE EasyWiFi.ServerControls.CustomBoolDataServerController::callType
	int32_t ___callType_5;
	// EasyWiFi.Core.BoolBackchannelType[] EasyWiFi.ServerControls.CustomBoolDataServerController::boolController
	BoolBackchannelTypeU5BU5D_t157843801* ___boolController_6;
	// System.Int32 EasyWiFi.ServerControls.CustomBoolDataServerController::currentNumberControllers
	int32_t ___currentNumberControllers_7;
	// System.Boolean EasyWiFi.ServerControls.CustomBoolDataServerController::lastValue
	bool ___lastValue_8;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(CustomBoolDataServerController_t484302638, ___control_2)); }
	inline String_t* get_control_2() const { return ___control_2; }
	inline String_t** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(String_t* value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(CustomBoolDataServerController_t484302638, ___player_3)); }
	inline int32_t get_player_3() const { return ___player_3; }
	inline int32_t* get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(int32_t value)
	{
		___player_3 = value;
	}

	inline static int32_t get_offset_of_notifyMethod_4() { return static_cast<int32_t>(offsetof(CustomBoolDataServerController_t484302638, ___notifyMethod_4)); }
	inline String_t* get_notifyMethod_4() const { return ___notifyMethod_4; }
	inline String_t** get_address_of_notifyMethod_4() { return &___notifyMethod_4; }
	inline void set_notifyMethod_4(String_t* value)
	{
		___notifyMethod_4 = value;
		Il2CppCodeGenWriteBarrier(&___notifyMethod_4, value);
	}

	inline static int32_t get_offset_of_callType_5() { return static_cast<int32_t>(offsetof(CustomBoolDataServerController_t484302638, ___callType_5)); }
	inline int32_t get_callType_5() const { return ___callType_5; }
	inline int32_t* get_address_of_callType_5() { return &___callType_5; }
	inline void set_callType_5(int32_t value)
	{
		___callType_5 = value;
	}

	inline static int32_t get_offset_of_boolController_6() { return static_cast<int32_t>(offsetof(CustomBoolDataServerController_t484302638, ___boolController_6)); }
	inline BoolBackchannelTypeU5BU5D_t157843801* get_boolController_6() const { return ___boolController_6; }
	inline BoolBackchannelTypeU5BU5D_t157843801** get_address_of_boolController_6() { return &___boolController_6; }
	inline void set_boolController_6(BoolBackchannelTypeU5BU5D_t157843801* value)
	{
		___boolController_6 = value;
		Il2CppCodeGenWriteBarrier(&___boolController_6, value);
	}

	inline static int32_t get_offset_of_currentNumberControllers_7() { return static_cast<int32_t>(offsetof(CustomBoolDataServerController_t484302638, ___currentNumberControllers_7)); }
	inline int32_t get_currentNumberControllers_7() const { return ___currentNumberControllers_7; }
	inline int32_t* get_address_of_currentNumberControllers_7() { return &___currentNumberControllers_7; }
	inline void set_currentNumberControllers_7(int32_t value)
	{
		___currentNumberControllers_7 = value;
	}

	inline static int32_t get_offset_of_lastValue_8() { return static_cast<int32_t>(offsetof(CustomBoolDataServerController_t484302638, ___lastValue_8)); }
	inline bool get_lastValue_8() const { return ___lastValue_8; }
	inline bool* get_address_of_lastValue_8() { return &___lastValue_8; }
	inline void set_lastValue_8(bool value)
	{
		___lastValue_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
