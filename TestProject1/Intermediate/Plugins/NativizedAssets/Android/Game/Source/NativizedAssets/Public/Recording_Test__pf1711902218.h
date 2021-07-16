#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UAudioCaptureComponent;
class USceneComponent;
class USoundSubmixBase;
class USoundWave;
class APlayback_Actor_C__pf3621867267;
#include "Recording_Test__pf1711902218.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Managers/Recording_Test.Recording_Test_C", OverrideNativeName="Recording_Test_C"))
class ARecording_Test_C__pf1711902218 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="AudioCapture"))
	UAudioCaptureComponent* bpv__AudioCapture__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sub Directory", Category="Default", MultiLine="true", OverrideNativeName="SubDirectory"))
	FText bpv__SubDirectory__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Submix", Category="Default", MultiLine="true", OverrideNativeName="Submix"))
	USoundSubmixBase* bpv__Submix__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="12-Hour Hour", Category="Default", MultiLine="true", OverrideNativeName="12-Hour Hour"))
	int32 bpv__12xHourxHour__pfGT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Temp Recording", Category="Default", MultiLine="true", OverrideNativeName="TempRecording"))
	USoundWave* bpv__TempRecording__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="File Pathway", Category="Default", MultiLine="true", OverrideNativeName="filePathway"))
	FString bpv__filePathway__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Path", Category="Default", MultiLine="true", OverrideNativeName="Path"))
	FString bpv__Path__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_FormatArgumentData"))
	FFormatArgumentData b0l__K2Node_MakeStruct_FormatArgumentData__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_FormatArgumentData_1"))
	FFormatArgumentData b0l__K2Node_MakeStruct_FormatArgumentData_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_FormatArgumentData_2"))
	FFormatArgumentData b0l__K2Node_MakeStruct_FormatArgumentData_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_FormatArgumentData_3"))
	FFormatArgumentData b0l__K2Node_MakeStruct_FormatArgumentData_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_FormatArgumentData_4"))
	FFormatArgumentData b0l__K2Node_MakeStruct_FormatArgumentData_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_FormatArgumentData_5"))
	FFormatArgumentData b0l__K2Node_MakeStruct_FormatArgumentData_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<FFormatArgumentData> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<APlayback_Actor_C__pf3621867267*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	APlayback_Actor_C__pf3621867267* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayback_Actor"))
	APlayback_Actor_C__pf3621867267* b0l__K2Node_DynamicCast_AsPlayback_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	ARecording_Test_C__pf1711902218(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Recording_Test__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Recording_Test__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CalledByButtonStop"))
	virtual void bpf__CalledByButtonStop__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CalledByButtonStart"))
	virtual void bpf__CalledByButtonStart__pf();
public:
};
