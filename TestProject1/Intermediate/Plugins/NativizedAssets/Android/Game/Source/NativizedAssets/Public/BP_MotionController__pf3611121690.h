#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "GripEnum__pf3611121690.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UCapsuleComponent;
class USphereComponent;
class UStaticMeshComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UMotionControllerComponent;
class AActor;
class USplineMeshComponent;
class URightHand_AnimBP_C__pf2908282278;
class AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218;
class ABeginStutterButton_C__pf2552470103;
class AMotionControllerPawn_C__pf3611121690;
class UMenuGI_C__pf3730827578;
class UPrimitiveComponent;
#include "BP_MotionController__pf3611121690.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Starter_Content/VirtualRealityBP/Blueprints/BP_MotionController.BP_MotionController_C", OverrideNativeName="BP_MotionController_C"))
class ABP_MotionController_C__pf3611121690 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Capsule"))
	UCapsuleComponent* bpv__Capsule__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Ring"))
	UCapsuleComponent* bpv__Ring__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Wrist"))
	UCapsuleComponent* bpv__Wrist__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Index"))
	UCapsuleComponent* bpv__Index__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Middle"))
	UCapsuleComponent* bpv__Middle__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Palm"))
	USphereComponent* bpv__Palm__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Pinky"))
	UCapsuleComponent* bpv__Pinky__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Thumb"))
	UCapsuleComponent* bpv__Thumb__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="HandHit"))
	UCapsuleComponent* bpv__HandHit__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="RoomScaleMesh"))
	UStaticMeshComponent* bpv__RoomScaleMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="HandMesh2"))
	UStaticMeshComponent* bpv__HandMesh2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="HandMesh1"))
	UStaticMeshComponent* bpv__HandMesh1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Scene"))
	USceneComponent* bpv__Scene__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="HandMesh"))
	USkeletalMeshComponent* bpv__HandMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MotionController"))
	UMotionControllerComponent* bpv__MotionController__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Hand", Category="Default", ExposeOnSpawn="true", OverrideNativeName="Hand"))
	EControllerHand bpv__Hand__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attached Actor", Category="Default", OverrideNativeName="AttachedActor"))
	AActor* bpv__AttachedActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Teleporter Active", Category="Default", OverrideNativeName="IsTeleporterActive"))
	bool bpv__IsTeleporterActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spline Meshes", Category="Default", OverrideNativeName="SplineMeshes"))
	TArray<USplineMeshComponent*> bpv__SplineMeshes__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Last Frame Valid Destination", Category="Default", OverrideNativeName="bLastFrameValidDestination"))
	bool bpv__bLastFrameValidDestination__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Room Scale", Category="Default", OverrideNativeName="IsRoomScale"))
	bool bpv__IsRoomScale__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Teleport Destination", Category="Default", OverrideNativeName="TeleportDestination"))
	FVector bpv__TeleportDestination__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Valid Teleport Destination", Category="Default", OverrideNativeName="IsValidTeleportDestination"))
	bool bpv__IsValidTeleportDestination__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grip State", Category="Default", OverrideNativeName="GripState"))
	E__GripEnum__pf bpv__GripState__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Wants to Grip", Category="Default", OverrideNativeName="bWantsToGrip"))
	bool bpv__bWantsToGrip__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Teleport Rotation", Category="Default", OverrideNativeName="TeleportRotation"))
	FRotator bpv__TeleportRotation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Teleport Launch Velocity", Category="Default", OverrideNativeName="TeleportLaunchVelocity"))
	float bpv__TeleportLaunchVelocity__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Initial Controller Rotation", Category="Default", tooltip="Rotation of Motion Controller at the start of the Teleport press.", OverrideNativeName="InitialControllerRotation"))
	FRotator bpv__InitialControllerRotation__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Physical Stutter Button Is Pressed", Category="Default", MultiLine="true", OverrideNativeName="Physical Stutter Button is Pressed"))
	bool bpv__PhysicalxStutterxButtonxisxPressed__pfTTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tags 0", Category="Default", MultiLine="true", OverrideNativeName="Tags_0"))
	TArray<FName> bpv__Tags_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Used Hand", Category="Default", MultiLine="true", OverrideNativeName="UsedHand"))
	UStaticMeshComponent* bpv__UsedHand__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsRight_Hand_Anim_BP"))
	URightHand_AnimBP_C__pf2908282278* b0l__K2Node_DynamicCast_AsRight_Hand_Anim_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_1"))
	FKey b0l__K2Node_InputActionEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsStutter_Timer__Empty_Object__Blueprint"))
	AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218* b0l__K2Node_DynamicCast_AsStutter_Timer__Empty_Object__Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetActorNearHand_NearestMesh"))
	AActor* b0l__CallFunc_GetActorNearHand_NearestMesh__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Intensity"))
	float b0l__K2Node_CustomEvent_Intensity__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_1"))
	TArray<ABeginStutterButton_C__pf2552470103*> b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_2"))
	TArray<ABeginStutterButton_C__pf2552470103*> b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	ABeginStutterButton_C__pf2552470103* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	ABeginStutterButton_C__pf2552470103* b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBegin_Stutter_Button"))
	ABeginStutterButton_C__pf2552470103* b0l__K2Node_DynamicCast_AsBegin_Stutter_Button__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBegin_Stutter_Button_1"))
	ABeginStutterButton_C__pf2552470103* b0l__K2Node_DynamicCast_AsBegin_Stutter_Button_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_3"))
	TArray<AMotionControllerPawn_C__pf3611121690*> b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	AMotionControllerPawn_C__pf3611121690* b0l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMotion_Controller_Pawn"))
	AMotionControllerPawn_C__pf3611121690* b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsStatic_Mesh_Component"))
	UStaticMeshComponent* b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b0l__K2Node_DynamicCast_bSuccess_6__pf;
	ABP_MotionController_C__pf3611121690(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_MotionController__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_MotionController__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_MotionController_2"))
	void bpf__ExecuteUbergraph_BP_MotionController__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_MotionController_3"))
	void bpf__ExecuteUbergraph_BP_MotionController__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_MotionController__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_MotionController__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BP_MotionController_HandHit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BP_MotionController_HandHit_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RumbleController"))
	virtual void bpf__RumbleController__pf(float bpp__Intensity__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Tracking Stutter in Speech w/ Controller_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_TrackingxStutterxinxSpeechxwxxController_K2Node_InputActionEvent_0__pfTTTTET(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Tracking Stutter in Speech w/ Controller_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_TrackingxStutterxinxSpeechxwxxController_K2Node_InputActionEvent_1__pfTTTTET(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Grabbing", OverrideNativeName="GetActorNearHand"))
	virtual void bpf__GetActorNearHand__pf(/*out*/ AActor*& bpp__NearestMesh__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Grabbing", OverrideNativeName="ReleaseActor"))
	virtual void bpf__ReleaseActor__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Grabbing", OverrideNativeName="GrabActor"))
	virtual void bpf__GrabActor__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Room-scale", OverrideNativeName="SetupRoomScaleOutline"))
	virtual void bpf__SetupRoomScaleOutline__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Room-scale", OverrideNativeName="UpdateRoomScaleOutline"))
	virtual void bpf__UpdateRoomScaleOutline__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Grabbing", OverrideNativeName="DropActor"))
	virtual void bpf__DropActor__pf();
public:
};
