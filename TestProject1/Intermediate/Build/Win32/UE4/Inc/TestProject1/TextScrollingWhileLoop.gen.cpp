// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject1/TextScrollingWhileLoop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextScrollingWhileLoop() {}
// Cross Module References
	TESTPROJECT1_API UClass* Z_Construct_UClass_UTextScrollingWhileLoop_NoRegister();
	TESTPROJECT1_API UClass* Z_Construct_UClass_UTextScrollingWhileLoop();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TestProject1();
// End Cross Module References
	void UTextScrollingWhileLoop::StaticRegisterNativesUTextScrollingWhileLoop()
	{
	}
	UClass* Z_Construct_UClass_UTextScrollingWhileLoop_NoRegister()
	{
		return UTextScrollingWhileLoop::StaticClass();
	}
	struct Z_Construct_UClass_UTextScrollingWhileLoop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextScrollingWhileLoop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextScrollingWhileLoop_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TextScrollingWhileLoop.h" },
		{ "ModuleRelativePath", "TextScrollingWhileLoop.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextScrollingWhileLoop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextScrollingWhileLoop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextScrollingWhileLoop_Statics::ClassParams = {
		&UTextScrollingWhileLoop::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextScrollingWhileLoop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextScrollingWhileLoop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextScrollingWhileLoop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextScrollingWhileLoop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextScrollingWhileLoop, 1632702374);
	template<> TESTPROJECT1_API UClass* StaticClass<UTextScrollingWhileLoop>()
	{
		return UTextScrollingWhileLoop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextScrollingWhileLoop(Z_Construct_UClass_UTextScrollingWhileLoop, &UTextScrollingWhileLoop::StaticClass, TEXT("/Script/TestProject1"), TEXT("UTextScrollingWhileLoop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextScrollingWhileLoop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
