#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UTextBlock;
class UMenuGI_C__pf3730827578;
#include "SpeechPageW__pf1694860710.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Widgets/Speech_World/SpeechPageW.SpeechPageW_C", OverrideNativeName="SpeechPageW_C"))
class USpeechPageW_C__pf1694860710 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_0", Category="SpeechPageW", OverrideNativeName="Image_0"))
	UImage* bpv__Image_0__pf;
	UPROPERTY(Export, meta=(DisplayName="PageNumber", OverrideNativeName="PageNumber"))
	UTextBlock* bpv__PageNumber__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBody", Category="SpeechPageW", OverrideNativeName="TextBody"))
	UTextBlock* bpv__TextBody__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Page Num", Category="Default", MultiLine="true", OverrideNativeName="PageNum"))
	int32 bpv__PageNum__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Page Shown", Category="Default", MultiLine="true", OverrideNativeName="PageShown"))
	int32 bpv__PageShown__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Size", Category="Default", MultiLine="true", ClampMin="1", ClampMax="1000", OverrideNativeName="Size"))
	int32 bpv__Size__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_1"))
	int32 b0l__Temp_int_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_2"))
	int32 b0l__Temp_int_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FString b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_3"))
	int32 b0l__Temp_int_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI_1"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	FString b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI_2"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateFontInfo"))
	FSlateFontInfo b0l__K2Node_MakeStruct_SlateFontInfo__pf;
	USpeechPageW_C__pf1694860710(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_SpeechPageW__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_SpeechPageW__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_SpeechPageW__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="NextPageByNextButton"))
	virtual void bpf__NextPageByNextButton__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PreviousPageByBackButton"))
	virtual void bpf__PreviousPageByBackButton__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/** \t * Called once only at game time on non-template instances.\t * While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.\t * If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.\t */", ToolTip="Called once only at game time on non-template instances.While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.", CppFromBpEvent, OverrideNativeName="OnInitialized"))
	virtual void bpf__OnInitialized__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_0"))
	virtual FText  bpf__GetText_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
