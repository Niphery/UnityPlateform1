#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StompEnnemie
struct  StompEnnemie_t1026820368  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject StompEnnemie::deathExplosion
	GameObject_t1756533147 * ___deathExplosion_2;
	// UnityEngine.Rigidbody2D StompEnnemie::playerRBdoy
	Rigidbody2D_t502193897 * ___playerRBdoy_3;
	// System.Single StompEnnemie::bouceForce
	float ___bouceForce_4;

public:
	inline static int32_t get_offset_of_deathExplosion_2() { return static_cast<int32_t>(offsetof(StompEnnemie_t1026820368, ___deathExplosion_2)); }
	inline GameObject_t1756533147 * get_deathExplosion_2() const { return ___deathExplosion_2; }
	inline GameObject_t1756533147 ** get_address_of_deathExplosion_2() { return &___deathExplosion_2; }
	inline void set_deathExplosion_2(GameObject_t1756533147 * value)
	{
		___deathExplosion_2 = value;
		Il2CppCodeGenWriteBarrier(&___deathExplosion_2, value);
	}

	inline static int32_t get_offset_of_playerRBdoy_3() { return static_cast<int32_t>(offsetof(StompEnnemie_t1026820368, ___playerRBdoy_3)); }
	inline Rigidbody2D_t502193897 * get_playerRBdoy_3() const { return ___playerRBdoy_3; }
	inline Rigidbody2D_t502193897 ** get_address_of_playerRBdoy_3() { return &___playerRBdoy_3; }
	inline void set_playerRBdoy_3(Rigidbody2D_t502193897 * value)
	{
		___playerRBdoy_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerRBdoy_3, value);
	}

	inline static int32_t get_offset_of_bouceForce_4() { return static_cast<int32_t>(offsetof(StompEnnemie_t1026820368, ___bouceForce_4)); }
	inline float get_bouceForce_4() const { return ___bouceForce_4; }
	inline float* get_address_of_bouceForce_4() { return &___bouceForce_4; }
	inline void set_bouceForce_4(float value)
	{
		___bouceForce_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
