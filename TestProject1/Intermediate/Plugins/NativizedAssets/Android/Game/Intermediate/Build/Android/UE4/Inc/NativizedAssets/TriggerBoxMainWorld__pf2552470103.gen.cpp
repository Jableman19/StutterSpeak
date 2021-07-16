// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/TriggerBoxMainWorld__pf2552470103.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerBoxMainWorld__pf2552470103() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_MotionController_C__pf3611121690_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(ATriggerBoxMainWorld_C__pf2552470103::execbpf__ReceiveActorEndOverlap__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveActorEndOverlap__pf(Z_Param_bpp__OtherActor__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerBoxMainWorld_C__pf2552470103::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerBoxMainWorld_C__pf2552470103::execbpf__ReceiveActorBeginOverlap__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveActorBeginOverlap__pf(Z_Param_bpp__OtherActor__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerBoxMainWorld_C__pf2552470103::execbpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorBeginOverlap__pf = FName(TEXT("ReceiveActorBeginOverlap"));
	void ATriggerBoxMainWorld_C__pf2552470103::eventbpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf)
	{
		TriggerBoxMainWorld_C__pf2552470103_eventbpf__ReceiveActorBeginOverlap__pf_Parms Parms;
		Parms.bpp__OtherActor__pf=bpp__OtherActor__pf;
		ProcessEvent(FindFunctionChecked(NAME_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorBeginOverlap__pf),&Parms);
	}
	static FName NAME_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorEndOverlap__pf = FName(TEXT("ReceiveActorEndOverlap"));
	void ATriggerBoxMainWorld_C__pf2552470103::eventbpf__ReceiveActorEndOverlap__pf(AActor* bpp__OtherActor__pf)
	{
		TriggerBoxMainWorld_C__pf2552470103_eventbpf__ReceiveActorEndOverlap__pf_Parms Parms;
		Parms.bpp__OtherActor__pf=bpp__OtherActor__pf;
		ProcessEvent(FindFunctionChecked(NAME_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorEndOverlap__pf),&Parms);
	}
	static FName NAME_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ATriggerBoxMainWorld_C__pf2552470103::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void ATriggerBoxMainWorld_C__pf2552470103::StaticRegisterNativesATriggerBoxMainWorld_C__pf2552470103()
	{
		UClass* Class = ATriggerBoxMainWorld_C__pf2552470103::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_TriggerBoxMainWorld_2", &ATriggerBoxMainWorld_C__pf2552470103::execbpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2 },
			{ "ReceiveActorBeginOverlap", &ATriggerBoxMainWorld_C__pf2552470103::execbpf__ReceiveActorBeginOverlap__pf },
			{ "ReceiveActorEndOverlap", &ATriggerBoxMainWorld_C__pf2552470103::execbpf__ReceiveActorEndOverlap__pf },
			{ "ReceiveBeginPlay", &ATriggerBoxMainWorld_C__pf2552470103::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2_Statics
	{
		struct TriggerBoxMainWorld_C__pf2552470103_eventbpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(TriggerBoxMainWorld_C__pf2552470103_eventbpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_TriggerBoxMainWorld_2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103, nullptr, "ExecuteUbergraph_TriggerBoxMainWorld_2", nullptr, nullptr, sizeof(TriggerBoxMainWorld_C__pf2552470103_eventbpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2_Parms), Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2()
	{
		UObject* Outer = Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_TriggerBoxMainWorld_2" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorBeginOverlap__pf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorBeginOverlap__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(TriggerBoxMainWorld_C__pf2552470103_eventbpf__ReceiveActorBeginOverlap__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorBeginOverlap__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorBeginOverlap__pf_Statics::NewProp_bpp__OtherActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorBeginOverlap__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** t *tEvent when this actor overlaps another actor, for example a player walking into a trigger.t *tFor events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.t *t@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.t */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "ActorBeginOverlap" },
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "ReceiveActorBeginOverlap" },
		{ "ToolTip", "Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorBeginOverlap__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103, nullptr, "ReceiveActorBeginOverlap", nullptr, nullptr, sizeof(TriggerBoxMainWorld_C__pf2552470103_eventbpf__ReceiveActorBeginOverlap__pf_Parms), Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorBeginOverlap__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorBeginOverlap__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorBeginOverlap__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorBeginOverlap__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorBeginOverlap__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveActorBeginOverlap" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorBeginOverlap__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorEndOverlap__pf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorEndOverlap__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(TriggerBoxMainWorld_C__pf2552470103_eventbpf__ReceiveActorEndOverlap__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorEndOverlap__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorEndOverlap__pf_Statics::NewProp_bpp__OtherActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorEndOverlap__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** t *tEvent when an actor no longer overlaps another actor, and they have separated. t *t@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.t */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "ActorEndOverlap" },
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "ReceiveActorEndOverlap" },
		{ "ToolTip", "Event when an actor no longer overlaps another actor, and they have separated.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorEndOverlap__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103, nullptr, "ReceiveActorEndOverlap", nullptr, nullptr, sizeof(TriggerBoxMainWorld_C__pf2552470103_eventbpf__ReceiveActorEndOverlap__pf_Parms), Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorEndOverlap__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorEndOverlap__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorEndOverlap__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorEndOverlap__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorEndOverlap__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveActorEndOverlap" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorEndOverlap__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_NoRegister()
	{
		return ATriggerBoxMainWorld_C__pf2552470103::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LeftxHand__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__LeftxHand__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RightxHand__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__RightxHand__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LeftxPointer__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__LeftxPointer__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RightxPointer__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__RightxPointer__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RightxHandxActive__pfTT_MetaData[];
#endif
		static void NewProp_bpv__RightxHandxActive__pfTT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__RightxHandxActive__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LeftxHandxActive__pfTT_MetaData[];
#endif
		static void NewProp_bpv__LeftxHandxActive__pfTT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__LeftxHandxActive__pfTT;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_OtherActor_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_OtherActor_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_OtherActor__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_2__pf;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_6__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_6__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ExecuteUbergraph_TriggerBoxMainWorld__pf_2, "ExecuteUbergraph_TriggerBoxMainWorld_2" }, // 3914469219
		{ &Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorBeginOverlap__pf, "ReceiveActorBeginOverlap" }, // 2325625762
		{ &Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveActorEndOverlap__pf, "ReceiveActorEndOverlap" }, // 3673713383
		{ &Z_Construct_UFunction_ATriggerBoxMainWorld_C__pf2552470103_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 2875427825
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerBoxMainWorld__pf2552470103.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "TriggerBoxMainWorld_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Pre-Fabs/TriggerBoxMainWorld.TriggerBoxMainWorld_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__LeftxHand__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Left Hand" },
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Left Hand" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__LeftxHand__pfT = { "Left Hand", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, bpv__LeftxHand__pfT), Z_Construct_UClass_ABP_MotionController_C__pf3611121690_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__LeftxHand__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__LeftxHand__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__RightxHand__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Right Hand" },
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Right Hand" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__RightxHand__pfT = { "Right Hand", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, bpv__RightxHand__pfT), Z_Construct_UClass_ABP_MotionController_C__pf3611121690_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__RightxHand__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__RightxHand__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__LeftxPointer__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Left Pointer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Left Pointer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__LeftxPointer__pfT = { "Left Pointer", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, bpv__LeftxPointer__pfT), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__LeftxPointer__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__LeftxPointer__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__RightxPointer__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Right Pointer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Right Pointer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__RightxPointer__pfT = { "Right Pointer", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, bpv__RightxPointer__pfT), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__RightxPointer__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__RightxPointer__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__RightxHandxActive__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Right Hand Active" },
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Right Hand Active" },
	};
#endif
	void Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__RightxHandxActive__pfTT_SetBit(void* Obj)
	{
		((ATriggerBoxMainWorld_C__pf2552470103*)Obj)->bpv__RightxHandxActive__pfTT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__RightxHandxActive__pfTT = { "Right Hand Active", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATriggerBoxMainWorld_C__pf2552470103), &Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__RightxHandxActive__pfTT_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__RightxHandxActive__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__RightxHandxActive__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__LeftxHandxActive__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Left Hand Active" },
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Left Hand Active" },
	};
#endif
	void Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__LeftxHandxActive__pfTT_SetBit(void* Obj)
	{
		((ATriggerBoxMainWorld_C__pf2552470103*)Obj)->bpv__LeftxHandxActive__pfTT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__LeftxHandxActive__pfTT = { "Left Hand Active", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATriggerBoxMainWorld_C__pf2552470103), &Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__LeftxHandxActive__pfTT_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__LeftxHandxActive__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__LeftxHandxActive__pfTT_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABP_MotionController_C__pf3611121690_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_Event_OtherActor_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "K2Node_Event_OtherActor_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_Event_OtherActor_1__pf = { "K2Node_Event_OtherActor_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__K2Node_Event_OtherActor_1__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_Event_OtherActor_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_Event_OtherActor_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_ABP_MotionController_C__pf3611121690_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf = { "CallFunc_Array_Get_Item_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_Array_Get_Item_1__pf), Z_Construct_UClass_ABP_MotionController_C__pf3611121690_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "K2Node_Event_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf = { "K2Node_Event_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__K2Node_Event_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors_1" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf = { "CallFunc_GetAllActorsOfClass_OutActors_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf = { "CallFunc_Array_Get_Item_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_Array_Get_Item_2__pf), Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf = { "CallFunc_BreakVector_X", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_BreakVector_X__pf), METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf = { "CallFunc_BreakVector_Y", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_BreakVector_Y__pf), METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf = { "CallFunc_BreakVector_Z", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_BreakVector_Z__pf), METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMotion_Controller_Pawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = { "K2Node_DynamicCast_AsMotion_Controller_Pawn", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf), Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ATriggerBoxMainWorld_C__pf2552470103*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATriggerBoxMainWorld_C__pf2552470103), &Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors_2" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf = { "CallFunc_GetAllActorsOfClass_OutActors_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf = { "CallFunc_BreakVector_X_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_BreakVector_X_1__pf), METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf = { "CallFunc_BreakVector_Y_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_BreakVector_Y_1__pf), METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf = { "CallFunc_BreakVector_Z_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_BreakVector_Z_1__pf), METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf = { "CallFunc_Array_Get_Item_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_Array_Get_Item_3__pf), Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsTrigger_Box_Blueprint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint__pf = { "K2Node_DynamicCast_AsTrigger_Box_Blueprint", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint__pf), Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((ATriggerBoxMainWorld_C__pf2552470103*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATriggerBoxMainWorld_C__pf2552470103), &Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetActorLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf = { "CallFunc_K2_SetActorLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors_3" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf = { "CallFunc_GetAllActorsOfClass_OutActors_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors_4" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf = { "CallFunc_GetAllActorsOfClass_OutActors_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_4" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_4__pf = { "CallFunc_Array_Get_Item_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_Array_Get_Item_4__pf), Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_5" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_5__pf = { "CallFunc_Array_Get_Item_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_Array_Get_Item_5__pf), Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsTrigger_Box_Blueprint_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_1__pf = { "K2Node_DynamicCast_AsTrigger_Box_Blueprint_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_1__pf), Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_2" },
	};
#endif
	void Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj)
	{
		((ATriggerBoxMainWorld_C__pf2552470103*)Obj)->b0l__K2Node_DynamicCast_bSuccess_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf = { "K2Node_DynamicCast_bSuccess_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATriggerBoxMainWorld_C__pf2552470103), &Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsTrigger_Box_Blueprint_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_2__pf = { "K2Node_DynamicCast_AsTrigger_Box_Blueprint_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_2__pf), Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_3" },
	};
#endif
	void Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit(void* Obj)
	{
		((ATriggerBoxMainWorld_C__pf2552470103*)Obj)->b0l__K2Node_DynamicCast_bSuccess_3__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf = { "K2Node_DynamicCast_bSuccess_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATriggerBoxMainWorld_C__pf2552470103), &Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors_5" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf = { "CallFunc_GetAllActorsOfClass_OutActors_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_6__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_6__pf = { "CallFunc_Array_Get_Item_6", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__CallFunc_Array_Get_Item_6__pf), Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_6__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_6__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsTrigger_Box_Blueprint_3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_3__pf = { "K2Node_DynamicCast_AsTrigger_Box_Blueprint_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBoxMainWorld_C__pf2552470103, b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_3__pf), Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxMainWorld__pf2552470103.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_4" },
	};
#endif
	void Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_SetBit(void* Obj)
	{
		((ATriggerBoxMainWorld_C__pf2552470103*)Obj)->b0l__K2Node_DynamicCast_bSuccess_4__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf = { "K2Node_DynamicCast_bSuccess_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATriggerBoxMainWorld_C__pf2552470103), &Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__LeftxHand__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__RightxHand__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__LeftxPointer__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__RightxPointer__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__RightxHandxActive__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_bpv__LeftxHandxActive__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_Event_OtherActor_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__CallFunc_Array_Get_Item_6__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Blueprint_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerBoxMainWorld_C__pf2552470103>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::ClassParams = {
		&ATriggerBoxMainWorld_C__pf2552470103::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Pre-Fabs/TriggerBoxMainWorld"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("TriggerBoxMainWorld_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ATriggerBoxMainWorld_C__pf2552470103, TEXT("TriggerBoxMainWorld_C"), 1237344084);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ATriggerBoxMainWorld_C__pf2552470103>()
	{
		return ATriggerBoxMainWorld_C__pf2552470103::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerBoxMainWorld_C__pf2552470103(Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103, &ATriggerBoxMainWorld_C__pf2552470103::StaticClass, TEXT("/Game/Stutter_Speak_Content/Pre-Fabs/TriggerBoxMainWorld"), TEXT("TriggerBoxMainWorld_C"), true, TEXT("/Game/Stutter_Speak_Content/Pre-Fabs/TriggerBoxMainWorld"), TEXT("/Game/Stutter_Speak_Content/Pre-Fabs/TriggerBoxMainWorld.TriggerBoxMainWorld_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerBoxMainWorld_C__pf2552470103);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
