#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class UTextRenderComponent;
class UAudioComponent;
class USceneComponent;
class ALevelHandler_Blueprint_C__pf1694860710;
class UPrimitiveComponent;
class AActor;
#include "Retry_Button__pf3730827578.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Blueprints/Retry_Button.Retry_Button_C", OverrideNativeName="Retry_Button_C"))
class ARetry_Button_C__pf3730827578 : public AActor
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="Move Buttons__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMovexButtons__pfT__Retry_Button_C__pf__MulticastDelegate );
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button Base"))
	UStaticMeshComponent* bpv__ButtonxBase__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TextRender"))
	UTextRenderComponent* bpv__TextRender__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sound"))
	UAudioComponent* bpv__Sound__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Retry Button"))
	UStaticMeshComponent* bpv__RetryxButton__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Active", Category="Default", MultiLine="true", OverrideNativeName="Active"))
	bool bpv__Active__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Pressed Down", Category="Default", MultiLine="true", OverrideNativeName="isPressedDown"))
	bool bpv__isPressedDown__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="Move Buttons", Category="Default", MultiLine="true", OverrideNativeName="Move Buttons"))
	FMovexButtons__pfT__Retry_Button_C__pf__MulticastDelegate bpv__MovexButtons__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Up Location", Category="Default", MultiLine="true", OverrideNativeName="Up Location"))
	FVector bpv__UpxLocation__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Return Value Rotation", Category="Default", MultiLine="true", OverrideNativeName="Return Value Rotation"))
	FRotator bpv__ReturnxValuexRotation__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Return Value Scale", Category="Default", MultiLine="true", OverrideNativeName="Return Value Scale"))
	FVector bpv__ReturnxValuexScale__pfTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ALevelHandler_Blueprint_C__pf1694860710*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ALevelHandler_Blueprint_C__pf1694860710* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLevel_Handler_Blueprint"))
	ALevelHandler_Blueprint_C__pf1694860710* b0l__K2Node_DynamicCast_AsLevel_Handler_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	TEnumAsByte<EMoveComponentAction::Type> b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_1"))
	float b0l__CallFunc_BreakVector_X_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_1"))
	float b0l__CallFunc_BreakVector_Y_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_1"))
	float b0l__CallFunc_BreakVector_Z_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Location"))
	FVector b0l__CallFunc_BreakTransform_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Rotation"))
	FRotator b0l__CallFunc_BreakTransform_Rotation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Scale"))
	FVector b0l__CallFunc_BreakTransform_Scale__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeTransform_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeTransform_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult_1__pf;
	ARetry_Button_C__pf3730827578(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Retry_Button_0"))
	void bpf__ExecuteUbergraph_Retry_Button__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Retry_Button_1"))
	void bpf__ExecuteUbergraph_Retry_Button__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Retry_Button__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Confirm_Rating_Button_Confirm Rating_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Confirm_Rating_Button_ConfirmxRating_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pfT(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RaiseButton"))
	virtual void bpf__RaiseButton__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
