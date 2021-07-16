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
#include "ResultsDataBP__pf1694860710.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Widgets/Speech_World/ResultsDataBP.ResultsDataBP_C", OverrideNativeName="ResultsDataBP_C"))
class UResultsDataBP_C__pf1694860710 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Background", Category="ResultsDataBP", OverrideNativeName="Background"))
	UImage* bpv__Background__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="EffectivenessStar", Category="ResultsDataBP", OverrideNativeName="EffectivenessStar"))
	UImage* bpv__EffectivenessStar__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="FluencyBaseImage", Category="ResultsDataBP", OverrideNativeName="FluencyBaseImage"))
	UImage* bpv__FluencyBaseImage__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="FluencyBaseImage_1", Category="ResultsDataBP", OverrideNativeName="FluencyBaseImage_1"))
	UImage* bpv__FluencyBaseImage_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="FluencyStar", Category="ResultsDataBP", OverrideNativeName="FluencyStar"))
	UImage* bpv__FluencyStar__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_0", OverrideNativeName="TextBlock_0"))
	UTextBlock* bpv__TextBlock_0__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_1", OverrideNativeName="TextBlock_1"))
	UTextBlock* bpv__TextBlock_1__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_2", OverrideNativeName="TextBlock_2"))
	UTextBlock* bpv__TextBlock_2__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_3", OverrideNativeName="TextBlock_3"))
	UTextBlock* bpv__TextBlock_3__pf;
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
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speech Name", Category="Default", MultiLine="true", OverrideNativeName="Speech Name"))
	FString bpv__SpeechxName__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attempt #", Category="Default", MultiLine="true", OverrideNativeName="Attempt #"))
	FString bpv__Attemptxx__pfTQ;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Total Time Taken", Category="Default", MultiLine="true", OverrideNativeName="Total Time Taken"))
	FString bpv__TotalxTimexTaken__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Total TIme Stuttering", Category="Default", MultiLine="true", OverrideNativeName="Total TIme stuttering"))
	FString bpv__TotalxTImexstuttering__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Audience Looking %", Category="Default", MultiLine="true", OverrideNativeName="Audience Looking %"))
	FString bpv__AudiencexLookingxx__pfTTO;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Satisfaction Rating", Category="Default", MultiLine="true", OverrideNativeName="Satisfaction Rating"))
	FString bpv__SatisfactionxRating__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fluency Rating", Category="Default", MultiLine="true", OverrideNativeName="Fluency Rating"))
	FString bpv__FluencyxRating__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Percent Speech Stuttering", Category="Default", MultiLine="true", OverrideNativeName="PercentSpeechStuttering"))
	FString bpv__PercentSpeechStuttering__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="MAT", Category="Default", MultiLine="true", OverrideNativeName="MAT"))
	UMaterialInstanceDynamic* bpv__MAT__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Middle Button", Category="Default", MultiLine="true", OverrideNativeName="MiddleButton"))
	FString bpv__MiddleButton__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Emotional Use", Category="Default", MultiLine="true", OverrideNativeName="EmotionalUse"))
	FString bpv__EmotionalUse__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Emotional Array", Category="Default", MultiLine="true", OverrideNativeName="EmotionalArray"))
	TArray<FString> bpv__EmotionalArray__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable"))
	FString b0l__Temp_string_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_1"))
	FString b0l__Temp_string_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_2"))
	FString b0l__Temp_string_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_string_Variable_3"))
	FString b0l__Temp_string_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI_1"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FAttempt_Struct__pf3774553483 b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	FString b0l__CallFunc_Array_Get_Item_1__pf;
	UResultsDataBP_C__pf1694860710(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ResultsDataBP__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ResultsCallbyConfirmRatingButton"))
	virtual void bpf__ResultsCallbyConfirmRatingButton__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_FluencyBaseImage_ColorAndOpacity_0"))
	virtual FLinearColor  bpf__Get_FluencyBaseImage_ColorAndOpacity_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_FluencyBaseImage_1_ColorAndOpacity_0"))
	virtual FLinearColor  bpf__Get_FluencyBaseImage_1_ColorAndOpacity_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
