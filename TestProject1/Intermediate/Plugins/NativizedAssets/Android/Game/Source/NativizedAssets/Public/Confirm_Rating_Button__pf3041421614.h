#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UTextRenderComponent;
class UStaticMeshComponent;
class UAudioComponent;
class USceneComponent;
class AHanging_Projector_Screen_Blueprint_C__pf3730827578;
class UMenuGI_C__pf3730827578;
class AActive_Choice_Ring_C__pf3041421614;
class UPrimitiveComponent;
class AActor;
#include "Confirm_Rating_Button__pf3041421614.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Blueprints/Rating_Buttons/Confirm_Rating_Button.Confirm_Rating_Button_C", OverrideNativeName="Confirm_Rating_Button_C"))
class AConfirm_Rating_Button_C__pf3041421614 : public AActor
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="Move Buttons__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMovexButtons__pfT__Confirm_Rating_Button_C__pf__MulticastDelegate );
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TextRender"))
	UTextRenderComponent* bpv__TextRender__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Button Base"))
	UStaticMeshComponent* bpv__ButtonxBase__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Sound"))
	UAudioComponent* bpv__Sound__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Confirm Button"))
	UStaticMeshComponent* bpv__ConfirmxButton__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Selected Rating", Category="Default", MultiLine="true", OverrideNativeName="Selected Rating"))
	int32 bpv__SelectedxRating__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Active", Category="Default", MultiLine="true", OverrideNativeName="Active"))
	bool bpv__Active__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Pressed Down", Category="Default", MultiLine="true", OverrideNativeName="isPressedDown"))
	bool bpv__isPressedDown__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="First Time", Category="Default", MultiLine="true", OverrideNativeName="First Time"))
	bool bpv__FirstxTime__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="As Hanging Projector Screen Blueprint", Category="Default", MultiLine="true", OverrideNativeName="As Hanging Projector Screen Blueprint"))
	AHanging_Projector_Screen_Blueprint_C__pf3730827578* bpv__AsxHangingxProjectorxScreenxBlueprint__pfTTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="Move Buttons", Category="Default", MultiLine="true", OverrideNativeName="Move Buttons"))
	FMovexButtons__pfT__Confirm_Rating_Button_C__pf__MulticastDelegate bpv__MovexButtons__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Up Location", Category="Default", MultiLine="true", OverrideNativeName="Up Location"))
	FVector bpv__UpxLocation__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Return Value Rotation", Category="Default", MultiLine="true", OverrideNativeName="Return Value Rotation"))
	FRotator bpv__ReturnxValuexRotation__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Return Value Scale", Category="Default", MultiLine="true", OverrideNativeName="Return Value Scale"))
	FVector bpv__ReturnxValuexScale__pfTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	TEnumAsByte<EMoveComponentAction::Type> b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AHanging_Projector_Screen_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AHanging_Projector_Screen_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsHanging_Projector_Screen_Blueprint"))
	AHanging_Projector_Screen_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsHanging_Projector_Screen_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_1"))
	TArray<AActive_Choice_Ring_C__pf3041421614*> b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	AActive_Choice_Ring_C__pf3041421614* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsActive_Choice_Ring"))
	AActive_Choice_Ring_C__pf3041421614* b0l__K2Node_DynamicCast_AsActive_Choice_Ring__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI_1"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeTransform_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Location"))
	FVector b0l__CallFunc_BreakTransform_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Rotation"))
	FRotator b0l__CallFunc_BreakTransform_Rotation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Scale"))
	FVector b0l__CallFunc_BreakTransform_Scale__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_1"))
	float b0l__CallFunc_BreakVector_X_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_1"))
	float b0l__CallFunc_BreakVector_Y_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_1"))
	float b0l__CallFunc_BreakVector_Z_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeTransform_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult_1__pf;
	AConfirm_Rating_Button_C__pf3041421614(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Confirm_Rating_Button_1"))
	void bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Confirm_Rating_Button_3"))
	void bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Enable"))
	virtual void bpf__Enable__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Disable"))
	virtual void bpf__Disable__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Confirm_Rating_Button_Confirm Button_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LowerButton"))
	virtual void bpf__LowerButton__pf();
public:
};
