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
// EasyWiFi.Core.PinchZoomTouchpadControllerType
struct PinchZoomTouchpadControllerType_t4154454997;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ClientControls.PinchZoomTouchpadClientController
struct  PinchZoomTouchpadClientController_t2854130666  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientControls.PinchZoomTouchpadClientController::controlName
	String_t* ___controlName_2;
	// EasyWiFi.Core.PinchZoomTouchpadControllerType EasyWiFi.ClientControls.PinchZoomTouchpadClientController::pinchZoom
	PinchZoomTouchpadControllerType_t4154454997 * ___pinchZoom_3;
	// UnityEngine.UI.Image EasyWiFi.ClientControls.PinchZoomTouchpadClientController::pinchZoomImage
	Image_t2042527209 * ___pinchZoomImage_4;
	// System.String EasyWiFi.ClientControls.PinchZoomTouchpadClientController::pinchZoomKey
	String_t* ___pinchZoomKey_5;
	// UnityEngine.Rect EasyWiFi.ClientControls.PinchZoomTouchpadClientController::screenPixelsRect
	Rect_t3681755626  ___screenPixelsRect_6;
	// System.Int32 EasyWiFi.ClientControls.PinchZoomTouchpadClientController::touchCount
	int32_t ___touchCount_7;
	// System.Int32 EasyWiFi.ClientControls.PinchZoomTouchpadClientController::touchMode
	int32_t ___touchMode_8;
	// System.Int32 EasyWiFi.ClientControls.PinchZoomTouchpadClientController::lastFrameTouchMode
	int32_t ___lastFrameTouchMode_9;
	// System.Single EasyWiFi.ClientControls.PinchZoomTouchpadClientController::currentZoomFactor
	float ___currentZoomFactor_10;
	// System.Single EasyWiFi.ClientControls.PinchZoomTouchpadClientController::currentZoomDistance
	float ___currentZoomDistance_11;
	// System.Single EasyWiFi.ClientControls.PinchZoomTouchpadClientController::lastFrameZoomDistance
	float ___lastFrameZoomDistance_12;
	// System.Single EasyWiFi.ClientControls.PinchZoomTouchpadClientController::normalizeFactorX
	float ___normalizeFactorX_13;
	// System.Single EasyWiFi.ClientControls.PinchZoomTouchpadClientController::normalizeFactorY
	float ___normalizeFactorY_14;
	// System.Single EasyWiFi.ClientControls.PinchZoomTouchpadClientController::touchZoomMultiplier
	float ___touchZoomMultiplier_15;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(PinchZoomTouchpadClientController_t2854130666, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_pinchZoom_3() { return static_cast<int32_t>(offsetof(PinchZoomTouchpadClientController_t2854130666, ___pinchZoom_3)); }
	inline PinchZoomTouchpadControllerType_t4154454997 * get_pinchZoom_3() const { return ___pinchZoom_3; }
	inline PinchZoomTouchpadControllerType_t4154454997 ** get_address_of_pinchZoom_3() { return &___pinchZoom_3; }
	inline void set_pinchZoom_3(PinchZoomTouchpadControllerType_t4154454997 * value)
	{
		___pinchZoom_3 = value;
		Il2CppCodeGenWriteBarrier(&___pinchZoom_3, value);
	}

	inline static int32_t get_offset_of_pinchZoomImage_4() { return static_cast<int32_t>(offsetof(PinchZoomTouchpadClientController_t2854130666, ___pinchZoomImage_4)); }
	inline Image_t2042527209 * get_pinchZoomImage_4() const { return ___pinchZoomImage_4; }
	inline Image_t2042527209 ** get_address_of_pinchZoomImage_4() { return &___pinchZoomImage_4; }
	inline void set_pinchZoomImage_4(Image_t2042527209 * value)
	{
		___pinchZoomImage_4 = value;
		Il2CppCodeGenWriteBarrier(&___pinchZoomImage_4, value);
	}

	inline static int32_t get_offset_of_pinchZoomKey_5() { return static_cast<int32_t>(offsetof(PinchZoomTouchpadClientController_t2854130666, ___pinchZoomKey_5)); }
	inline String_t* get_pinchZoomKey_5() const { return ___pinchZoomKey_5; }
	inline String_t** get_address_of_pinchZoomKey_5() { return &___pinchZoomKey_5; }
	inline void set_pinchZoomKey_5(String_t* value)
	{
		___pinchZoomKey_5 = value;
		Il2CppCodeGenWriteBarrier(&___pinchZoomKey_5, value);
	}

	inline static int32_t get_offset_of_screenPixelsRect_6() { return static_cast<int32_t>(offsetof(PinchZoomTouchpadClientController_t2854130666, ___screenPixelsRect_6)); }
	inline Rect_t3681755626  get_screenPixelsRect_6() const { return ___screenPixelsRect_6; }
	inline Rect_t3681755626 * get_address_of_screenPixelsRect_6() { return &___screenPixelsRect_6; }
	inline void set_screenPixelsRect_6(Rect_t3681755626  value)
	{
		___screenPixelsRect_6 = value;
	}

	inline static int32_t get_offset_of_touchCount_7() { return static_cast<int32_t>(offsetof(PinchZoomTouchpadClientController_t2854130666, ___touchCount_7)); }
	inline int32_t get_touchCount_7() const { return ___touchCount_7; }
	inline int32_t* get_address_of_touchCount_7() { return &___touchCount_7; }
	inline void set_touchCount_7(int32_t value)
	{
		___touchCount_7 = value;
	}

	inline static int32_t get_offset_of_touchMode_8() { return static_cast<int32_t>(offsetof(PinchZoomTouchpadClientController_t2854130666, ___touchMode_8)); }
	inline int32_t get_touchMode_8() const { return ___touchMode_8; }
	inline int32_t* get_address_of_touchMode_8() { return &___touchMode_8; }
	inline void set_touchMode_8(int32_t value)
	{
		___touchMode_8 = value;
	}

	inline static int32_t get_offset_of_lastFrameTouchMode_9() { return static_cast<int32_t>(offsetof(PinchZoomTouchpadClientController_t2854130666, ___lastFrameTouchMode_9)); }
	inline int32_t get_lastFrameTouchMode_9() const { return ___lastFrameTouchMode_9; }
	inline int32_t* get_address_of_lastFrameTouchMode_9() { return &___lastFrameTouchMode_9; }
	inline void set_lastFrameTouchMode_9(int32_t value)
	{
		___lastFrameTouchMode_9 = value;
	}

	inline static int32_t get_offset_of_currentZoomFactor_10() { return static_cast<int32_t>(offsetof(PinchZoomTouchpadClientController_t2854130666, ___currentZoomFactor_10)); }
	inline float get_currentZoomFactor_10() const { return ___currentZoomFactor_10; }
	inline float* get_address_of_currentZoomFactor_10() { return &___currentZoomFactor_10; }
	inline void set_currentZoomFactor_10(float value)
	{
		___currentZoomFactor_10 = value;
	}

	inline static int32_t get_offset_of_currentZoomDistance_11() { return static_cast<int32_t>(offsetof(PinchZoomTouchpadClientController_t2854130666, ___currentZoomDistance_11)); }
	inline float get_currentZoomDistance_11() const { return ___currentZoomDistance_11; }
	inline float* get_address_of_currentZoomDistance_11() { return &___currentZoomDistance_11; }
	inline void set_currentZoomDistance_11(float value)
	{
		___currentZoomDistance_11 = value;
	}

	inline static int32_t get_offset_of_lastFrameZoomDistance_12() { return static_cast<int32_t>(offsetof(PinchZoomTouchpadClientController_t2854130666, ___lastFrameZoomDistance_12)); }
	inline float get_lastFrameZoomDistance_12() const { return ___lastFrameZoomDistance_12; }
	inline float* get_address_of_lastFrameZoomDistance_12() { return &___lastFrameZoomDistance_12; }
	inline void set_lastFrameZoomDistance_12(float value)
	{
		___lastFrameZoomDistance_12 = value;
	}

	inline static int32_t get_offset_of_normalizeFactorX_13() { return static_cast<int32_t>(offsetof(PinchZoomTouchpadClientController_t2854130666, ___normalizeFactorX_13)); }
	inline float get_normalizeFactorX_13() const { return ___normalizeFactorX_13; }
	inline float* get_address_of_normalizeFactorX_13() { return &___normalizeFactorX_13; }
	inline void set_normalizeFactorX_13(float value)
	{
		___normalizeFactorX_13 = value;
	}

	inline static int32_t get_offset_of_normalizeFactorY_14() { return static_cast<int32_t>(offsetof(PinchZoomTouchpadClientController_t2854130666, ___normalizeFactorY_14)); }
	inline float get_normalizeFactorY_14() const { return ___normalizeFactorY_14; }
	inline float* get_address_of_normalizeFactorY_14() { return &___normalizeFactorY_14; }
	inline void set_normalizeFactorY_14(float value)
	{
		___normalizeFactorY_14 = value;
	}

	inline static int32_t get_offset_of_touchZoomMultiplier_15() { return static_cast<int32_t>(offsetof(PinchZoomTouchpadClientController_t2854130666, ___touchZoomMultiplier_15)); }
	inline float get_touchZoomMultiplier_15() const { return ___touchZoomMultiplier_15; }
	inline float* get_address_of_touchZoomMultiplier_15() { return &___touchZoomMultiplier_15; }
	inline void set_touchZoomMultiplier_15(float value)
	{
		___touchZoomMultiplier_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
