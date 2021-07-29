// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/TriggerBox_Blueprint__pf3730827578.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerBox_Blueprint__pf3730827578() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_MotionController_C__pf3611121690_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATriggerBox_Blueprint_C__pf3730827578::execbpf__LeftHandUnhideByExternal__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__Overlapper__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__LeftHandUnhideByExternal__pf(Z_Param_bpp__Overlapper__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerBox_Blueprint_C__pf3730827578::execbpf__RightHandUnhideByExternal__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__Overlapper__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__RightHandUnhideByExternal__pf(Z_Param_bpp__Overlapper__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerBox_Blueprint_C__pf3730827578::execbpf__LeftHandHiddenByExternal__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__Overlapper__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__LeftHandHiddenByExternal__pf(Z_Param_bpp__Overlapper__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerBox_Blueprint_C__pf3730827578::execbpf__RightHandHiddenByExternal__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__Overlapper__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__RightHandHiddenByExternal__pf(Z_Param_bpp__Overlapper__pf);
		P_NATIVE_END;
	}
	void ATriggerBox_Blueprint_C__pf3730827578::StaticRegisterNativesATriggerBox_Blueprint_C__pf3730827578()
	{
		UClass* Class = ATriggerBox_Blueprint_C__pf3730827578::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LeftHandHiddenByExternal", &ATriggerBox_Blueprint_C__pf3730827578::execbpf__LeftHandHiddenByExternal__pf },
			{ "LeftHandUnhideByExternal", &ATriggerBox_Blueprint_C__pf3730827578::execbpf__LeftHandUnhideByExternal__pf },
			{ "RightHandHiddenByExternal", &ATriggerBox_Blueprint_C__pf3730827578::execbpf__RightHandHiddenByExternal__pf },
			{ "RightHandUnhideByExternal", &ATriggerBox_Blueprint_C__pf3730827578::execbpf__RightHandUnhideByExternal__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandHiddenByExternal__pf_Statics
	{
		struct TriggerBox_Blueprint_C__pf3730827578_eventbpf__LeftHandHiddenByExternal__pf_Parms
		{
			AActor* bpp__Overlapper__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Overlapper__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandHiddenByExternal__pf_Statics::NewProp_bpp__Overlapper__pf = { "bpp__Overlapper__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(TriggerBox_Blueprint_C__pf3730827578_eventbpf__LeftHandHiddenByExternal__pf_Parms, bpp__Overlapper__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandHiddenByExternal__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandHiddenByExternal__pf_Statics::NewProp_bpp__Overlapper__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandHiddenByExternal__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/TriggerBox_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "LeftHandHiddenByExternal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandHiddenByExternal__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578, nullptr, "LeftHandHiddenByExternal", nullptr, nullptr, sizeof(TriggerBox_Blueprint_C__pf3730827578_eventbpf__LeftHandHiddenByExternal__pf_Parms), Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandHiddenByExternal__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandHiddenByExternal__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandHiddenByExternal__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandHiddenByExternal__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandHiddenByExternal__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "LeftHandHiddenByExternal" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandHiddenByExternal__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandUnhideByExternal__pf_Statics
	{
		struct TriggerBox_Blueprint_C__pf3730827578_eventbpf__LeftHandUnhideByExternal__pf_Parms
		{
			AActor* bpp__Overlapper__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Overlapper__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandUnhideByExternal__pf_Statics::NewProp_bpp__Overlapper__pf = { "bpp__Overlapper__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(TriggerBox_Blueprint_C__pf3730827578_eventbpf__LeftHandUnhideByExternal__pf_Parms, bpp__Overlapper__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandUnhideByExternal__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandUnhideByExternal__pf_Statics::NewProp_bpp__Overlapper__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandUnhideByExternal__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/TriggerBox_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "LeftHandUnhideByExternal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandUnhideByExternal__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578, nullptr, "LeftHandUnhideByExternal", nullptr, nullptr, sizeof(TriggerBox_Blueprint_C__pf3730827578_eventbpf__LeftHandUnhideByExternal__pf_Parms), Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandUnhideByExternal__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandUnhideByExternal__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandUnhideByExternal__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandUnhideByExternal__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandUnhideByExternal__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "LeftHandUnhideByExternal" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandUnhideByExternal__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandHiddenByExternal__pf_Statics
	{
		struct TriggerBox_Blueprint_C__pf3730827578_eventbpf__RightHandHiddenByExternal__pf_Parms
		{
			AActor* bpp__Overlapper__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Overlapper__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandHiddenByExternal__pf_Statics::NewProp_bpp__Overlapper__pf = { "bpp__Overlapper__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(TriggerBox_Blueprint_C__pf3730827578_eventbpf__RightHandHiddenByExternal__pf_Parms, bpp__Overlapper__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandHiddenByExternal__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandHiddenByExternal__pf_Statics::NewProp_bpp__Overlapper__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandHiddenByExternal__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/TriggerBox_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "RightHandHiddenByExternal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandHiddenByExternal__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578, nullptr, "RightHandHiddenByExternal", nullptr, nullptr, sizeof(TriggerBox_Blueprint_C__pf3730827578_eventbpf__RightHandHiddenByExternal__pf_Parms), Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandHiddenByExternal__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandHiddenByExternal__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandHiddenByExternal__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandHiddenByExternal__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandHiddenByExternal__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "RightHandHiddenByExternal" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandHiddenByExternal__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandUnhideByExternal__pf_Statics
	{
		struct TriggerBox_Blueprint_C__pf3730827578_eventbpf__RightHandUnhideByExternal__pf_Parms
		{
			AActor* bpp__Overlapper__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Overlapper__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandUnhideByExternal__pf_Statics::NewProp_bpp__Overlapper__pf = { "bpp__Overlapper__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(TriggerBox_Blueprint_C__pf3730827578_eventbpf__RightHandUnhideByExternal__pf_Parms, bpp__Overlapper__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandUnhideByExternal__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandUnhideByExternal__pf_Statics::NewProp_bpp__Overlapper__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandUnhideByExternal__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/TriggerBox_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "RightHandUnhideByExternal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandUnhideByExternal__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578, nullptr, "RightHandUnhideByExternal", nullptr, nullptr, sizeof(TriggerBox_Blueprint_C__pf3730827578_eventbpf__RightHandUnhideByExternal__pf_Parms), Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandUnhideByExternal__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandUnhideByExternal__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandUnhideByExternal__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandUnhideByExternal__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandUnhideByExternal__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "RightHandUnhideByExternal" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandUnhideByExternal__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_NoRegister()
	{
		return ATriggerBox_Blueprint_C__pf3730827578::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Indexer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Indexer__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Overlapper_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_Overlapper_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Overlapper_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_Overlapper_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Overlapper_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_Overlapper_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Overlapper__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_Overlapper__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandHiddenByExternal__pf, "LeftHandHiddenByExternal" }, // 2814258812
		{ &Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__LeftHandUnhideByExternal__pf, "LeftHandUnhideByExternal" }, // 3529159564
		{ &Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandHiddenByExternal__pf, "RightHandHiddenByExternal" }, // 1275109997
		{ &Z_Construct_UFunction_ATriggerBox_Blueprint_C__pf3730827578_bpf__RightHandUnhideByExternal__pf, "RightHandUnhideByExternal" }, // 3563793474
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerBox_Blueprint__pf3730827578.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerBox_Blueprint__pf3730827578.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "TriggerBox_Blueprint_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Blueprints/TriggerBox_Blueprint.TriggerBox_Blueprint_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__LeftxHand__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Left Hand" },
		{ "ModuleRelativePath", "Public/TriggerBox_Blueprint__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Left Hand" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__LeftxHand__pfT = { "Left Hand", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBox_Blueprint_C__pf3730827578, bpv__LeftxHand__pfT), Z_Construct_UClass_ABP_MotionController_C__pf3611121690_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__LeftxHand__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__LeftxHand__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__RightxHand__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Right Hand" },
		{ "ModuleRelativePath", "Public/TriggerBox_Blueprint__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Right Hand" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__RightxHand__pfT = { "Right Hand", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBox_Blueprint_C__pf3730827578, bpv__RightxHand__pfT), Z_Construct_UClass_ABP_MotionController_C__pf3611121690_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__RightxHand__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__RightxHand__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__LeftxPointer__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Left Pointer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerBox_Blueprint__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Left Pointer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__LeftxPointer__pfT = { "Left Pointer", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBox_Blueprint_C__pf3730827578, bpv__LeftxPointer__pfT), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__LeftxPointer__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__LeftxPointer__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__RightxPointer__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Right Pointer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerBox_Blueprint__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Right Pointer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__RightxPointer__pfT = { "Right Pointer", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBox_Blueprint_C__pf3730827578, bpv__RightxPointer__pfT), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__RightxPointer__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__RightxPointer__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__RightxHandxActive__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Right Hand Active" },
		{ "ModuleRelativePath", "Public/TriggerBox_Blueprint__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Right Hand Active" },
	};
#endif
	void Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__RightxHandxActive__pfTT_SetBit(void* Obj)
	{
		((ATriggerBox_Blueprint_C__pf3730827578*)Obj)->bpv__RightxHandxActive__pfTT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__RightxHandxActive__pfTT = { "Right Hand Active", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATriggerBox_Blueprint_C__pf3730827578), &Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__RightxHandxActive__pfTT_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__RightxHandxActive__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__RightxHandxActive__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__LeftxHandxActive__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Left Hand Active" },
		{ "ModuleRelativePath", "Public/TriggerBox_Blueprint__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Left Hand Active" },
	};
#endif
	void Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__LeftxHandxActive__pfTT_SetBit(void* Obj)
	{
		((ATriggerBox_Blueprint_C__pf3730827578*)Obj)->bpv__LeftxHandxActive__pfTT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__LeftxHandxActive__pfTT = { "Left Hand Active", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATriggerBox_Blueprint_C__pf3730827578), &Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__LeftxHandxActive__pfTT_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__LeftxHandxActive__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__LeftxHandxActive__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Indexer__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Indexer" },
		{ "ModuleRelativePath", "Public/TriggerBox_Blueprint__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Indexer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Indexer__pf = { "Indexer", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBox_Blueprint_C__pf3730827578, bpv__Indexer__pf), METADATA_PARAMS(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Indexer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Indexer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBox_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_Overlapper_3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper_3__pf = { "K2Node_CustomEvent_Overlapper_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBox_Blueprint_C__pf3730827578, b0l__K2Node_CustomEvent_Overlapper_3__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBox_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_Overlapper_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper_2__pf = { "K2Node_CustomEvent_Overlapper_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBox_Blueprint_C__pf3730827578, b0l__K2Node_CustomEvent_Overlapper_2__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBox_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_Overlapper_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper_1__pf = { "K2Node_CustomEvent_Overlapper_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBox_Blueprint_C__pf3730827578, b0l__K2Node_CustomEvent_Overlapper_1__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBox_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_Overlapper" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper__pf = { "K2Node_CustomEvent_Overlapper", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerBox_Blueprint_C__pf3730827578, b0l__K2Node_CustomEvent_Overlapper__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__LeftxHand__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__RightxHand__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__LeftxPointer__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__RightxPointer__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__RightxHandxActive__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__LeftxHandxActive__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Indexer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::NewProp_b0l__K2Node_CustomEvent_Overlapper__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerBox_Blueprint_C__pf3730827578>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::ClassParams = {
		&ATriggerBox_Blueprint_C__pf3730827578::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Blueprints/TriggerBox_Blueprint"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("TriggerBox_Blueprint_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ATriggerBox_Blueprint_C__pf3730827578, TEXT("TriggerBox_Blueprint_C"), 1071366119);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ATriggerBox_Blueprint_C__pf3730827578>()
	{
		return ATriggerBox_Blueprint_C__pf3730827578::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerBox_Blueprint_C__pf3730827578(Z_Construct_UClass_ATriggerBox_Blueprint_C__pf3730827578, &ATriggerBox_Blueprint_C__pf3730827578::StaticClass, TEXT("/Game/Stutter_Speak_Content/Blueprints/TriggerBox_Blueprint"), TEXT("TriggerBox_Blueprint_C"), true, TEXT("/Game/Stutter_Speak_Content/Blueprints/TriggerBox_Blueprint"), TEXT("/Game/Stutter_Speak_Content/Blueprints/TriggerBox_Blueprint.TriggerBox_Blueprint_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerBox_Blueprint_C__pf3730827578);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
