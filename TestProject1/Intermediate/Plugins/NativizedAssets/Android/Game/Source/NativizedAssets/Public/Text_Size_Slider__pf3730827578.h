#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "PickupActorInterface__pf3611121690.h"
class UAudioComponent;
class UTextRenderComponent;
class UStaticMeshComponent;
class USceneComponent;
class ASettingsBox_C__pf3730827578;
class UMenuGI_C__pf3730827578;
#include "Text_Size_Slider__pf3730827578.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Blueprints/Text_Size_Slider.Text_Size_Slider_C", OverrideNativeName="Text_Size_Slider_C"))
class AText_Size_Slider_C__pf3730827578 : public AActor, public IPickupActorInterface_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Audio"))
	UAudioComponent* bpv__Audio__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Large"))
	UTextRenderComponent* bpv__Large__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Small"))
	UTextRenderComponent* bpv__Small__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Medium"))
	UTextRenderComponent* bpv__Medium__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LED (Large)"))
	UStaticMeshComponent* bpv__LEDxxLargex__pfTLK;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LED (Meduim)"))
	UStaticMeshComponent* bpv__LEDxxMeduimx__pfTLK;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LED (Small)"))
	UStaticMeshComponent* bpv__LEDxxSmallx__pfTLK;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Slider"))
	UStaticMeshComponent* bpv__Slider__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Rail"))
	UStaticMeshComponent* bpv__Rail__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Index", Category="Default", MultiLine="true", OverrideNativeName="Current Index"))
	int32 bpv__CurrentxIndex__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Next Index", Category="Default", MultiLine="true", OverrideNativeName="Next Index"))
	int32 bpv__NextxIndex__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Location", Category="Default", MultiLine="true", OverrideNativeName="New location"))
	FVector bpv__Newxlocation__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="As Settings Box", Category="Default", MultiLine="true", OverrideNativeName="As Settings Box"))
	ASettingsBox_C__pf3730827578* bpv__AsxSettingsxBox__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sound", Category="Default", MultiLine="true", OverrideNativeName="Sound"))
	UAudioComponent* bpv__Sound__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachTo"))
	USceneComponent* b0l__K2Node_Event_AttachTo__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess_1"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMenu_GI"))
	UMenuGI_C__pf3730827578* b0l__K2Node_DynamicCast_AsMenu_GI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSettings_Box"))
	ASettingsBox_C__pf3730827578* b0l__K2Node_DynamicCast_AsSettings_Box__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocation_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf;
	AText_Size_Slider_C__pf3730827578(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Text_Size_Slider__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Text_Size_Slider__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Text_Size_Slider__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Drop"))
	virtual void bpf__Drop__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Pickup"))
	virtual void bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Change LEDS"))
	virtual void bpf__ChangexLEDS__pfT(UStaticMeshComponent* bpp__LEDxOn__pfT, UStaticMeshComponent* bpp__LEDxOff__pfT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Reset LEDS"))
	virtual void bpf__ResetxLEDS__pfT(UStaticMeshComponent* bpp__LEDxOn__pfT, UStaticMeshComponent* bpp__LEDxOffxx1x__pfTTLK, UStaticMeshComponent* bpp__LEDxOffxx2x__pfTTLK);
public:
};
