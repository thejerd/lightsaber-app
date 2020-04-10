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
// EasyWiFi.Core.DoubleBackchannelType[]
struct DoubleBackchannelTypeU5BU5D_t828287430;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ServerBackchannels.DoubleServerBackchannel
struct  DoubleServerBackchannel_t2433347986  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ServerBackchannels.DoubleServerBackchannel::control
	String_t* ___control_2;
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER EasyWiFi.ServerBackchannels.DoubleServerBackchannel::player
	int32_t ___player_3;
	// EasyWiFi.Core.DoubleBackchannelType[] EasyWiFi.ServerBackchannels.DoubleServerBackchannel::doubleBackchannel
	DoubleBackchannelTypeU5BU5D_t828287430* ___doubleBackchannel_4;
	// System.Int32 EasyWiFi.ServerBackchannels.DoubleServerBackchannel::currentNumberControllers
	int32_t ___currentNumberControllers_5;
	// System.Double EasyWiFi.ServerBackchannels.DoubleServerBackchannel::value
	double ___value_6;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(DoubleServerBackchannel_t2433347986, ___control_2)); }
	inline String_t* get_control_2() const { return ___control_2; }
	inline String_t** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(String_t* value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(DoubleServerBackchannel_t2433347986, ___player_3)); }
	inline int32_t get_player_3() const { return ___player_3; }
	inline int32_t* get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(int32_t value)
	{
		___player_3 = value;
	}

	inline static int32_t get_offset_of_doubleBackchannel_4() { return static_cast<int32_t>(offsetof(DoubleServerBackchannel_t2433347986, ___doubleBackchannel_4)); }
	inline DoubleBackchannelTypeU5BU5D_t828287430* get_doubleBackchannel_4() const { return ___doubleBackchannel_4; }
	inline DoubleBackchannelTypeU5BU5D_t828287430** get_address_of_doubleBackchannel_4() { return &___doubleBackchannel_4; }
	inline void set_doubleBackchannel_4(DoubleBackchannelTypeU5BU5D_t828287430* value)
	{
		___doubleBackchannel_4 = value;
		Il2CppCodeGenWriteBarrier(&___doubleBackchannel_4, value);
	}

	inline static int32_t get_offset_of_currentNumberControllers_5() { return static_cast<int32_t>(offsetof(DoubleServerBackchannel_t2433347986, ___currentNumberControllers_5)); }
	inline int32_t get_currentNumberControllers_5() const { return ___currentNumberControllers_5; }
	inline int32_t* get_address_of_currentNumberControllers_5() { return &___currentNumberControllers_5; }
	inline void set_currentNumberControllers_5(int32_t value)
	{
		___currentNumberControllers_5 = value;
	}

	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(DoubleServerBackchannel_t2433347986, ___value_6)); }
	inline double get_value_6() const { return ___value_6; }
	inline double* get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(double value)
	{
		___value_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
