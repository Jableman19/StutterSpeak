#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "SettingsSavaData__pf1234790197.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/SaveData/SettingsSavaData.SettingsSavaData_C", OverrideNativeName="SettingsSavaData_C"))
class USettingsSavaData_C__pf1234790197 : public USaveGame
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Text Size", Category="Default", MultiLine="true", OverrideNativeName="Text Size"))
	FString bpv__TextxSize__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Menu Music", Category="Default", MultiLine="true", OverrideNativeName="Menu Music"))
	bool bpv__MenuxMusic__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ambience", Category="Default", MultiLine="true", OverrideNativeName="Ambience"))
	bool bpv__Ambience__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Applause", Category="Default", MultiLine="true", OverrideNativeName="Applause"))
	bool bpv__Applause__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Stutter Button On", Category="Default", MultiLine="true", OverrideNativeName="Stutter Button On"))
	bool bpv__StutterxButtonxOn__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Microphone Indicator", Category="Default", MultiLine="true", OverrideNativeName="Microphone Indicator"))
	bool bpv__MicrophonexIndicator__pfT;
	USettingsSavaData_C__pf1234790197(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
