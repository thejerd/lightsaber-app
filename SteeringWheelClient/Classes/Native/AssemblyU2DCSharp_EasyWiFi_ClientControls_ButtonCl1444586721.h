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
// UnityEngine.Sprite
struct Sprite_t309593783;
// EasyWiFi.Core.ButtonControllerType
struct ButtonControllerType_t779341258;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ClientControls.ButtonClientController
struct  ButtonClientController_t1444586721  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientControls.ButtonClientController::controlName
	String_t* ___controlName_2;
	// UnityEngine.Sprite EasyWiFi.ClientControls.ButtonClientController::buttonPressedSprite
	Sprite_t309593783 * ___buttonPressedSprite_3;
	// EasyWiFi.Core.ButtonControllerType EasyWiFi.ClientControls.ButtonClientController::button
	ButtonControllerType_t779341258 * ___button_4;
	// UnityEngine.UI.Image EasyWiFi.ClientControls.ButtonClientController::currentImage
	Image_t2042527209 * ___currentImage_5;
	// UnityEngine.Sprite EasyWiFi.ClientControls.ButtonClientController::buttonRegularSprite
	Sprite_t309593783 * ___buttonRegularSprite_6;
	// System.String EasyWiFi.ClientControls.ButtonClientController::buttonKey
	String_t* ___buttonKey_7;
	// UnityEngine.Rect EasyWiFi.ClientControls.ButtonClientController::screenPixelsRect
	Rect_t3681755626  ___screenPixelsRect_8;
	// System.Int32 EasyWiFi.ClientControls.ButtonClientController::touchCount
	int32_t ___touchCount_9;
	// System.Boolean EasyWiFi.ClientControls.ButtonClientController::pressed
	bool ___pressed_10;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(ButtonClientController_t1444586721, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_buttonPressedSprite_3() { return static_cast<int32_t>(offsetof(ButtonClientController_t1444586721, ___buttonPressedSprite_3)); }
	inline Sprite_t309593783 * get_buttonPressedSprite_3() const { return ___buttonPressedSprite_3; }
	inline Sprite_t309593783 ** get_address_of_buttonPressedSprite_3() { return &___buttonPressedSprite_3; }
	inline void set_buttonPressedSprite_3(Sprite_t309593783 * value)
	{
		___buttonPressedSprite_3 = value;
		Il2CppCodeGenWriteBarrier(&___buttonPressedSprite_3, value);
	}

	inline static int32_t get_offset_of_button_4() { return static_cast<int32_t>(offsetof(ButtonClientController_t1444586721, ___button_4)); }
	inline ButtonControllerType_t779341258 * get_button_4() const { return ___button_4; }
	inline ButtonControllerType_t779341258 ** get_address_of_button_4() { return &___button_4; }
	inline void set_button_4(ButtonControllerType_t779341258 * value)
	{
		___button_4 = value;
		Il2CppCodeGenWriteBarrier(&___button_4, value);
	}

	inline static int32_t get_offset_of_currentImage_5() { return static_cast<int32_t>(offsetof(ButtonClientController_t1444586721, ___currentImage_5)); }
	inline Image_t2042527209 * get_currentImage_5() const { return ___currentImage_5; }
	inline Image_t2042527209 ** get_address_of_currentImage_5() { return &___currentImage_5; }
	inline void set_currentImage_5(Image_t2042527209 * value)
	{
		___currentImage_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentImage_5, value);
	}

	inline static int32_t get_offset_of_buttonRegularSprite_6() { return static_cast<int32_t>(offsetof(ButtonClientController_t1444586721, ___buttonRegularSprite_6)); }
	inline Sprite_t309593783 * get_buttonRegularSprite_6() const { return ___buttonRegularSprite_6; }
	inline Sprite_t309593783 ** get_address_of_buttonRegularSprite_6() { return &___buttonRegularSprite_6; }
	inline void set_buttonRegularSprite_6(Sprite_t309593783 * value)
	{
		___buttonRegularSprite_6 = value;
		Il2CppCodeGenWriteBarrier(&___buttonRegularSprite_6, value);
	}

	inline static int32_t get_offset_of_buttonKey_7() { return static_cast<int32_t>(offsetof(ButtonClientController_t1444586721, ___buttonKey_7)); }
	inline String_t* get_buttonKey_7() const { return ___buttonKey_7; }
	inline String_t** get_address_of_buttonKey_7() { return &___buttonKey_7; }
	inline void set_buttonKey_7(String_t* value)
	{
		___buttonKey_7 = value;
		Il2CppCodeGenWriteBarrier(&___buttonKey_7, value);
	}

	inline static int32_t get_offset_of_screenPixelsRect_8() { return static_cast<int32_t>(offsetof(ButtonClientController_t1444586721, ___screenPixelsRect_8)); }
	inline Rect_t3681755626  get_screenPixelsRect_8() const { return ___screenPixelsRect_8; }
	inline Rect_t3681755626 * get_address_of_screenPixelsRect_8() { return &___screenPixelsRect_8; }
	inline void set_screenPixelsRect_8(Rect_t3681755626  value)
	{
		___screenPixelsRect_8 = value;
	}

	inline static int32_t get_offset_of_touchCount_9() { return static_cast<int32_t>(offsetof(ButtonClientController_t1444586721, ___touchCount_9)); }
	inline int32_t get_touchCount_9() const { return ___touchCount_9; }
	inline int32_t* get_address_of_touchCount_9() { return &___touchCount_9; }
	inline void set_touchCount_9(int32_t value)
	{
		___touchCount_9 = value;
	}

	inline static int32_t get_offset_of_pressed_10() { return static_cast<int32_t>(offsetof(ButtonClientController_t1444586721, ___pressed_10)); }
	inline bool get_pressed_10() const { return ___pressed_10; }
	inline bool* get_address_of_pressed_10() { return &___pressed_10; }
	inline void set_pressed_10(bool value)
	{
		___pressed_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
