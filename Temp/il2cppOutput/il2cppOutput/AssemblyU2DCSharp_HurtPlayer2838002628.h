#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerMovement
struct PlayerMovement_t3166138480;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HurtPlayer
struct  HurtPlayer_t2838002628  : public MonoBehaviour_t1158329972
{
public:
	// PlayerMovement HurtPlayer::player
	PlayerMovement_t3166138480 * ___player_2;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(HurtPlayer_t2838002628, ___player_2)); }
	inline PlayerMovement_t3166138480 * get_player_2() const { return ___player_2; }
	inline PlayerMovement_t3166138480 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(PlayerMovement_t3166138480 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
