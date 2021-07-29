// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Recording_Test__pf1711902218.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecording_Test__pf1711902218() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ARecording_Test_C__pf1711902218_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ARecording_Test_C__pf1711902218();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFormatArgumentData();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APlayback_Actor_C__pf3621867267_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARecording_Test_C__pf1711902218::execbpf__CalledByButtonStart__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__CalledByButtonStart__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARecording_Test_C__pf1711902218::execbpf__CalledByButtonStop__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__CalledByButtonStop__pf();
		P_NATIVE_END;
	}
	void ARecording_Test_C__pf1711902218::StaticRegisterNativesARecording_Test_C__pf1711902218()
	{
		UClass* Class = ARecording_Test_C__pf1711902218::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalledByButtonStart", &ARecording_Test_C__pf1711902218::execbpf__CalledByButtonStart__pf },
			{ "CalledByButtonStop", &ARecording_Test_C__pf1711902218::execbpf__CalledByButtonStop__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARecording_Test_C__pf1711902218_bpf__CalledByButtonStart__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecording_Test_C__pf1711902218_bpf__CalledByButtonStart__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "OverrideNativeName", "CalledByButtonStart" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecording_Test_C__pf1711902218_bpf__CalledByButtonStart__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecording_Test_C__pf1711902218, nullptr, "CalledByButtonStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecording_Test_C__pf1711902218_bpf__CalledByButtonStart__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecording_Test_C__pf1711902218_bpf__CalledByButtonStart__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecording_Test_C__pf1711902218_bpf__CalledByButtonStart__pf()
	{
		UObject* Outer = Z_Construct_UClass_ARecording_Test_C__pf1711902218();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "CalledByButtonStart" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARecording_Test_C__pf1711902218_bpf__CalledByButtonStart__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARecording_Test_C__pf1711902218_bpf__CalledByButtonStop__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARecording_Test_C__pf1711902218_bpf__CalledByButtonStop__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "OverrideNativeName", "CalledByButtonStop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARecording_Test_C__pf1711902218_bpf__CalledByButtonStop__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARecording_Test_C__pf1711902218, nullptr, "CalledByButtonStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARecording_Test_C__pf1711902218_bpf__CalledByButtonStop__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARecording_Test_C__pf1711902218_bpf__CalledByButtonStop__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARecording_Test_C__pf1711902218_bpf__CalledByButtonStop__pf()
	{
		UObject* Outer = Z_Construct_UClass_ARecording_Test_C__pf1711902218();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "CalledByButtonStop" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARecording_Test_C__pf1711902218_bpf__CalledByButtonStop__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARecording_Test_C__pf1711902218_NoRegister()
	{
		return ARecording_Test_C__pf1711902218::StaticClass();
	}
	struct Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AudioCapture__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__AudioCapture__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SubDirectory__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__SubDirectory__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Submix__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Submix__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__12xHourxHour__pfGT_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__12xHourxHour__pfGT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TempRecording__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TempRecording__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__filePathway__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__filePathway__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Path__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__Path__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_FormatArgumentData__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_FormatArgumentData__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_5__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeArray_Array__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__K2Node_MakeArray_Array__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsPlayback_Actor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsPlayback_Actor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARecording_Test_C__pf1711902218_bpf__CalledByButtonStart__pf, "CalledByButtonStart" }, // 1267956388
		{ &Z_Construct_UFunction_ARecording_Test_C__pf1711902218_bpf__CalledByButtonStop__pf, "CalledByButtonStop" }, // 620744898
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Recording_Test__pf1711902218.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Recording_Test_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Managers/Recording_Test.Recording_Test_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__AudioCapture__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "OverrideNativeName", "AudioCapture" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__AudioCapture__pf = { "AudioCapture", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecording_Test_C__pf1711902218, bpv__AudioCapture__pf), Z_Construct_UClass_UAudioCaptureComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__AudioCapture__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__AudioCapture__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecording_Test_C__pf1711902218, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__SubDirectory__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Sub Directory" },
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SubDirectory" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__SubDirectory__pf = { "SubDirectory", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecording_Test_C__pf1711902218, bpv__SubDirectory__pf), METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__SubDirectory__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__SubDirectory__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__Submix__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Submix" },
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Submix" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__Submix__pf = { "Submix", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecording_Test_C__pf1711902218, bpv__Submix__pf), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__Submix__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__Submix__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__12xHourxHour__pfGT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "12-Hour Hour" },
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "12-Hour Hour" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__12xHourxHour__pfGT = { "12-Hour Hour", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecording_Test_C__pf1711902218, bpv__12xHourxHour__pfGT), METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__12xHourxHour__pfGT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__12xHourxHour__pfGT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__TempRecording__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Temp Recording" },
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "TempRecording" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__TempRecording__pf = { "TempRecording", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecording_Test_C__pf1711902218, bpv__TempRecording__pf), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__TempRecording__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__TempRecording__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__filePathway__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "File Pathway" },
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "filePathway" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__filePathway__pf = { "filePathway", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecording_Test_C__pf1711902218, bpv__filePathway__pf), METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__filePathway__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__filePathway__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__Path__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Path" },
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Path" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__Path__pf = { "Path", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecording_Test_C__pf1711902218, bpv__Path__pf), METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__Path__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__Path__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_FormatArgumentData" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData__pf = { "K2Node_MakeStruct_FormatArgumentData", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecording_Test_C__pf1711902218, b0l__K2Node_MakeStruct_FormatArgumentData__pf), Z_Construct_UScriptStruct_FFormatArgumentData, METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_FormatArgumentData_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_1__pf = { "K2Node_MakeStruct_FormatArgumentData_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecording_Test_C__pf1711902218, b0l__K2Node_MakeStruct_FormatArgumentData_1__pf), Z_Construct_UScriptStruct_FFormatArgumentData, METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_FormatArgumentData_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_2__pf = { "K2Node_MakeStruct_FormatArgumentData_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecording_Test_C__pf1711902218, b0l__K2Node_MakeStruct_FormatArgumentData_2__pf), Z_Construct_UScriptStruct_FFormatArgumentData, METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_FormatArgumentData_3" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_3__pf = { "K2Node_MakeStruct_FormatArgumentData_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecording_Test_C__pf1711902218, b0l__K2Node_MakeStruct_FormatArgumentData_3__pf), Z_Construct_UScriptStruct_FFormatArgumentData, METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_FormatArgumentData_4" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_4__pf = { "K2Node_MakeStruct_FormatArgumentData_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecording_Test_C__pf1711902218, b0l__K2Node_MakeStruct_FormatArgumentData_4__pf), Z_Construct_UScriptStruct_FFormatArgumentData, METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_FormatArgumentData_5" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_5__pf = { "K2Node_MakeStruct_FormatArgumentData_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecording_Test_C__pf1711902218, b0l__K2Node_MakeStruct_FormatArgumentData_5__pf), Z_Construct_UScriptStruct_FFormatArgumentData, METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_5__pf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_Inner = { "b0l__K2Node_MakeArray_Array__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFormatArgumentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_MakeArray_Array" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf = { "K2Node_MakeArray_Array", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecording_Test_C__pf1711902218, b0l__K2Node_MakeArray_Array__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayback_Actor_C__pf3621867267_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecording_Test_C__pf1711902218, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecording_Test_C__pf1711902218, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_APlayback_Actor_C__pf3621867267_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayback_Actor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsPlayback_Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayback_Actor__pf = { "K2Node_DynamicCast_AsPlayback_Actor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARecording_Test_C__pf1711902218, b0l__K2Node_DynamicCast_AsPlayback_Actor__pf), Z_Construct_UClass_APlayback_Actor_C__pf3621867267_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayback_Actor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayback_Actor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Recording_Test__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ARecording_Test_C__pf1711902218*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARecording_Test_C__pf1711902218), &Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__AudioCapture__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__SubDirectory__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__Submix__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__12xHourxHour__pfGT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__TempRecording__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__filePathway__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_bpv__Path__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeStruct_FormatArgumentData_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsPlayback_Actor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARecording_Test_C__pf1711902218>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::ClassParams = {
		&ARecording_Test_C__pf1711902218::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARecording_Test_C__pf1711902218()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Managers/Recording_Test"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Recording_Test_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARecording_Test_C__pf1711902218_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ARecording_Test_C__pf1711902218, TEXT("Recording_Test_C"), 2615404590);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ARecording_Test_C__pf1711902218>()
	{
		return ARecording_Test_C__pf1711902218::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARecording_Test_C__pf1711902218(Z_Construct_UClass_ARecording_Test_C__pf1711902218, &ARecording_Test_C__pf1711902218::StaticClass, TEXT("/Game/Stutter_Speak_Content/Managers/Recording_Test"), TEXT("Recording_Test_C"), true, TEXT("/Game/Stutter_Speak_Content/Managers/Recording_Test"), TEXT("/Game/Stutter_Speak_Content/Managers/Recording_Test.Recording_Test_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARecording_Test_C__pf1711902218);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
