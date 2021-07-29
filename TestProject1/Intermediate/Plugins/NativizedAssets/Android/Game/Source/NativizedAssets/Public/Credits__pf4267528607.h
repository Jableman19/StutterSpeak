#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
#include "Credits__pf4267528607.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Credits.Credits_C", OverrideNativeName="Credits_C"))
class UCredits_C__pf4267528607 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_93", Category="Credits", OverrideNativeName="Image_93"))
	UImage* bpv__Image_93__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speech Name", Category="Default", MultiLine="true", OverrideNativeName="Speech Name"))
	FString bpv__SpeechxName__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Total Time Speaking", Category="Default", MultiLine="true", OverrideNativeName="Total Time Speaking"))
	FString bpv__TotalxTimexSpeaking__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time Spent Stuttering", Category="Default", MultiLine="true", OverrideNativeName="Time Spent Stuttering"))
	FString bpv__TimexSpentxStuttering__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Needs To Be Reset", Category="Default", MultiLine="true", OverrideNativeName="Needs to be Reset"))
	bool bpv__NeedsxtoxbexReset__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attempt Space", Category="Default", MultiLine="true", OverrideNativeName="Attempt space"))
	FString bpv__Attemptxspace__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speech Name Setter", Category="Default", MultiLine="true", OverrideNativeName="SpeechNameSetter"))
	FString bpv__SpeechNameSetter__pf;
	UCredits_C__pf4267528607(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
