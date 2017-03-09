#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFollow
struct  CameraFollow_t1493855402  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform CameraFollow::target
	Transform_t3275118058 * ___target_2;
	// UnityEngine.Camera CameraFollow::myCam
	Camera_t189460977 * ___myCam_3;
	// System.Single CameraFollow::movementSpeed
	float ___movementSpeed_4;
	// System.Single CameraFollow::followAhead
	float ___followAhead_5;
	// System.Boolean CameraFollow::isFollowingTarget
	bool ___isFollowingTarget_6;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_myCam_3() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___myCam_3)); }
	inline Camera_t189460977 * get_myCam_3() const { return ___myCam_3; }
	inline Camera_t189460977 ** get_address_of_myCam_3() { return &___myCam_3; }
	inline void set_myCam_3(Camera_t189460977 * value)
	{
		___myCam_3 = value;
		Il2CppCodeGenWriteBarrier(&___myCam_3, value);
	}

	inline static int32_t get_offset_of_movementSpeed_4() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___movementSpeed_4)); }
	inline float get_movementSpeed_4() const { return ___movementSpeed_4; }
	inline float* get_address_of_movementSpeed_4() { return &___movementSpeed_4; }
	inline void set_movementSpeed_4(float value)
	{
		___movementSpeed_4 = value;
	}

	inline static int32_t get_offset_of_followAhead_5() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___followAhead_5)); }
	inline float get_followAhead_5() const { return ___followAhead_5; }
	inline float* get_address_of_followAhead_5() { return &___followAhead_5; }
	inline void set_followAhead_5(float value)
	{
		___followAhead_5 = value;
	}

	inline static int32_t get_offset_of_isFollowingTarget_6() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___isFollowingTarget_6)); }
	inline bool get_isFollowingTarget_6() const { return ___isFollowingTarget_6; }
	inline bool* get_address_of_isFollowingTarget_6() { return &___isFollowingTarget_6; }
	inline void set_isFollowingTarget_6(bool value)
	{
		___isFollowingTarget_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
