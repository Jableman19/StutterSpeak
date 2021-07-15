#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UMediaSoundComponent;
class USceneComponent;
class UMediaPlayer;
class UMediaSource;
class USoundWave;
class ARecording_Test_C__pf1711902218;
#include "Playback_Actor__pf3621867267.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Playback_Actor.Playback_Actor_C", OverrideNativeName="Playback_Actor_C"))
class APlayback_Actor_C__pf3621867267 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MediaSound"))
	UMediaSoundComponent* bpv__MediaSound__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Media Player Node", Category="Default", MultiLine="true", OverrideNativeName="MediaPlayerNode"))
	UMediaPlayer* bpv__MediaPlayerNode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Start Time", Category="Default", MultiLine="true", OverrideNativeName="startTime"))
	float bpv__startTime__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Playing", Category="Default", MultiLine="true", OverrideNativeName="IsPlaying"))
	bool bpv__IsPlaying__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time", Category="Default", MultiLine="true", OverrideNativeName="Time"))
	FTimespan bpv__Time__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Seconds", Category="Default", MultiLine="true", OverrideNativeName="Current Seconds"))
	float bpv__CurrentxSeconds__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speech Dur", Category="Default", MultiLine="true", OverrideNativeName="SpeechDur"))
	float bpv__SpeechDur__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rec Ready", Category="Default", MultiLine="true", OverrideNativeName="RecReady"))
	bool bpv__RecReady__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="B", Category="Default", MultiLine="true", OverrideNativeName="B"))
	FString bpv__B__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", MultiLine="true", OverrideNativeName="NewVar_0"))
	UMediaSource* bpv__NewVar_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 1", Category="Default", MultiLine="true", OverrideNativeName="NewVar_1"))
	USoundWave* bpv__NewVar_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ARecording_Test_C__pf1711902218*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ARecording_Test_C__pf1711902218* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsRecording_Test"))
	ARecording_Test_C__pf1711902218* b0l__K2Node_DynamicCast_AsRecording_Test__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FindFiles_FoundFiles"))
	TArray<FString> b0l__CallFunc_FindFiles_FoundFiles__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	FString b0l__CallFunc_Array_Get_Item_1__pf;
	APlayback_Actor_C__pf3621867267(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Playback_Actor_0"))
	void bpf__ExecuteUbergraph_Playback_Actor__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Playback_Actor__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Playback_Actor__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Playback_Actor__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Playback_Actor__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Playback_Actor__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Playback_Actor__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Close"))
	virtual void bpf__Close__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Seek"))
	virtual void bpf__Seek__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RecordOver"))
	virtual void bpf__RecordOver__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Play"))
	virtual void bpf__Play__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Pause"))
	virtual void bpf__Pause__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Begin"))
	virtual void bpf__Begin__pf();
public:
};
