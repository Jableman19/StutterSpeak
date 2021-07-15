// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Stutter_Struct__pf3774553483.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStutter_Struct__pf3774553483() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483();
// End Cross Module References
class UScriptStruct* FStutter_Struct__pf3774553483::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Structs/Stutter_Struct"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("Stutter_Struct")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483, StructPackage, TEXT("Stutter_Struct"), sizeof(FStutter_Struct__pf3774553483), Get_Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Hash());
	}
	return Singleton;
}
template<> NATIVIZEDASSETS_API UScriptStruct* StaticStruct<FStutter_Struct__pf3774553483>()
{
	return FStutter_Struct__pf3774553483::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStutter_Struct__pf3774553483(FStutter_Struct__pf3774553483::StaticStruct, TEXT("/Game/Stutter_Speak_Content/Structs/Stutter_Struct"), TEXT("Stutter_Struct"), true, TEXT("/Game/Stutter_Speak_Content/Structs/Stutter_Struct"), TEXT("/Game/Stutter_Speak_Content/Structs/Stutter_Struct.Stutter_Struct"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFStutter_Struct__pf3774553483
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFStutter_Struct__pf3774553483()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Stutter_Struct")),new UScriptStruct::TCppStructOps<FStutter_Struct__pf3774553483>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFStutter_Struct__pf3774553483;
	struct Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics
	{
		static UObject* OuterFuncGetter();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LengthofStutter_10_3F74E2144F55F376EE07BAADF6F2E65B__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__LengthofStutter_10_3F74E2144F55F376EE07BAADF6F2E65B__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Page_11_12EAE8BB4034C43FAA8A91ABD4A05BA3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Page_11_12EAE8BB4034C43FAA8A91ABD4A05BA3__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
	UObject* Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::OuterFuncGetter()
	{
		return FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Structs/Stutter_Struct"));	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Stutter_Struct__pf3774553483.h" },
		{ "OverrideNativeName", "Stutter_Struct" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Structs/Stutter_Struct.Stutter_Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStutter_Struct__pf3774553483>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::NewProp_bpv__LengthofStutter_10_3F74E2144F55F376EE07BAADF6F2E65B__pf_MetaData[] = {
		{ "Category", "Stutter_Struct__pf3774553483" },
		{ "DisplayName", ":Length of Stutter" },
		{ "ModuleRelativePath", "Public/Stutter_Struct__pf3774553483.h" },
		{ "OverrideNativeName", "LengthofStutter_10_3F74E2144F55F376EE07BAADF6F2E65B" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::NewProp_bpv__LengthofStutter_10_3F74E2144F55F376EE07BAADF6F2E65B__pf = { "LengthofStutter_10_3F74E2144F55F376EE07BAADF6F2E65B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStutter_Struct__pf3774553483, bpv__LengthofStutter_10_3F74E2144F55F376EE07BAADF6F2E65B__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::NewProp_bpv__LengthofStutter_10_3F74E2144F55F376EE07BAADF6F2E65B__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::NewProp_bpv__LengthofStutter_10_3F74E2144F55F376EE07BAADF6F2E65B__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::NewProp_bpv__Page_11_12EAE8BB4034C43FAA8A91ABD4A05BA3__pf_MetaData[] = {
		{ "Category", "Stutter_Struct__pf3774553483" },
		{ "DisplayName", ":Page #" },
		{ "ModuleRelativePath", "Public/Stutter_Struct__pf3774553483.h" },
		{ "OverrideNativeName", "Page_11_12EAE8BB4034C43FAA8A91ABD4A05BA3" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::NewProp_bpv__Page_11_12EAE8BB4034C43FAA8A91ABD4A05BA3__pf = { "Page_11_12EAE8BB4034C43FAA8A91ABD4A05BA3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStutter_Struct__pf3774553483, bpv__Page_11_12EAE8BB4034C43FAA8A91ABD4A05BA3__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::NewProp_bpv__Page_11_12EAE8BB4034C43FAA8A91ABD4A05BA3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::NewProp_bpv__Page_11_12EAE8BB4034C43FAA8A91ABD4A05BA3__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::NewProp_bpv__LengthofStutter_10_3F74E2144F55F376EE07BAADF6F2E65B__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::NewProp_bpv__Page_11_12EAE8BB4034C43FAA8A91ABD4A05BA3__pf,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::ReturnStructParams = {
		(UObject* (*)())&OuterFuncGetter,
		nullptr,
		&NewStructOps,
		"Stutter_Struct",
		sizeof(FStutter_Struct__pf3774553483),
		alignof(FStutter_Struct__pf3774553483),
		Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::PropPointers),
		RF_Public|RF_Transient,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Hash();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Structs/Stutter_Struct"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Stutter_Struct"), sizeof(FStutter_Struct__pf3774553483), Get_Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Hash(), true);
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483_Hash() { return 4000506281U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
