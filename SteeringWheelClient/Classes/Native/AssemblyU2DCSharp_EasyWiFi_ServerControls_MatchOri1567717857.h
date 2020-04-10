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
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// System.String
struct String_t;
// EasyWiFi.Core.GyroControllerType[]
struct GyroControllerTypeU5BU5D_t3517142044;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ServerControls.MatchOrientationGyroServerController
struct  MatchOrientationGyroServerController_t1567717857  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ServerControls.MatchOrientationGyroServerController::control
	String_t* ___control_2;
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER EasyWiFi.ServerControls.MatchOrientationGyroServerController::player
	int32_t ___player_3;
	// EasyWiFi.Core.GyroControllerType[] EasyWiFi.ServerControls.MatchOrientationGyroServerController::gyro
	GyroControllerTypeU5BU5D_t3517142044* ___gyro_4;
	// System.Int32 EasyWiFi.ServerControls.MatchOrientationGyroServerController::currentNumberControllers
	int32_t ___currentNumberControllers_5;
	// UnityEngine.Quaternion EasyWiFi.ServerControls.MatchOrientationGyroServerController::orientation
	Quaternion_t4030073918  ___orientation_6;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(MatchOrientationGyroServerController_t1567717857, ___control_2)); }
	inline String_t* get_control_2() const { return ___control_2; }
	inline String_t** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(String_t* value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(MatchOrientationGyroServerController_t1567717857, ___player_3)); }
	inline int32_t get_player_3() const { return ___player_3; }
	inline int32_t* get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(int32_t value)
	{
		___player_3 = value;
	}

	inline static int32_t get_offset_of_gyro_4() { return static_cast<int32_t>(offsetof(MatchOrientationGyroServerController_t1567717857, ___gyro_4)); }
	inline GyroControllerTypeU5BU5D_t3517142044* get_gyro_4() const { return ___gyro_4; }
	inline GyroControllerTypeU5BU5D_t3517142044** get_address_of_gyro_4() { return &___gyro_4; }
	inline void set_gyro_4(GyroControllerTypeU5BU5D_t3517142044* value)
	{
		___gyro_4 = value;
		Il2CppCodeGenWriteBarrier(&___gyro_4, value);
	}

	inline static int32_t get_offset_of_currentNumberControllers_5() { return static_cast<int32_t>(offsetof(MatchOrientationGyroServerController_t1567717857, ___currentNumberControllers_5)); }
	inline int32_t get_currentNumberControllers_5() const { return ___currentNumberControllers_5; }
	inline int32_t* get_address_of_currentNumberControllers_5() { return &___currentNumberControllers_5; }
	inline void set_currentNumberControllers_5(int32_t value)
	{
		___currentNumberControllers_5 = value;
	}

	inline static int32_t get_offset_of_orientation_6() { return static_cast<int32_t>(offsetof(MatchOrientationGyroServerController_t1567717857, ___orientation_6)); }
	inline Quaternion_t4030073918  get_orientation_6() const { return ___orientation_6; }
	inline Quaternion_t4030073918 * get_address_of_orientation_6() { return &___orientation_6; }
	inline void set_orientation_6(Quaternion_t4030073918  value)
	{
		___orientation_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
