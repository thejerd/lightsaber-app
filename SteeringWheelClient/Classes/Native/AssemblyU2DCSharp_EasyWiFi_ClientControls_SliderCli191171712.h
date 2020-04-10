#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_EasyWiFi_Core_EasyWiFiConstants_3509208717.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.String
struct String_t;
// UnityEngine.UI.Image
struct Image_t2042527209;
// EasyWiFi.Core.SliderControllerType
struct SliderControllerType_t324347559;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ClientControls.SliderClientController
struct  SliderClientController_t191171712  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientControls.SliderClientController::controlName
	String_t* ___controlName_2;
	// EasyWiFi.Core.EasyWiFiConstants/SLIDER_TYPE EasyWiFi.ClientControls.SliderClientController::orientation
	int32_t ___orientation_3;
	// UnityEngine.UI.Image EasyWiFi.ClientControls.SliderClientController::sliderImageForeground
	Image_t2042527209 * ___sliderImageForeground_4;
	// EasyWiFi.Core.SliderControllerType EasyWiFi.ClientControls.SliderClientController::slider
	SliderControllerType_t324347559 * ___slider_5;
	// UnityEngine.UI.Image EasyWiFi.ClientControls.SliderClientController::sliderImageBackground
	Image_t2042527209 * ___sliderImageBackground_6;
	// System.String EasyWiFi.ClientControls.SliderClientController::sliderKey
	String_t* ___sliderKey_7;
	// UnityEngine.Rect EasyWiFi.ClientControls.SliderClientController::screenPixelsRect
	Rect_t3681755626  ___screenPixelsRect_8;
	// System.Int32 EasyWiFi.ClientControls.SliderClientController::touchCount
	int32_t ___touchCount_9;
	// UnityEngine.Vector3 EasyWiFi.ClientControls.SliderClientController::defaultNubPosition
	Vector3_t2243707580  ___defaultNubPosition_10;
	// System.Single EasyWiFi.ClientControls.SliderClientController::normalizeFactor
	float ___normalizeFactor_11;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(SliderClientController_t191171712, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_orientation_3() { return static_cast<int32_t>(offsetof(SliderClientController_t191171712, ___orientation_3)); }
	inline int32_t get_orientation_3() const { return ___orientation_3; }
	inline int32_t* get_address_of_orientation_3() { return &___orientation_3; }
	inline void set_orientation_3(int32_t value)
	{
		___orientation_3 = value;
	}

	inline static int32_t get_offset_of_sliderImageForeground_4() { return static_cast<int32_t>(offsetof(SliderClientController_t191171712, ___sliderImageForeground_4)); }
	inline Image_t2042527209 * get_sliderImageForeground_4() const { return ___sliderImageForeground_4; }
	inline Image_t2042527209 ** get_address_of_sliderImageForeground_4() { return &___sliderImageForeground_4; }
	inline void set_sliderImageForeground_4(Image_t2042527209 * value)
	{
		___sliderImageForeground_4 = value;
		Il2CppCodeGenWriteBarrier(&___sliderImageForeground_4, value);
	}

	inline static int32_t get_offset_of_slider_5() { return static_cast<int32_t>(offsetof(SliderClientController_t191171712, ___slider_5)); }
	inline SliderControllerType_t324347559 * get_slider_5() const { return ___slider_5; }
	inline SliderControllerType_t324347559 ** get_address_of_slider_5() { return &___slider_5; }
	inline void set_slider_5(SliderControllerType_t324347559 * value)
	{
		___slider_5 = value;
		Il2CppCodeGenWriteBarrier(&___slider_5, value);
	}

	inline static int32_t get_offset_of_sliderImageBackground_6() { return static_cast<int32_t>(offsetof(SliderClientController_t191171712, ___sliderImageBackground_6)); }
	inline Image_t2042527209 * get_sliderImageBackground_6() const { return ___sliderImageBackground_6; }
	inline Image_t2042527209 ** get_address_of_sliderImageBackground_6() { return &___sliderImageBackground_6; }
	inline void set_sliderImageBackground_6(Image_t2042527209 * value)
	{
		___sliderImageBackground_6 = value;
		Il2CppCodeGenWriteBarrier(&___sliderImageBackground_6, value);
	}

	inline static int32_t get_offset_of_sliderKey_7() { return static_cast<int32_t>(offsetof(SliderClientController_t191171712, ___sliderKey_7)); }
	inline String_t* get_sliderKey_7() const { return ___sliderKey_7; }
	inline String_t** get_address_of_sliderKey_7() { return &___sliderKey_7; }
	inline void set_sliderKey_7(String_t* value)
	{
		___sliderKey_7 = value;
		Il2CppCodeGenWriteBarrier(&___sliderKey_7, value);
	}

	inline static int32_t get_offset_of_screenPixelsRect_8() { return static_cast<int32_t>(offsetof(SliderClientController_t191171712, ___screenPixelsRect_8)); }
	inline Rect_t3681755626  get_screenPixelsRect_8() const { return ___screenPixelsRect_8; }
	inline Rect_t3681755626 * get_address_of_screenPixelsRect_8() { return &___screenPixelsRect_8; }
	inline void set_screenPixelsRect_8(Rect_t3681755626  value)
	{
		___screenPixelsRect_8 = value;
	}

	inline static int32_t get_offset_of_touchCount_9() { return static_cast<int32_t>(offsetof(SliderClientController_t191171712, ___touchCount_9)); }
	inline int32_t get_touchCount_9() const { return ___touchCount_9; }
	inline int32_t* get_address_of_touchCount_9() { return &___touchCount_9; }
	inline void set_touchCount_9(int32_t value)
	{
		___touchCount_9 = value;
	}

	inline static int32_t get_offset_of_defaultNubPosition_10() { return static_cast<int32_t>(offsetof(SliderClientController_t191171712, ___defaultNubPosition_10)); }
	inline Vector3_t2243707580  get_defaultNubPosition_10() const { return ___defaultNubPosition_10; }
	inline Vector3_t2243707580 * get_address_of_defaultNubPosition_10() { return &___defaultNubPosition_10; }
	inline void set_defaultNubPosition_10(Vector3_t2243707580  value)
	{
		___defaultNubPosition_10 = value;
	}

	inline static int32_t get_offset_of_normalizeFactor_11() { return static_cast<int32_t>(offsetof(SliderClientController_t191171712, ___normalizeFactor_11)); }
	inline float get_normalizeFactor_11() const { return ___normalizeFactor_11; }
	inline float* get_address_of_normalizeFactor_11() { return &___normalizeFactor_11; }
	inline void set_normalizeFactor_11(float value)
	{
		___normalizeFactor_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
