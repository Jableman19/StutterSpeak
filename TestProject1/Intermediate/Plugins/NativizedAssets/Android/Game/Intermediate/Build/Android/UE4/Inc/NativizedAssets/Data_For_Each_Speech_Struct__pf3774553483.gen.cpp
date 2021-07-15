// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Data_For_Each_Speech_Struct__pf3774553483.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeData_For_Each_Speech_Struct__pf3774553483() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483();
// End Cross Module References
class UScriptStruct* FData_For_Each_Speech_Struct__pf3774553483::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Structs/Data_For_Each_Speech_Struct"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("Data_For_Each_Speech_Struct")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483, StructPackage, TEXT("Data_For_Each_Speech_Struct"), sizeof(FData_For_Each_Speech_Struct__pf3774553483), Get_Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Hash());
	}
	return Singleton;
}
template<> NATIVIZEDASSETS_API UScriptStruct* StaticStruct<FData_For_Each_Speech_Struct__pf3774553483>()
{
	return FData_For_Each_Speech_Struct__pf3774553483::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483(FData_For_Each_Speech_Struct__pf3774553483::StaticStruct, TEXT("/Game/Stutter_Speak_Content/Structs/Data_For_Each_Speech_Struct"), TEXT("Data_For_Each_Speech_Struct"), true, TEXT("/Game/Stutter_Speak_Content/Structs/Data_For_Each_Speech_Struct"), TEXT("/Game/Stutter_Speak_Content/Structs/Data_For_Each_Speech_Struct.Data_For_Each_Speech_Struct"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFData_For_Each_Speech_Struct__pf3774553483
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFData_For_Each_Speech_Struct__pf3774553483()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Data_For_Each_Speech_Struct")),new UScriptStruct::TCppStructOps<FData_For_Each_Speech_Struct__pf3774553483>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFData_For_Each_Speech_Struct__pf3774553483;
	struct Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics
	{
		static UObject* OuterFuncGetter();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
	UObject* Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::OuterFuncGetter()
	{
		return FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Structs/Data_For_Each_Speech_Struct"));	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data_For_Each_Speech_Struct__pf3774553483.h" },
		{ "OverrideNativeName", "Data_For_Each_Speech_Struct" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Structs/Data_For_Each_Speech_Struct.Data_For_Each_Speech_Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FData_For_Each_Speech_Struct__pf3774553483>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::NewProp_bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf_MetaData[] = {
		{ "Category", "Data_For_Each_Speech_Struct__pf3774553483" },
		{ "DisplayName", "Speech Name" },
		{ "ModuleRelativePath", "Public/Data_For_Each_Speech_Struct__pf3774553483.h" },
		{ "OverrideNativeName", "SpeechName_10_4BF299294CA6F727AACD22A608080F4C" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::NewProp_bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf = { "SpeechName_10_4BF299294CA6F727AACD22A608080F4C", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FData_For_Each_Speech_Struct__pf3774553483, bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::NewProp_bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::NewProp_bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::NewProp_bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf_Inner = { "bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::NewProp_bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf_MetaData[] = {
		{ "Category", "Data_For_Each_Speech_Struct__pf3774553483" },
		{ "DisplayName", "Saved Data for [Speech Name]" },
		{ "ModuleRelativePath", "Public/Data_For_Each_Speech_Struct__pf3774553483.h" },
		{ "OverrideNativeName", "SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::NewProp_bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf = { "SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FData_For_Each_Speech_Struct__pf3774553483, bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::NewProp_bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::NewProp_bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::NewProp_bpv__SpeechName_10_4BF299294CA6F727AACD22A608080F4C__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::NewProp_bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::NewProp_bpv__SavedDataforSpeechName_11_BAF45FEB4E5277F0FF11AEBAA51C1ECC__pf,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::ReturnStructParams = {
		(UObject* (*)())&OuterFuncGetter,
		nullptr,
		&NewStructOps,
		"Data_For_Each_Speech_Struct",
		sizeof(FData_For_Each_Speech_Struct__pf3774553483),
		alignof(FData_For_Each_Speech_Struct__pf3774553483),
		Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::PropPointers),
		RF_Public|RF_Transient,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Hash();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Structs/Data_For_Each_Speech_Struct"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Data_For_Each_Speech_Struct"), sizeof(FData_For_Each_Speech_Struct__pf3774553483), Get_Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Hash(), true);
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FData_For_Each_Speech_Struct__pf3774553483_Hash() { return 2266615593U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
