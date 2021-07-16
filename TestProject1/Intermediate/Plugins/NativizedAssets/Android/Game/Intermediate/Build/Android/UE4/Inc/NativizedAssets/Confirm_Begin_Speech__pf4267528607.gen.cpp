// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Confirm_Begin_Speech__pf4267528607.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfirm_Begin_Speech__pf4267528607() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UConfirm_Begin_Speech_C__pf4267528607::execbpf__Construct__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Construct__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfirm_Begin_Speech_C__pf4267528607::execbpf__HideByProjectorScreen__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__Timing__pf);
		P_GET_UBOOL(Z_Param_bpp__Done__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__HideByProjectorScreen__pf(Z_Param_bpp__Timing__pf,Z_Param_bpp__Done__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConfirm_Begin_Speech_C__pf4267528607::execbpf__ShowByProjectorScreen__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__Timing__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ShowByProjectorScreen__pf(Z_Param_bpp__Timing__pf);
		P_NATIVE_END;
	}
	static FName NAME_UConfirm_Begin_Speech_C__pf4267528607_bpf__Construct__pf = FName(TEXT("Construct"));
	void UConfirm_Begin_Speech_C__pf4267528607::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UConfirm_Begin_Speech_C__pf4267528607_bpf__Construct__pf),NULL);
	}
	void UConfirm_Begin_Speech_C__pf4267528607::StaticRegisterNativesUConfirm_Begin_Speech_C__pf4267528607()
	{
		UClass* Class = UConfirm_Begin_Speech_C__pf4267528607::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Construct", &UConfirm_Begin_Speech_C__pf4267528607::execbpf__Construct__pf },
			{ "HideByProjectorScreen", &UConfirm_Begin_Speech_C__pf4267528607::execbpf__HideByProjectorScreen__pf },
			{ "ShowByProjectorScreen", &UConfirm_Begin_Speech_C__pf4267528607::execbpf__ShowByProjectorScreen__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__Construct__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__Construct__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Called after the underlying slate widget is constructed.  Depending on how the slate object is usedt * this event may be called multiple times due to adding and removing from the hierarchy.t * If you need a true called-once-when-created event, use OnInitialized.t */" },
		{ "CppFromBpEvent", "" },
		{ "Keywords", "Begin Play" },
		{ "ModuleRelativePath", "Public/Confirm_Begin_Speech__pf4267528607.h" },
		{ "OverrideNativeName", "Construct" },
		{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__Construct__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607, nullptr, "Construct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__Construct__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__Construct__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Construct" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__Construct__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__HideByProjectorScreen__pf_Statics
	{
		struct Confirm_Begin_Speech_C__pf4267528607_eventbpf__HideByProjectorScreen__pf_Parms
		{
			float bpp__Timing__pf;
			bool bpp__Done__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__Timing__pf;
		static void NewProp_bpp__Done__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__Done__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__HideByProjectorScreen__pf_Statics::NewProp_bpp__Timing__pf = { "bpp__Timing__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Confirm_Begin_Speech_C__pf4267528607_eventbpf__HideByProjectorScreen__pf_Parms, bpp__Timing__pf), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__HideByProjectorScreen__pf_Statics::NewProp_bpp__Done__pf_SetBit(void* Obj)
	{
		((Confirm_Begin_Speech_C__pf4267528607_eventbpf__HideByProjectorScreen__pf_Parms*)Obj)->bpp__Done__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__HideByProjectorScreen__pf_Statics::NewProp_bpp__Done__pf = { "bpp__Done__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(Confirm_Begin_Speech_C__pf4267528607_eventbpf__HideByProjectorScreen__pf_Parms), &Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__HideByProjectorScreen__pf_Statics::NewProp_bpp__Done__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__HideByProjectorScreen__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__HideByProjectorScreen__pf_Statics::NewProp_bpp__Timing__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__HideByProjectorScreen__pf_Statics::NewProp_bpp__Done__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__HideByProjectorScreen__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Confirm_Begin_Speech__pf4267528607.h" },
		{ "OverrideNativeName", "HideByProjectorScreen" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__HideByProjectorScreen__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607, nullptr, "HideByProjectorScreen", nullptr, nullptr, sizeof(Confirm_Begin_Speech_C__pf4267528607_eventbpf__HideByProjectorScreen__pf_Parms), Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__HideByProjectorScreen__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__HideByProjectorScreen__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__HideByProjectorScreen__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__HideByProjectorScreen__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__HideByProjectorScreen__pf()
	{
		UObject* Outer = Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "HideByProjectorScreen" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__HideByProjectorScreen__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__ShowByProjectorScreen__pf_Statics
	{
		struct Confirm_Begin_Speech_C__pf4267528607_eventbpf__ShowByProjectorScreen__pf_Parms
		{
			float bpp__Timing__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__Timing__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__ShowByProjectorScreen__pf_Statics::NewProp_bpp__Timing__pf = { "bpp__Timing__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Confirm_Begin_Speech_C__pf4267528607_eventbpf__ShowByProjectorScreen__pf_Parms, bpp__Timing__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__ShowByProjectorScreen__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__ShowByProjectorScreen__pf_Statics::NewProp_bpp__Timing__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__ShowByProjectorScreen__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Confirm_Begin_Speech__pf4267528607.h" },
		{ "OverrideNativeName", "ShowByProjectorScreen" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__ShowByProjectorScreen__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607, nullptr, "ShowByProjectorScreen", nullptr, nullptr, sizeof(Confirm_Begin_Speech_C__pf4267528607_eventbpf__ShowByProjectorScreen__pf_Parms), Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__ShowByProjectorScreen__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__ShowByProjectorScreen__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__ShowByProjectorScreen__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__ShowByProjectorScreen__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__ShowByProjectorScreen__pf()
	{
		UObject* Outer = Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ShowByProjectorScreen" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__ShowByProjectorScreen__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_NoRegister()
	{
		return UConfirm_Begin_Speech_C__pf4267528607::StaticClass();
	}
	struct Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MessgeText__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MessgeText__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Opacity__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Opacity__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Timing_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_CustomEvent_Timing_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Done__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_CustomEvent_Done__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_CustomEvent_Done__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Timing__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_CustomEvent_Timing__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__Construct__pf, "Construct" }, // 456694372
		{ &Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__HideByProjectorScreen__pf, "HideByProjectorScreen" }, // 3672701008
		{ &Z_Construct_UFunction_UConfirm_Begin_Speech_C__pf4267528607_bpf__ShowByProjectorScreen__pf, "ShowByProjectorScreen" }, // 1519238904
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Confirm_Begin_Speech__pf4267528607.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Confirm_Begin_Speech__pf4267528607.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Confirm_Begin_Speech_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Confirm_Begin_Speech.Confirm_Begin_Speech_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_bpv__MessgeText__pf_MetaData[] = {
		{ "Category", "Confirm_Begin_Speech" },
		{ "DisplayName", "Messge Text" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Confirm_Begin_Speech__pf4267528607.h" },
		{ "OverrideNativeName", "MessgeText" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_bpv__MessgeText__pf = { "MessgeText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConfirm_Begin_Speech_C__pf4267528607, bpv__MessgeText__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_bpv__MessgeText__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_bpv__MessgeText__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_bpv__Opacity__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Opacity" },
		{ "ModuleRelativePath", "Public/Confirm_Begin_Speech__pf4267528607.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Opacity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_bpv__Opacity__pf = { "Opacity", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConfirm_Begin_Speech_C__pf4267528607, bpv__Opacity__pf), METADATA_PARAMS(Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_bpv__Opacity__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_bpv__Opacity__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_b0l__K2Node_CustomEvent_Timing_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Begin_Speech__pf4267528607.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_Timing_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_b0l__K2Node_CustomEvent_Timing_1__pf = { "K2Node_CustomEvent_Timing_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConfirm_Begin_Speech_C__pf4267528607, b0l__K2Node_CustomEvent_Timing_1__pf), METADATA_PARAMS(Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_b0l__K2Node_CustomEvent_Timing_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_b0l__K2Node_CustomEvent_Timing_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_b0l__K2Node_CustomEvent_Done__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Begin_Speech__pf4267528607.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_Done" },
	};
#endif
	void Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_b0l__K2Node_CustomEvent_Done__pf_SetBit(void* Obj)
	{
		((UConfirm_Begin_Speech_C__pf4267528607*)Obj)->b0l__K2Node_CustomEvent_Done__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_b0l__K2Node_CustomEvent_Done__pf = { "K2Node_CustomEvent_Done", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConfirm_Begin_Speech_C__pf4267528607), &Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_b0l__K2Node_CustomEvent_Done__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_b0l__K2Node_CustomEvent_Done__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_b0l__K2Node_CustomEvent_Done__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_b0l__K2Node_CustomEvent_Timing__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Begin_Speech__pf4267528607.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_Timing" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_b0l__K2Node_CustomEvent_Timing__pf = { "K2Node_CustomEvent_Timing", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConfirm_Begin_Speech_C__pf4267528607, b0l__K2Node_CustomEvent_Timing__pf), METADATA_PARAMS(Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_b0l__K2Node_CustomEvent_Timing__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_b0l__K2Node_CustomEvent_Timing__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_bpv__MessgeText__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_bpv__Opacity__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_b0l__K2Node_CustomEvent_Timing_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_b0l__K2Node_CustomEvent_Done__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::NewProp_b0l__K2Node_CustomEvent_Timing__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConfirm_Begin_Speech_C__pf4267528607>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::ClassParams = {
		&UConfirm_Begin_Speech_C__pf4267528607::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Confirm_Begin_Speech"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Confirm_Begin_Speech_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UConfirm_Begin_Speech_C__pf4267528607, TEXT("Confirm_Begin_Speech_C"), 1373172529);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UConfirm_Begin_Speech_C__pf4267528607>()
	{
		return UConfirm_Begin_Speech_C__pf4267528607::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConfirm_Begin_Speech_C__pf4267528607(Z_Construct_UClass_UConfirm_Begin_Speech_C__pf4267528607, &UConfirm_Begin_Speech_C__pf4267528607::StaticClass, TEXT("/Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Confirm_Begin_Speech"), TEXT("Confirm_Begin_Speech_C"), true, TEXT("/Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Confirm_Begin_Speech"), TEXT("/Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Confirm_Begin_Speech.Confirm_Begin_Speech_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConfirm_Begin_Speech_C__pf4267528607);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
