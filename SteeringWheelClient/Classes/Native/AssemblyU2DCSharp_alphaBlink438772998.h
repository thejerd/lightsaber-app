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

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// alphaBlink
struct  alphaBlink_t438772998  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image alphaBlink::myImage
	Image_t2042527209 * ___myImage_2;
	// UnityEngine.UI.Text alphaBlink::myText
	Text_t356221433 * ___myText_3;
	// UnityEngine.Color alphaBlink::currentImageColor
	Color_t2020392075  ___currentImageColor_4;
	// UnityEngine.Color alphaBlink::currentTextColor
	Color_t2020392075  ___currentTextColor_5;
	// System.Boolean alphaBlink::ascending
	bool ___ascending_6;

public:
	inline static int32_t get_offset_of_myImage_2() { return static_cast<int32_t>(offsetof(alphaBlink_t438772998, ___myImage_2)); }
	inline Image_t2042527209 * get_myImage_2() const { return ___myImage_2; }
	inline Image_t2042527209 ** get_address_of_myImage_2() { return &___myImage_2; }
	inline void set_myImage_2(Image_t2042527209 * value)
	{
		___myImage_2 = value;
		Il2CppCodeGenWriteBarrier(&___myImage_2, value);
	}

	inline static int32_t get_offset_of_myText_3() { return static_cast<int32_t>(offsetof(alphaBlink_t438772998, ___myText_3)); }
	inline Text_t356221433 * get_myText_3() const { return ___myText_3; }
	inline Text_t356221433 ** get_address_of_myText_3() { return &___myText_3; }
	inline void set_myText_3(Text_t356221433 * value)
	{
		___myText_3 = value;
		Il2CppCodeGenWriteBarrier(&___myText_3, value);
	}

	inline static int32_t get_offset_of_currentImageColor_4() { return static_cast<int32_t>(offsetof(alphaBlink_t438772998, ___currentImageColor_4)); }
	inline Color_t2020392075  get_currentImageColor_4() const { return ___currentImageColor_4; }
	inline Color_t2020392075 * get_address_of_currentImageColor_4() { return &___currentImageColor_4; }
	inline void set_currentImageColor_4(Color_t2020392075  value)
	{
		___currentImageColor_4 = value;
	}

	inline static int32_t get_offset_of_currentTextColor_5() { return static_cast<int32_t>(offsetof(alphaBlink_t438772998, ___currentTextColor_5)); }
	inline Color_t2020392075  get_currentTextColor_5() const { return ___currentTextColor_5; }
	inline Color_t2020392075 * get_address_of_currentTextColor_5() { return &___currentTextColor_5; }
	inline void set_currentTextColor_5(Color_t2020392075  value)
	{
		___currentTextColor_5 = value;
	}

	inline static int32_t get_offset_of_ascending_6() { return static_cast<int32_t>(offsetof(alphaBlink_t438772998, ___ascending_6)); }
	inline bool get_ascending_6() const { return ___ascending_6; }
	inline bool* get_address_of_ascending_6() { return &___ascending_6; }
	inline void set_ascending_6(bool value)
	{
		___ascending_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
