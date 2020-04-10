#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputM1295781545.h"
#include "AssemblyU2DCSharp_EasyWiFi_Core_EasyWiFiConstants_4244905158.h"
#include "AssemblyU2DCSharp_EasyWiFi_Core_EasyWiFiConstants_4026753145.h"
#include "AssemblyU2DCSharp_EasyWiFi_Core_EasyWiFiConstants_3613959175.h"

// System.String
struct String_t;
// EasyWiFi.Core.JoystickControllerType[]
struct JoystickControllerTypeU5BU5D_t19801737;
// EasyWiFi.Core.DpadControllerType[]
struct DpadControllerTypeU5BU5D_t4098392638;
// EasyWiFi.Core.ButtonControllerType[]
struct ButtonControllerTypeU5BU5D_t344907727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EasyWiFiInputModule
struct  EasyWiFiInputModule_t1753902323  : public BaseInputModule_t1295781545
{
public:
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER UnityEngine.EventSystems.EasyWiFiInputModule::player
	int32_t ___player_8;
	// EasyWiFi.Core.EasyWiFiConstants/UNITY_UI_INPUT_TYPE UnityEngine.EventSystems.EasyWiFiInputModule::navigationControlType
	int32_t ___navigationControlType_9;
	// System.String UnityEngine.EventSystems.EasyWiFiInputModule::navigationControlName
	String_t* ___navigationControlName_10;
	// EasyWiFi.Core.EasyWiFiConstants/UNITY_UI_SELECTION_TYPE UnityEngine.EventSystems.EasyWiFiInputModule::submitControlType
	int32_t ___submitControlType_11;
	// System.String UnityEngine.EventSystems.EasyWiFiInputModule::submitControlName
	String_t* ___submitControlName_12;
	// EasyWiFi.Core.EasyWiFiConstants/UNITY_UI_SELECTION_TYPE UnityEngine.EventSystems.EasyWiFiInputModule::cancelControlType
	int32_t ___cancelControlType_13;
	// System.String UnityEngine.EventSystems.EasyWiFiInputModule::cancelControlName
	String_t* ___cancelControlName_14;
	// System.Single UnityEngine.EventSystems.EasyWiFiInputModule::repeatEventRate
	float ___repeatEventRate_15;
	// EasyWiFi.Core.JoystickControllerType[] UnityEngine.EventSystems.EasyWiFiInputModule::joystick
	JoystickControllerTypeU5BU5D_t19801737* ___joystick_16;
	// System.Int32 UnityEngine.EventSystems.EasyWiFiInputModule::joystickCurrentNumberControllers
	int32_t ___joystickCurrentNumberControllers_17;
	// EasyWiFi.Core.DpadControllerType[] UnityEngine.EventSystems.EasyWiFiInputModule::dpad
	DpadControllerTypeU5BU5D_t4098392638* ___dpad_18;
	// System.Int32 UnityEngine.EventSystems.EasyWiFiInputModule::dpadCurrentNumberControllers
	int32_t ___dpadCurrentNumberControllers_19;
	// EasyWiFi.Core.ButtonControllerType[] UnityEngine.EventSystems.EasyWiFiInputModule::submitButton
	ButtonControllerTypeU5BU5D_t344907727* ___submitButton_20;
	// System.Int32 UnityEngine.EventSystems.EasyWiFiInputModule::submitCurrentNumberControllers
	int32_t ___submitCurrentNumberControllers_21;
	// EasyWiFi.Core.ButtonControllerType[] UnityEngine.EventSystems.EasyWiFiInputModule::cancelButton
	ButtonControllerTypeU5BU5D_t344907727* ___cancelButton_22;
	// System.Int32 UnityEngine.EventSystems.EasyWiFiInputModule::cancelCurrentNumberControllers
	int32_t ___cancelCurrentNumberControllers_23;
	// System.Boolean UnityEngine.EventSystems.EasyWiFiInputModule::eventLock
	bool ___eventLock_24;
	// System.Int32 UnityEngine.EventSystems.EasyWiFiInputModule::currentEventIndex
	int32_t ___currentEventIndex_25;

public:
	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t1753902323, ___player_8)); }
	inline int32_t get_player_8() const { return ___player_8; }
	inline int32_t* get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(int32_t value)
	{
		___player_8 = value;
	}

	inline static int32_t get_offset_of_navigationControlType_9() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t1753902323, ___navigationControlType_9)); }
	inline int32_t get_navigationControlType_9() const { return ___navigationControlType_9; }
	inline int32_t* get_address_of_navigationControlType_9() { return &___navigationControlType_9; }
	inline void set_navigationControlType_9(int32_t value)
	{
		___navigationControlType_9 = value;
	}

	inline static int32_t get_offset_of_navigationControlName_10() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t1753902323, ___navigationControlName_10)); }
	inline String_t* get_navigationControlName_10() const { return ___navigationControlName_10; }
	inline String_t** get_address_of_navigationControlName_10() { return &___navigationControlName_10; }
	inline void set_navigationControlName_10(String_t* value)
	{
		___navigationControlName_10 = value;
		Il2CppCodeGenWriteBarrier(&___navigationControlName_10, value);
	}

	inline static int32_t get_offset_of_submitControlType_11() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t1753902323, ___submitControlType_11)); }
	inline int32_t get_submitControlType_11() const { return ___submitControlType_11; }
	inline int32_t* get_address_of_submitControlType_11() { return &___submitControlType_11; }
	inline void set_submitControlType_11(int32_t value)
	{
		___submitControlType_11 = value;
	}

	inline static int32_t get_offset_of_submitControlName_12() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t1753902323, ___submitControlName_12)); }
	inline String_t* get_submitControlName_12() const { return ___submitControlName_12; }
	inline String_t** get_address_of_submitControlName_12() { return &___submitControlName_12; }
	inline void set_submitControlName_12(String_t* value)
	{
		___submitControlName_12 = value;
		Il2CppCodeGenWriteBarrier(&___submitControlName_12, value);
	}

	inline static int32_t get_offset_of_cancelControlType_13() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t1753902323, ___cancelControlType_13)); }
	inline int32_t get_cancelControlType_13() const { return ___cancelControlType_13; }
	inline int32_t* get_address_of_cancelControlType_13() { return &___cancelControlType_13; }
	inline void set_cancelControlType_13(int32_t value)
	{
		___cancelControlType_13 = value;
	}

	inline static int32_t get_offset_of_cancelControlName_14() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t1753902323, ___cancelControlName_14)); }
	inline String_t* get_cancelControlName_14() const { return ___cancelControlName_14; }
	inline String_t** get_address_of_cancelControlName_14() { return &___cancelControlName_14; }
	inline void set_cancelControlName_14(String_t* value)
	{
		___cancelControlName_14 = value;
		Il2CppCodeGenWriteBarrier(&___cancelControlName_14, value);
	}

	inline static int32_t get_offset_of_repeatEventRate_15() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t1753902323, ___repeatEventRate_15)); }
	inline float get_repeatEventRate_15() const { return ___repeatEventRate_15; }
	inline float* get_address_of_repeatEventRate_15() { return &___repeatEventRate_15; }
	inline void set_repeatEventRate_15(float value)
	{
		___repeatEventRate_15 = value;
	}

	inline static int32_t get_offset_of_joystick_16() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t1753902323, ___joystick_16)); }
	inline JoystickControllerTypeU5BU5D_t19801737* get_joystick_16() const { return ___joystick_16; }
	inline JoystickControllerTypeU5BU5D_t19801737** get_address_of_joystick_16() { return &___joystick_16; }
	inline void set_joystick_16(JoystickControllerTypeU5BU5D_t19801737* value)
	{
		___joystick_16 = value;
		Il2CppCodeGenWriteBarrier(&___joystick_16, value);
	}

	inline static int32_t get_offset_of_joystickCurrentNumberControllers_17() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t1753902323, ___joystickCurrentNumberControllers_17)); }
	inline int32_t get_joystickCurrentNumberControllers_17() const { return ___joystickCurrentNumberControllers_17; }
	inline int32_t* get_address_of_joystickCurrentNumberControllers_17() { return &___joystickCurrentNumberControllers_17; }
	inline void set_joystickCurrentNumberControllers_17(int32_t value)
	{
		___joystickCurrentNumberControllers_17 = value;
	}

	inline static int32_t get_offset_of_dpad_18() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t1753902323, ___dpad_18)); }
	inline DpadControllerTypeU5BU5D_t4098392638* get_dpad_18() const { return ___dpad_18; }
	inline DpadControllerTypeU5BU5D_t4098392638** get_address_of_dpad_18() { return &___dpad_18; }
	inline void set_dpad_18(DpadControllerTypeU5BU5D_t4098392638* value)
	{
		___dpad_18 = value;
		Il2CppCodeGenWriteBarrier(&___dpad_18, value);
	}

	inline static int32_t get_offset_of_dpadCurrentNumberControllers_19() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t1753902323, ___dpadCurrentNumberControllers_19)); }
	inline int32_t get_dpadCurrentNumberControllers_19() const { return ___dpadCurrentNumberControllers_19; }
	inline int32_t* get_address_of_dpadCurrentNumberControllers_19() { return &___dpadCurrentNumberControllers_19; }
	inline void set_dpadCurrentNumberControllers_19(int32_t value)
	{
		___dpadCurrentNumberControllers_19 = value;
	}

	inline static int32_t get_offset_of_submitButton_20() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t1753902323, ___submitButton_20)); }
	inline ButtonControllerTypeU5BU5D_t344907727* get_submitButton_20() const { return ___submitButton_20; }
	inline ButtonControllerTypeU5BU5D_t344907727** get_address_of_submitButton_20() { return &___submitButton_20; }
	inline void set_submitButton_20(ButtonControllerTypeU5BU5D_t344907727* value)
	{
		___submitButton_20 = value;
		Il2CppCodeGenWriteBarrier(&___submitButton_20, value);
	}

	inline static int32_t get_offset_of_submitCurrentNumberControllers_21() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t1753902323, ___submitCurrentNumberControllers_21)); }
	inline int32_t get_submitCurrentNumberControllers_21() const { return ___submitCurrentNumberControllers_21; }
	inline int32_t* get_address_of_submitCurrentNumberControllers_21() { return &___submitCurrentNumberControllers_21; }
	inline void set_submitCurrentNumberControllers_21(int32_t value)
	{
		___submitCurrentNumberControllers_21 = value;
	}

	inline static int32_t get_offset_of_cancelButton_22() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t1753902323, ___cancelButton_22)); }
	inline ButtonControllerTypeU5BU5D_t344907727* get_cancelButton_22() const { return ___cancelButton_22; }
	inline ButtonControllerTypeU5BU5D_t344907727** get_address_of_cancelButton_22() { return &___cancelButton_22; }
	inline void set_cancelButton_22(ButtonControllerTypeU5BU5D_t344907727* value)
	{
		___cancelButton_22 = value;
		Il2CppCodeGenWriteBarrier(&___cancelButton_22, value);
	}

	inline static int32_t get_offset_of_cancelCurrentNumberControllers_23() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t1753902323, ___cancelCurrentNumberControllers_23)); }
	inline int32_t get_cancelCurrentNumberControllers_23() const { return ___cancelCurrentNumberControllers_23; }
	inline int32_t* get_address_of_cancelCurrentNumberControllers_23() { return &___cancelCurrentNumberControllers_23; }
	inline void set_cancelCurrentNumberControllers_23(int32_t value)
	{
		___cancelCurrentNumberControllers_23 = value;
	}

	inline static int32_t get_offset_of_eventLock_24() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t1753902323, ___eventLock_24)); }
	inline bool get_eventLock_24() const { return ___eventLock_24; }
	inline bool* get_address_of_eventLock_24() { return &___eventLock_24; }
	inline void set_eventLock_24(bool value)
	{
		___eventLock_24 = value;
	}

	inline static int32_t get_offset_of_currentEventIndex_25() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t1753902323, ___currentEventIndex_25)); }
	inline int32_t get_currentEventIndex_25() const { return ___currentEventIndex_25; }
	inline int32_t* get_address_of_currentEventIndex_25() { return &___currentEventIndex_25; }
	inline void set_currentEventIndex_25(int32_t value)
	{
		___currentEventIndex_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
