// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/SpeechPageW__pf1694860710.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechPageW__pf1694860710() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USpeechPageW_C__pf1694860710_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USpeechPageW_C__pf1694860710();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
// End Cross Module References
	DEFINE_FUNCTION(USpeechPageW_C__pf1694860710::execbpf__GetText_0__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->bpf__GetText_0__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechPageW_C__pf1694860710::execbpf__OnInitialized__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__OnInitialized__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechPageW_C__pf1694860710::execbpf__PreviousPageByBackButton__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__PreviousPageByBackButton__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechPageW_C__pf1694860710::execbpf__NextPageByNextButton__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__NextPageByNextButton__pf();
		P_NATIVE_END;
	}
	static FName NAME_USpeechPageW_C__pf1694860710_bpf__OnInitialized__pf = FName(TEXT("OnInitialized"));
	void USpeechPageW_C__pf1694860710::eventbpf__OnInitialized__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_USpeechPageW_C__pf1694860710_bpf__OnInitialized__pf),NULL);
	}
	void USpeechPageW_C__pf1694860710::StaticRegisterNativesUSpeechPageW_C__pf1694860710()
	{
		UClass* Class = USpeechPageW_C__pf1694860710::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetText_0", &USpeechPageW_C__pf1694860710::execbpf__GetText_0__pf },
			{ "NextPageByNextButton", &USpeechPageW_C__pf1694860710::execbpf__NextPageByNextButton__pf },
			{ "OnInitialized", &USpeechPageW_C__pf1694860710::execbpf__OnInitialized__pf },
			{ "PreviousPageByBackButton", &USpeechPageW_C__pf1694860710::execbpf__PreviousPageByBackButton__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__GetText_0__pf_Statics
	{
		struct SpeechPageW_C__pf1694860710_eventbpf__GetText_0__pf_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__GetText_0__pf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(SpeechPageW_C__pf1694860710_eventbpf__GetText_0__pf_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__GetText_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__GetText_0__pf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__GetText_0__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "GetText_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__GetText_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechPageW_C__pf1694860710, nullptr, "GetText_0", nullptr, nullptr, sizeof(SpeechPageW_C__pf1694860710_eventbpf__GetText_0__pf_Parms), Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__GetText_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__GetText_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__GetText_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__GetText_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__GetText_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_USpeechPageW_C__pf1694860710();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GetText_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__GetText_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__NextPageByNextButton__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__NextPageByNextButton__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "NextPageByNextButton" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__NextPageByNextButton__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechPageW_C__pf1694860710, nullptr, "NextPageByNextButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__NextPageByNextButton__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__NextPageByNextButton__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__NextPageByNextButton__pf()
	{
		UObject* Outer = Z_Construct_UClass_USpeechPageW_C__pf1694860710();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "NextPageByNextButton" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__NextPageByNextButton__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__OnInitialized__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__OnInitialized__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/** t * Called once only at game time on non-template instances.t * While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.t * If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.t */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "OnInitialized" },
		{ "ToolTip", "Called once only at game time on non-template instances.While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__OnInitialized__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechPageW_C__pf1694860710, nullptr, "OnInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__OnInitialized__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__OnInitialized__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__OnInitialized__pf()
	{
		UObject* Outer = Z_Construct_UClass_USpeechPageW_C__pf1694860710();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "OnInitialized" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__OnInitialized__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__PreviousPageByBackButton__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__PreviousPageByBackButton__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "PreviousPageByBackButton" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__PreviousPageByBackButton__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechPageW_C__pf1694860710, nullptr, "PreviousPageByBackButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__PreviousPageByBackButton__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__PreviousPageByBackButton__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__PreviousPageByBackButton__pf()
	{
		UObject* Outer = Z_Construct_UClass_USpeechPageW_C__pf1694860710();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "PreviousPageByBackButton" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__PreviousPageByBackButton__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpeechPageW_C__pf1694860710_NoRegister()
	{
		return USpeechPageW_C__pf1694860710::StaticClass();
	}
	struct Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Image_0__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Image_0__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PageNumber__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PageNumber__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBody__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBody__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PageNum__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__PageNum__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PageShown__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__PageShown__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Size__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Size__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable_1__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_SlateFontInfo__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_SlateFontInfo__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__GetText_0__pf, "GetText_0" }, // 1742982409
		{ &Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__NextPageByNextButton__pf, "NextPageByNextButton" }, // 589089977
		{ &Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__OnInitialized__pf, "OnInitialized" }, // 2555775525
		{ &Z_Construct_UFunction_USpeechPageW_C__pf1694860710_bpf__PreviousPageByBackButton__pf, "PreviousPageByBackButton" }, // 1115237890
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SpeechPageW__pf1694860710.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "SpeechPageW_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Widgets/Speech_World/SpeechPageW.SpeechPageW_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__Image_0__pf_MetaData[] = {
		{ "Category", "SpeechPageW" },
		{ "DisplayName", "Image_0" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "Image_0" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__Image_0__pf = { "Image_0", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechPageW_C__pf1694860710, bpv__Image_0__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__Image_0__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__Image_0__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__PageNumber__pf_MetaData[] = {
		{ "DisplayName", "PageNumber" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "PageNumber" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__PageNumber__pf = { "PageNumber", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechPageW_C__pf1694860710, bpv__PageNumber__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__PageNumber__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__PageNumber__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__TextBody__pf_MetaData[] = {
		{ "Category", "SpeechPageW" },
		{ "DisplayName", "TextBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "TextBody" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__TextBody__pf = { "TextBody", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechPageW_C__pf1694860710, bpv__TextBody__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__TextBody__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__TextBody__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__PageNum__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Page Num" },
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PageNum" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__PageNum__pf = { "PageNum", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechPageW_C__pf1694860710, bpv__PageNum__pf), METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__PageNum__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__PageNum__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__PageShown__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Page Shown" },
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PageShown" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__PageShown__pf = { "PageShown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechPageW_C__pf1694860710, bpv__PageShown__pf), METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__PageShown__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__PageShown__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__Size__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Size" },
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Size" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__Size__pf = { "Size", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechPageW_C__pf1694860710, bpv__Size__pf), METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__Size__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__Size__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "Temp_int_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable__pf = { "Temp_int_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechPageW_C__pf1694860710, b0l__Temp_int_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "Temp_int_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable_1__pf = { "Temp_int_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechPageW_C__pf1694860710, b0l__Temp_int_Variable_1__pf), METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_GI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf = { "K2Node_DynamicCast_AsMenu_GI", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechPageW_C__pf1694860710, b0l__K2Node_DynamicCast_AsMenu_GI__pf), Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((USpeechPageW_C__pf1694860710*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpeechPageW_C__pf1694860710), &Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "Temp_int_Variable_2" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable_2__pf = { "Temp_int_Variable_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechPageW_C__pf1694860710, b0l__Temp_int_Variable_2__pf), METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechPageW_C__pf1694860710, b0l__CallFunc_Array_Get_Item__pf), METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "Temp_int_Variable_3" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable_3__pf = { "Temp_int_Variable_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechPageW_C__pf1694860710, b0l__Temp_int_Variable_3__pf), METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_GI_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf = { "K2Node_DynamicCast_AsMenu_GI_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechPageW_C__pf1694860710, b0l__K2Node_DynamicCast_AsMenu_GI_1__pf), Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((USpeechPageW_C__pf1694860710*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpeechPageW_C__pf1694860710), &Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_1" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf = { "CallFunc_Array_Get_Item_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechPageW_C__pf1694860710, b0l__CallFunc_Array_Get_Item_1__pf), METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_GI_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_2__pf = { "K2Node_DynamicCast_AsMenu_GI_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechPageW_C__pf1694860710, b0l__K2Node_DynamicCast_AsMenu_GI_2__pf), Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_2" },
	};
#endif
	void Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj)
	{
		((USpeechPageW_C__pf1694860710*)Obj)->b0l__K2Node_DynamicCast_bSuccess_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf = { "K2Node_DynamicCast_bSuccess_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpeechPageW_C__pf1694860710), &Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_MakeStruct_SlateFontInfo__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeechPageW__pf1694860710.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_SlateFontInfo" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_MakeStruct_SlateFontInfo__pf = { "K2Node_MakeStruct_SlateFontInfo", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechPageW_C__pf1694860710, b0l__K2Node_MakeStruct_SlateFontInfo__pf), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_MakeStruct_SlateFontInfo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_MakeStruct_SlateFontInfo__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__Image_0__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__PageNumber__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__TextBody__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__PageNum__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__PageShown__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_bpv__Size__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__Temp_int_Variable_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::NewProp_b0l__K2Node_MakeStruct_SlateFontInfo__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeechPageW_C__pf1694860710>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::ClassParams = {
		&USpeechPageW_C__pf1694860710::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpeechPageW_C__pf1694860710()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Widgets/Speech_World/SpeechPageW"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("SpeechPageW_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpeechPageW_C__pf1694860710_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(USpeechPageW_C__pf1694860710, TEXT("SpeechPageW_C"), 4073533365);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<USpeechPageW_C__pf1694860710>()
	{
		return USpeechPageW_C__pf1694860710::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpeechPageW_C__pf1694860710(Z_Construct_UClass_USpeechPageW_C__pf1694860710, &USpeechPageW_C__pf1694860710::StaticClass, TEXT("/Game/Stutter_Speak_Content/Widgets/Speech_World/SpeechPageW"), TEXT("SpeechPageW_C"), true, TEXT("/Game/Stutter_Speak_Content/Widgets/Speech_World/SpeechPageW"), TEXT("/Game/Stutter_Speak_Content/Widgets/Speech_World/SpeechPageW.SpeechPageW_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpeechPageW_C__pf1694860710);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
