#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "PickupActorInterface__pf3611121690.h"
class UWidgetComponent;
class UStaticMeshComponent;
class USceneComponent;
class AActor;
class AFloppyResetBox_Blueprint_C__pf3730827578;
#include "Floppy__pf3730827578.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Blueprints/Floppy.Floppy_C", OverrideNativeName="Floppy_C"))
class AFloppy_C__pf3730827578 : public AActor, public IPickupActorInterface_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Floppy Name"))
	UWidgetComponent* bpv__FloppyxName__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spawn Location", Category="Default", MultiLine="true", OverrideNativeName="Spawn Location"))
	FVector bpv__SpawnxLocation__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spawn Rotation", Category="Default", MultiLine="true", OverrideNativeName="Spawn Rotation"))
	FRotator bpv__SpawnxRotation__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Not Being Used", Category="Default", MultiLine="true", OverrideNativeName="Not Being Used"))
	bool bpv__NotxBeingxUsed__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grabbable", Category="Default", MultiLine="true", OverrideNativeName="Grabbable"))
	bool bpv__Grabbable__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Respawning", Category="Default", MultiLine="true", OverrideNativeName="Respawning"))
	bool bpv__Respawning__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocationAndRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorLocationAndRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachTo"))
	USceneComponent* b0l__K2Node_Event_AttachTo__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b0l__K2Node_Event_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AFloppyResetBox_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AFloppyResetBox_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsFloppy_Reset_Box_Blueprint"))
	AFloppyResetBox_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsFloppy_Reset_Box_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	FName b0l__CallFunc_Array_Get_Item_1__pf;
	AFloppy_C__pf3730827578(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Floppy__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Floppy__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Floppy_2"))
	void bpf__ExecuteUbergraph_Floppy__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Floppy__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Floppy__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Floppy_5"))
	void bpf__ExecuteUbergraph_Floppy__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RespawnBySelf"))
	virtual void bpf__RespawnBySelf__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(Category="Collision", Comment="/** \t *\tEvent when an actor no longer overlaps another actor, and they have separated. \t *\t@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.\t */", DisplayName="ActorEndOverlap", ToolTip="Event when an actor no longer overlaps another actor, and they have separated.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.", CppFromBpEvent, OverrideNativeName="ReceiveActorEndOverlap"))
	virtual void bpf__ReceiveActorEndOverlap__pf(AActor* bpp__OtherActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="EnablePhysicsByProjector"))
	virtual void bpf__EnablePhysicsByProjector__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Pickup"))
	virtual void bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Drop"))
	virtual void bpf__Drop__pf();
public:
};
