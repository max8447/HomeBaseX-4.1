#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.Initialize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemDisplayStyle       QuickbarItemDisplayStyle                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortItemCooldownType>DesiredCooldownTypesSupported                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// enum class EItemDisplayStyle       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable12                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable123                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable1234                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable12345                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable123456                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlotCooldown_C::Initialize(enum class EItemDisplayStyle QuickbarItemDisplayStyle, TArray<enum class EFortItemCooldownType>& DesiredCooldownTypesSupported, enum class EItemDisplayStyle Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, class UMaterialInterface* Temp_object_Variable12, class UMaterialInterface* Temp_object_Variable123, class UMaterialInterface* Temp_object_Variable1234, class UMaterialInterface* Temp_object_Variable12345, class UMaterialInterface* Temp_object_Variable123456, class UMaterialInterface* K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarSlotCooldown_C", "Initialize");

	Params::UQuickbarSlotCooldown_C_Initialize_Params Parms;
	Parms.QuickbarItemDisplayStyle = QuickbarItemDisplayStyle;
	Parms.DesiredCooldownTypesSupported = DesiredCooldownTypesSupported;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable12 = Temp_object_Variable12;
	Parms.Temp_object_Variable123 = Temp_object_Variable123;
	Parms.Temp_object_Variable1234 = Temp_object_Variable1234;
	Parms.Temp_object_Variable12345 = Temp_object_Variable12345;
	Parms.Temp_object_Variable123456 = Temp_object_Variable123456;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.Show Countdown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSlotCooldown_C::Show_Countdown(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("QuickbarSlotCooldown_C", "Show Countdown");

	Params::UQuickbarSlotCooldown_C_Show_Countdown_Params Parms;
	Parms.Show = Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.OnCooldownStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortItemCooldownType   CooldownType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSlotCooldown_C::OnCooldownStarted(enum class EFortItemCooldownType CooldownType)
{
	static auto Func = Class->GetFunction("QuickbarSlotCooldown_C", "OnCooldownStarted");

	Params::UQuickbarSlotCooldown_C_OnCooldownStarted_Params Parms;
	Parms.CooldownType = CooldownType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.OnCooldownStopped
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortItemCooldownType   CooldownType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSlotCooldown_C::OnCooldownStopped(enum class EFortItemCooldownType CooldownType)
{
	static auto Func = Class->GetFunction("QuickbarSlotCooldown_C", "OnCooldownStopped");

	Params::UQuickbarSlotCooldown_C_OnCooldownStopped_Params Parms;
	Parms.CooldownType = CooldownType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.ExecuteUbergraph_QuickbarSlotCooldown
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCooldownType   K2Node_Event_CooldownType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum12_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum123_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCooldownType   K2Node_Event_CooldownType1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1234_CmpSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum12345_CmpSuccess                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlotCooldown_C::ExecuteUbergraph_QuickbarSlotCooldown(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, enum class EFortItemCooldownType K2Node_Event_CooldownType, bool K2Node_SwitchEnum1_CmpSuccess, bool K2Node_SwitchEnum12_CmpSuccess, bool K2Node_SwitchEnum123_CmpSuccess, enum class EFortItemCooldownType K2Node_Event_CooldownType1, bool K2Node_SwitchEnum1234_CmpSuccess, bool K2Node_SwitchEnum12345_CmpSuccess)
{
	static auto Func = Class->GetFunction("QuickbarSlotCooldown_C", "ExecuteUbergraph_QuickbarSlotCooldown");

	Params::UQuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_CooldownType = K2Node_Event_CooldownType;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.K2Node_SwitchEnum12_CmpSuccess = K2Node_SwitchEnum12_CmpSuccess;
	Parms.K2Node_SwitchEnum123_CmpSuccess = K2Node_SwitchEnum123_CmpSuccess;
	Parms.K2Node_Event_CooldownType1 = K2Node_Event_CooldownType1;
	Parms.K2Node_SwitchEnum1234_CmpSuccess = K2Node_SwitchEnum1234_CmpSuccess;
	Parms.K2Node_SwitchEnum12345_CmpSuccess = K2Node_SwitchEnum12345_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
