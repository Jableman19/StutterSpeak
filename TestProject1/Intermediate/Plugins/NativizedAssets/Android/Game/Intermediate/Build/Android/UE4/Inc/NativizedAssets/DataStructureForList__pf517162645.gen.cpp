// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/DataStructureForList__pf517162645.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataStructureForList__pf517162645() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UDataStructureForList_C__pf517162645_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UDataStructureForList_C__pf517162645();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDataStructureForList_C__pf517162645::execbpf__BP_OnEntryReleased__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BP_OnEntryReleased__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataStructureForList_C__pf517162645::execbpf__BP_OnItemExpansionChanged__pf)
	{
		P_GET_UBOOL(Z_Param_bpp__bIsExpanded__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BP_OnItemExpansionChanged__pf(Z_Param_bpp__bIsExpanded__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataStructureForList_C__pf517162645::execbpf__BP_OnItemSelectionChanged__pf)
	{
		P_GET_UBOOL(Z_Param_bpp__bIsSelected__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BP_OnItemSelectionChanged__pf(Z_Param_bpp__bIsSelected__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataStructureForList_C__pf517162645::execbpf__OnListItemObjectSet__pf)
	{
		P_GET_OBJECT(UObject,Z_Param_bpp__ListItemObject__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__OnListItemObjectSet__pf(Z_Param_bpp__ListItemObject__pf);
		P_NATIVE_END;
	}
	static FName NAME_UDataStructureForList_C__pf517162645_bpf__BP_OnEntryReleased__pf = FName(TEXT("BP_OnEntryReleased"));
	void UDataStructureForList_C__pf517162645::eventbpf__BP_OnEntryReleased__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDataStructureForList_C__pf517162645_bpf__BP_OnEntryReleased__pf),NULL);
	}
	static FName NAME_UDataStructureForList_C__pf517162645_bpf__BP_OnItemExpansionChanged__pf = FName(TEXT("BP_OnItemExpansionChanged"));
	void UDataStructureForList_C__pf517162645::eventbpf__BP_OnItemExpansionChanged__pf(bool bpp__bIsExpanded__pf)
	{
		DataStructureForList_C__pf517162645_eventbpf__BP_OnItemExpansionChanged__pf_Parms Parms;
		Parms.bpp__bIsExpanded__pf=bpp__bIsExpanded__pf ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UDataStructureForList_C__pf517162645_bpf__BP_OnItemExpansionChanged__pf),&Parms);
	}
	static FName NAME_UDataStructureForList_C__pf517162645_bpf__BP_OnItemSelectionChanged__pf = FName(TEXT("BP_OnItemSelectionChanged"));
	void UDataStructureForList_C__pf517162645::eventbpf__BP_OnItemSelectionChanged__pf(bool bpp__bIsSelected__pf)
	{
		DataStructureForList_C__pf517162645_eventbpf__BP_OnItemSelectionChanged__pf_Parms Parms;
		Parms.bpp__bIsSelected__pf=bpp__bIsSelected__pf ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UDataStructureForList_C__pf517162645_bpf__BP_OnItemSelectionChanged__pf),&Parms);
	}
	static FName NAME_UDataStructureForList_C__pf517162645_bpf__OnListItemObjectSet__pf = FName(TEXT("OnListItemObjectSet"));
	void UDataStructureForList_C__pf517162645::eventbpf__OnListItemObjectSet__pf(UObject* bpp__ListItemObject__pf)
	{
		DataStructureForList_C__pf517162645_eventbpf__OnListItemObjectSet__pf_Parms Parms;
		Parms.bpp__ListItemObject__pf=bpp__ListItemObject__pf;
		ProcessEvent(FindFunctionChecked(NAME_UDataStructureForList_C__pf517162645_bpf__OnListItemObjectSet__pf),&Parms);
	}
	void UDataStructureForList_C__pf517162645::StaticRegisterNativesUDataStructureForList_C__pf517162645()
	{
		UClass* Class = UDataStructureForList_C__pf517162645::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_OnEntryReleased", &UDataStructureForList_C__pf517162645::execbpf__BP_OnEntryReleased__pf },
			{ "BP_OnItemExpansionChanged", &UDataStructureForList_C__pf517162645::execbpf__BP_OnItemExpansionChanged__pf },
			{ "BP_OnItemSelectionChanged", &UDataStructureForList_C__pf517162645::execbpf__BP_OnItemSelectionChanged__pf },
			{ "OnListItemObjectSet", &UDataStructureForList_C__pf517162645::execbpf__OnListItemObjectSet__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnEntryReleased__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnEntryReleased__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "Comment", "/** Called when this entry is released from the owning table and no longer represents any list item */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "On Entry Released" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "OverrideNativeName", "BP_OnEntryReleased" },
		{ "ToolTip", "Called when this entry is released from the owning table and no longer represents any list item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnEntryReleased__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataStructureForList_C__pf517162645, nullptr, "BP_OnEntryReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnEntryReleased__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnEntryReleased__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnEntryReleased__pf()
	{
		UObject* Outer = Z_Construct_UClass_UDataStructureForList_C__pf517162645();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BP_OnEntryReleased" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnEntryReleased__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemExpansionChanged__pf_Statics
	{
		static void NewProp_bpp__bIsExpanded__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__bIsExpanded__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemExpansionChanged__pf_Statics::NewProp_bpp__bIsExpanded__pf_SetBit(void* Obj)
	{
		((DataStructureForList_C__pf517162645_eventbpf__BP_OnItemExpansionChanged__pf_Parms*)Obj)->bpp__bIsExpanded__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemExpansionChanged__pf_Statics::NewProp_bpp__bIsExpanded__pf = { "bpp__bIsExpanded__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(DataStructureForList_C__pf517162645_eventbpf__BP_OnItemExpansionChanged__pf_Parms), &Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemExpansionChanged__pf_Statics::NewProp_bpp__bIsExpanded__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemExpansionChanged__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemExpansionChanged__pf_Statics::NewProp_bpp__bIsExpanded__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemExpansionChanged__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "Comment", "/** Called when the expansion state of the item represented by this entry changes. Tree view entries only. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "On Item Expansion Changed" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "OverrideNativeName", "BP_OnItemExpansionChanged" },
		{ "ToolTip", "Called when the expansion state of the item represented by this entry changes. Tree view entries only." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemExpansionChanged__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataStructureForList_C__pf517162645, nullptr, "BP_OnItemExpansionChanged", nullptr, nullptr, sizeof(DataStructureForList_C__pf517162645_eventbpf__BP_OnItemExpansionChanged__pf_Parms), Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemExpansionChanged__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemExpansionChanged__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemExpansionChanged__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemExpansionChanged__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemExpansionChanged__pf()
	{
		UObject* Outer = Z_Construct_UClass_UDataStructureForList_C__pf517162645();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BP_OnItemExpansionChanged" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemExpansionChanged__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemSelectionChanged__pf_Statics
	{
		static void NewProp_bpp__bIsSelected__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__bIsSelected__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemSelectionChanged__pf_Statics::NewProp_bpp__bIsSelected__pf_SetBit(void* Obj)
	{
		((DataStructureForList_C__pf517162645_eventbpf__BP_OnItemSelectionChanged__pf_Parms*)Obj)->bpp__bIsSelected__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemSelectionChanged__pf_Statics::NewProp_bpp__bIsSelected__pf = { "bpp__bIsSelected__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(DataStructureForList_C__pf517162645_eventbpf__BP_OnItemSelectionChanged__pf_Parms), &Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemSelectionChanged__pf_Statics::NewProp_bpp__bIsSelected__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemSelectionChanged__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemSelectionChanged__pf_Statics::NewProp_bpp__bIsSelected__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemSelectionChanged__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserListEntry" },
		{ "Comment", "/** Called when the selection state of the item represented by this entry changes. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "On Item Selection Changed" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "OverrideNativeName", "BP_OnItemSelectionChanged" },
		{ "ToolTip", "Called when the selection state of the item represented by this entry changes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemSelectionChanged__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataStructureForList_C__pf517162645, nullptr, "BP_OnItemSelectionChanged", nullptr, nullptr, sizeof(DataStructureForList_C__pf517162645_eventbpf__BP_OnItemSelectionChanged__pf_Parms), Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemSelectionChanged__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemSelectionChanged__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemSelectionChanged__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemSelectionChanged__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemSelectionChanged__pf()
	{
		UObject* Outer = Z_Construct_UClass_UDataStructureForList_C__pf517162645();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BP_OnItemSelectionChanged" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemSelectionChanged__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__OnListItemObjectSet__pf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__ListItemObject__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__OnListItemObjectSet__pf_Statics::NewProp_bpp__ListItemObject__pf = { "bpp__ListItemObject__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(DataStructureForList_C__pf517162645_eventbpf__OnListItemObjectSet__pf_Parms, bpp__ListItemObject__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__OnListItemObjectSet__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__OnListItemObjectSet__pf_Statics::NewProp_bpp__ListItemObject__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__OnListItemObjectSet__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "ObjectListEntry" },
		{ "Comment", "/** Called when this entry is assigned a new item object to represent by the owning list view */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "OverrideNativeName", "OnListItemObjectSet" },
		{ "ToolTip", "Called when this entry is assigned a new item object to represent by the owning list view" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__OnListItemObjectSet__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataStructureForList_C__pf517162645, nullptr, "OnListItemObjectSet", nullptr, nullptr, sizeof(DataStructureForList_C__pf517162645_eventbpf__OnListItemObjectSet__pf_Parms), Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__OnListItemObjectSet__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__OnListItemObjectSet__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__OnListItemObjectSet__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__OnListItemObjectSet__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__OnListItemObjectSet__pf()
	{
		UObject* Outer = Z_Construct_UClass_UDataStructureForList_C__pf517162645();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "OnListItemObjectSet" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__OnListItemObjectSet__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDataStructureForList_C__pf517162645_NoRegister()
	{
		return UDataStructureForList_C__pf517162645::StaticClass();
	}
	struct Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Border_185__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Border_185__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_64__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_64__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_96__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_96__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_132__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_132__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_213__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_213__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_261__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_261__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_315__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_315__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_386__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_386__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AttemptNum__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__AttemptNum__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Time__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__Time__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TimeStutt__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__TimeStutt__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__StuttPercent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__StuttPercent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Eye__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__Eye__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Effective__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__Effective__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Fluency__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__Fluency__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ListxItemxObject__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ListxItemxObject__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__BGColor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__BGColor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_ListItemObject__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_ListItemObject__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_bIsExpanded__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_Event_bIsExpanded__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_Event_bIsExpanded__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_bIsSelected__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_Event_bIsSelected__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_Event_bIsSelected__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnEntryReleased__pf, "BP_OnEntryReleased" }, // 1121144443
		{ &Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemExpansionChanged__pf, "BP_OnItemExpansionChanged" }, // 723767734
		{ &Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__BP_OnItemSelectionChanged__pf, "BP_OnItemSelectionChanged" }, // 1526878381
		{ &Z_Construct_UFunction_UDataStructureForList_C__pf517162645_bpf__OnListItemObjectSet__pf, "OnListItemObjectSet" }, // 443187641
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataStructureForList__pf517162645.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "DataStructureForList_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/DataStructureForList.DataStructureForList_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Border_185__pf_MetaData[] = {
		{ "DisplayName", "Border_185" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "OverrideNativeName", "Border_185" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Border_185__pf = { "Border_185", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataStructureForList_C__pf517162645, bpv__Border_185__pf), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Border_185__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Border_185__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_64__pf_MetaData[] = {
		{ "DisplayName", "TextBlock_64" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "OverrideNativeName", "TextBlock_64" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_64__pf = { "TextBlock_64", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataStructureForList_C__pf517162645, bpv__TextBlock_64__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_64__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_64__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_96__pf_MetaData[] = {
		{ "DisplayName", "TextBlock_96" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "OverrideNativeName", "TextBlock_96" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_96__pf = { "TextBlock_96", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataStructureForList_C__pf517162645, bpv__TextBlock_96__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_96__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_96__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_132__pf_MetaData[] = {
		{ "DisplayName", "TextBlock_132" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "OverrideNativeName", "TextBlock_132" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_132__pf = { "TextBlock_132", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataStructureForList_C__pf517162645, bpv__TextBlock_132__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_132__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_132__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_213__pf_MetaData[] = {
		{ "DisplayName", "TextBlock_213" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "OverrideNativeName", "TextBlock_213" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_213__pf = { "TextBlock_213", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataStructureForList_C__pf517162645, bpv__TextBlock_213__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_213__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_213__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_261__pf_MetaData[] = {
		{ "DisplayName", "TextBlock_261" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "OverrideNativeName", "TextBlock_261" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_261__pf = { "TextBlock_261", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataStructureForList_C__pf517162645, bpv__TextBlock_261__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_261__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_261__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_315__pf_MetaData[] = {
		{ "DisplayName", "TextBlock_315" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "OverrideNativeName", "TextBlock_315" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_315__pf = { "TextBlock_315", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataStructureForList_C__pf517162645, bpv__TextBlock_315__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_315__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_315__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_386__pf_MetaData[] = {
		{ "DisplayName", "TextBlock_386" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "OverrideNativeName", "TextBlock_386" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_386__pf = { "TextBlock_386", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataStructureForList_C__pf517162645, bpv__TextBlock_386__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_386__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_386__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__AttemptNum__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Attempt Num" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "AttemptNum" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__AttemptNum__pf = { "AttemptNum", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataStructureForList_C__pf517162645, bpv__AttemptNum__pf), METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__AttemptNum__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__AttemptNum__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Time__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Time" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Time" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Time__pf = { "Time", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataStructureForList_C__pf517162645, bpv__Time__pf), METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Time__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Time__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TimeStutt__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Time Stutt" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "TimeStutt" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TimeStutt__pf = { "TimeStutt", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataStructureForList_C__pf517162645, bpv__TimeStutt__pf), METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TimeStutt__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TimeStutt__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__StuttPercent__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Stutt Percent" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "StuttPercent" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__StuttPercent__pf = { "StuttPercent", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataStructureForList_C__pf517162645, bpv__StuttPercent__pf), METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__StuttPercent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__StuttPercent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Eye__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Eye" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Eye" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Eye__pf = { "Eye", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataStructureForList_C__pf517162645, bpv__Eye__pf), METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Eye__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Eye__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Effective__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Effective" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Effective" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Effective__pf = { "Effective", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataStructureForList_C__pf517162645, bpv__Effective__pf), METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Effective__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Effective__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Fluency__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Fluency" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Fluency" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Fluency__pf = { "Fluency", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataStructureForList_C__pf517162645, bpv__Fluency__pf), METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Fluency__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Fluency__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__ListxItemxObject__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "List Item Object" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "List Item Object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__ListxItemxObject__pfTT = { "List Item Object", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataStructureForList_C__pf517162645, bpv__ListxItemxObject__pfTT), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__ListxItemxObject__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__ListxItemxObject__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__BGColor__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "BGColor" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "BGColor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__BGColor__pf = { "BGColor", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataStructureForList_C__pf517162645, bpv__BGColor__pf), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__BGColor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__BGColor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_ListItemObject__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "OverrideNativeName", "K2Node_Event_ListItemObject" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_ListItemObject__pf = { "K2Node_Event_ListItemObject", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataStructureForList_C__pf517162645, b0l__K2Node_Event_ListItemObject__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_ListItemObject__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_ListItemObject__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_bIsExpanded__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "OverrideNativeName", "K2Node_Event_bIsExpanded" },
	};
#endif
	void Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_bIsExpanded__pf_SetBit(void* Obj)
	{
		((UDataStructureForList_C__pf517162645*)Obj)->b0l__K2Node_Event_bIsExpanded__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_bIsExpanded__pf = { "K2Node_Event_bIsExpanded", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDataStructureForList_C__pf517162645), &Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_bIsExpanded__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_bIsExpanded__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_bIsExpanded__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_bIsSelected__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataStructureForList__pf517162645.h" },
		{ "OverrideNativeName", "K2Node_Event_bIsSelected" },
	};
#endif
	void Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_bIsSelected__pf_SetBit(void* Obj)
	{
		((UDataStructureForList_C__pf517162645*)Obj)->b0l__K2Node_Event_bIsSelected__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_bIsSelected__pf = { "K2Node_Event_bIsSelected", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDataStructureForList_C__pf517162645), &Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_bIsSelected__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_bIsSelected__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_bIsSelected__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Border_185__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_64__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_96__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_132__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_213__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_261__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_315__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TextBlock_386__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__AttemptNum__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Time__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__TimeStutt__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__StuttPercent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Eye__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Effective__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__Fluency__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__ListxItemxObject__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_bpv__BGColor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_ListItemObject__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_bIsExpanded__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::NewProp_b0l__K2Node_Event_bIsSelected__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UDataStructureForList_C__pf517162645, IUserObjectListEntry), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataStructureForList_C__pf517162645>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::ClassParams = {
		&UDataStructureForList_C__pf517162645::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataStructureForList_C__pf517162645()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/DataStructureForList"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("DataStructureForList_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UDataStructureForList_C__pf517162645, TEXT("DataStructureForList_C"), 2627510411);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UDataStructureForList_C__pf517162645>()
	{
		return UDataStructureForList_C__pf517162645::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDataStructureForList_C__pf517162645(Z_Construct_UClass_UDataStructureForList_C__pf517162645, &UDataStructureForList_C__pf517162645::StaticClass, TEXT("/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/DataStructureForList"), TEXT("DataStructureForList_C"), true, TEXT("/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/DataStructureForList"), TEXT("/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/DataStructureForList.DataStructureForList_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataStructureForList_C__pf517162645);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
