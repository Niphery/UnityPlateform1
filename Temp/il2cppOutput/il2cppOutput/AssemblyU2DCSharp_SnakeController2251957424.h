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
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SnakeController
struct  SnakeController_t2251957424  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform SnakeController::leftPoint
	Transform_t3275118058 * ___leftPoint_2;
	// UnityEngine.Transform SnakeController::rightPoint
	Transform_t3275118058 * ___rightPoint_3;
	// System.Single SnakeController::movementSpeed
	float ___movementSpeed_4;
	// System.Boolean SnakeController::isMovingRight
	bool ___isMovingRight_5;
	// UnityEngine.Rigidbody2D SnakeController::rbody
	Rigidbody2D_t502193897 * ___rbody_6;
	// System.Boolean SnakeController::canMove
	bool ___canMove_7;

public:
	inline static int32_t get_offset_of_leftPoint_2() { return static_cast<int32_t>(offsetof(SnakeController_t2251957424, ___leftPoint_2)); }
	inline Transform_t3275118058 * get_leftPoint_2() const { return ___leftPoint_2; }
	inline Transform_t3275118058 ** get_address_of_leftPoint_2() { return &___leftPoint_2; }
	inline void set_leftPoint_2(Transform_t3275118058 * value)
	{
		___leftPoint_2 = value;
		Il2CppCodeGenWriteBarrier(&___leftPoint_2, value);
	}

	inline static int32_t get_offset_of_rightPoint_3() { return static_cast<int32_t>(offsetof(SnakeController_t2251957424, ___rightPoint_3)); }
	inline Transform_t3275118058 * get_rightPoint_3() const { return ___rightPoint_3; }
	inline Transform_t3275118058 ** get_address_of_rightPoint_3() { return &___rightPoint_3; }
	inline void set_rightPoint_3(Transform_t3275118058 * value)
	{
		___rightPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___rightPoint_3, value);
	}

	inline static int32_t get_offset_of_movementSpeed_4() { return static_cast<int32_t>(offsetof(SnakeController_t2251957424, ___movementSpeed_4)); }
	inline float get_movementSpeed_4() const { return ___movementSpeed_4; }
	inline float* get_address_of_movementSpeed_4() { return &___movementSpeed_4; }
	inline void set_movementSpeed_4(float value)
	{
		___movementSpeed_4 = value;
	}

	inline static int32_t get_offset_of_isMovingRight_5() { return static_cast<int32_t>(offsetof(SnakeController_t2251957424, ___isMovingRight_5)); }
	inline bool get_isMovingRight_5() const { return ___isMovingRight_5; }
	inline bool* get_address_of_isMovingRight_5() { return &___isMovingRight_5; }
	inline void set_isMovingRight_5(bool value)
	{
		___isMovingRight_5 = value;
	}

	inline static int32_t get_offset_of_rbody_6() { return static_cast<int32_t>(offsetof(SnakeController_t2251957424, ___rbody_6)); }
	inline Rigidbody2D_t502193897 * get_rbody_6() const { return ___rbody_6; }
	inline Rigidbody2D_t502193897 ** get_address_of_rbody_6() { return &___rbody_6; }
	inline void set_rbody_6(Rigidbody2D_t502193897 * value)
	{
		___rbody_6 = value;
		Il2CppCodeGenWriteBarrier(&___rbody_6, value);
	}

	inline static int32_t get_offset_of_canMove_7() { return static_cast<int32_t>(offsetof(SnakeController_t2251957424, ___canMove_7)); }
	inline bool get_canMove_7() const { return ___canMove_7; }
	inline bool* get_address_of_canMove_7() { return &___canMove_7; }
	inline void set_canMove_7(bool value)
	{
		___canMove_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
