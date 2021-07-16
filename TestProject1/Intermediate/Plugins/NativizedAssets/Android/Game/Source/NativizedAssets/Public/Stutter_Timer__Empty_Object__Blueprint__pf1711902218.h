#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Stutter_Struct__pf3774553483.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
class ABPSpeechWorld_C__pf2075166221;
class USpeechPageW_C__pf1694860710;
class UMenuGI_C__pf3730827578;
class AMicrophone_MainMic_Blueprint_C__pf3730827578;
#include "Stutter_Timer__Empty_Object__Blueprint__pf1711902218.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Managers/Stutter_Timer__Empty_Object__Blueprint.Stutter_Timer__Empty_Object__Blueprint_C", OverrideNativeName="Stutter_Timer__Empty_Object__Blueprint_C"))
class AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Timer", Category="Default", MultiLine="true", OverrideNativeName="Timer"))
	float bpv__Timer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Stutter", Category="Default", MultiLine="true", OverrideNativeName="Current Stutter"))
	FStutter_Struct__pf3774553483 bpv__CurrentxStutter__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Page Number", Category="Default", MultiLine="true", OverrideNativeName="Current Page Number"))
	int32 bpv__CurrentxPagexNumber__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="All Stutters In Speech", Category="Default", MultiLine="true", OverrideNativeName="All Stutters in Speech"))
	TArray<FStutter_Struct__pf3774553483> bpv__AllxStuttersxinxSpeech__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Get Stutter Time Temp", Category="Default", MultiLine="true", OverrideNativeName="Get Stutter Time Temp"))
	FStutter_Struct__pf3774553483 bpv__GetxStutterxTimexTemp__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Total Length Of Stuttering", Category="Default", MultiLine="true", OverrideNativeName="Total Length of Stuttering"))
	float bpv__TotalxLengthxofxStuttering__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Timer On", Category="Default", MultiLine="true", OverrideNativeName="TimerOn"))
	bool bpv__TimerOn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ABPSpeechWorld_C__pf2075166221*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ABPSpeechWorld_C__pf2075166221* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPSpeech_World"))
	ABPSpeechWorld_C__pf2075166221* b0l__K2Node_DynamicCast_AsBPSpeech_World__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSpeech_Page_W"))
	USpeechPageW_C__pf1694860710* b0l__K2Node_DynamicCast_AsSpeech_Page_W__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_Stutter_Struct"))
	FStutter_Struct__pf3774553483 b0l__K2Node_MakeStruct_Stutter_Struct__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	FStutter_Struct__pf3774553483 b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI_1"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_1"))
	TArray<AMicrophone_MainMic_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	AMicrophone_MainMic_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_2"))
	TArray<AMicrophone_MainMic_Blueprint_C__pf3730827578*> b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint"))
	AMicrophone_MainMic_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	AMicrophone_MainMic_Blueprint_C__pf3730827578* b0l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint_1"))
	AMicrophone_MainMic_Blueprint_C__pf3730827578* b0l__K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Stutter_Timer__Empty_Object__Blueprint__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Stutter_Timer__Empty_Object__Blueprint__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Stutter_Timer__Empty_Object__Blueprint__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Stutter_Timer__Empty_Object__Blueprint__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Get Total Stutter Time"))
	virtual void bpf__GetxTotalxStutterxTime__pfTTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Clear Timer"))
	virtual void bpf__ClearxTimer__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Stop Timer"))
	virtual void bpf__StopxTimer__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Start Timer"))
	virtual void bpf__StartxTimer__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Duration Tracker"))
	virtual void bpf__DurationxTracker__pfT();
public:
};
