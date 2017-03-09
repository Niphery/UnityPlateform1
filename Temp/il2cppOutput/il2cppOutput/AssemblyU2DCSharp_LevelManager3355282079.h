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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// CoinScript[]
struct CoinScriptU5BU5D_t3669417391;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.Sprite
struct Sprite_t309593783;
// ResetOnRespawn[]
struct ResetOnRespawnU5BU5D_t2558994655;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// Fading
struct Fading_t1509347013;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelManager
struct  LevelManager_t3355282079  : public MonoBehaviour_t1158329972
{
public:
	// System.Single LevelManager::respawnTime
	float ___respawnTime_2;
	// PlayerMovement LevelManager::player
	PlayerMovement_t3166138480 * ___player_3;
	// UnityEngine.GameObject LevelManager::deathExplosion
	GameObject_t1756533147 * ___deathExplosion_4;
	// System.Single LevelManager::hurtDelay
	float ___hurtDelay_5;
	// System.Int32 LevelManager::score
	int32_t ___score_6;
	// CoinScript[] LevelManager::coins
	CoinScriptU5BU5D_t3669417391* ___coins_7;
	// System.Int32 LevelManager::totalCoins
	int32_t ___totalCoins_8;
	// UnityEngine.UI.Text LevelManager::scoreText
	Text_t356221433 * ___scoreText_9;
	// UnityEngine.UI.Text LevelManager::livesCount
	Text_t356221433 * ___livesCount_10;
	// UnityEngine.GameObject LevelManager::gameOverScreen
	GameObject_t1756533147 * ___gameOverScreen_11;
	// UnityEngine.UI.Image LevelManager::heart1
	Image_t2042527209 * ___heart1_12;
	// UnityEngine.UI.Image LevelManager::heart2
	Image_t2042527209 * ___heart2_13;
	// UnityEngine.UI.Image LevelManager::heart3
	Image_t2042527209 * ___heart3_14;
	// UnityEngine.Sprite LevelManager::heartFull
	Sprite_t309593783 * ___heartFull_15;
	// UnityEngine.Sprite LevelManager::heartHalf
	Sprite_t309593783 * ___heartHalf_16;
	// UnityEngine.Sprite LevelManager::heartEmpty
	Sprite_t309593783 * ___heartEmpty_17;
	// System.Int32 LevelManager::maxHealth
	int32_t ___maxHealth_18;
	// System.Int32 LevelManager::currentHealth
	int32_t ___currentHealth_19;
	// System.Boolean LevelManager::isHurting
	bool ___isHurting_20;
	// System.Boolean LevelManager::isRespawning
	bool ___isRespawning_21;
	// System.Int32 LevelManager::currentLives
	int32_t ___currentLives_22;
	// System.Int32 LevelManager::startingLives
	int32_t ___startingLives_23;
	// System.Int32 LevelManager::coinsToLife
	int32_t ___coinsToLife_24;
	// ResetOnRespawn[] LevelManager::objectsToReset
	ResetOnRespawnU5BU5D_t2558994655* ___objectsToReset_25;
	// UnityEngine.AudioSource LevelManager::coinPickupSound
	AudioSource_t1135106623 * ___coinPickupSound_26;
	// UnityEngine.AudioSource LevelManager::mainSoundTrack
	AudioSource_t1135106623 * ___mainSoundTrack_27;
	// UnityEngine.AudioSource LevelManager::gameOverSound
	AudioSource_t1135106623 * ___gameOverSound_28;
	// Fading LevelManager::fading
	Fading_t1509347013 * ___fading_29;
	// System.String LevelManager::levelToLoad
	String_t* ___levelToLoad_30;

public:
	inline static int32_t get_offset_of_respawnTime_2() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___respawnTime_2)); }
	inline float get_respawnTime_2() const { return ___respawnTime_2; }
	inline float* get_address_of_respawnTime_2() { return &___respawnTime_2; }
	inline void set_respawnTime_2(float value)
	{
		___respawnTime_2 = value;
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___player_3)); }
	inline PlayerMovement_t3166138480 * get_player_3() const { return ___player_3; }
	inline PlayerMovement_t3166138480 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(PlayerMovement_t3166138480 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_deathExplosion_4() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___deathExplosion_4)); }
	inline GameObject_t1756533147 * get_deathExplosion_4() const { return ___deathExplosion_4; }
	inline GameObject_t1756533147 ** get_address_of_deathExplosion_4() { return &___deathExplosion_4; }
	inline void set_deathExplosion_4(GameObject_t1756533147 * value)
	{
		___deathExplosion_4 = value;
		Il2CppCodeGenWriteBarrier(&___deathExplosion_4, value);
	}

	inline static int32_t get_offset_of_hurtDelay_5() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___hurtDelay_5)); }
	inline float get_hurtDelay_5() const { return ___hurtDelay_5; }
	inline float* get_address_of_hurtDelay_5() { return &___hurtDelay_5; }
	inline void set_hurtDelay_5(float value)
	{
		___hurtDelay_5 = value;
	}

	inline static int32_t get_offset_of_score_6() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___score_6)); }
	inline int32_t get_score_6() const { return ___score_6; }
	inline int32_t* get_address_of_score_6() { return &___score_6; }
	inline void set_score_6(int32_t value)
	{
		___score_6 = value;
	}

	inline static int32_t get_offset_of_coins_7() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___coins_7)); }
	inline CoinScriptU5BU5D_t3669417391* get_coins_7() const { return ___coins_7; }
	inline CoinScriptU5BU5D_t3669417391** get_address_of_coins_7() { return &___coins_7; }
	inline void set_coins_7(CoinScriptU5BU5D_t3669417391* value)
	{
		___coins_7 = value;
		Il2CppCodeGenWriteBarrier(&___coins_7, value);
	}

	inline static int32_t get_offset_of_totalCoins_8() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___totalCoins_8)); }
	inline int32_t get_totalCoins_8() const { return ___totalCoins_8; }
	inline int32_t* get_address_of_totalCoins_8() { return &___totalCoins_8; }
	inline void set_totalCoins_8(int32_t value)
	{
		___totalCoins_8 = value;
	}

	inline static int32_t get_offset_of_scoreText_9() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___scoreText_9)); }
	inline Text_t356221433 * get_scoreText_9() const { return ___scoreText_9; }
	inline Text_t356221433 ** get_address_of_scoreText_9() { return &___scoreText_9; }
	inline void set_scoreText_9(Text_t356221433 * value)
	{
		___scoreText_9 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_9, value);
	}

	inline static int32_t get_offset_of_livesCount_10() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___livesCount_10)); }
	inline Text_t356221433 * get_livesCount_10() const { return ___livesCount_10; }
	inline Text_t356221433 ** get_address_of_livesCount_10() { return &___livesCount_10; }
	inline void set_livesCount_10(Text_t356221433 * value)
	{
		___livesCount_10 = value;
		Il2CppCodeGenWriteBarrier(&___livesCount_10, value);
	}

	inline static int32_t get_offset_of_gameOverScreen_11() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___gameOverScreen_11)); }
	inline GameObject_t1756533147 * get_gameOverScreen_11() const { return ___gameOverScreen_11; }
	inline GameObject_t1756533147 ** get_address_of_gameOverScreen_11() { return &___gameOverScreen_11; }
	inline void set_gameOverScreen_11(GameObject_t1756533147 * value)
	{
		___gameOverScreen_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverScreen_11, value);
	}

	inline static int32_t get_offset_of_heart1_12() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___heart1_12)); }
	inline Image_t2042527209 * get_heart1_12() const { return ___heart1_12; }
	inline Image_t2042527209 ** get_address_of_heart1_12() { return &___heart1_12; }
	inline void set_heart1_12(Image_t2042527209 * value)
	{
		___heart1_12 = value;
		Il2CppCodeGenWriteBarrier(&___heart1_12, value);
	}

	inline static int32_t get_offset_of_heart2_13() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___heart2_13)); }
	inline Image_t2042527209 * get_heart2_13() const { return ___heart2_13; }
	inline Image_t2042527209 ** get_address_of_heart2_13() { return &___heart2_13; }
	inline void set_heart2_13(Image_t2042527209 * value)
	{
		___heart2_13 = value;
		Il2CppCodeGenWriteBarrier(&___heart2_13, value);
	}

	inline static int32_t get_offset_of_heart3_14() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___heart3_14)); }
	inline Image_t2042527209 * get_heart3_14() const { return ___heart3_14; }
	inline Image_t2042527209 ** get_address_of_heart3_14() { return &___heart3_14; }
	inline void set_heart3_14(Image_t2042527209 * value)
	{
		___heart3_14 = value;
		Il2CppCodeGenWriteBarrier(&___heart3_14, value);
	}

	inline static int32_t get_offset_of_heartFull_15() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___heartFull_15)); }
	inline Sprite_t309593783 * get_heartFull_15() const { return ___heartFull_15; }
	inline Sprite_t309593783 ** get_address_of_heartFull_15() { return &___heartFull_15; }
	inline void set_heartFull_15(Sprite_t309593783 * value)
	{
		___heartFull_15 = value;
		Il2CppCodeGenWriteBarrier(&___heartFull_15, value);
	}

	inline static int32_t get_offset_of_heartHalf_16() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___heartHalf_16)); }
	inline Sprite_t309593783 * get_heartHalf_16() const { return ___heartHalf_16; }
	inline Sprite_t309593783 ** get_address_of_heartHalf_16() { return &___heartHalf_16; }
	inline void set_heartHalf_16(Sprite_t309593783 * value)
	{
		___heartHalf_16 = value;
		Il2CppCodeGenWriteBarrier(&___heartHalf_16, value);
	}

	inline static int32_t get_offset_of_heartEmpty_17() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___heartEmpty_17)); }
	inline Sprite_t309593783 * get_heartEmpty_17() const { return ___heartEmpty_17; }
	inline Sprite_t309593783 ** get_address_of_heartEmpty_17() { return &___heartEmpty_17; }
	inline void set_heartEmpty_17(Sprite_t309593783 * value)
	{
		___heartEmpty_17 = value;
		Il2CppCodeGenWriteBarrier(&___heartEmpty_17, value);
	}

	inline static int32_t get_offset_of_maxHealth_18() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___maxHealth_18)); }
	inline int32_t get_maxHealth_18() const { return ___maxHealth_18; }
	inline int32_t* get_address_of_maxHealth_18() { return &___maxHealth_18; }
	inline void set_maxHealth_18(int32_t value)
	{
		___maxHealth_18 = value;
	}

	inline static int32_t get_offset_of_currentHealth_19() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___currentHealth_19)); }
	inline int32_t get_currentHealth_19() const { return ___currentHealth_19; }
	inline int32_t* get_address_of_currentHealth_19() { return &___currentHealth_19; }
	inline void set_currentHealth_19(int32_t value)
	{
		___currentHealth_19 = value;
	}

	inline static int32_t get_offset_of_isHurting_20() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___isHurting_20)); }
	inline bool get_isHurting_20() const { return ___isHurting_20; }
	inline bool* get_address_of_isHurting_20() { return &___isHurting_20; }
	inline void set_isHurting_20(bool value)
	{
		___isHurting_20 = value;
	}

	inline static int32_t get_offset_of_isRespawning_21() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___isRespawning_21)); }
	inline bool get_isRespawning_21() const { return ___isRespawning_21; }
	inline bool* get_address_of_isRespawning_21() { return &___isRespawning_21; }
	inline void set_isRespawning_21(bool value)
	{
		___isRespawning_21 = value;
	}

	inline static int32_t get_offset_of_currentLives_22() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___currentLives_22)); }
	inline int32_t get_currentLives_22() const { return ___currentLives_22; }
	inline int32_t* get_address_of_currentLives_22() { return &___currentLives_22; }
	inline void set_currentLives_22(int32_t value)
	{
		___currentLives_22 = value;
	}

	inline static int32_t get_offset_of_startingLives_23() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___startingLives_23)); }
	inline int32_t get_startingLives_23() const { return ___startingLives_23; }
	inline int32_t* get_address_of_startingLives_23() { return &___startingLives_23; }
	inline void set_startingLives_23(int32_t value)
	{
		___startingLives_23 = value;
	}

	inline static int32_t get_offset_of_coinsToLife_24() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___coinsToLife_24)); }
	inline int32_t get_coinsToLife_24() const { return ___coinsToLife_24; }
	inline int32_t* get_address_of_coinsToLife_24() { return &___coinsToLife_24; }
	inline void set_coinsToLife_24(int32_t value)
	{
		___coinsToLife_24 = value;
	}

	inline static int32_t get_offset_of_objectsToReset_25() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___objectsToReset_25)); }
	inline ResetOnRespawnU5BU5D_t2558994655* get_objectsToReset_25() const { return ___objectsToReset_25; }
	inline ResetOnRespawnU5BU5D_t2558994655** get_address_of_objectsToReset_25() { return &___objectsToReset_25; }
	inline void set_objectsToReset_25(ResetOnRespawnU5BU5D_t2558994655* value)
	{
		___objectsToReset_25 = value;
		Il2CppCodeGenWriteBarrier(&___objectsToReset_25, value);
	}

	inline static int32_t get_offset_of_coinPickupSound_26() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___coinPickupSound_26)); }
	inline AudioSource_t1135106623 * get_coinPickupSound_26() const { return ___coinPickupSound_26; }
	inline AudioSource_t1135106623 ** get_address_of_coinPickupSound_26() { return &___coinPickupSound_26; }
	inline void set_coinPickupSound_26(AudioSource_t1135106623 * value)
	{
		___coinPickupSound_26 = value;
		Il2CppCodeGenWriteBarrier(&___coinPickupSound_26, value);
	}

	inline static int32_t get_offset_of_mainSoundTrack_27() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___mainSoundTrack_27)); }
	inline AudioSource_t1135106623 * get_mainSoundTrack_27() const { return ___mainSoundTrack_27; }
	inline AudioSource_t1135106623 ** get_address_of_mainSoundTrack_27() { return &___mainSoundTrack_27; }
	inline void set_mainSoundTrack_27(AudioSource_t1135106623 * value)
	{
		___mainSoundTrack_27 = value;
		Il2CppCodeGenWriteBarrier(&___mainSoundTrack_27, value);
	}

	inline static int32_t get_offset_of_gameOverSound_28() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___gameOverSound_28)); }
	inline AudioSource_t1135106623 * get_gameOverSound_28() const { return ___gameOverSound_28; }
	inline AudioSource_t1135106623 ** get_address_of_gameOverSound_28() { return &___gameOverSound_28; }
	inline void set_gameOverSound_28(AudioSource_t1135106623 * value)
	{
		___gameOverSound_28 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverSound_28, value);
	}

	inline static int32_t get_offset_of_fading_29() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___fading_29)); }
	inline Fading_t1509347013 * get_fading_29() const { return ___fading_29; }
	inline Fading_t1509347013 ** get_address_of_fading_29() { return &___fading_29; }
	inline void set_fading_29(Fading_t1509347013 * value)
	{
		___fading_29 = value;
		Il2CppCodeGenWriteBarrier(&___fading_29, value);
	}

	inline static int32_t get_offset_of_levelToLoad_30() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___levelToLoad_30)); }
	inline String_t* get_levelToLoad_30() const { return ___levelToLoad_30; }
	inline String_t** get_address_of_levelToLoad_30() { return &___levelToLoad_30; }
	inline void set_levelToLoad_30(String_t* value)
	{
		___levelToLoad_30 = value;
		Il2CppCodeGenWriteBarrier(&___levelToLoad_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
