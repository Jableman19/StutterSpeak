#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/TriggerBox.h"
class ABP_MotionController_C__pf3611121690;
class UStaticMeshComponent;
class AActor;
class ATriggerBox_Blueprint_C__pf3730827578;
#include "TriggerBox_MenuWorld__pf2552470103.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Pre-Fabs/TriggerBox_MenuWorld.TriggerBox_MenuWorld_C", OverrideNativeName="TriggerBox_MenuWorld_C"))
class ATriggerBox_MenuWorld_C__pf2552470103 : public ATriggerBox
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Left Hand", Category="Default", MultiLine="true", OverrideNativeName="Left Hand"))
	ABP_MotionController_C__pf3611121690* bpv__LeftxHand__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Right Hand", Category="Default", MultiLine="true", OverrideNativeName="Right Hand"))
	ABP_MotionController_C__pf3611121690* bpv__RightxHand__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Left Pointer", Category="Default", MultiLine="true", OverrideNativeName="Left Pointer"))
	UStaticMeshComponent* bpv__LeftxPointer__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Right Pointer", Category="Default", MultiLine="true", OverrideNativeName="Right Pointer"))
	UStaticMeshComponent* bpv__RightxPointer__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Right Hand Active", Category="Default", MultiLine="true", OverrideNativeName="Right Hand Active"))
	bool bpv__RightxHandxActive__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Left Hand Active", Category="Default", MultiLine="true", OverrideNativeName="Left Hand Active"))
	bool bpv__LeftxHandxActive__pfTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ABP_MotionController_C__pf3611121690*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor_1"))
	AActor* b0l__K2Node_Event_OtherActor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ABP_MotionController_C__pf3611121690* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	ABP_MotionController_C__pf3611121690* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b0l__K2Node_Event_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_1"))
	TArray<ATriggerBox_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_2"))
	TArray<ATriggerBox_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	ATriggerBox_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	ATriggerBox_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTrigger_Box_Blueprint"))
	ATriggerBox_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTrigger_Box_Blueprint_1"))
	ATriggerBox_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_3"))
	TArray<ATriggerBox_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_4"))
	TArray<ATriggerBox_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_4"))
	ATriggerBox_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_5"))
	ATriggerBox_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTrigger_Box_Blueprint_2"))
	ATriggerBox_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTrigger_Box_Blueprint_3"))
	ATriggerBox_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	ATriggerBox_MenuWorld_C__pf2552470103(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_TriggerBox_MenuWorld__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TriggerBox_MenuWorld__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_TriggerBox_MenuWorld_2"))
	void bpf__ExecuteUbergraph_TriggerBox_MenuWorld__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(Category="Collision", Comment="/** \t *\tEvent when this actor overlaps another actor, for example a player walking into a trigger.\t *\tFor events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.\t *\t@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.\t */", DisplayName="ActorBeginOverlap", ToolTip="Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see \'Hit\' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.", CppFromBpEvent, OverrideNativeName="ReceiveActorBeginOverlap"))
	virtual void bpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf);
	UFUNCTION(meta=(Category="Collision", Comment="/** \t *\tEvent when an actor no longer overlaps another actor, and they have separated. \t *\t@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.\t */", DisplayName="ActorEndOverlap", ToolTip="Event when an actor no longer overlaps another actor, and they have separated.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.", CppFromBpEvent, OverrideNativeName="ReceiveActorEndOverlap"))
	virtual void bpf__ReceiveActorEndOverlap__pf(AActor* bpp__OtherActor__pf);
public:
};
