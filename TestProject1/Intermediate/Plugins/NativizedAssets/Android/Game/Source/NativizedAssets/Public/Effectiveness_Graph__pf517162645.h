#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Attempt_Struct__pf3774553483.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UTextBlock;
class UMenuGI_C__pf3730827578;
#include "Effectiveness_Graph__pf517162645.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/Effectiveness_Graph.Effectiveness_Graph_C", OverrideNativeName="Effectiveness_Graph_C"))
class UEffectiveness_Graph_C__pf517162645 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_165", Category="Effectiveness_Graph", OverrideNativeName="Image_165"))
	UImage* bpv__Image_165__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Line 1", Category="Effectiveness_Graph", OverrideNativeName="Line1"))
	UImage* bpv__Line1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Line 2", Category="Effectiveness_Graph", OverrideNativeName="Line2"))
	UImage* bpv__Line2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Line 3", Category="Effectiveness_Graph", OverrideNativeName="Line3"))
	UImage* bpv__Line3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Line 4", Category="Effectiveness_Graph", OverrideNativeName="Line4"))
	UImage* bpv__Line4__pf;
	UPROPERTY(Export, meta=(DisplayName="No data warning", OverrideNativeName="Nodatawarning"))
	UTextBlock* bpv__Nodatawarning__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Number Label 1", Category="Effectiveness_Graph", OverrideNativeName="NumberLabel1"))
	UTextBlock* bpv__NumberLabel1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Number Label 2", Category="Effectiveness_Graph", OverrideNativeName="NumberLabel2"))
	UTextBlock* bpv__NumberLabel2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Number Label 3", Category="Effectiveness_Graph", OverrideNativeName="NumberLabel3"))
	UTextBlock* bpv__NumberLabel3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Number Label 4", Category="Effectiveness_Graph", OverrideNativeName="NumberLabel4"))
	UTextBlock* bpv__NumberLabel4__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Number Label 5", Category="Effectiveness_Graph", OverrideNativeName="NumberLabel5"))
	UTextBlock* bpv__NumberLabel5__pf;
	UPROPERTY(Export, meta=(DisplayName="X-1", OverrideNativeName="X-1"))
	UTextBlock* bpv__Xx1__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="X-1 Dot", Category="Effectiveness_Graph", OverrideNativeName="X-1Dot"))
	UImage* bpv__Xx1Dot__pfG;
	UPROPERTY(Export, meta=(DisplayName="X-2", OverrideNativeName="X-2"))
	UTextBlock* bpv__Xx2__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="X-2 Dot", Category="Effectiveness_Graph", OverrideNativeName="X-2Dot"))
	UImage* bpv__Xx2Dot__pfG;
	UPROPERTY(Export, meta=(DisplayName="X-3", OverrideNativeName="X-3"))
	UTextBlock* bpv__Xx3__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="X-3 Dot", Category="Effectiveness_Graph", OverrideNativeName="X-3Dot"))
	UImage* bpv__Xx3Dot__pfG;
	UPROPERTY(Export, meta=(DisplayName="X-4", OverrideNativeName="X-4"))
	UTextBlock* bpv__Xx4__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="X-4 Dot", Category="Effectiveness_Graph", OverrideNativeName="X-4Dot"))
	UImage* bpv__Xx4Dot__pfG;
	UPROPERTY(Export, meta=(DisplayName="X-5", OverrideNativeName="X-5"))
	UTextBlock* bpv__Xx5__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="X-5 Dot", Category="Effectiveness_Graph", OverrideNativeName="X-5Dot"))
	UImage* bpv__Xx5Dot__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="X-axis", Category="Effectiveness_Graph", OverrideNativeName="X-axis"))
	UImage* bpv__Xxaxis__pfG;
	UPROPERTY(Export, meta=(DisplayName="X-axis Title", OverrideNativeName="X-axisTitle"))
	UTextBlock* bpv__XxaxisTitle__pfG;
	UPROPERTY(Export, meta=(DisplayName="Y-1", OverrideNativeName="Y-1"))
	UTextBlock* bpv__Yx1__pfG;
	UPROPERTY(Export, meta=(DisplayName="Y-2", OverrideNativeName="Y-2"))
	UTextBlock* bpv__Yx2__pfG;
	UPROPERTY(Export, meta=(DisplayName="Y-3", OverrideNativeName="Y-3"))
	UTextBlock* bpv__Yx3__pfG;
	UPROPERTY(Export, meta=(DisplayName="Y-4", OverrideNativeName="Y-4"))
	UTextBlock* bpv__Yx4__pfG;
	UPROPERTY(Export, meta=(DisplayName="Y-5", OverrideNativeName="Y-5"))
	UTextBlock* bpv__Yx5__pfG;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Y-axis", Category="Effectiveness_Graph", OverrideNativeName="Y-axis"))
	UImage* bpv__Yxaxis__pfG;
	UPROPERTY(Export, meta=(DisplayName="Y-axis Title", OverrideNativeName="Y-axisTitle"))
	UTextBlock* bpv__YxaxisTitle__pfG;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="X-Spot 1", Category="Default", MultiLine="true", OverrideNativeName="X-Spot 1"))
	FString bpv__XxSpotx1__pfGT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="X-Spot 2", Category="Default", MultiLine="true", OverrideNativeName="X-Spot 2"))
	FString bpv__XxSpotx2__pfGT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="X-Spot 3", Category="Default", MultiLine="true", OverrideNativeName="X-Spot 3"))
	FString bpv__XxSpotx3__pfGT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="X-Spot 4", Category="Default", MultiLine="true", OverrideNativeName="X-Spot 4"))
	FString bpv__XxSpotx4__pfGT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="X-Spot 5", Category="Default", MultiLine="true", OverrideNativeName="X-Spot 5"))
	FString bpv__XxSpotx5__pfGT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="X-axis Title", Category="Default", MultiLine="true", OverrideNativeName="X-axis Title"))
	FString bpv__XxaxisxTitle__pfGT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Y-axis Title", Category="Default", MultiLine="true", OverrideNativeName="Y-axis Title"))
	FString bpv__YxaxisxTitle__pfGT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Lack Of Data Warning", Category="Default", MultiLine="true", OverrideNativeName="Lack of Data Warning"))
	FString bpv__LackxofxDataxWarning__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Last Index Attempt #", Category="Default", MultiLine="true", OverrideNativeName="Last Index Attempt #"))
	int32 bpv__LastxIndexxAttemptxx__pfTTTQ;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Number Of Graphing Points", Category="Default", MultiLine="true", OverrideNativeName="Number of Graphing Points"))
	int32 bpv__NumberxofxGraphingxPoints__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Temp Loop Counter", Category="Default", MultiLine="true", OverrideNativeName="Temp Loop Counter"))
	int32 bpv__TempxLoopxCounter__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Data Being Used", Category="Default", MultiLine="true", OverrideNativeName="Data Being Used"))
	TArray<int32> bpv__DataxBeingxUsed__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Y-Spot 1", Category="Default", MultiLine="true", OverrideNativeName="Y-Spot 1"))
	FString bpv__YxSpotx1__pfGT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Y-Spot 2", Category="Default", MultiLine="true", OverrideNativeName="Y-Spot 2"))
	FString bpv__YxSpotx2__pfGT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Y-Spot 3", Category="Default", MultiLine="true", OverrideNativeName="Y-Spot 3"))
	FString bpv__YxSpotx3__pfGT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Y-Spot 4", Category="Default", MultiLine="true", OverrideNativeName="Y-Spot 4"))
	FString bpv__YxSpotx4__pfGT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Y-Spot 5", Category="Default", MultiLine="true", OverrideNativeName="Y-Spot 5"))
	FString bpv__YxSpotx5__pfGT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Line Reset", Category="Default", MultiLine="true", OverrideNativeName="Line Reset"))
	bool bpv__LinexReset__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	int32 b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	int32 b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	int32 b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	int32 b0l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_4"))
	int32 b0l__CallFunc_Array_Get_Item_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_5"))
	int32 b0l__CallFunc_Array_Get_Item_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_6"))
	int32 b0l__CallFunc_Array_Get_Item_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_7"))
	int32 b0l__CallFunc_Array_Get_Item_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_8"))
	int32 b0l__CallFunc_Array_Get_Item_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_9"))
	int32 b0l__CallFunc_Array_Get_Item_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_10"))
	int32 b0l__CallFunc_Array_Get_Item_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_11"))
	int32 b0l__CallFunc_Array_Get_Item_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_12"))
	int32 b0l__CallFunc_Array_Get_Item_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_13"))
	int32 b0l__CallFunc_Array_Get_Item_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_14"))
	FAttempt_Struct__pf3774553483 b0l__CallFunc_Array_Get_Item_14__pf;
	UEffectiveness_Graph_C__pf517162645(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Effectiveness_Graph__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CreateGraphBySwitcher"))
	virtual void bpf__CreateGraphBySwitcher__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Reset Graph"))
	virtual void bpf__ResetxGraph__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Y-axis"))
	virtual void bpf__SetxYxaxis__pfTG();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Get Data"))
	virtual void bpf__GetxData__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Dot Position"))
	virtual void bpf__SetxDotxPosition__pfTT(/*out*/ UImage*& bpp__Dot__pf, int32 bpp__DotxNumber__pfT, int32 bpp__DataxNumber__pfT, UTextBlock* bpp__Label__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Place Line"))
	virtual void bpf__PlacexLine__pfT(UImage* bpp__ReferencexxxDotx1__pfTGTT, UImage* bpp__ReferencexxxDotx2__pfTGTT, /*out*/ UImage*& bpp__LinextoxSet__pfTT, /*out*/ bool& bpp__Resetx__pfzy);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
