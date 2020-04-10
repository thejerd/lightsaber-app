#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.TextMesh
struct TextMesh_t1641806576;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnchorTextAbove
struct  AnchorTextAbove_t3201238557  : public MonoBehaviour_t1158329972
{
public:
	// System.String AnchorTextAbove::Text
	String_t* ___Text_2;
	// UnityEngine.TextMesh AnchorTextAbove::textTM
	TextMesh_t1641806576 * ___textTM_3;
	// UnityEngine.Camera AnchorTextAbove::mainCamera
	Camera_t189460977 * ___mainCamera_4;

public:
	inline static int32_t get_offset_of_Text_2() { return static_cast<int32_t>(offsetof(AnchorTextAbove_t3201238557, ___Text_2)); }
	inline String_t* get_Text_2() const { return ___Text_2; }
	inline String_t** get_address_of_Text_2() { return &___Text_2; }
	inline void set_Text_2(String_t* value)
	{
		___Text_2 = value;
		Il2CppCodeGenWriteBarrier(&___Text_2, value);
	}

	inline static int32_t get_offset_of_textTM_3() { return static_cast<int32_t>(offsetof(AnchorTextAbove_t3201238557, ___textTM_3)); }
	inline TextMesh_t1641806576 * get_textTM_3() const { return ___textTM_3; }
	inline TextMesh_t1641806576 ** get_address_of_textTM_3() { return &___textTM_3; }
	inline void set_textTM_3(TextMesh_t1641806576 * value)
	{
		___textTM_3 = value;
		Il2CppCodeGenWriteBarrier(&___textTM_3, value);
	}

	inline static int32_t get_offset_of_mainCamera_4() { return static_cast<int32_t>(offsetof(AnchorTextAbove_t3201238557, ___mainCamera_4)); }
	inline Camera_t189460977 * get_mainCamera_4() const { return ___mainCamera_4; }
	inline Camera_t189460977 ** get_address_of_mainCamera_4() { return &___mainCamera_4; }
	inline void set_mainCamera_4(Camera_t189460977 * value)
	{
		___mainCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
