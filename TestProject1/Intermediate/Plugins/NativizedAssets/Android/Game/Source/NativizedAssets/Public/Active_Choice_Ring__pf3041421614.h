#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class AConfirm_Rating_Button_C__pf3041421614;
#include "Active_Choice_Ring__pf3041421614.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Blueprints/Rating_Buttons/Active_Choice_Ring.Active_Choice_Ring_C", OverrideNativeName="Active_Choice_Ring_C"))
class AActive_Choice_Ring_C__pf3041421614 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Active Ring"))
	UStaticMeshComponent* bpv__ActivexRing__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Needed", Category="Default", MultiLine="true", OverrideNativeName="Needed"))
	bool bpv__Needed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Starting Location", Category="Default", MultiLine="true", OverrideNativeName="Starting Location"))
	FVector bpv__StartingxLocation__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Starting Rotation", Category="Default", MultiLine="true", OverrideNativeName="Starting Rotation"))
	FRotator bpv__StartingxRotation__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	TEnumAsByte<EMoveComponentAction::Type> b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AConfirm_Rating_Button_C__pf3041421614*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AConfirm_Rating_Button_C__pf3041421614* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsConfirm_Rating_Button"))
	AConfirm_Rating_Button_C__pf3041421614* b0l__K2Node_DynamicCast_AsConfirm_Rating_Button__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf;
	AActive_Choice_Ring_C__pf3041421614(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Active_Choice_Ring__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Active_Choice_Ring__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Active_Choice_Ring__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Active_Choice_Ring_3"))
	void bpf__ExecuteUbergraph_Active_Choice_Ring__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ResetLocationByConfirm"))
	virtual void bpf__ResetLocationByConfirm__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetLocationByLevelBlueprint"))
	virtual void bpf__GetLocationByLevelBlueprint__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LowerButton"))
	virtual void bpf__LowerButton__pf();
public:
};
