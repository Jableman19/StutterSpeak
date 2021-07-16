// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/FloppyHolder_Blueprint__pf3730827578.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloppyHolder_Blueprint__pf3730827578() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(AFloppyHolder_Blueprint_C__pf3730827578::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFloppyHolder_Blueprint_C__pf3730827578::execbpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AFloppyHolder_Blueprint_C__pf3730827578::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void AFloppyHolder_Blueprint_C__pf3730827578::StaticRegisterNativesAFloppyHolder_Blueprint_C__pf3730827578()
	{
		UClass* Class = AFloppyHolder_Blueprint_C__pf3730827578::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_FloppyHolder_Blueprint_0", &AFloppyHolder_Blueprint_C__pf3730827578::execbpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0 },
			{ "ReceiveBeginPlay", &AFloppyHolder_Blueprint_C__pf3730827578::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0_Statics
	{
		struct FloppyHolder_Blueprint_C__pf3730827578_eventbpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(FloppyHolder_Blueprint_C__pf3730827578_eventbpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_FloppyHolder_Blueprint_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578, nullptr, "ExecuteUbergraph_FloppyHolder_Blueprint_0", nullptr, nullptr, sizeof(FloppyHolder_Blueprint_C__pf3730827578_eventbpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0_Parms), Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_FloppyHolder_Blueprint_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_NoRegister()
	{
		return AFloppyHolder_Blueprint_C__pf3730827578::StaticClass();
	}
	struct Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__10__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__10__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__9__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__9__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__8__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__8__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__7__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__7__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__6__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__6__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__1__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Locations__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Locations__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Locations__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Rotations__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Rotations__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Rotations__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TagxNumber__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__TagxNumber__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Loop_Counter_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Array_Index_Variable__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetComponentsByTag_ReturnValue__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetComponentsByTag_ReturnValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetComponentsByTag_ReturnValue__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ExecuteUbergraph_FloppyHolder_Blueprint__pf_0, "ExecuteUbergraph_FloppyHolder_Blueprint_0" }, // 4175785887
		{ &Z_Construct_UFunction_AFloppyHolder_Blueprint_C__pf3730827578_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 873724675
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "FloppyHolder_Blueprint__pf3730827578.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "FloppyHolder_Blueprint_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Blueprints/FloppyHolder_Blueprint.FloppyHolder_Blueprint_C" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__10__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "10" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__10__pf = { "10", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppyHolder_Blueprint_C__pf3730827578, bpv__10__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__10__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__10__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__9__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "9" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__9__pf = { "9", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppyHolder_Blueprint_C__pf3730827578, bpv__9__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__9__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__9__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__8__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "8" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__8__pf = { "8", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppyHolder_Blueprint_C__pf3730827578, bpv__8__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__8__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__8__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__7__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "7" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__7__pf = { "7", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppyHolder_Blueprint_C__pf3730827578, bpv__7__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__7__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__7__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__6__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__6__pf = { "6", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppyHolder_Blueprint_C__pf3730827578, bpv__6__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__6__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__6__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__5__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "5" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__5__pf = { "5", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppyHolder_Blueprint_C__pf3730827578, bpv__5__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__4__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "4" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__4__pf = { "4", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppyHolder_Blueprint_C__pf3730827578, bpv__4__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__3__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__3__pf = { "3", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppyHolder_Blueprint_C__pf3730827578, bpv__3__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__2__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__2__pf = { "2", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppyHolder_Blueprint_C__pf3730827578, bpv__2__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__1__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__1__pf = { "1", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppyHolder_Blueprint_C__pf3730827578, bpv__1__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__1__pf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Locations__pf_Inner = { "bpv__Locations__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Locations__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Locations" },
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Locations" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Locations__pf = { "Locations", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppyHolder_Blueprint_C__pf3730827578, bpv__Locations__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Locations__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Locations__pf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Rotations__pf_Inner = { "bpv__Rotations__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Rotations__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Rotations" },
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Rotations" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Rotations__pf = { "Rotations", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppyHolder_Blueprint_C__pf3730827578, bpv__Rotations__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Rotations__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Rotations__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__TagxNumber__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Tag Number" },
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Tag Number" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__TagxNumber__pfT = { "Tag Number", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppyHolder_Blueprint_C__pf3730827578, bpv__TagxNumber__pfT), METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__TagxNumber__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__TagxNumber__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "Temp_int_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_int_Variable__pf = { "Temp_int_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppyHolder_Blueprint_C__pf3730827578, b0l__Temp_int_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "Temp_int_Loop_Counter_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf = { "Temp_int_Loop_Counter_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppyHolder_Blueprint_C__pf3730827578, b0l__Temp_int_Loop_Counter_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "Temp_bool_True_if_break_was_hit_Variable" },
	};
#endif
	void Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_SetBit(void* Obj)
	{
		((AFloppyHolder_Blueprint_C__pf3730827578*)Obj)->b0l__Temp_bool_True_if_break_was_hit_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf = { "Temp_bool_True_if_break_was_hit_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloppyHolder_Blueprint_C__pf3730827578), &Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "Temp_int_Array_Index_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf = { "Temp_int_Array_Index_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppyHolder_Blueprint_C__pf3730827578, b0l__Temp_int_Array_Index_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetComponentsByTag_ReturnValue__pf_Inner = { "b0l__CallFunc_GetComponentsByTag_ReturnValue__pf", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetComponentsByTag_ReturnValue__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_GetComponentsByTag_ReturnValue" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetComponentsByTag_ReturnValue__pf = { "CallFunc_GetComponentsByTag_ReturnValue", nullptr, (EPropertyFlags)0x0010008000202008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppyHolder_Blueprint_C__pf3730827578, b0l__CallFunc_GetComponentsByTag_ReturnValue__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetComponentsByTag_ReturnValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetComponentsByTag_ReturnValue__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FloppyHolder_Blueprint__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloppyHolder_Blueprint_C__pf3730827578, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__10__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__9__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__8__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__7__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__6__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Locations__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Locations__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Rotations__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__Rotations__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_bpv__TagxNumber__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_int_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_bool_True_if_break_was_hit_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetComponentsByTag_ReturnValue__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetComponentsByTag_ReturnValue__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloppyHolder_Blueprint_C__pf3730827578>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::ClassParams = {
		&AFloppyHolder_Blueprint_C__pf3730827578::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Blueprints/FloppyHolder_Blueprint"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("FloppyHolder_Blueprint_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AFloppyHolder_Blueprint_C__pf3730827578, TEXT("FloppyHolder_Blueprint_C"), 2340796369);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AFloppyHolder_Blueprint_C__pf3730827578>()
	{
		return AFloppyHolder_Blueprint_C__pf3730827578::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloppyHolder_Blueprint_C__pf3730827578(Z_Construct_UClass_AFloppyHolder_Blueprint_C__pf3730827578, &AFloppyHolder_Blueprint_C__pf3730827578::StaticClass, TEXT("/Game/Stutter_Speak_Content/Blueprints/FloppyHolder_Blueprint"), TEXT("FloppyHolder_Blueprint_C"), true, TEXT("/Game/Stutter_Speak_Content/Blueprints/FloppyHolder_Blueprint"), TEXT("/Game/Stutter_Speak_Content/Blueprints/FloppyHolder_Blueprint.FloppyHolder_Blueprint_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloppyHolder_Blueprint_C__pf3730827578);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
