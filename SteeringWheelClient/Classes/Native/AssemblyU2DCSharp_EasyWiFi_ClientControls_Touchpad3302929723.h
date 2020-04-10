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

// System.String
struct String_t;
// EasyWiFi.Core.TouchpadControllerType
struct TouchpadControllerType_t2313293646;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ClientControls.TouchpadClientController
struct  TouchpadClientController_t3302929723  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientControls.TouchpadClientController::controlName
	String_t* ___controlName_2;
	// EasyWiFi.Core.TouchpadControllerType EasyWiFi.ClientControls.TouchpadClientController::touchpad
	TouchpadControllerType_t2313293646 * ___touchpad_3;
	// UnityEngine.UI.Image EasyWiFi.ClientControls.TouchpadClientController::touchpadImage
	Image_t2042527209 * ___touchpadImage_4;
	// System.String EasyWiFi.ClientControls.TouchpadClientController::touchpadKey
	String_t* ___touchpadKey_5;
	// UnityEngine.Rect EasyWiFi.ClientControls.TouchpadClientController::screenPixelsRect
	Rect_t3681755626  ___screenPixelsRect_6;
	// System.Int32 EasyWiFi.ClientControls.TouchpadClientController::touchCount
	int32_t ___touchCount_7;
	// System.Single EasyWiFi.ClientControls.TouchpadClientController::normalizeFactorX
	float ___normalizeFactorX_8;
	// System.Single EasyWiFi.ClientControls.TouchpadClientController::normalizeFactorY
	float ___normalizeFactorY_9;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(TouchpadClientController_t3302929723, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_touchpad_3() { return static_cast<int32_t>(offsetof(TouchpadClientController_t3302929723, ___touchpad_3)); }
	inline TouchpadControllerType_t2313293646 * get_touchpad_3() const { return ___touchpad_3; }
	inline TouchpadControllerType_t2313293646 ** get_address_of_touchpad_3() { return &___touchpad_3; }
	inline void set_touchpad_3(TouchpadControllerType_t2313293646 * value)
	{
		___touchpad_3 = value;
		Il2CppCodeGenWriteBarrier(&___touchpad_3, value);
	}

	inline static int32_t get_offset_of_touchpadImage_4() { return static_cast<int32_t>(offsetof(TouchpadClientController_t3302929723, ___touchpadImage_4)); }
	inline Image_t2042527209 * get_touchpadImage_4() const { return ___touchpadImage_4; }
	inline Image_t2042527209 ** get_address_of_touchpadImage_4() { return &___touchpadImage_4; }
	inline void set_touchpadImage_4(Image_t2042527209 * value)
	{
		___touchpadImage_4 = value;
		Il2CppCodeGenWriteBarrier(&___touchpadImage_4, value);
	}

	inline static int32_t get_offset_of_touchpadKey_5() { return static_cast<int32_t>(offsetof(TouchpadClientController_t3302929723, ___touchpadKey_5)); }
	inline String_t* get_touchpadKey_5() const { return ___touchpadKey_5; }
	inline String_t** get_address_of_touchpadKey_5() { return &___touchpadKey_5; }
	inline void set_touchpadKey_5(String_t* value)
	{
		___touchpadKey_5 = value;
		Il2CppCodeGenWriteBarrier(&___touchpadKey_5, value);
	}

	inline static int32_t get_offset_of_screenPixelsRect_6() { return static_cast<int32_t>(offsetof(TouchpadClientController_t3302929723, ___screenPixelsRect_6)); }
	inline Rect_t3681755626  get_screenPixelsRect_6() const { return ___screenPixelsRect_6; }
	inline Rect_t3681755626 * get_address_of_screenPixelsRect_6() { return &___screenPixelsRect_6; }
	inline void set_screenPixelsRect_6(Rect_t3681755626  value)
	{
		___screenPixelsRect_6 = value;
	}

	inline static int32_t get_offset_of_touchCount_7() { return static_cast<int32_t>(offsetof(TouchpadClientController_t3302929723, ___touchCount_7)); }
	inline int32_t get_touchCount_7() const { return ___touchCount_7; }
	inline int32_t* get_address_of_touchCount_7() { return &___touchCount_7; }
	inline void set_touchCount_7(int32_t value)
	{
		___touchCount_7 = value;
	}

	inline static int32_t get_offset_of_normalizeFactorX_8() { return static_cast<int32_t>(offsetof(TouchpadClientController_t3302929723, ___normalizeFactorX_8)); }
	inline float get_normalizeFactorX_8() const { return ___normalizeFactorX_8; }
	inline float* get_address_of_normalizeFactorX_8() { return &___normalizeFactorX_8; }
	inline void set_normalizeFactorX_8(float value)
	{
		___normalizeFactorX_8 = value;
	}

	inline static int32_t get_offset_of_normalizeFactorY_9() { return static_cast<int32_t>(offsetof(TouchpadClientController_t3302929723, ___normalizeFactorY_9)); }
	inline float get_normalizeFactorY_9() const { return ___normalizeFactorY_9; }
	inline float* get_address_of_normalizeFactorY_9() { return &___normalizeFactorY_9; }
	inline void set_normalizeFactorY_9(float value)
	{
		___normalizeFactorY_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
