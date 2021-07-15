#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
class UTimelineComponent;
class UMaterialInstanceDynamic;
class ATriggerBox_MenuWorld_C__pf2552470103;
class UMenuGI_C__pf3730827578;
class AMotionControllerPawn_C__pf3611121690;
class AMusicManager_Blueprint_C__pf1711902218;
class ALeftButton_C__pf2198246146;
class ARightButton_C__pf2198246146;
#include "MenuWorldLevelHolder__pf1711902218.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Managers/MenuWorldLevelHolder.MenuWorldLevelHolder_C", OverrideNativeName="MenuWorldLevelHolder_C"))
class AMenuWorldLevelHolder_C__pf1711902218 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(meta=(OverrideNativeName="Fade_in_Out_NewTrack_0_0C0423C249CB7FECA1352D919E3026BE"))
	float bpv__Fade_in_Out_NewTrack_0_0C0423C249CB7FECA1352D919E3026BE__pf;
	UPROPERTY(meta=(OverrideNativeName="Fade_in_Out__Direction_0C0423C249CB7FECA1352D919E3026BE"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Fade_in_Out__Direction_0C0423C249CB7FECA1352D919E3026BE__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="MenuWorldLevelHolder", OverrideNativeName="Fade in/Out"))
	UTimelineComponent* bpv__FadexinxOut__pfTE;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="String Names", Category="Default", MultiLine="true", OverrideNativeName="String Names"))
	TArray<FString> bpv__StringxNames__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Default Strings", Category="Default", MultiLine="true", OverrideNativeName="Default Strings"))
	TArray<FString> bpv__DefaultxStrings__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="String Remaining", Category="Default", MultiLine="true", OverrideNativeName="String Remaining"))
	FString bpv__StringxRemaining__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Length", Category="Default", MultiLine="true", OverrideNativeName="Length"))
	int32 bpv__Length__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Start Index", Category="Default", MultiLine="true", OverrideNativeName="Start Index"))
	int32 bpv__StartxIndex__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Page Iterator", Category="Default", MultiLine="true", OverrideNativeName="Page Iterator"))
	int32 bpv__PagexIterator__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Length Checker", Category="Default", MultiLine="true", OverrideNativeName="LengthChecker"))
	int32 bpv__LengthChecker__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="MAT", Category="Default", MultiLine="true", OverrideNativeName="MAT"))
	UMaterialInstanceDynamic* bpv__MAT__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level Loading", Category="Default", MultiLine="true", OverrideNativeName="LevelLoading"))
	bool bpv__LevelLoading__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClassWithTag_OutActors"))
	TArray<ATriggerBox_MenuWorld_C__pf2552470103*> b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ATriggerBox_MenuWorld_C__pf2552470103* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTrigger_Box_Menu_World"))
	ATriggerBox_MenuWorld_C__pf2552470103* b0l__K2Node_DynamicCast_AsTrigger_Box_Menu_World__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI_1"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_1"))
	int32 b0l__Temp_int_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI_2"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI_3"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_2"))
	int32 b0l__Temp_int_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI_4"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	FString b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AMotionControllerPawn_C__pf3611121690*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_3"))
	int32 b0l__Temp_int_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	AMotionControllerPawn_C__pf3611121690* b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMotion_Controller_Pawn"))
	AMotionControllerPawn_C__pf3611121690* b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b0l__K2Node_DynamicCast_bSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_1"))
	TArray<AMusicManager_Blueprint_C__pf1711902218*> b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	AMusicManager_Blueprint_C__pf1711902218* b0l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMusic_Manager_Blueprint"))
	AMusicManager_Blueprint_C__pf1711902218* b0l__K2Node_DynamicCast_AsMusic_Manager_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_7"))
	bool b0l__K2Node_DynamicCast_bSuccess_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_2"))
	TArray<ALeftButton_C__pf2198246146*> b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_3"))
	TArray<ARightButton_C__pf2198246146*> b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_4"))
	ALeftButton_C__pf2198246146* b0l__CallFunc_Array_Get_Item_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_5"))
	ARightButton_C__pf2198246146* b0l__CallFunc_Array_Get_Item_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLeft_Button"))
	ALeftButton_C__pf2198246146* b0l__K2Node_DynamicCast_AsLeft_Button__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_8"))
	bool b0l__K2Node_DynamicCast_bSuccess_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsRight_Button"))
	ARightButton_C__pf2198246146* b0l__K2Node_DynamicCast_AsRight_Button__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_9"))
	bool b0l__K2Node_DynamicCast_bSuccess_9__pf;
	AMenuWorldLevelHolder_C__pf1711902218(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_MenuWorldLevelHolder_0"))
	void bpf__ExecuteUbergraph_MenuWorldLevelHolder__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuWorldLevelHolder__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuWorldLevelHolder__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MenuWorldLevelHolder__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SpeechLoaderByDetailsPanel"))
	virtual void bpf__SpeechLoaderByDetailsPanel__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="Fade in/Out__UpdateFunc"))
	virtual void bpf__FadexinxOut__UpdateFunc__pfTE();
	UFUNCTION(meta=(OverrideNativeName="Fade in/Out__FinishedFunc"))
	virtual void bpf__FadexinxOut__FinishedFunc__pfTE();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PlayerCameraRotSave"))
	virtual void bpf__PlayerCameraRotSave__pf();
public:
};
