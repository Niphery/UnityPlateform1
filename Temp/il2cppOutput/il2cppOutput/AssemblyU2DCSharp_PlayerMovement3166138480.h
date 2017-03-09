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
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMovement
struct  PlayerMovement_t3166138480  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D PlayerMovement::rbody
	Rigidbody2D_t502193897 * ___rbody_2;
	// UnityEngine.Animator PlayerMovement::anim
	Animator_t69676727 * ___anim_3;
	// System.Single PlayerMovement::movementSpeed
	float ___movementSpeed_4;
	// System.Single PlayerMovement::jumpPower
	float ___jumpPower_5;
	// UnityEngine.Transform PlayerMovement::groundChecker
	Transform_t3275118058 * ___groundChecker_6;
	// System.Single PlayerMovement::groundCheckRadius
	float ___groundCheckRadius_7;
	// UnityEngine.LayerMask PlayerMovement::whatIsGround
	LayerMask_t3188175821  ___whatIsGround_8;
	// System.Boolean PlayerMovement::isGrounded
	bool ___isGrounded_9;
	// System.Boolean PlayerMovement::isDoubleJumping
	bool ___isDoubleJumping_10;
	// System.Boolean PlayerMovement::isDead
	bool ___isDead_11;
	// System.Boolean PlayerMovement::isHurting
	bool ___isHurting_12;
	// UnityEngine.Vector3 PlayerMovement::respawnPosition
	Vector3_t2243707580  ___respawnPosition_13;
	// UnityEngine.Vector3 PlayerMovement::originalPosition
	Vector3_t2243707580  ___originalPosition_14;
	// UnityEngine.GameObject PlayerMovement::stompBox
	GameObject_t1756533147 * ___stompBox_15;
	// System.Single PlayerMovement::knockBackForce
	float ___knockBackForce_16;
	// System.Single PlayerMovement::knockBackLenght
	float ___knockBackLenght_17;
	// System.Single PlayerMovement::knockBackCounter
	float ___knockBackCounter_18;
	// System.Boolean PlayerMovement::isInvicible
	bool ___isInvicible_19;
	// System.Single PlayerMovement::invincibilityLenght
	float ___invincibilityLenght_20;
	// System.Single PlayerMovement::invincibilityCounter
	float ___invincibilityCounter_21;
	// UnityEngine.AudioSource PlayerMovement::jumpSound
	AudioSource_t1135106623 * ___jumpSound_22;
	// UnityEngine.AudioSource PlayerMovement::hurtSound
	AudioSource_t1135106623 * ___hurtSound_23;

public:
	inline static int32_t get_offset_of_rbody_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___rbody_2)); }
	inline Rigidbody2D_t502193897 * get_rbody_2() const { return ___rbody_2; }
	inline Rigidbody2D_t502193897 ** get_address_of_rbody_2() { return &___rbody_2; }
	inline void set_rbody_2(Rigidbody2D_t502193897 * value)
	{
		___rbody_2 = value;
		Il2CppCodeGenWriteBarrier(&___rbody_2, value);
	}

	inline static int32_t get_offset_of_anim_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___anim_3)); }
	inline Animator_t69676727 * get_anim_3() const { return ___anim_3; }
	inline Animator_t69676727 ** get_address_of_anim_3() { return &___anim_3; }
	inline void set_anim_3(Animator_t69676727 * value)
	{
		___anim_3 = value;
		Il2CppCodeGenWriteBarrier(&___anim_3, value);
	}

	inline static int32_t get_offset_of_movementSpeed_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___movementSpeed_4)); }
	inline float get_movementSpeed_4() const { return ___movementSpeed_4; }
	inline float* get_address_of_movementSpeed_4() { return &___movementSpeed_4; }
	inline void set_movementSpeed_4(float value)
	{
		___movementSpeed_4 = value;
	}

	inline static int32_t get_offset_of_jumpPower_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___jumpPower_5)); }
	inline float get_jumpPower_5() const { return ___jumpPower_5; }
	inline float* get_address_of_jumpPower_5() { return &___jumpPower_5; }
	inline void set_jumpPower_5(float value)
	{
		___jumpPower_5 = value;
	}

	inline static int32_t get_offset_of_groundChecker_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___groundChecker_6)); }
	inline Transform_t3275118058 * get_groundChecker_6() const { return ___groundChecker_6; }
	inline Transform_t3275118058 ** get_address_of_groundChecker_6() { return &___groundChecker_6; }
	inline void set_groundChecker_6(Transform_t3275118058 * value)
	{
		___groundChecker_6 = value;
		Il2CppCodeGenWriteBarrier(&___groundChecker_6, value);
	}

	inline static int32_t get_offset_of_groundCheckRadius_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___groundCheckRadius_7)); }
	inline float get_groundCheckRadius_7() const { return ___groundCheckRadius_7; }
	inline float* get_address_of_groundCheckRadius_7() { return &___groundCheckRadius_7; }
	inline void set_groundCheckRadius_7(float value)
	{
		___groundCheckRadius_7 = value;
	}

	inline static int32_t get_offset_of_whatIsGround_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___whatIsGround_8)); }
	inline LayerMask_t3188175821  get_whatIsGround_8() const { return ___whatIsGround_8; }
	inline LayerMask_t3188175821 * get_address_of_whatIsGround_8() { return &___whatIsGround_8; }
	inline void set_whatIsGround_8(LayerMask_t3188175821  value)
	{
		___whatIsGround_8 = value;
	}

	inline static int32_t get_offset_of_isGrounded_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___isGrounded_9)); }
	inline bool get_isGrounded_9() const { return ___isGrounded_9; }
	inline bool* get_address_of_isGrounded_9() { return &___isGrounded_9; }
	inline void set_isGrounded_9(bool value)
	{
		___isGrounded_9 = value;
	}

	inline static int32_t get_offset_of_isDoubleJumping_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___isDoubleJumping_10)); }
	inline bool get_isDoubleJumping_10() const { return ___isDoubleJumping_10; }
	inline bool* get_address_of_isDoubleJumping_10() { return &___isDoubleJumping_10; }
	inline void set_isDoubleJumping_10(bool value)
	{
		___isDoubleJumping_10 = value;
	}

	inline static int32_t get_offset_of_isDead_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___isDead_11)); }
	inline bool get_isDead_11() const { return ___isDead_11; }
	inline bool* get_address_of_isDead_11() { return &___isDead_11; }
	inline void set_isDead_11(bool value)
	{
		___isDead_11 = value;
	}

	inline static int32_t get_offset_of_isHurting_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___isHurting_12)); }
	inline bool get_isHurting_12() const { return ___isHurting_12; }
	inline bool* get_address_of_isHurting_12() { return &___isHurting_12; }
	inline void set_isHurting_12(bool value)
	{
		___isHurting_12 = value;
	}

	inline static int32_t get_offset_of_respawnPosition_13() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___respawnPosition_13)); }
	inline Vector3_t2243707580  get_respawnPosition_13() const { return ___respawnPosition_13; }
	inline Vector3_t2243707580 * get_address_of_respawnPosition_13() { return &___respawnPosition_13; }
	inline void set_respawnPosition_13(Vector3_t2243707580  value)
	{
		___respawnPosition_13 = value;
	}

	inline static int32_t get_offset_of_originalPosition_14() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___originalPosition_14)); }
	inline Vector3_t2243707580  get_originalPosition_14() const { return ___originalPosition_14; }
	inline Vector3_t2243707580 * get_address_of_originalPosition_14() { return &___originalPosition_14; }
	inline void set_originalPosition_14(Vector3_t2243707580  value)
	{
		___originalPosition_14 = value;
	}

	inline static int32_t get_offset_of_stompBox_15() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___stompBox_15)); }
	inline GameObject_t1756533147 * get_stompBox_15() const { return ___stompBox_15; }
	inline GameObject_t1756533147 ** get_address_of_stompBox_15() { return &___stompBox_15; }
	inline void set_stompBox_15(GameObject_t1756533147 * value)
	{
		___stompBox_15 = value;
		Il2CppCodeGenWriteBarrier(&___stompBox_15, value);
	}

	inline static int32_t get_offset_of_knockBackForce_16() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___knockBackForce_16)); }
	inline float get_knockBackForce_16() const { return ___knockBackForce_16; }
	inline float* get_address_of_knockBackForce_16() { return &___knockBackForce_16; }
	inline void set_knockBackForce_16(float value)
	{
		___knockBackForce_16 = value;
	}

	inline static int32_t get_offset_of_knockBackLenght_17() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___knockBackLenght_17)); }
	inline float get_knockBackLenght_17() const { return ___knockBackLenght_17; }
	inline float* get_address_of_knockBackLenght_17() { return &___knockBackLenght_17; }
	inline void set_knockBackLenght_17(float value)
	{
		___knockBackLenght_17 = value;
	}

	inline static int32_t get_offset_of_knockBackCounter_18() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___knockBackCounter_18)); }
	inline float get_knockBackCounter_18() const { return ___knockBackCounter_18; }
	inline float* get_address_of_knockBackCounter_18() { return &___knockBackCounter_18; }
	inline void set_knockBackCounter_18(float value)
	{
		___knockBackCounter_18 = value;
	}

	inline static int32_t get_offset_of_isInvicible_19() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___isInvicible_19)); }
	inline bool get_isInvicible_19() const { return ___isInvicible_19; }
	inline bool* get_address_of_isInvicible_19() { return &___isInvicible_19; }
	inline void set_isInvicible_19(bool value)
	{
		___isInvicible_19 = value;
	}

	inline static int32_t get_offset_of_invincibilityLenght_20() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___invincibilityLenght_20)); }
	inline float get_invincibilityLenght_20() const { return ___invincibilityLenght_20; }
	inline float* get_address_of_invincibilityLenght_20() { return &___invincibilityLenght_20; }
	inline void set_invincibilityLenght_20(float value)
	{
		___invincibilityLenght_20 = value;
	}

	inline static int32_t get_offset_of_invincibilityCounter_21() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___invincibilityCounter_21)); }
	inline float get_invincibilityCounter_21() const { return ___invincibilityCounter_21; }
	inline float* get_address_of_invincibilityCounter_21() { return &___invincibilityCounter_21; }
	inline void set_invincibilityCounter_21(float value)
	{
		___invincibilityCounter_21 = value;
	}

	inline static int32_t get_offset_of_jumpSound_22() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___jumpSound_22)); }
	inline AudioSource_t1135106623 * get_jumpSound_22() const { return ___jumpSound_22; }
	inline AudioSource_t1135106623 ** get_address_of_jumpSound_22() { return &___jumpSound_22; }
	inline void set_jumpSound_22(AudioSource_t1135106623 * value)
	{
		___jumpSound_22 = value;
		Il2CppCodeGenWriteBarrier(&___jumpSound_22, value);
	}

	inline static int32_t get_offset_of_hurtSound_23() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___hurtSound_23)); }
	inline AudioSource_t1135106623 * get_hurtSound_23() const { return ___hurtSound_23; }
	inline AudioSource_t1135106623 ** get_address_of_hurtSound_23() { return &___hurtSound_23; }
	inline void set_hurtSound_23(AudioSource_t1135106623 * value)
	{
		___hurtSound_23 = value;
		Il2CppCodeGenWriteBarrier(&___hurtSound_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
