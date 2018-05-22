#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimateCamper
struct  AnimateCamper_t3368418513  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite AnimateCamper::spr1
	Sprite_t309593783 * ___spr1_2;
	// UnityEngine.Sprite AnimateCamper::spr2
	Sprite_t309593783 * ___spr2_3;
	// UnityEngine.SpriteRenderer AnimateCamper::sprRen
	SpriteRenderer_t1209076198 * ___sprRen_4;

public:
	inline static int32_t get_offset_of_spr1_2() { return static_cast<int32_t>(offsetof(AnimateCamper_t3368418513, ___spr1_2)); }
	inline Sprite_t309593783 * get_spr1_2() const { return ___spr1_2; }
	inline Sprite_t309593783 ** get_address_of_spr1_2() { return &___spr1_2; }
	inline void set_spr1_2(Sprite_t309593783 * value)
	{
		___spr1_2 = value;
		Il2CppCodeGenWriteBarrier(&___spr1_2, value);
	}

	inline static int32_t get_offset_of_spr2_3() { return static_cast<int32_t>(offsetof(AnimateCamper_t3368418513, ___spr2_3)); }
	inline Sprite_t309593783 * get_spr2_3() const { return ___spr2_3; }
	inline Sprite_t309593783 ** get_address_of_spr2_3() { return &___spr2_3; }
	inline void set_spr2_3(Sprite_t309593783 * value)
	{
		___spr2_3 = value;
		Il2CppCodeGenWriteBarrier(&___spr2_3, value);
	}

	inline static int32_t get_offset_of_sprRen_4() { return static_cast<int32_t>(offsetof(AnimateCamper_t3368418513, ___sprRen_4)); }
	inline SpriteRenderer_t1209076198 * get_sprRen_4() const { return ___sprRen_4; }
	inline SpriteRenderer_t1209076198 ** get_address_of_sprRen_4() { return &___sprRen_4; }
	inline void set_sprRen_4(SpriteRenderer_t1209076198 * value)
	{
		___sprRen_4 = value;
		Il2CppCodeGenWriteBarrier(&___sprRen_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
