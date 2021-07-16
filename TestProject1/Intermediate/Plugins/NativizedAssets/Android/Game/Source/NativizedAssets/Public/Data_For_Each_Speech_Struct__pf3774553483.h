#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Attempt_Struct__pf3774553483.h"
#include "Data_For_Each_Speech_Struct__pf3774553483.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Structs/Data_For_Each_Speech_Struct.Data_For_Each_Speech_Struct", OverrideNativeName="Data_For_Each_Speech_Struct"))
struct FData_For_Each_Speech_Struct__pf3774553483
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Speech Name", Tooltip, OverrideNativeName="SpeechName_10_4BF299294CA6F727AACD22A608080F4C"))
	FString bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Saved Data for [Speech Name]", Tooltip, OverrideNativeName="SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC"))
	TArray<FAttempt_Struct__pf3774553483> bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf;
	FData_For_Each_Speech_Struct__pf3774553483();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FData_For_Each_Speech_Struct__pf3774553483& __Other) const
	{
		return FData_For_Each_Speech_Struct__pf3774553483::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
