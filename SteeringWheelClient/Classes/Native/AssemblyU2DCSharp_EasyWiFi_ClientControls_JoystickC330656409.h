#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.String
struct String_t;
// UnityEngine.UI.Image
struct Image_t2042527209;
// EasyWiFi.Core.JoystickControllerType
struct JoystickControllerType_t2124760600;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ClientControls.JoystickClientController
struct  JoystickClientController_t330656409  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientControls.JoystickClientController::controlName
	String_t* ___controlName_2;
	// System.Single EasyWiFi.ClientControls.JoystickClientController::highThreshold
	float ___highThreshold_3;
	// System.Single EasyWiFi.ClientControls.JoystickClientController::lowThreshold
	float ___lowThreshold_4;
	// UnityEngine.UI.Image EasyWiFi.ClientControls.JoystickClientController::joystickImageForeground
	Image_t2042527209 * ___joystickImageForeground_5;
	// EasyWiFi.Core.JoystickControllerType EasyWiFi.ClientControls.JoystickClientController::joystick
	JoystickControllerType_t2124760600 * ___joystick_6;
	// UnityEngine.UI.Image EasyWiFi.ClientControls.JoystickClientController::joystickImageBackground
	Image_t2042527209 * ___joystickImageBackground_7;
	// System.String EasyWiFi.ClientControls.JoystickClientController::joystickKey
	String_t* ___joystickKey_8;
	// UnityEngine.Rect EasyWiFi.ClientControls.JoystickClientController::screenPixelsRect
	Rect_t3681755626  ___screenPixelsRect_9;
	// System.Int32 EasyWiFi.ClientControls.JoystickClientController::touchCount
	int32_t ___touchCount_10;
	// UnityEngine.Vector3 EasyWiFi.ClientControls.JoystickClientController::defaultNubPosition
	Vector3_t2243707580  ___defaultNubPosition_11;
	// UnityEngine.Vector2 EasyWiFi.ClientControls.JoystickClientController::tmpVector
	Vector2_t2243707579  ___tmpVector_12;
	// System.Single EasyWiFi.ClientControls.JoystickClientController::normalizeFactorX
	float ___normalizeFactorX_13;
	// System.Single EasyWiFi.ClientControls.JoystickClientController::normalizeFactorY
	float ___normalizeFactorY_14;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(JoystickClientController_t330656409, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_highThreshold_3() { return static_cast<int32_t>(offsetof(JoystickClientController_t330656409, ___highThreshold_3)); }
	inline float get_highThreshold_3() const { return ___highThreshold_3; }
	inline float* get_address_of_highThreshold_3() { return &___highThreshold_3; }
	inline void set_highThreshold_3(float value)
	{
		___highThreshold_3 = value;
	}

	inline static int32_t get_offset_of_lowThreshold_4() { return static_cast<int32_t>(offsetof(JoystickClientController_t330656409, ___lowThreshold_4)); }
	inline float get_lowThreshold_4() const { return ___lowThreshold_4; }
	inline float* get_address_of_lowThreshold_4() { return &___lowThreshold_4; }
	inline void set_lowThreshold_4(float value)
	{
		___lowThreshold_4 = value;
	}

	inline static int32_t get_offset_of_joystickImageForeground_5() { return static_cast<int32_t>(offsetof(JoystickClientController_t330656409, ___joystickImageForeground_5)); }
	inline Image_t2042527209 * get_joystickImageForeground_5() const { return ___joystickImageForeground_5; }
	inline Image_t2042527209 ** get_address_of_joystickImageForeground_5() { return &___joystickImageForeground_5; }
	inline void set_joystickImageForeground_5(Image_t2042527209 * value)
	{
		___joystickImageForeground_5 = value;
		Il2CppCodeGenWriteBarrier(&___joystickImageForeground_5, value);
	}

	inline static int32_t get_offset_of_joystick_6() { return static_cast<int32_t>(offsetof(JoystickClientController_t330656409, ___joystick_6)); }
	inline JoystickControllerType_t2124760600 * get_joystick_6() const { return ___joystick_6; }
	inline JoystickControllerType_t2124760600 ** get_address_of_joystick_6() { return &___joystick_6; }
	inline void set_joystick_6(JoystickControllerType_t2124760600 * value)
	{
		___joystick_6 = value;
		Il2CppCodeGenWriteBarrier(&___joystick_6, value);
	}

	inline static int32_t get_offset_of_joystickImageBackground_7() { return static_cast<int32_t>(offsetof(JoystickClientController_t330656409, ___joystickImageBackground_7)); }
	inline Image_t2042527209 * get_joystickImageBackground_7() const { return ___joystickImageBackground_7; }
	inline Image_t2042527209 ** get_address_of_joystickImageBackground_7() { return &___joystickImageBackground_7; }
	inline void set_joystickImageBackground_7(Image_t2042527209 * value)
	{
		___joystickImageBackground_7 = value;
		Il2CppCodeGenWriteBarrier(&___joystickImageBackground_7, value);
	}

	inline static int32_t get_offset_of_joystickKey_8() { return static_cast<int32_t>(offsetof(JoystickClientController_t330656409, ___joystickKey_8)); }
	inline String_t* get_joystickKey_8() const { return ___joystickKey_8; }
	inline String_t** get_address_of_joystickKey_8() { return &___joystickKey_8; }
	inline void set_joystickKey_8(String_t* value)
	{
		___joystickKey_8 = value;
		Il2CppCodeGenWriteBarrier(&___joystickKey_8, value);
	}

	inline static int32_t get_offset_of_screenPixelsRect_9() { return static_cast<int32_t>(offsetof(JoystickClientController_t330656409, ___screenPixelsRect_9)); }
	inline Rect_t3681755626  get_screenPixelsRect_9() const { return ___screenPixelsRect_9; }
	inline Rect_t3681755626 * get_address_of_screenPixelsRect_9() { return &___screenPixelsRect_9; }
	inline void set_screenPixelsRect_9(Rect_t3681755626  value)
	{
		___screenPixelsRect_9 = value;
	}

	inline static int32_t get_offset_of_touchCount_10() { return static_cast<int32_t>(offsetof(JoystickClientController_t330656409, ___touchCount_10)); }
	inline int32_t get_touchCount_10() const { return ___touchCount_10; }
	inline int32_t* get_address_of_touchCount_10() { return &___touchCount_10; }
	inline void set_touchCount_10(int32_t value)
	{
		___touchCount_10 = value;
	}

	inline static int32_t get_offset_of_defaultNubPosition_11() { return static_cast<int32_t>(offsetof(JoystickClientController_t330656409, ___defaultNubPosition_11)); }
	inline Vector3_t2243707580  get_defaultNubPosition_11() const { return ___defaultNubPosition_11; }
	inline Vector3_t2243707580 * get_address_of_defaultNubPosition_11() { return &___defaultNubPosition_11; }
	inline void set_defaultNubPosition_11(Vector3_t2243707580  value)
	{
		___defaultNubPosition_11 = value;
	}

	inline static int32_t get_offset_of_tmpVector_12() { return static_cast<int32_t>(offsetof(JoystickClientController_t330656409, ___tmpVector_12)); }
	inline Vector2_t2243707579  get_tmpVector_12() const { return ___tmpVector_12; }
	inline Vector2_t2243707579 * get_address_of_tmpVector_12() { return &___tmpVector_12; }
	inline void set_tmpVector_12(Vector2_t2243707579  value)
	{
		___tmpVector_12 = value;
	}

	inline static int32_t get_offset_of_normalizeFactorX_13() { return static_cast<int32_t>(offsetof(JoystickClientController_t330656409, ___normalizeFactorX_13)); }
	inline float get_normalizeFactorX_13() const { return ___normalizeFactorX_13; }
	inline float* get_address_of_normalizeFactorX_13() { return &___normalizeFactorX_13; }
	inline void set_normalizeFactorX_13(float value)
	{
		___normalizeFactorX_13 = value;
	}

	inline static int32_t get_offset_of_normalizeFactorY_14() { return static_cast<int32_t>(offsetof(JoystickClientController_t330656409, ___normalizeFactorY_14)); }
	inline float get_normalizeFactorY_14() const { return ___normalizeFactorY_14; }
	inline float* get_address_of_normalizeFactorY_14() { return &___normalizeFactorY_14; }
	inline void set_normalizeFactorY_14(float value)
	{
		___normalizeFactorY_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
