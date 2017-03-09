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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// killZoneFollow
struct  killZoneFollow_t859715347  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform killZoneFollow::player
	Transform_t3275118058 * ___player_2;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(killZoneFollow_t859715347, ___player_2)); }
	inline Transform_t3275118058 * get_player_2() const { return ___player_2; }
	inline Transform_t3275118058 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Transform_t3275118058 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
