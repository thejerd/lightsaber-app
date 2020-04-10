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
// EasyWiFi.Core.IntBackchannelType[]
struct IntBackchannelTypeU5BU5D_t3803191164;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ServerBackchannels.IntServerBackchannel
struct  IntServerBackchannel_t3885837000  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ServerBackchannels.IntServerBackchannel::control
	String_t* ___control_2;
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER EasyWiFi.ServerBackchannels.IntServerBackchannel::player
	int32_t ___player_3;
	// EasyWiFi.Core.IntBackchannelType[] EasyWiFi.ServerBackchannels.IntServerBackchannel::intBackchannel
	IntBackchannelTypeU5BU5D_t3803191164* ___intBackchannel_4;
	// System.Int32 EasyWiFi.ServerBackchannels.IntServerBackchannel::currentNumberControllers
	int32_t ___currentNumberControllers_5;
	// System.Int32 EasyWiFi.ServerBackchannels.IntServerBackchannel::value
	int32_t ___value_6;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(IntServerBackchannel_t3885837000, ___control_2)); }
	inline String_t* get_control_2() const { return ___control_2; }
	inline String_t** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(String_t* value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(IntServerBackchannel_t3885837000, ___player_3)); }
	inline int32_t get_player_3() const { return ___player_3; }
	inline int32_t* get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(int32_t value)
	{
		___player_3 = value;
	}

	inline static int32_t get_offset_of_intBackchannel_4() { return static_cast<int32_t>(offsetof(IntServerBackchannel_t3885837000, ___intBackchannel_4)); }
	inline IntBackchannelTypeU5BU5D_t3803191164* get_intBackchannel_4() const { return ___intBackchannel_4; }
	inline IntBackchannelTypeU5BU5D_t3803191164** get_address_of_intBackchannel_4() { return &___intBackchannel_4; }
	inline void set_intBackchannel_4(IntBackchannelTypeU5BU5D_t3803191164* value)
	{
		___intBackchannel_4 = value;
		Il2CppCodeGenWriteBarrier(&___intBackchannel_4, value);
	}

	inline static int32_t get_offset_of_currentNumberControllers_5() { return static_cast<int32_t>(offsetof(IntServerBackchannel_t3885837000, ___currentNumberControllers_5)); }
	inline int32_t get_currentNumberControllers_5() const { return ___currentNumberControllers_5; }
	inline int32_t* get_address_of_currentNumberControllers_5() { return &___currentNumberControllers_5; }
	inline void set_currentNumberControllers_5(int32_t value)
	{
		___currentNumberControllers_5 = value;
	}

	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(IntServerBackchannel_t3885837000, ___value_6)); }
	inline int32_t get_value_6() const { return ___value_6; }
	inline int32_t* get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(int32_t value)
	{
		___value_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
