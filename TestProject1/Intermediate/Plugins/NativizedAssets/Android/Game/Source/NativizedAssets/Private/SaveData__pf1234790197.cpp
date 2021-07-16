#include "NativizedAssets.h"
#include "SaveData__pf1234790197.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Attempt_Struct__pf3774553483.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
USaveData_C__pf1234790197::USaveData_C__pf1234790197(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	bpv__All_Saved_Data__pf = TArray<FData_For_Each_Speech_Struct__pf3774553483> ();
	bpv__All_Saved_Data__pf.AddUninitialized(10);
	FData_For_Each_Speech_Struct__pf3774553483::StaticStruct()->InitializeStruct(bpv__All_Saved_Data__pf.GetData(), 10);
	auto& __Local__0 = bpv__All_Saved_Data__pf[0];
	__Local__0.bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf = FString(TEXT("Grandfather Passage"));
	auto& __Local__1 = bpv__All_Saved_Data__pf[1];
	__Local__1.bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf = FString(TEXT("Dream Passage"));
	auto& __Local__2 = bpv__All_Saved_Data__pf[2];
	__Local__2.bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf = FString(TEXT("Rainbow Passage"));
	auto& __Local__3 = bpv__All_Saved_Data__pf[3];
	__Local__3.bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf = FString(TEXT("The King's Speech - King George VI"));
	auto& __Local__4 = bpv__All_Saved_Data__pf[4];
	__Local__4.bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf = FString(TEXT("Joey's Birthday Passage"));
	auto& __Local__5 = bpv__All_Saved_Data__pf[5];
	__Local__5.bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf = FString(TEXT("The Big Red Building Passage"));
	auto& __Local__6 = bpv__All_Saved_Data__pf[6];
	__Local__6.bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf = FString(TEXT("Johnny Sets the Table Passage"));
	auto& __Local__7 = bpv__All_Saved_Data__pf[7];
	__Local__7.bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf = FString(TEXT("Bugsy Passage"));
	auto& __Local__8 = bpv__All_Saved_Data__pf[8];
	__Local__8.bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf = FString(TEXT("My Cheerio Catastrophe Passage"));
	auto& __Local__9 = bpv__All_Saved_Data__pf[9];
	__Local__9.bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf = FString(TEXT("Women in Science and Aviation - Amelia Earhart"));
}
PRAGMA_ENABLE_OPTIMIZATION
void USaveData_C__pf1234790197::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void USaveData_C__pf1234790197::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483());
	extern UScriptStruct* Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void USaveData_C__pf1234790197::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void USaveData_C__pf1234790197::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{17, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{162, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Stutter_Speak_Content/Structs/Data_For_Each_Speech_Struct.Data_For_Each_Speech_Struct 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Stutter_Speak_Content/Structs/Attempt_Struct.Attempt_Struct 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__USaveData_C__pf1234790197
{
	FRegisterHelper__USaveData_C__pf1234790197()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Stutter_Speak_Content/SaveData/SaveData"), &USaveData_C__pf1234790197::__StaticDependenciesAssets);
	}
	static FRegisterHelper__USaveData_C__pf1234790197 Instance;
};
FRegisterHelper__USaveData_C__pf1234790197 FRegisterHelper__USaveData_C__pf1234790197::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
