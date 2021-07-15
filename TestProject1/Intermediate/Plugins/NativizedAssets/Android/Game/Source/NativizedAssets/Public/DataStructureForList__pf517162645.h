#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Blueprint/IUserObjectListEntry.h"
class UBorder;
class UTextBlock;
class UObject;
#include "DataStructureForList__pf517162645.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/DataStructureForList.DataStructureForList_C", OverrideNativeName="DataStructureForList_C"))
class UDataStructureForList_C__pf517162645 : public UUserWidget, public IUserObjectListEntry
{
public:
	GENERATED_BODY()
	UPROPERTY(Export, meta=(DisplayName="Border_185", OverrideNativeName="Border_185"))
	UBorder* bpv__Border_185__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_64", OverrideNativeName="TextBlock_64"))
	UTextBlock* bpv__TextBlock_64__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_96", OverrideNativeName="TextBlock_96"))
	UTextBlock* bpv__TextBlock_96__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_132", OverrideNativeName="TextBlock_132"))
	UTextBlock* bpv__TextBlock_132__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_213", OverrideNativeName="TextBlock_213"))
	UTextBlock* bpv__TextBlock_213__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_261", OverrideNativeName="TextBlock_261"))
	UTextBlock* bpv__TextBlock_261__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_315", OverrideNativeName="TextBlock_315"))
	UTextBlock* bpv__TextBlock_315__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_386", OverrideNativeName="TextBlock_386"))
	UTextBlock* bpv__TextBlock_386__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Attempt Num", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="AttemptNum"))
	FString bpv__AttemptNum__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Time", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="Time"))
	FString bpv__Time__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Time Stutt", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="TimeStutt"))
	FString bpv__TimeStutt__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Stutt Percent", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="StuttPercent"))
	FString bpv__StuttPercent__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Eye", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="Eye"))
	FString bpv__Eye__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Effective", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="Effective"))
	FString bpv__Effective__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Fluency", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="Fluency"))
	FString bpv__Fluency__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="List Item Object", Category="Default", MultiLine="true", OverrideNativeName="List Item Object"))
	UObject* bpv__ListxItemxObject__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BGColor", Category="Default", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="BGColor"))
	FSlateBrush bpv__BGColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_ListItemObject"))
	UObject* b0l__K2Node_Event_ListItemObject__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_bIsExpanded"))
	bool b0l__K2Node_Event_bIsExpanded__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_bIsSelected"))
	bool b0l__K2Node_Event_bIsSelected__pf;
	UDataStructureForList_C__pf517162645(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_DataStructureForList__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DataStructureForList__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DataStructureForList__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DataStructureForList__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Category="ObjectListEntry", Comment="/** Called when this entry is assigned a new item object to represent by the owning list view */", ToolTip="Called when this entry is assigned a new item object to represent by the owning list view", CppFromBpEvent, OverrideNativeName="OnListItemObjectSet"))
	virtual void bpf__OnListItemObjectSet__pf(UObject* bpp__ListItemObject__pf);
	UFUNCTION(meta=(Category="UserListEntry", Comment="/** Called when the selection state of the item represented by this entry changes. */", DisplayName="On Item Selection Changed", ToolTip="Called when the selection state of the item represented by this entry changes.", CppFromBpEvent, OverrideNativeName="BP_OnItemSelectionChanged"))
	virtual void bpf__BP_OnItemSelectionChanged__pf(bool bpp__bIsSelected__pf);
	UFUNCTION(meta=(Category="UserListEntry", Comment="/** Called when the expansion state of the item represented by this entry changes. Tree view entries only. */", DisplayName="On Item Expansion Changed", ToolTip="Called when the expansion state of the item represented by this entry changes. Tree view entries only.", CppFromBpEvent, OverrideNativeName="BP_OnItemExpansionChanged"))
	virtual void bpf__BP_OnItemExpansionChanged__pf(bool bpp__bIsExpanded__pf);
	UFUNCTION(meta=(Category="UserListEntry", Comment="/** Called when this entry is released from the owning table and no longer represents any list item */", DisplayName="On Entry Released", ToolTip="Called when this entry is released from the owning table and no longer represents any list item", CppFromBpEvent, OverrideNativeName="BP_OnEntryReleased"))
	virtual void bpf__BP_OnEntryReleased__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
