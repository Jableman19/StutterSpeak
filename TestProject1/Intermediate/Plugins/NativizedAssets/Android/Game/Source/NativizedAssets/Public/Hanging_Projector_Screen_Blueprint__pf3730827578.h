#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
class UWidgetComponent;
class UFluencyRaterBP1_C__pf1694860710;
class UUserWidget;
class UResultsDataBP_C__pf1694860710;
#include "Hanging_Projector_Screen_Blueprint__pf3730827578.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Blueprints/Hanging_Projector_Screen_Blueprint.Hanging_Projector_Screen_Blueprint_C", OverrideNativeName="Hanging_Projector_Screen_Blueprint_C"))
class AHanging_Projector_Screen_Blueprint_C__pf3730827578 : public AStaticMeshActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Widget"))
	UWidgetComponent* bpv__Widget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fluency Rater", Category="Default", MultiLine="true", OverrideNativeName="Fluency Rater"))
	UFluencyRaterBP1_C__pf1694860710* bpv__FluencyxRater__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Effectiveness Rater", Category="Default", MultiLine="true", OverrideNativeName="Effectiveness Rater"))
	UUserWidget* bpv__EffectivenessxRater__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Results Data", Category="Default", MultiLine="true", OverrideNativeName="Results Data"))
	UResultsDataBP_C__pf1694860710* bpv__ResultsxData__pfT;
	AHanging_Projector_Screen_Blueprint_C__pf3730827578(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Hanging_Projector_Screen_Blueprint__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Hanging_Projector_Screen_Blueprint__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Hanging_Projector_Screen_Blueprint__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DisplayResults"))
	virtual void bpf__DisplayResults__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ChangeWidget"))
	virtual void bpf__ChangeWidget__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
