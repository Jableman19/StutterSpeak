// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/RaterBP__pf1694860710.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaterBP__pf1694860710() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_URaterBP_C__pf1694860710_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_URaterBP_C__pf1694860710();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
	void URaterBP_C__pf1694860710::StaticRegisterNativesURaterBP_C__pf1694860710()
	{
	}
	UClass* Z_Construct_UClass_URaterBP_C__pf1694860710_NoRegister()
	{
		return URaterBP_C__pf1694860710::StaticClass();
	}
	struct Z_Construct_UClass_URaterBP_C__pf1694860710_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URaterBP_C__pf1694860710_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URaterBP_C__pf1694860710_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RaterBP__pf1694860710.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RaterBP__pf1694860710.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "RaterBP_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Widgets/Speech_World/RaterBP.RaterBP_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URaterBP_C__pf1694860710_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URaterBP_C__pf1694860710>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URaterBP_C__pf1694860710_Statics::ClassParams = {
		&URaterBP_C__pf1694860710::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URaterBP_C__pf1694860710_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URaterBP_C__pf1694860710_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URaterBP_C__pf1694860710()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Widgets/Speech_World/RaterBP"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("RaterBP_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URaterBP_C__pf1694860710_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(URaterBP_C__pf1694860710, TEXT("RaterBP_C"), 29365717);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<URaterBP_C__pf1694860710>()
	{
		return URaterBP_C__pf1694860710::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URaterBP_C__pf1694860710(Z_Construct_UClass_URaterBP_C__pf1694860710, &URaterBP_C__pf1694860710::StaticClass, TEXT("/Game/Stutter_Speak_Content/Widgets/Speech_World/RaterBP"), TEXT("RaterBP_C"), true, TEXT("/Game/Stutter_Speak_Content/Widgets/Speech_World/RaterBP"), TEXT("/Game/Stutter_Speak_Content/Widgets/Speech_World/RaterBP.RaterBP_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URaterBP_C__pf1694860710);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
