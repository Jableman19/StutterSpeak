// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject1/ReadWriter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadWriter() {}
// Cross Module References
	TESTPROJECT1_API UClass* Z_Construct_UClass_UReadWriter_NoRegister();
	TESTPROJECT1_API UClass* Z_Construct_UClass_UReadWriter();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TestProject1();
// End Cross Module References
	DEFINE_FUNCTION(UReadWriter::execSaveStringToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UReadWriter::SaveStringToFile(Z_Param_Filename,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadWriter::execLoadFileToString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UReadWriter::LoadFileToString(Z_Param_Filename);
		P_NATIVE_END;
	}
	void UReadWriter::StaticRegisterNativesUReadWriter()
	{
		UClass* Class = UReadWriter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadFileToString", &UReadWriter::execLoadFileToString },
			{ "SaveStringToFile", &UReadWriter::execSaveStringToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadWriter_LoadFileToString_Statics
	{
		struct ReadWriter_eventLoadFileToString_Parms
		{
			FString Filename;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriter_LoadFileToString_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadWriter_eventLoadFileToString_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriter_LoadFileToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadWriter_eventLoadFileToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadWriter_LoadFileToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriter_LoadFileToString_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriter_LoadFileToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadWriter_LoadFileToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "File I/O" },
		{ "ModuleRelativePath", "ReadWriter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadWriter_LoadFileToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadWriter, nullptr, "LoadFileToString", nullptr, nullptr, sizeof(ReadWriter_eventLoadFileToString_Parms), Z_Construct_UFunction_UReadWriter_LoadFileToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriter_LoadFileToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadWriter_LoadFileToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriter_LoadFileToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadWriter_LoadFileToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadWriter_LoadFileToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadWriter_SaveStringToFile_Statics
	{
		struct ReadWriter_eventSaveStringToFile_Parms
		{
			FString Filename;
			FString Data;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriter_SaveStringToFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadWriter_eventSaveStringToFile_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriter_SaveStringToFile_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadWriter_eventSaveStringToFile_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadWriter_SaveStringToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReadWriter_eventSaveStringToFile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadWriter_SaveStringToFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriter_SaveStringToFile_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriter_SaveStringToFile_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadWriter_SaveStringToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadWriter_SaveStringToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "File I/O" },
		{ "ModuleRelativePath", "ReadWriter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadWriter_SaveStringToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadWriter, nullptr, "SaveStringToFile", nullptr, nullptr, sizeof(ReadWriter_eventSaveStringToFile_Parms), Z_Construct_UFunction_UReadWriter_SaveStringToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriter_SaveStringToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadWriter_SaveStringToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadWriter_SaveStringToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadWriter_SaveStringToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReadWriter_SaveStringToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReadWriter_NoRegister()
	{
		return UReadWriter::StaticClass();
	}
	struct Z_Construct_UClass_UReadWriter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadWriter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TestProject1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadWriter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadWriter_LoadFileToString, "LoadFileToString" }, // 1781987335
		{ &Z_Construct_UFunction_UReadWriter_SaveStringToFile, "SaveStringToFile" }, // 4085362507
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadWriter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows for BP nodes with a string value to read in/out to txt\n */" },
		{ "IncludePath", "ReadWriter.h" },
		{ "ModuleRelativePath", "ReadWriter.h" },
		{ "ToolTip", "Allows for BP nodes with a string value to read in/out to txt" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadWriter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadWriter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReadWriter_Statics::ClassParams = {
		&UReadWriter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReadWriter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadWriter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadWriter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReadWriter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReadWriter, 2983643713);
	template<> TESTPROJECT1_API UClass* StaticClass<UReadWriter>()
	{
		return UReadWriter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReadWriter(Z_Construct_UClass_UReadWriter, &UReadWriter::StaticClass, TEXT("/Script/TestProject1"), TEXT("UReadWriter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadWriter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
