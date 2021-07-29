// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ButtonPad_Blueprint__pf3730827578.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonPad_Blueprint__pf3730827578() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ALeftButton_C__pf2198246146_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ARightButton_C__pf2198246146_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AButtonPad_Blueprint_C__pf3730827578::execbpf__PlayHummingByBeginButton__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__PlayHummingByBeginButton__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AButtonPad_Blueprint_C__pf3730827578::execbpf__DisableArrowButtonsByBeginSpeech__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__DisableArrowButtonsByBeginSpeech__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AButtonPad_Blueprint_C__pf3730827578::execbpf__RenableArrowButtonsByCancel__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__RenableArrowButtonsByCancel__pf();
		P_NATIVE_END;
	}
	void AButtonPad_Blueprint_C__pf3730827578::StaticRegisterNativesAButtonPad_Blueprint_C__pf3730827578()
	{
		UClass* Class = AButtonPad_Blueprint_C__pf3730827578::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableArrowButtonsByBeginSpeech", &AButtonPad_Blueprint_C__pf3730827578::execbpf__DisableArrowButtonsByBeginSpeech__pf },
			{ "PlayHummingByBeginButton", &AButtonPad_Blueprint_C__pf3730827578::execbpf__PlayHummingByBeginButton__pf },
			{ "RenableArrowButtonsByCancel", &AButtonPad_Blueprint_C__pf3730827578::execbpf__RenableArrowButtonsByCancel__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__DisableArrowButtonsByBeginSpeech__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__DisableArrowButtonsByBeginSpeech__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "DisableArrowButtonsByBeginSpeech" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__DisableArrowButtonsByBeginSpeech__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578, nullptr, "DisableArrowButtonsByBeginSpeech", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__DisableArrowButtonsByBeginSpeech__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__DisableArrowButtonsByBeginSpeech__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__DisableArrowButtonsByBeginSpeech__pf()
	{
		UObject* Outer = Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "DisableArrowButtonsByBeginSpeech" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__DisableArrowButtonsByBeginSpeech__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__PlayHummingByBeginButton__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__PlayHummingByBeginButton__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "PlayHummingByBeginButton" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__PlayHummingByBeginButton__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578, nullptr, "PlayHummingByBeginButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__PlayHummingByBeginButton__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__PlayHummingByBeginButton__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__PlayHummingByBeginButton__pf()
	{
		UObject* Outer = Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "PlayHummingByBeginButton" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__PlayHummingByBeginButton__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__RenableArrowButtonsByCancel__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__RenableArrowButtonsByCancel__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "RenableArrowButtonsByCancel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__RenableArrowButtonsByCancel__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578, nullptr, "RenableArrowButtonsByCancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__RenableArrowButtonsByCancel__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__RenableArrowButtonsByCancel__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__RenableArrowButtonsByCancel__pf()
	{
		UObject* Outer = Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "RenableArrowButtonsByCancel" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__RenableArrowButtonsByCancel__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_NoRegister()
	{
		return AButtonPad_Blueprint_C__pf3730827578::StaticClass();
	}
	struct Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Audio__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Audio__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsLeft_Button__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsLeft_Button__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsRight_Button__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsRight_Button__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsLeft_Button_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsLeft_Button_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsRight_Button_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsRight_Button_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__DisableArrowButtonsByBeginSpeech__pf, "DisableArrowButtonsByBeginSpeech" }, // 275642474
		{ &Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__PlayHummingByBeginButton__pf, "PlayHummingByBeginButton" }, // 2012570186
		{ &Z_Construct_UFunction_AButtonPad_Blueprint_C__pf3730827578_bpf__RenableArrowButtonsByCancel__pf, "RenableArrowButtonsByCancel" }, // 689292564
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "ButtonPad_Blueprint__pf3730827578.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "ButtonPad_Blueprint_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Blueprints/ButtonPad_Blueprint.ButtonPad_Blueprint_C" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Audio__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "Audio" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Audio__pf = { "Audio", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AButtonPad_Blueprint_C__pf3730827578, bpv__Audio__pf), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Audio__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Audio__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ALeftButton_C__pf2198246146_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AButtonPad_Blueprint_C__pf3730827578, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AButtonPad_Blueprint_C__pf3730827578, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_ALeftButton_C__pf2198246146_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsLeft_Button__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsLeft_Button" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsLeft_Button__pf = { "K2Node_DynamicCast_AsLeft_Button", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AButtonPad_Blueprint_C__pf3730827578, b0l__K2Node_DynamicCast_AsLeft_Button__pf), Z_Construct_UClass_ALeftButton_C__pf2198246146_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsLeft_Button__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsLeft_Button__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AButtonPad_Blueprint_C__pf3730827578*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AButtonPad_Blueprint_C__pf3730827578), &Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARightButton_C__pf2198246146_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors_1" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf = { "CallFunc_GetAllActorsOfClass_OutActors_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AButtonPad_Blueprint_C__pf3730827578, b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ALeftButton_C__pf2198246146_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors_2" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf = { "CallFunc_GetAllActorsOfClass_OutActors_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AButtonPad_Blueprint_C__pf3730827578, b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf = { "CallFunc_Array_Get_Item_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AButtonPad_Blueprint_C__pf3730827578, b0l__CallFunc_Array_Get_Item_1__pf), Z_Construct_UClass_ARightButton_C__pf2198246146_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf = { "CallFunc_Array_Get_Item_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AButtonPad_Blueprint_C__pf3730827578, b0l__CallFunc_Array_Get_Item_2__pf), Z_Construct_UClass_ALeftButton_C__pf2198246146_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsRight_Button__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsRight_Button" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsRight_Button__pf = { "K2Node_DynamicCast_AsRight_Button", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AButtonPad_Blueprint_C__pf3730827578, b0l__K2Node_DynamicCast_AsRight_Button__pf), Z_Construct_UClass_ARightButton_C__pf2198246146_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsRight_Button__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsRight_Button__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((AButtonPad_Blueprint_C__pf3730827578*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AButtonPad_Blueprint_C__pf3730827578), &Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsLeft_Button_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsLeft_Button_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsLeft_Button_1__pf = { "K2Node_DynamicCast_AsLeft_Button_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AButtonPad_Blueprint_C__pf3730827578, b0l__K2Node_DynamicCast_AsLeft_Button_1__pf), Z_Construct_UClass_ALeftButton_C__pf2198246146_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsLeft_Button_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsLeft_Button_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_2" },
	};
#endif
	void Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj)
	{
		((AButtonPad_Blueprint_C__pf3730827578*)Obj)->b0l__K2Node_DynamicCast_bSuccess_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf = { "K2Node_DynamicCast_bSuccess_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AButtonPad_Blueprint_C__pf3730827578), &Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARightButton_C__pf2198246146_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors_3" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf = { "CallFunc_GetAllActorsOfClass_OutActors_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AButtonPad_Blueprint_C__pf3730827578, b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf = { "CallFunc_Array_Get_Item_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AButtonPad_Blueprint_C__pf3730827578, b0l__CallFunc_Array_Get_Item_3__pf), Z_Construct_UClass_ARightButton_C__pf2198246146_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsRight_Button_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsRight_Button_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsRight_Button_1__pf = { "K2Node_DynamicCast_AsRight_Button_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AButtonPad_Blueprint_C__pf3730827578, b0l__K2Node_DynamicCast_AsRight_Button_1__pf), Z_Construct_UClass_ARightButton_C__pf2198246146_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsRight_Button_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsRight_Button_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ButtonPad_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_3" },
	};
#endif
	void Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit(void* Obj)
	{
		((AButtonPad_Blueprint_C__pf3730827578*)Obj)->b0l__K2Node_DynamicCast_bSuccess_3__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf = { "K2Node_DynamicCast_bSuccess_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AButtonPad_Blueprint_C__pf3730827578), &Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Audio__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsLeft_Button__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsRight_Button__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsLeft_Button_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsRight_Button_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AButtonPad_Blueprint_C__pf3730827578>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::ClassParams = {
		&AButtonPad_Blueprint_C__pf3730827578::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Blueprints/ButtonPad_Blueprint"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("ButtonPad_Blueprint_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AButtonPad_Blueprint_C__pf3730827578, TEXT("ButtonPad_Blueprint_C"), 4116262388);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AButtonPad_Blueprint_C__pf3730827578>()
	{
		return AButtonPad_Blueprint_C__pf3730827578::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AButtonPad_Blueprint_C__pf3730827578(Z_Construct_UClass_AButtonPad_Blueprint_C__pf3730827578, &AButtonPad_Blueprint_C__pf3730827578::StaticClass, TEXT("/Game/Stutter_Speak_Content/Blueprints/ButtonPad_Blueprint"), TEXT("ButtonPad_Blueprint_C"), true, TEXT("/Game/Stutter_Speak_Content/Blueprints/ButtonPad_Blueprint"), TEXT("/Game/Stutter_Speak_Content/Blueprints/ButtonPad_Blueprint.ButtonPad_Blueprint_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AButtonPad_Blueprint_C__pf3730827578);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
