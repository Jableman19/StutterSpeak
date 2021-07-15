// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/LevelHandler_Blueprint__pf1694860710.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelHandler_Blueprint__pf1694860710() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineDirection();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALevelHandler_Blueprint_C__pf1694860710::execbpf__FadexinxOut__FinishedFunc__pfTE)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__FadexinxOut__FinishedFunc__pfTE();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelHandler_Blueprint_C__pf1694860710::execbpf__FadexinxOut__UpdateFunc__pfTE)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__FadexinxOut__UpdateFunc__pfTE();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelHandler_Blueprint_C__pf1694860710::execbpf__MenuByWiidget__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__MenuByWiidget__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelHandler_Blueprint_C__pf1694860710::execbpf__SpeechByWidget__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SpeechByWidget__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelHandler_Blueprint_C__pf1694860710::execbpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	void ALevelHandler_Blueprint_C__pf1694860710::StaticRegisterNativesALevelHandler_Blueprint_C__pf1694860710()
	{
		UClass* Class = ALevelHandler_Blueprint_C__pf1694860710::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_LevelHandler_Blueprint_0", &ALevelHandler_Blueprint_C__pf1694860710::execbpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0 },
			{ "Fade in/Out__FinishedFunc", &ALevelHandler_Blueprint_C__pf1694860710::execbpf__FadexinxOut__FinishedFunc__pfTE },
			{ "Fade in/Out__UpdateFunc", &ALevelHandler_Blueprint_C__pf1694860710::execbpf__FadexinxOut__UpdateFunc__pfTE },
			{ "MenuByWiidget", &ALevelHandler_Blueprint_C__pf1694860710::execbpf__MenuByWiidget__pf },
			{ "SpeechByWidget", &ALevelHandler_Blueprint_C__pf1694860710::execbpf__SpeechByWidget__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0_Statics
	{
		struct LevelHandler_Blueprint_C__pf1694860710_eventbpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(LevelHandler_Blueprint_C__pf1694860710_eventbpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_LevelHandler_Blueprint_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710, nullptr, "ExecuteUbergraph_LevelHandler_Blueprint_0", nullptr, nullptr, sizeof(LevelHandler_Blueprint_C__pf1694860710_eventbpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0_Parms), Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_LevelHandler_Blueprint_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__FadexinxOut__FinishedFunc__pfTE_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__FadexinxOut__FinishedFunc__pfTE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "Fade in/Out__FinishedFunc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__FadexinxOut__FinishedFunc__pfTE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710, nullptr, "Fade in/Out__FinishedFunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__FadexinxOut__FinishedFunc__pfTE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__FadexinxOut__FinishedFunc__pfTE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__FadexinxOut__FinishedFunc__pfTE()
	{
		UObject* Outer = Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Fade in/Out__FinishedFunc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__FadexinxOut__FinishedFunc__pfTE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__FadexinxOut__UpdateFunc__pfTE_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__FadexinxOut__UpdateFunc__pfTE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "Fade in/Out__UpdateFunc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__FadexinxOut__UpdateFunc__pfTE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710, nullptr, "Fade in/Out__UpdateFunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__FadexinxOut__UpdateFunc__pfTE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__FadexinxOut__UpdateFunc__pfTE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__FadexinxOut__UpdateFunc__pfTE()
	{
		UObject* Outer = Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Fade in/Out__UpdateFunc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__FadexinxOut__UpdateFunc__pfTE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__MenuByWiidget__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__MenuByWiidget__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "MenuByWiidget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__MenuByWiidget__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710, nullptr, "MenuByWiidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__MenuByWiidget__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__MenuByWiidget__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__MenuByWiidget__pf()
	{
		UObject* Outer = Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "MenuByWiidget" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__MenuByWiidget__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__SpeechByWidget__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__SpeechByWidget__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "SpeechByWidget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__SpeechByWidget__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710, nullptr, "SpeechByWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__SpeechByWidget__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__SpeechByWidget__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__SpeechByWidget__pf()
	{
		UObject* Outer = Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SpeechByWidget" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__SpeechByWidget__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_NoRegister()
	{
		return ALevelHandler_Blueprint_C__pf1694860710::StaticClass();
	}
	struct Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Fade_in_Out_Fade_799D995C4B0B12282E0A5E9FDA05100B__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Fade_in_Out_Fade_799D995C4B0B12282E0A5E9FDA05100B__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Fade_in_Out__Direction_799D995C4B0B12282E0A5E9FDA05100B__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__Fade_in_Out__Direction_799D995C4B0B12282E0A5E9FDA05100B__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FadexinxOut__pfTE_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__FadexinxOut__pfTE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MAT__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MAT__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LevelxName__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bpv__LevelxName__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LevelLoading__pf_MetaData[];
#endif
		static void NewProp_bpv__LevelLoading__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__LevelLoading__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Roll__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Pitch__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Yaw__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__ExecuteUbergraph_LevelHandler_Blueprint__pf_0, "ExecuteUbergraph_LevelHandler_Blueprint_0" }, // 3949338312
		{ &Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__FadexinxOut__FinishedFunc__pfTE, "Fade in/Out__FinishedFunc" }, // 3540091817
		{ &Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__FadexinxOut__UpdateFunc__pfTE, "Fade in/Out__UpdateFunc" }, // 2368023514
		{ &Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__MenuByWiidget__pf, "MenuByWiidget" }, // 2583212233
		{ &Z_Construct_UFunction_ALevelHandler_Blueprint_C__pf1694860710_bpf__SpeechByWidget__pf, "SpeechByWidget" }, // 3901043830
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelHandler_Blueprint__pf1694860710.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "LevelHandler_Blueprint_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Widgets/Speech_World/LevelHandler_Blueprint.LevelHandler_Blueprint_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelHandler_Blueprint_C__pf1694860710, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__Fade_in_Out_Fade_799D995C4B0B12282E0A5E9FDA05100B__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "Fade_in_Out_Fade_799D995C4B0B12282E0A5E9FDA05100B" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__Fade_in_Out_Fade_799D995C4B0B12282E0A5E9FDA05100B__pf = { "Fade_in_Out_Fade_799D995C4B0B12282E0A5E9FDA05100B", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelHandler_Blueprint_C__pf1694860710, bpv__Fade_in_Out_Fade_799D995C4B0B12282E0A5E9FDA05100B__pf), METADATA_PARAMS(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__Fade_in_Out_Fade_799D995C4B0B12282E0A5E9FDA05100B__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__Fade_in_Out_Fade_799D995C4B0B12282E0A5E9FDA05100B__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__Fade_in_Out__Direction_799D995C4B0B12282E0A5E9FDA05100B__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "Fade_in_Out__Direction_799D995C4B0B12282E0A5E9FDA05100B" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__Fade_in_Out__Direction_799D995C4B0B12282E0A5E9FDA05100B__pf = { "Fade_in_Out__Direction_799D995C4B0B12282E0A5E9FDA05100B", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelHandler_Blueprint_C__pf1694860710, bpv__Fade_in_Out__Direction_799D995C4B0B12282E0A5E9FDA05100B__pf), Z_Construct_UEnum_Engine_ETimelineDirection, METADATA_PARAMS(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__Fade_in_Out__Direction_799D995C4B0B12282E0A5E9FDA05100B__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__Fade_in_Out__Direction_799D995C4B0B12282E0A5E9FDA05100B__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__FadexinxOut__pfTE_MetaData[] = {
		{ "Category", "LevelHandler_Blueprint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "Fade in/Out" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__FadexinxOut__pfTE = { "Fade in/Out", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelHandler_Blueprint_C__pf1694860710, bpv__FadexinxOut__pfTE), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__FadexinxOut__pfTE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__FadexinxOut__pfTE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__MAT__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "MAT" },
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MAT" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__MAT__pf = { "MAT", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelHandler_Blueprint_C__pf1694860710, bpv__MAT__pf), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__MAT__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__MAT__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__LevelxName__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Level Name" },
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Level Name" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__LevelxName__pfT = { "Level Name", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelHandler_Blueprint_C__pf1694860710, bpv__LevelxName__pfT), METADATA_PARAMS(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__LevelxName__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__LevelxName__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__LevelLoading__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Level Loading" },
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "LevelLoading" },
	};
#endif
	void Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__LevelLoading__pf_SetBit(void* Obj)
	{
		((ALevelHandler_Blueprint_C__pf1694860710*)Obj)->bpv__LevelLoading__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__LevelLoading__pf = { "LevelLoading", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALevelHandler_Blueprint_C__pf1694860710), &Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__LevelLoading__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__LevelLoading__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__LevelLoading__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelHandler_Blueprint_C__pf1694860710, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelHandler_Blueprint_C__pf1694860710, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMotion_Controller_Pawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = { "K2Node_DynamicCast_AsMotion_Controller_Pawn", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelHandler_Blueprint_C__pf1694860710, b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf), Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ALevelHandler_Blueprint_C__pf1694860710*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALevelHandler_Blueprint_C__pf1694860710), &Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_GI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf = { "K2Node_DynamicCast_AsMenu_GI", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelHandler_Blueprint_C__pf1694860710, b0l__K2Node_DynamicCast_AsMenu_GI__pf), Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((ALevelHandler_Blueprint_C__pf1694860710*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALevelHandler_Blueprint_C__pf1694860710), &Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Roll" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf = { "CallFunc_BreakRotator_Roll", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelHandler_Blueprint_C__pf1694860710, b0l__CallFunc_BreakRotator_Roll__pf), METADATA_PARAMS(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf = { "CallFunc_BreakRotator_Pitch", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelHandler_Blueprint_C__pf1694860710, b0l__CallFunc_BreakRotator_Pitch__pf), METADATA_PARAMS(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Yaw" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf = { "CallFunc_BreakRotator_Yaw", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelHandler_Blueprint_C__pf1694860710, b0l__CallFunc_BreakRotator_Yaw__pf), METADATA_PARAMS(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelHandler_Blueprint__pf1694860710.h" },
		{ "OverrideNativeName", "CallFunc_CreateDynamicMaterialInstance_ReturnValue" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = { "CallFunc_CreateDynamicMaterialInstance_ReturnValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelHandler_Blueprint_C__pf1694860710, b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__Fade_in_Out_Fade_799D995C4B0B12282E0A5E9FDA05100B__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__Fade_in_Out__Direction_799D995C4B0B12282E0A5E9FDA05100B__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__FadexinxOut__pfTE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__MAT__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__LevelxName__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_bpv__LevelLoading__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::NewProp_b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelHandler_Blueprint_C__pf1694860710>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::ClassParams = {
		&ALevelHandler_Blueprint_C__pf1694860710::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Widgets/Speech_World/LevelHandler_Blueprint"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("LevelHandler_Blueprint_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ALevelHandler_Blueprint_C__pf1694860710, TEXT("LevelHandler_Blueprint_C"), 722312664);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ALevelHandler_Blueprint_C__pf1694860710>()
	{
		return ALevelHandler_Blueprint_C__pf1694860710::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelHandler_Blueprint_C__pf1694860710(Z_Construct_UClass_ALevelHandler_Blueprint_C__pf1694860710, &ALevelHandler_Blueprint_C__pf1694860710::StaticClass, TEXT("/Game/Stutter_Speak_Content/Widgets/Speech_World/LevelHandler_Blueprint"), TEXT("LevelHandler_Blueprint_C"), true, TEXT("/Game/Stutter_Speak_Content/Widgets/Speech_World/LevelHandler_Blueprint"), TEXT("/Game/Stutter_Speak_Content/Widgets/Speech_World/LevelHandler_Blueprint.LevelHandler_Blueprint_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelHandler_Blueprint_C__pf1694860710);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
