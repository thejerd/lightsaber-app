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

// System.String
struct String_t;
// EasyWiFi.Core.FloatBackchannelType[]
struct FloatBackchannelTypeU5BU5D_t4181098211;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ServerBackchannels.FloatServerBackchannel
struct  FloatServerBackchannel_t2674763181  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ServerBackchannels.FloatServerBackchannel::control
	String_t* ___control_2;
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER EasyWiFi.ServerBackchannels.FloatServerBackchannel::player
	int32_t ___player_3;
	// EasyWiFi.Core.FloatBackchannelType[] EasyWiFi.ServerBackchannels.FloatServerBackchannel::floatBackchannel
	FloatBackchannelTypeU5BU5D_t4181098211* ___floatBackchannel_4;
	// System.Int32 EasyWiFi.ServerBackchannels.FloatServerBackchannel::currentNumberControllers
	int32_t ___currentNumberControllers_5;
	// System.Single EasyWiFi.ServerBackchannels.FloatServerBackchannel::value
	float ___value_6;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(FloatServerBackchannel_t2674763181, ___control_2)); }
	inline String_t* get_control_2() const { return ___control_2; }
	inline String_t** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(String_t* value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(FloatServerBackchannel_t2674763181, ___player_3)); }
	inline int32_t get_player_3() const { return ___player_3; }
	inline int32_t* get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(int32_t value)
	{
		___player_3 = value;
	}

	inline static int32_t get_offset_of_floatBackchannel_4() { return static_cast<int32_t>(offsetof(FloatServerBackchannel_t2674763181, ___floatBackchannel_4)); }
	inline FloatBackchannelTypeU5BU5D_t4181098211* get_floatBackchannel_4() const { return ___floatBackchannel_4; }
	inline FloatBackchannelTypeU5BU5D_t4181098211** get_address_of_floatBackchannel_4() { return &___floatBackchannel_4; }
	inline void set_floatBackchannel_4(FloatBackchannelTypeU5BU5D_t4181098211* value)
	{
		___floatBackchannel_4 = value;
		Il2CppCodeGenWriteBarrier(&___floatBackchannel_4, value);
	}

	inline static int32_t get_offset_of_currentNumberControllers_5() { return static_cast<int32_t>(offsetof(FloatServerBackchannel_t2674763181, ___currentNumberControllers_5)); }
	inline int32_t get_currentNumberControllers_5() const { return ___currentNumberControllers_5; }
	inline int32_t* get_address_of_currentNumberControllers_5() { return &___currentNumberControllers_5; }
	inline void set_currentNumberControllers_5(int32_t value)
	{
		___currentNumberControllers_5 = value;
	}

	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(FloatServerBackchannel_t2674763181, ___value_6)); }
	inline float get_value_6() const { return ___value_6; }
	inline float* get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(float value)
	{
		___value_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
