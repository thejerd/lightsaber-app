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
#include "mscorlib_System_Decimal724701077.h"

// System.String
struct String_t;
// EasyWiFi.Core.DecimalBackchannelType[]
struct DecimalBackchannelTypeU5BU5D_t1355012656;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ServerBackchannels.DecimalServerBackchannel
struct  DecimalServerBackchannel_t3128937604  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ServerBackchannels.DecimalServerBackchannel::control
	String_t* ___control_2;
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER EasyWiFi.ServerBackchannels.DecimalServerBackchannel::player
	int32_t ___player_3;
	// EasyWiFi.Core.DecimalBackchannelType[] EasyWiFi.ServerBackchannels.DecimalServerBackchannel::decimalBackchannel
	DecimalBackchannelTypeU5BU5D_t1355012656* ___decimalBackchannel_4;
	// System.Int32 EasyWiFi.ServerBackchannels.DecimalServerBackchannel::currentNumberControllers
	int32_t ___currentNumberControllers_5;
	// System.Decimal EasyWiFi.ServerBackchannels.DecimalServerBackchannel::value
	Decimal_t724701077  ___value_6;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(DecimalServerBackchannel_t3128937604, ___control_2)); }
	inline String_t* get_control_2() const { return ___control_2; }
	inline String_t** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(String_t* value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(DecimalServerBackchannel_t3128937604, ___player_3)); }
	inline int32_t get_player_3() const { return ___player_3; }
	inline int32_t* get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(int32_t value)
	{
		___player_3 = value;
	}

	inline static int32_t get_offset_of_decimalBackchannel_4() { return static_cast<int32_t>(offsetof(DecimalServerBackchannel_t3128937604, ___decimalBackchannel_4)); }
	inline DecimalBackchannelTypeU5BU5D_t1355012656* get_decimalBackchannel_4() const { return ___decimalBackchannel_4; }
	inline DecimalBackchannelTypeU5BU5D_t1355012656** get_address_of_decimalBackchannel_4() { return &___decimalBackchannel_4; }
	inline void set_decimalBackchannel_4(DecimalBackchannelTypeU5BU5D_t1355012656* value)
	{
		___decimalBackchannel_4 = value;
		Il2CppCodeGenWriteBarrier(&___decimalBackchannel_4, value);
	}

	inline static int32_t get_offset_of_currentNumberControllers_5() { return static_cast<int32_t>(offsetof(DecimalServerBackchannel_t3128937604, ___currentNumberControllers_5)); }
	inline int32_t get_currentNumberControllers_5() const { return ___currentNumberControllers_5; }
	inline int32_t* get_address_of_currentNumberControllers_5() { return &___currentNumberControllers_5; }
	inline void set_currentNumberControllers_5(int32_t value)
	{
		___currentNumberControllers_5 = value;
	}

	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(DecimalServerBackchannel_t3128937604, ___value_6)); }
	inline Decimal_t724701077  get_value_6() const { return ___value_6; }
	inline Decimal_t724701077 * get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(Decimal_t724701077  value)
	{
		___value_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
