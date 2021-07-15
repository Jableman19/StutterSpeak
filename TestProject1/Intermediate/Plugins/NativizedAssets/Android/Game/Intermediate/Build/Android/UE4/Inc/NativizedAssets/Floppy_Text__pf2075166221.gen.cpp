// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Floppy_Text__pf2075166221.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloppy_Text__pf2075166221() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UFloppy_Text_C__pf2075166221_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UFloppy_Text_C__pf2075166221();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AReset_Data_Base2_Blueprint_C__pf3730827578_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UReset_Button_Display_C__pf4267528607_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFloppy_Text_C__pf2075166221::execbpf__StoreSpeechNameByProjector__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__StoreSpeechNameByProjector__pf();
		P_NATIVE_END;
	}
	void UFloppy_Text_C__pf2075166221::StaticRegisterNativesUFloppy_Text_C__pf2075166221()
	{
		UClass* Class = UFloppy_Text_C__pf2075166221::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StoreSpeechNameByProjector", &UFloppy_Text_C__pf2075166221::execbpf__StoreSpeechNameByProjector__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFloppy_Text_C__pf2075166221_bpf__StoreSpeechNameByProjector__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloppy_Text_C__pf2075166221_bpf__StoreSpeechNameByProjector__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Floppy_Text__pf2075166221.h" },
		{ "OverrideNativeName", "StoreSpeechNameByProjector" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloppy_Text_C__pf2075166221_bpf__StoreSpeechNameByProjector__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloppy_Text_C__pf2075166221, nullptr, "StoreSpeechNameByProjector", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloppy_Text_C__pf2075166221_bpf__StoreSpeechNameByProjector__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloppy_Text_C__pf2075166221_bpf__StoreSpeechNameByProjector__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloppy_Text_C__pf2075166221_bpf__StoreSpeechNameByProjector__pf()
	{
		UObject* Outer = Z_Construct_UClass_UFloppy_Text_C__pf2075166221();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "StoreSpeechNameByProjector" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloppy_Text_C__pf2075166221_bpf__StoreSpeechNameByProjector__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFloppy_Text_C__pf2075166221_NoRegister()
	{
		return UFloppy_Text_C__pf2075166221::StaticClass();
	}
	struct Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_0__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_0__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OrignalxName__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__OrignalxName__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FloppyxName__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__FloppyxName__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Reset__pf_MetaData[];
#endif
		static void NewProp_bpv__Reset__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Reset__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsReset_Button_Display__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsReset_Button_Display__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFloppy_Text_C__pf2075166221_bpf__StoreSpeechNameByProjector__pf, "StoreSpeechNameByProjector" }, // 1498162185
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Floppy_Text__pf2075166221.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Floppy_Text__pf2075166221.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Floppy_Text_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Widgets/Floppy_Text.Floppy_Text_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__TextBlock_0__pf_MetaData[] = {
		{ "DisplayName", "TextBlock_0" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Floppy_Text__pf2075166221.h" },
		{ "OverrideNativeName", "TextBlock_0" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__TextBlock_0__pf = { "TextBlock_0", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloppy_Text_C__pf2075166221, bpv__TextBlock_0__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__TextBlock_0__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__TextBlock_0__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__OrignalxName__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Orignal Name" },
		{ "ModuleRelativePath", "Public/Floppy_Text__pf2075166221.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Orignal Name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__OrignalxName__pfT = { "Orignal Name", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloppy_Text_C__pf2075166221, bpv__OrignalxName__pfT), METADATA_PARAMS(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__OrignalxName__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__OrignalxName__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__FloppyxName__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Floppy Name" },
		{ "ModuleRelativePath", "Public/Floppy_Text__pf2075166221.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Floppy Name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__FloppyxName__pfT = { "Floppy Name", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloppy_Text_C__pf2075166221, bpv__FloppyxName__pfT), METADATA_PARAMS(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__FloppyxName__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__FloppyxName__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__Reset__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Reset" },
		{ "ModuleRelativePath", "Public/Floppy_Text__pf2075166221.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Reset" },
	};
#endif
	void Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__Reset__pf_SetBit(void* Obj)
	{
		((UFloppy_Text_C__pf2075166221*)Obj)->bpv__Reset__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__Reset__pf = { "Reset", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFloppy_Text_C__pf2075166221), &Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__Reset__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__Reset__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__Reset__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Floppy_Text__pf2075166221.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_GI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf = { "K2Node_DynamicCast_AsMenu_GI", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloppy_Text_C__pf2075166221, b0l__K2Node_DynamicCast_AsMenu_GI__pf), Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Floppy_Text__pf2075166221.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((UFloppy_Text_C__pf2075166221*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFloppy_Text_C__pf2075166221), &Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AReset_Data_Base2_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Floppy_Text__pf2075166221.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloppy_Text_C__pf2075166221, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Floppy_Text__pf2075166221.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloppy_Text_C__pf2075166221, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_AReset_Data_Base2_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Floppy_Text__pf2075166221.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint__pf = { "K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloppy_Text_C__pf2075166221, b0l__K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint__pf), Z_Construct_UClass_AReset_Data_Base2_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Floppy_Text__pf2075166221.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((UFloppy_Text_C__pf2075166221*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFloppy_Text_C__pf2075166221), &Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_AsReset_Button_Display__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Floppy_Text__pf2075166221.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsReset_Button_Display" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_AsReset_Button_Display__pf = { "K2Node_DynamicCast_AsReset_Button_Display", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloppy_Text_C__pf2075166221, b0l__K2Node_DynamicCast_AsReset_Button_Display__pf), Z_Construct_UClass_UReset_Button_Display_C__pf4267528607_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_AsReset_Button_Display__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_AsReset_Button_Display__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Floppy_Text__pf2075166221.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_2" },
	};
#endif
	void Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj)
	{
		((UFloppy_Text_C__pf2075166221*)Obj)->b0l__K2Node_DynamicCast_bSuccess_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf = { "K2Node_DynamicCast_bSuccess_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFloppy_Text_C__pf2075166221), &Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__TextBlock_0__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__OrignalxName__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__FloppyxName__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_bpv__Reset__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_AsReset_Data_Base_2_Blueprint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_AsReset_Button_Display__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloppy_Text_C__pf2075166221>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::ClassParams = {
		&UFloppy_Text_C__pf2075166221::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloppy_Text_C__pf2075166221()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Widgets/Floppy_Text"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Floppy_Text_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFloppy_Text_C__pf2075166221_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UFloppy_Text_C__pf2075166221, TEXT("Floppy_Text_C"), 1694525982);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UFloppy_Text_C__pf2075166221>()
	{
		return UFloppy_Text_C__pf2075166221::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFloppy_Text_C__pf2075166221(Z_Construct_UClass_UFloppy_Text_C__pf2075166221, &UFloppy_Text_C__pf2075166221::StaticClass, TEXT("/Game/Stutter_Speak_Content/Widgets/Floppy_Text"), TEXT("Floppy_Text_C"), true, TEXT("/Game/Stutter_Speak_Content/Widgets/Floppy_Text"), TEXT("/Game/Stutter_Speak_Content/Widgets/Floppy_Text.Floppy_Text_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloppy_Text_C__pf2075166221);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
