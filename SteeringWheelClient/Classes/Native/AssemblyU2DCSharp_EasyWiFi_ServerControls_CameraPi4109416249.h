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
#include "AssemblyU2DCSharp_EasyWiFi_Core_EasyWiFiConstants_1360716848.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.String
struct String_t;
// EasyWiFi.Core.PinchZoomTouchpadControllerType[]
struct PinchZoomTouchpadControllerTypeU5BU5D_t2015650104;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ServerControls.CameraPinchZoomTouchpadServerController
struct  CameraPinchZoomTouchpadServerController_t4109416249  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ServerControls.CameraPinchZoomTouchpadServerController::control
	String_t* ___control_2;
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER EasyWiFi.ServerControls.CameraPinchZoomTouchpadServerController::player
	int32_t ___player_3;
	// EasyWiFi.Core.EasyWiFiConstants/SECOND_TOUCH_TYPE EasyWiFi.ServerControls.CameraPinchZoomTouchpadServerController::secondTouchType
	int32_t ___secondTouchType_4;
	// System.Single EasyWiFi.ServerControls.CameraPinchZoomTouchpadServerController::panSensitivity
	float ___panSensitivity_5;
	// System.Single EasyWiFi.ServerControls.CameraPinchZoomTouchpadServerController::tiltSensitivity
	float ___tiltSensitivity_6;
	// System.Single EasyWiFi.ServerControls.CameraPinchZoomTouchpadServerController::zoomSensitivity
	float ___zoomSensitivity_7;
	// EasyWiFi.Core.PinchZoomTouchpadControllerType[] EasyWiFi.ServerControls.CameraPinchZoomTouchpadServerController::touchpad
	PinchZoomTouchpadControllerTypeU5BU5D_t2015650104* ___touchpad_8;
	// System.Int32 EasyWiFi.ServerControls.CameraPinchZoomTouchpadServerController::currentNumberControllers
	int32_t ___currentNumberControllers_9;
	// UnityEngine.Vector3 EasyWiFi.ServerControls.CameraPinchZoomTouchpadServerController::actionVector3
	Vector3_t2243707580  ___actionVector3_10;
	// System.Single EasyWiFi.ServerControls.CameraPinchZoomTouchpadServerController::horizontal
	float ___horizontal_11;
	// System.Single EasyWiFi.ServerControls.CameraPinchZoomTouchpadServerController::vertical
	float ___vertical_12;
	// System.Single EasyWiFi.ServerControls.CameraPinchZoomTouchpadServerController::zoomFactor
	float ___zoomFactor_13;
	// System.Int32 EasyWiFi.ServerControls.CameraPinchZoomTouchpadServerController::numTouches
	int32_t ___numTouches_14;
	// System.Single EasyWiFi.ServerControls.CameraPinchZoomTouchpadServerController::lastFrameHorizontal
	float ___lastFrameHorizontal_15;
	// System.Single EasyWiFi.ServerControls.CameraPinchZoomTouchpadServerController::lastFrameVertical
	float ___lastFrameVertical_16;
	// System.Int32 EasyWiFi.ServerControls.CameraPinchZoomTouchpadServerController::lastFrameNumTouches
	int32_t ___lastFrameNumTouches_17;
	// System.Single EasyWiFi.ServerControls.CameraPinchZoomTouchpadServerController::lastFrameZoomFactor
	float ___lastFrameZoomFactor_18;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(CameraPinchZoomTouchpadServerController_t4109416249, ___control_2)); }
	inline String_t* get_control_2() const { return ___control_2; }
	inline String_t** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(String_t* value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(CameraPinchZoomTouchpadServerController_t4109416249, ___player_3)); }
	inline int32_t get_player_3() const { return ___player_3; }
	inline int32_t* get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(int32_t value)
	{
		___player_3 = value;
	}

	inline static int32_t get_offset_of_secondTouchType_4() { return static_cast<int32_t>(offsetof(CameraPinchZoomTouchpadServerController_t4109416249, ___secondTouchType_4)); }
	inline int32_t get_secondTouchType_4() const { return ___secondTouchType_4; }
	inline int32_t* get_address_of_secondTouchType_4() { return &___secondTouchType_4; }
	inline void set_secondTouchType_4(int32_t value)
	{
		___secondTouchType_4 = value;
	}

	inline static int32_t get_offset_of_panSensitivity_5() { return static_cast<int32_t>(offsetof(CameraPinchZoomTouchpadServerController_t4109416249, ___panSensitivity_5)); }
	inline float get_panSensitivity_5() const { return ___panSensitivity_5; }
	inline float* get_address_of_panSensitivity_5() { return &___panSensitivity_5; }
	inline void set_panSensitivity_5(float value)
	{
		___panSensitivity_5 = value;
	}

	inline static int32_t get_offset_of_tiltSensitivity_6() { return static_cast<int32_t>(offsetof(CameraPinchZoomTouchpadServerController_t4109416249, ___tiltSensitivity_6)); }
	inline float get_tiltSensitivity_6() const { return ___tiltSensitivity_6; }
	inline float* get_address_of_tiltSensitivity_6() { return &___tiltSensitivity_6; }
	inline void set_tiltSensitivity_6(float value)
	{
		___tiltSensitivity_6 = value;
	}

	inline static int32_t get_offset_of_zoomSensitivity_7() { return static_cast<int32_t>(offsetof(CameraPinchZoomTouchpadServerController_t4109416249, ___zoomSensitivity_7)); }
	inline float get_zoomSensitivity_7() const { return ___zoomSensitivity_7; }
	inline float* get_address_of_zoomSensitivity_7() { return &___zoomSensitivity_7; }
	inline void set_zoomSensitivity_7(float value)
	{
		___zoomSensitivity_7 = value;
	}

	inline static int32_t get_offset_of_touchpad_8() { return static_cast<int32_t>(offsetof(CameraPinchZoomTouchpadServerController_t4109416249, ___touchpad_8)); }
	inline PinchZoomTouchpadControllerTypeU5BU5D_t2015650104* get_touchpad_8() const { return ___touchpad_8; }
	inline PinchZoomTouchpadControllerTypeU5BU5D_t2015650104** get_address_of_touchpad_8() { return &___touchpad_8; }
	inline void set_touchpad_8(PinchZoomTouchpadControllerTypeU5BU5D_t2015650104* value)
	{
		___touchpad_8 = value;
		Il2CppCodeGenWriteBarrier(&___touchpad_8, value);
	}

	inline static int32_t get_offset_of_currentNumberControllers_9() { return static_cast<int32_t>(offsetof(CameraPinchZoomTouchpadServerController_t4109416249, ___currentNumberControllers_9)); }
	inline int32_t get_currentNumberControllers_9() const { return ___currentNumberControllers_9; }
	inline int32_t* get_address_of_currentNumberControllers_9() { return &___currentNumberControllers_9; }
	inline void set_currentNumberControllers_9(int32_t value)
	{
		___currentNumberControllers_9 = value;
	}

	inline static int32_t get_offset_of_actionVector3_10() { return static_cast<int32_t>(offsetof(CameraPinchZoomTouchpadServerController_t4109416249, ___actionVector3_10)); }
	inline Vector3_t2243707580  get_actionVector3_10() const { return ___actionVector3_10; }
	inline Vector3_t2243707580 * get_address_of_actionVector3_10() { return &___actionVector3_10; }
	inline void set_actionVector3_10(Vector3_t2243707580  value)
	{
		___actionVector3_10 = value;
	}

	inline static int32_t get_offset_of_horizontal_11() { return static_cast<int32_t>(offsetof(CameraPinchZoomTouchpadServerController_t4109416249, ___horizontal_11)); }
	inline float get_horizontal_11() const { return ___horizontal_11; }
	inline float* get_address_of_horizontal_11() { return &___horizontal_11; }
	inline void set_horizontal_11(float value)
	{
		___horizontal_11 = value;
	}

	inline static int32_t get_offset_of_vertical_12() { return static_cast<int32_t>(offsetof(CameraPinchZoomTouchpadServerController_t4109416249, ___vertical_12)); }
	inline float get_vertical_12() const { return ___vertical_12; }
	inline float* get_address_of_vertical_12() { return &___vertical_12; }
	inline void set_vertical_12(float value)
	{
		___vertical_12 = value;
	}

	inline static int32_t get_offset_of_zoomFactor_13() { return static_cast<int32_t>(offsetof(CameraPinchZoomTouchpadServerController_t4109416249, ___zoomFactor_13)); }
	inline float get_zoomFactor_13() const { return ___zoomFactor_13; }
	inline float* get_address_of_zoomFactor_13() { return &___zoomFactor_13; }
	inline void set_zoomFactor_13(float value)
	{
		___zoomFactor_13 = value;
	}

	inline static int32_t get_offset_of_numTouches_14() { return static_cast<int32_t>(offsetof(CameraPinchZoomTouchpadServerController_t4109416249, ___numTouches_14)); }
	inline int32_t get_numTouches_14() const { return ___numTouches_14; }
	inline int32_t* get_address_of_numTouches_14() { return &___numTouches_14; }
	inline void set_numTouches_14(int32_t value)
	{
		___numTouches_14 = value;
	}

	inline static int32_t get_offset_of_lastFrameHorizontal_15() { return static_cast<int32_t>(offsetof(CameraPinchZoomTouchpadServerController_t4109416249, ___lastFrameHorizontal_15)); }
	inline float get_lastFrameHorizontal_15() const { return ___lastFrameHorizontal_15; }
	inline float* get_address_of_lastFrameHorizontal_15() { return &___lastFrameHorizontal_15; }
	inline void set_lastFrameHorizontal_15(float value)
	{
		___lastFrameHorizontal_15 = value;
	}

	inline static int32_t get_offset_of_lastFrameVertical_16() { return static_cast<int32_t>(offsetof(CameraPinchZoomTouchpadServerController_t4109416249, ___lastFrameVertical_16)); }
	inline float get_lastFrameVertical_16() const { return ___lastFrameVertical_16; }
	inline float* get_address_of_lastFrameVertical_16() { return &___lastFrameVertical_16; }
	inline void set_lastFrameVertical_16(float value)
	{
		___lastFrameVertical_16 = value;
	}

	inline static int32_t get_offset_of_lastFrameNumTouches_17() { return static_cast<int32_t>(offsetof(CameraPinchZoomTouchpadServerController_t4109416249, ___lastFrameNumTouches_17)); }
	inline int32_t get_lastFrameNumTouches_17() const { return ___lastFrameNumTouches_17; }
	inline int32_t* get_address_of_lastFrameNumTouches_17() { return &___lastFrameNumTouches_17; }
	inline void set_lastFrameNumTouches_17(int32_t value)
	{
		___lastFrameNumTouches_17 = value;
	}

	inline static int32_t get_offset_of_lastFrameZoomFactor_18() { return static_cast<int32_t>(offsetof(CameraPinchZoomTouchpadServerController_t4109416249, ___lastFrameZoomFactor_18)); }
	inline float get_lastFrameZoomFactor_18() const { return ___lastFrameZoomFactor_18; }
	inline float* get_address_of_lastFrameZoomFactor_18() { return &___lastFrameZoomFactor_18; }
	inline void set_lastFrameZoomFactor_18(float value)
	{
		___lastFrameZoomFactor_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
