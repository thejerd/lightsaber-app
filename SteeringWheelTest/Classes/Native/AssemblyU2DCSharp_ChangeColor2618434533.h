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

// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeColor
struct  ChangeColor_t2618434533  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.MeshRenderer ChangeColor::myRenderer
	MeshRenderer_t1268241104 * ___myRenderer_2;
	// UnityEngine.Material ChangeColor::myMaterial
	Material_t193706927 * ___myMaterial_3;
	// UnityEngine.Color ChangeColor::originalColor
	Color_t2020392075  ___originalColor_4;
	// System.Boolean ChangeColor::isPressed
	bool ___isPressed_5;

public:
	inline static int32_t get_offset_of_myRenderer_2() { return static_cast<int32_t>(offsetof(ChangeColor_t2618434533, ___myRenderer_2)); }
	inline MeshRenderer_t1268241104 * get_myRenderer_2() const { return ___myRenderer_2; }
	inline MeshRenderer_t1268241104 ** get_address_of_myRenderer_2() { return &___myRenderer_2; }
	inline void set_myRenderer_2(MeshRenderer_t1268241104 * value)
	{
		___myRenderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___myRenderer_2, value);
	}

	inline static int32_t get_offset_of_myMaterial_3() { return static_cast<int32_t>(offsetof(ChangeColor_t2618434533, ___myMaterial_3)); }
	inline Material_t193706927 * get_myMaterial_3() const { return ___myMaterial_3; }
	inline Material_t193706927 ** get_address_of_myMaterial_3() { return &___myMaterial_3; }
	inline void set_myMaterial_3(Material_t193706927 * value)
	{
		___myMaterial_3 = value;
		Il2CppCodeGenWriteBarrier(&___myMaterial_3, value);
	}

	inline static int32_t get_offset_of_originalColor_4() { return static_cast<int32_t>(offsetof(ChangeColor_t2618434533, ___originalColor_4)); }
	inline Color_t2020392075  get_originalColor_4() const { return ___originalColor_4; }
	inline Color_t2020392075 * get_address_of_originalColor_4() { return &___originalColor_4; }
	inline void set_originalColor_4(Color_t2020392075  value)
	{
		___originalColor_4 = value;
	}

	inline static int32_t get_offset_of_isPressed_5() { return static_cast<int32_t>(offsetof(ChangeColor_t2618434533, ___isPressed_5)); }
	inline bool get_isPressed_5() const { return ___isPressed_5; }
	inline bool* get_address_of_isPressed_5() { return &___isPressed_5; }
	inline void set_isPressed_5(bool value)
	{
		___isPressed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
