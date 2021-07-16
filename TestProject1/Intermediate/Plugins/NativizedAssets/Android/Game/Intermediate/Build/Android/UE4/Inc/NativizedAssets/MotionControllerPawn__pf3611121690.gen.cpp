// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/MotionControllerPawn__pf3611121690.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionControllerPawn__pf3611121690() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_MotionController_C__pf3611121690_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ARecording_Test_1_C__pf1711902218_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf3611121690::execbpf__TimerInc__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__TimerInc__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf3611121690::execbpf__GetRotationFromInput__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__UpAxis__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__RightAxis__pf);
		P_GET_OBJECT(ABP_MotionController_C__pf3611121690,Z_Param_bpp__Controller__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->bpf__GetRotationFromInput__pf(Z_Param_bpp__UpAxis__pf,Z_Param_bpp__RightAxis__pf,Z_Param_bpp__Controller__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf3611121690::execbpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf3611121690::execbpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf3611121690::execbpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf3611121690::execbpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf3611121690::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf3611121690::execbpf__MotionControllerStopButton__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__MotionControllerStopButton__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf3611121690::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf3611121690::execbpf__ReleaseByProjectorxRightx__pfLK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReleaseByProjectorxRightx__pfLK();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMotionControllerPawn_C__pf3611121690::execbpf__ReleaseByProjectorxLeftx__pfLK)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReleaseByProjectorxLeftx__pfLK();
		P_NATIVE_END;
	}
	static FName NAME_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AMotionControllerPawn_C__pf3611121690::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AMotionControllerPawn_C__pf3611121690::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		MotionControllerPawn_C__pf3611121690_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveTick__pf),&Parms);
	}
	void AMotionControllerPawn_C__pf3611121690::StaticRegisterNativesAMotionControllerPawn_C__pf3611121690()
	{
		UClass* Class = AMotionControllerPawn_C__pf3611121690::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRotationFromInput", &AMotionControllerPawn_C__pf3611121690::execbpf__GetRotationFromInput__pf },
			{ "InpActEvt_ClickLeft_K2Node_InputActionEvent_0", &AMotionControllerPawn_C__pf3611121690::execbpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf },
			{ "InpActEvt_ClickLeft_K2Node_InputActionEvent_1", &AMotionControllerPawn_C__pf3611121690::execbpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf },
			{ "InpActEvt_ClickRight_K2Node_InputActionEvent_2", &AMotionControllerPawn_C__pf3611121690::execbpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf },
			{ "InpActEvt_ClickRight_K2Node_InputActionEvent_3", &AMotionControllerPawn_C__pf3611121690::execbpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf },
			{ "MotionControllerStopButton", &AMotionControllerPawn_C__pf3611121690::execbpf__MotionControllerStopButton__pf },
			{ "ReceiveBeginPlay", &AMotionControllerPawn_C__pf3611121690::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &AMotionControllerPawn_C__pf3611121690::execbpf__ReceiveTick__pf },
			{ "ReleaseByProjector(Left)", &AMotionControllerPawn_C__pf3611121690::execbpf__ReleaseByProjectorxLeftx__pfLK },
			{ "ReleaseByProjector(Right)", &AMotionControllerPawn_C__pf3611121690::execbpf__ReleaseByProjectorxRightx__pfLK },
			{ "TimerInc", &AMotionControllerPawn_C__pf3611121690::execbpf__TimerInc__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf_Statics
	{
		struct MotionControllerPawn_C__pf3611121690_eventbpf__GetRotationFromInput__pf_Parms
		{
			float bpp__UpAxis__pf;
			float bpp__RightAxis__pf;
			ABP_MotionController_C__pf3611121690* bpp__Controller__pf;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__UpAxis__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__RightAxis__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Controller__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__UpAxis__pf = { "bpp__UpAxis__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf3611121690_eventbpf__GetRotationFromInput__pf_Parms, bpp__UpAxis__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__RightAxis__pf = { "bpp__RightAxis__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf3611121690_eventbpf__GetRotationFromInput__pf_Parms, bpp__RightAxis__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__Controller__pf = { "bpp__Controller__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf3611121690_eventbpf__GetRotationFromInput__pf_Parms, bpp__Controller__pf), Z_Construct_UClass_ABP_MotionController_C__pf3611121690_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf3611121690_eventbpf__GetRotationFromInput__pf_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__UpAxis__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__RightAxis__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf_Statics::NewProp_bpp__Controller__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "GetRotationFromInput" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690, nullptr, "GetRotationFromInput", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf3611121690_eventbpf__GetRotationFromInput__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GetRotationFromInput" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf_Statics
	{
		struct MotionControllerPawn_C__pf3611121690_eventbpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf3611121690_eventbpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "InpActEvt_ClickLeft_K2Node_InputActionEvent_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690, nullptr, "InpActEvt_ClickLeft_K2Node_InputActionEvent_0", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf3611121690_eventbpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_ClickLeft_K2Node_InputActionEvent_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf_Statics
	{
		struct MotionControllerPawn_C__pf3611121690_eventbpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf3611121690_eventbpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "InpActEvt_ClickLeft_K2Node_InputActionEvent_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690, nullptr, "InpActEvt_ClickLeft_K2Node_InputActionEvent_1", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf3611121690_eventbpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_ClickLeft_K2Node_InputActionEvent_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf_Statics
	{
		struct MotionControllerPawn_C__pf3611121690_eventbpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf3611121690_eventbpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "InpActEvt_ClickRight_K2Node_InputActionEvent_2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690, nullptr, "InpActEvt_ClickRight_K2Node_InputActionEvent_2", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf3611121690_eventbpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_ClickRight_K2Node_InputActionEvent_2" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf_Statics
	{
		struct MotionControllerPawn_C__pf3611121690_eventbpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf3611121690_eventbpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "InpActEvt_ClickRight_K2Node_InputActionEvent_3" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690, nullptr, "InpActEvt_ClickRight_K2Node_InputActionEvent_3", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf3611121690_eventbpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_ClickRight_K2Node_InputActionEvent_3" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__MotionControllerStopButton__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__MotionControllerStopButton__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "MotionControllerStopButton" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__MotionControllerStopButton__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690, nullptr, "MotionControllerStopButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__MotionControllerStopButton__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__MotionControllerStopButton__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__MotionControllerStopButton__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "MotionControllerStopButton" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__MotionControllerStopButton__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(MotionControllerPawn_C__pf3611121690_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(MotionControllerPawn_C__pf3611121690_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReleaseByProjectorxLeftx__pfLK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReleaseByProjectorxLeftx__pfLK_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "ReleaseByProjector(Left)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReleaseByProjectorxLeftx__pfLK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690, nullptr, "ReleaseByProjector(Left)", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReleaseByProjectorxLeftx__pfLK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReleaseByProjectorxLeftx__pfLK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReleaseByProjectorxLeftx__pfLK()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReleaseByProjector(Left)" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReleaseByProjectorxLeftx__pfLK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReleaseByProjectorxRightx__pfLK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReleaseByProjectorxRightx__pfLK_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "ReleaseByProjector(Right)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReleaseByProjectorxRightx__pfLK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690, nullptr, "ReleaseByProjector(Right)", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReleaseByProjectorxRightx__pfLK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReleaseByProjectorxRightx__pfLK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReleaseByProjectorxRightx__pfLK()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReleaseByProjector(Right)" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReleaseByProjectorxRightx__pfLK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__TimerInc__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__TimerInc__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "TimerInc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__TimerInc__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690, nullptr, "TimerInc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__TimerInc__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__TimerInc__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__TimerInc__pf()
	{
		UObject* Outer = Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "TimerInc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__TimerInc__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_NoRegister()
	{
		return AMotionControllerPawn_C__pf3611121690::StaticClass();
	}
	struct Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Fader__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Fader__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Camera__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Camera__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__VROrigin__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__VROrigin__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bShowChaperone__pf_MetaData[];
#endif
		static void NewProp_bpv__bShowChaperone__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bShowChaperone__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LeftController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__LeftController__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RightController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__RightController__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FadeOutDuration__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__FadeOutDuration__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FadeInDuration__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__FadeInDuration__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IsTeleporting__pf_MetaData[];
#endif
		static void NewProp_bpv__IsTeleporting__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__IsTeleporting__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TeleportFadeColor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__TeleportFadeColor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ThumbDeadzone__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__ThumbDeadzone__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RightStickDown__pf_MetaData[];
#endif
		static void NewProp_bpv__RightStickDown__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__RightStickDown__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LeftStickDown__pf_MetaData[];
#endif
		static void NewProp_bpv__LeftStickDown__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__LeftStickDown__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultPlayerHeight__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__DefaultPlayerHeight__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__UseControllerRollToRotate__pf_MetaData[];
#endif
		static void NewProp_bpv__UseControllerRollToRotate__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__UseControllerRollToRotate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpeechOn__pf_MetaData[];
#endif
		static void NewProp_bpv__SpeechOn__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__SpeechOn__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TimerStarting__pf_MetaData[];
#endif
		static void NewProp_bpv__TimerStarting__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__TimerStarting__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TimerIncrement__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__TimerIncrement__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ChildedName__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ChildedName__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_struct_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__Temp_struct_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsRecording_Test_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsRecording_Test_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__GetRotationFromInput__pf, "GetRotationFromInput" }, // 1314532587
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_0__pf, "InpActEvt_ClickLeft_K2Node_InputActionEvent_0" }, // 323845110
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickLeft_K2Node_InputActionEvent_1__pf, "InpActEvt_ClickLeft_K2Node_InputActionEvent_1" }, // 312347230
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_2__pf, "InpActEvt_ClickRight_K2Node_InputActionEvent_2" }, // 2178736813
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__InpActEvt_ClickRight_K2Node_InputActionEvent_3__pf, "InpActEvt_ClickRight_K2Node_InputActionEvent_3" }, // 2815499996
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__MotionControllerStopButton__pf, "MotionControllerStopButton" }, // 2498277664
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 2393282451
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReceiveTick__pf, "ReceiveTick" }, // 2666661213
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReleaseByProjectorxLeftx__pfLK, "ReleaseByProjector(Left)" }, // 2584001562
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__ReleaseByProjectorxRightx__pfLK, "ReleaseByProjector(Right)" }, // 1829078588
		{ &Z_Construct_UFunction_AMotionControllerPawn_C__pf3611121690_bpf__TimerInc__pf, "TimerInc" }, // 797876757
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MotionControllerPawn__pf3611121690.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "MotionControllerPawn_C" },
		{ "ReplaceConverted", "/Game/Starter_Content/VirtualRealityBP/Blueprints/MotionControllerPawn.MotionControllerPawn_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__Fader__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "Fader" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__Fader__pf = { "Fader", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, bpv__Fader__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__Fader__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__Fader__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__Camera__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "Camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__Camera__pf = { "Camera", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, bpv__Camera__pf), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__Camera__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__Camera__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__VROrigin__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "VROrigin" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__VROrigin__pf = { "VROrigin", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, bpv__VROrigin__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__VROrigin__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__VROrigin__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__bShowChaperone__pf_MetaData[] = {
		{ "Category", "Chaperone" },
		{ "DisplayName", "Show Chaperone" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "bShowChaperone" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__bShowChaperone__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf3611121690*)Obj)->bpv__bShowChaperone__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__bShowChaperone__pf = { "bShowChaperone", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf3611121690), &Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__bShowChaperone__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__bShowChaperone__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__bShowChaperone__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__LeftController__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Left Controller" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "LeftController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__LeftController__pf = { "LeftController", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, bpv__LeftController__pf), Z_Construct_UClass_ABP_MotionController_C__pf3611121690_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__LeftController__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__LeftController__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__RightController__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Right Controller" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "RightController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__RightController__pf = { "RightController", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, bpv__RightController__pf), Z_Construct_UClass_ABP_MotionController_C__pf3611121690_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__RightController__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__RightController__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__FadeOutDuration__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Fade Out Duration" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "FadeOutDuration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__FadeOutDuration__pf = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, bpv__FadeOutDuration__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__FadeOutDuration__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__FadeOutDuration__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__FadeInDuration__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Fade in Duration" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "FadeInDuration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__FadeInDuration__pf = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, bpv__FadeInDuration__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__FadeInDuration__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__FadeInDuration__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__IsTeleporting__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Teleporting" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "IsTeleporting" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__IsTeleporting__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf3611121690*)Obj)->bpv__IsTeleporting__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__IsTeleporting__pf = { "IsTeleporting", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf3611121690), &Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__IsTeleporting__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__IsTeleporting__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__IsTeleporting__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__TeleportFadeColor__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Teleport Fade Color" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "TeleportFadeColor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__TeleportFadeColor__pf = { "TeleportFadeColor", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, bpv__TeleportFadeColor__pf), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__TeleportFadeColor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__TeleportFadeColor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__ThumbDeadzone__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Thumb Deadzone" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "ThumbDeadzone" },
		{ "tooltip", "Deadzone for adjusting rotation using the thumbs during teleportation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__ThumbDeadzone__pf = { "ThumbDeadzone", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, bpv__ThumbDeadzone__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__ThumbDeadzone__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__ThumbDeadzone__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__RightStickDown__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Right Stick Down" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "RightStickDown" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__RightStickDown__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf3611121690*)Obj)->bpv__RightStickDown__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__RightStickDown__pf = { "RightStickDown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf3611121690), &Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__RightStickDown__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__RightStickDown__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__RightStickDown__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__LeftStickDown__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Left Stick Down" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "LeftStickDown" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__LeftStickDown__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf3611121690*)Obj)->bpv__LeftStickDown__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__LeftStickDown__pf = { "LeftStickDown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf3611121690), &Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__LeftStickDown__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__LeftStickDown__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__LeftStickDown__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__DefaultPlayerHeight__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Default Player Height" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "DefaultPlayerHeight" },
		{ "tooltip", "Player height used on the PS4." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__DefaultPlayerHeight__pf = { "DefaultPlayerHeight", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, bpv__DefaultPlayerHeight__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__DefaultPlayerHeight__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__DefaultPlayerHeight__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__UseControllerRollToRotate__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Use Controller Roll to Rotate" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "UseControllerRollToRotate" },
		{ "tooltip", "Forced to True for PSVR Platform. PS Move controller has no thumbstick axis input so we must force enable this option." },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__UseControllerRollToRotate__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf3611121690*)Obj)->bpv__UseControllerRollToRotate__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__UseControllerRollToRotate__pf = { "UseControllerRollToRotate", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf3611121690), &Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__UseControllerRollToRotate__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__UseControllerRollToRotate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__UseControllerRollToRotate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__SpeechOn__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Speech On" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SpeechOn" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__SpeechOn__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf3611121690*)Obj)->bpv__SpeechOn__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__SpeechOn__pf = { "SpeechOn", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf3611121690), &Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__SpeechOn__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__SpeechOn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__SpeechOn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__TimerStarting__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Timer Starting" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "TimerStarting" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__TimerStarting__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf3611121690*)Obj)->bpv__TimerStarting__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__TimerStarting__pf = { "TimerStarting", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf3611121690), &Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__TimerStarting__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__TimerStarting__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__TimerStarting__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__TimerIncrement__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Timer Increment" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "TimerIncrement" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__TimerIncrement__pf = { "TimerIncrement", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, bpv__TimerIncrement__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__TimerIncrement__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__TimerIncrement__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__ChildedName__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Childed Name" },
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ChildedName" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__ChildedName__pf = { "ChildedName", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, bpv__ChildedName__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__ChildedName__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__ChildedName__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_3" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf = { "K2Node_InputActionEvent_Key_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, b0l__K2Node_InputActionEvent_Key_3__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf = { "K2Node_InputActionEvent_Key_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, b0l__K2Node_InputActionEvent_Key_2__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "Temp_struct_Variable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__Temp_struct_Variable__pf = { "Temp_struct_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, b0l__Temp_struct_Variable__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__Temp_struct_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf = { "K2Node_InputActionEvent_Key_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, b0l__K2Node_InputActionEvent_Key_1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf = { "K2Node_InputActionEvent_Key", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, b0l__K2Node_InputActionEvent_Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "Temp_struct_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__Temp_struct_Variable_1__pf = { "Temp_struct_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, b0l__Temp_struct_Variable_1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__Temp_struct_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "CallFunc_K2_AddLocalOffset_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf = { "CallFunc_K2_AddLocalOffset_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "K2Node_SwitchName_CmpSuccess" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf3611121690*)Obj)->b0l__K2Node_SwitchName_CmpSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf = { "K2Node_SwitchName_CmpSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf3611121690), &Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Roll" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf = { "CallFunc_BreakRotator_Roll", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, b0l__CallFunc_BreakRotator_Roll__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf = { "CallFunc_BreakRotator_Pitch", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, b0l__CallFunc_BreakRotator_Pitch__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Yaw" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf = { "CallFunc_BreakRotator_Yaw", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, b0l__CallFunc_BreakRotator_Yaw__pf), METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARecording_Test_1_C__pf1711902218_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_ARecording_Test_1_C__pf1711902218_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_GI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf = { "K2Node_DynamicCast_AsMenu_GI", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, b0l__K2Node_DynamicCast_AsMenu_GI__pf), Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf3611121690*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf3611121690), &Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsRecording_Test_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test_1__pf = { "K2Node_DynamicCast_AsRecording_Test_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, b0l__K2Node_DynamicCast_AsRecording_Test_1__pf), Z_Construct_UClass_ARecording_Test_1_C__pf1711902218_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf3611121690*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf3611121690), &Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_GI_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf = { "K2Node_DynamicCast_AsMenu_GI_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMotionControllerPawn_C__pf3611121690, b0l__K2Node_DynamicCast_AsMenu_GI_1__pf), Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionControllerPawn__pf3611121690.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_2" },
	};
#endif
	void Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj)
	{
		((AMotionControllerPawn_C__pf3611121690*)Obj)->b0l__K2Node_DynamicCast_bSuccess_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf = { "K2Node_DynamicCast_bSuccess_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMotionControllerPawn_C__pf3611121690), &Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__Fader__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__Camera__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__VROrigin__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__bShowChaperone__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__LeftController__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__RightController__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__FadeOutDuration__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__FadeInDuration__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__IsTeleporting__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__TeleportFadeColor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__ThumbDeadzone__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__RightStickDown__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__LeftStickDown__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__DefaultPlayerHeight__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__UseControllerRollToRotate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__SpeechOn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__TimerStarting__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__TimerIncrement__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_bpv__ChildedName__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__Temp_struct_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__Temp_struct_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_SwitchName_CmpSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMotionControllerPawn_C__pf3611121690>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::ClassParams = {
		&AMotionControllerPawn_C__pf3611121690::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Starter_Content/VirtualRealityBP/Blueprints/MotionControllerPawn"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("MotionControllerPawn_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AMotionControllerPawn_C__pf3611121690, TEXT("MotionControllerPawn_C"), 3312601917);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AMotionControllerPawn_C__pf3611121690>()
	{
		return AMotionControllerPawn_C__pf3611121690::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMotionControllerPawn_C__pf3611121690(Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690, &AMotionControllerPawn_C__pf3611121690::StaticClass, TEXT("/Game/Starter_Content/VirtualRealityBP/Blueprints/MotionControllerPawn"), TEXT("MotionControllerPawn_C"), true, TEXT("/Game/Starter_Content/VirtualRealityBP/Blueprints/MotionControllerPawn"), TEXT("/Game/Starter_Content/VirtualRealityBP/Blueprints/MotionControllerPawn.MotionControllerPawn_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMotionControllerPawn_C__pf3611121690);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
