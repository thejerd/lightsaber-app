#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFollowBall
struct  CameraFollowBall_t4204594585  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CameraFollowBall::objectToFollow
	GameObject_t1756533147 * ___objectToFollow_2;
	// UnityEngine.Transform CameraFollowBall::objectTransform
	Transform_t3275118058 * ___objectTransform_3;
	// UnityEngine.Vector3 CameraFollowBall::newPosition
	Vector3_t2243707580  ___newPosition_4;

public:
	inline static int32_t get_offset_of_objectToFollow_2() { return static_cast<int32_t>(offsetof(CameraFollowBall_t4204594585, ___objectToFollow_2)); }
	inline GameObject_t1756533147 * get_objectToFollow_2() const { return ___objectToFollow_2; }
	inline GameObject_t1756533147 ** get_address_of_objectToFollow_2() { return &___objectToFollow_2; }
	inline void set_objectToFollow_2(GameObject_t1756533147 * value)
	{
		___objectToFollow_2 = value;
		Il2CppCodeGenWriteBarrier(&___objectToFollow_2, value);
	}

	inline static int32_t get_offset_of_objectTransform_3() { return static_cast<int32_t>(offsetof(CameraFollowBall_t4204594585, ___objectTransform_3)); }
	inline Transform_t3275118058 * get_objectTransform_3() const { return ___objectTransform_3; }
	inline Transform_t3275118058 ** get_address_of_objectTransform_3() { return &___objectTransform_3; }
	inline void set_objectTransform_3(Transform_t3275118058 * value)
	{
		___objectTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___objectTransform_3, value);
	}

	inline static int32_t get_offset_of_newPosition_4() { return static_cast<int32_t>(offsetof(CameraFollowBall_t4204594585, ___newPosition_4)); }
	inline Vector3_t2243707580  get_newPosition_4() const { return ___newPosition_4; }
	inline Vector3_t2243707580 * get_address_of_newPosition_4() { return &___newPosition_4; }
	inline void set_newPosition_4(Vector3_t2243707580  value)
	{
		___newPosition_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
