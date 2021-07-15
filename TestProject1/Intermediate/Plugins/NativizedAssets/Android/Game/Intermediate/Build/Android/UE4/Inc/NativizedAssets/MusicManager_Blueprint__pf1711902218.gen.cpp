// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/MusicManager_Blueprint__pf1711902218.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMusicManager_Blueprint__pf1711902218() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMusicManager_Blueprint_C__pf1711902218::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMusicManager_Blueprint_C__pf1711902218::execbpf__MenuMusicCall__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__MenuMusicCall__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMusicManager_Blueprint_C__pf1711902218::execbpf__MusicFade__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__MusicFade__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMusicManager_Blueprint_C__pf1711902218::execbpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_AMusicManager_Blueprint_C__pf1711902218_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AMusicManager_Blueprint_C__pf1711902218::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMusicManager_Blueprint_C__pf1711902218_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void AMusicManager_Blueprint_C__pf1711902218::StaticRegisterNativesAMusicManager_Blueprint_C__pf1711902218()
	{
		UClass* Class = AMusicManager_Blueprint_C__pf1711902218::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_MusicManager_Blueprint_0", &AMusicManager_Blueprint_C__pf1711902218::execbpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0 },
			{ "MenuMusicCall", &AMusicManager_Blueprint_C__pf1711902218::execbpf__MenuMusicCall__pf },
			{ "MusicFade", &AMusicManager_Blueprint_C__pf1711902218::execbpf__MusicFade__pf },
			{ "ReceiveBeginPlay", &AMusicManager_Blueprint_C__pf1711902218::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0_Statics
	{
		struct MusicManager_Blueprint_C__pf1711902218_eventbpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MusicManager_Blueprint_C__pf1711902218_eventbpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MusicManager_Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_MusicManager_Blueprint_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218, nullptr, "ExecuteUbergraph_MusicManager_Blueprint_0", nullptr, nullptr, sizeof(MusicManager_Blueprint_C__pf1711902218_eventbpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0_Parms), Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_MusicManager_Blueprint_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__MenuMusicCall__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__MenuMusicCall__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MusicManager_Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "MenuMusicCall" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__MenuMusicCall__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218, nullptr, "MenuMusicCall", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__MenuMusicCall__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__MenuMusicCall__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__MenuMusicCall__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "MenuMusicCall" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__MenuMusicCall__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__MusicFade__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__MusicFade__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MusicManager_Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "MusicFade" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__MusicFade__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218, nullptr, "MusicFade", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__MusicFade__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__MusicFade__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__MusicFade__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "MusicFade" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__MusicFade__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/MusicManager_Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_NoRegister()
	{
		return AMusicManager_Blueprint_C__pf1711902218::StaticClass();
	}
	struct Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_CreateSound2D_ReturnValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_CreateSound2D_ReturnValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ExecuteUbergraph_MusicManager_Blueprint__pf_0, "ExecuteUbergraph_MusicManager_Blueprint_0" }, // 1956896615
		{ &Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__MenuMusicCall__pf, "MenuMusicCall" }, // 485306274
		{ &Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__MusicFade__pf, "MusicFade" }, // 369795609
		{ &Z_Construct_UFunction_AMusicManager_Blueprint_C__pf1711902218_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3837979025
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MusicManager_Blueprint__pf1711902218.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MusicManager_Blueprint__pf1711902218.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "MusicManager_Blueprint_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Managers/MusicManager_Blueprint.MusicManager_Blueprint_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MusicManager_Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMusicManager_Blueprint_C__pf1711902218, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MusicManager_Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_GI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf = { "K2Node_DynamicCast_AsMenu_GI", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMusicManager_Blueprint_C__pf1711902218, b0l__K2Node_DynamicCast_AsMenu_GI__pf), Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MusicManager_Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AMusicManager_Blueprint_C__pf1711902218*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMusicManager_Blueprint_C__pf1711902218), &Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_CreateSound2D_ReturnValue__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MusicManager_Blueprint__pf1711902218.h" },
		{ "OverrideNativeName", "CallFunc_CreateSound2D_ReturnValue" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_CreateSound2D_ReturnValue__pf = { "CallFunc_CreateSound2D_ReturnValue", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMusicManager_Blueprint_C__pf1711902218, b0l__CallFunc_CreateSound2D_ReturnValue__pf), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_CreateSound2D_ReturnValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_CreateSound2D_ReturnValue__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::NewProp_b0l__CallFunc_CreateSound2D_ReturnValue__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMusicManager_Blueprint_C__pf1711902218>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::ClassParams = {
		&AMusicManager_Blueprint_C__pf1711902218::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Managers/MusicManager_Blueprint"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("MusicManager_Blueprint_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AMusicManager_Blueprint_C__pf1711902218, TEXT("MusicManager_Blueprint_C"), 3222951051);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AMusicManager_Blueprint_C__pf1711902218>()
	{
		return AMusicManager_Blueprint_C__pf1711902218::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMusicManager_Blueprint_C__pf1711902218(Z_Construct_UClass_AMusicManager_Blueprint_C__pf1711902218, &AMusicManager_Blueprint_C__pf1711902218::StaticClass, TEXT("/Game/Stutter_Speak_Content/Managers/MusicManager_Blueprint"), TEXT("MusicManager_Blueprint_C"), true, TEXT("/Game/Stutter_Speak_Content/Managers/MusicManager_Blueprint"), TEXT("/Game/Stutter_Speak_Content/Managers/MusicManager_Blueprint.MusicManager_Blueprint_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMusicManager_Blueprint_C__pf1711902218);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
