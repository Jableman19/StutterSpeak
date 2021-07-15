// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/GripEnum__pf3611121690.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGripEnum__pf3611121690() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__GripEnum__pf();
// End Cross Module References
	static UEnum* E__GripEnum__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Starter_Content/VirtualRealityBP/Blueprints/GripEnum"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("GripEnum")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__GripEnum__pf, EnumPackage, TEXT("GripEnum"));
		}
		return Singleton;
	}
	template<> NATIVIZEDASSETS_API UEnum* StaticEnum<E__GripEnum__pf>()
	{
		return E__GripEnum__pf_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__GripEnum__pf(E__GripEnum__pf_StaticEnum, TEXT("/Game/Starter_Content/VirtualRealityBP/Blueprints/GripEnum"), TEXT("GripEnum"), true, TEXT("/Game/Starter_Content/VirtualRealityBP/Blueprints/GripEnum"), TEXT("/Game/Starter_Content/VirtualRealityBP/Blueprints/GripEnum.GripEnum"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__GripEnum__pf_Hash() { return 3470940224U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__GripEnum__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Starter_Content/VirtualRealityBP/Blueprints/GripEnum"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("GripEnum"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__GripEnum__pf_Hash(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "GripEnum::NewEnumerator0", (int64)E__GripEnum__pf::NewEnumerator0 },
				{ "GripEnum::NewEnumerator1", (int64)E__GripEnum__pf::NewEnumerator1 },
				{ "GripEnum::NewEnumerator2", (int64)E__GripEnum__pf::NewEnumerator2 },
				{ "GripEnum::GripEnum_MAX", (int64)E__GripEnum__pf::E__GripEnum__pf_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__GripEnum__pf_MAX.Name", "E__GripEnum__pf::E__GripEnum__pf_MAX" },
				{ "E__GripEnum__pf_MAX.OverrideName", "GripEnum::GripEnum_MAX" },
				{ "EnumDisplayNameFn", "E__GripEnum__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/GripEnum__pf3611121690.h" },
				{ "NewEnumerator0.DisplayName", "Open" },
				{ "NewEnumerator0.Name", "E__GripEnum__pf::NewEnumerator0" },
				{ "NewEnumerator0.OverrideName", "GripEnum::NewEnumerator0" },
				{ "NewEnumerator1.DisplayName", "CanGrab" },
				{ "NewEnumerator1.Name", "E__GripEnum__pf::NewEnumerator1" },
				{ "NewEnumerator1.OverrideName", "GripEnum::NewEnumerator1" },
				{ "NewEnumerator2.DisplayName", "Grab" },
				{ "NewEnumerator2.Name", "E__GripEnum__pf::NewEnumerator2" },
				{ "NewEnumerator2.OverrideName", "GripEnum::NewEnumerator2" },
				{ "OverrideNativeName", "GripEnum" },
				{ "ReplaceConverted", "/Game/Starter_Content/VirtualRealityBP/Blueprints/GripEnum.GripEnum" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Starter_Content/VirtualRealityBP/Blueprints/GripEnum")); },
				E__GripEnum__pf__GetUserFriendlyName,
				"GripEnum",
				"E__GripEnum__pf",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::Dynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
