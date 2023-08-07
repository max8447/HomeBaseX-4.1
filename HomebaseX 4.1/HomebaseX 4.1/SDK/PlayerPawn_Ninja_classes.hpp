#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x153 (0x2200 - 0x20AD)
// BlueprintGeneratedClass PlayerPawn_Ninja.PlayerPawn_Ninja_C
class APlayerPawn_Ninja_C : public APlayerPawn_Generic_C
{
public:
	uint8                                        Pad_3D6E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x20B0(0x8)(Transient, DuplicateTransient)
	class USkeletalMeshComponent*                ShadowStanceFaceComponent;                         // 0x20B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ShadowStanceCharmComponent;                        // 0x20C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ShadowStanceBackpackComponent;                     // 0x20C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ShadowStanceHatComponent;                          // 0x20D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ShadowStanceHeadComponent;                         // 0x20D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ShadowStanceBodyComponent;                         // 0x20E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      DragonSlashImpact;                                 // 0x20E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Animate_Ninja_ShadowStance_Dissolve_Inverse_Translucent_Shader_Opacity_1E481F634B18DA79A1B2FDBCB1091D62; // 0x20F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Animate_Ninja_ShadowStance_Dissolve_NinjaDissolve_1E481F634B18DA79A1B2FDBCB1091D62; // 0x20F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Animate_Ninja_ShadowStance_Dissolve__Direction_1E481F634B18DA79A1B2FDBCB1091D62; // 0x20F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D6F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Animate_Ninja_ShadowStance_Dissolve;               // 0x2100(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    MI_ShadowStanceDissolve;                           // 0x2108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TestMacros;                                        // 0x2110(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DimMakActive;                                      // 0x2111(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Shadow_Stance_Active;                              // 0x2112(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D70[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInstanceDynamic*>      MID_ShadowStanceDissolveArray;                     // 0x2118(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                    MI_Shadow_Stance_Translucent_Shader;               // 0x2128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      MID_ShadowStanceTranslucentArray_Body;             // 0x2130(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      MID_ShadowStanceTranslucentArray_Head;             // 0x2140(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        ShadowStanceVisibility;                            // 0x2150(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D71[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    MI_Shadow_Stance_Translucent_Shader_Enemy_View;    // 0x2158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Shadow_Stance_Material;                            // 0x2160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DragonSlashActive;                                 // 0x2168(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WeaponsShadowStanceReversed;                       // 0x2169(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D72[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GE_AssassinationStacks;                            // 0x2170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SplineVolumeTrail_v1b_C*           TOTD_SplineBP;                                     // 0x2178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              NinjaStarTrail;                                    // 0x2180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NinjaStarsPiercing;                                // 0x2188(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D73[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInstanceDynamic*>      MID_ShadowStanceTranslucentArray_Hat;              // 0x2190(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      MID_ShadowStanceTranslucentArray_Face;             // 0x21A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      MID_ShadowStanceTranslucentArray_Charm;            // 0x21B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      MID_ShadowStanceTranslucentArray_Backpack;         // 0x21C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      MasterMIDShadowStanceTranslucentArray;             // 0x21D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>        Master_Shadow_Stance_Component_Array;              // 0x21E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UObject*                               SK_DragonSlashSword;                               // 0x21F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_EnableMantisLeap;                               // 0x21F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerPawn_Ninja_C");
		return Clss;
	}

	void SetupShadowMeshAssetsAndMaterials(enum class EFortCustomPartType PartType, class USkeletalMeshComponent*& Shadow_Mesh_Component, TArray<class UMaterialInterface*>& Character_Body_Part_MID_Array, TArray<class UMaterialInstanceDynamic*>& Empty_Translucent_Shadow_Stance_Output_MID_Array, bool* Set, bool Set_, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsValid_ReturnValue123, bool Temp_bool_Variable, int32 CallFunc_Array_LastIndex_ReturnValue1, int32 CallFunc_Min_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue12, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void CreateAndAttachDuplicateEffectSkeletalMeshes(enum class EFortCustomPartType BodyType, class USkeletalMeshComponent*& DuplicatedSkeletalMeshComponent, class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*>& Empty_MID_Array, int32 TranslucentSortPriority, int32 CallFunc_Array_LastIndex_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_IsValid_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue12, int32 Temp_int_Variable, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, class USceneComponent* K2Node_Select_Default, class UMaterialInterface* CallFunc_Array_Get_Item1, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable1, bool CallFunc_LessEqual_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, bool Temp_bool_Variable1, class USkeletalMeshComponent* K2Node_Select1_Default);
	void UserConstructionScript();
	void Animate_Ninja_ShadowStance_Dissolve__FinishedFunc();
	void Animate_Ninja_ShadowStance_Dissolve__UpdateFunc();
	void GameplayCue_Abilities_Activation_Ninja_ShadowStance(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Ninja_DimMak_ActiveFX(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void UpdateWeaponShadowStance();
	void DragonSlashActivatedOrDeactivated(bool Active_);
	void ReceiveBeginPlay();
	void Toggle_Shadow_Stance();
	void OnCharacterPartsReinitialized();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void SetMenuScreenClassName();
	void NinjaStarTrails_On();
	void NinjaStarTrails_Off();
	void SetPiercingForFX(bool NewPierceValue);
	void OnLanded(struct FHitResult& Hit);
	void StopEmittingNewSplines();
	void OnTeleportedClient();
	void TailOfDragonEnd();
	void TailOfDragonStart(float AoeCloudTimeToLive, float MontageLength);
	void ExecuteUbergraph_PlayerPawn_Ninja(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array, bool CallFunc_BooleanOR_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue1, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array1, bool CallFunc_BooleanOR_ReturnValue12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12, int32 CallFunc_Array_Add_ReturnValue12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123, int32 CallFunc_Array_Add_ReturnValue123, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234, int32 Temp_int_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue12, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue123, bool CallFunc_IsValid_ReturnValue1234, bool CallFunc_IsValid_ReturnValue12345, bool CallFunc_IsValid_ReturnValue123456, int32 CallFunc_Array_LastIndex_ReturnValue1, bool CallFunc_IsValid_ReturnValue1234567, bool CallFunc_BooleanOR_ReturnValue123, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue1234, int32 Temp_int_Variable12, int32 CallFunc_Add_IntInt_ReturnValue12, int32 Temp_int_Variable123, int32 CallFunc_Add_IntInt_ReturnValue123, int32 Temp_int_Variable1234, int32 Temp_int_Variable12345, int32 CallFunc_Add_IntInt_ReturnValue1234, int32 CallFunc_Add_IntInt_ReturnValue12345, bool Temp_bool_Variable, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array12, bool CallFunc_BooleanOR_ReturnValue12345, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456, int32 CallFunc_Array_Add_ReturnValue1234, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789, int32 CallFunc_Array_Add_ReturnValue12345, int32 Temp_int_Variable123456, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array123, int32 CallFunc_Add_IntInt_ReturnValue123456, bool CallFunc_BooleanOR_ReturnValue123456, int32 Temp_int_Variable1234567, int32 CallFunc_Add_IntInt_ReturnValue1234567, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910, int32 CallFunc_Array_Add_ReturnValue123456, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue1, bool CallFunc_IsValid_ReturnValue12345678, bool CallFunc_IsValid_ReturnValue123456789, bool CallFunc_IsValid_ReturnValue12345678910, bool CallFunc_IsValid_ReturnValue1234567891011, int32 CallFunc_Array_LastIndex_ReturnValue12, int32 CallFunc_Array_LastIndex_ReturnValue123, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue12, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue123, bool CallFunc_IsValid_ReturnValue123456789101112, bool CallFunc_IsValid_ReturnValue12345678910111213, bool CallFunc_IsValid_ReturnValue1234567891011121314, bool CallFunc_IsValid_ReturnValue123456789101112131415, int32 CallFunc_Array_LastIndex_ReturnValue1234, int32 CallFunc_Array_LastIndex_ReturnValue12345, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011, int32 CallFunc_Array_Add_ReturnValue1234567, int32 CallFunc_Array_LastIndex_ReturnValue123456, int32 CallFunc_Array_LastIndex_ReturnValue1234567, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Min_ReturnValue1, int32 CallFunc_Array_LastIndex_ReturnValue12345678, int32 CallFunc_Array_LastIndex_ReturnValue123456789, int32 CallFunc_Min_ReturnValue12, int32 CallFunc_Min_ReturnValue123, int32 CallFunc_Array_LastIndex_ReturnValue12345678910, int32 CallFunc_Min_ReturnValue1234, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue1234567891011, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array1234, class UMaterialInterface* CallFunc_Array_Get_Item1, int32 CallFunc_Array_LastIndex_ReturnValue123456789101112, bool Temp_bool_Variable1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue1234, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue12345, bool CallFunc_IsValid_ReturnValue12345678910111213141516, bool CallFunc_IsValid_ReturnValue1234567891011121314151617, int32 CallFunc_Array_LastIndex_ReturnValue12345678910111213, int32 CallFunc_Min_ReturnValue12345, bool CallFunc_IsValid_ReturnValue123456789101112131415161718, bool CallFunc_IsValid_ReturnValue12345678910111213141516171819, int32 CallFunc_Array_LastIndex_ReturnValue1234567891011121314, bool CallFunc_BooleanOR_ReturnValue1234567, int32 CallFunc_Min_ReturnValue123456, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue12345678, int32 CallFunc_Add_IntInt_ReturnValue12345678, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Array_Add_ReturnValue123456789, int32 CallFunc_Add_IntInt_ReturnValue123456789, int32 Temp_int_Array_Index_Variable1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue123456, bool CallFunc_IsValid_ReturnValue1234567891011121314151617181920, bool CallFunc_IsValid_ReturnValue123456789101112131415161718192021, int32 CallFunc_Array_LastIndex_ReturnValue123456789101112131415, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue1234567, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue12345678, bool CallFunc_IsValid_ReturnValue12345678910111213141516171819202122, bool CallFunc_IsValid_ReturnValue1234567891011121314151617181920212223, bool CallFunc_IsValid_ReturnValue123456789101112131415161718192021222324, bool CallFunc_IsValid_ReturnValue12345678910111213141516171819202122232425, int32 CallFunc_Array_LastIndex_ReturnValue12345678910111213141516, int32 CallFunc_Array_LastIndex_ReturnValue1234567891011121314151617, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue123456789, int32 Temp_int_Variable12345678, bool CallFunc_IsValid_ReturnValue1234567891011121314151617181920212223242526, class UMaterialInterface* CallFunc_Array_Get_Item12, int32 CallFunc_Add_IntInt_ReturnValue12345678910, bool CallFunc_IsValid_ReturnValue123456789101112131415161718192021222324252627, int32 CallFunc_Array_LastIndex_ReturnValue123456789101112131415161718, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item123, class UMaterialInterface* CallFunc_Array_Get_Item1234, int32 CallFunc_Array_LastIndex_ReturnValue12345678910111213141516171819, int32 CallFunc_Array_LastIndex_ReturnValue1234567891011121314151617181920, int32 CallFunc_Min_ReturnValue1234567, int32 CallFunc_Min_ReturnValue12345678, int32 CallFunc_Array_LastIndex_ReturnValue123456789101112131415161718192021, int32 CallFunc_Array_LastIndex_ReturnValue12345678910111213141516171819202122, int32 CallFunc_Min_ReturnValue123456789, int32 CallFunc_Min_ReturnValue12345678910, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array12345, int32 CallFunc_Array_LastIndex_ReturnValue1234567891011121314151617181920212223, bool CallFunc_BooleanOR_ReturnValue12345678, int32 CallFunc_Min_ReturnValue1234567891011, int32 CallFunc_Array_LastIndex_ReturnValue123456789101112131415161718192021222324, class UMaterialInterface* CallFunc_Array_Get_Item12345, int32 CallFunc_Array_LastIndex_ReturnValue12345678910111213141516171819202122232425, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue12345678910, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue1234567891011, bool CallFunc_IsValid_ReturnValue12345678910111213141516171819202122232425262728, bool CallFunc_IsValid_ReturnValue1234567891011121314151617181920212223242526272829, bool CallFunc_IsValid_ReturnValue123456789101112131415161718192021222324252627282930, int32 CallFunc_Array_LastIndex_ReturnValue1234567891011121314151617181920212223242526, int32 CallFunc_Min_ReturnValue123456789101112, bool CallFunc_IsValid_ReturnValue12345678910111213141516171819202122232425262728293031, int32 CallFunc_Array_LastIndex_ReturnValue123456789101112131415161718192021222324252627, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314, int32 CallFunc_Min_ReturnValue12345678910111213, int32 CallFunc_Array_Add_ReturnValue12345678910, bool Temp_bool_Variable123, bool CallFunc_IsValid_ReturnValue1234567891011121314151617181920212223242526272829303132, bool CallFunc_IsValid_ReturnValue123456789101112131415161718192021222324252627282930313233, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415, int32 CallFunc_Array_Add_ReturnValue1234567891011, bool CallFunc_BooleanOR_ReturnValue123456789, float CallFunc_MakeLiteralFloat_ReturnValue, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array123456, bool CallFunc_IsDedicatedServer_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue123456789101112, bool CallFunc_IsValid_ReturnValue12345678910111213141516171819202122232425262728293031323334, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue123456789101112, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue12345678910111213, int32 CallFunc_Array_Add_ReturnValue1234567891011121314, int32 CallFunc_GetNumMaterials_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_IsValid_ReturnValue1234567891011121314151617181920212223242526272829303132333435, bool CallFunc_LessEqual_IntInt_ReturnValue1, bool Temp_bool_Variable1234, int32 Temp_int_Loop_Counter_Variable12, int32 K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue1234567891011, int32 Temp_int_Array_Index_Variable12, TArray<class UMaterialInstanceDynamic*>& K2Node_MakeArray_Array1234567, int32 Temp_int_Loop_Counter_Variable123, int32 CallFunc_Add_IntInt_ReturnValue123456789101112, int32 Temp_int_Array_Index_Variable123, bool CallFunc_BooleanOR_ReturnValue12345678910, bool Temp_bool_Variable12345, int32 K2Node_Select1_Default, bool CallFunc_IsValid_ReturnValue123456789101112131415161718192021222324252627282930313233343536, bool CallFunc_LessEqual_IntInt_ReturnValue12, bool Temp_bool_Variable123456, bool CallFunc_IsValid_ReturnValue12345678910111213141516171819202122232425262728293031323334353637, int32 K2Node_Select12_Default, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617, bool CallFunc_LessEqual_IntInt_ReturnValue123, int32 CallFunc_Array_Add_ReturnValue123456789101112131415, bool Temp_bool_Variable1234567, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738, bool CallFunc_IsValid_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839, bool Temp_bool_Variable12345678, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718, int32 K2Node_Select123_Default, int32 CallFunc_Array_Add_ReturnValue12345678910111213141516, bool CallFunc_BooleanOR_ReturnValue1234567891011, int32 Temp_int_Loop_Counter_Variable1234, int32 CallFunc_Add_IntInt_ReturnValue12345678910111213, int32 K2Node_Select1234_Default, int32 Temp_int_Array_Index_Variable1234, int32 Temp_int_Variable123456789, bool Temp_bool_Variable123456789, int32 K2Node_Select12345_Default, class UMaterialInterface* CallFunc_Array_Get_Item123456, int32 CallFunc_Add_IntInt_ReturnValue1234567891011121314, int32 Temp_int_Variable12345678910, bool CallFunc_IsValid_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940, class UMaterialInterface* CallFunc_Array_Get_Item1234567, bool CallFunc_LessEqual_IntInt_ReturnValue1234, int32 CallFunc_Add_IntInt_ReturnValue123456789101112131415, int32 Temp_int_Loop_Counter_Variable12345, bool CallFunc_IsValid_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041, int32 CallFunc_Add_IntInt_ReturnValue12345678910111213141516, int32 Temp_int_Array_Index_Variable12345, bool Temp_bool_Variable12345678910, int32 K2Node_Select123456_Default, bool CallFunc_IsDedicatedServer_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue12, bool CallFunc_IsDedicatedServer_ReturnValue123, bool Temp_bool_Variable1234567891011, bool CallFunc_IsDedicatedServer_ReturnValue1234, int32 K2Node_Select1234567_Default, bool CallFunc_LessEqual_IntInt_ReturnValue12345, bool Temp_bool_Variable123456789101112, int32 K2Node_Select12345678_Default, bool CallFunc_LessEqual_IntInt_ReturnValue123456, bool CallFunc_IsDedicatedServer_ReturnValue12345, bool CallFunc_IsDedicatedServer_ReturnValue123456, bool Temp_bool_Variable12345678910111213, int32 Temp_int_Variable1234567891011, int32 K2Node_Select123456789_Default, bool CallFunc_LessEqual_IntInt_ReturnValue1234567, class UMaterialInterface* CallFunc_Array_Get_Item12345678, bool CallFunc_LessEqual_IntInt_ReturnValue12345678, int32 CallFunc_Add_IntInt_ReturnValue1234567891011121314151617, int32 Temp_int_Loop_Counter_Variable123456, int32 CallFunc_Add_IntInt_ReturnValue123456789101112131415161718, int32 Temp_int_Array_Index_Variable123456, int32 Temp_int_Loop_Counter_Variable1234567, int32 CallFunc_Add_IntInt_ReturnValue12345678910111213141516171819, int32 Temp_int_Array_Index_Variable1234567, bool Temp_bool_Variable1234567891011121314, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Variable123456789101112, class UMaterialInterface* CallFunc_Array_Get_Item123456789, bool CallFunc_LessEqual_IntInt_ReturnValue123456789, int32 CallFunc_Add_IntInt_ReturnValue1234567891011121314151617181920, bool Temp_bool_Variable123456789101112131415, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType123, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters123, int32 K2Node_Select12345678910_Default, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue12345678910, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType12, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters12, bool K2Node_SwitchEnum1_CmpSuccess, class AFortWeapon* K2Node_Event_NewWeapon, class AFortWeapon* K2Node_Event_PrevWeapon, int32 CallFunc_Array_Add_ReturnValue1234567891011121314151617, bool CallFunc_IsValid_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142, int32 CallFunc_GetNumMaterials_ReturnValue12, bool CallFunc_IsValid_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243, int32 CallFunc_Subtract_IntInt_ReturnValue12, int32 CallFunc_Array_Add_ReturnValue123456789101112131415161718, int32 CallFunc_Array_Add_ReturnValue12345678910111213141516171819, int32 CallFunc_Array_Add_ReturnValue1234567891011121314151617181920, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item12345678910, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_OnSameTeam_ReturnValue, bool K2Node_CustomEvent_Active_, class UMaterialInterface* K2Node_Select1234567891011_Default, bool CallFunc_Not_PreBool_ReturnValue1, int32 Temp_int_Variable12345678910111213, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819, class UMaterialInterface* CallFunc_Array_Get_Item1234567891011, int32 CallFunc_Add_IntInt_ReturnValue123456789101112131415161718192021, class UMaterialInterface* CallFunc_Array_Get_Item123456789101112, class UMaterialInterface* CallFunc_Array_Get_Item12345678910111213, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue12, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue12, bool Temp_bool_Variable12345678910111213141516, int32 K2Node_Select123456789101112_Default, bool CallFunc_LessEqual_IntInt_ReturnValue1234567891011, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType1, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters1, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum12_CmpSuccess, bool K2Node_SwitchEnum123_CmpSuccess, class FName Temp_name_Variable, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item1234567891011121314, int32 CallFunc_Array_Length_ReturnValue123, bool CallFunc_Less_IntInt_ReturnValue123, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item123456789101112131415, int32 CallFunc_Array_Length_ReturnValue1234, bool CallFunc_Less_IntInt_ReturnValue1234, int32 CallFunc_Array_Add_ReturnValue123456789101112131415161718192021, class UMaterialInterface* CallFunc_Array_Get_Item12345678910111213141516, int32 CallFunc_Array_LastIndex_ReturnValue12345678910111213141516171819202122232425262728, int32 CallFunc_Min_ReturnValue1234567891011121314, bool CallFunc_LessEqual_IntInt_ReturnValue123456789101112, int32 CallFunc_Array_Length_ReturnValue12345, bool CallFunc_Greater_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue12345678910111213141516171819202122, class UFortnite_M_Avg_Player_MenusScreen_AnimBP_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Menus_Screen_Anim_BP, bool K2Node_DynamicCast_bSuccess1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122, int32 CallFunc_Array_Add_ReturnValue1234567891011121314151617181920212223, int32 CallFunc_Array_Add_ReturnValue123456789101112131415161718192021222324, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324, int32 CallFunc_Array_Add_ReturnValue12345678910111213141516171819202122232425, int32 CallFunc_Array_Add_ReturnValue1234567891011121314151617181920212223242526, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526, int32 CallFunc_Array_Add_ReturnValue123456789101112131415161718192021222324252627, int32 CallFunc_Array_Add_ReturnValue12345678910111213141516171819202122232425262728, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue123456789101112131415161718192021222324252627, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue12345678910111213141516171819202122232425262728, int32 CallFunc_Array_Add_ReturnValue1234567891011121314151617181920212223242526272829, int32 CallFunc_Array_Add_ReturnValue123456789101112131415161718192021222324252627282930, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1234567891011121314151617181920212223242526272829, bool CallFunc_GetGender_IsMale, bool CallFunc_GetGender_IsFemale, int32 CallFunc_Array_Add_ReturnValue12345678910111213141516171819202122232425262728293031, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, bool CallFunc_IsValid_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344, bool CallFunc_IsValid_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445, bool K2Node_CustomEvent_NewPierceValue, int32 Temp_int_Variable1234567891011121314, class UMaterialInterface* CallFunc_Array_Get_Item1234567891011121314151617, bool CallFunc_LessEqual_IntInt_ReturnValue12345678910111213, int32 CallFunc_Add_IntInt_ReturnValue12345678910111213141516171819202122, bool CallFunc_Not_PreBool_ReturnValue12, bool CallFunc_SetupShadowMeshAssetsAndMaterials_Set, bool CallFunc_SetupShadowMeshAssetsAndMaterials_Set1, bool CallFunc_SetupShadowMeshAssetsAndMaterials_Set12, bool CallFunc_SetupShadowMeshAssetsAndMaterials_Set123, bool CallFunc_SetupShadowMeshAssetsAndMaterials_Set1234, bool CallFunc_SetupShadowMeshAssetsAndMaterials_Set12345, class USkeletalMeshComponent* CallFunc_Array_Get_Item123456789101112131415161718, int32 CallFunc_Array_Length_ReturnValue123456, bool CallFunc_Less_IntInt_ReturnValue12345, bool CallFunc_BooleanOR_ReturnValue123456789101112, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item12345678910111213141516171819, int32 K2Node_Select12345678910111213_Default, int32 CallFunc_Array_Length_ReturnValue1234567, bool CallFunc_Less_IntInt_ReturnValue123456, class USkeletalMeshComponent* CallFunc_Array_Get_Item1234567891011121314151617181920, int32 CallFunc_Array_Length_ReturnValue12345678, bool CallFunc_Less_IntInt_ReturnValue1234567, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue12345678910111213, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 K2Node_Select1234567891011121314_Default, bool CallFunc_LessEqual_IntInt_ReturnValue1234567891011121314, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, const struct FHitResult& K2Node_Event_Hit, int32 Temp_int_Variable123456789101112131415, class UMaterialInterface* CallFunc_Array_Get_Item123456789101112131415161718192021, bool CallFunc_LessEqual_IntInt_ReturnValue123456789101112131415, int32 CallFunc_Add_IntInt_ReturnValue1234567891011121314151617181920212223, bool CallFunc_IsValid_ReturnValue12345678910111213141516171819202122232425262728293031323334353637383940414243444546, int32 Temp_int_Variable12345678910111213141516, class UMaterialInterface* CallFunc_Array_Get_Item12345678910111213141516171819202122, bool CallFunc_IsValid_ReturnValue1234567891011121314151617181920212223242526272829303132333435363738394041424344454647, bool CallFunc_LessEqual_IntInt_ReturnValue12345678910111213141516, int32 CallFunc_Add_IntInt_ReturnValue123456789101112131415161718192021222324, bool CallFunc_IsValid_ReturnValue123456789101112131415161718192021222324252627282930313233343536373839404142434445464748, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_SplineVolumeTrail_v1b_C* CallFunc_FinishSpawningActor_ReturnValue, float K2Node_CustomEvent_AoeCloudTimeToLive, float K2Node_CustomEvent_MontageLength, float CallFunc_Add_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
