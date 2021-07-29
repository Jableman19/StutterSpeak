// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Floppy__pf3730827578.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloppy__pf3730827578() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFloppy_C__pf3730827578_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFloppy_C__pf3730827578();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPickupActorInterface_C_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFloppy_C__pf3730827578::execbpf__Drop__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Drop__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloppy_C__pf3730827578::execbpf__Pickup__pf)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_bpp__AttachTo__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Pickup__pf(Z_Param_bpp__AttachTo__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloppy_C__pf3730827578::execbpf__EnablePhysicsByProjector__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__EnablePhysicsByProjector__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloppy_C__pf3730827578::execbpf__ReceiveActorEndOverlap__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveActorEndOverlap__pf(Z_Param_bpp__OtherActor__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloppy_C__pf3730827578::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloppy_C__pf3730827578::execbpf__RespawnBySelf__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__RespawnBySelf__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloppy_C__pf3730827578::execbpf__ExecuteUbergraph_Floppy__pf_5)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_Floppy__pf_5(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloppy_C__pf3730827578::execbpf__ExecuteUbergraph_Floppy__pf_2)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_Floppy__pf_2(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_AFloppy_C__pf3730827578_bpf__Drop__pf = FName(TEXT("Drop"));
	void AFloppy_C__pf3730827578::eventbpf__Drop__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFloppy_C__pf3730827578_bpf__Drop__pf),NULL);
	}
	static FName NAME_AFloppy_C__pf3730827578_bpf__Pickup__pf = FName(TEXT("Pickup"));
	void AFloppy_C__pf3730827578::eventbpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
	{
		Floppy_C__pf3730827578_eventbpf__Pickup__pf_Parms Parms;
		Parms.bpp__AttachTo__pf=bpp__AttachTo__pf;
		ProcessEvent(FindFunctionChecked(NAME_AFloppy_C__pf3730827578_bpf__Pickup__pf),&Parms);
	}
	static FName NAME_AFloppy_C__pf3730827578_bpf__ReceiveActorEndOverlap__pf = FName(TEXT("ReceiveActorEndOverlap"));
	void AFloppy_C__pf3730827578::eventbpf__ReceiveActorEndOverlap__pf(AActor* bpp__OtherActor__pf)
	{
		Floppy_C__pf3730827578_eventbpf__ReceiveActorEndOverlap__pf_Parms Parms;
		Parms.bpp__OtherActor__pf=bpp__OtherActor__pf;
		ProcessEvent(FindFunctionChecked(NAME_AFloppy_C__pf3730827578_bpf__ReceiveActorEndOverlap__pf),&Parms);
	}
	static FName NAME_AFloppy_C__pf3730827578_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AFloppy_C__pf3730827578::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFloppy_C__pf3730827578_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void AFloppy_C__pf3730827578::StaticRegisterNativesAFloppy_C__pf3730827578()
	{
		UClass* Class = AFloppy_C__pf3730827578::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Drop", &AFloppy_C__pf3730827578::execbpf__Drop__pf },
			{ "EnablePhysicsByProjector", &AFloppy_C__pf3730827578::execbpf__EnablePhysicsByProjector__pf },
			{ "ExecuteUbergraph_Floppy_2", &AFloppy_C__pf3730827578::execbpf__ExecuteUbergraph_Floppy__pf_2 },
			{ "ExecuteUbergraph_Floppy_5", &AFloppy_C__pf3730827578::execbpf__ExecuteUbergraph_Floppy__pf_5 },
			{ "Pickup", &AFloppy_C__pf3730827578::execbpf__Pickup__pf },
			{ "ReceiveActorEndOverlap", &AFloppy_C__pf3730827578::execbpf__ReceiveActorEndOverlap__pf },
			{ "ReceiveBeginPlay", &AFloppy_C__pf3730827578::execbpf__ReceiveBeginPlay__pf },
			{ "RespawnBySelf", &AFloppy_C__pf3730827578::execbpf__RespawnBySelf__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Drop__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Drop__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "Drop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Drop__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloppy_C__pf3730827578, nullptr, "Drop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Drop__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Drop__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Drop__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFloppy_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Drop" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Drop__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__EnablePhysicsByProjector__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__EnablePhysicsByProjector__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "EnablePhysicsByProjector" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__EnablePhysicsByProjector__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloppy_C__pf3730827578, nullptr, "EnablePhysicsByProjector", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__EnablePhysicsByProjector__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__EnablePhysicsByProjector__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__EnablePhysicsByProjector__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFloppy_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "EnablePhysicsByProjector" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__EnablePhysicsByProjector__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_2_Statics
	{
		struct Floppy_C__pf3730827578_eventbpf__ExecuteUbergraph_Floppy__pf_2_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_2_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Floppy_C__pf3730827578_eventbpf__ExecuteUbergraph_Floppy__pf_2_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_2_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_Floppy_2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloppy_C__pf3730827578, nullptr, "ExecuteUbergraph_Floppy_2", nullptr, nullptr, sizeof(Floppy_C__pf3730827578_eventbpf__ExecuteUbergraph_Floppy__pf_2_Parms), Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_2_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_2()
	{
		UObject* Outer = Z_Construct_UClass_AFloppy_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_Floppy_2" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_5_Statics
	{
		struct Floppy_C__pf3730827578_eventbpf__ExecuteUbergraph_Floppy__pf_5_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_5_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Floppy_C__pf3730827578_eventbpf__ExecuteUbergraph_Floppy__pf_5_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_5_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_5_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_5_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_Floppy_5" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_5_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloppy_C__pf3730827578, nullptr, "ExecuteUbergraph_Floppy_5", nullptr, nullptr, sizeof(Floppy_C__pf3730827578_eventbpf__ExecuteUbergraph_Floppy__pf_5_Parms), Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_5_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_5_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_5_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_5_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_5()
	{
		UObject* Outer = Z_Construct_UClass_AFloppy_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_Floppy_5" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_5_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Pickup__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__AttachTo__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__AttachTo__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf = { "bpp__AttachTo__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Floppy_C__pf3730827578_eventbpf__Pickup__pf_Parms, bpp__AttachTo__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Pickup__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Pickup__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "Pickup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Pickup__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloppy_C__pf3730827578, nullptr, "Pickup", nullptr, nullptr, sizeof(Floppy_C__pf3730827578_eventbpf__Pickup__pf_Parms), Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Pickup__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Pickup__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Pickup__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Pickup__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Pickup__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFloppy_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Pickup" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Pickup__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveActorEndOverlap__pf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveActorEndOverlap__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Floppy_C__pf3730827578_eventbpf__ReceiveActorEndOverlap__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveActorEndOverlap__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveActorEndOverlap__pf_Statics::NewProp_bpp__OtherActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveActorEndOverlap__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** t *tEvent when an actor no longer overlaps another actor, and they have separated. t *t@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.t */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "ActorEndOverlap" },
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "ReceiveActorEndOverlap" },
		{ "ToolTip", "Event when an actor no longer overlaps another actor, and they have separated.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveActorEndOverlap__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloppy_C__pf3730827578, nullptr, "ReceiveActorEndOverlap", nullptr, nullptr, sizeof(Floppy_C__pf3730827578_eventbpf__ReceiveActorEndOverlap__pf_Parms), Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveActorEndOverlap__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveActorEndOverlap__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveActorEndOverlap__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveActorEndOverlap__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveActorEndOverlap__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFloppy_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveActorEndOverlap" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveActorEndOverlap__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloppy_C__pf3730827578, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFloppy_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__RespawnBySelf__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__RespawnBySelf__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "RespawnBySelf" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__RespawnBySelf__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloppy_C__pf3730827578, nullptr, "RespawnBySelf", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__RespawnBySelf__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__RespawnBySelf__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__RespawnBySelf__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFloppy_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "RespawnBySelf" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__RespawnBySelf__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFloppy_C__pf3730827578_NoRegister()
	{
		return AFloppy_C__pf3730827578::StaticClass();
	}
	struct Z_Construct_UClass_AFloppy_C__pf3730827578_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FloppyxName__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__FloppyxName__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StaticMesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__StaticMesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnxLocation__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__SpawnxLocation__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnxRotation__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__SpawnxRotation__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NotxBeingxUsed__pfTT_MetaData[];
#endif
		static void NewProp_bpv__NotxBeingxUsed__pfTT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__NotxBeingxUsed__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Grabbable__pf_MetaData[];
#endif
		static void NewProp_bpv__Grabbable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Grabbable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Respawning__pf_MetaData[];
#endif
		static void NewProp_bpv__Respawning__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Respawning__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorLocationAndRotation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorLocationAndRotation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_AttachTo__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_OtherActor__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsFloppy_Reset_Box_Blueprint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsFloppy_Reset_Box_Blueprint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_b0l__CallFunc_Array_Get_Item_1__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Drop__pf, "Drop" }, // 61848343
		{ &Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__EnablePhysicsByProjector__pf, "EnablePhysicsByProjector" }, // 2654355329
		{ &Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_2, "ExecuteUbergraph_Floppy_2" }, // 2711235069
		{ &Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ExecuteUbergraph_Floppy__pf_5, "ExecuteUbergraph_Floppy_5" }, // 4261045940
		{ &Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__Pickup__pf, "Pickup" }, // 1074207232
		{ &Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveActorEndOverlap__pf, "ReceiveActorEndOverlap" }, // 830822790
		{ &Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 2034453602
		{ &Z_Construct_UFunction_AFloppy_C__pf3730827578_bpf__RespawnBySelf__pf, "RespawnBySelf" }, // 4159033276
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Floppy__pf3730827578.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Floppy_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Blueprints/Floppy.Floppy_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__FloppyxName__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "Floppy Name" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__FloppyxName__pfT = { "Floppy Name", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppy_C__pf3730827578, bpv__FloppyxName__pfT), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__FloppyxName__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__FloppyxName__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__StaticMesh__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "StaticMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__StaticMesh__pf = { "StaticMesh", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppy_C__pf3730827578, bpv__StaticMesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__StaticMesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__StaticMesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__SpawnxLocation__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Spawn Location" },
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Spawn Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__SpawnxLocation__pfT = { "Spawn Location", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppy_C__pf3730827578, bpv__SpawnxLocation__pfT), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__SpawnxLocation__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__SpawnxLocation__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__SpawnxRotation__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Spawn Rotation" },
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Spawn Rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__SpawnxRotation__pfT = { "Spawn Rotation", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppy_C__pf3730827578, bpv__SpawnxRotation__pfT), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__SpawnxRotation__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__SpawnxRotation__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__NotxBeingxUsed__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Not Being Used" },
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Not Being Used" },
	};
#endif
	void Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__NotxBeingxUsed__pfTT_SetBit(void* Obj)
	{
		((AFloppy_C__pf3730827578*)Obj)->bpv__NotxBeingxUsed__pfTT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__NotxBeingxUsed__pfTT = { "Not Being Used", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloppy_C__pf3730827578), &Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__NotxBeingxUsed__pfTT_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__NotxBeingxUsed__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__NotxBeingxUsed__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__Grabbable__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Grabbable" },
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Grabbable" },
	};
#endif
	void Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__Grabbable__pf_SetBit(void* Obj)
	{
		((AFloppy_C__pf3730827578*)Obj)->bpv__Grabbable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__Grabbable__pf = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloppy_C__pf3730827578), &Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__Grabbable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__Grabbable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__Grabbable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__Respawning__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Respawning" },
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Respawning" },
	};
#endif
	void Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__Respawning__pf_SetBit(void* Obj)
	{
		((AFloppy_C__pf3730827578*)Obj)->bpv__Respawning__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__Respawning__pf = { "Respawning", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloppy_C__pf3730827578), &Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__Respawning__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__Respawning__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__Respawning__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetActorLocationAndRotation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetActorLocationAndRotation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetActorLocationAndRotation_SweepHitResult__pf = { "CallFunc_K2_SetActorLocationAndRotation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppy_C__pf3730827578, b0l__CallFunc_K2_SetActorLocationAndRotation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetActorLocationAndRotation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetActorLocationAndRotation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_Event_AttachTo" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf = { "K2Node_Event_AttachTo", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppy_C__pf3730827578, b0l__K2Node_Event_AttachTo__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_Event_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf = { "K2Node_Event_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppy_C__pf3730827578, b0l__K2Node_Event_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppy_C__pf3730827578, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppy_C__pf3730827578, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsFloppy_Reset_Box_Blueprint__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsFloppy_Reset_Box_Blueprint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsFloppy_Reset_Box_Blueprint__pf = { "K2Node_DynamicCast_AsFloppy_Reset_Box_Blueprint", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppy_C__pf3730827578, b0l__K2Node_DynamicCast_AsFloppy_Reset_Box_Blueprint__pf), Z_Construct_UClass_AFloppyResetBox_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsFloppy_Reset_Box_Blueprint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsFloppy_Reset_Box_Blueprint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AFloppy_C__pf3730827578*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloppy_C__pf3730827578), &Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf = { "CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppy_C__pf3730827578, b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Floppy__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_1" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf = { "CallFunc_Array_Get_Item_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppy_C__pf3730827578, b0l__CallFunc_Array_Get_Item_1__pf), METADATA_PARAMS(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__FloppyxName__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__StaticMesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__SpawnxLocation__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__SpawnxRotation__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__NotxBeingxUsed__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__Grabbable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_bpv__Respawning__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetActorLocationAndRotation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsFloppy_Reset_Box_Blueprint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPickupActorInterface_C_NoRegister, (int32)VTABLE_OFFSET(AFloppy_C__pf3730827578, IPickupActorInterface_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloppy_C__pf3730827578>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::ClassParams = {
		&AFloppy_C__pf3730827578::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloppy_C__pf3730827578()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Blueprints/Floppy"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Floppy_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloppy_C__pf3730827578_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AFloppy_C__pf3730827578, TEXT("Floppy_C"), 766630267);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AFloppy_C__pf3730827578>()
	{
		return AFloppy_C__pf3730827578::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloppy_C__pf3730827578(Z_Construct_UClass_AFloppy_C__pf3730827578, &AFloppy_C__pf3730827578::StaticClass, TEXT("/Game/Stutter_Speak_Content/Blueprints/Floppy"), TEXT("Floppy_C"), true, TEXT("/Game/Stutter_Speak_Content/Blueprints/Floppy"), TEXT("/Game/Stutter_Speak_Content/Blueprints/Floppy.Floppy_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloppy_C__pf3730827578);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
