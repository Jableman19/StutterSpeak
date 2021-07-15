#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
class UMenuGI_C__pf3730827578;
class AReset_Data_Base2_Blueprint_C__pf3730827578;
class UReset_Button_Display_C__pf4267528607;
#include "Floppy_Text__pf2075166221.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Widgets/Floppy_Text.Floppy_Text_C", OverrideNativeName="Floppy_Text_C"))
class UFloppy_Text_C__pf2075166221 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(Export, meta=(DisplayName="TextBlock_0", OverrideNativeName="TextBlock_0"))
	UTextBlock* bpv__TextBlock_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Orignal Name", Category="Default", MultiLine="true", OverrideNativeName="Orignal Name"))
	FString bpv__OrignalxName__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Floppy Name", Category="Default", MultiLine="true", OverrideNativeName="Floppy Name"))
	FString bpv__FloppyxName__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Reset", Category="Default", MultiLine="true", OverrideNativeName="Reset"))
	bool bpv__Reset__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AReset_Data_Base2_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AReset_Data_Base2_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint"))
	AReset_Data_Base2_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsReset_Button_Display"))
	UReset_Button_Display_C__pf4267528607* b0l__K2Node_DynamicCast_AsReset_Button_Display__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UFloppy_Text_C__pf2075166221(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Floppy_Text__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StoreSpeechNameByProjector"))
	virtual void bpf__StoreSpeechNameByProjector__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
