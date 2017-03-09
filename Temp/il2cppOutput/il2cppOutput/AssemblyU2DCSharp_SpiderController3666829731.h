#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpiderController
struct  SpiderController_t3666829731  : public MonoBehaviour_t1158329972
{
public:
	// System.Single SpiderController::movementSpeed
	float ___movementSpeed_2;
	// System.Boolean SpiderController::canMove
	bool ___canMove_3;
	// UnityEngine.Rigidbody2D SpiderController::rbody
	Rigidbody2D_t502193897 * ___rbody_4;

public:
	inline static int32_t get_offset_of_movementSpeed_2() { return static_cast<int32_t>(offsetof(SpiderController_t3666829731, ___movementSpeed_2)); }
	inline float get_movementSpeed_2() const { return ___movementSpeed_2; }
	inline float* get_address_of_movementSpeed_2() { return &___movementSpeed_2; }
	inline void set_movementSpeed_2(float value)
	{
		___movementSpeed_2 = value;
	}

	inline static int32_t get_offset_of_canMove_3() { return static_cast<int32_t>(offsetof(SpiderController_t3666829731, ___canMove_3)); }
	inline bool get_canMove_3() const { return ___canMove_3; }
	inline bool* get_address_of_canMove_3() { return &___canMove_3; }
	inline void set_canMove_3(bool value)
	{
		___canMove_3 = value;
	}

	inline static int32_t get_offset_of_rbody_4() { return static_cast<int32_t>(offsetof(SpiderController_t3666829731, ___rbody_4)); }
	inline Rigidbody2D_t502193897 * get_rbody_4() const { return ___rbody_4; }
	inline Rigidbody2D_t502193897 ** get_address_of_rbody_4() { return &___rbody_4; }
	inline void set_rbody_4(Rigidbody2D_t502193897 * value)
	{
		___rbody_4 = value;
		Il2CppCodeGenWriteBarrier(&___rbody_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
