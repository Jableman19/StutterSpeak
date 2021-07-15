#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
class UStaticMeshComponent;
#include "FloppyHolder_Blueprint__pf3730827578.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Blueprints/FloppyHolder_Blueprint.FloppyHolder_Blueprint_C", OverrideNativeName="FloppyHolder_Blueprint_C"))
class AFloppyHolder_Blueprint_C__pf3730827578 : public AStaticMeshActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="10"))
	UStaticMeshComponent* bpv__10__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="9"))
	UStaticMeshComponent* bpv__9__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="8"))
	UStaticMeshComponent* bpv__8__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="7"))
	UStaticMeshComponent* bpv__7__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="6"))
	UStaticMeshComponent* bpv__6__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="5"))
	UStaticMeshComponent* bpv__5__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="4"))
	UStaticMeshComponent* bpv__4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="3"))
	UStaticMeshComponent* bpv__3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="2"))
	UStaticMeshComponent* bpv__2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="1"))
	UStaticMeshComponent* bpv__1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Locations", Category="Default", MultiLine="true", OverrideNativeName="Locations"))
	TArray<FVector> bpv__Locations__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotations", Category="Default", MultiLine="true", OverrideNativeName="Rotations"))
	TArray<FRotator> bpv__Rotations__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tag Number", Category="Default", MultiLine="true", OverrideNativeName="Tag Number"))
	int32 bpv__TagxNumber__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_True_if_break_was_hit_Variable"))
	bool b0l__Temp_bool_True_if_break_was_hit_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetComponentsByTag_ReturnValue"))
	TArray<UStaticMeshComponent*> b0l__CallFunc_GetComponentsByTag_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UStaticMeshComponent* b0l__CallFunc_Array_Get_Item__pf;
	AFloppyHolder_Blueprint_C__pf3730827578(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_FloppyHolder_Blueprint_0"))
	void bpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
