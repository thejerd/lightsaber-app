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

// EasyWiFi.ClientControls.SwitchButtonClientController
struct  SwitchButtonClientController_t3939424911  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyWiFi.ClientControls.SwitchButtonClientController::controlName
	String_t* ___controlName_2;
	// UnityEngine.Sprite EasyWiFi.ClientControls.SwitchButtonClientController::buttonPressedSprite
	Sprite_t309593783 * ___buttonPressedSprite_3;
	// System.Single EasyWiFi.ClientControls.SwitchButtonClientController::fastestPressRate
	float ___fastestPressRate_4;
	// EasyWiFi.Core.ButtonControllerType EasyWiFi.ClientControls.SwitchButtonClientController::button
	ButtonControllerType_t779341258 * ___button_5;
	// UnityEngine.UI.Image EasyWiFi.ClientControls.SwitchButtonClientController::currentImage
	Image_t2042527209 * ___currentImage_6;
	// UnityEngine.Sprite EasyWiFi.ClientControls.SwitchButtonClientController::buttonRegularSprite
	Sprite_t309593783 * ___buttonRegularSprite_7;
	// System.String EasyWiFi.ClientControls.SwitchButtonClientController::buttonKey
	String_t* ___buttonKey_8;
	// UnityEngine.Rect EasyWiFi.ClientControls.SwitchButtonClientController::screenPixelsRect
	Rect_t3681755626  ___screenPixelsRect_9;
	// System.Int32 EasyWiFi.ClientControls.SwitchButtonClientController::touchCount
	int32_t ___touchCount_10;
	// System.Boolean EasyWiFi.ClientControls.SwitchButtonClientController::pressed
	bool ___pressed_11;
	// System.Boolean EasyWiFi.ClientControls.SwitchButtonClientController::momentartyLock
	bool ___momentartyLock_12;

public:
	inline static int32_t get_offset_of_controlName_2() { return static_cast<int32_t>(offsetof(SwitchButtonClientController_t3939424911, ___controlName_2)); }
	inline String_t* get_controlName_2() const { return ___controlName_2; }
	inline String_t** get_address_of_controlName_2() { return &___controlName_2; }
	inline void set_controlName_2(String_t* value)
	{
		___controlName_2 = value;
		Il2CppCodeGenWriteBarrier(&___controlName_2, value);
	}

	inline static int32_t get_offset_of_buttonPressedSprite_3() { return static_cast<int32_t>(offsetof(SwitchButtonClientController_t3939424911, ___buttonPressedSprite_3)); }
	inline Sprite_t309593783 * get_buttonPressedSprite_3() const { return ___buttonPressedSprite_3; }
	inline Sprite_t309593783 ** get_address_of_buttonPressedSprite_3() { return &___buttonPressedSprite_3; }
	inline void set_buttonPressedSprite_3(Sprite_t309593783 * value)
	{
		___buttonPressedSprite_3 = value;
		Il2CppCodeGenWriteBarrier(&___buttonPressedSprite_3, value);
	}

	inline static int32_t get_offset_of_fastestPressRate_4() { return static_cast<int32_t>(offsetof(SwitchButtonClientController_t3939424911, ___fastestPressRate_4)); }
	inline float get_fastestPressRate_4() const { return ___fastestPressRate_4; }
	inline float* get_address_of_fastestPressRate_4() { return &___fastestPressRate_4; }
	inline void set_fastestPressRate_4(float value)
	{
		___fastestPressRate_4 = value;
	}

	inline static int32_t get_offset_of_button_5() { return static_cast<int32_t>(offsetof(SwitchButtonClientController_t3939424911, ___button_5)); }
	inline ButtonControllerType_t779341258 * get_button_5() const { return ___button_5; }
	inline ButtonControllerType_t779341258 ** get_address_of_button_5() { return &___button_5; }
	inline void set_button_5(ButtonControllerType_t779341258 * value)
	{
		___button_5 = value;
		Il2CppCodeGenWriteBarrier(&___button_5, value);
	}

	inline static int32_t get_offset_of_currentImage_6() { return static_cast<int32_t>(offsetof(SwitchButtonClientController_t3939424911, ___currentImage_6)); }
	inline Image_t2042527209 * get_currentImage_6() const { return ___currentImage_6; }
	inline Image_t2042527209 ** get_address_of_currentImage_6() { return &___currentImage_6; }
	inline void set_currentImage_6(Image_t2042527209 * value)
	{
		___currentImage_6 = value;
		Il2CppCodeGenWriteBarrier(&___currentImage_6, value);
	}

	inline static int32_t get_offset_of_buttonRegularSprite_7() { return static_cast<int32_t>(offsetof(SwitchButtonClientController_t3939424911, ___buttonRegularSprite_7)); }
	inline Sprite_t309593783 * get_buttonRegularSprite_7() const { return ___buttonRegularSprite_7; }
	inline Sprite_t309593783 ** get_address_of_buttonRegularSprite_7() { return &___buttonRegularSprite_7; }
	inline void set_buttonRegularSprite_7(Sprite_t309593783 * value)
	{
		___buttonRegularSprite_7 = value;
		Il2CppCodeGenWriteBarrier(&___buttonRegularSprite_7, value);
	}

	inline static int32_t get_offset_of_buttonKey_8() { return static_cast<int32_t>(offsetof(SwitchButtonClientController_t3939424911, ___buttonKey_8)); }
	inline String_t* get_buttonKey_8() const { return ___buttonKey_8; }
	inline String_t** get_address_of_buttonKey_8() { return &___buttonKey_8; }
	inline void set_buttonKey_8(String_t* value)
	{
		___buttonKey_8 = value;
		Il2CppCodeGenWriteBarrier(&___buttonKey_8, value);
	}

	inline static int32_t get_offset_of_screenPixelsRect_9() { return static_cast<int32_t>(offsetof(SwitchButtonClientController_t3939424911, ___screenPixelsRect_9)); }
	inline Rect_t3681755626  get_screenPixelsRect_9() const { return ___screenPixelsRect_9; }
	inline Rect_t3681755626 * get_address_of_screenPixelsRect_9() { return &___screenPixelsRect_9; }
	inline void set_screenPixelsRect_9(Rect_t3681755626  value)
	{
		___screenPixelsRect_9 = value;
	}

	inline static int32_t get_offset_of_touchCount_10() { return static_cast<int32_t>(offsetof(SwitchButtonClientController_t3939424911, ___touchCount_10)); }
	inline int32_t get_touchCount_10() const { return ___touchCount_10; }
	inline int32_t* get_address_of_touchCount_10() { return &___touchCount_10; }
	inline void set_touchCount_10(int32_t value)
	{
		___touchCount_10 = value;
	}

	inline static int32_t get_offset_of_pressed_11() { return static_cast<int32_t>(offsetof(SwitchButtonClientController_t3939424911, ___pressed_11)); }
	inline bool get_pressed_11() const { return ___pressed_11; }
	inline bool* get_address_of_pressed_11() { return &___pressed_11; }
	inline void set_pressed_11(bool value)
	{
		___pressed_11 = value;
	}

	inline static int32_t get_offset_of_momentartyLock_12() { return static_cast<int32_t>(offsetof(SwitchButtonClientController_t3939424911, ___momentartyLock_12)); }
	inline bool get_momentartyLock_12() const { return ___momentartyLock_12; }
	inline bool* get_address_of_momentartyLock_12() { return &___momentartyLock_12; }
	inline void set_momentartyLock_12(bool value)
	{
		___momentartyLock_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
