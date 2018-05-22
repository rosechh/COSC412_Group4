#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UserSettings
struct  UserSettings_t4158522414  : public MonoBehaviour_t1158329972
{
public:
	// System.String UserSettings::cUsername
	String_t* ___cUsername_2;
	// System.Int32 UserSettings::cUserID
	int32_t ___cUserID_3;
	// System.Int32[] UserSettings::cCustomizationID
	Int32U5BU5D_t3030399641* ___cCustomizationID_4;
	// System.Collections.Generic.List`1<System.String> UserSettings::userNameList
	List_1_t1398341365 * ___userNameList_5;
	// System.Collections.Generic.List`1<System.Int32> UserSettings::userIDList
	List_1_t1440998580 * ___userIDList_6;
	// System.Collections.Generic.List`1<System.Int32> UserSettings::userCustomIDList
	List_1_t1440998580 * ___userCustomIDList_7;

public:
	inline static int32_t get_offset_of_cUsername_2() { return static_cast<int32_t>(offsetof(UserSettings_t4158522414, ___cUsername_2)); }
	inline String_t* get_cUsername_2() const { return ___cUsername_2; }
	inline String_t** get_address_of_cUsername_2() { return &___cUsername_2; }
	inline void set_cUsername_2(String_t* value)
	{
		___cUsername_2 = value;
		Il2CppCodeGenWriteBarrier(&___cUsername_2, value);
	}

	inline static int32_t get_offset_of_cUserID_3() { return static_cast<int32_t>(offsetof(UserSettings_t4158522414, ___cUserID_3)); }
	inline int32_t get_cUserID_3() const { return ___cUserID_3; }
	inline int32_t* get_address_of_cUserID_3() { return &___cUserID_3; }
	inline void set_cUserID_3(int32_t value)
	{
		___cUserID_3 = value;
	}

	inline static int32_t get_offset_of_cCustomizationID_4() { return static_cast<int32_t>(offsetof(UserSettings_t4158522414, ___cCustomizationID_4)); }
	inline Int32U5BU5D_t3030399641* get_cCustomizationID_4() const { return ___cCustomizationID_4; }
	inline Int32U5BU5D_t3030399641** get_address_of_cCustomizationID_4() { return &___cCustomizationID_4; }
	inline void set_cCustomizationID_4(Int32U5BU5D_t3030399641* value)
	{
		___cCustomizationID_4 = value;
		Il2CppCodeGenWriteBarrier(&___cCustomizationID_4, value);
	}

	inline static int32_t get_offset_of_userNameList_5() { return static_cast<int32_t>(offsetof(UserSettings_t4158522414, ___userNameList_5)); }
	inline List_1_t1398341365 * get_userNameList_5() const { return ___userNameList_5; }
	inline List_1_t1398341365 ** get_address_of_userNameList_5() { return &___userNameList_5; }
	inline void set_userNameList_5(List_1_t1398341365 * value)
	{
		___userNameList_5 = value;
		Il2CppCodeGenWriteBarrier(&___userNameList_5, value);
	}

	inline static int32_t get_offset_of_userIDList_6() { return static_cast<int32_t>(offsetof(UserSettings_t4158522414, ___userIDList_6)); }
	inline List_1_t1440998580 * get_userIDList_6() const { return ___userIDList_6; }
	inline List_1_t1440998580 ** get_address_of_userIDList_6() { return &___userIDList_6; }
	inline void set_userIDList_6(List_1_t1440998580 * value)
	{
		___userIDList_6 = value;
		Il2CppCodeGenWriteBarrier(&___userIDList_6, value);
	}

	inline static int32_t get_offset_of_userCustomIDList_7() { return static_cast<int32_t>(offsetof(UserSettings_t4158522414, ___userCustomIDList_7)); }
	inline List_1_t1440998580 * get_userCustomIDList_7() const { return ___userCustomIDList_7; }
	inline List_1_t1440998580 ** get_address_of_userCustomIDList_7() { return &___userCustomIDList_7; }
	inline void set_userCustomIDList_7(List_1_t1440998580 * value)
	{
		___userCustomIDList_7 = value;
		Il2CppCodeGenWriteBarrier(&___userCustomIDList_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
