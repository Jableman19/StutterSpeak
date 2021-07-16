#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UAudioCaptureComponent;
class USceneComponent;
class USoundSubmixBase;
class USoundWave;
#include "Recording_Test_1__pf1711902218.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Managers/Recording_Test_1.Recording_Test_1_C", OverrideNativeName="Recording_Test_1_C"))
class ARecording_Test_1_C__pf1711902218 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="AudioCapture"))
	UAudioCaptureComponent* bpv__AudioCapture__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sub Directory", Category="Default", MultiLine="true", OverrideNativeName="SubDirectory"))
	FText bpv__SubDirectory__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Submix", Category="Default", MultiLine="true", OverrideNativeName="Submix"))
	USoundSubmixBase* bpv__Submix__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="12-Hour Hour", Category="Default", MultiLine="true", OverrideNativeName="12-Hour Hour"))
	int32 bpv__12xHourxHour__pfGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Temp Recording", Category="Default", MultiLine="true", OverrideNativeName="TempRecording"))
	USoundWave* bpv__TempRecording__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="File Pathway", Category="Default", MultiLine="true", OverrideNativeName="filePathway"))
	FString bpv__filePathway__pf;
	ARecording_Test_1_C__pf1711902218(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Recording_Test_1__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Recording_Test_1__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CalledByButtonStop"))
	virtual void bpf__CalledByButtonStop__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CalledByButtonStart"))
	virtual void bpf__CalledByButtonStart__pf();
public:
};
