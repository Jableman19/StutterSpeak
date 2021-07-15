// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Active_Choice_Ring__pf3041421614.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActive_Choice_Ring__pf3041421614() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMoveComponentAction();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(AActive_Choice_Ring_C__pf3041421614::execbpf__LowerButton__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__LowerButton__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActive_Choice_Ring_C__pf3041421614::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActive_Choice_Ring_C__pf3041421614::execbpf__GetLocationByLevelBlueprint__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__GetLocationByLevelBlueprint__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActive_Choice_Ring_C__pf3041421614::execbpf__ResetLocationByConfirm__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ResetLocationByConfirm__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActive_Choice_Ring_C__pf3041421614::execbpf__ExecuteUbergraph_Active_Choice_Ring__pf_3)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_Active_Choice_Ring__pf_3(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_AActive_Choice_Ring_C__pf3041421614_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AActive_Choice_Ring_C__pf3041421614::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		Active_Choice_Ring_C__pf3041421614_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AActive_Choice_Ring_C__pf3041421614_bpf__ReceiveTick__pf),&Parms);
	}
	void AActive_Choice_Ring_C__pf3041421614::StaticRegisterNativesAActive_Choice_Ring_C__pf3041421614()
	{
		UClass* Class = AActive_Choice_Ring_C__pf3041421614::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_Active_Choice_Ring_3", &AActive_Choice_Ring_C__pf3041421614::execbpf__ExecuteUbergraph_Active_Choice_Ring__pf_3 },
			{ "GetLocationByLevelBlueprint", &AActive_Choice_Ring_C__pf3041421614::execbpf__GetLocationByLevelBlueprint__pf },
			{ "LowerButton", &AActive_Choice_Ring_C__pf3041421614::execbpf__LowerButton__pf },
			{ "ReceiveTick", &AActive_Choice_Ring_C__pf3041421614::execbpf__ReceiveTick__pf },
			{ "ResetLocationByConfirm", &AActive_Choice_Ring_C__pf3041421614::execbpf__ResetLocationByConfirm__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ExecuteUbergraph_Active_Choice_Ring__pf_3_Statics
	{
		struct Active_Choice_Ring_C__pf3041421614_eventbpf__ExecuteUbergraph_Active_Choice_Ring__pf_3_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ExecuteUbergraph_Active_Choice_Ring__pf_3_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Active_Choice_Ring_C__pf3041421614_eventbpf__ExecuteUbergraph_Active_Choice_Ring__pf_3_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ExecuteUbergraph_Active_Choice_Ring__pf_3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ExecuteUbergraph_Active_Choice_Ring__pf_3_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ExecuteUbergraph_Active_Choice_Ring__pf_3_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Active_Choice_Ring__pf3041421614.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_Active_Choice_Ring_3" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ExecuteUbergraph_Active_Choice_Ring__pf_3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614, nullptr, "ExecuteUbergraph_Active_Choice_Ring_3", nullptr, nullptr, sizeof(Active_Choice_Ring_C__pf3041421614_eventbpf__ExecuteUbergraph_Active_Choice_Ring__pf_3_Parms), Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ExecuteUbergraph_Active_Choice_Ring__pf_3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ExecuteUbergraph_Active_Choice_Ring__pf_3_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ExecuteUbergraph_Active_Choice_Ring__pf_3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ExecuteUbergraph_Active_Choice_Ring__pf_3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ExecuteUbergraph_Active_Choice_Ring__pf_3()
	{
		UObject* Outer = Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_Active_Choice_Ring_3" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ExecuteUbergraph_Active_Choice_Ring__pf_3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__GetLocationByLevelBlueprint__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__GetLocationByLevelBlueprint__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Active_Choice_Ring__pf3041421614.h" },
		{ "OverrideNativeName", "GetLocationByLevelBlueprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__GetLocationByLevelBlueprint__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614, nullptr, "GetLocationByLevelBlueprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__GetLocationByLevelBlueprint__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__GetLocationByLevelBlueprint__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__GetLocationByLevelBlueprint__pf()
	{
		UObject* Outer = Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GetLocationByLevelBlueprint" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__GetLocationByLevelBlueprint__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__LowerButton__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__LowerButton__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Active_Choice_Ring__pf3041421614.h" },
		{ "OverrideNativeName", "LowerButton" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__LowerButton__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614, nullptr, "LowerButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__LowerButton__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__LowerButton__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__LowerButton__pf()
	{
		UObject* Outer = Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "LowerButton" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__LowerButton__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Active_Choice_Ring_C__pf3041421614_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/Active_Choice_Ring__pf3041421614.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(Active_Choice_Ring_C__pf3041421614_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ResetLocationByConfirm__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ResetLocationByConfirm__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Active_Choice_Ring__pf3041421614.h" },
		{ "OverrideNativeName", "ResetLocationByConfirm" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ResetLocationByConfirm__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614, nullptr, "ResetLocationByConfirm", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ResetLocationByConfirm__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ResetLocationByConfirm__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ResetLocationByConfirm__pf()
	{
		UObject* Outer = Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ResetLocationByConfirm" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ResetLocationByConfirm__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_NoRegister()
	{
		return AActive_Choice_Ring_C__pf3041421614::StaticClass();
	}
	struct Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ActivexRing__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ActivexRing__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Needed__pf_MetaData[];
#endif
		static void NewProp_bpv__Needed__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Needed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StartingxLocation__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__StartingxLocation__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StartingxRotation__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__StartingxRotation__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsConfirm_Rating_Button__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsConfirm_Rating_Button__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ExecuteUbergraph_Active_Choice_Ring__pf_3, "ExecuteUbergraph_Active_Choice_Ring_3" }, // 2892588057
		{ &Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__GetLocationByLevelBlueprint__pf, "GetLocationByLevelBlueprint" }, // 1073022775
		{ &Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__LowerButton__pf, "LowerButton" }, // 2084331907
		{ &Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ReceiveTick__pf, "ReceiveTick" }, // 3743404114
		{ &Z_Construct_UFunction_AActive_Choice_Ring_C__pf3041421614_bpf__ResetLocationByConfirm__pf, "ResetLocationByConfirm" }, // 1880897213
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Active_Choice_Ring__pf3041421614.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Active_Choice_Ring__pf3041421614.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Active_Choice_Ring_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Blueprints/Rating_Buttons/Active_Choice_Ring.Active_Choice_Ring_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__ActivexRing__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Active_Choice_Ring__pf3041421614.h" },
		{ "OverrideNativeName", "Active Ring" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__ActivexRing__pfT = { "Active Ring", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActive_Choice_Ring_C__pf3041421614, bpv__ActivexRing__pfT), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__ActivexRing__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__ActivexRing__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Active_Choice_Ring__pf3041421614.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActive_Choice_Ring_C__pf3041421614, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__Needed__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Needed" },
		{ "ModuleRelativePath", "Public/Active_Choice_Ring__pf3041421614.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Needed" },
	};
#endif
	void Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__Needed__pf_SetBit(void* Obj)
	{
		((AActive_Choice_Ring_C__pf3041421614*)Obj)->bpv__Needed__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__Needed__pf = { "Needed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AActive_Choice_Ring_C__pf3041421614), &Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__Needed__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__Needed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__Needed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__StartingxLocation__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Starting Location" },
		{ "ModuleRelativePath", "Public/Active_Choice_Ring__pf3041421614.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Starting Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__StartingxLocation__pfT = { "Starting Location", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActive_Choice_Ring_C__pf3041421614, bpv__StartingxLocation__pfT), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__StartingxLocation__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__StartingxLocation__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__StartingxRotation__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Starting Rotation" },
		{ "ModuleRelativePath", "Public/Active_Choice_Ring__pf3041421614.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Starting Rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__StartingxRotation__pfT = { "Starting Rotation", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActive_Choice_Ring_C__pf3041421614, bpv__StartingxRotation__pfT), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__StartingxRotation__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__StartingxRotation__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__Temp_byte_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Active_Choice_Ring__pf3041421614.h" },
		{ "OverrideNativeName", "Temp_byte_Variable" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__Temp_byte_Variable__pf = { "Temp_byte_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActive_Choice_Ring_C__pf3041421614, b0l__Temp_byte_Variable__pf), Z_Construct_UEnum_Engine_EMoveComponentAction, METADATA_PARAMS(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__Temp_byte_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__Temp_byte_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Active_Choice_Ring__pf3041421614.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActive_Choice_Ring_C__pf3041421614, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Active_Choice_Ring__pf3041421614.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActive_Choice_Ring_C__pf3041421614, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Active_Choice_Ring__pf3041421614.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActive_Choice_Ring_C__pf3041421614, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsConfirm_Rating_Button__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Active_Choice_Ring__pf3041421614.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsConfirm_Rating_Button" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsConfirm_Rating_Button__pf = { "K2Node_DynamicCast_AsConfirm_Rating_Button", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActive_Choice_Ring_C__pf3041421614, b0l__K2Node_DynamicCast_AsConfirm_Rating_Button__pf), Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsConfirm_Rating_Button__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsConfirm_Rating_Button__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Active_Choice_Ring__pf3041421614.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AActive_Choice_Ring_C__pf3041421614*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AActive_Choice_Ring_C__pf3041421614), &Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Active_Choice_Ring__pf3041421614.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf = { "CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActive_Choice_Ring_C__pf3041421614, b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__ActivexRing__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__Needed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__StartingxLocation__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_bpv__StartingxRotation__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__Temp_byte_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsConfirm_Rating_Button__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActive_Choice_Ring_C__pf3041421614>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::ClassParams = {
		&AActive_Choice_Ring_C__pf3041421614::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Blueprints/Rating_Buttons/Active_Choice_Ring"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Active_Choice_Ring_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AActive_Choice_Ring_C__pf3041421614, TEXT("Active_Choice_Ring_C"), 3714238965);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AActive_Choice_Ring_C__pf3041421614>()
	{
		return AActive_Choice_Ring_C__pf3041421614::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActive_Choice_Ring_C__pf3041421614(Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614, &AActive_Choice_Ring_C__pf3041421614::StaticClass, TEXT("/Game/Stutter_Speak_Content/Blueprints/Rating_Buttons/Active_Choice_Ring"), TEXT("Active_Choice_Ring_C"), true, TEXT("/Game/Stutter_Speak_Content/Blueprints/Rating_Buttons/Active_Choice_Ring"), TEXT("/Game/Stutter_Speak_Content/Blueprints/Rating_Buttons/Active_Choice_Ring.Active_Choice_Ring_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActive_Choice_Ring_C__pf3041421614);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
