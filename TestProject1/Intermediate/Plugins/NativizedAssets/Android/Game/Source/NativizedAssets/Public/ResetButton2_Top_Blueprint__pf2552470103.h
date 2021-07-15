#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "PickupActorInterface__pf3611121690.h"
class UTimelineComponent;
class USceneComponent;
class AResetButton2_Button_Blueprint_C__pf3730827578;
#include "ResetButton2_Top_Blueprint__pf2552470103.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Pre-Fabs/ResetButton2_Top_Blueprint.ResetButton2_Top_Blueprint_C", OverrideNativeName="ResetButton2_Top_Blueprint_C"))
class AResetButton2_Top_Blueprint_C__pf2552470103 : public AStaticMeshActor, public IPickupActorInterface_C
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="Timeline_0_NewTrack_0_3386EFEE475272452F732F9D326EDF6E"))
	float bpv__Timeline_0_NewTrack_0_3386EFEE475272452F732F9D326EDF6E__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0__Direction_3386EFEE475272452F732F9D326EDF6E"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_0__Direction_3386EFEE475272452F732F9D326EDF6E__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="ResetButton2_Top_Blueprint", OverrideNativeName="Timeline_0"))
	UTimelineComponent* bpv__Timeline_0__pf;
	UPROPERTY(meta=(OverrideNativeName="MoveTop_NewTrack_0_FC925FCF41F3ED343780CD8E9169B2E6"))
	float bpv__MoveTop_NewTrack_0_FC925FCF41F3ED343780CD8E9169B2E6__pf;
	UPROPERTY(meta=(OverrideNativeName="MoveTop__Direction_FC925FCF41F3ED343780CD8E9169B2E6"))
	TEnumAsByte<ETimelineDirection::Type> bpv__MoveTop__Direction_FC925FCF41F3ED343780CD8E9169B2E6__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="ResetButton2_Top_Blueprint", OverrideNativeName="MoveTop"))
	UTimelineComponent* bpv__MoveTop__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grabbable", Category="Default", MultiLine="true", OverrideNativeName="Grabbable"))
	bool bpv__Grabbable__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Start Location", Category="Default", MultiLine="true", OverrideNativeName="Start Location"))
	FVector bpv__StartxLocation__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Start Rotation", Category="Default", MultiLine="true", OverrideNativeName="Start Rotation"))
	FRotator bpv__StartxRotation__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="End Location", Category="Default", MultiLine="true", OverrideNativeName="End Location"))
	FVector bpv__EndxLocation__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="End Rotation", Category="Default", MultiLine="true", OverrideNativeName="End Rotation"))
	FRotator bpv__EndxRotation__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Delta Rotation Y (Pitch)", Category="Default", MultiLine="true", OverrideNativeName="Delta Rotation Y (Pitch)"))
	float bpv__DeltaxRotationxYxxPitchx__pfTTTLK;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Movement Var", Category="Default", MultiLine="true", OverrideNativeName="MovementVar"))
	float bpv__MovementVar__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Down", Category="Default", MultiLine="true", OverrideNativeName="Down"))
	bool bpv__Down__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Open", Category="Default", MultiLine="true", OverrideNativeName="Open"))
	bool bpv__Open__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachTo"))
	USceneComponent* b0l__K2Node_Event_AttachTo__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AResetButton2_Button_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AResetButton2_Button_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint"))
	AResetButton2_Button_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_1"))
	TArray<AResetButton2_Button_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	AResetButton2_Button_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint_1"))
	AResetButton2_Button_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsReset_Button_2_Button_Blueprint_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldRotation_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_SetWorldRotation_SweepHitResult_1__pf;
	AResetButton2_Top_Blueprint_C__pf2552470103(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ResetButton2_Top_Blueprint__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ResetButton2_Top_Blueprint__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ResetButton2_Top_Blueprint__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ResetButton2_Top_Blueprint__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ResetButton2_Top_Blueprint__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ResetButton2_Top_Blueprint__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ResetButton2_Top_Blueprint__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ButtonPress"))
	virtual void bpf__ButtonPress__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Pickup"))
	virtual void bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Drop"))
	virtual void bpf__Drop__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__UpdateFunc"))
	virtual void bpf__Timeline_0__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__FinishedFunc"))
	virtual void bpf__Timeline_0__FinishedFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="MoveTop__UpdateFunc"))
	virtual void bpf__MoveTop__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="MoveTop__FinishedFunc"))
	virtual void bpf__MoveTop__FinishedFunc__pf();
public:
};
