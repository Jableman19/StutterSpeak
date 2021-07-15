#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/TriggerBox.h"
class ABP_MotionController_C__pf3611121690;
class UStaticMeshComponent;
class AActor;
#include "TriggerBox_Blueprint__pf3730827578.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Blueprints/TriggerBox_Blueprint.TriggerBox_Blueprint_C", OverrideNativeName="TriggerBox_Blueprint_C"))
class ATriggerBox_Blueprint_C__pf3730827578 : public ATriggerBox
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
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Indexer", Category="Default", MultiLine="true", OverrideNativeName="Indexer"))
	int32 bpv__Indexer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Overlapper_3"))
	AActor* b0l__K2Node_CustomEvent_Overlapper_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Overlapper_2"))
	AActor* b0l__K2Node_CustomEvent_Overlapper_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Overlapper_1"))
	AActor* b0l__K2Node_CustomEvent_Overlapper_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Overlapper"))
	AActor* b0l__K2Node_CustomEvent_Overlapper__pf;
	ATriggerBox_Blueprint_C__pf3730827578(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_TriggerBox_Blueprint__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TriggerBox_Blueprint__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TriggerBox_Blueprint__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TriggerBox_Blueprint__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RightHandHiddenByExternal"))
	virtual void bpf__RightHandHiddenByExternal__pf(AActor* bpp__Overlapper__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LeftHandHiddenByExternal"))
	virtual void bpf__LeftHandHiddenByExternal__pf(AActor* bpp__Overlapper__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RightHandUnhideByExternal"))
	virtual void bpf__RightHandUnhideByExternal__pf(AActor* bpp__Overlapper__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LeftHandUnhideByExternal"))
	virtual void bpf__LeftHandUnhideByExternal__pf(AActor* bpp__Overlapper__pf);
public:
};
