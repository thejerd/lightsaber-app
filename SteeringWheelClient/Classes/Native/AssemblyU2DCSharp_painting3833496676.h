#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// painting
struct  painting_t3833496676  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject painting::paintObject
	GameObject_t1756533147 * ___paintObject_2;
	// UnityEngine.GameObject painting::panel
	GameObject_t1756533147 * ___panel_3;
	// UnityEngine.GameObject painting::currentObject
	GameObject_t1756533147 * ___currentObject_4;
	// UnityEngine.RectTransform painting::currentRT
	RectTransform_t3349966182 * ___currentRT_5;
	// UnityEngine.UI.Image painting::currentImage
	Image_t2042527209 * ___currentImage_6;
	// UnityEngine.RectTransform painting::canvas
	RectTransform_t3349966182 * ___canvas_7;
	// UnityEngine.Color painting::currentColor
	Color_t2020392075  ___currentColor_8;
	// System.Single painting::canvasWidth
	float ___canvasWidth_9;
	// System.Single painting::canvasHeight
	float ___canvasHeight_10;
	// System.Single painting::drawPositionX
	float ___drawPositionX_11;
	// System.Single painting::drawPositionY
	float ___drawPositionY_12;
	// System.Boolean painting::isRed
	bool ___isRed_13;
	// System.Boolean painting::isBlue
	bool ___isBlue_14;
	// System.Boolean painting::isGreen
	bool ___isGreen_15;

public:
	inline static int32_t get_offset_of_paintObject_2() { return static_cast<int32_t>(offsetof(painting_t3833496676, ___paintObject_2)); }
	inline GameObject_t1756533147 * get_paintObject_2() const { return ___paintObject_2; }
	inline GameObject_t1756533147 ** get_address_of_paintObject_2() { return &___paintObject_2; }
	inline void set_paintObject_2(GameObject_t1756533147 * value)
	{
		___paintObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___paintObject_2, value);
	}

	inline static int32_t get_offset_of_panel_3() { return static_cast<int32_t>(offsetof(painting_t3833496676, ___panel_3)); }
	inline GameObject_t1756533147 * get_panel_3() const { return ___panel_3; }
	inline GameObject_t1756533147 ** get_address_of_panel_3() { return &___panel_3; }
	inline void set_panel_3(GameObject_t1756533147 * value)
	{
		___panel_3 = value;
		Il2CppCodeGenWriteBarrier(&___panel_3, value);
	}

	inline static int32_t get_offset_of_currentObject_4() { return static_cast<int32_t>(offsetof(painting_t3833496676, ___currentObject_4)); }
	inline GameObject_t1756533147 * get_currentObject_4() const { return ___currentObject_4; }
	inline GameObject_t1756533147 ** get_address_of_currentObject_4() { return &___currentObject_4; }
	inline void set_currentObject_4(GameObject_t1756533147 * value)
	{
		___currentObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentObject_4, value);
	}

	inline static int32_t get_offset_of_currentRT_5() { return static_cast<int32_t>(offsetof(painting_t3833496676, ___currentRT_5)); }
	inline RectTransform_t3349966182 * get_currentRT_5() const { return ___currentRT_5; }
	inline RectTransform_t3349966182 ** get_address_of_currentRT_5() { return &___currentRT_5; }
	inline void set_currentRT_5(RectTransform_t3349966182 * value)
	{
		___currentRT_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentRT_5, value);
	}

	inline static int32_t get_offset_of_currentImage_6() { return static_cast<int32_t>(offsetof(painting_t3833496676, ___currentImage_6)); }
	inline Image_t2042527209 * get_currentImage_6() const { return ___currentImage_6; }
	inline Image_t2042527209 ** get_address_of_currentImage_6() { return &___currentImage_6; }
	inline void set_currentImage_6(Image_t2042527209 * value)
	{
		___currentImage_6 = value;
		Il2CppCodeGenWriteBarrier(&___currentImage_6, value);
	}

	inline static int32_t get_offset_of_canvas_7() { return static_cast<int32_t>(offsetof(painting_t3833496676, ___canvas_7)); }
	inline RectTransform_t3349966182 * get_canvas_7() const { return ___canvas_7; }
	inline RectTransform_t3349966182 ** get_address_of_canvas_7() { return &___canvas_7; }
	inline void set_canvas_7(RectTransform_t3349966182 * value)
	{
		___canvas_7 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_7, value);
	}

	inline static int32_t get_offset_of_currentColor_8() { return static_cast<int32_t>(offsetof(painting_t3833496676, ___currentColor_8)); }
	inline Color_t2020392075  get_currentColor_8() const { return ___currentColor_8; }
	inline Color_t2020392075 * get_address_of_currentColor_8() { return &___currentColor_8; }
	inline void set_currentColor_8(Color_t2020392075  value)
	{
		___currentColor_8 = value;
	}

	inline static int32_t get_offset_of_canvasWidth_9() { return static_cast<int32_t>(offsetof(painting_t3833496676, ___canvasWidth_9)); }
	inline float get_canvasWidth_9() const { return ___canvasWidth_9; }
	inline float* get_address_of_canvasWidth_9() { return &___canvasWidth_9; }
	inline void set_canvasWidth_9(float value)
	{
		___canvasWidth_9 = value;
	}

	inline static int32_t get_offset_of_canvasHeight_10() { return static_cast<int32_t>(offsetof(painting_t3833496676, ___canvasHeight_10)); }
	inline float get_canvasHeight_10() const { return ___canvasHeight_10; }
	inline float* get_address_of_canvasHeight_10() { return &___canvasHeight_10; }
	inline void set_canvasHeight_10(float value)
	{
		___canvasHeight_10 = value;
	}

	inline static int32_t get_offset_of_drawPositionX_11() { return static_cast<int32_t>(offsetof(painting_t3833496676, ___drawPositionX_11)); }
	inline float get_drawPositionX_11() const { return ___drawPositionX_11; }
	inline float* get_address_of_drawPositionX_11() { return &___drawPositionX_11; }
	inline void set_drawPositionX_11(float value)
	{
		___drawPositionX_11 = value;
	}

	inline static int32_t get_offset_of_drawPositionY_12() { return static_cast<int32_t>(offsetof(painting_t3833496676, ___drawPositionY_12)); }
	inline float get_drawPositionY_12() const { return ___drawPositionY_12; }
	inline float* get_address_of_drawPositionY_12() { return &___drawPositionY_12; }
	inline void set_drawPositionY_12(float value)
	{
		___drawPositionY_12 = value;
	}

	inline static int32_t get_offset_of_isRed_13() { return static_cast<int32_t>(offsetof(painting_t3833496676, ___isRed_13)); }
	inline bool get_isRed_13() const { return ___isRed_13; }
	inline bool* get_address_of_isRed_13() { return &___isRed_13; }
	inline void set_isRed_13(bool value)
	{
		___isRed_13 = value;
	}

	inline static int32_t get_offset_of_isBlue_14() { return static_cast<int32_t>(offsetof(painting_t3833496676, ___isBlue_14)); }
	inline bool get_isBlue_14() const { return ___isBlue_14; }
	inline bool* get_address_of_isBlue_14() { return &___isBlue_14; }
	inline void set_isBlue_14(bool value)
	{
		___isBlue_14 = value;
	}

	inline static int32_t get_offset_of_isGreen_15() { return static_cast<int32_t>(offsetof(painting_t3833496676, ___isGreen_15)); }
	inline bool get_isGreen_15() const { return ___isGreen_15; }
	inline bool* get_address_of_isGreen_15() { return &___isGreen_15; }
	inline void set_isGreen_15(bool value)
	{
		___isGreen_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
