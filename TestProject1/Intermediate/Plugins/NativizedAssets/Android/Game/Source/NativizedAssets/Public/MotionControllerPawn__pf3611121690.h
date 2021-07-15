#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
class UStaticMeshComponent;
class UCameraComponent;
class USceneComponent;
class ABP_MotionController_C__pf3611121690;
class AActor;
class ARecording_Test_1_C__pf1711902218;
class UMenuGI_C__pf3730827578;
#include "MotionControllerPawn__pf3611121690.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Starter_Content/VirtualRealityBP/Blueprints/MotionControllerPawn.MotionControllerPawn_C", OverrideNativeName="MotionControllerPawn_C"))
class AMotionControllerPawn_C__pf3611121690 : public APawn
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Fader"))
	UStaticMeshComponent* bpv__Fader__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Camera"))
	UCameraComponent* bpv__Camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="VROrigin"))
	USceneComponent* bpv__VROrigin__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Show Chaperone", Category="Chaperone", OverrideNativeName="bShowChaperone"))
	bool bpv__bShowChaperone__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Left Controller", Category="Default", OverrideNativeName="LeftController"))
	ABP_MotionController_C__pf3611121690* bpv__LeftController__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Right Controller", Category="Default", OverrideNativeName="RightController"))
	ABP_MotionController_C__pf3611121690* bpv__RightController__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fade Out Duration", Category="Default", OverrideNativeName="FadeOutDuration"))
	float bpv__FadeOutDuration__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fade in Duration", Category="Default", OverrideNativeName="FadeInDuration"))
	float bpv__FadeInDuration__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Teleporting", Category="Default", OverrideNativeName="IsTeleporting"))
	bool bpv__IsTeleporting__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Teleport Fade Color", Category="Default", OverrideNativeName="TeleportFadeColor"))
	FLinearColor bpv__TeleportFadeColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Thumb Deadzone", Category="Default", tooltip="Deadzone for adjusting rotation using the thumbs during teleportation", OverrideNativeName="ThumbDeadzone"))
	float bpv__ThumbDeadzone__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Right Stick Down", Category="Default", OverrideNativeName="RightStickDown"))
	bool bpv__RightStickDown__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Left Stick Down", Category="Default", OverrideNativeName="LeftStickDown"))
	bool bpv__LeftStickDown__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Default Player Height", Category="Default", tooltip="Player height used on the PS4.", OverrideNativeName="DefaultPlayerHeight"))
	float bpv__DefaultPlayerHeight__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Use Controller Roll to Rotate", Category="Default", tooltip="Forced to True for PSVR Platform. PS Move controller has no thumbstick axis input so we must force enable this option.", OverrideNativeName="UseControllerRollToRotate"))
	bool bpv__UseControllerRollToRotate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speech On", Category="Default", MultiLine="true", OverrideNativeName="SpeechOn"))
	bool bpv__SpeechOn__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Timer Starting", Category="Default", MultiLine="true", OverrideNativeName="TimerStarting"))
	bool bpv__TimerStarting__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Timer Increment", Category="Default", MultiLine="true", OverrideNativeName="TimerIncrement"))
	float bpv__TimerIncrement__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Childed Name", Category="Default", MultiLine="true", OverrideNativeName="ChildedName"))
	AActor* bpv__ChildedName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_3"))
	FKey b0l__K2Node_InputActionEvent_Key_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_2"))
	FKey b0l__K2Node_InputActionEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_1"))
	FKey b0l__K2Node_InputActionEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_1"))
	FKey b0l__Temp_struct_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddLocalOffset_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchName_CmpSuccess"))
	bool b0l__K2Node_SwitchName_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ARecording_Test_1_C__pf1711902218*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ARecording_Test_1_C__pf1711902218* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsRecording_Test_1"))
	ARecording_Test_1_C__pf1711902218* b0l__K2Node_DynamicCast_AsRecording_Test_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI_1"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	AMotionControllerPawn_C__pf3611121690(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MotionControllerPawn__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ReleaseByProjector(Left)"))
	virtual void bpf__ReleaseByProjectorxLeftx__pfLK();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ReleaseByProjector(Right)"))
	virtual void bpf__ReleaseByProjectorxRightx__pfLK();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MotionControllerStopButton"))
	virtual void bpf__MotionControllerStopButton__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_ClickLeft_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_ClickLeft_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_ClickRight_K2Node_InputActionEvent_2"))
	virtual void bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_ClickRight_K2Node_InputActionEvent_3"))
	virtual void bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetRotationFromInput"))
	virtual FRotator  bpf__GetRotationFromInput__pf(float bpp__UpAxis__pf, float bpp__RightAxis__pf, ABP_MotionController_C__pf3611121690* bpp__Controller__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="TimerInc"))
	virtual void bpf__TimerInc__pf();
public:
};
