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
// EasyWiFi.Core.SliderControllerType[]
struct SliderControllerTypeU5BU5D_t1868807902;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ServerControls.StandardSliderServerController
struct  StandardSliderServerController_t1558064905  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ServerControls.StandardSliderServerController::control
	String_t* ___control_2;
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER EasyWiFi.ServerControls.StandardSliderServerController::player
	int32_t ___player_3;
	// EasyWiFi.Core.EasyWiFiConstants/AXIS EasyWiFi.ServerControls.StandardSliderServerController::sliderEffect
	int32_t ___sliderEffect_4;
	// EasyWiFi.Core.EasyWiFiConstants/ACTION_TYPE EasyWiFi.ServerControls.StandardSliderServerController::action
	int32_t ___action_5;
	// System.Single EasyWiFi.ServerControls.StandardSliderServerController::sensitivity
	float ___sensitivity_6;
	// EasyWiFi.Core.SliderControllerType[] EasyWiFi.ServerControls.StandardSliderServerController::slider
	SliderControllerTypeU5BU5D_t1868807902* ___slider_7;
	// System.Int32 EasyWiFi.ServerControls.StandardSliderServerController::currentNumberControllers
	int32_t ___currentNumberControllers_8;
	// UnityEngine.Vector3 EasyWiFi.ServerControls.StandardSliderServerController::actionVector3
	Vector3_t2243707580  ___actionVector3_9;
	// System.Single EasyWiFi.ServerControls.StandardSliderServerController::sliderValue
	float ___sliderValue_10;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(StandardSliderServerController_t1558064905, ___control_2)); }
	inline String_t* get_control_2() const { return ___control_2; }
	inline String_t** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(String_t* value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(StandardSliderServerController_t1558064905, ___player_3)); }
	inline int32_t get_player_3() const { return ___player_3; }
	inline int32_t* get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(int32_t value)
	{
		___player_3 = value;
	}

	inline static int32_t get_offset_of_sliderEffect_4() { return static_cast<int32_t>(offsetof(StandardSliderServerController_t1558064905, ___sliderEffect_4)); }
	inline int32_t get_sliderEffect_4() const { return ___sliderEffect_4; }
	inline int32_t* get_address_of_sliderEffect_4() { return &___sliderEffect_4; }
	inline void set_sliderEffect_4(int32_t value)
	{
		___sliderEffect_4 = value;
	}

	inline static int32_t get_offset_of_action_5() { return static_cast<int32_t>(offsetof(StandardSliderServerController_t1558064905, ___action_5)); }
	inline int32_t get_action_5() const { return ___action_5; }
	inline int32_t* get_address_of_action_5() { return &___action_5; }
	inline void set_action_5(int32_t value)
	{
		___action_5 = value;
	}

	inline static int32_t get_offset_of_sensitivity_6() { return static_cast<int32_t>(offsetof(StandardSliderServerController_t1558064905, ___sensitivity_6)); }
	inline float get_sensitivity_6() const { return ___sensitivity_6; }
	inline float* get_address_of_sensitivity_6() { return &___sensitivity_6; }
	inline void set_sensitivity_6(float value)
	{
		___sensitivity_6 = value;
	}

	inline static int32_t get_offset_of_slider_7() { return static_cast<int32_t>(offsetof(StandardSliderServerController_t1558064905, ___slider_7)); }
	inline SliderControllerTypeU5BU5D_t1868807902* get_slider_7() const { return ___slider_7; }
	inline SliderControllerTypeU5BU5D_t1868807902** get_address_of_slider_7() { return &___slider_7; }
	inline void set_slider_7(SliderControllerTypeU5BU5D_t1868807902* value)
	{
		___slider_7 = value;
		Il2CppCodeGenWriteBarrier(&___slider_7, value);
	}

	inline static int32_t get_offset_of_currentNumberControllers_8() { return static_cast<int32_t>(offsetof(StandardSliderServerController_t1558064905, ___currentNumberControllers_8)); }
	inline int32_t get_currentNumberControllers_8() const { return ___currentNumberControllers_8; }
	inline int32_t* get_address_of_currentNumberControllers_8() { return &___currentNumberControllers_8; }
	inline void set_currentNumberControllers_8(int32_t value)
	{
		___currentNumberControllers_8 = value;
	}

	inline static int32_t get_offset_of_actionVector3_9() { return static_cast<int32_t>(offsetof(StandardSliderServerController_t1558064905, ___actionVector3_9)); }
	inline Vector3_t2243707580  get_actionVector3_9() const { return ___actionVector3_9; }
	inline Vector3_t2243707580 * get_address_of_actionVector3_9() { return &___actionVector3_9; }
	inline void set_actionVector3_9(Vector3_t2243707580  value)
	{
		___actionVector3_9 = value;
	}

	inline static int32_t get_offset_of_sliderValue_10() { return static_cast<int32_t>(offsetof(StandardSliderServerController_t1558064905, ___sliderValue_10)); }
	inline float get_sliderValue_10() const { return ___sliderValue_10; }
	inline float* get_address_of_sliderValue_10() { return &___sliderValue_10; }
	inline void set_sliderValue_10(float value)
	{
		___sliderValue_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
