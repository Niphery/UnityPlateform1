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
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResetOnRespawn
struct  ResetOnRespawn_t590155258  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 ResetOnRespawn::startPosition
	Vector3_t2243707580  ___startPosition_2;
	// UnityEngine.Quaternion ResetOnRespawn::startRotation
	Quaternion_t4030073918  ___startRotation_3;
	// UnityEngine.Vector3 ResetOnRespawn::startScale
	Vector3_t2243707580  ___startScale_4;
	// UnityEngine.Rigidbody2D ResetOnRespawn::rbody
	Rigidbody2D_t502193897 * ___rbody_5;

public:
	inline static int32_t get_offset_of_startPosition_2() { return static_cast<int32_t>(offsetof(ResetOnRespawn_t590155258, ___startPosition_2)); }
	inline Vector3_t2243707580  get_startPosition_2() const { return ___startPosition_2; }
	inline Vector3_t2243707580 * get_address_of_startPosition_2() { return &___startPosition_2; }
	inline void set_startPosition_2(Vector3_t2243707580  value)
	{
		___startPosition_2 = value;
	}

	inline static int32_t get_offset_of_startRotation_3() { return static_cast<int32_t>(offsetof(ResetOnRespawn_t590155258, ___startRotation_3)); }
	inline Quaternion_t4030073918  get_startRotation_3() const { return ___startRotation_3; }
	inline Quaternion_t4030073918 * get_address_of_startRotation_3() { return &___startRotation_3; }
	inline void set_startRotation_3(Quaternion_t4030073918  value)
	{
		___startRotation_3 = value;
	}

	inline static int32_t get_offset_of_startScale_4() { return static_cast<int32_t>(offsetof(ResetOnRespawn_t590155258, ___startScale_4)); }
	inline Vector3_t2243707580  get_startScale_4() const { return ___startScale_4; }
	inline Vector3_t2243707580 * get_address_of_startScale_4() { return &___startScale_4; }
	inline void set_startScale_4(Vector3_t2243707580  value)
	{
		___startScale_4 = value;
	}

	inline static int32_t get_offset_of_rbody_5() { return static_cast<int32_t>(offsetof(ResetOnRespawn_t590155258, ___rbody_5)); }
	inline Rigidbody2D_t502193897 * get_rbody_5() const { return ___rbody_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_rbody_5() { return &___rbody_5; }
	inline void set_rbody_5(Rigidbody2D_t502193897 * value)
	{
		___rbody_5 = value;
		Il2CppCodeGenWriteBarrier(&___rbody_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
