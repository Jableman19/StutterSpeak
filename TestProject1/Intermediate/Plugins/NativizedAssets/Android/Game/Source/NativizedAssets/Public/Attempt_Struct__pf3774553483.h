#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Attempt_Struct__pf3774553483.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Structs/Attempt_Struct.Attempt_Struct", OverrideNativeName="Attempt_Struct"))
struct FAttempt_Struct__pf3774553483
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName=":Speech Name", Tooltip, OverrideNativeName="SpeechName_18_D75C383C4968F0C49AD9E4898AEE2B91"))
	FString bpv__SpeechName_18_D75C383C4968F0C49AD9E4898AEE2B91__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName=":Attempt #", Tooltip, OverrideNativeName="Attempt_19_C99ABC3A4628DAB24147708744F7C892"))
	int32 bpv__Attempt_19_C99ABC3A4628DAB24147708744F7C892__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName=":Total Time Taken", Tooltip, OverrideNativeName="TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA"))
	float bpv__TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName=":Total Time Stuttering", Tooltip, OverrideNativeName="TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD"))
	float bpv__TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName=":Audience Looking %", Tooltip, OverrideNativeName="AudienceLooking_22_26B162624042D88196C3F586D0244BDC"))
	int32 bpv__AudienceLooking_22_26B162624042D88196C3F586D0244BDC__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName=":Message Satisfacation Rating", Tooltip, OverrideNativeName="MessageSatisfacationRating_26_44FD916B4F7CF871DA34A0B63821B22B"))
	int32 bpv__MessageSatisfacationRating_26_44FD916B4F7CF871DA34A0B63821B22B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName=":Fluency Satisfaction Rating", Tooltip, OverrideNativeName="FluencySatisfactionRating_27_DD8AA0664DB55712E4119A826B53557F"))
	int32 bpv__FluencySatisfactionRating_27_DD8AA0664DB55712E4119A826B53557F__pf;
	FAttempt_Struct__pf3774553483();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FAttempt_Struct__pf3774553483& __Other) const
	{
		return FAttempt_Struct__pf3774553483::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FAttempt_Struct__pf3774553483& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FAttempt_Struct__pf3774553483::StaticStruct()); }
};
