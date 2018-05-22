#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_AnimateCamper3368418513.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "UnityEngine_UnityEngine_SpriteRenderer1209076198.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_WaitForSeconds3839502067.h"
#include "mscorlib_System_Single2076509932.h"
#include "AssemblyU2DCSharp_avatarCustomization2873311894.h"
#include "mscorlib_System_Char3454481338.h"
#include "AssemblyU2DCSharp_ChangeSprite3743716577.h"
#include "AssemblyU2DCSharp_customizationSettings2716778280.h"
#include "AssemblyU2DCSharp_CycleSprites1734324468.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Events_UnityAction4025899511.h"
#include "UnityEngine_UI_UnityEngine_UI_Button2872111280.h"
#include "UnityEngine_UI_UnityEngine_UI_Button_ButtonClicked2455055323.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent408735097.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "AssemblyU2DCSharp_residenceCustomization2056441131.h"
#include "AssemblyU2DCSharp_SoundManager654432262.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"
#include "AssemblyU2DCSharp_userSettings2977412750.h"

// AnimateCamper
struct AnimateCamper_t3368418513;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Sprite
struct Sprite_t309593783;
// System.Object
struct Il2CppObject;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3839502067;
// avatarCustomization
struct avatarCustomization_t2873311894;
// ChangeSprite
struct ChangeSprite_t3743716577;
// customizationSettings
struct customizationSettings_t2716778280;
// CycleSprites
struct CycleSprites_t1734324468;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t2455055323;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t408735097;
// UnityEngine.Object
struct Object_t1021602117;
// residenceCustomization
struct residenceCustomization_t2056441131;
// SoundManager
struct SoundManager_t654432262;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;
// userSettings
struct userSettings_t2977412750;
extern const MethodInfo* GameObject_GetComponent_TisSprite_t309593783_m3918772277_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisSpriteRenderer_t1209076198_m1184556631_MethodInfo_var;
extern const uint32_t AnimateCamper_Start_m1376391788_MetadataUsageId;
extern Il2CppClass* WaitForSeconds_t3839502067_il2cpp_TypeInfo_var;
extern const uint32_t AnimateCamper_AnimateSprite_m2073467914_MetadataUsageId;
extern Il2CppClass* CharU5BU5D_t1328083999_il2cpp_TypeInfo_var;
extern const uint32_t avatarCustomization__ctor_m1364164647_MetadataUsageId;
extern const uint32_t ChangeSprite_Start_m3407428108_MetadataUsageId;
extern Il2CppClass* UnityAction_t4025899511_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisButton_t2872111280_m1008560876_MethodInfo_var;
extern const MethodInfo* CycleSprites_Cycle_m1633909633_MethodInfo_var;
extern const uint32_t CycleSprites_Start_m2062499585_MetadataUsageId;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t CycleSprites_Cycle_m1633909633_MetadataUsageId;
extern Il2CppClass* SoundManager_t654432262_il2cpp_TypeInfo_var;
extern const uint32_t SoundManager_Awake_m1006343474_MetadataUsageId;

// System.Char[]
struct CharU5BU5D_t1328083999  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) AudioClip_t1932558630 * m_Items[1];

public:
	inline AudioClip_t1932558630 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t1932558630 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t1932558630 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AudioClip_t1932558630 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t1932558630 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t1932558630 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Sprite>()
#define GameObject_GetComponent_TisSprite_t309593783_m3918772277(__this, method) ((  Sprite_t309593783 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
#define GameObject_GetComponent_TisSpriteRenderer_t1209076198_m1184556631(__this, method) ((  SpriteRenderer_t1209076198 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Void AnimateCamper::AnimateSprite()
extern "C"  void AnimateCamper_AnimateSprite_m2073467914 (AnimateCamper_t3368418513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C"  void SpriteRenderer_set_sprite_m617298623 (SpriteRenderer_t1209076198 * __this, Sprite_t309593783 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m1990515539 (WaitForSeconds_t3839502067 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
#define GameObject_GetComponent_TisButton_t2872111280_m1008560876(__this, method) ((  Button_t2872111280 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C"  ButtonClickedEvent_t2455055323 * Button_get_onClick_m1595880935 (Button_t2872111280 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction__ctor_m2649891629 (UnityAction_t4025899511 * __this, Il2CppObject * p0, IntPtr_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C"  void UnityEvent_AddListener_m1596810379 (UnityEvent_t408735097 * __this, UnityAction_t4025899511 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m3764089466 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, Object_t1021602117 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m2402264703 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, Object_t1021602117 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m4145850038 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m2330762974 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m738814682 (AudioSource_t1135106623 * __this, AudioClip_t1932558630 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m353744792 (AudioSource_t1135106623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m694320887 (Il2CppObject * __this /* static, unused */, int32_t p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m2884721203 (Il2CppObject * __this /* static, unused */, float p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C"  void AudioSource_set_pitch_m3064416458 (AudioSource_t1135106623 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AnimateCamper::.ctor()
extern "C"  void AnimateCamper__ctor_m28071716 (AnimateCamper_t3368418513 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AnimateCamper::Start()
extern "C"  void AnimateCamper_Start_m1376391788 (AnimateCamper_t3368418513 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimateCamper_Start_m1376391788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Sprite_t309593783 * L_1 = GameObject_GetComponent_TisSprite_t309593783_m3918772277(L_0, /*hidden argument*/GameObject_GetComponent_TisSprite_t309593783_m3918772277_MethodInfo_var);
		__this->set_spr1_2(L_1);
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		SpriteRenderer_t1209076198 * L_3 = GameObject_GetComponent_TisSpriteRenderer_t1209076198_m1184556631(L_2, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t1209076198_m1184556631_MethodInfo_var);
		__this->set_sprRen_4(L_3);
		AnimateCamper_AnimateSprite_m2073467914(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AnimateCamper::AnimateSprite()
extern "C"  void AnimateCamper_AnimateSprite_m2073467914 (AnimateCamper_t3368418513 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimateCamper_AnimateSprite_m2073467914_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 1;
		goto IL_0045;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		if (((int32_t)((int32_t)L_0%(int32_t)2)))
		{
			goto IL_0025;
		}
	}
	{
		SpriteRenderer_t1209076198 * L_1 = __this->get_sprRen_4();
		Sprite_t309593783 * L_2 = __this->get_spr1_2();
		SpriteRenderer_set_sprite_m617298623(L_1, L_2, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0025:
	{
		SpriteRenderer_t1209076198 * L_3 = __this->get_sprRen_4();
		Sprite_t309593783 * L_4 = __this->get_spr2_3();
		SpriteRenderer_set_sprite_m617298623(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0036:
	{
		WaitForSeconds_t3839502067 * L_5 = (WaitForSeconds_t3839502067 *)il2cpp_codegen_object_new(WaitForSeconds_t3839502067_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m1990515539(L_5, (1.0f), /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0045:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void avatarCustomization::.ctor()
extern "C"  void avatarCustomization__ctor_m1364164647 (avatarCustomization_t2873311894 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (avatarCustomization__ctor_m1364164647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_avatarCustomizationState_2(((CharU5BU5D_t1328083999*)SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10))));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void avatarCustomization::Start()
extern "C"  void avatarCustomization_Start_m41074203 (avatarCustomization_t2873311894 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void ChangeSprite::.ctor()
extern "C"  void ChangeSprite__ctor_m1272858708 (ChangeSprite_t3743716577 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChangeSprite::Start()
extern "C"  void ChangeSprite_Start_m3407428108 (ChangeSprite_t3743716577 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChangeSprite_Start_m3407428108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Sprite_t309593783 * L_1 = GameObject_GetComponent_TisSprite_t309593783_m3918772277(L_0, /*hidden argument*/GameObject_GetComponent_TisSprite_t309593783_m3918772277_MethodInfo_var);
		__this->set_locSprite_2(L_1);
		return;
	}
}
// System.Void ChangeSprite::change(UnityEngine.Sprite)
extern "C"  void ChangeSprite_change_m3947623064 (ChangeSprite_t3743716577 * __this, Sprite_t309593783 * ___difSprite0, const MethodInfo* method)
{
	{
		Sprite_t309593783 * L_0 = ___difSprite0;
		__this->set_locSprite_2(L_0);
		return;
	}
}
// System.Void customizationSettings::.ctor()
extern "C"  void customizationSettings__ctor_m1489528271 (customizationSettings_t2716778280 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void customizationSettings::Start()
extern "C"  void customizationSettings_Start_m787830595 (customizationSettings_t2716778280 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void customizationSettings::Update()
extern "C"  void customizationSettings_Update_m2809458506 (customizationSettings_t2716778280 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CycleSprites::.ctor()
extern "C"  void CycleSprites__ctor_m1944464585 (CycleSprites_t1734324468 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CycleSprites::Start()
extern "C"  void CycleSprites_Start_m2062499585 (CycleSprites_t1734324468 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CycleSprites_Start_m2062499585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Button_t2872111280 * V_0 = NULL;
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Button_t2872111280 * L_1 = GameObject_GetComponent_TisButton_t2872111280_m1008560876(L_0, /*hidden argument*/GameObject_GetComponent_TisButton_t2872111280_m1008560876_MethodInfo_var);
		V_0 = L_1;
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Sprite_t309593783 * L_3 = GameObject_GetComponent_TisSprite_t309593783_m3918772277(L_2, /*hidden argument*/GameObject_GetComponent_TisSprite_t309593783_m3918772277_MethodInfo_var);
		__this->set_locSp_5(L_3);
		Button_t2872111280 * L_4 = V_0;
		ButtonClickedEvent_t2455055323 * L_5 = Button_get_onClick_m1595880935(L_4, /*hidden argument*/NULL);
		IntPtr_t L_6;
		L_6.set_m_value_0((void*)(void*)CycleSprites_Cycle_m1633909633_MethodInfo_var);
		UnityAction_t4025899511 * L_7 = (UnityAction_t4025899511 *)il2cpp_codegen_object_new(UnityAction_t4025899511_il2cpp_TypeInfo_var);
		UnityAction__ctor_m2649891629(L_7, __this, L_6, /*hidden argument*/NULL);
		UnityEvent_AddListener_m1596810379(L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CycleSprites::Cycle()
extern "C"  void CycleSprites_Cycle_m1633909633 (CycleSprites_t1734324468 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CycleSprites_Cycle_m1633909633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sprite_t309593783 * L_0 = __this->get_locSp_5();
		Sprite_t309593783 * L_1 = __this->get_sp1_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Sprite_t309593783 * L_3 = __this->get_sp2_3();
		__this->set_locSp_5(L_3);
		goto IL_005a;
	}

IL_0027:
	{
		Sprite_t309593783 * L_4 = __this->get_locSp_5();
		Sprite_t309593783 * L_5 = __this->get_sp2_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		Sprite_t309593783 * L_7 = __this->get_sp3_4();
		__this->set_locSp_5(L_7);
		goto IL_005a;
	}

IL_004e:
	{
		Sprite_t309593783 * L_8 = __this->get_sp1_2();
		__this->set_locSp_5(L_8);
	}

IL_005a:
	{
		return;
	}
}
// System.Void residenceCustomization::.ctor()
extern "C"  void residenceCustomization__ctor_m2754279356 (residenceCustomization_t2056441131 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void residenceCustomization::Start()
extern "C"  void residenceCustomization_Start_m1926441656 (residenceCustomization_t2056441131 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void residenceCustomization::Update()
extern "C"  void residenceCustomization_Update_m2797188139 (residenceCustomization_t2056441131 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void SoundManager::.ctor()
extern "C"  void SoundManager__ctor_m3417712111 (SoundManager_t654432262 * __this, const MethodInfo* method)
{
	{
		__this->set_lowPitchRange_5((0.95f));
		__this->set_highPitchRange_6((1.05f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::Awake()
extern "C"  void SoundManager_Awake_m1006343474 (SoundManager_t654432262 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundManager_Awake_m1006343474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t654432262_il2cpp_TypeInfo_var);
		SoundManager_t654432262 * L_0 = ((SoundManager_t654432262_StaticFields*)SoundManager_t654432262_il2cpp_TypeInfo_var->static_fields)->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_0, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t654432262_il2cpp_TypeInfo_var);
		((SoundManager_t654432262_StaticFields*)SoundManager_t654432262_il2cpp_TypeInfo_var->static_fields)->set_instance_4(__this);
		goto IL_0036;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t654432262_il2cpp_TypeInfo_var);
		SoundManager_t654432262 * L_2 = ((SoundManager_t654432262_StaticFields*)SoundManager_t654432262_il2cpp_TypeInfo_var->static_fields)->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		GameObject_t1756533147 * L_4 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0036:
	{
		GameObject_t1756533147 * L_5 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m2330762974(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::PlaySingle(UnityEngine.AudioClip)
extern "C"  void SoundManager_PlaySingle_m2017509048 (SoundManager_t654432262 * __this, AudioClip_t1932558630 * ___clip0, const MethodInfo* method)
{
	{
		AudioSource_t1135106623 * L_0 = __this->get_fxSource_2();
		AudioClip_t1932558630 * L_1 = ___clip0;
		AudioSource_set_clip_m738814682(L_0, L_1, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_2 = __this->get_fxSource_2();
		AudioSource_Play_m353744792(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::RandomFX(UnityEngine.AudioClip[])
extern "C"  void SoundManager_RandomFX_m79998359 (SoundManager_t654432262 * __this, AudioClipU5BU5D_t2203355011* ___clips0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		AudioClipU5BU5D_t2203355011* L_0 = ___clips0;
		int32_t L_1 = Random_Range_m694320887(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_0)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = __this->get_lowPitchRange_5();
		float L_3 = __this->get_highPitchRange_6();
		float L_4 = Random_Range_m2884721203(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		AudioSource_t1135106623 * L_5 = __this->get_fxSource_2();
		float L_6 = V_1;
		AudioSource_set_pitch_m3064416458(L_5, L_6, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_7 = __this->get_fxSource_2();
		AudioClipU5BU5D_t2203355011* L_8 = ___clips0;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		AudioClip_t1932558630 * L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		AudioSource_set_clip_m738814682(L_7, L_11, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_12 = __this->get_fxSource_2();
		AudioSource_Play_m353744792(L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::.cctor()
extern "C"  void SoundManager__cctor_m1047370624 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void userSettings::.ctor()
extern "C"  void userSettings__ctor_m1015487379 (userSettings_t2977412750 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void userSettings::Start()
extern "C"  void userSettings_Start_m3859424175 (userSettings_t2977412750 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
