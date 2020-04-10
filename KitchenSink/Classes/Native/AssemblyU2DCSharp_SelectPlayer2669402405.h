#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// ControllerConnected
struct ControllerConnected_t603867325;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SelectPlayer
struct  SelectPlayer_t2669402405  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 SelectPlayer::p1Center
	Vector2_t2243707579  ___p1Center_2;
	// UnityEngine.Vector2 SelectPlayer::p2Center
	Vector2_t2243707579  ___p2Center_3;
	// UnityEngine.Vector2 SelectPlayer::p3Center
	Vector2_t2243707579  ___p3Center_4;
	// UnityEngine.Vector2 SelectPlayer::p4Center
	Vector2_t2243707579  ___p4Center_5;
	// ControllerConnected SelectPlayer::cc
	ControllerConnected_t603867325 * ___cc_6;
	// System.Int32 SelectPlayer::currentLogicalPlayer
	int32_t ___currentLogicalPlayer_7;
	// UnityEngine.Vector3 SelectPlayer::lockedPosition
	Vector3_t2243707580  ___lockedPosition_8;
	// System.Boolean SelectPlayer::isLocked
	bool ___isLocked_9;
	// System.Int32 SelectPlayer::lockedArea
	int32_t ___lockedArea_10;
	// UnityEngine.RectTransform SelectPlayer::myRT
	RectTransform_t3349966182 * ___myRT_11;
	// UnityEngine.UI.Image SelectPlayer::sprite
	Image_t2042527209 * ___sprite_12;

public:
	inline static int32_t get_offset_of_p1Center_2() { return static_cast<int32_t>(offsetof(SelectPlayer_t2669402405, ___p1Center_2)); }
	inline Vector2_t2243707579  get_p1Center_2() const { return ___p1Center_2; }
	inline Vector2_t2243707579 * get_address_of_p1Center_2() { return &___p1Center_2; }
	inline void set_p1Center_2(Vector2_t2243707579  value)
	{
		___p1Center_2 = value;
	}

	inline static int32_t get_offset_of_p2Center_3() { return static_cast<int32_t>(offsetof(SelectPlayer_t2669402405, ___p2Center_3)); }
	inline Vector2_t2243707579  get_p2Center_3() const { return ___p2Center_3; }
	inline Vector2_t2243707579 * get_address_of_p2Center_3() { return &___p2Center_3; }
	inline void set_p2Center_3(Vector2_t2243707579  value)
	{
		___p2Center_3 = value;
	}

	inline static int32_t get_offset_of_p3Center_4() { return static_cast<int32_t>(offsetof(SelectPlayer_t2669402405, ___p3Center_4)); }
	inline Vector2_t2243707579  get_p3Center_4() const { return ___p3Center_4; }
	inline Vector2_t2243707579 * get_address_of_p3Center_4() { return &___p3Center_4; }
	inline void set_p3Center_4(Vector2_t2243707579  value)
	{
		___p3Center_4 = value;
	}

	inline static int32_t get_offset_of_p4Center_5() { return static_cast<int32_t>(offsetof(SelectPlayer_t2669402405, ___p4Center_5)); }
	inline Vector2_t2243707579  get_p4Center_5() const { return ___p4Center_5; }
	inline Vector2_t2243707579 * get_address_of_p4Center_5() { return &___p4Center_5; }
	inline void set_p4Center_5(Vector2_t2243707579  value)
	{
		___p4Center_5 = value;
	}

	inline static int32_t get_offset_of_cc_6() { return static_cast<int32_t>(offsetof(SelectPlayer_t2669402405, ___cc_6)); }
	inline ControllerConnected_t603867325 * get_cc_6() const { return ___cc_6; }
	inline ControllerConnected_t603867325 ** get_address_of_cc_6() { return &___cc_6; }
	inline void set_cc_6(ControllerConnected_t603867325 * value)
	{
		___cc_6 = value;
		Il2CppCodeGenWriteBarrier(&___cc_6, value);
	}

	inline static int32_t get_offset_of_currentLogicalPlayer_7() { return static_cast<int32_t>(offsetof(SelectPlayer_t2669402405, ___currentLogicalPlayer_7)); }
	inline int32_t get_currentLogicalPlayer_7() const { return ___currentLogicalPlayer_7; }
	inline int32_t* get_address_of_currentLogicalPlayer_7() { return &___currentLogicalPlayer_7; }
	inline void set_currentLogicalPlayer_7(int32_t value)
	{
		___currentLogicalPlayer_7 = value;
	}

	inline static int32_t get_offset_of_lockedPosition_8() { return static_cast<int32_t>(offsetof(SelectPlayer_t2669402405, ___lockedPosition_8)); }
	inline Vector3_t2243707580  get_lockedPosition_8() const { return ___lockedPosition_8; }
	inline Vector3_t2243707580 * get_address_of_lockedPosition_8() { return &___lockedPosition_8; }
	inline void set_lockedPosition_8(Vector3_t2243707580  value)
	{
		___lockedPosition_8 = value;
	}

	inline static int32_t get_offset_of_isLocked_9() { return static_cast<int32_t>(offsetof(SelectPlayer_t2669402405, ___isLocked_9)); }
	inline bool get_isLocked_9() const { return ___isLocked_9; }
	inline bool* get_address_of_isLocked_9() { return &___isLocked_9; }
	inline void set_isLocked_9(bool value)
	{
		___isLocked_9 = value;
	}

	inline static int32_t get_offset_of_lockedArea_10() { return static_cast<int32_t>(offsetof(SelectPlayer_t2669402405, ___lockedArea_10)); }
	inline int32_t get_lockedArea_10() const { return ___lockedArea_10; }
	inline int32_t* get_address_of_lockedArea_10() { return &___lockedArea_10; }
	inline void set_lockedArea_10(int32_t value)
	{
		___lockedArea_10 = value;
	}

	inline static int32_t get_offset_of_myRT_11() { return static_cast<int32_t>(offsetof(SelectPlayer_t2669402405, ___myRT_11)); }
	inline RectTransform_t3349966182 * get_myRT_11() const { return ___myRT_11; }
	inline RectTransform_t3349966182 ** get_address_of_myRT_11() { return &___myRT_11; }
	inline void set_myRT_11(RectTransform_t3349966182 * value)
	{
		___myRT_11 = value;
		Il2CppCodeGenWriteBarrier(&___myRT_11, value);
	}

	inline static int32_t get_offset_of_sprite_12() { return static_cast<int32_t>(offsetof(SelectPlayer_t2669402405, ___sprite_12)); }
	inline Image_t2042527209 * get_sprite_12() const { return ___sprite_12; }
	inline Image_t2042527209 ** get_address_of_sprite_12() { return &___sprite_12; }
	inline void set_sprite_12(Image_t2042527209 * value)
	{
		___sprite_12 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
