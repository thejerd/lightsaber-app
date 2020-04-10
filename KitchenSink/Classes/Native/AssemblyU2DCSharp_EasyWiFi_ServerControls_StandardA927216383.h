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
// EasyWiFi.Core.AccelerometerControllerType[]
struct AccelerometerControllerTypeU5BU5D_t244659412;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ServerControls.StandardAccelerometerServerController
struct  StandardAccelerometerServerController_t927216383  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ServerControls.StandardAccelerometerServerController::control
	String_t* ___control_2;
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER EasyWiFi.ServerControls.StandardAccelerometerServerController::player
	int32_t ___player_3;
	// EasyWiFi.Core.EasyWiFiConstants/AXIS EasyWiFi.ServerControls.StandardAccelerometerServerController::tiltHorizontal
	int32_t ___tiltHorizontal_4;
	// EasyWiFi.Core.EasyWiFiConstants/AXIS EasyWiFi.ServerControls.StandardAccelerometerServerController::tiltVertical
	int32_t ___tiltVertical_5;
	// EasyWiFi.Core.EasyWiFiConstants/ACTION_TYPE EasyWiFi.ServerControls.StandardAccelerometerServerController::action
	int32_t ___action_6;
	// System.Single EasyWiFi.ServerControls.StandardAccelerometerServerController::sensitivity
	float ___sensitivity_7;
	// EasyWiFi.Core.AccelerometerControllerType[] EasyWiFi.ServerControls.StandardAccelerometerServerController::accelerometer
	AccelerometerControllerTypeU5BU5D_t244659412* ___accelerometer_8;
	// System.Int32 EasyWiFi.ServerControls.StandardAccelerometerServerController::currentNumberControllers
	int32_t ___currentNumberControllers_9;
	// UnityEngine.Vector3 EasyWiFi.ServerControls.StandardAccelerometerServerController::actionVector3
	Vector3_t2243707580  ___actionVector3_10;
	// UnityEngine.Vector3 EasyWiFi.ServerControls.StandardAccelerometerServerController::accel
	Vector3_t2243707580  ___accel_11;
	// System.Single EasyWiFi.ServerControls.StandardAccelerometerServerController::horizontal
	float ___horizontal_12;
	// System.Single EasyWiFi.ServerControls.StandardAccelerometerServerController::vertical
	float ___vertical_13;
	// System.Single EasyWiFi.ServerControls.StandardAccelerometerServerController::normalizeDegrees
	float ___normalizeDegrees_14;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(StandardAccelerometerServerController_t927216383, ___control_2)); }
	inline String_t* get_control_2() const { return ___control_2; }
	inline String_t** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(String_t* value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(StandardAccelerometerServerController_t927216383, ___player_3)); }
	inline int32_t get_player_3() const { return ___player_3; }
	inline int32_t* get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(int32_t value)
	{
		___player_3 = value;
	}

	inline static int32_t get_offset_of_tiltHorizontal_4() { return static_cast<int32_t>(offsetof(StandardAccelerometerServerController_t927216383, ___tiltHorizontal_4)); }
	inline int32_t get_tiltHorizontal_4() const { return ___tiltHorizontal_4; }
	inline int32_t* get_address_of_tiltHorizontal_4() { return &___tiltHorizontal_4; }
	inline void set_tiltHorizontal_4(int32_t value)
	{
		___tiltHorizontal_4 = value;
	}

	inline static int32_t get_offset_of_tiltVertical_5() { return static_cast<int32_t>(offsetof(StandardAccelerometerServerController_t927216383, ___tiltVertical_5)); }
	inline int32_t get_tiltVertical_5() const { return ___tiltVertical_5; }
	inline int32_t* get_address_of_tiltVertical_5() { return &___tiltVertical_5; }
	inline void set_tiltVertical_5(int32_t value)
	{
		___tiltVertical_5 = value;
	}

	inline static int32_t get_offset_of_action_6() { return static_cast<int32_t>(offsetof(StandardAccelerometerServerController_t927216383, ___action_6)); }
	inline int32_t get_action_6() const { return ___action_6; }
	inline int32_t* get_address_of_action_6() { return &___action_6; }
	inline void set_action_6(int32_t value)
	{
		___action_6 = value;
	}

	inline static int32_t get_offset_of_sensitivity_7() { return static_cast<int32_t>(offsetof(StandardAccelerometerServerController_t927216383, ___sensitivity_7)); }
	inline float get_sensitivity_7() const { return ___sensitivity_7; }
	inline float* get_address_of_sensitivity_7() { return &___sensitivity_7; }
	inline void set_sensitivity_7(float value)
	{
		___sensitivity_7 = value;
	}

	inline static int32_t get_offset_of_accelerometer_8() { return static_cast<int32_t>(offsetof(StandardAccelerometerServerController_t927216383, ___accelerometer_8)); }
	inline AccelerometerControllerTypeU5BU5D_t244659412* get_accelerometer_8() const { return ___accelerometer_8; }
	inline AccelerometerControllerTypeU5BU5D_t244659412** get_address_of_accelerometer_8() { return &___accelerometer_8; }
	inline void set_accelerometer_8(AccelerometerControllerTypeU5BU5D_t244659412* value)
	{
		___accelerometer_8 = value;
		Il2CppCodeGenWriteBarrier(&___accelerometer_8, value);
	}

	inline static int32_t get_offset_of_currentNumberControllers_9() { return static_cast<int32_t>(offsetof(StandardAccelerometerServerController_t927216383, ___currentNumberControllers_9)); }
	inline int32_t get_currentNumberControllers_9() const { return ___currentNumberControllers_9; }
	inline int32_t* get_address_of_currentNumberControllers_9() { return &___currentNumberControllers_9; }
	inline void set_currentNumberControllers_9(int32_t value)
	{
		___currentNumberControllers_9 = value;
	}

	inline static int32_t get_offset_of_actionVector3_10() { return static_cast<int32_t>(offsetof(StandardAccelerometerServerController_t927216383, ___actionVector3_10)); }
	inline Vector3_t2243707580  get_actionVector3_10() const { return ___actionVector3_10; }
	inline Vector3_t2243707580 * get_address_of_actionVector3_10() { return &___actionVector3_10; }
	inline void set_actionVector3_10(Vector3_t2243707580  value)
	{
		___actionVector3_10 = value;
	}

	inline static int32_t get_offset_of_accel_11() { return static_cast<int32_t>(offsetof(StandardAccelerometerServerController_t927216383, ___accel_11)); }
	inline Vector3_t2243707580  get_accel_11() const { return ___accel_11; }
	inline Vector3_t2243707580 * get_address_of_accel_11() { return &___accel_11; }
	inline void set_accel_11(Vector3_t2243707580  value)
	{
		___accel_11 = value;
	}

	inline static int32_t get_offset_of_horizontal_12() { return static_cast<int32_t>(offsetof(StandardAccelerometerServerController_t927216383, ___horizontal_12)); }
	inline float get_horizontal_12() const { return ___horizontal_12; }
	inline float* get_address_of_horizontal_12() { return &___horizontal_12; }
	inline void set_horizontal_12(float value)
	{
		___horizontal_12 = value;
	}

	inline static int32_t get_offset_of_vertical_13() { return static_cast<int32_t>(offsetof(StandardAccelerometerServerController_t927216383, ___vertical_13)); }
	inline float get_vertical_13() const { return ___vertical_13; }
	inline float* get_address_of_vertical_13() { return &___vertical_13; }
	inline void set_vertical_13(float value)
	{
		___vertical_13 = value;
	}

	inline static int32_t get_offset_of_normalizeDegrees_14() { return static_cast<int32_t>(offsetof(StandardAccelerometerServerController_t927216383, ___normalizeDegrees_14)); }
	inline float get_normalizeDegrees_14() const { return ___normalizeDegrees_14; }
	inline float* get_address_of_normalizeDegrees_14() { return &___normalizeDegrees_14; }
	inline void set_normalizeDegrees_14(float value)
	{
		___normalizeDegrees_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
