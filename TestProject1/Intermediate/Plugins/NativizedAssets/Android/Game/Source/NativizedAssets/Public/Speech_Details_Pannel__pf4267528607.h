#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
class USwitcher_C__pf517162645;
class AProjectorScreen_Blueprint_C__pf3730827578;
class UMenuGI_C__pf3730827578;
#include "Speech_Details_Pannel__pf4267528607.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Speech_Details_Pannel.Speech_Details_Pannel_C", OverrideNativeName="Speech_Details_Pannel_C"))
class USpeech_Details_Pannel_C__pf4267528607 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(Export, meta=(DisplayName="Speech Title", OverrideNativeName="SpeechTitle"))
	UTextBlock* bpv__SpeechTitle__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Switcher", Category="Speech_Details_Pannel", OverrideNativeName="Switcher"))
	USwitcher_C__pf517162645* bpv__Switcher__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speech Name", Category="Default", MultiLine="true", OverrideNativeName="Speech Name"))
	FString bpv__SpeechxName__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AProjectorScreen_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AProjectorScreen_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsProjector_Screen_Blueprint"))
	AProjectorScreen_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	USpeech_Details_Pannel_C__pf4267528607(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Speech_Details_Pannel__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetSpeechNameByMenuGI"))
	virtual void bpf__SetSpeechNameByMenuGI__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
