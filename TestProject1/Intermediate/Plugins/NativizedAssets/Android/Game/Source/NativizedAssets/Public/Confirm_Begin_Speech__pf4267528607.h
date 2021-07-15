#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
#include "Confirm_Begin_Speech__pf4267528607.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Confirm_Begin_Speech.Confirm_Begin_Speech_C", OverrideNativeName="Confirm_Begin_Speech_C"))
class UConfirm_Begin_Speech_C__pf4267528607 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Messge Text", Category="Confirm_Begin_Speech", OverrideNativeName="MessgeText"))
	UTextBlock* bpv__MessgeText__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Opacity", Category="Default", MultiLine="true", OverrideNativeName="Opacity"))
	float bpv__Opacity__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Timing_1"))
	float b0l__K2Node_CustomEvent_Timing_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Done"))
	bool b0l__K2Node_CustomEvent_Done__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Timing"))
	float b0l__K2Node_CustomEvent_Timing__pf;
	UConfirm_Begin_Speech_C__pf4267528607(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Confirm_Begin_Speech__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Confirm_Begin_Speech__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Confirm_Begin_Speech__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ShowByProjectorScreen"))
	virtual void bpf__ShowByProjectorScreen__pf(float bpp__Timing__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HideByProjectorScreen"))
	virtual void bpf__HideByProjectorScreen__pf(float bpp__Timing__pf, bool bpp__Done__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
