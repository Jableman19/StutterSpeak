#include "NativizedAssets.h"
#include "Data_For_Each_Speech_Struct__pf3774553483.h"
FData_For_Each_Speech_Struct__pf3774553483::FData_For_Each_Speech_Struct__pf3774553483()
{
}
PRAGMA_DISABLE_OPTIMIZATION
void FData_For_Each_Speech_Struct__pf3774553483::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedStruct /Game/Stutter_Speak_Content/Structs/Attempt_Struct.Attempt_Struct 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FData_For_Each_Speech_Struct__pf3774553483
{
	FRegisterHelper__FData_For_Each_Speech_Struct__pf3774553483()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Stutter_Speak_Content/Structs/Data_For_Each_Speech_Struct"), &FData_For_Each_Speech_Struct__pf3774553483::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FData_For_Each_Speech_Struct__pf3774553483 Instance;
};
FRegisterHelper__FData_For_Each_Speech_Struct__pf3774553483 FRegisterHelper__FData_For_Each_Speech_Struct__pf3774553483::Instance;
