#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UBorder;
class UTextBlock;
#include "Reset_Button_Display__pf4267528607.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Reset_Button_Display.Reset_Button_Display_C", OverrideNativeName="Reset_Button_Display_C"))
class UReset_Button_Display_C__pf4267528607 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Border_0", Category="Reset_Button_Display", OverrideNativeName="Border_0"))
	UBorder* bpv__Border_0__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Name 1", Category="Reset_Button_Display", OverrideNativeName="Name1"))
	UTextBlock* bpv__Name1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Name 2", Category="Reset_Button_Display", OverrideNativeName="Name2"))
	UTextBlock* bpv__Name2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Name 3", Category="Reset_Button_Display", OverrideNativeName="Name3"))
	UTextBlock* bpv__Name3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Name 4", Category="Reset_Button_Display", OverrideNativeName="Name4"))
	UTextBlock* bpv__Name4__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Name 5", Category="Reset_Button_Display", OverrideNativeName="Name5"))
	UTextBlock* bpv__Name5__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Name 6", Category="Reset_Button_Display", OverrideNativeName="Name6"))
	UTextBlock* bpv__Name6__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Name 7", Category="Reset_Button_Display", OverrideNativeName="Name7"))
	UTextBlock* bpv__Name7__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time Per Loop", Category="Default", MultiLine="true", OverrideNativeName="Time per loop"))
	float bpv__Timexperxloop__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Text To Display", Category="Default", MultiLine="true", OverrideNativeName="Text to Display"))
	FString bpv__TextxtoxDisplay__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time 1", Category="Default", MultiLine="true", OverrideNativeName="Time 1"))
	float bpv__Timex1__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time 2", Category="Default", MultiLine="true", OverrideNativeName="Time 2"))
	float bpv__Timex2__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time 3", Category="Default", MultiLine="true", OverrideNativeName="Time 3"))
	float bpv__Timex3__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time 4", Category="Default", MultiLine="true", OverrideNativeName="Time 4"))
	float bpv__Timex4__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time 5", Category="Default", MultiLine="true", OverrideNativeName="Time 5"))
	float bpv__Timex5__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time 6", Category="Default", MultiLine="true", OverrideNativeName="Time 6"))
	float bpv__Timex6__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time 7", Category="Default", MultiLine="true", OverrideNativeName="Time 7"))
	float bpv__Timex7__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="1", Category="Default", MultiLine="true", OverrideNativeName="1"))
	bool bpv__1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="2", Category="Default", MultiLine="true", OverrideNativeName="2"))
	bool bpv__2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="3", Category="Default", MultiLine="true", OverrideNativeName="3"))
	bool bpv__3__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="4", Category="Default", MultiLine="true", OverrideNativeName="4"))
	bool bpv__4__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="5", Category="Default", MultiLine="true", OverrideNativeName="5"))
	bool bpv__5__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="6", Category="Default", MultiLine="true", OverrideNativeName="6"))
	bool bpv__6__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="7", Category="Default", MultiLine="true", OverrideNativeName="7"))
	bool bpv__7__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Duration", Category="Default", MultiLine="true", OverrideNativeName="Duration"))
	float bpv__Duration__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time Incrementing", Category="Default", MultiLine="true", OverrideNativeName="Time Incrementing"))
	float bpv__TimexIncrementing__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Position Incrementing", Category="Default", MultiLine="true", OverrideNativeName="Position Incrementing"))
	float bpv__PositionxIncrementing__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X"))
	float b0l__CallFunc_BreakVector2D_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y"))
	float b0l__CallFunc_BreakVector2D_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_1"))
	float b0l__CallFunc_BreakVector2D_X_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_1"))
	float b0l__CallFunc_BreakVector2D_Y_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_2"))
	float b0l__CallFunc_BreakVector2D_X_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_2"))
	float b0l__CallFunc_BreakVector2D_Y_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_3"))
	float b0l__CallFunc_BreakVector2D_X_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_3"))
	float b0l__CallFunc_BreakVector2D_Y_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_4"))
	float b0l__CallFunc_BreakVector2D_X_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_4"))
	float b0l__CallFunc_BreakVector2D_Y_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_5"))
	float b0l__CallFunc_BreakVector2D_X_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_5"))
	float b0l__CallFunc_BreakVector2D_Y_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_6"))
	float b0l__CallFunc_BreakVector2D_X_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_6"))
	float b0l__CallFunc_BreakVector2D_Y_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_7"))
	float b0l__CallFunc_BreakVector2D_X_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_7"))
	float b0l__CallFunc_BreakVector2D_Y_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_8"))
	float b0l__CallFunc_BreakVector2D_X_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_8"))
	float b0l__CallFunc_BreakVector2D_Y_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_9"))
	float b0l__CallFunc_BreakVector2D_X_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_9"))
	float b0l__CallFunc_BreakVector2D_Y_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_10"))
	float b0l__CallFunc_BreakVector2D_X_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_10"))
	float b0l__CallFunc_BreakVector2D_Y_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_11"))
	float b0l__CallFunc_BreakVector2D_X_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_11"))
	float b0l__CallFunc_BreakVector2D_Y_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Display_Name"))
	FString b0l__K2Node_CustomEvent_Display_Name__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_12"))
	float b0l__CallFunc_BreakVector2D_X_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_12"))
	float b0l__CallFunc_BreakVector2D_Y_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_13"))
	float b0l__CallFunc_BreakVector2D_X_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_13"))
	float b0l__CallFunc_BreakVector2D_Y_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_14"))
	float b0l__CallFunc_BreakVector2D_X_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_14"))
	float b0l__CallFunc_BreakVector2D_Y_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_15"))
	float b0l__CallFunc_BreakVector2D_X_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_15"))
	float b0l__CallFunc_BreakVector2D_Y_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_16"))
	float b0l__CallFunc_BreakVector2D_X_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_16"))
	float b0l__CallFunc_BreakVector2D_Y_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_17"))
	float b0l__CallFunc_BreakVector2D_X_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_17"))
	float b0l__CallFunc_BreakVector2D_Y_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_18"))
	float b0l__CallFunc_BreakVector2D_X_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_18"))
	float b0l__CallFunc_BreakVector2D_Y_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_19"))
	float b0l__CallFunc_BreakVector2D_X_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_19"))
	float b0l__CallFunc_BreakVector2D_Y_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_20"))
	float b0l__CallFunc_BreakVector2D_X_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_20"))
	float b0l__CallFunc_BreakVector2D_Y_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_21"))
	float b0l__CallFunc_BreakVector2D_X_21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_21"))
	float b0l__CallFunc_BreakVector2D_Y_21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_22"))
	float b0l__CallFunc_BreakVector2D_X_22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_22"))
	float b0l__CallFunc_BreakVector2D_Y_22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_23"))
	float b0l__CallFunc_BreakVector2D_X_23__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_23"))
	float b0l__CallFunc_BreakVector2D_Y_23__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_24"))
	float b0l__CallFunc_BreakVector2D_X_24__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_24"))
	float b0l__CallFunc_BreakVector2D_Y_24__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_25"))
	float b0l__CallFunc_BreakVector2D_X_25__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_25"))
	float b0l__CallFunc_BreakVector2D_Y_25__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_26"))
	float b0l__CallFunc_BreakVector2D_X_26__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_26"))
	float b0l__CallFunc_BreakVector2D_Y_26__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_27"))
	float b0l__CallFunc_BreakVector2D_X_27__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_27"))
	float b0l__CallFunc_BreakVector2D_Y_27__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_28"))
	float b0l__CallFunc_BreakVector2D_X_28__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_28"))
	float b0l__CallFunc_BreakVector2D_Y_28__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_29"))
	float b0l__CallFunc_BreakVector2D_X_29__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_29"))
	float b0l__CallFunc_BreakVector2D_Y_29__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_30"))
	float b0l__CallFunc_BreakVector2D_X_30__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_30"))
	float b0l__CallFunc_BreakVector2D_Y_30__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_31"))
	float b0l__CallFunc_BreakVector2D_X_31__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_31"))
	float b0l__CallFunc_BreakVector2D_Y_31__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_32"))
	float b0l__CallFunc_BreakVector2D_X_32__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_32"))
	float b0l__CallFunc_BreakVector2D_Y_32__pf;
	UReset_Button_Display_C__pf4267528607(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Reset_Button_Display_0"))
	void bpf__ExecuteUbergraph_Reset_Button_Display__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Reset_Button_Display_1"))
	void bpf__ExecuteUbergraph_Reset_Button_Display__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Reset_Button_Display_2"))
	void bpf__ExecuteUbergraph_Reset_Button_Display__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Reset_Button_Display_3"))
	void bpf__ExecuteUbergraph_Reset_Button_Display__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Reset_Button_Display_4"))
	void bpf__ExecuteUbergraph_Reset_Button_Display__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Reset_Button_Display_5"))
	void bpf__ExecuteUbergraph_Reset_Button_Display__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Reset_Button_Display_6"))
	void bpf__ExecuteUbergraph_Reset_Button_Display__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Reset_Button_Display__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Reset_Button_Display__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Reset_Button_Display__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Reset_Button_Display__pf_10(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Starting1BySelf"))
	virtual void bpf__Starting1BySelf__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Starting2BySelf"))
	virtual void bpf__Starting2BySelf__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Starting3BySelf"))
	virtual void bpf__Starting3BySelf__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="EnableDisplayByFloppyText"))
	virtual void bpf__EnableDisplayByFloppyText__pf(const FString& bpp__DisplayxName__pfT__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetStarterTextBySelf"))
	virtual void bpf__SetStarterTextBySelf__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StopDisplayingByProjector"))
	virtual void bpf__StopDisplayingByProjector__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RecursiveCall7BySelf"))
	virtual void bpf__RecursiveCall7BySelf__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RecursiveCall6BySelf"))
	virtual void bpf__RecursiveCall6BySelf__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RecursiveCall5BySelf"))
	virtual void bpf__RecursiveCall5BySelf__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RecursiveCall4BySelf"))
	virtual void bpf__RecursiveCall4BySelf__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Starting7BySelf"))
	virtual void bpf__Starting7BySelf__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Starting6BySelf"))
	virtual void bpf__Starting6BySelf__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Starting5BySelf"))
	virtual void bpf__Starting5BySelf__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Starting4BySelf"))
	virtual void bpf__Starting4BySelf__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RecursiveCall3BySelf"))
	virtual void bpf__RecursiveCall3BySelf__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RecursiveCall2BySelf"))
	virtual void bpf__RecursiveCall2BySelf__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RecursiveCall1BySelf"))
	virtual void bpf__RecursiveCall1BySelf__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Time"))
	virtual void bpf__SetxTime__pfT(float bpp__TimextoxSet__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Position"))
	virtual void bpf__SetxPosition__pfT(FVector2D bpp__PositionxtoxSet__pfTT);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
