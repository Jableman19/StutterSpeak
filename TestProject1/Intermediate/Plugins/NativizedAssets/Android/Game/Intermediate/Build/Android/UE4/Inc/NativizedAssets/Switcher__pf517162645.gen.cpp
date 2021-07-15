// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Switcher__pf517162645.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwitcher__pf517162645() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USwitcher_C__pf517162645_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USwitcher_C__pf517162645();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UEffectiveness_Graph_C__pf517162645_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UEye_Contact_Graph_C__pf517162645_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UFluency_Graph_C__pf517162645_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UListViewData_C__pf517162645_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPercentage_Stuttering_Graph_C__pf517162645_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UResultsForSwitcher_C__pf517162645_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UTime_Stuttering_Graph_C__pf517162645_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UTotal_Time_Graph_C__pf517162645_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AProjectorScreen_Blueprint_C__pf3730827578_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
// End Cross Module References
	DEFINE_FUNCTION(USwitcher_C__pf517162645::execbpf__ButtonxSelector__pfT)
	{
		P_GET_OBJECT_REF(UButton,Z_Param_Out_bpp__Buttonxx__pfTQ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ButtonxSelector__pfT(Z_Param_Out_bpp__Buttonxx__pfTQ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USwitcher_C__pf517162645::execbpf__ClearxButtonxColor__pfTT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ClearxButtonxColor__pfTT();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USwitcher_C__pf517162645::execbpf__Construct__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Construct__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USwitcher_C__pf517162645::execbpf__ResetPanelBySpeechDetailsPanel__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ResetPanelBySpeechDetailsPanel__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USwitcher_C__pf517162645::execbpf__IndexRIghtByButton__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__IndexRIghtByButton__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USwitcher_C__pf517162645::execbpf__LeftByButton__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__LeftByButton__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USwitcher_C__pf517162645::execbpf__CreateGraphsByMenuGI__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__CreateGraphsByMenuGI__pf();
		P_NATIVE_END;
	}
	static FName NAME_USwitcher_C__pf517162645_bpf__Construct__pf = FName(TEXT("Construct"));
	void USwitcher_C__pf517162645::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_USwitcher_C__pf517162645_bpf__Construct__pf),NULL);
	}
	void USwitcher_C__pf517162645::StaticRegisterNativesUSwitcher_C__pf517162645()
	{
		UClass* Class = USwitcher_C__pf517162645::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Button Selector", &USwitcher_C__pf517162645::execbpf__ButtonxSelector__pfT },
			{ "Clear Button Color", &USwitcher_C__pf517162645::execbpf__ClearxButtonxColor__pfTT },
			{ "Construct", &USwitcher_C__pf517162645::execbpf__Construct__pf },
			{ "CreateGraphsByMenuGI", &USwitcher_C__pf517162645::execbpf__CreateGraphsByMenuGI__pf },
			{ "IndexRIghtByButton", &USwitcher_C__pf517162645::execbpf__IndexRIghtByButton__pf },
			{ "LeftByButton", &USwitcher_C__pf517162645::execbpf__LeftByButton__pf },
			{ "ResetPanelBySpeechDetailsPanel", &USwitcher_C__pf517162645::execbpf__ResetPanelBySpeechDetailsPanel__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ButtonxSelector__pfT_Statics
	{
		struct Switcher_C__pf517162645_eventbpf__ButtonxSelector__pfT_Parms
		{
			UButton* bpp__Buttonxx__pfTQ;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__Buttonxx__pfTQ_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Buttonxx__pfTQ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ButtonxSelector__pfT_Statics::NewProp_bpp__Buttonxx__pfTQ_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ButtonxSelector__pfT_Statics::NewProp_bpp__Buttonxx__pfTQ = { "bpp__Buttonxx__pfTQ", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Switcher_C__pf517162645_eventbpf__ButtonxSelector__pfT_Parms, bpp__Buttonxx__pfTQ), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ButtonxSelector__pfT_Statics::NewProp_bpp__Buttonxx__pfTQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ButtonxSelector__pfT_Statics::NewProp_bpp__Buttonxx__pfTQ_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ButtonxSelector__pfT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ButtonxSelector__pfT_Statics::NewProp_bpp__Buttonxx__pfTQ,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ButtonxSelector__pfT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Button Selector" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ButtonxSelector__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwitcher_C__pf517162645, nullptr, "Button Selector", nullptr, nullptr, sizeof(Switcher_C__pf517162645_eventbpf__ButtonxSelector__pfT_Parms), Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ButtonxSelector__pfT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ButtonxSelector__pfT_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ButtonxSelector__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ButtonxSelector__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ButtonxSelector__pfT()
	{
		UObject* Outer = Z_Construct_UClass_USwitcher_C__pf517162645();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Button Selector" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ButtonxSelector__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ClearxButtonxColor__pfTT_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ClearxButtonxColor__pfTT_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Clear Button Color" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ClearxButtonxColor__pfTT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwitcher_C__pf517162645, nullptr, "Clear Button Color", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ClearxButtonxColor__pfTT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ClearxButtonxColor__pfTT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ClearxButtonxColor__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_USwitcher_C__pf517162645();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Clear Button Color" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ClearxButtonxColor__pfTT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__Construct__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__Construct__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Called after the underlying slate widget is constructed.  Depending on how the slate object is usedt * this event may be called multiple times due to adding and removing from the hierarchy.t * If you need a true called-once-when-created event, use OnInitialized.t */" },
		{ "CppFromBpEvent", "" },
		{ "Keywords", "Begin Play" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Construct" },
		{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__Construct__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwitcher_C__pf517162645, nullptr, "Construct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__Construct__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__Construct__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_USwitcher_C__pf517162645();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Construct" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__Construct__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__CreateGraphsByMenuGI__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__CreateGraphsByMenuGI__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "CreateGraphsByMenuGI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__CreateGraphsByMenuGI__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwitcher_C__pf517162645, nullptr, "CreateGraphsByMenuGI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__CreateGraphsByMenuGI__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__CreateGraphsByMenuGI__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__CreateGraphsByMenuGI__pf()
	{
		UObject* Outer = Z_Construct_UClass_USwitcher_C__pf517162645();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "CreateGraphsByMenuGI" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__CreateGraphsByMenuGI__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__IndexRIghtByButton__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__IndexRIghtByButton__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "IndexRIghtByButton" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__IndexRIghtByButton__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwitcher_C__pf517162645, nullptr, "IndexRIghtByButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__IndexRIghtByButton__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__IndexRIghtByButton__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__IndexRIghtByButton__pf()
	{
		UObject* Outer = Z_Construct_UClass_USwitcher_C__pf517162645();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "IndexRIghtByButton" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__IndexRIghtByButton__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__LeftByButton__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__LeftByButton__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "LeftByButton" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__LeftByButton__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwitcher_C__pf517162645, nullptr, "LeftByButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__LeftByButton__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__LeftByButton__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__LeftByButton__pf()
	{
		UObject* Outer = Z_Construct_UClass_USwitcher_C__pf517162645();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "LeftByButton" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__LeftByButton__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ResetPanelBySpeechDetailsPanel__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ResetPanelBySpeechDetailsPanel__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "ResetPanelBySpeechDetailsPanel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ResetPanelBySpeechDetailsPanel__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwitcher_C__pf517162645, nullptr, "ResetPanelBySpeechDetailsPanel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ResetPanelBySpeechDetailsPanel__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ResetPanelBySpeechDetailsPanel__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ResetPanelBySpeechDetailsPanel__pf()
	{
		UObject* Outer = Z_Construct_UClass_USwitcher_C__pf517162645();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ResetPanelBySpeechDetailsPanel" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ResetPanelBySpeechDetailsPanel__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USwitcher_C__pf517162645_NoRegister()
	{
		return USwitcher_C__pf517162645::StaticClass();
	}
	struct Z_Construct_UClass_USwitcher_C__pf517162645_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DataDisplay__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DataDisplay__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Effectiveness_Graph__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Effectiveness_Graph__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Eye_Contact_Graph__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Eye_Contact_Graph__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Fluency_Graph__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Fluency_Graph__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ListViewData__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ListViewData__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Percentage_Stuttering_Graph__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Percentage_Stuttering_Graph__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ResultsForSwitcher__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ResultsForSwitcher__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Tab1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Tab1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Tab2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Tab2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Tab3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Tab3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Tab4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Tab4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Tab5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Tab5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Tab6__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Tab6__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Tab7__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Tab7__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Tab8__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Tab8__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Time_Stuttering_Graph__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Time_Stuttering_Graph__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Total_Time_Graph__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Total_Time_Graph__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultxStylexNormal__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__DefaultxStylexNormal__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultxStylexHovered__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__DefaultxStylexHovered__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StylexOnxTab__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__StylexOnxTab__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CurrentxTabxIndex__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__CurrentxTabxIndex__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StylexPressedxSound__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__StylexPressedxSound__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StylexHoveredxSound__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__StylexHoveredxSound__pfTT;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Tabs__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Tabs__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Tabs__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Graphs__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Graphs__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Graphs__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable_1__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsSpeech_Details_Pannel__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsSpeech_Details_Pannel__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_ButtonStyle__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_ButtonStyle__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_ButtonStyle_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_ButtonStyle_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_ButtonStyle_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_ButtonStyle_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_ButtonStyle_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_ButtonStyle_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_ButtonStyle_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_ButtonStyle_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_ButtonStyle_5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_ButtonStyle_5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_ButtonStyle_6__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_ButtonStyle_6__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_ButtonStyle_7__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_ButtonStyle_7__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeStruct_ButtonStyle_8__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_MakeStruct_ButtonStyle_8__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USwitcher_C__pf517162645_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USwitcher_C__pf517162645_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ButtonxSelector__pfT, "Button Selector" }, // 2756215427
		{ &Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ClearxButtonxColor__pfTT, "Clear Button Color" }, // 238949701
		{ &Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__Construct__pf, "Construct" }, // 937384486
		{ &Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__CreateGraphsByMenuGI__pf, "CreateGraphsByMenuGI" }, // 2937293590
		{ &Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__IndexRIghtByButton__pf, "IndexRIghtByButton" }, // 1786261824
		{ &Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__LeftByButton__pf, "LeftByButton" }, // 697653618
		{ &Z_Construct_UFunction_USwitcher_C__pf517162645_bpf__ResetPanelBySpeechDetailsPanel__pf, "ResetPanelBySpeechDetailsPanel" }, // 4186503493
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Switcher__pf517162645.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Switcher_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/Switcher.Switcher_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__DataDisplay__pf_MetaData[] = {
		{ "Category", "Switcher" },
		{ "DisplayName", "Data Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "DataDisplay" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__DataDisplay__pf = { "DataDisplay", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__DataDisplay__pf), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__DataDisplay__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__DataDisplay__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Effectiveness_Graph__pf_MetaData[] = {
		{ "Category", "Switcher" },
		{ "DisplayName", "Effectiveness_Graph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Effectiveness_Graph" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Effectiveness_Graph__pf = { "Effectiveness_Graph", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__Effectiveness_Graph__pf), Z_Construct_UClass_UEffectiveness_Graph_C__pf517162645_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Effectiveness_Graph__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Effectiveness_Graph__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Eye_Contact_Graph__pf_MetaData[] = {
		{ "Category", "Switcher" },
		{ "DisplayName", "Eye_Contact_Graph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Eye_Contact_Graph" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Eye_Contact_Graph__pf = { "Eye_Contact_Graph", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__Eye_Contact_Graph__pf), Z_Construct_UClass_UEye_Contact_Graph_C__pf517162645_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Eye_Contact_Graph__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Eye_Contact_Graph__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Fluency_Graph__pf_MetaData[] = {
		{ "Category", "Switcher" },
		{ "DisplayName", "Fluency_Graph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Fluency_Graph" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Fluency_Graph__pf = { "Fluency_Graph", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__Fluency_Graph__pf), Z_Construct_UClass_UFluency_Graph_C__pf517162645_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Fluency_Graph__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Fluency_Graph__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__ListViewData__pf_MetaData[] = {
		{ "Category", "Switcher" },
		{ "DisplayName", "ListViewData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "ListViewData" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__ListViewData__pf = { "ListViewData", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__ListViewData__pf), Z_Construct_UClass_UListViewData_C__pf517162645_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__ListViewData__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__ListViewData__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Percentage_Stuttering_Graph__pf_MetaData[] = {
		{ "Category", "Switcher" },
		{ "DisplayName", "Percentage_Stuttering_Graph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Percentage_Stuttering_Graph" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Percentage_Stuttering_Graph__pf = { "Percentage_Stuttering_Graph", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__Percentage_Stuttering_Graph__pf), Z_Construct_UClass_UPercentage_Stuttering_Graph_C__pf517162645_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Percentage_Stuttering_Graph__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Percentage_Stuttering_Graph__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__ResultsForSwitcher__pf_MetaData[] = {
		{ "Category", "Switcher" },
		{ "DisplayName", "ResultsForSwitcher" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "ResultsForSwitcher" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__ResultsForSwitcher__pf = { "ResultsForSwitcher", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__ResultsForSwitcher__pf), Z_Construct_UClass_UResultsForSwitcher_C__pf517162645_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__ResultsForSwitcher__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__ResultsForSwitcher__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab1__pf_MetaData[] = {
		{ "Category", "Switcher" },
		{ "DisplayName", "Tab 1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Tab1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab1__pf = { "Tab1", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__Tab1__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab2__pf_MetaData[] = {
		{ "Category", "Switcher" },
		{ "DisplayName", "Tab 2" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Tab2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab2__pf = { "Tab2", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__Tab2__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab3__pf_MetaData[] = {
		{ "Category", "Switcher" },
		{ "DisplayName", "Tab 3" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Tab3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab3__pf = { "Tab3", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__Tab3__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab4__pf_MetaData[] = {
		{ "Category", "Switcher" },
		{ "DisplayName", "Tab 4" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Tab4" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab4__pf = { "Tab4", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__Tab4__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab5__pf_MetaData[] = {
		{ "Category", "Switcher" },
		{ "DisplayName", "Tab 5" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Tab5" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab5__pf = { "Tab5", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__Tab5__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab6__pf_MetaData[] = {
		{ "Category", "Switcher" },
		{ "DisplayName", "Tab 6" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Tab6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab6__pf = { "Tab6", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__Tab6__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab6__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab6__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab7__pf_MetaData[] = {
		{ "Category", "Switcher" },
		{ "DisplayName", "Tab 7" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Tab7" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab7__pf = { "Tab7", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__Tab7__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab7__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab7__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab8__pf_MetaData[] = {
		{ "Category", "Switcher" },
		{ "DisplayName", "Tab 8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Tab8" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab8__pf = { "Tab8", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__Tab8__pf), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab8__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab8__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Time_Stuttering_Graph__pf_MetaData[] = {
		{ "Category", "Switcher" },
		{ "DisplayName", "Time_Stuttering_Graph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Time_Stuttering_Graph" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Time_Stuttering_Graph__pf = { "Time_Stuttering_Graph", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__Time_Stuttering_Graph__pf), Z_Construct_UClass_UTime_Stuttering_Graph_C__pf517162645_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Time_Stuttering_Graph__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Time_Stuttering_Graph__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Total_Time_Graph__pf_MetaData[] = {
		{ "Category", "Switcher" },
		{ "DisplayName", "Total_Time_Graph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Total_Time_Graph" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Total_Time_Graph__pf = { "Total_Time_Graph", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__Total_Time_Graph__pf), Z_Construct_UClass_UTotal_Time_Graph_C__pf517162645_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Total_Time_Graph__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Total_Time_Graph__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__DefaultxStylexNormal__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Default Style Normal" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Default Style Normal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__DefaultxStylexNormal__pfTT = { "Default Style Normal", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__DefaultxStylexNormal__pfTT), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__DefaultxStylexNormal__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__DefaultxStylexNormal__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__DefaultxStylexHovered__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Default Style Hovered" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Default Style Hovered" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__DefaultxStylexHovered__pfTT = { "Default Style Hovered", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__DefaultxStylexHovered__pfTT), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__DefaultxStylexHovered__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__DefaultxStylexHovered__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__StylexOnxTab__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Style on Tab" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Style On Tab" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__StylexOnxTab__pfTT = { "Style On Tab", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__StylexOnxTab__pfTT), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__StylexOnxTab__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__StylexOnxTab__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__CurrentxTabxIndex__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Current Tab Index" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Current Tab Index" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__CurrentxTabxIndex__pfTT = { "Current Tab Index", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__CurrentxTabxIndex__pfTT), METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__CurrentxTabxIndex__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__CurrentxTabxIndex__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__StylexPressedxSound__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Style Pressed Sound" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Style Pressed Sound" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__StylexPressedxSound__pfTT = { "Style Pressed Sound", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__StylexPressedxSound__pfTT), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__StylexPressedxSound__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__StylexPressedxSound__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__StylexHoveredxSound__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Style Hovered Sound" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Style Hovered Sound" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__StylexHoveredxSound__pfTT = { "Style Hovered Sound", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__StylexHoveredxSound__pfTT), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__StylexHoveredxSound__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__StylexHoveredxSound__pfTT_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tabs__pf_Inner = { "bpv__Tabs__pf", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tabs__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Tabs" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Tabs" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tabs__pf = { "Tabs", nullptr, (EPropertyFlags)0x001000800001000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__Tabs__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tabs__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tabs__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Graphs__pf_Inner = { "bpv__Graphs__pf", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Graphs__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Graphs" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Graphs" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Graphs__pf = { "Graphs", nullptr, (EPropertyFlags)0x001000800001000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, bpv__Graphs__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Graphs__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Graphs__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AProjectorScreen_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Temp_int_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__Temp_int_Variable__pf = { "Temp_int_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, b0l__Temp_int_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_AProjectorScreen_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__Temp_int_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "Temp_int_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__Temp_int_Variable_1__pf = { "Temp_int_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, b0l__Temp_int_Variable_1__pf), METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__Temp_int_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__Temp_int_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsProjector_Screen_Blueprint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf = { "K2Node_DynamicCast_AsProjector_Screen_Blueprint", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf), Z_Construct_UClass_AProjectorScreen_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((USwitcher_C__pf517162645*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitcher_C__pf517162645), &Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_AsSpeech_Details_Pannel__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsSpeech_Details_Pannel" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_AsSpeech_Details_Pannel__pf = { "K2Node_DynamicCast_AsSpeech_Details_Pannel", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, b0l__K2Node_DynamicCast_AsSpeech_Details_Pannel__pf), Z_Construct_UClass_USpeech_Details_Pannel_C__pf4267528607_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_AsSpeech_Details_Pannel__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_AsSpeech_Details_Pannel__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((USwitcher_C__pf517162645*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitcher_C__pf517162645), &Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_ButtonStyle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle__pf = { "K2Node_MakeStruct_ButtonStyle", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, b0l__K2Node_MakeStruct_ButtonStyle__pf), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_ButtonStyle_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_1__pf = { "K2Node_MakeStruct_ButtonStyle_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, b0l__K2Node_MakeStruct_ButtonStyle_1__pf), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_ButtonStyle_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_2__pf = { "K2Node_MakeStruct_ButtonStyle_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, b0l__K2Node_MakeStruct_ButtonStyle_2__pf), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_ButtonStyle_3" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_3__pf = { "K2Node_MakeStruct_ButtonStyle_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, b0l__K2Node_MakeStruct_ButtonStyle_3__pf), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_ButtonStyle_4" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_4__pf = { "K2Node_MakeStruct_ButtonStyle_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, b0l__K2Node_MakeStruct_ButtonStyle_4__pf), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_ButtonStyle_5" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_5__pf = { "K2Node_MakeStruct_ButtonStyle_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, b0l__K2Node_MakeStruct_ButtonStyle_5__pf), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_6__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_ButtonStyle_6" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_6__pf = { "K2Node_MakeStruct_ButtonStyle_6", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, b0l__K2Node_MakeStruct_ButtonStyle_6__pf), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_6__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_6__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_7__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_ButtonStyle_7" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_7__pf = { "K2Node_MakeStruct_ButtonStyle_7", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, b0l__K2Node_MakeStruct_ButtonStyle_7__pf), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_7__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_7__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_8__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "K2Node_MakeStruct_ButtonStyle_8" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_8__pf = { "K2Node_MakeStruct_ButtonStyle_8", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USwitcher_C__pf517162645, b0l__K2Node_MakeStruct_ButtonStyle_8__pf), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_8__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_8__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Switcher__pf517162645.h" },
		{ "OverrideNativeName", "K2Node_SwitchInteger_CmpSuccess" },
	};
#endif
	void Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_SetBit(void* Obj)
	{
		((USwitcher_C__pf517162645*)Obj)->b0l__K2Node_SwitchInteger_CmpSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf = { "K2Node_SwitchInteger_CmpSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USwitcher_C__pf517162645), &Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USwitcher_C__pf517162645_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__DataDisplay__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Effectiveness_Graph__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Eye_Contact_Graph__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Fluency_Graph__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__ListViewData__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Percentage_Stuttering_Graph__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__ResultsForSwitcher__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab6__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab7__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tab8__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Time_Stuttering_Graph__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Total_Time_Graph__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__DefaultxStylexNormal__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__DefaultxStylexHovered__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__StylexOnxTab__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__CurrentxTabxIndex__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__StylexPressedxSound__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__StylexHoveredxSound__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tabs__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Tabs__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Graphs__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_bpv__Graphs__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__Temp_int_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__Temp_int_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_AsProjector_Screen_Blueprint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_AsSpeech_Details_Pannel__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_6__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_7__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_MakeStruct_ButtonStyle_8__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwitcher_C__pf517162645_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USwitcher_C__pf517162645_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwitcher_C__pf517162645>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USwitcher_C__pf517162645_Statics::ClassParams = {
		&USwitcher_C__pf517162645::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USwitcher_C__pf517162645_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USwitcher_C__pf517162645_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USwitcher_C__pf517162645()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/Switcher"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Switcher_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USwitcher_C__pf517162645_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(USwitcher_C__pf517162645, TEXT("Switcher_C"), 1695880081);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<USwitcher_C__pf517162645>()
	{
		return USwitcher_C__pf517162645::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USwitcher_C__pf517162645(Z_Construct_UClass_USwitcher_C__pf517162645, &USwitcher_C__pf517162645::StaticClass, TEXT("/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/Switcher"), TEXT("Switcher_C"), true, TEXT("/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/Switcher"), TEXT("/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/Switcher.Switcher_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USwitcher_C__pf517162645);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
