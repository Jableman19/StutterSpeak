// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BeginSpeechButton__pf2198246146.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeginSpeechButton__pf2198246146() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMoveComponentAction();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ARecording_Test_C__pf1711902218_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AStopSpeechButton_C__pf2198246146_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABeginStutterButton_C__pf2552470103_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ARecording_Test_1_C__pf1711902218_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(ABeginSpeechButton_C__pf2198246146::execbpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__OtherBodyIndex__pf);
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABeginSpeechButton_C__pf2198246146::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABeginSpeechButton_C__pf2198246146::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABeginSpeechButton_C__pf2198246146::execbpf__ExecuteUbergraph_BeginSpeechButton__pf_2)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_BeginSpeechButton__pf_2(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABeginSpeechButton_C__pf2198246146::execbpf__ExecuteUbergraph_BeginSpeechButton__pf_1)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_BeginSpeechButton__pf_1(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABeginSpeechButton_C__pf2198246146::execbpf__ExecuteUbergraph_BeginSpeechButton__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_BeginSpeechButton__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABeginSpeechButton_C__pf2198246146::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABeginSpeechButton_C__pf2198246146::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BeginSpeechButton_C__pf2198246146_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveTick__pf),&Parms);
	}
	void ABeginSpeechButton_C__pf2198246146::StaticRegisterNativesABeginSpeechButton_C__pf2198246146()
	{
		UClass* Class = ABeginSpeechButton_C__pf2198246146::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature", &ABeginSpeechButton_C__pf2198246146::execbpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf },
			{ "ExecuteUbergraph_BeginSpeechButton_0", &ABeginSpeechButton_C__pf2198246146::execbpf__ExecuteUbergraph_BeginSpeechButton__pf_0 },
			{ "ExecuteUbergraph_BeginSpeechButton_1", &ABeginSpeechButton_C__pf2198246146::execbpf__ExecuteUbergraph_BeginSpeechButton__pf_1 },
			{ "ExecuteUbergraph_BeginSpeechButton_2", &ABeginSpeechButton_C__pf2198246146::execbpf__ExecuteUbergraph_BeginSpeechButton__pf_2 },
			{ "ReceiveBeginPlay", &ABeginSpeechButton_C__pf2198246146::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &ABeginSpeechButton_C__pf2198246146::execbpf__ReceiveTick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics
	{
		struct BeginSpeechButton_C__pf2198246146_eventbpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf = { "bpp__OverlappedComponent__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BeginSpeechButton_C__pf2198246146_eventbpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BeginSpeechButton_C__pf2198246146_eventbpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf = { "bpp__OtherComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BeginSpeechButton_C__pf2198246146_eventbpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherBodyIndex__pf = { "bpp__OtherBodyIndex__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BeginSpeechButton_C__pf2198246146_eventbpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherBodyIndex__pf), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf_SetBit(void* Obj)
	{
		((BeginSpeechButton_C__pf2198246146_eventbpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms*)Obj)->bpp__bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf = { "bpp__bFromSweep__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(BeginSpeechButton_C__pf2198246146_eventbpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), &Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const = { "bpp__SweepResult__pf__const", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BeginSpeechButton_C__pf2198246146_eventbpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__SweepResult__pf__const), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146, nullptr, "BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature", nullptr, nullptr, sizeof(BeginSpeechButton_C__pf2198246146_eventbpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_0_Statics
	{
		struct BeginSpeechButton_C__pf2198246146_eventbpf__ExecuteUbergraph_BeginSpeechButton__pf_0_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BeginSpeechButton_C__pf2198246146_eventbpf__ExecuteUbergraph_BeginSpeechButton__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_BeginSpeechButton_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146, nullptr, "ExecuteUbergraph_BeginSpeechButton_0", nullptr, nullptr, sizeof(BeginSpeechButton_C__pf2198246146_eventbpf__ExecuteUbergraph_BeginSpeechButton__pf_0_Parms), Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_BeginSpeechButton_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_1_Statics
	{
		struct BeginSpeechButton_C__pf2198246146_eventbpf__ExecuteUbergraph_BeginSpeechButton__pf_1_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_1_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BeginSpeechButton_C__pf2198246146_eventbpf__ExecuteUbergraph_BeginSpeechButton__pf_1_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_1_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_BeginSpeechButton_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146, nullptr, "ExecuteUbergraph_BeginSpeechButton_1", nullptr, nullptr, sizeof(BeginSpeechButton_C__pf2198246146_eventbpf__ExecuteUbergraph_BeginSpeechButton__pf_1_Parms), Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_1_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_1()
	{
		UObject* Outer = Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_BeginSpeechButton_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_2_Statics
	{
		struct BeginSpeechButton_C__pf2198246146_eventbpf__ExecuteUbergraph_BeginSpeechButton__pf_2_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_2_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BeginSpeechButton_C__pf2198246146_eventbpf__ExecuteUbergraph_BeginSpeechButton__pf_2_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_2_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_BeginSpeechButton_2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146, nullptr, "ExecuteUbergraph_BeginSpeechButton_2", nullptr, nullptr, sizeof(BeginSpeechButton_C__pf2198246146_eventbpf__ExecuteUbergraph_BeginSpeechButton__pf_2_Parms), Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_2_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_2()
	{
		UObject* Outer = Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_BeginSpeechButton_2" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BeginSpeechButton_C__pf2198246146_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(BeginSpeechButton_C__pf2198246146_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_NoRegister()
	{
		return ABeginSpeechButton_C__pf2198246146::StaticClass();
	}
	struct Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Audio__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Audio__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HitboxButton__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__HitboxButton__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DisplayxText__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DisplayxText__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ButtonxTop__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ButtonxTop__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__isPressedDown__pf_MetaData[];
#endif
		static void NewProp_bpv__isPressedDown__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__isPressedDown__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__initializing__pf_MetaData[];
#endif
		static void NewProp_bpv__initializing__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__initializing__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__UpLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__UpLocation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DownLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__DownLocation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_byte_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__Temp_byte_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsRecording_Test__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsRecording_Test__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsStop_Speech_Button__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsStop_Speech_Button__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf;
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBegin_Stutter_Button__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBegin_Stutter_Button__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_4__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsRecording_Test_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsRecording_Test_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Main_World__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Main_World__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_7__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_7__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_7__pf;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature__pf, "BndEvt__Button_Blueprint_Hitbox_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature" }, // 1138240369
		{ &Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_0, "ExecuteUbergraph_BeginSpeechButton_0" }, // 154835455
		{ &Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_1, "ExecuteUbergraph_BeginSpeechButton_1" }, // 1701950300
		{ &Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ExecuteUbergraph_BeginSpeechButton__pf_2, "ExecuteUbergraph_BeginSpeechButton_2" }, // 885353236
		{ &Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 380114047
		{ &Z_Construct_UFunction_ABeginSpeechButton_C__pf2198246146_bpf__ReceiveTick__pf, "ReceiveTick" }, // 1378797781
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "BeginSpeechButton__pf2198246146.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BeginSpeechButton_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/BeginSpeechButton.BeginSpeechButton_C" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__Audio__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "Audio" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__Audio__pf = { "Audio", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, bpv__Audio__pf), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__Audio__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__Audio__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__HitboxButton__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "HitboxButton" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__HitboxButton__pf = { "HitboxButton", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, bpv__HitboxButton__pf), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__HitboxButton__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__HitboxButton__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__DisplayxText__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "Display Text" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__DisplayxText__pfT = { "Display Text", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, bpv__DisplayxText__pfT), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__DisplayxText__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__DisplayxText__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__ButtonxTop__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "Button Top" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__ButtonxTop__pfT = { "Button Top", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, bpv__ButtonxTop__pfT), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__ButtonxTop__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__ButtonxTop__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__isPressedDown__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Pressed Down" },
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "isPressedDown" },
	};
#endif
	void Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__isPressedDown__pf_SetBit(void* Obj)
	{
		((ABeginSpeechButton_C__pf2198246146*)Obj)->bpv__isPressedDown__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__isPressedDown__pf = { "isPressedDown", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABeginSpeechButton_C__pf2198246146), &Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__isPressedDown__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__isPressedDown__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__isPressedDown__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__initializing__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Initializing" },
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "initializing" },
	};
#endif
	void Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__initializing__pf_SetBit(void* Obj)
	{
		((ABeginSpeechButton_C__pf2198246146*)Obj)->bpv__initializing__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__initializing__pf = { "initializing", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABeginSpeechButton_C__pf2198246146), &Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__initializing__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__initializing__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__initializing__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__UpLocation__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Up Location" },
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "UpLocation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__UpLocation__pf = { "UpLocation", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, bpv__UpLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__UpLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__UpLocation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__DownLocation__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Down Location" },
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "DownLocation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__DownLocation__pf = { "DownLocation", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, bpv__DownLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__DownLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__DownLocation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__Temp_byte_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "Temp_byte_Variable" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__Temp_byte_Variable__pf = { "Temp_byte_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__Temp_byte_Variable__pf), Z_Construct_UEnum_Engine_EMoveComponentAction, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__Temp_byte_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__Temp_byte_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf = { "CallFunc_BreakVector_X", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_BreakVector_X__pf), METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf = { "CallFunc_BreakVector_Y", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_BreakVector_Y__pf), METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf = { "CallFunc_BreakVector_Z", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_BreakVector_Z__pf), METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARecording_Test_C__pf1711902218_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_ARecording_Test_C__pf1711902218_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__Temp_byte_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "Temp_byte_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__Temp_byte_Variable_1__pf = { "Temp_byte_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__Temp_byte_Variable_1__pf), Z_Construct_UEnum_Engine_EMoveComponentAction, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__Temp_byte_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__Temp_byte_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsRecording_Test" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test__pf = { "K2Node_DynamicCast_AsRecording_Test", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__K2Node_DynamicCast_AsRecording_Test__pf), Z_Construct_UClass_ARecording_Test_C__pf1711902218_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ABeginSpeechButton_C__pf2198246146*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABeginSpeechButton_C__pf2198246146), &Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AStopSpeechButton_C__pf2198246146_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors_1" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf = { "CallFunc_GetAllActorsOfClass_OutActors_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors_2" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf = { "CallFunc_GetAllActorsOfClass_OutActors_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf = { "CallFunc_Array_Get_Item_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_Array_Get_Item_1__pf), Z_Construct_UClass_AStopSpeechButton_C__pf2198246146_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf = { "CallFunc_Array_Get_Item_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_Array_Get_Item_2__pf), Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsStop_Speech_Button__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsStop_Speech_Button" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsStop_Speech_Button__pf = { "K2Node_DynamicCast_AsStop_Speech_Button", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__K2Node_DynamicCast_AsStop_Speech_Button__pf), Z_Construct_UClass_AStopSpeechButton_C__pf2198246146_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsStop_Speech_Button__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsStop_Speech_Button__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((ABeginSpeechButton_C__pf2198246146*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABeginSpeechButton_C__pf2198246146), &Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMotion_Controller_Pawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf = { "K2Node_DynamicCast_AsMotion_Controller_Pawn", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf), Z_Construct_UClass_AMotionControllerPawn_C__pf3611121690_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_2" },
	};
#endif
	void Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj)
	{
		((ABeginSpeechButton_C__pf2198246146*)Obj)->b0l__K2Node_DynamicCast_bSuccess_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf = { "K2Node_DynamicCast_bSuccess_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABeginSpeechButton_C__pf2198246146), &Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OverlappedComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = { "K2Node_ComponentBoundEvent_OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf = { "K2Node_ComponentBoundEvent_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__K2Node_ComponentBoundEvent_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf = { "K2Node_ComponentBoundEvent_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__K2Node_ComponentBoundEvent_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherBodyIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = { "K2Node_ComponentBoundEvent_OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf), METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_bFromSweep" },
	};
#endif
	void Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit(void* Obj)
	{
		((ABeginSpeechButton_C__pf2198246146*)Obj)->b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = { "K2Node_ComponentBoundEvent_bFromSweep", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABeginSpeechButton_C__pf2198246146), &Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_SweepResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf = { "K2Node_ComponentBoundEvent_SweepResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__K2Node_ComponentBoundEvent_SweepResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf = { "CallFunc_BreakVector_X_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_BreakVector_X_1__pf), METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf = { "CallFunc_BreakVector_Y_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_BreakVector_Y_1__pf), METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf = { "CallFunc_BreakVector_Z_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_BreakVector_Z_1__pf), METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABeginStutterButton_C__pf2552470103_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors_3" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf = { "CallFunc_GetAllActorsOfClass_OutActors_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf = { "CallFunc_Array_Get_Item_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_Array_Get_Item_3__pf), Z_Construct_UClass_ABeginStutterButton_C__pf2552470103_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsBegin_Stutter_Button__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBegin_Stutter_Button" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsBegin_Stutter_Button__pf = { "K2Node_DynamicCast_AsBegin_Stutter_Button", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__K2Node_DynamicCast_AsBegin_Stutter_Button__pf), Z_Construct_UClass_ABeginStutterButton_C__pf2552470103_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsBegin_Stutter_Button__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsBegin_Stutter_Button__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_3" },
	};
#endif
	void Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit(void* Obj)
	{
		((ABeginSpeechButton_C__pf2198246146*)Obj)->b0l__K2Node_DynamicCast_bSuccess_3__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf = { "K2Node_DynamicCast_bSuccess_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABeginSpeechButton_C__pf2198246146), &Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARecording_Test_1_C__pf1711902218_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors_4" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf = { "CallFunc_GetAllActorsOfClass_OutActors_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_4" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_4__pf = { "CallFunc_Array_Get_Item_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_Array_Get_Item_4__pf), Z_Construct_UClass_ARecording_Test_1_C__pf1711902218_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_4__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClassWithTag_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf = { "CallFunc_GetAllActorsOfClassWithTag_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsRecording_Test_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test_1__pf = { "K2Node_DynamicCast_AsRecording_Test_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__K2Node_DynamicCast_AsRecording_Test_1__pf), Z_Construct_UClass_ARecording_Test_1_C__pf1711902218_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_4" },
	};
#endif
	void Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_SetBit(void* Obj)
	{
		((ABeginSpeechButton_C__pf2198246146*)Obj)->b0l__K2Node_DynamicCast_bSuccess_4__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf = { "K2Node_DynamicCast_bSuccess_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABeginSpeechButton_C__pf2198246146), &Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_5" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_5__pf = { "CallFunc_Array_Get_Item_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_Array_Get_Item_5__pf), Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Main_World__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsTrigger_Box_Main_World" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Main_World__pf = { "K2Node_DynamicCast_AsTrigger_Box_Main_World", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__K2Node_DynamicCast_AsTrigger_Box_Main_World__pf), Z_Construct_UClass_ATriggerBoxMainWorld_C__pf2552470103_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Main_World__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Main_World__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_5" },
	};
#endif
	void Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_SetBit(void* Obj)
	{
		((ABeginSpeechButton_C__pf2198246146*)Obj)->b0l__K2Node_DynamicCast_bSuccess_5__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf = { "K2Node_DynamicCast_bSuccess_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABeginSpeechButton_C__pf2198246146), &Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_GI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf = { "K2Node_DynamicCast_AsMenu_GI", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__K2Node_DynamicCast_AsMenu_GI__pf), Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_6" },
	};
#endif
	void Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf_SetBit(void* Obj)
	{
		((ABeginSpeechButton_C__pf2198246146*)Obj)->b0l__K2Node_DynamicCast_bSuccess_6__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf = { "K2Node_DynamicCast_bSuccess_6", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABeginSpeechButton_C__pf2198246146), &Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_GI_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf = { "K2Node_DynamicCast_AsMenu_GI_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__K2Node_DynamicCast_AsMenu_GI_1__pf), Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_7__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_7" },
	};
#endif
	void Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_7__pf_SetBit(void* Obj)
	{
		((ABeginSpeechButton_C__pf2198246146*)Obj)->b0l__K2Node_DynamicCast_bSuccess_7__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_7__pf = { "K2Node_DynamicCast_bSuccess_7", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABeginSpeechButton_C__pf2198246146), &Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_7__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_7__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_7__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakTransform_Location__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_BreakTransform_Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakTransform_Location__pf = { "CallFunc_BreakTransform_Location", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_BreakTransform_Location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakTransform_Location__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakTransform_Location__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakTransform_Rotation__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_BreakTransform_Rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakTransform_Rotation__pf = { "CallFunc_BreakTransform_Rotation", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_BreakTransform_Rotation__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakTransform_Rotation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakTransform_Rotation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakTransform_Scale__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_BreakTransform_Scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakTransform_Scale__pf = { "CallFunc_BreakTransform_Scale", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_BreakTransform_Scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakTransform_Scale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakTransform_Scale__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_X_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_X_2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_X_2__pf = { "CallFunc_BreakVector_X_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_BreakVector_X_2__pf), METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_X_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_X_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Y_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Y_2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Y_2__pf = { "CallFunc_BreakVector_Y_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_BreakVector_Y_2__pf), METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Y_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Y_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Z_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BeginSpeechButton__pf2198246146.h" },
		{ "OverrideNativeName", "CallFunc_BreakVector_Z_2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Z_2__pf = { "CallFunc_BreakVector_Z_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABeginSpeechButton_C__pf2198246146, b0l__CallFunc_BreakVector_Z_2__pf), METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Z_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Z_2__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__Audio__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__HitboxButton__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__DisplayxText__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__ButtonxTop__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__isPressedDown__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__initializing__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__UpLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_bpv__DownLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__Temp_byte_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_X__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Y__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Z__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__Temp_byte_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsStop_Speech_Button__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsMotion_Controller_Pawn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_X_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Y_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Z_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsBegin_Stutter_Button__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClassWithTag_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsRecording_Test_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_Array_Get_Item_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsTrigger_Box_Main_World__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_6__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_7__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakTransform_Location__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakTransform_Rotation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakTransform_Scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_X_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Y_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::NewProp_b0l__CallFunc_BreakVector_Z_2__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABeginSpeechButton_C__pf2198246146>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::ClassParams = {
		&ABeginSpeechButton_C__pf2198246146::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/BeginSpeechButton"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BeginSpeechButton_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABeginSpeechButton_C__pf2198246146, TEXT("BeginSpeechButton_C"), 996632610);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABeginSpeechButton_C__pf2198246146>()
	{
		return ABeginSpeechButton_C__pf2198246146::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABeginSpeechButton_C__pf2198246146(Z_Construct_UClass_ABeginSpeechButton_C__pf2198246146, &ABeginSpeechButton_C__pf2198246146::StaticClass, TEXT("/Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/BeginSpeechButton"), TEXT("BeginSpeechButton_C"), true, TEXT("/Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/BeginSpeechButton"), TEXT("/Game/Stutter_Speak_Content/Pre-Fabs/CompleteModels/BeginSpeechButton.BeginSpeechButton_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABeginSpeechButton_C__pf2198246146);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
