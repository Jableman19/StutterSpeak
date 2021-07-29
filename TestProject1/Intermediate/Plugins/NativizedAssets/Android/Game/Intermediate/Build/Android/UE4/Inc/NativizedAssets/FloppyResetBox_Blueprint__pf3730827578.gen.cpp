// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/FloppyResetBox_Blueprint__pf3730827578.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloppyResetBox_Blueprint__pf3730827578() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
// End Cross Module References
	DEFINE_FUNCTION(AFloppyResetBox_Blueprint_C__pf3730827578::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_AFloppyResetBox_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AFloppyResetBox_Blueprint_C__pf3730827578::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFloppyResetBox_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void AFloppyResetBox_Blueprint_C__pf3730827578::StaticRegisterNativesAFloppyResetBox_Blueprint_C__pf3730827578()
	{
		UClass* Class = AFloppyResetBox_Blueprint_C__pf3730827578::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &AFloppyResetBox_Blueprint_C__pf3730827578::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFloppyResetBox_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloppyResetBox_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/FloppyResetBox_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloppyResetBox_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloppyResetBox_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloppyResetBox_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloppyResetBox_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloppyResetBox_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578_NoRegister()
	{
		return AFloppyResetBox_Blueprint_C__pf3730827578::StaticClass();
	}
	struct Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFloppyResetBox_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 1070358235
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FloppyResetBox_Blueprint__pf3730827578.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FloppyResetBox_Blueprint__pf3730827578.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "FloppyResetBox_Blueprint_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Blueprints/FloppyResetBox_Blueprint.FloppyResetBox_Blueprint_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloppyResetBox_Blueprint_C__pf3730827578>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578_Statics::ClassParams = {
		&AFloppyResetBox_Blueprint_C__pf3730827578::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Blueprints/FloppyResetBox_Blueprint"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("FloppyResetBox_Blueprint_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AFloppyResetBox_Blueprint_C__pf3730827578, TEXT("FloppyResetBox_Blueprint_C"), 1389810446);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AFloppyResetBox_Blueprint_C__pf3730827578>()
	{
		return AFloppyResetBox_Blueprint_C__pf3730827578::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloppyResetBox_Blueprint_C__pf3730827578(Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578, &AFloppyResetBox_Blueprint_C__pf3730827578::StaticClass, TEXT("/Game/Stutter_Speak_Content/Blueprints/FloppyResetBox_Blueprint"), TEXT("FloppyResetBox_Blueprint_C"), true, TEXT("/Game/Stutter_Speak_Content/Blueprints/FloppyResetBox_Blueprint"), TEXT("/Game/Stutter_Speak_Content/Blueprints/FloppyResetBox_Blueprint.FloppyResetBox_Blueprint_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloppyResetBox_Blueprint_C__pf3730827578);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
