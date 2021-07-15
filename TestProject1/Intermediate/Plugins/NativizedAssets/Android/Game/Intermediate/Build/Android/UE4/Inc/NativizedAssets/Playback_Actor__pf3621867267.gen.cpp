// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Playback_Actor__pf3621867267.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayback_Actor__pf3621867267() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APlayback_Actor_C__pf3621867267_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APlayback_Actor_C__pf3621867267();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ARecording_Test_C__pf1711902218_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayback_Actor_C__pf3621867267::execbpf__Begin__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Begin__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayback_Actor_C__pf3621867267::execbpf__Pause__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Pause__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayback_Actor_C__pf3621867267::execbpf__Play__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Play__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayback_Actor_C__pf3621867267::execbpf__RecordOver__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__RecordOver__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayback_Actor_C__pf3621867267::execbpf__Seek__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Seek__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayback_Actor_C__pf3621867267::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayback_Actor_C__pf3621867267::execbpf__Close__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Close__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayback_Actor_C__pf3621867267::execbpf__ExecuteUbergraph_Playback_Actor__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_Playback_Actor__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_APlayback_Actor_C__pf3621867267_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void APlayback_Actor_C__pf3621867267::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		Playback_Actor_C__pf3621867267_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_APlayback_Actor_C__pf3621867267_bpf__ReceiveTick__pf),&Parms);
	}
	void APlayback_Actor_C__pf3621867267::StaticRegisterNativesAPlayback_Actor_C__pf3621867267()
	{
		UClass* Class = APlayback_Actor_C__pf3621867267::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Begin", &APlayback_Actor_C__pf3621867267::execbpf__Begin__pf },
			{ "Close", &APlayback_Actor_C__pf3621867267::execbpf__Close__pf },
			{ "ExecuteUbergraph_Playback_Actor_0", &APlayback_Actor_C__pf3621867267::execbpf__ExecuteUbergraph_Playback_Actor__pf_0 },
			{ "Pause", &APlayback_Actor_C__pf3621867267::execbpf__Pause__pf },
			{ "Play", &APlayback_Actor_C__pf3621867267::execbpf__Play__pf },
			{ "ReceiveTick", &APlayback_Actor_C__pf3621867267::execbpf__ReceiveTick__pf },
			{ "RecordOver", &APlayback_Actor_C__pf3621867267::execbpf__RecordOver__pf },
			{ "Seek", &APlayback_Actor_C__pf3621867267::execbpf__Seek__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Begin__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Begin__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "OverrideNativeName", "Begin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Begin__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayback_Actor_C__pf3621867267, nullptr, "Begin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Begin__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Begin__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Begin__pf()
	{
		UObject* Outer = Z_Construct_UClass_APlayback_Actor_C__pf3621867267();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Begin" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Begin__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Close__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Close__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "OverrideNativeName", "Close" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Close__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayback_Actor_C__pf3621867267, nullptr, "Close", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Close__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Close__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Close__pf()
	{
		UObject* Outer = Z_Construct_UClass_APlayback_Actor_C__pf3621867267();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Close" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Close__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ExecuteUbergraph_Playback_Actor__pf_0_Statics
	{
		struct Playback_Actor_C__pf3621867267_eventbpf__ExecuteUbergraph_Playback_Actor__pf_0_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ExecuteUbergraph_Playback_Actor__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Playback_Actor_C__pf3621867267_eventbpf__ExecuteUbergraph_Playback_Actor__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ExecuteUbergraph_Playback_Actor__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ExecuteUbergraph_Playback_Actor__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ExecuteUbergraph_Playback_Actor__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_Playback_Actor_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ExecuteUbergraph_Playback_Actor__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayback_Actor_C__pf3621867267, nullptr, "ExecuteUbergraph_Playback_Actor_0", nullptr, nullptr, sizeof(Playback_Actor_C__pf3621867267_eventbpf__ExecuteUbergraph_Playback_Actor__pf_0_Parms), Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ExecuteUbergraph_Playback_Actor__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ExecuteUbergraph_Playback_Actor__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ExecuteUbergraph_Playback_Actor__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ExecuteUbergraph_Playback_Actor__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ExecuteUbergraph_Playback_Actor__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_APlayback_Actor_C__pf3621867267();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_Playback_Actor_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ExecuteUbergraph_Playback_Actor__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Pause__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Pause__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "OverrideNativeName", "Pause" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Pause__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayback_Actor_C__pf3621867267, nullptr, "Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Pause__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Pause__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Pause__pf()
	{
		UObject* Outer = Z_Construct_UClass_APlayback_Actor_C__pf3621867267();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Pause" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Pause__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Play__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Play__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "OverrideNativeName", "Play" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Play__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayback_Actor_C__pf3621867267, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Play__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Play__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Play__pf()
	{
		UObject* Outer = Z_Construct_UClass_APlayback_Actor_C__pf3621867267();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Play" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Play__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Playback_Actor_C__pf3621867267_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayback_Actor_C__pf3621867267, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(Playback_Actor_C__pf3621867267_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_APlayback_Actor_C__pf3621867267();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__RecordOver__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__RecordOver__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "OverrideNativeName", "RecordOver" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__RecordOver__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayback_Actor_C__pf3621867267, nullptr, "RecordOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__RecordOver__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__RecordOver__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__RecordOver__pf()
	{
		UObject* Outer = Z_Construct_UClass_APlayback_Actor_C__pf3621867267();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "RecordOver" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__RecordOver__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Seek__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Seek__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "OverrideNativeName", "Seek" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Seek__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayback_Actor_C__pf3621867267, nullptr, "Seek", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Seek__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Seek__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Seek__pf()
	{
		UObject* Outer = Z_Construct_UClass_APlayback_Actor_C__pf3621867267();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Seek" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Seek__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayback_Actor_C__pf3621867267_NoRegister()
	{
		return APlayback_Actor_C__pf3621867267::StaticClass();
	}
	struct Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MediaSound__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MediaSound__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MediaPlayerNode__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MediaPlayerNode__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__startTime__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__startTime__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IsPlaying__pf_MetaData[];
#endif
		static void NewProp_bpv__IsPlaying__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__IsPlaying__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Time__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Time__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CurrentxSeconds__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__CurrentxSeconds__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpeechDur__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SpeechDur__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RecReady__pf_MetaData[];
#endif
		static void NewProp_bpv__RecReady__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__RecReady__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__B__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__B__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NewVar_0__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__NewVar_0__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NewVar_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__NewVar_1__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsRecording_Test__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsRecording_Test__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_b0l__CallFunc_FindFiles_FoundFiles__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_FindFiles_FoundFiles__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_FindFiles_FoundFiles__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_1__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Begin__pf, "Begin" }, // 498609449
		{ &Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Close__pf, "Close" }, // 2282565681
		{ &Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ExecuteUbergraph_Playback_Actor__pf_0, "ExecuteUbergraph_Playback_Actor_0" }, // 4020463256
		{ &Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Pause__pf, "Pause" }, // 91914954
		{ &Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Play__pf, "Play" }, // 1147838797
		{ &Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__ReceiveTick__pf, "ReceiveTick" }, // 2737695804
		{ &Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__RecordOver__pf, "RecordOver" }, // 4283712876
		{ &Z_Construct_UFunction_APlayback_Actor_C__pf3621867267_bpf__Seek__pf, "Seek" }, // 966935897
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Playback_Actor__pf3621867267.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Playback_Actor_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Playback_Actor.Playback_Actor_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__MediaSound__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "OverrideNativeName", "MediaSound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__MediaSound__pf = { "MediaSound", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayback_Actor_C__pf3621867267, bpv__MediaSound__pf), Z_Construct_UClass_UMediaSoundComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__MediaSound__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__MediaSound__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayback_Actor_C__pf3621867267, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__MediaPlayerNode__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Media Player Node" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MediaPlayerNode" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__MediaPlayerNode__pf = { "MediaPlayerNode", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayback_Actor_C__pf3621867267, bpv__MediaPlayerNode__pf), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__MediaPlayerNode__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__MediaPlayerNode__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__startTime__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Start Time" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "startTime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__startTime__pf = { "startTime", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayback_Actor_C__pf3621867267, bpv__startTime__pf), METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__startTime__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__startTime__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__IsPlaying__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Playing" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "IsPlaying" },
	};
#endif
	void Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__IsPlaying__pf_SetBit(void* Obj)
	{
		((APlayback_Actor_C__pf3621867267*)Obj)->bpv__IsPlaying__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__IsPlaying__pf = { "IsPlaying", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayback_Actor_C__pf3621867267), &Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__IsPlaying__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__IsPlaying__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__IsPlaying__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__Time__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Time" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Time" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__Time__pf = { "Time", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayback_Actor_C__pf3621867267, bpv__Time__pf), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__Time__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__Time__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__CurrentxSeconds__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Current Seconds" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Current Seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__CurrentxSeconds__pfT = { "Current Seconds", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayback_Actor_C__pf3621867267, bpv__CurrentxSeconds__pfT), METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__CurrentxSeconds__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__CurrentxSeconds__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__SpeechDur__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Speech Dur" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SpeechDur" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__SpeechDur__pf = { "SpeechDur", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayback_Actor_C__pf3621867267, bpv__SpeechDur__pf), METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__SpeechDur__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__SpeechDur__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__RecReady__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Rec Ready" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "RecReady" },
	};
#endif
	void Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__RecReady__pf_SetBit(void* Obj)
	{
		((APlayback_Actor_C__pf3621867267*)Obj)->bpv__RecReady__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__RecReady__pf = { "RecReady", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayback_Actor_C__pf3621867267), &Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__RecReady__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__RecReady__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__RecReady__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__B__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "B" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "B" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__B__pf = { "B", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayback_Actor_C__pf3621867267, bpv__B__pf), METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__B__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__B__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__NewVar_0__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "New Var 0" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "NewVar_0" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__NewVar_0__pf = { "NewVar_0", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayback_Actor_C__pf3621867267, bpv__NewVar_0__pf), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__NewVar_0__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__NewVar_0__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__NewVar_1__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "New Var 1" },
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "NewVar_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__NewVar_1__pf = { "NewVar_1", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayback_Actor_C__pf3621867267, bpv__NewVar_1__pf), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__NewVar_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__NewVar_1__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARecording_Test_C__pf1711902218_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayback_Actor_C__pf3621867267, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayback_Actor_C__pf3621867267, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_ARecording_Test_C__pf1711902218_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsRecording_Test" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test__pf = { "K2Node_DynamicCast_AsRecording_Test", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayback_Actor_C__pf3621867267, b0l__K2Node_DynamicCast_AsRecording_Test__pf), Z_Construct_UClass_ARecording_Test_C__pf1711902218_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((APlayback_Actor_C__pf3621867267*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayback_Actor_C__pf3621867267), &Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayback_Actor_C__pf3621867267, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_FindFiles_FoundFiles__pf_Inner = { "b0l__CallFunc_FindFiles_FoundFiles__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_FindFiles_FoundFiles__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "OverrideNativeName", "CallFunc_FindFiles_FoundFiles" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_FindFiles_FoundFiles__pf = { "CallFunc_FindFiles_FoundFiles", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayback_Actor_C__pf3621867267, b0l__CallFunc_FindFiles_FoundFiles__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_FindFiles_FoundFiles__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_FindFiles_FoundFiles__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Playback_Actor__pf3621867267.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_1" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf = { "CallFunc_Array_Get_Item_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayback_Actor_C__pf3621867267, b0l__CallFunc_Array_Get_Item_1__pf), METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__MediaSound__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__MediaPlayerNode__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__startTime__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__IsPlaying__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__Time__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__CurrentxSeconds__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__SpeechDur__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__RecReady__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__B__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__NewVar_0__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_bpv__NewVar_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_FindFiles_FoundFiles__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_FindFiles_FoundFiles__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayback_Actor_C__pf3621867267>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::ClassParams = {
		&APlayback_Actor_C__pf3621867267::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayback_Actor_C__pf3621867267()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Playback_Actor"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Playback_Actor_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayback_Actor_C__pf3621867267_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(APlayback_Actor_C__pf3621867267, TEXT("Playback_Actor_C"), 4142028755);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<APlayback_Actor_C__pf3621867267>()
	{
		return APlayback_Actor_C__pf3621867267::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayback_Actor_C__pf3621867267(Z_Construct_UClass_APlayback_Actor_C__pf3621867267, &APlayback_Actor_C__pf3621867267::StaticClass, TEXT("/Game/Stutter_Speak_Content/Playback_Actor"), TEXT("Playback_Actor_C"), true, TEXT("/Game/Stutter_Speak_Content/Playback_Actor"), TEXT("/Game/Stutter_Speak_Content/Playback_Actor.Playback_Actor_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayback_Actor_C__pf3621867267);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
