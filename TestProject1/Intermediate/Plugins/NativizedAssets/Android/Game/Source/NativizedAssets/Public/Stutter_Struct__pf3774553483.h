#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Stutter_Struct__pf3774553483.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Stutter_Speak_Content/Structs/Stutter_Struct.Stutter_Struct", OverrideNativeName="Stutter_Struct"))
struct FStutter_Struct__pf3774553483
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName=":Length of Stutter", Tooltip, OverrideNativeName="LengthofStutter_10_3F74E2144F55F376EE07BAADF6F2E65B"))
	float bpv__LengthofStutter_10_3F74E2144F55F376EE07BAADF6F2E65B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName=":Page #", Tooltip, OverrideNativeName="Page_11_12EAE8BB4034C43FAA8A91ABD4A05BA3"))
	int32 bpv__Page_11_12EAE8BB4034C43FAA8A91ABD4A05BA3__pf;
	FStutter_Struct__pf3774553483();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FStutter_Struct__pf3774553483& __Other) const
	{
		return FStutter_Struct__pf3774553483::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FStutter_Struct__pf3774553483& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FStutter_Struct__pf3774553483::StaticStruct()); }
};
