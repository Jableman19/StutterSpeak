#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Data_For_Each_Speech_Struct__pf3774553483.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "SaveData__pf1234790197.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/SaveData/SaveData.SaveData_C", OverrideNativeName="SaveData_C"))
class USaveData_C__pf1234790197 : public USaveGame
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="All Saved Data", Category="Default", MultiLine="true", OverrideNativeName="All_Saved_Data"))
	TArray<FData_For_Each_Speech_Struct__pf3774553483> bpv__All_Saved_Data__pf;
	USaveData_C__pf1234790197(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
