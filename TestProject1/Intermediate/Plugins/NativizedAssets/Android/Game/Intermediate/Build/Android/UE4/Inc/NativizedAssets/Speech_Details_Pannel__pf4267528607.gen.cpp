// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Speech_Details_Pannel__pf4267528607.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeech_Details_Pannel__pf4267528607() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USwitcher_C__pf517162645_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AProjectorScreen_Blueprint_C__pf3730827578_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USpeech_Details_Pannel_C__pf4267528607::execbpf__SetSpeechNameByMenuGI__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SetSpeechNameByMenuGI__pf();
		P_NATIVE_END;
	}
	void USpeech_Details_Pannel_C__pf4267528607::StaticRegisterNativesUSpeech_Details_Pannel_C__pf4267528607()
	{
		UClass* Class = USpeech_Details_Pannel_C__pf4267528607::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSpeechNameByMenuGI", &USpeech_Details_Pannel_C__pf4267528607::execbpf__SetSpeechNameByMenuGI__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpeech_Details_Pannel_C__pf4267528607_bpf__SetSpeechNameByMenuGI__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeech_Details_Pannel_C__pf4267528607_bpf__SetSpeechNameByMenuGI__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Speech_Details_Pannel__pf4267528607.h" },
		{ "OverrideNativeName", "SetSpeechNameByMenuGI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeech_Details_Pannel_C__pf4267528607_bpf__SetSpeechNameByMenuGI__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607, nullptr, "SetSpeechNameByMenuGI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeech_Details_Pannel_C__pf4267528607_bpf__SetSpeechNameByMenuGI__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeech_Details_Pannel_C__pf4267528607_bpf__SetSpeechNameByMenuGI__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeech_Details_Pannel_C__pf4267528607_bpf__SetSpeechNameByMenuGI__pf()
	{
		UObject* Outer = Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SetSpeechNameByMenuGI" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpeech_Details_Pannel_C__pf4267528607_bpf__SetSpeechNameByMenuGI__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_NoRegister()
	{
		return USpeech_Details_Pannel_C__pf4267528607::StaticClass();
	}
	struct Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpeechTitle__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SpeechTitle__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Switcher__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Switcher__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpeechxName__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__SpeechxName__pfT;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpeech_Details_Pannel_C__pf4267528607_bpf__SetSpeechNameByMenuGI__pf, "SetSpeechNameByMenuGI" }, // 412990542
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Speech_Details_Pannel__pf4267528607.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Speech_Details_Pannel__pf4267528607.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Speech_Details_Pannel_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Speech_Details_Pannel.Speech_Details_Pannel_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_bpv__SpeechTitle__pf_MetaData[] = {
		{ "DisplayName", "Speech Title" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Speech_Details_Pannel__pf4267528607.h" },
		{ "OverrideNativeName", "SpeechTitle" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_bpv__SpeechTitle__pf = { "SpeechTitle", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeech_Details_Pannel_C__pf4267528607, bpv__SpeechTitle__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_bpv__SpeechTitle__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_bpv__SpeechTitle__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_bpv__Switcher__pf_MetaData[] = {
		{ "Category", "Speech_Details_Pannel" },
		{ "DisplayName", "Switcher" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Speech_Details_Pannel__pf4267528607.h" },
		{ "OverrideNativeName", "Switcher" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_bpv__Switcher__pf = { "Switcher", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeech_Details_Pannel_C__pf4267528607, bpv__Switcher__pf), Z_Construct_UClass_USwitcher_C__pf517162645_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_bpv__Switcher__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_bpv__Switcher__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_bpv__SpeechxName__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Speech Name" },
		{ "ModuleRelativePath", "Public/Speech_Details_Pannel__pf4267528607.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Speech Name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_bpv__SpeechxName__pfT = { "Speech Name", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeech_Details_Pannel_C__pf4267528607, bpv__SpeechxName__pfT), METADATA_PARAMS(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_bpv__SpeechxName__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_bpv__SpeechxName__pfT_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AProjectorScreen_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Speech_Details_Pannel__pf4267528607.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeech_Details_Pannel_C__pf4267528607, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Speech_Details_Pannel__pf4267528607.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeech_Details_Pannel_C__pf4267528607, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_AProjectorScreen_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Speech_Details_Pannel__pf4267528607.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsProjector_Screen_Blueprint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf = { "K2Node_DynamicCast_AsProjector_Screen_Blueprint", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeech_Details_Pannel_C__pf4267528607, b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf), Z_Construct_UClass_AProjectorScreen_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Speech_Details_Pannel__pf4267528607.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((USpeech_Details_Pannel_C__pf4267528607*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpeech_Details_Pannel_C__pf4267528607), &Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Speech_Details_Pannel__pf4267528607.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_GI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf = { "K2Node_DynamicCast_AsMenu_GI", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeech_Details_Pannel_C__pf4267528607, b0l__K2Node_DynamicCast_AsMenu_GI__pf), Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Speech_Details_Pannel__pf4267528607.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((USpeech_Details_Pannel_C__pf4267528607*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpeech_Details_Pannel_C__pf4267528607), &Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_bpv__SpeechTitle__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_bpv__Switcher__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_bpv__SpeechxName__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeech_Details_Pannel_C__pf4267528607>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::ClassParams = {
		&USpeech_Details_Pannel_C__pf4267528607::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Speech_Details_Pannel"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Speech_Details_Pannel_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(USpeech_Details_Pannel_C__pf4267528607, TEXT("Speech_Details_Pannel_C"), 1259332697);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<USpeech_Details_Pannel_C__pf4267528607>()
	{
		return USpeech_Details_Pannel_C__pf4267528607::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpeech_Details_Pannel_C__pf4267528607(Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607, &USpeech_Details_Pannel_C__pf4267528607::StaticClass, TEXT("/Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Speech_Details_Pannel"), TEXT("Speech_Details_Pannel_C"), true, TEXT("/Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Speech_Details_Pannel"), TEXT("/Game/Stutter_Speak_Content/Widgets/Menu_World_Widgets/Speech_Details_Pannel.Speech_Details_Pannel_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpeech_Details_Pannel_C__pf4267528607);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
