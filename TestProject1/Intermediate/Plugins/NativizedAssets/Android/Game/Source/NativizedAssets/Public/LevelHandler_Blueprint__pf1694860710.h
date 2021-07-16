#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
class UTimelineComponent;
class UMaterialInstanceDynamic;
class AMotionControllerPawn_C__pf3611121690;
class UMenuGI_C__pf3730827578;
#include "LevelHandler_Blueprint__pf1694860710.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Widgets/Speech_World/LevelHandler_Blueprint.LevelHandler_Blueprint_C", OverrideNativeName="LevelHandler_Blueprint_C"))
class ALevelHandler_Blueprint_C__pf1694860710 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(meta=(OverrideNativeName="Fade_in_Out_Fade_799D995C4B0B12282E0A5E9FDA05100B"))
	float bpv__Fade_in_Out_Fade_799D995C4B0B12282E0A5E9FDA05100B__pf;
	UPROPERTY(meta=(OverrideNativeName="Fade_in_Out__Direction_799D995C4B0B12282E0A5E9FDA05100B"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Fade_in_Out__Direction_799D995C4B0B12282E0A5E9FDA05100B__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="LevelHandler_Blueprint", OverrideNativeName="Fade in/Out"))
	UTimelineComponent* bpv__FadexinxOut__pfTE;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="MAT", Category="Default", MultiLine="true", OverrideNativeName="MAT"))
	UMaterialInstanceDynamic* bpv__MAT__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level Name", Category="Default", MultiLine="true", OverrideNativeName="Level Name"))
	FName bpv__LevelxName__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level Loading", Category="Default", MultiLine="true", OverrideNativeName="LevelLoading"))
	bool bpv__LevelLoading__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AMotionControllerPawn_C__pf3611121690*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AMotionControllerPawn_C__pf3611121690* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMotion_Controller_Pawn"))
	AMotionControllerPawn_C__pf3611121690* b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateDynamicMaterialInstance_ReturnValue"))
	UMaterialInstanceDynamic* b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
	ALevelHandler_Blueprint_C__pf1694860710(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_LevelHandler_Blueprint_0"))
	void bpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SpeechByWidget"))
	virtual void bpf__SpeechByWidget__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MenuByWiidget"))
	virtual void bpf__MenuByWiidget__pf();
	UFUNCTION(meta=(OverrideNativeName="Fade in/Out__UpdateFunc"))
	virtual void bpf__FadexinxOut__UpdateFunc__pfTE();
	UFUNCTION(meta=(OverrideNativeName="Fade in/Out__FinishedFunc"))
	virtual void bpf__FadexinxOut__FinishedFunc__pfTE();
public:
};
