// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Confirm_Rating_Button__pf3041421614.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfirm_Rating_Button__pf3041421614() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UDelegateFunction_AConfirm_Rating_Button_C__pf3041421614_MovexButtons__pfT__Confirm_Rating_Button_C__pf__MulticastDelegate__DelegateSignature();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AHanging_Projector_Screen_Blueprint_C__pf3730827578_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMoveComponentAction();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AConfirm_Rating_Button_C__pf3041421614_MovexButtons__pfT__Confirm_Rating_Button_C__pf__MulticastDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AConfirm_Rating_Button_C__pf3041421614_MovexButtons__pfT__Confirm_Rating_Button_C__pf__MulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "Move Buttons__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AConfirm_Rating_Button_C__pf3041421614_MovexButtons__pfT__Confirm_Rating_Button_C__pf__MulticastDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614, nullptr, "Move Buttons__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AConfirm_Rating_Button_C__pf3041421614_MovexButtons__pfT__Confirm_Rating_Button_C__pf__MulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AConfirm_Rating_Button_C__pf3041421614_MovexButtons__pfT__Confirm_Rating_Button_C__pf__MulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AConfirm_Rating_Button_C__pf3041421614_MovexButtons__pfT__Confirm_Rating_Button_C__pf__MulticastDelegate__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Move Buttons__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AConfirm_Rating_Button_C__pf3041421614_MovexButtons__pfT__Confirm_Rating_Button_C__pf__MulticastDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AConfirm_Rating_Button_C__pf3041421614::execbpf__LowerButton__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__LowerButton__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConfirm_Rating_Button_C__pf3041421614::execbpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__OtherBodyIndex__pf);
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConfirm_Rating_Button_C__pf3041421614::execbpf__Disable__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Disable__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConfirm_Rating_Button_C__pf3041421614::execbpf__Enable__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Enable__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConfirm_Rating_Button_C__pf3041421614::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConfirm_Rating_Button_C__pf3041421614::execbpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AConfirm_Rating_Button_C__pf3041421614::execbpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_AConfirm_Rating_Button_C__pf3041421614_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AConfirm_Rating_Button_C__pf3041421614::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AConfirm_Rating_Button_C__pf3041421614_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void AConfirm_Rating_Button_C__pf3041421614::StaticRegisterNativesAConfirm_Rating_Button_C__pf3041421614()
	{
		UClass* Class = AConfirm_Rating_Button_C__pf3041421614::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__Confirm_Rating_Button_Confirm Button_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature", &AConfirm_Rating_Button_C__pf3041421614::execbpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT },
			{ "Disable", &AConfirm_Rating_Button_C__pf3041421614::execbpf__Disable__pf },
			{ "Enable", &AConfirm_Rating_Button_C__pf3041421614::execbpf__Enable__pf },
			{ "ExecuteUbergraph_Confirm_Rating_Button_1", &AConfirm_Rating_Button_C__pf3041421614::execbpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1 },
			{ "ExecuteUbergraph_Confirm_Rating_Button_3", &AConfirm_Rating_Button_C__pf3041421614::execbpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3 },
			{ "LowerButton", &AConfirm_Rating_Button_C__pf3041421614::execbpf__LowerButton__pf },
			{ "ReceiveBeginPlay", &AConfirm_Rating_Button_C__pf3041421614::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics
	{
		struct Confirm_Rating_Button_C__pf3041421614_eventbpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OverlappedComponent__pf = { "bpp__OverlappedComponent__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Confirm_Rating_Button_C__pf3041421614_eventbpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Parms, bpp__OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Confirm_Rating_Button_C__pf3041421614_eventbpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OtherComp__pf = { "bpp__OtherComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Confirm_Rating_Button_C__pf3041421614_eventbpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OtherComp__pf_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OtherBodyIndex__pf = { "bpp__OtherBodyIndex__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Confirm_Rating_Button_C__pf3041421614_eventbpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Parms, bpp__OtherBodyIndex__pf), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__bFromSweep__pf_SetBit(void* Obj)
	{
		((Confirm_Rating_Button_C__pf3041421614_eventbpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Parms*)Obj)->bpp__bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__bFromSweep__pf = { "bpp__bFromSweep__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(Confirm_Rating_Button_C__pf3041421614_eventbpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Parms), &Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__bFromSweep__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__SweepResult__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__SweepResult__pf__const = { "bpp__SweepResult__pf__const", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Confirm_Rating_Button_C__pf3041421614_eventbpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Parms, bpp__SweepResult__pf__const), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__SweepResult__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__SweepResult__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::NewProp_bpp__SweepResult__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "BndEvt__Confirm_Rating_Button_Confirm Button_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614, nullptr, "BndEvt__Confirm_Rating_Button_Confirm Button_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature", nullptr, nullptr, sizeof(Confirm_Rating_Button_C__pf3041421614_eventbpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Parms), Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT()
	{
		UObject* Outer = Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__Confirm_Rating_Button_Confirm Button_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__Disable__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__Disable__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "Disable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__Disable__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614, nullptr, "Disable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__Disable__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__Disable__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__Disable__pf()
	{
		UObject* Outer = Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Disable" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__Disable__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__Enable__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__Enable__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "Enable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__Enable__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614, nullptr, "Enable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__Enable__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__Enable__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__Enable__pf()
	{
		UObject* Outer = Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Enable" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__Enable__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1_Statics
	{
		struct Confirm_Rating_Button_C__pf3041421614_eventbpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Confirm_Rating_Button_C__pf3041421614_eventbpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_Confirm_Rating_Button_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614, nullptr, "ExecuteUbergraph_Confirm_Rating_Button_1", nullptr, nullptr, sizeof(Confirm_Rating_Button_C__pf3041421614_eventbpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1_Parms), Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1()
	{
		UObject* Outer = Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_Confirm_Rating_Button_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3_Statics
	{
		struct Confirm_Rating_Button_C__pf3041421614_eventbpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Confirm_Rating_Button_C__pf3041421614_eventbpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_Confirm_Rating_Button_3" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614, nullptr, "ExecuteUbergraph_Confirm_Rating_Button_3", nullptr, nullptr, sizeof(Confirm_Rating_Button_C__pf3041421614_eventbpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3_Parms), Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3()
	{
		UObject* Outer = Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_Confirm_Rating_Button_3" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__LowerButton__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__LowerButton__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "LowerButton" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__LowerButton__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614, nullptr, "LowerButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__LowerButton__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__LowerButton__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__LowerButton__pf()
	{
		UObject* Outer = Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "LowerButton" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__LowerButton__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_NoRegister()
	{
		return AConfirm_Rating_Button_C__pf3041421614::StaticClass();
	}
	struct Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ButtonxBase__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ButtonxBase__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Sound__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Sound__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ConfirmxButton__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ConfirmxButton__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SelectedxRating__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__SelectedxRating__pfT;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FirstxTime__pfT_MetaData[];
#endif
		static void NewProp_bpv__FirstxTime__pfT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__FirstxTime__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AsxHangingxProjectorxScreenxBlueprint__pfTTTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__AsxHangingxProjectorxScreenxBlueprint__pfTTTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MovexButtons__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_bpv__MovexButtons__pfT;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsHanging_Projector_Screen_Blueprint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsHanging_Projector_Screen_Blueprint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsActive_Choice_Ring__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsActive_Choice_Ring__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult_1__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__BndEvt__Confirm_Rating_Button_ConfirmxButton_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pfT, "BndEvt__Confirm_Rating_Button_Confirm Button_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature" }, // 3498088941
		{ &Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__Disable__pf, "Disable" }, // 1286595636
		{ &Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__Enable__pf, "Enable" }, // 1721623477
		{ &Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_1, "ExecuteUbergraph_Confirm_Rating_Button_1" }, // 153030005
		{ &Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ExecuteUbergraph_Confirm_Rating_Button__pf_3, "ExecuteUbergraph_Confirm_Rating_Button_3" }, // 2016351592
		{ &Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__LowerButton__pf, "LowerButton" }, // 3568007669
		{ &Z_Construct_UFunction_AConfirm_Rating_Button_C__pf3041421614_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 58744216
		{ &Z_Construct_UDelegateFunction_AConfirm_Rating_Button_C__pf3041421614_MovexButtons__pfT__Confirm_Rating_Button_C__pf__MulticastDelegate__DelegateSignature, "Move Buttons__DelegateSignature" }, // 1631582287
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Confirm_Rating_Button__pf3041421614.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Confirm_Rating_Button_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Blueprints/Rating_Buttons/Confirm_Rating_Button.Confirm_Rating_Button_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__TextRender__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "TextRender" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__TextRender__pf = { "TextRender", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, bpv__TextRender__pf), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__TextRender__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__TextRender__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ButtonxBase__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "Button Base" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ButtonxBase__pfT = { "Button Base", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, bpv__ButtonxBase__pfT), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ButtonxBase__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ButtonxBase__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__Sound__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__Sound__pf = { "Sound", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, bpv__Sound__pf), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__Sound__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__Sound__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ConfirmxButton__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "Confirm Button" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ConfirmxButton__pfT = { "Confirm Button", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, bpv__ConfirmxButton__pfT), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ConfirmxButton__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ConfirmxButton__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__SelectedxRating__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Selected Rating" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Selected Rating" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__SelectedxRating__pfT = { "Selected Rating", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, bpv__SelectedxRating__pfT), METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__SelectedxRating__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__SelectedxRating__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__Active__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Active" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Active" },
	};
#endif
	void Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__Active__pf_SetBit(void* Obj)
	{
		((AConfirm_Rating_Button_C__pf3041421614*)Obj)->bpv__Active__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__Active__pf = { "Active", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AConfirm_Rating_Button_C__pf3041421614), &Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__Active__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__Active__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__Active__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__isPressedDown__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Pressed Down" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "isPressedDown" },
	};
#endif
	void Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__isPressedDown__pf_SetBit(void* Obj)
	{
		((AConfirm_Rating_Button_C__pf3041421614*)Obj)->bpv__isPressedDown__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__isPressedDown__pf = { "isPressedDown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AConfirm_Rating_Button_C__pf3041421614), &Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__isPressedDown__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__isPressedDown__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__isPressedDown__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__FirstxTime__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "First Time" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "First Time" },
	};
#endif
	void Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__FirstxTime__pfT_SetBit(void* Obj)
	{
		((AConfirm_Rating_Button_C__pf3041421614*)Obj)->bpv__FirstxTime__pfT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__FirstxTime__pfT = { "First Time", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AConfirm_Rating_Button_C__pf3041421614), &Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__FirstxTime__pfT_SetBit, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__FirstxTime__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__FirstxTime__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__AsxHangingxProjectorxScreenxBlueprint__pfTTTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "As Hanging Projector Screen Blueprint" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "As Hanging Projector Screen Blueprint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__AsxHangingxProjectorxScreenxBlueprint__pfTTTT = { "As Hanging Projector Screen Blueprint", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, bpv__AsxHangingxProjectorxScreenxBlueprint__pfTTTT), Z_Construct_UClass_AHanging_Projector_Screen_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__AsxHangingxProjectorxScreenxBlueprint__pfTTTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__AsxHangingxProjectorxScreenxBlueprint__pfTTTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__MovexButtons__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Move Buttons" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Move Buttons" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__MovexButtons__pfT = { "Move Buttons", nullptr, (EPropertyFlags)0x0010100010090005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, bpv__MovexButtons__pfT), Z_Construct_UDelegateFunction_AConfirm_Rating_Button_C__pf3041421614_MovexButtons__pfT__Confirm_Rating_Button_C__pf__MulticastDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__MovexButtons__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__MovexButtons__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__UpxLocation__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Up Location" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Up Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__UpxLocation__pfT = { "Up Location", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, bpv__UpxLocation__pfT), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__UpxLocation__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__UpxLocation__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ReturnxValuexRotation__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Return Value Rotation" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Return Value Rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ReturnxValuexRotation__pfTT = { "Return Value Rotation", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, bpv__ReturnxValuexRotation__pfTT), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ReturnxValuexRotation__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ReturnxValuexRotation__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ReturnxValuexScale__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Return Value Scale" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Return Value Scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ReturnxValuexScale__pfTT = { "Return Value Scale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, bpv__ReturnxValuexScale__pfTT), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ReturnxValuexScale__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ReturnxValuexScale__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__Temp_byte_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "Temp_byte_Variable" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__Temp_byte_Variable__pf = { "Temp_byte_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__Temp_byte_Variable__pf), Z_Construct_UEnum_Engine_EMoveComponentAction, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__Temp_byte_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__Temp_byte_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_GI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf = { "K2Node_DynamicCast_AsMenu_GI", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__K2Node_DynamicCast_AsMenu_GI__pf), Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AConfirm_Rating_Button_C__pf3041421614*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AConfirm_Rating_Button_C__pf3041421614), &Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHanging_Projector_Screen_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_AHanging_Projector_Screen_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsHanging_Projector_Screen_Blueprint__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsHanging_Projector_Screen_Blueprint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsHanging_Projector_Screen_Blueprint__pf = { "K2Node_DynamicCast_AsHanging_Projector_Screen_Blueprint", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__K2Node_DynamicCast_AsHanging_Projector_Screen_Blueprint__pf), Z_Construct_UClass_AHanging_Projector_Screen_Blueprint_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsHanging_Projector_Screen_Blueprint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsHanging_Projector_Screen_Blueprint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((AConfirm_Rating_Button_C__pf3041421614*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AConfirm_Rating_Button_C__pf3041421614), &Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors_1" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf = { "CallFunc_GetAllActorsOfClass_OutActors_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf = { "CallFunc_Array_Get_Item_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__CallFunc_Array_Get_Item_1__pf), Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsActive_Choice_Ring__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsActive_Choice_Ring" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsActive_Choice_Ring__pf = { "K2Node_DynamicCast_AsActive_Choice_Ring", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__K2Node_DynamicCast_AsActive_Choice_Ring__pf), Z_Construct_UClass_AActive_Choice_Ring_C__pf3041421614_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsActive_Choice_Ring__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsActive_Choice_Ring__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_2" },
	};
#endif
	void Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj)
	{
		((AConfirm_Rating_Button_C__pf3041421614*)Obj)->b0l__K2Node_DynamicCast_bSuccess_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf = { "K2Node_DynamicCast_bSuccess_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AConfirm_Rating_Button_C__pf3041421614), &Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_GI_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf = { "K2Node_DynamicCast_AsMenu_GI_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__K2Node_DynamicCast_AsMenu_GI_1__pf), Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_3" },
	};
#endif
	void Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit(void* Obj)
	{
		((AConfirm_Rating_Button_C__pf3041421614*)Obj)->b0l__K2Node_DynamicCast_bSuccess_3__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf = { "K2Node_DynamicCast_bSuccess_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AConfirm_Rating_Button_C__pf3041421614), &Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf = { "CallFunc_BreakVector_X", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__CallFunc_BreakVector_X__pf), METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf = { "CallFunc_BreakVector_Y", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__CallFunc_BreakVector_Y__pf), METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf = { "CallFunc_BreakVector_Z", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__CallFunc_BreakVector_Z__pf), METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetRelativeTransform_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf = { "CallFunc_K2_SetRelativeTransform_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OverlappedComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = { "K2Node_ComponentBoundEvent_OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf = { "K2Node_ComponentBoundEvent_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__K2Node_ComponentBoundEvent_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf = { "K2Node_ComponentBoundEvent_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__K2Node_ComponentBoundEvent_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherBodyIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = { "K2Node_ComponentBoundEvent_OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf), METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_bFromSweep" },
	};
#endif
	void Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit(void* Obj)
	{
		((AConfirm_Rating_Button_C__pf3041421614*)Obj)->b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = { "K2Node_ComponentBoundEvent_bFromSweep", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AConfirm_Rating_Button_C__pf3041421614), &Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_SweepResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf = { "K2Node_ComponentBoundEvent_SweepResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__K2Node_ComponentBoundEvent_SweepResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakTransform_Location__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "CallFunc_BreakTransform_Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakTransform_Location__pf = { "CallFunc_BreakTransform_Location", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__CallFunc_BreakTransform_Location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakTransform_Location__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakTransform_Location__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakTransform_Rotation__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "CallFunc_BreakTransform_Rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakTransform_Rotation__pf = { "CallFunc_BreakTransform_Rotation", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__CallFunc_BreakTransform_Rotation__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakTransform_Rotation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakTransform_Rotation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakTransform_Scale__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "CallFunc_BreakTransform_Scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakTransform_Scale__pf = { "CallFunc_BreakTransform_Scale", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__CallFunc_BreakTransform_Scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakTransform_Scale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakTransform_Scale__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf = { "CallFunc_BreakVector_X_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__CallFunc_BreakVector_X_1__pf), METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf = { "CallFunc_BreakVector_Y_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__CallFunc_BreakVector_Y_1__pf), METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf = { "CallFunc_BreakVector_Z_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__CallFunc_BreakVector_Z_1__pf), METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Confirm_Rating_Button__pf3041421614.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetRelativeTransform_SweepHitResult_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult_1__pf = { "CallFunc_K2_SetRelativeTransform_SweepHitResult_1", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConfirm_Rating_Button_C__pf3041421614, b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult_1__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult_1__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__TextRender__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ButtonxBase__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__Sound__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ConfirmxButton__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__SelectedxRating__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__Active__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__isPressedDown__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__FirstxTime__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__AsxHangingxProjectorxScreenxBlueprint__pfTTTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__MovexButtons__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__UpxLocation__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ReturnxValuexRotation__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_bpv__ReturnxValuexScale__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__Temp_byte_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsHanging_Projector_Screen_Blueprint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsActive_Choice_Ring__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakTransform_Location__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakTransform_Rotation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakTransform_Scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::NewProp_b0l__CallFunc_K2_SetRelativeTransform_SweepHitResult_1__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConfirm_Rating_Button_C__pf3041421614>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::ClassParams = {
		&AConfirm_Rating_Button_C__pf3041421614::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Blueprints/Rating_Buttons/Confirm_Rating_Button"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Confirm_Rating_Button_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AConfirm_Rating_Button_C__pf3041421614, TEXT("Confirm_Rating_Button_C"), 2340411648);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AConfirm_Rating_Button_C__pf3041421614>()
	{
		return AConfirm_Rating_Button_C__pf3041421614::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConfirm_Rating_Button_C__pf3041421614(Z_Construct_UClass_AConfirm_Rating_Button_C__pf3041421614, &AConfirm_Rating_Button_C__pf3041421614::StaticClass, TEXT("/Game/Stutter_Speak_Content/Blueprints/Rating_Buttons/Confirm_Rating_Button"), TEXT("Confirm_Rating_Button_C"), true, TEXT("/Game/Stutter_Speak_Content/Blueprints/Rating_Buttons/Confirm_Rating_Button"), TEXT("/Game/Stutter_Speak_Content/Blueprints/Rating_Buttons/Confirm_Rating_Button.Confirm_Rating_Button_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConfirm_Rating_Button_C__pf3041421614);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
