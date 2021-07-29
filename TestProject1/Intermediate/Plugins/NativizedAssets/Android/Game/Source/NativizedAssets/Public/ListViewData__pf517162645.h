#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Attempt_Struct__pf3774553483.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UScrollBox;
class UMenuGI_C__pf3730827578;
#include "ListViewData__pf517162645.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/ListViewData.ListViewData_C", OverrideNativeName="ListViewData_C"))
class UListViewData_C__pf517162645 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image", Category="ListViewData", OverrideNativeName="Image"))
	UImage* bpv__Image__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_1", Category="ListViewData", OverrideNativeName="Image_1"))
	UImage* bpv__Image_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_2", Category="ListViewData", OverrideNativeName="Image_2"))
	UImage* bpv__Image_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_3", Category="ListViewData", OverrideNativeName="Image_3"))
	UImage* bpv__Image_3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_4", Category="ListViewData", OverrideNativeName="Image_4"))
	UImage* bpv__Image_4__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_116", Category="ListViewData", OverrideNativeName="Image_116"))
	UImage* bpv__Image_116__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_188", Category="ListViewData", OverrideNativeName="Image_188"))
	UImage* bpv__Image_188__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ScrollBox_236", Category="ListViewData", OverrideNativeName="ScrollBox_236"))
	UScrollBox* bpv__ScrollBox_236__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time", Category="Default", MultiLine="true", OverrideNativeName="Time"))
	FString bpv__Time__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time Stutt", Category="Default", MultiLine="true", OverrideNativeName="Time Stutt"))
	FString bpv__TimexStutt__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attempt Num", Category="Default", MultiLine="true", OverrideNativeName="Attempt Num"))
	FString bpv__AttemptxNum__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Stutt Percent", Category="Default", MultiLine="true", OverrideNativeName="Stutt Percent"))
	FString bpv__StuttxPercent__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Eye", Category="Default", MultiLine="true", OverrideNativeName="Eye"))
	FString bpv__Eye__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Effective", Category="Default", MultiLine="true", OverrideNativeName="Effective"))
	FString bpv__Effective__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fluency", Category="Default", MultiLine="true", OverrideNativeName="Fluency"))
	FString bpv__Fluency__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="BGColor", Category="Default", MultiLine="true", OverrideNativeName="BGColor"))
	FSlateBrush bpv__BGColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FAttempt_Struct__pf3774553483 b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ConvertSeconds_ReturnTrue"))
	FString b0l__CallFunc_ConvertSeconds_ReturnTrue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ConvertSeconds_Decider"))
	bool b0l__CallFunc_ConvertSeconds_Decider__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ConvertSeconds_ReturnFalse"))
	FString b0l__CallFunc_ConvertSeconds_ReturnFalse__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ConvertSeconds_ReturnTrue_1"))
	FString b0l__CallFunc_ConvertSeconds_ReturnTrue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ConvertSeconds_Decider_1"))
	bool b0l__CallFunc_ConvertSeconds_Decider_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ConvertSeconds_ReturnFalse_1"))
	FString b0l__CallFunc_ConvertSeconds_ReturnFalse_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor"))
	FSlateColor b0l__K2Node_MakeStruct_SlateColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateBrush"))
	FSlateBrush b0l__K2Node_MakeStruct_SlateBrush__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor_1"))
	FSlateColor b0l__K2Node_MakeStruct_SlateColor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateBrush_1"))
	FSlateBrush b0l__K2Node_MakeStruct_SlateBrush_1__pf;
	UListViewData_C__pf517162645(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ListViewData__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ListViewData"))
	virtual void bpf__ListViewData__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ConvertSeconds"))
	virtual void bpf__ConvertSeconds__pf(float bpp__InputFloat__pf, /*out*/ FString& bpp__ReturnTrue__pf, /*out*/ bool& bpp__Decider__pf, /*out*/ FString& bpp__ReturnFalse__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
