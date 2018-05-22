#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Dropdown
struct Dropdown_t1985816271;
// UnityEngine.Animator
struct Animator_t69676727;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeAvatar
struct  ChangeAvatar_t2593165369  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Dropdown ChangeAvatar::avatar_Dropdown
	Dropdown_t1985816271 * ___avatar_Dropdown_2;
	// UnityEngine.Animator ChangeAvatar::avatar_Animator
	Animator_t69676727 * ___avatar_Animator_3;
	// System.String ChangeAvatar::avatar_Selection
	String_t* ___avatar_Selection_4;
	// System.Int32 ChangeAvatar::avatar_DropdownVal
	int32_t ___avatar_DropdownVal_5;

public:
	inline static int32_t get_offset_of_avatar_Dropdown_2() { return static_cast<int32_t>(offsetof(ChangeAvatar_t2593165369, ___avatar_Dropdown_2)); }
	inline Dropdown_t1985816271 * get_avatar_Dropdown_2() const { return ___avatar_Dropdown_2; }
	inline Dropdown_t1985816271 ** get_address_of_avatar_Dropdown_2() { return &___avatar_Dropdown_2; }
	inline void set_avatar_Dropdown_2(Dropdown_t1985816271 * value)
	{
		___avatar_Dropdown_2 = value;
		Il2CppCodeGenWriteBarrier(&___avatar_Dropdown_2, value);
	}

	inline static int32_t get_offset_of_avatar_Animator_3() { return static_cast<int32_t>(offsetof(ChangeAvatar_t2593165369, ___avatar_Animator_3)); }
	inline Animator_t69676727 * get_avatar_Animator_3() const { return ___avatar_Animator_3; }
	inline Animator_t69676727 ** get_address_of_avatar_Animator_3() { return &___avatar_Animator_3; }
	inline void set_avatar_Animator_3(Animator_t69676727 * value)
	{
		___avatar_Animator_3 = value;
		Il2CppCodeGenWriteBarrier(&___avatar_Animator_3, value);
	}

	inline static int32_t get_offset_of_avatar_Selection_4() { return static_cast<int32_t>(offsetof(ChangeAvatar_t2593165369, ___avatar_Selection_4)); }
	inline String_t* get_avatar_Selection_4() const { return ___avatar_Selection_4; }
	inline String_t** get_address_of_avatar_Selection_4() { return &___avatar_Selection_4; }
	inline void set_avatar_Selection_4(String_t* value)
	{
		___avatar_Selection_4 = value;
		Il2CppCodeGenWriteBarrier(&___avatar_Selection_4, value);
	}

	inline static int32_t get_offset_of_avatar_DropdownVal_5() { return static_cast<int32_t>(offsetof(ChangeAvatar_t2593165369, ___avatar_DropdownVal_5)); }
	inline int32_t get_avatar_DropdownVal_5() const { return ___avatar_DropdownVal_5; }
	inline int32_t* get_address_of_avatar_DropdownVal_5() { return &___avatar_DropdownVal_5; }
	inline void set_avatar_DropdownVal_5(int32_t value)
	{
		___avatar_DropdownVal_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
