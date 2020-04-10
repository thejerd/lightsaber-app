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
// EasyWiFi.Core.DpadControllerType
struct DpadControllerType_t2563694279;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ClientControls.DpadClientController
struct  DpadClientController_t1376666748  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientControls.DpadClientController::controlName
	String_t* ___controlName_2;
	// System.Single EasyWiFi.ClientControls.DpadClientController::lowThreshold
	float ___lowThreshold_3;
	// EasyWiFi.Core.DpadControllerType EasyWiFi.ClientControls.DpadClientController::dPad
	DpadControllerType_t2563694279 * ___dPad_4;
	// UnityEngine.UI.Image EasyWiFi.ClientControls.DpadClientController::dPadImage
	Image_t2042527209 * ___dPadImage_5;
	// System.String EasyWiFi.ClientControls.DpadClientController::dPadKey
	String_t* ___dPadKey_6;
	// UnityEngine.Rect EasyWiFi.ClientControls.DpadClientController::screenPixelsRect
	Rect_t3681755626  ___screenPixelsRect_7;
	// System.Int32 EasyWiFi.ClientControls.DpadClientController::touchCount
	int32_t ___touchCount_8;
	// System.Single EasyWiFi.ClientControls.DpadClientController::normalizeFactorX
	float ___normalizeFactorX_9;
	// System.Single EasyWiFi.ClientControls.DpadClientController::normalizeFactorY
	float ___normalizeFactorY_10;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(DpadClientController_t1376666748, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_lowThreshold_3() { return static_cast<int32_t>(offsetof(DpadClientController_t1376666748, ___lowThreshold_3)); }
	inline float get_lowThreshold_3() const { return ___lowThreshold_3; }
	inline float* get_address_of_lowThreshold_3() { return &___lowThreshold_3; }
	inline void set_lowThreshold_3(float value)
	{
		___lowThreshold_3 = value;
	}

	inline static int32_t get_offset_of_dPad_4() { return static_cast<int32_t>(offsetof(DpadClientController_t1376666748, ___dPad_4)); }
	inline DpadControllerType_t2563694279 * get_dPad_4() const { return ___dPad_4; }
	inline DpadControllerType_t2563694279 ** get_address_of_dPad_4() { return &___dPad_4; }
	inline void set_dPad_4(DpadControllerType_t2563694279 * value)
	{
		___dPad_4 = value;
		Il2CppCodeGenWriteBarrier(&___dPad_4, value);
	}

	inline static int32_t get_offset_of_dPadImage_5() { return static_cast<int32_t>(offsetof(DpadClientController_t1376666748, ___dPadImage_5)); }
	inline Image_t2042527209 * get_dPadImage_5() const { return ___dPadImage_5; }
	inline Image_t2042527209 ** get_address_of_dPadImage_5() { return &___dPadImage_5; }
	inline void set_dPadImage_5(Image_t2042527209 * value)
	{
		___dPadImage_5 = value;
		Il2CppCodeGenWriteBarrier(&___dPadImage_5, value);
	}

	inline static int32_t get_offset_of_dPadKey_6() { return static_cast<int32_t>(offsetof(DpadClientController_t1376666748, ___dPadKey_6)); }
	inline String_t* get_dPadKey_6() const { return ___dPadKey_6; }
	inline String_t** get_address_of_dPadKey_6() { return &___dPadKey_6; }
	inline void set_dPadKey_6(String_t* value)
	{
		___dPadKey_6 = value;
		Il2CppCodeGenWriteBarrier(&___dPadKey_6, value);
	}

	inline static int32_t get_offset_of_screenPixelsRect_7() { return static_cast<int32_t>(offsetof(DpadClientController_t1376666748, ___screenPixelsRect_7)); }
	inline Rect_t3681755626  get_screenPixelsRect_7() const { return ___screenPixelsRect_7; }
	inline Rect_t3681755626 * get_address_of_screenPixelsRect_7() { return &___screenPixelsRect_7; }
	inline void set_screenPixelsRect_7(Rect_t3681755626  value)
	{
		___screenPixelsRect_7 = value;
	}

	inline static int32_t get_offset_of_touchCount_8() { return static_cast<int32_t>(offsetof(DpadClientController_t1376666748, ___touchCount_8)); }
	inline int32_t get_touchCount_8() const { return ___touchCount_8; }
	inline int32_t* get_address_of_touchCount_8() { return &___touchCount_8; }
	inline void set_touchCount_8(int32_t value)
	{
		___touchCount_8 = value;
	}

	inline static int32_t get_offset_of_normalizeFactorX_9() { return static_cast<int32_t>(offsetof(DpadClientController_t1376666748, ___normalizeFactorX_9)); }
	inline float get_normalizeFactorX_9() const { return ___normalizeFactorX_9; }
	inline float* get_address_of_normalizeFactorX_9() { return &___normalizeFactorX_9; }
	inline void set_normalizeFactorX_9(float value)
	{
		___normalizeFactorX_9 = value;
	}

	inline static int32_t get_offset_of_normalizeFactorY_10() { return static_cast<int32_t>(offsetof(DpadClientController_t1376666748, ___normalizeFactorY_10)); }
	inline float get_normalizeFactorY_10() const { return ___normalizeFactorY_10; }
	inline float* get_address_of_normalizeFactorY_10() { return &___normalizeFactorY_10; }
	inline void set_normalizeFactorY_10(float value)
	{
		___normalizeFactorY_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
