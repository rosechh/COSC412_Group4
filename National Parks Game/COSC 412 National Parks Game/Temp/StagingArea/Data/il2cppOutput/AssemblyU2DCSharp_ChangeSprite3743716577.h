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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeSprite
struct  ChangeSprite_t3743716577  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite ChangeSprite::locSprite
	Sprite_t309593783 * ___locSprite_2;

public:
	inline static int32_t get_offset_of_locSprite_2() { return static_cast<int32_t>(offsetof(ChangeSprite_t3743716577, ___locSprite_2)); }
	inline Sprite_t309593783 * get_locSprite_2() const { return ___locSprite_2; }
	inline Sprite_t309593783 ** get_address_of_locSprite_2() { return &___locSprite_2; }
	inline void set_locSprite_2(Sprite_t309593783 * value)
	{
		___locSprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___locSprite_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
