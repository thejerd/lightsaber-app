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
// EasyWiFi.Core.StringBackchannelType[]
struct StringBackchannelTypeU5BU5D_t1010569570;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ServerBackchannels.StringServerBackchannel
struct  StringServerBackchannel_t912423622  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ServerBackchannels.StringServerBackchannel::control
	String_t* ___control_2;
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER EasyWiFi.ServerBackchannels.StringServerBackchannel::player
	int32_t ___player_3;
	// EasyWiFi.Core.StringBackchannelType[] EasyWiFi.ServerBackchannels.StringServerBackchannel::stringBackchannel
	StringBackchannelTypeU5BU5D_t1010569570* ___stringBackchannel_4;
	// System.Int32 EasyWiFi.ServerBackchannels.StringServerBackchannel::currentNumberControllers
	int32_t ___currentNumberControllers_5;
	// System.String EasyWiFi.ServerBackchannels.StringServerBackchannel::value
	String_t* ___value_6;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(StringServerBackchannel_t912423622, ___control_2)); }
	inline String_t* get_control_2() const { return ___control_2; }
	inline String_t** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(String_t* value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(StringServerBackchannel_t912423622, ___player_3)); }
	inline int32_t get_player_3() const { return ___player_3; }
	inline int32_t* get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(int32_t value)
	{
		___player_3 = value;
	}

	inline static int32_t get_offset_of_stringBackchannel_4() { return static_cast<int32_t>(offsetof(StringServerBackchannel_t912423622, ___stringBackchannel_4)); }
	inline StringBackchannelTypeU5BU5D_t1010569570* get_stringBackchannel_4() const { return ___stringBackchannel_4; }
	inline StringBackchannelTypeU5BU5D_t1010569570** get_address_of_stringBackchannel_4() { return &___stringBackchannel_4; }
	inline void set_stringBackchannel_4(StringBackchannelTypeU5BU5D_t1010569570* value)
	{
		___stringBackchannel_4 = value;
		Il2CppCodeGenWriteBarrier(&___stringBackchannel_4, value);
	}

	inline static int32_t get_offset_of_currentNumberControllers_5() { return static_cast<int32_t>(offsetof(StringServerBackchannel_t912423622, ___currentNumberControllers_5)); }
	inline int32_t get_currentNumberControllers_5() const { return ___currentNumberControllers_5; }
	inline int32_t* get_address_of_currentNumberControllers_5() { return &___currentNumberControllers_5; }
	inline void set_currentNumberControllers_5(int32_t value)
	{
		___currentNumberControllers_5 = value;
	}

	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(StringServerBackchannel_t912423622, ___value_6)); }
	inline String_t* get_value_6() const { return ___value_6; }
	inline String_t** get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(String_t* value)
	{
		___value_6 = value;
		Il2CppCodeGenWriteBarrier(&___value_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
