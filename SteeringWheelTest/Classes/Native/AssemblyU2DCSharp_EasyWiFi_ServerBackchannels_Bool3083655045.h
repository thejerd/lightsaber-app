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
// EasyWiFi.Core.BoolBackchannelType[]
struct BoolBackchannelTypeU5BU5D_t157843801;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ServerBackchannels.BoolServerBackchannel
struct  BoolServerBackchannel_t3083655045  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ServerBackchannels.BoolServerBackchannel::control
	String_t* ___control_2;
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER EasyWiFi.ServerBackchannels.BoolServerBackchannel::player
	int32_t ___player_3;
	// EasyWiFi.Core.BoolBackchannelType[] EasyWiFi.ServerBackchannels.BoolServerBackchannel::boolBackchannel
	BoolBackchannelTypeU5BU5D_t157843801* ___boolBackchannel_4;
	// System.Int32 EasyWiFi.ServerBackchannels.BoolServerBackchannel::currentNumberControllers
	int32_t ___currentNumberControllers_5;
	// System.Boolean EasyWiFi.ServerBackchannels.BoolServerBackchannel::value
	bool ___value_6;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(BoolServerBackchannel_t3083655045, ___control_2)); }
	inline String_t* get_control_2() const { return ___control_2; }
	inline String_t** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(String_t* value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(BoolServerBackchannel_t3083655045, ___player_3)); }
	inline int32_t get_player_3() const { return ___player_3; }
	inline int32_t* get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(int32_t value)
	{
		___player_3 = value;
	}

	inline static int32_t get_offset_of_boolBackchannel_4() { return static_cast<int32_t>(offsetof(BoolServerBackchannel_t3083655045, ___boolBackchannel_4)); }
	inline BoolBackchannelTypeU5BU5D_t157843801* get_boolBackchannel_4() const { return ___boolBackchannel_4; }
	inline BoolBackchannelTypeU5BU5D_t157843801** get_address_of_boolBackchannel_4() { return &___boolBackchannel_4; }
	inline void set_boolBackchannel_4(BoolBackchannelTypeU5BU5D_t157843801* value)
	{
		___boolBackchannel_4 = value;
		Il2CppCodeGenWriteBarrier(&___boolBackchannel_4, value);
	}

	inline static int32_t get_offset_of_currentNumberControllers_5() { return static_cast<int32_t>(offsetof(BoolServerBackchannel_t3083655045, ___currentNumberControllers_5)); }
	inline int32_t get_currentNumberControllers_5() const { return ___currentNumberControllers_5; }
	inline int32_t* get_address_of_currentNumberControllers_5() { return &___currentNumberControllers_5; }
	inline void set_currentNumberControllers_5(int32_t value)
	{
		___currentNumberControllers_5 = value;
	}

	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(BoolServerBackchannel_t3083655045, ___value_6)); }
	inline bool get_value_6() const { return ___value_6; }
	inline bool* get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(bool value)
	{
		___value_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
