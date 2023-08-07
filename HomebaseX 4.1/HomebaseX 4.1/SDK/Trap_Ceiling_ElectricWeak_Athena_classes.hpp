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

// 0x60 (0xF40 - 0xEE0)
// BlueprintGeneratedClass Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C
class ATrap_Ceiling_ElectricWeak_Athena_C : public ABuildingTrapCeiling
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE0(0x8)(Transient, DuplicateTransient)
	class UBoxComponent*                         SoundTriggerComponent;                             // 0xEE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              IdleElectricFX;                                    // 0xEF0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  Light;                                             // 0xEF8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         TriggerComponent;                                  // 0xF00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0xF08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ScaleOutLight_Brightness_3AA74E0F4FE4CCC5C65C10AB9EBF8ED5; // 0xF10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScaleOutLight__Direction_3AA74E0F4FE4CCC5C65C10AB9EBF8ED5; // 0xF14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScaleOutLight;                                     // 0xF18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Trap_Placed_Sound;                                 // 0xF20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Trap_Fire_Sound;                                   // 0xF28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Explosion_Sound;                                   // 0xF30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ChargeSoundInst;                                   // 0xF38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Trap_Ceiling_ElectricWeak_Athena_C");
		return Clss;
	}

	void UserConstructionScript(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void ScaleOutLight__FinishedFunc();
	void ScaleOutLight__UpdateFunc();
	void OnPlaced();
	void OnFinishedBuilding();
	void OnReloadEnd();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void OnWorldReady();
	void BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ExecuteUbergraph_Trap_Ceiling_ElectricWeak_Athena(int32 EntryPoint, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue12, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue123, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam1, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam12, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam123, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam1234, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam12345, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam123456, float Temp_float_Variable, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue12, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum_CmpSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue123, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue12, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, float CallFunc_VSize_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
