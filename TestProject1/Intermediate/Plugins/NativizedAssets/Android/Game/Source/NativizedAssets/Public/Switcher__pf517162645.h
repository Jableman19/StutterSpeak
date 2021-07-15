#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetSwitcher;
class UEffectiveness_Graph_C__pf517162645;
class UEye_Contact_Graph_C__pf517162645;
class UFluency_Graph_C__pf517162645;
class UListViewData_C__pf517162645;
class UPercentage_Stuttering_Graph_C__pf517162645;
class UResultsForSwitcher_C__pf517162645;
class UButton;
class UTime_Stuttering_Graph_C__pf517162645;
class UTotal_Time_Graph_C__pf517162645;
class UUserWidget;
class AProjectorScreen_Blueprint_C__pf3730827578;
class USpeech_Details_Pannel_C__pf4267528607;
#include "Switcher__pf517162645.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/Switcher.Switcher_C", OverrideNativeName="Switcher_C"))
class USwitcher_C__pf517162645 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Data Display", Category="Switcher", OverrideNativeName="DataDisplay"))
	UWidgetSwitcher* bpv__DataDisplay__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Effectiveness_Graph", Category="Switcher", OverrideNativeName="Effectiveness_Graph"))
	UEffectiveness_Graph_C__pf517162645* bpv__Effectiveness_Graph__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Eye_Contact_Graph", Category="Switcher", OverrideNativeName="Eye_Contact_Graph"))
	UEye_Contact_Graph_C__pf517162645* bpv__Eye_Contact_Graph__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Fluency_Graph", Category="Switcher", OverrideNativeName="Fluency_Graph"))
	UFluency_Graph_C__pf517162645* bpv__Fluency_Graph__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ListViewData", Category="Switcher", OverrideNativeName="ListViewData"))
	UListViewData_C__pf517162645* bpv__ListViewData__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Percentage_Stuttering_Graph", Category="Switcher", OverrideNativeName="Percentage_Stuttering_Graph"))
	UPercentage_Stuttering_Graph_C__pf517162645* bpv__Percentage_Stuttering_Graph__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ResultsForSwitcher", Category="Switcher", OverrideNativeName="ResultsForSwitcher"))
	UResultsForSwitcher_C__pf517162645* bpv__ResultsForSwitcher__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Tab 1", Category="Switcher", OverrideNativeName="Tab1"))
	UButton* bpv__Tab1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Tab 2", Category="Switcher", OverrideNativeName="Tab2"))
	UButton* bpv__Tab2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Tab 3", Category="Switcher", OverrideNativeName="Tab3"))
	UButton* bpv__Tab3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Tab 4", Category="Switcher", OverrideNativeName="Tab4"))
	UButton* bpv__Tab4__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Tab 5", Category="Switcher", OverrideNativeName="Tab5"))
	UButton* bpv__Tab5__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Tab 6", Category="Switcher", OverrideNativeName="Tab6"))
	UButton* bpv__Tab6__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Tab 7", Category="Switcher", OverrideNativeName="Tab7"))
	UButton* bpv__Tab7__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Tab 8", Category="Switcher", OverrideNativeName="Tab8"))
	UButton* bpv__Tab8__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Time_Stuttering_Graph", Category="Switcher", OverrideNativeName="Time_Stuttering_Graph"))
	UTime_Stuttering_Graph_C__pf517162645* bpv__Time_Stuttering_Graph__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Total_Time_Graph", Category="Switcher", OverrideNativeName="Total_Time_Graph"))
	UTotal_Time_Graph_C__pf517162645* bpv__Total_Time_Graph__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Default Style Normal", Category="Default", MultiLine="true", OverrideNativeName="Default Style Normal"))
	FSlateBrush bpv__DefaultxStylexNormal__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Default Style Hovered", Category="Default", MultiLine="true", OverrideNativeName="Default Style Hovered"))
	FSlateBrush bpv__DefaultxStylexHovered__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Style on Tab", Category="Default", MultiLine="true", OverrideNativeName="Style On Tab"))
	FSlateBrush bpv__StylexOnxTab__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Tab Index", Category="Default", MultiLine="true", OverrideNativeName="Current Tab Index"))
	int32 bpv__CurrentxTabxIndex__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Style Pressed Sound", Category="Default", MultiLine="true", OverrideNativeName="Style Pressed Sound"))
	FSlateSound bpv__StylexPressedxSound__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Style Hovered Sound", Category="Default", MultiLine="true", OverrideNativeName="Style Hovered Sound"))
	FSlateSound bpv__StylexHoveredxSound__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tabs", Category="Default", MultiLine="true", OverrideNativeName="Tabs"))
	TArray<UButton*> bpv__Tabs__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Graphs", Category="Default", MultiLine="true", OverrideNativeName="Graphs"))
	TArray<UUserWidget*> bpv__Graphs__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AProjectorScreen_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AProjectorScreen_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_1"))
	int32 b0l__Temp_int_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsProjector_Screen_Blueprint"))
	AProjectorScreen_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSpeech_Details_Pannel"))
	USpeech_Details_Pannel_C__pf4267528607* b0l__K2Node_DynamicCast_AsSpeech_Details_Pannel__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_ButtonStyle"))
	FButtonStyle b0l__K2Node_MakeStruct_ButtonStyle__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_ButtonStyle_1"))
	FButtonStyle b0l__K2Node_MakeStruct_ButtonStyle_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_ButtonStyle_2"))
	FButtonStyle b0l__K2Node_MakeStruct_ButtonStyle_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_ButtonStyle_3"))
	FButtonStyle b0l__K2Node_MakeStruct_ButtonStyle_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_ButtonStyle_4"))
	FButtonStyle b0l__K2Node_MakeStruct_ButtonStyle_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_ButtonStyle_5"))
	FButtonStyle b0l__K2Node_MakeStruct_ButtonStyle_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_ButtonStyle_6"))
	FButtonStyle b0l__K2Node_MakeStruct_ButtonStyle_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_ButtonStyle_7"))
	FButtonStyle b0l__K2Node_MakeStruct_ButtonStyle_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_ButtonStyle_8"))
	FButtonStyle b0l__K2Node_MakeStruct_ButtonStyle_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess__pf;
	USwitcher_C__pf517162645(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Switcher__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Switcher__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Switcher__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Switcher__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CreateGraphsByMenuGI"))
	virtual void bpf__CreateGraphsByMenuGI__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LeftByButton"))
	virtual void bpf__LeftByButton__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="IndexRIghtByButton"))
	virtual void bpf__IndexRIghtByButton__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ResetPanelBySpeechDetailsPanel"))
	virtual void bpf__ResetPanelBySpeechDetailsPanel__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="Clear Button Color"))
	virtual void bpf__ClearxButtonxColor__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Button Selector"))
	virtual void bpf__ButtonxSelector__pfT(/*out*/ UButton*& bpp__Buttonxx__pfTQ);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
