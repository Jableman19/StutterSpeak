// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject1/IOFileSurfer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOFileSurfer() {}
// Cross Module References
	TESTPROJECT1_API UClass* Z_Construct_UClass_UIOFileSurfer_NoRegister();
	TESTPROJECT1_API UClass* Z_Construct_UClass_UIOFileSurfer();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TestProject1();
// End Cross Module References
	void UIOFileSurfer::StaticRegisterNativesUIOFileSurfer()
	{
	}
	UClass* Z_Construct_UClass_UIOFileSurfer_NoRegister()
	{
		return UIOFileSurfer::StaticClass();
	}
	struct Z_Construct_UClass_UIOFileSurfer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIOFileSurfer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOFileSurfer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IOFileSurfer.h" },
		{ "ModuleRelativePath", "IOFileSurfer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIOFileSurfer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIOFileSurfer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIOFileSurfer_Statics::ClassParams = {
		&UIOFileSurfer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIOFileSurfer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIOFileSurfer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIOFileSurfer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIOFileSurfer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIOFileSurfer, 1495839980);
	template<> TESTPROJECT1_API UClass* StaticClass<UIOFileSurfer>()
	{
		return UIOFileSurfer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIOFileSurfer(Z_Construct_UClass_UIOFileSurfer, &UIOFileSurfer::StaticClass, TEXT("/Script/TestProject1"), TEXT("UIOFileSurfer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIOFileSurfer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
