#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
class UWidgetComponent;
class UStaticMeshComponent;
class UTimelineComponent;
class UCredits_C__pf4267528607;
class UUserWidget;
class UMaterialInstanceDynamic;
class UConfirm_Begin_Speech_C__pf4267528607;
#include "ProjectorScreen_Blueprint__pf3730827578.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Blueprints/ProjectorScreen_Blueprint.ProjectorScreen_Blueprint_C", OverrideNativeName="ProjectorScreen_Blueprint_C"))
class AProjectorScreen_Blueprint_C__pf3730827578 : public AStaticMeshActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Confirmation Text"))
	UWidgetComponent* bpv__ConfirmationxText__pfT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ProjectorFader"))
	UStaticMeshComponent* bpv__ProjectorFader__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Display"))
	UWidgetComponent* bpv__Display__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_1_NewTrack_0_94B1DB104C059A38E3F2F79CBCEA26CD"))
	float bpv__Timeline_1_NewTrack_0_94B1DB104C059A38E3F2F79CBCEA26CD__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_1__Direction_94B1DB104C059A38E3F2F79CBCEA26CD"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_1__Direction_94B1DB104C059A38E3F2F79CBCEA26CD__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="ProjectorScreen_Blueprint", OverrideNativeName="Timeline_1"))
	UTimelineComponent* bpv__Timeline_1__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_3_NewTrack_0_5BED847147E109FD2DA806BFA760A1EF"))
	float bpv__Timeline_3_NewTrack_0_5BED847147E109FD2DA806BFA760A1EF__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_3__Direction_5BED847147E109FD2DA806BFA760A1EF"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_3__Direction_5BED847147E109FD2DA806BFA760A1EF__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="ProjectorScreen_Blueprint", OverrideNativeName="Timeline_3"))
	UTimelineComponent* bpv__Timeline_3__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_2_NewTrack_0_5D7A4EDF40C40A37453A03BED529CE03"))
	float bpv__Timeline_2_NewTrack_0_5D7A4EDF40C40A37453A03BED529CE03__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_2__Direction_5D7A4EDF40C40A37453A03BED529CE03"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_2__Direction_5D7A4EDF40C40A37453A03BED529CE03__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="ProjectorScreen_Blueprint", OverrideNativeName="Timeline_2"))
	UTimelineComponent* bpv__Timeline_2__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0_NewTrack_0_D1E66E324B5A7958FE66C8AF64A42750"))
	float bpv__Timeline_0_NewTrack_0_D1E66E324B5A7958FE66C8AF64A42750__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0__Direction_D1E66E324B5A7958FE66C8AF64A42750"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_0__Direction_D1E66E324B5A7958FE66C8AF64A42750__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="ProjectorScreen_Blueprint", OverrideNativeName="Timeline_0"))
	UTimelineComponent* bpv__Timeline_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Credits", Category="Default", MultiLine="true", OverrideNativeName="Credits"))
	UCredits_C__pf4267528607* bpv__Credits__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Details", Category="Default", MultiLine="true", OverrideNativeName="Details"))
	UUserWidget* bpv__Details__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="MAT", Category="Default", MultiLine="true", OverrideNativeName="MAT"))
	UMaterialInstanceDynamic* bpv__MAT__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Condition", Category="Default", MultiLine="true", OverrideNativeName="Condition"))
	bool bpv__Condition__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="As Confirm Begin Speech", Category="Default", MultiLine="true", OverrideNativeName="As Confirm Begin Speech"))
	UConfirm_Begin_Speech_C__pf4267528607* bpv__AsxConfirmxBeginxSpeech__pfTTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsConfirm_Begin_Speech"))
	UConfirm_Begin_Speech_C__pf4267528607* b0l__K2Node_DynamicCast_AsConfirm_Begin_Speech__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	AProjectorScreen_Blueprint_C__pf3730827578(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ProjectorScreen_Blueprint__pf_13(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RevertByCancel"))
	virtual void bpf__RevertByCancel__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Confirm?ByBeginSpeech"))
	virtual void bpf__ConfirmxByBeginSpeech__pfzy();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ProjectorFadeOut"))
	virtual void bpf__ProjectorFadeOut__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ProjectorFadeIn"))
	virtual void bpf__ProjectorFadeIn__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ShowDetailsByDetailsPanel"))
	virtual void bpf__ShowDetailsByDetailsPanel__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_3__UpdateFunc"))
	virtual void bpf__Timeline_3__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_3__FinishedFunc"))
	virtual void bpf__Timeline_3__FinishedFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_2__UpdateFunc"))
	virtual void bpf__Timeline_2__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_2__FinishedFunc"))
	virtual void bpf__Timeline_2__FinishedFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_1__UpdateFunc"))
	virtual void bpf__Timeline_1__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_1__FinishedFunc"))
	virtual void bpf__Timeline_1__FinishedFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__UpdateFunc"))
	virtual void bpf__Timeline_0__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__FinishedFunc"))
	virtual void bpf__Timeline_0__FinishedFunc__pf();
public:
};
