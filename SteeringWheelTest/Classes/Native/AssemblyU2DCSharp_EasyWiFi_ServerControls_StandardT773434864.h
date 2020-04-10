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
// EasyWiFi.Core.TouchpadControllerType[]
struct TouchpadControllerTypeU5BU5D_t2084467643;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ServerControls.StandardTouchpadServerController
struct  StandardTouchpadServerController_t773434864  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ServerControls.StandardTouchpadServerController::control
	String_t* ___control_2;
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER EasyWiFi.ServerControls.StandardTouchpadServerController::player
	int32_t ___player_3;
	// EasyWiFi.Core.EasyWiFiConstants/AXIS EasyWiFi.ServerControls.StandardTouchpadServerController::touchpadHorizontal
	int32_t ___touchpadHorizontal_4;
	// EasyWiFi.Core.EasyWiFiConstants/AXIS EasyWiFi.ServerControls.StandardTouchpadServerController::touchpadVertical
	int32_t ___touchpadVertical_5;
	// EasyWiFi.Core.EasyWiFiConstants/ACTION_TYPE EasyWiFi.ServerControls.StandardTouchpadServerController::action
	int32_t ___action_6;
	// System.Single EasyWiFi.ServerControls.StandardTouchpadServerController::sensitivity
	float ___sensitivity_7;
	// EasyWiFi.Core.TouchpadControllerType[] EasyWiFi.ServerControls.StandardTouchpadServerController::touchpad
	TouchpadControllerTypeU5BU5D_t2084467643* ___touchpad_8;
	// System.Int32 EasyWiFi.ServerControls.StandardTouchpadServerController::currentNumberControllers
	int32_t ___currentNumberControllers_9;
	// UnityEngine.Vector3 EasyWiFi.ServerControls.StandardTouchpadServerController::actionVector3
	Vector3_t2243707580  ___actionVector3_10;
	// System.Single EasyWiFi.ServerControls.StandardTouchpadServerController::horizontal
	float ___horizontal_11;
	// System.Single EasyWiFi.ServerControls.StandardTouchpadServerController::vertical
	float ___vertical_12;
	// System.Boolean EasyWiFi.ServerControls.StandardTouchpadServerController::isTouching
	bool ___isTouching_13;
	// System.Single EasyWiFi.ServerControls.StandardTouchpadServerController::lastFrameHorizontal
	float ___lastFrameHorizontal_14;
	// System.Single EasyWiFi.ServerControls.StandardTouchpadServerController::lastFrameVertical
	float ___lastFrameVertical_15;
	// System.Boolean EasyWiFi.ServerControls.StandardTouchpadServerController::lastFrameIsTouching
	bool ___lastFrameIsTouching_16;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(StandardTouchpadServerController_t773434864, ___control_2)); }
	inline String_t* get_control_2() const { return ___control_2; }
	inline String_t** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(String_t* value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(StandardTouchpadServerController_t773434864, ___player_3)); }
	inline int32_t get_player_3() const { return ___player_3; }
	inline int32_t* get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(int32_t value)
	{
		___player_3 = value;
	}

	inline static int32_t get_offset_of_touchpadHorizontal_4() { return static_cast<int32_t>(offsetof(StandardTouchpadServerController_t773434864, ___touchpadHorizontal_4)); }
	inline int32_t get_touchpadHorizontal_4() const { return ___touchpadHorizontal_4; }
	inline int32_t* get_address_of_touchpadHorizontal_4() { return &___touchpadHorizontal_4; }
	inline void set_touchpadHorizontal_4(int32_t value)
	{
		___touchpadHorizontal_4 = value;
	}

	inline static int32_t get_offset_of_touchpadVertical_5() { return static_cast<int32_t>(offsetof(StandardTouchpadServerController_t773434864, ___touchpadVertical_5)); }
	inline int32_t get_touchpadVertical_5() const { return ___touchpadVertical_5; }
	inline int32_t* get_address_of_touchpadVertical_5() { return &___touchpadVertical_5; }
	inline void set_touchpadVertical_5(int32_t value)
	{
		___touchpadVertical_5 = value;
	}

	inline static int32_t get_offset_of_action_6() { return static_cast<int32_t>(offsetof(StandardTouchpadServerController_t773434864, ___action_6)); }
	inline int32_t get_action_6() const { return ___action_6; }
	inline int32_t* get_address_of_action_6() { return &___action_6; }
	inline void set_action_6(int32_t value)
	{
		___action_6 = value;
	}

	inline static int32_t get_offset_of_sensitivity_7() { return static_cast<int32_t>(offsetof(StandardTouchpadServerController_t773434864, ___sensitivity_7)); }
	inline float get_sensitivity_7() const { return ___sensitivity_7; }
	inline float* get_address_of_sensitivity_7() { return &___sensitivity_7; }
	inline void set_sensitivity_7(float value)
	{
		___sensitivity_7 = value;
	}

	inline static int32_t get_offset_of_touchpad_8() { return static_cast<int32_t>(offsetof(StandardTouchpadServerController_t773434864, ___touchpad_8)); }
	inline TouchpadControllerTypeU5BU5D_t2084467643* get_touchpad_8() const { return ___touchpad_8; }
	inline TouchpadControllerTypeU5BU5D_t2084467643** get_address_of_touchpad_8() { return &___touchpad_8; }
	inline void set_touchpad_8(TouchpadControllerTypeU5BU5D_t2084467643* value)
	{
		___touchpad_8 = value;
		Il2CppCodeGenWriteBarrier(&___touchpad_8, value);
	}

	inline static int32_t get_offset_of_currentNumberControllers_9() { return static_cast<int32_t>(offsetof(StandardTouchpadServerController_t773434864, ___currentNumberControllers_9)); }
	inline int32_t get_currentNumberControllers_9() const { return ___currentNumberControllers_9; }
	inline int32_t* get_address_of_currentNumberControllers_9() { return &___currentNumberControllers_9; }
	inline void set_currentNumberControllers_9(int32_t value)
	{
		___currentNumberControllers_9 = value;
	}

	inline static int32_t get_offset_of_actionVector3_10() { return static_cast<int32_t>(offsetof(StandardTouchpadServerController_t773434864, ___actionVector3_10)); }
	inline Vector3_t2243707580  get_actionVector3_10() const { return ___actionVector3_10; }
	inline Vector3_t2243707580 * get_address_of_actionVector3_10() { return &___actionVector3_10; }
	inline void set_actionVector3_10(Vector3_t2243707580  value)
	{
		___actionVector3_10 = value;
	}

	inline static int32_t get_offset_of_horizontal_11() { return static_cast<int32_t>(offsetof(StandardTouchpadServerController_t773434864, ___horizontal_11)); }
	inline float get_horizontal_11() const { return ___horizontal_11; }
	inline float* get_address_of_horizontal_11() { return &___horizontal_11; }
	inline void set_horizontal_11(float value)
	{
		___horizontal_11 = value;
	}

	inline static int32_t get_offset_of_vertical_12() { return static_cast<int32_t>(offsetof(StandardTouchpadServerController_t773434864, ___vertical_12)); }
	inline float get_vertical_12() const { return ___vertical_12; }
	inline float* get_address_of_vertical_12() { return &___vertical_12; }
	inline void set_vertical_12(float value)
	{
		___vertical_12 = value;
	}

	inline static int32_t get_offset_of_isTouching_13() { return static_cast<int32_t>(offsetof(StandardTouchpadServerController_t773434864, ___isTouching_13)); }
	inline bool get_isTouching_13() const { return ___isTouching_13; }
	inline bool* get_address_of_isTouching_13() { return &___isTouching_13; }
	inline void set_isTouching_13(bool value)
	{
		___isTouching_13 = value;
	}

	inline static int32_t get_offset_of_lastFrameHorizontal_14() { return static_cast<int32_t>(offsetof(StandardTouchpadServerController_t773434864, ___lastFrameHorizontal_14)); }
	inline float get_lastFrameHorizontal_14() const { return ___lastFrameHorizontal_14; }
	inline float* get_address_of_lastFrameHorizontal_14() { return &___lastFrameHorizontal_14; }
	inline void set_lastFrameHorizontal_14(float value)
	{
		___lastFrameHorizontal_14 = value;
	}

	inline static int32_t get_offset_of_lastFrameVertical_15() { return static_cast<int32_t>(offsetof(StandardTouchpadServerController_t773434864, ___lastFrameVertical_15)); }
	inline float get_lastFrameVertical_15() const { return ___lastFrameVertical_15; }
	inline float* get_address_of_lastFrameVertical_15() { return &___lastFrameVertical_15; }
	inline void set_lastFrameVertical_15(float value)
	{
		___lastFrameVertical_15 = value;
	}

	inline static int32_t get_offset_of_lastFrameIsTouching_16() { return static_cast<int32_t>(offsetof(StandardTouchpadServerController_t773434864, ___lastFrameIsTouching_16)); }
	inline bool get_lastFrameIsTouching_16() const { return ___lastFrameIsTouching_16; }
	inline bool* get_address_of_lastFrameIsTouching_16() { return &___lastFrameIsTouching_16; }
	inline void set_lastFrameIsTouching_16(bool value)
	{
		___lastFrameIsTouching_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
