#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Char[]
struct CharU5BU5D_t1328083999;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// avatarCustomization
struct  avatarCustomization_t2873311894  : public MonoBehaviour_t1158329972
{
public:
	// System.Char[] avatarCustomization::avatarCustomizationState
	CharU5BU5D_t1328083999* ___avatarCustomizationState_2;
	// System.Int32 avatarCustomization::avatarID
	int32_t ___avatarID_3;

public:
	inline static int32_t get_offset_of_avatarCustomizationState_2() { return static_cast<int32_t>(offsetof(avatarCustomization_t2873311894, ___avatarCustomizationState_2)); }
	inline CharU5BU5D_t1328083999* get_avatarCustomizationState_2() const { return ___avatarCustomizationState_2; }
	inline CharU5BU5D_t1328083999** get_address_of_avatarCustomizationState_2() { return &___avatarCustomizationState_2; }
	inline void set_avatarCustomizationState_2(CharU5BU5D_t1328083999* value)
	{
		___avatarCustomizationState_2 = value;
		Il2CppCodeGenWriteBarrier(&___avatarCustomizationState_2, value);
	}

	inline static int32_t get_offset_of_avatarID_3() { return static_cast<int32_t>(offsetof(avatarCustomization_t2873311894, ___avatarID_3)); }
	inline int32_t get_avatarID_3() const { return ___avatarID_3; }
	inline int32_t* get_address_of_avatarID_3() { return &___avatarID_3; }
	inline void set_avatarID_3(int32_t value)
	{
		___avatarID_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
