// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStutter_Timer__Empty_Object__Blueprint__pf1711902218() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABPSpeechWorld_C__pf2075166221_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USpeechPageW_C__pf1694860710_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMicrophone_MainMic_Blueprint_C__pf3730827578_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::execbpf__DurationxTracker__pfT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__DurationxTracker__pfT();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::execbpf__StartxTimer__pfT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__StartxTimer__pfT();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::execbpf__StopxTimer__pfT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__StopxTimer__pfT();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::execbpf__ClearxTimer__pfT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ClearxTimer__pfT();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::execbpf__GetxTotalxStutterxTime__pfTTT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__GetxTotalxStutterxTime__pfTTT();
		P_NATIVE_END;
	}
	void AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::StaticRegisterNativesAStutter_Timer__Empty_Object__Blueprint_C__pf1711902218()
	{
		UClass* Class = AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear Timer", &AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::execbpf__ClearxTimer__pfT },
			{ "Duration Tracker", &AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::execbpf__DurationxTracker__pfT },
			{ "Get Total Stutter Time", &AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::execbpf__GetxTotalxStutterxTime__pfTTT },
			{ "Start Timer", &AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::execbpf__StartxTimer__pfT },
			{ "Stop Timer", &AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::execbpf__StopxTimer__pfT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__ClearxTimer__pfT_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__ClearxTimer__pfT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "Clear Timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__ClearxTimer__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, nullptr, "Clear Timer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__ClearxTimer__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__ClearxTimer__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__ClearxTimer__pfT()
	{
		UObject* Outer = Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Clear Timer" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__ClearxTimer__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__DurationxTracker__pfT_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__DurationxTracker__pfT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "Duration Tracker" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__DurationxTracker__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, nullptr, "Duration Tracker", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__DurationxTracker__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__DurationxTracker__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__DurationxTracker__pfT()
	{
		UObject* Outer = Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Duration Tracker" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__DurationxTracker__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__GetxTotalxStutterxTime__pfTTT_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__GetxTotalxStutterxTime__pfTTT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "Get Total Stutter Time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__GetxTotalxStutterxTime__pfTTT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, nullptr, "Get Total Stutter Time", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__GetxTotalxStutterxTime__pfTTT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__GetxTotalxStutterxTime__pfTTT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__GetxTotalxStutterxTime__pfTTT()
	{
		UObject* Outer = Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Get Total Stutter Time" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__GetxTotalxStutterxTime__pfTTT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__StartxTimer__pfT_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__StartxTimer__pfT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "Start Timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__StartxTimer__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, nullptr, "Start Timer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__StartxTimer__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__StartxTimer__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__StartxTimer__pfT()
	{
		UObject* Outer = Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Start Timer" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__StartxTimer__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__StopxTimer__pfT_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__StopxTimer__pfT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "Stop Timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__StopxTimer__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, nullptr, "Stop Timer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__StopxTimer__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__StopxTimer__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__StopxTimer__pfT()
	{
		UObject* Outer = Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Stop Timer" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__StopxTimer__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_NoRegister()
	{
		return AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::StaticClass();
	}
	struct Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Timer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Timer__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CurrentxStutter__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__CurrentxStutter__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CurrentxPagexNumber__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__CurrentxPagexNumber__pfTT;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AllxStuttersxinxSpeech__pfTTT_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AllxStuttersxinxSpeech__pfTTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__AllxStuttersxinxSpeech__pfTTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GetxStutterxTimexTemp__pfTTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__GetxStutterxTimexTemp__pfTTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TotalxLengthxofxStuttering__pfTTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__TotalxLengthxofxStuttering__pfTTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TimerOn__pf_MetaData[];
#endif
		static void NewProp_bpv__TimerOn__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__TimerOn__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBPSpeech_World__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBPSpeech_World__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsSpeech_Page_W__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsSpeech_Page_W__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_Stutter_Struct__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_Stutter_Struct__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_2__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__ClearxTimer__pfT, "Clear Timer" }, // 1982169101
		{ &Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__DurationxTracker__pfT, "Duration Tracker" }, // 1091990667
		{ &Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__GetxTotalxStutterxTime__pfTTT, "Get Total Stutter Time" }, // 2611761163
		{ &Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__StartxTimer__pfT, "Start Timer" }, // 2972350535
		{ &Z_Construct_UFunction_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_bpf__StopxTimer__pfT, "Stop Timer" }, // 1430145342
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Stutter_Timer__Empty_Object__Blueprint_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Managers/Stutter_Timer__Empty_Object__Blueprint.Stutter_Timer__Empty_Object__Blueprint_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__Timer__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Timer" },
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Timer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__Timer__pf = { "Timer", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, bpv__Timer__pf), METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__Timer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__Timer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__CurrentxStutter__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Current Stutter" },
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Current Stutter" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__CurrentxStutter__pfT = { "Current Stutter", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, bpv__CurrentxStutter__pfT), Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__CurrentxStutter__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__CurrentxStutter__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__CurrentxPagexNumber__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Current Page Number" },
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Current Page Number" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__CurrentxPagexNumber__pfTT = { "Current Page Number", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, bpv__CurrentxPagexNumber__pfTT), METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__CurrentxPagexNumber__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__CurrentxPagexNumber__pfTT_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__AllxStuttersxinxSpeech__pfTTT_Inner = { "bpv__AllxStuttersxinxSpeech__pfTTT", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__AllxStuttersxinxSpeech__pfTTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "All Stutters In Speech" },
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "All Stutters in Speech" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__AllxStuttersxinxSpeech__pfTTT = { "All Stutters in Speech", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, bpv__AllxStuttersxinxSpeech__pfTTT), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__AllxStuttersxinxSpeech__pfTTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__AllxStuttersxinxSpeech__pfTTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__GetxStutterxTimexTemp__pfTTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Get Stutter Time Temp" },
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Get Stutter Time Temp" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__GetxStutterxTimexTemp__pfTTT = { "Get Stutter Time Temp", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, bpv__GetxStutterxTimexTemp__pfTTT), Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__GetxStutterxTimexTemp__pfTTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__GetxStutterxTimexTemp__pfTTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__TotalxLengthxofxStuttering__pfTTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Total Length Of Stuttering" },
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Total Length of Stuttering" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__TotalxLengthxofxStuttering__pfTTT = { "Total Length of Stuttering", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, bpv__TotalxLengthxofxStuttering__pfTTT), METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__TotalxLengthxofxStuttering__pfTTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__TotalxLengthxofxStuttering__pfTTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__TimerOn__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Timer On" },
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "TimerOn" },
	};
#endif
	void Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__TimerOn__pf_SetBit(void* Obj)
	{
		((AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218*)Obj)->bpv__TimerOn__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__TimerOn__pf = { "TimerOn", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218), &Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__TimerOn__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__TimerOn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__TimerOn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "Temp_int_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__Temp_int_Variable__pf = { "Temp_int_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, b0l__Temp_int_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABPSpeechWorld_C__pf2075166221_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_ABPSpeechWorld_C__pf2075166221_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsBPSpeech_World__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBPSpeech_World" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsBPSpeech_World__pf = { "K2Node_DynamicCast_AsBPSpeech_World", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, b0l__K2Node_DynamicCast_AsBPSpeech_World__pf), Z_Construct_UClass_ABPSpeechWorld_C__pf2075166221_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsBPSpeech_World__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsBPSpeech_World__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218), &Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsSpeech_Page_W__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsSpeech_Page_W" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsSpeech_Page_W__pf = { "K2Node_DynamicCast_AsSpeech_Page_W", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, b0l__K2Node_DynamicCast_AsSpeech_Page_W__pf), Z_Construct_UClass_USpeechPageW_C__pf1694860710_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsSpeech_Page_W__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsSpeech_Page_W__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218), &Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_Stutter_Struct__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_Stutter_Struct" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_Stutter_Struct__pf = { "K2Node_MakeStruct_Stutter_Struct", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, b0l__K2Node_MakeStruct_Stutter_Struct__pf), Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_Stutter_Struct__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_Stutter_Struct__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf = { "CallFunc_Array_Get_Item_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, b0l__CallFunc_Array_Get_Item_1__pf), Z_Construct_UScriptStruct_FStutter_Struct__pf3774553483, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_GI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf = { "K2Node_DynamicCast_AsMenu_GI", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, b0l__K2Node_DynamicCast_AsMenu_GI__pf), Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_2" },
	};
#endif
	void Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj)
	{
		((AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218*)Obj)->b0l__K2Node_DynamicCast_bSuccess_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf = { "K2Node_DynamicCast_bSuccess_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218), &Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_GI_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf = { "K2Node_DynamicCast_AsMenu_GI_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, b0l__K2Node_DynamicCast_AsMenu_GI_1__pf), Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_3" },
	};
#endif
	void Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit(void* Obj)
	{
		((AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218*)Obj)->b0l__K2Node_DynamicCast_bSuccess_3__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf = { "K2Node_DynamicCast_bSuccess_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218), &Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMicrophone_MainMic_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors_1" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf = { "CallFunc_GetAllActorsOfClass_OutActors_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf = { "CallFunc_Array_Get_Item_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, b0l__CallFunc_Array_Get_Item_2__pf), Z_Construct_UClass_AMicrophone_MainMic_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMicrophone_MainMic_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors_2" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf = { "CallFunc_GetAllActorsOfClass_OutActors_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint__pf = { "K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, b0l__K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint__pf), Z_Construct_UClass_AMicrophone_MainMic_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_4" },
	};
#endif
	void Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_SetBit(void* Obj)
	{
		((AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218*)Obj)->b0l__K2Node_DynamicCast_bSuccess_4__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf = { "K2Node_DynamicCast_bSuccess_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218), &Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf = { "CallFunc_Array_Get_Item_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, b0l__CallFunc_Array_Get_Item_3__pf), Z_Construct_UClass_AMicrophone_MainMic_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint_1__pf = { "K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, b0l__K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint_1__pf), Z_Construct_UClass_AMicrophone_MainMic_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Stutter_Timer__Empty_Object__Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_5" },
	};
#endif
	void Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_SetBit(void* Obj)
	{
		((AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218*)Obj)->b0l__K2Node_DynamicCast_bSuccess_5__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf = { "K2Node_DynamicCast_bSuccess_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218), &Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__Timer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__CurrentxStutter__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__CurrentxPagexNumber__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__AllxStuttersxinxSpeech__pfTTT_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__AllxStuttersxinxSpeech__pfTTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__GetxStutterxTimexTemp__pfTTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__TotalxLengthxofxStuttering__pfTTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_bpv__TimerOn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__Temp_int_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsBPSpeech_World__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsSpeech_Page_W__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_Stutter_Struct__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMicrophone_Main_Mic_Blueprint_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::ClassParams = {
		&AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Managers/Stutter_Timer__Empty_Object__Blueprint"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Stutter_Timer__Empty_Object__Blueprint_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, TEXT("Stutter_Timer__Empty_Object__Blueprint_C"), 2671222995);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218>()
	{
		return AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218(Z_Construct_UClass_AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218, &AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218::StaticClass, TEXT("/Game/Stutter_Speak_Content/Managers/Stutter_Timer__Empty_Object__Blueprint"), TEXT("Stutter_Timer__Empty_Object__Blueprint_C"), true, TEXT("/Game/Stutter_Speak_Content/Managers/Stutter_Timer__Empty_Object__Blueprint"), TEXT("/Game/Stutter_Speak_Content/Managers/Stutter_Timer__Empty_Object__Blueprint.Stutter_Timer__Empty_Object__Blueprint_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStutter_Timer__Empty_Object__Blueprint_C__pf1711902218);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
