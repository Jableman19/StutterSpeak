#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Attempt_Struct__pf3774553483.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UTextBlock;
class UMaterialInstanceDynamic;
class UMenuGI_C__pf3730827578;
#include "ResultsForSwitcher__pf517162645.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/ResultsForSwitcher.ResultsForSwitcher_C", OverrideNativeName="ResultsForSwitcher_C"))
class UResultsForSwitcher_C__pf517162645 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Background", Category="ResultsForSwitcher", OverrideNativeName="Background"))
	UImage* bpv__Background__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="EffectivenessStar", Category="ResultsForSwitcher", OverrideNativeName="EffectivenessStar"))
	UImage* bpv__EffectivenessStar__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="FluencyBaseImage", Category="ResultsForSwitcher", OverrideNativeName="FluencyBaseImage"))
	UImage* bpv__FluencyBaseImage__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="FluencyBaseImage_1", Category="ResultsForSwitcher", OverrideNativeName="FluencyBaseImage_1"))
	UImage* bpv__FluencyBaseImage_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="FluencyStar", Category="ResultsForSwitcher", OverrideNativeName="FluencyStar"))
	UImage* bpv__FluencyStar__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_0", OverrideNativeName="TextBlock_0"))
	UTextBlock* bpv__TextBlock_0__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_1", OverrideNativeName="TextBlock_1"))
	UTextBlock* bpv__TextBlock_1__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_2", OverrideNativeName="TextBlock_2"))
	UTextBlock* bpv__TextBlock_2__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_5", OverrideNativeName="TextBlock_5"))
	UTextBlock* bpv__TextBlock_5__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_9", OverrideNativeName="TextBlock_9"))
	UTextBlock* bpv__TextBlock_9__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_10", OverrideNativeName="TextBlock_10"))
	UTextBlock* bpv__TextBlock_10__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_49", OverrideNativeName="TextBlock_49"))
	UTextBlock* bpv__TextBlock_49__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_331", OverrideNativeName="TextBlock_331"))
	UTextBlock* bpv__TextBlock_331__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Speech Name", Category="Default", MultiLine="true", OverrideNativeName="Speech Name"))
	FString bpv__SpeechxName__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Attempt #", Category="Default", MultiLine="true", OverrideNativeName="Attempt #"))
	FString bpv__Attemptxx__pfTQ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Total Time Taken", Category="Default", MultiLine="true", OverrideNativeName="Total Time Taken"))
	FString bpv__TotalxTimexTaken__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Total TIme Stuttering", Category="Default", MultiLine="true", OverrideNativeName="Total TIme stuttering"))
	FString bpv__TotalxTImexstuttering__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Audience Looking %", Category="Default", MultiLine="true", OverrideNativeName="Audience Looking %"))
	FString bpv__AudiencexLookingxx__pfTTO;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Satisfaction Rating", Category="Default", MultiLine="true", OverrideNativeName="Satisfaction Rating"))
	FString bpv__SatisfactionxRating__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Fluency Rating", Category="Default", MultiLine="true", OverrideNativeName="Fluency Rating"))
	FString bpv__FluencyxRating__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Percent Speech Stuttering", Category="Default", MultiLine="true", OverrideNativeName="PercentSpeechStuttering"))
	FString bpv__PercentSpeechStuttering__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MAT", Category="Default", MultiLine="true", OverrideNativeName="MAT"))
	UMaterialInstanceDynamic* bpv__MAT__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Middle Button", Category="Default", MultiLine="true", OverrideNativeName="MiddleButton"))
	FString bpv__MiddleButton__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FAttempt_Struct__pf3774553483 b0l__CallFunc_Array_Get_Item__pf;
	UResultsForSwitcher_C__pf517162645(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ResultsForSwitcher__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ResultsInitBySwitcher"))
	virtual void bpf__ResultsInitBySwitcher__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_FluencyBaseImage_ColorAndOpacity_0"))
	virtual FLinearColor  bpf__Get_FluencyBaseImage_ColorAndOpacity_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_FluencyBaseImage_1_ColorAndOpacity_0"))
	virtual FLinearColor  bpf__Get_FluencyBaseImage_1_ColorAndOpacity_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
