// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Podium_Blueprint__pf3730827578.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePodium_Blueprint__pf3730827578() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APodium_Blueprint_C__pf3730827578();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(APodium_Blueprint_C__pf3730827578::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APodium_Blueprint_C__pf3730827578::execbpf__RemovePodiumByLevelBlueprint__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__RemovePodiumByLevelBlueprint__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APodium_Blueprint_C__pf3730827578::execbpf__ExecuteUbergraph_Podium_Blueprint__pf_1)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_Podium_Blueprint__pf_1(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_APodium_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void APodium_Blueprint_C__pf3730827578::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_APodium_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void APodium_Blueprint_C__pf3730827578::StaticRegisterNativesAPodium_Blueprint_C__pf3730827578()
	{
		UClass* Class = APodium_Blueprint_C__pf3730827578::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_Podium_Blueprint_1", &APodium_Blueprint_C__pf3730827578::execbpf__ExecuteUbergraph_Podium_Blueprint__pf_1 },
			{ "ReceiveBeginPlay", &APodium_Blueprint_C__pf3730827578::execbpf__ReceiveBeginPlay__pf },
			{ "RemovePodiumByLevelBlueprint", &APodium_Blueprint_C__pf3730827578::execbpf__RemovePodiumByLevelBlueprint__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_Podium_Blueprint__pf_1_Statics
	{
		struct Podium_Blueprint_C__pf3730827578_eventbpf__ExecuteUbergraph_Podium_Blueprint__pf_1_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_Podium_Blueprint__pf_1_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Podium_Blueprint_C__pf3730827578_eventbpf__ExecuteUbergraph_Podium_Blueprint__pf_1_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_Podium_Blueprint__pf_1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_Podium_Blueprint__pf_1_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_Podium_Blueprint__pf_1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_Podium_Blueprint_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_Podium_Blueprint__pf_1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APodium_Blueprint_C__pf3730827578, nullptr, "ExecuteUbergraph_Podium_Blueprint_1", nullptr, nullptr, sizeof(Podium_Blueprint_C__pf3730827578_eventbpf__ExecuteUbergraph_Podium_Blueprint__pf_1_Parms), Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_Podium_Blueprint__pf_1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_Podium_Blueprint__pf_1_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_Podium_Blueprint__pf_1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_Podium_Blueprint__pf_1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_Podium_Blueprint__pf_1()
	{
		UObject* Outer = Z_Construct_UClass_APodium_Blueprint_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_Podium_Blueprint_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_Podium_Blueprint__pf_1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APodium_Blueprint_C__pf3730827578, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_APodium_Blueprint_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__RemovePodiumByLevelBlueprint__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__RemovePodiumByLevelBlueprint__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "RemovePodiumByLevelBlueprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__RemovePodiumByLevelBlueprint__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APodium_Blueprint_C__pf3730827578, nullptr, "RemovePodiumByLevelBlueprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__RemovePodiumByLevelBlueprint__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__RemovePodiumByLevelBlueprint__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__RemovePodiumByLevelBlueprint__pf()
	{
		UObject* Outer = Z_Construct_UClass_APodium_Blueprint_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "RemovePodiumByLevelBlueprint" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__RemovePodiumByLevelBlueprint__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_NoRegister()
	{
		return APodium_Blueprint_C__pf3730827578::StaticClass();
	}
	struct Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PodiumT__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PodiumT__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PodiumF__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PodiumF__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PodiumB__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PodiumB__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PodiumR__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PodiumR__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PodiumL__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PodiumL__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnxLocation__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__SpawnxLocation__pfT;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_X__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Y__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Z__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_X_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Y_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Z_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_Podium_Blueprint__pf_1, "ExecuteUbergraph_Podium_Blueprint_1" }, // 666204546
		{ &Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 64730654
		{ &Z_Construct_UFunction_APodium_Blueprint_C__pf3730827578_bpf__RemovePodiumByLevelBlueprint__pf, "RemovePodiumByLevelBlueprint" }, // 2034901690
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Podium_Blueprint__pf3730827578.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Podium_Blueprint_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Blueprints/Podium_Blueprint.Podium_Blueprint_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumT__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "PodiumT" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumT__pf = { "PodiumT", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APodium_Blueprint_C__pf3730827578, bpv__PodiumT__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumT__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumT__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumF__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "PodiumF" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumF__pf = { "PodiumF", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APodium_Blueprint_C__pf3730827578, bpv__PodiumF__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumF__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumF__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumB__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "PodiumB" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumB__pf = { "PodiumB", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APodium_Blueprint_C__pf3730827578, bpv__PodiumB__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumB__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumB__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumR__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "PodiumR" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumR__pf = { "PodiumR", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APodium_Blueprint_C__pf3730827578, bpv__PodiumR__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumR__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumR__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumL__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "PodiumL" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumL__pf = { "PodiumL", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APodium_Blueprint_C__pf3730827578, bpv__PodiumL__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumL__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumL__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APodium_Blueprint_C__pf3730827578, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__SpawnxLocation__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Spawn Location" },
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Spawn Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__SpawnxLocation__pfT = { "Spawn Location", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APodium_Blueprint_C__pf3730827578, bpv__SpawnxLocation__pfT), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__SpawnxLocation__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__SpawnxLocation__pfT_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APodium_Blueprint_C__pf3730827578, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APodium_Blueprint_C__pf3730827578, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf = { "CallFunc_BreakVector_X", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APodium_Blueprint_C__pf3730827578, b0l__CallFunc_BreakVector_X__pf), METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf = { "CallFunc_BreakVector_Y", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APodium_Blueprint_C__pf3730827578, b0l__CallFunc_BreakVector_Y__pf), METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf = { "CallFunc_BreakVector_Z", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APodium_Blueprint_C__pf3730827578, b0l__CallFunc_BreakVector_Z__pf), METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMotion_Controller_Pawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = { "K2Node_DynamicCast_AsMotion_Controller_Pawn", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APodium_Blueprint_C__pf3730827578, b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf), Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((APodium_Blueprint_C__pf3730827578*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APodium_Blueprint_C__pf3730827578), &Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf = { "CallFunc_BreakVector_X_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APodium_Blueprint_C__pf3730827578, b0l__CallFunc_BreakVector_X_1__pf), METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf = { "CallFunc_BreakVector_Y_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APodium_Blueprint_C__pf3730827578, b0l__CallFunc_BreakVector_Y_1__pf), METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf = { "CallFunc_BreakVector_Z_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APodium_Blueprint_C__pf3730827578, b0l__CallFunc_BreakVector_Z_1__pf), METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetActorLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf = { "CallFunc_K2_SetActorLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APodium_Blueprint_C__pf3730827578, b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Podium_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetWorldLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf = { "CallFunc_K2_SetWorldLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APodium_Blueprint_C__pf3730827578, b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumT__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumF__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumB__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumR__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__PodiumL__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_bpv__SpawnxLocation__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APodium_Blueprint_C__pf3730827578>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::ClassParams = {
		&APodium_Blueprint_C__pf3730827578::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APodium_Blueprint_C__pf3730827578()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Blueprints/Podium_Blueprint"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Podium_Blueprint_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APodium_Blueprint_C__pf3730827578_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(APodium_Blueprint_C__pf3730827578, TEXT("Podium_Blueprint_C"), 1383374264);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<APodium_Blueprint_C__pf3730827578>()
	{
		return APodium_Blueprint_C__pf3730827578::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APodium_Blueprint_C__pf3730827578(Z_Construct_UClass_APodium_Blueprint_C__pf3730827578, &APodium_Blueprint_C__pf3730827578::StaticClass, TEXT("/Game/Stutter_Speak_Content/Blueprints/Podium_Blueprint"), TEXT("Podium_Blueprint_C"), true, TEXT("/Game/Stutter_Speak_Content/Blueprints/Podium_Blueprint"), TEXT("/Game/Stutter_Speak_Content/Blueprints/Podium_Blueprint.Podium_Blueprint_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APodium_Blueprint_C__pf3730827578);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
