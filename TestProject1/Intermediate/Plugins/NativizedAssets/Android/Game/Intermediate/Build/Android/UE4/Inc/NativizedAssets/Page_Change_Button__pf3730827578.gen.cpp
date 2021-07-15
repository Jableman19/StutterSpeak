// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Page_Change_Button__pf3730827578.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePage_Change_Button__pf3730827578() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APage_Change_Button_C__pf3730827578_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_APage_Change_Button_C__pf3730827578();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABPSpeechWorld_C__pf2075166221_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USpeechPageW_C__pf1694860710_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APage_Change_Button_C__pf3730827578::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APage_Change_Button_C__pf3730827578::execbpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__OtherBodyIndex__pf);
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APage_Change_Button_C__pf3730827578::execbpf__ExecuteUbergraph_Page_Change_Button__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_Page_Change_Button__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_APage_Change_Button_C__pf3730827578_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void APage_Change_Button_C__pf3730827578::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_APage_Change_Button_C__pf3730827578_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void APage_Change_Button_C__pf3730827578::StaticRegisterNativesAPage_Change_Button_C__pf3730827578()
	{
		UClass* Class = APage_Change_Button_C__pf3730827578::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature", &APage_Change_Button_C__pf3730827578::execbpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf },
			{ "ExecuteUbergraph_Page_Change_Button_0", &APage_Change_Button_C__pf3730827578::execbpf__ExecuteUbergraph_Page_Change_Button__pf_0 },
			{ "ReceiveBeginPlay", &APage_Change_Button_C__pf3730827578::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics
	{
		struct Page_Change_Button_C__pf3730827578_eventbpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms
		{
			UPrimitiveComponent* bpp__OverlappedComponent__pf;
			AActor* bpp__OtherActor__pf;
			UPrimitiveComponent* bpp__OtherComp__pf;
			int32 bpp__OtherBodyIndex__pf;
			bool bpp__bFromSweep__pf;
			FHitResult bpp__SweepResult__pf__const;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OverlappedComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OverlappedComponent__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherComp__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__OtherBodyIndex__pf;
		static void NewProp_bpp__bFromSweep__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__bFromSweep__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__SweepResult__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__SweepResult__pf__const;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf = { "bpp__OverlappedComponent__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Page_Change_Button_C__pf3730827578_eventbpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Page_Change_Button_C__pf3730827578_eventbpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf = { "bpp__OtherComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Page_Change_Button_C__pf3730827578_eventbpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherBodyIndex__pf = { "bpp__OtherBodyIndex__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Page_Change_Button_C__pf3730827578_eventbpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherBodyIndex__pf), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf_SetBit(void* Obj)
	{
		((Page_Change_Button_C__pf3730827578_eventbpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms*)Obj)->bpp__bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf = { "bpp__bFromSweep__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(Page_Change_Button_C__pf3730827578_eventbpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), &Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const = { "bpp__SweepResult__pf__const", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Page_Change_Button_C__pf3730827578_eventbpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__SweepResult__pf__const), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APage_Change_Button_C__pf3730827578, nullptr, "BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature", nullptr, nullptr, sizeof(Page_Change_Button_C__pf3730827578_eventbpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_APage_Change_Button_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ExecuteUbergraph_Page_Change_Button__pf_0_Statics
	{
		struct Page_Change_Button_C__pf3730827578_eventbpf__ExecuteUbergraph_Page_Change_Button__pf_0_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ExecuteUbergraph_Page_Change_Button__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Page_Change_Button_C__pf3730827578_eventbpf__ExecuteUbergraph_Page_Change_Button__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ExecuteUbergraph_Page_Change_Button__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ExecuteUbergraph_Page_Change_Button__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ExecuteUbergraph_Page_Change_Button__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_Page_Change_Button_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ExecuteUbergraph_Page_Change_Button__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APage_Change_Button_C__pf3730827578, nullptr, "ExecuteUbergraph_Page_Change_Button_0", nullptr, nullptr, sizeof(Page_Change_Button_C__pf3730827578_eventbpf__ExecuteUbergraph_Page_Change_Button__pf_0_Parms), Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ExecuteUbergraph_Page_Change_Button__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ExecuteUbergraph_Page_Change_Button__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ExecuteUbergraph_Page_Change_Button__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ExecuteUbergraph_Page_Change_Button__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ExecuteUbergraph_Page_Change_Button__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_APage_Change_Button_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_Page_Change_Button_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ExecuteUbergraph_Page_Change_Button__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APage_Change_Button_C__pf3730827578, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_APage_Change_Button_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APage_Change_Button_C__pf3730827578_NoRegister()
	{
		return APage_Change_Button_C__pf3730827578::StaticClass();
	}
	struct Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextRender__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextRender__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Sound__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Sound__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Arrow__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Arrow__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Previous__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__Previous__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Next__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpv__Next__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OtherxComp__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__OtherxComp__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Active__pf_MetaData[];
#endif
		static void NewProp_bpv__Active__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Active__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__isPressedDown__pf_MetaData[];
#endif
		static void NewProp_bpv__isPressedDown__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__isPressedDown__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__UpxLocation__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__UpxLocation__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ReturnxValuexRotation__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__ReturnxValuexRotation__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ReturnxValuexScale__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__ReturnxValuexScale__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Roll__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Pitch__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Yaw__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakTransform_Location__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakTransform_Location__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakTransform_Rotation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakTransform_Rotation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakTransform_Scale__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakTransform_Scale__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_b0l__CallFunc_Array_Get_Item_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBPSpeech_World__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBPSpeech_World__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsSpeech_Page_W__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsSpeech_Page_W__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_X_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_X_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Y_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Y_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakVector_Z_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakVector_Z_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_b0l__CallFunc_Array_Get_Item_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult_1__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf, "BndEvt__Page_Change_Button_Arrow_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature" }, // 1384081687
		{ &Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ExecuteUbergraph_Page_Change_Button__pf_0, "ExecuteUbergraph_Page_Change_Button_0" }, // 3190423485
		{ &Z_Construct_UFunction_APage_Change_Button_C__pf3730827578_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 4055993933
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Page_Change_Button__pf3730827578.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Page_Change_Button_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Blueprints/Page_Change_Button.Page_Change_Button_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__TextRender__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "TextRender" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__TextRender__pf = { "TextRender", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, bpv__TextRender__pf), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__TextRender__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__TextRender__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Sound__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Sound__pf = { "Sound", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, bpv__Sound__pf), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Sound__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Sound__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Arrow__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "Arrow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Arrow__pf = { "Arrow", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, bpv__Arrow__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Arrow__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Arrow__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Previous__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Previous" },
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Previous" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Previous__pf = { "Previous", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, bpv__Previous__pf), METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Previous__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Previous__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Next__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Next" },
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Next" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Next__pf = { "Next", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, bpv__Next__pf), METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Next__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Next__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__OtherxComp__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Other Comp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Other Comp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__OtherxComp__pfT = { "Other Comp", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, bpv__OtherxComp__pfT), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__OtherxComp__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__OtherxComp__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Active__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Active" },
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Active" },
	};
#endif
	void Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Active__pf_SetBit(void* Obj)
	{
		((APage_Change_Button_C__pf3730827578*)Obj)->bpv__Active__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Active__pf = { "Active", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APage_Change_Button_C__pf3730827578), &Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Active__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Active__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Active__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__isPressedDown__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Pressed Down" },
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "isPressedDown" },
	};
#endif
	void Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__isPressedDown__pf_SetBit(void* Obj)
	{
		((APage_Change_Button_C__pf3730827578*)Obj)->bpv__isPressedDown__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__isPressedDown__pf = { "isPressedDown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APage_Change_Button_C__pf3730827578), &Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__isPressedDown__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__isPressedDown__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__isPressedDown__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__UpxLocation__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Up Location" },
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Up Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__UpxLocation__pfT = { "Up Location", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, bpv__UpxLocation__pfT), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__UpxLocation__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__UpxLocation__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__ReturnxValuexRotation__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Return Value Rotation" },
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Return Value Rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__ReturnxValuexRotation__pfTT = { "Return Value Rotation", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, bpv__ReturnxValuexRotation__pfTT), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__ReturnxValuexRotation__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__ReturnxValuexRotation__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__ReturnxValuexScale__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Return Value Scale" },
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Return Value Scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__ReturnxValuexScale__pfTT = { "Return Value Scale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, bpv__ReturnxValuexScale__pfTT), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__ReturnxValuexScale__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__ReturnxValuexScale__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Roll" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf = { "CallFunc_BreakRotator_Roll", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_BreakRotator_Roll__pf), METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf = { "CallFunc_BreakRotator_Pitch", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_BreakRotator_Pitch__pf), METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Yaw" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf = { "CallFunc_BreakRotator_Yaw", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_BreakRotator_Yaw__pf), METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OverlappedComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = { "K2Node_ComponentBoundEvent_OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf = { "K2Node_ComponentBoundEvent_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__K2Node_ComponentBoundEvent_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf = { "K2Node_ComponentBoundEvent_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__K2Node_ComponentBoundEvent_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherBodyIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = { "K2Node_ComponentBoundEvent_OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf), METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_bFromSweep" },
	};
#endif
	void Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit(void* Obj)
	{
		((APage_Change_Button_C__pf3730827578*)Obj)->b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = { "K2Node_ComponentBoundEvent_bFromSweep", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APage_Change_Button_C__pf3730827578), &Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_SweepResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf = { "K2Node_ComponentBoundEvent_SweepResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__K2Node_ComponentBoundEvent_SweepResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetRelativeRotation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf = { "CallFunc_K2_SetRelativeRotation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf = { "CallFunc_BreakVector_X", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_BreakVector_X__pf), METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf = { "CallFunc_BreakVector_Y", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_BreakVector_Y__pf), METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf = { "CallFunc_BreakVector_Z", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_BreakVector_Z__pf), METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf = { "CallFunc_BreakVector_X_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_BreakVector_X_1__pf), METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf = { "CallFunc_BreakVector_Y_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_BreakVector_Y_1__pf), METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf = { "CallFunc_BreakVector_Z_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_BreakVector_Z_1__pf), METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakTransform_Location__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakTransform_Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakTransform_Location__pf = { "CallFunc_BreakTransform_Location", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_BreakTransform_Location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakTransform_Location__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakTransform_Location__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakTransform_Rotation__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakTransform_Rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakTransform_Rotation__pf = { "CallFunc_BreakTransform_Rotation", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_BreakTransform_Rotation__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakTransform_Rotation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakTransform_Rotation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakTransform_Scale__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakTransform_Scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakTransform_Scale__pf = { "CallFunc_BreakTransform_Scale", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_BreakTransform_Scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakTransform_Scale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakTransform_Scale__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABPSpeechWorld_C__pf2075166221_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_ABPSpeechWorld_C__pf2075166221_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_1" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf = { "CallFunc_Array_Get_Item_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_Array_Get_Item_1__pf), METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsBPSpeech_World__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBPSpeech_World" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsBPSpeech_World__pf = { "K2Node_DynamicCast_AsBPSpeech_World", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__K2Node_DynamicCast_AsBPSpeech_World__pf), Z_Construct_UClass_ABPSpeechWorld_C__pf2075166221_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsBPSpeech_World__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsBPSpeech_World__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((APage_Change_Button_C__pf3730827578*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APage_Change_Button_C__pf3730827578), &Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsSpeech_Page_W__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsSpeech_Page_W" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsSpeech_Page_W__pf = { "K2Node_DynamicCast_AsSpeech_Page_W", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__K2Node_DynamicCast_AsSpeech_Page_W__pf), Z_Construct_UClass_USpeechPageW_C__pf1694860710_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsSpeech_Page_W__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsSpeech_Page_W__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((APage_Change_Button_C__pf3730827578*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APage_Change_Button_C__pf3730827578), &Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X_2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X_2__pf = { "CallFunc_BreakVector_X_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_BreakVector_X_2__pf), METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y_2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y_2__pf = { "CallFunc_BreakVector_Y_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_BreakVector_Y_2__pf), METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z_2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z_2__pf = { "CallFunc_BreakVector_Z_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_BreakVector_Z_2__pf), METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetRelativeLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf = { "CallFunc_K2_SetRelativeLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_2" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf = { "CallFunc_Array_Get_Item_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_Array_Get_Item_2__pf), METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetRelativeTransform_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf = { "CallFunc_K2_SetRelativeTransform_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Page_Change_Button__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetRelativeTransform_SweepHitResult_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult_1__pf = { "CallFunc_K2_SetRelativeTransform_SweepHitResult_1", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APage_Change_Button_C__pf3730827578, b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult_1__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult_1__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__TextRender__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Sound__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Arrow__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Previous__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Next__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__OtherxComp__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__Active__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__isPressedDown__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__UpxLocation__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__ReturnxValuexRotation__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_bpv__ReturnxValuexScale__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakTransform_Location__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakTransform_Rotation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakTransform_Scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsBPSpeech_World__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsSpeech_Page_W__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_X_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Y_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_BreakVector_Z_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult_1__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APage_Change_Button_C__pf3730827578>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::ClassParams = {
		&APage_Change_Button_C__pf3730827578::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APage_Change_Button_C__pf3730827578()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Blueprints/Page_Change_Button"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Page_Change_Button_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APage_Change_Button_C__pf3730827578_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(APage_Change_Button_C__pf3730827578, TEXT("Page_Change_Button_C"), 1044952140);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<APage_Change_Button_C__pf3730827578>()
	{
		return APage_Change_Button_C__pf3730827578::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APage_Change_Button_C__pf3730827578(Z_Construct_UClass_APage_Change_Button_C__pf3730827578, &APage_Change_Button_C__pf3730827578::StaticClass, TEXT("/Game/Stutter_Speak_Content/Blueprints/Page_Change_Button"), TEXT("Page_Change_Button_C"), true, TEXT("/Game/Stutter_Speak_Content/Blueprints/Page_Change_Button"), TEXT("/Game/Stutter_Speak_Content/Blueprints/Page_Change_Button.Page_Change_Button_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APage_Change_Button_C__pf3730827578);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
