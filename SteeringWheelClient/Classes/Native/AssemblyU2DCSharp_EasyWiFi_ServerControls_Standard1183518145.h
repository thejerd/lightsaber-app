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
#include "AssemblyU2DCSharp_EasyWiFi_Core_EasyWiFiConstants_1791157770.h"
#include "AssemblyU2DCSharp_EasyWiFi_Core_EasyWiFiConstants_A966232690.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.String
struct String_t;
// EasyWiFi.Core.DpadControllerType[]
struct DpadControllerTypeU5BU5D_t4098392638;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ServerControls.StandardDpadServerController
struct  StandardDpadServerController_t1183518145  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ServerControls.StandardDpadServerController::control
	String_t* ___control_2;
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER EasyWiFi.ServerControls.StandardDpadServerController::player
	int32_t ___player_3;
	// EasyWiFi.Core.EasyWiFiConstants/AXIS EasyWiFi.ServerControls.StandardDpadServerController::dPadHorizontal
	int32_t ___dPadHorizontal_4;
	// EasyWiFi.Core.EasyWiFiConstants/AXIS EasyWiFi.ServerControls.StandardDpadServerController::dPadVertical
	int32_t ___dPadVertical_5;
	// EasyWiFi.Core.EasyWiFiConstants/ACTION_TYPE EasyWiFi.ServerControls.StandardDpadServerController::action
	int32_t ___action_6;
	// System.Single EasyWiFi.ServerControls.StandardDpadServerController::sensitivity
	float ___sensitivity_7;
	// EasyWiFi.Core.DpadControllerType[] EasyWiFi.ServerControls.StandardDpadServerController::dPad
	DpadControllerTypeU5BU5D_t4098392638* ___dPad_8;
	// System.Int32 EasyWiFi.ServerControls.StandardDpadServerController::currentNumberControllers
	int32_t ___currentNumberControllers_9;
	// UnityEngine.Vector3 EasyWiFi.ServerControls.StandardDpadServerController::actionVector3
	Vector3_t2243707580  ___actionVector3_10;
	// System.Single EasyWiFi.ServerControls.StandardDpadServerController::horizontal
	float ___horizontal_11;
	// System.Single EasyWiFi.ServerControls.StandardDpadServerController::vertical
	float ___vertical_12;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(StandardDpadServerController_t1183518145, ___control_2)); }
	inline String_t* get_control_2() const { return ___control_2; }
	inline String_t** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(String_t* value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(StandardDpadServerController_t1183518145, ___player_3)); }
	inline int32_t get_player_3() const { return ___player_3; }
	inline int32_t* get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(int32_t value)
	{
		___player_3 = value;
	}

	inline static int32_t get_offset_of_dPadHorizontal_4() { return static_cast<int32_t>(offsetof(StandardDpadServerController_t1183518145, ___dPadHorizontal_4)); }
	inline int32_t get_dPadHorizontal_4() const { return ___dPadHorizontal_4; }
	inline int32_t* get_address_of_dPadHorizontal_4() { return &___dPadHorizontal_4; }
	inline void set_dPadHorizontal_4(int32_t value)
	{
		___dPadHorizontal_4 = value;
	}

	inline static int32_t get_offset_of_dPadVertical_5() { return static_cast<int32_t>(offsetof(StandardDpadServerController_t1183518145, ___dPadVertical_5)); }
	inline int32_t get_dPadVertical_5() const { return ___dPadVertical_5; }
	inline int32_t* get_address_of_dPadVertical_5() { return &___dPadVertical_5; }
	inline void set_dPadVertical_5(int32_t value)
	{
		___dPadVertical_5 = value;
	}

	inline static int32_t get_offset_of_action_6() { return static_cast<int32_t>(offsetof(StandardDpadServerController_t1183518145, ___action_6)); }
	inline int32_t get_action_6() const { return ___action_6; }
	inline int32_t* get_address_of_action_6() { return &___action_6; }
	inline void set_action_6(int32_t value)
	{
		___action_6 = value;
	}

	inline static int32_t get_offset_of_sensitivity_7() { return static_cast<int32_t>(offsetof(StandardDpadServerController_t1183518145, ___sensitivity_7)); }
	inline float get_sensitivity_7() const { return ___sensitivity_7; }
	inline float* get_address_of_sensitivity_7() { return &___sensitivity_7; }
	inline void set_sensitivity_7(float value)
	{
		___sensitivity_7 = value;
	}

	inline static int32_t get_offset_of_dPad_8() { return static_cast<int32_t>(offsetof(StandardDpadServerController_t1183518145, ___dPad_8)); }
	inline DpadControllerTypeU5BU5D_t4098392638* get_dPad_8() const { return ___dPad_8; }
	inline DpadControllerTypeU5BU5D_t4098392638** get_address_of_dPad_8() { return &___dPad_8; }
	inline void set_dPad_8(DpadControllerTypeU5BU5D_t4098392638* value)
	{
		___dPad_8 = value;
		Il2CppCodeGenWriteBarrier(&___dPad_8, value);
	}

	inline static int32_t get_offset_of_currentNumberControllers_9() { return static_cast<int32_t>(offsetof(StandardDpadServerController_t1183518145, ___currentNumberControllers_9)); }
	inline int32_t get_currentNumberControllers_9() const { return ___currentNumberControllers_9; }
	inline int32_t* get_address_of_currentNumberControllers_9() { return &___currentNumberControllers_9; }
	inline void set_currentNumberControllers_9(int32_t value)
	{
		___currentNumberControllers_9 = value;
	}

	inline static int32_t get_offset_of_actionVector3_10() { return static_cast<int32_t>(offsetof(StandardDpadServerController_t1183518145, ___actionVector3_10)); }
	inline Vector3_t2243707580  get_actionVector3_10() const { return ___actionVector3_10; }
	inline Vector3_t2243707580 * get_address_of_actionVector3_10() { return &___actionVector3_10; }
	inline void set_actionVector3_10(Vector3_t2243707580  value)
	{
		___actionVector3_10 = value;
	}

	inline static int32_t get_offset_of_horizontal_11() { return static_cast<int32_t>(offsetof(StandardDpadServerController_t1183518145, ___horizontal_11)); }
	inline float get_horizontal_11() const { return ___horizontal_11; }
	inline float* get_address_of_horizontal_11() { return &___horizontal_11; }
	inline void set_horizontal_11(float value)
	{
		___horizontal_11 = value;
	}

	inline static int32_t get_offset_of_vertical_12() { return static_cast<int32_t>(offsetof(StandardDpadServerController_t1183518145, ___vertical_12)); }
	inline float get_vertical_12() const { return ___vertical_12; }
	inline float* get_address_of_vertical_12() { return &___vertical_12; }
	inline void set_vertical_12(float value)
	{
		___vertical_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
