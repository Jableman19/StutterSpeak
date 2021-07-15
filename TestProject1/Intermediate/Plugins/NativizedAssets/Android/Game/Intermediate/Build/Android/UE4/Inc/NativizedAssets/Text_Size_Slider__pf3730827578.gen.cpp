// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Text_Size_Slider__pf3730827578.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeText_Size_Slider__pf3730827578() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AText_Size_Slider_C__pf3730827578();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ASettingsBox_C__pf3730827578_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPickupActorInterface_C_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AText_Size_Slider_C__pf3730827578::execbpf__ResetxLEDS__pfT)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_bpp__LEDxOn__pfT);
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_bpp__LEDxOffxx1x__pfTTLK);
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_bpp__LEDxOffxx2x__pfTTLK);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ResetxLEDS__pfT(Z_Param_bpp__LEDxOn__pfT,Z_Param_bpp__LEDxOffxx1x__pfTTLK,Z_Param_bpp__LEDxOffxx2x__pfTTLK);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AText_Size_Slider_C__pf3730827578::execbpf__ChangexLEDS__pfT)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_bpp__LEDxOn__pfT);
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_bpp__LEDxOff__pfT);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ChangexLEDS__pfT(Z_Param_bpp__LEDxOn__pfT,Z_Param_bpp__LEDxOff__pfT);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AText_Size_Slider_C__pf3730827578::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AText_Size_Slider_C__pf3730827578::execbpf__Pickup__pf)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_bpp__AttachTo__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Pickup__pf(Z_Param_bpp__AttachTo__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AText_Size_Slider_C__pf3730827578::execbpf__Drop__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Drop__pf();
		P_NATIVE_END;
	}
	static FName NAME_AText_Size_Slider_C__pf3730827578_bpf__Drop__pf = FName(TEXT("Drop"));
	void AText_Size_Slider_C__pf3730827578::eventbpf__Drop__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AText_Size_Slider_C__pf3730827578_bpf__Drop__pf),NULL);
	}
	static FName NAME_AText_Size_Slider_C__pf3730827578_bpf__Pickup__pf = FName(TEXT("Pickup"));
	void AText_Size_Slider_C__pf3730827578::eventbpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
	{
		Text_Size_Slider_C__pf3730827578_eventbpf__Pickup__pf_Parms Parms;
		Parms.bpp__AttachTo__pf=bpp__AttachTo__pf;
		ProcessEvent(FindFunctionChecked(NAME_AText_Size_Slider_C__pf3730827578_bpf__Pickup__pf),&Parms);
	}
	static FName NAME_AText_Size_Slider_C__pf3730827578_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AText_Size_Slider_C__pf3730827578::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AText_Size_Slider_C__pf3730827578_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void AText_Size_Slider_C__pf3730827578::StaticRegisterNativesAText_Size_Slider_C__pf3730827578()
	{
		UClass* Class = AText_Size_Slider_C__pf3730827578::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Change LEDS", &AText_Size_Slider_C__pf3730827578::execbpf__ChangexLEDS__pfT },
			{ "Drop", &AText_Size_Slider_C__pf3730827578::execbpf__Drop__pf },
			{ "Pickup", &AText_Size_Slider_C__pf3730827578::execbpf__Pickup__pf },
			{ "ReceiveBeginPlay", &AText_Size_Slider_C__pf3730827578::execbpf__ReceiveBeginPlay__pf },
			{ "Reset LEDS", &AText_Size_Slider_C__pf3730827578::execbpf__ResetxLEDS__pfT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics
	{
		struct Text_Size_Slider_C__pf3730827578_eventbpf__ChangexLEDS__pfT_Parms
		{
			UStaticMeshComponent* bpp__LEDxOn__pfT;
			UStaticMeshComponent* bpp__LEDxOff__pfT;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__LEDxOn__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__LEDxOn__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__LEDxOff__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__LEDxOff__pfT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics::NewProp_bpp__LEDxOn__pfT_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics::NewProp_bpp__LEDxOn__pfT = { "bpp__LEDxOn__pfT", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Text_Size_Slider_C__pf3730827578_eventbpf__ChangexLEDS__pfT_Parms, bpp__LEDxOn__pfT), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics::NewProp_bpp__LEDxOn__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics::NewProp_bpp__LEDxOn__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics::NewProp_bpp__LEDxOff__pfT_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics::NewProp_bpp__LEDxOff__pfT = { "bpp__LEDxOff__pfT", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Text_Size_Slider_C__pf3730827578_eventbpf__ChangexLEDS__pfT_Parms, bpp__LEDxOff__pfT), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics::NewProp_bpp__LEDxOff__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics::NewProp_bpp__LEDxOff__pfT_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics::NewProp_bpp__LEDxOn__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics::NewProp_bpp__LEDxOff__pfT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "Change LEDS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AText_Size_Slider_C__pf3730827578, nullptr, "Change LEDS", nullptr, nullptr, sizeof(Text_Size_Slider_C__pf3730827578_eventbpf__ChangexLEDS__pfT_Parms), Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT()
	{
		UObject* Outer = Z_Construct_UClass_AText_Size_Slider_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Change LEDS" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Drop__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Drop__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "Drop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Drop__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AText_Size_Slider_C__pf3730827578, nullptr, "Drop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Drop__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Drop__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Drop__pf()
	{
		UObject* Outer = Z_Construct_UClass_AText_Size_Slider_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Drop" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Drop__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Pickup__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__AttachTo__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__AttachTo__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf = { "bpp__AttachTo__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Text_Size_Slider_C__pf3730827578_eventbpf__Pickup__pf_Parms, bpp__AttachTo__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Pickup__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Pickup__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "Pickup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Pickup__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AText_Size_Slider_C__pf3730827578, nullptr, "Pickup", nullptr, nullptr, sizeof(Text_Size_Slider_C__pf3730827578_eventbpf__Pickup__pf_Parms), Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Pickup__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Pickup__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Pickup__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Pickup__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Pickup__pf()
	{
		UObject* Outer = Z_Construct_UClass_AText_Size_Slider_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Pickup" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Pickup__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AText_Size_Slider_C__pf3730827578, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AText_Size_Slider_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics
	{
		struct Text_Size_Slider_C__pf3730827578_eventbpf__ResetxLEDS__pfT_Parms
		{
			UStaticMeshComponent* bpp__LEDxOn__pfT;
			UStaticMeshComponent* bpp__LEDxOffxx1x__pfTTLK;
			UStaticMeshComponent* bpp__LEDxOffxx2x__pfTTLK;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__LEDxOn__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__LEDxOn__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__LEDxOffxx1x__pfTTLK_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__LEDxOffxx1x__pfTTLK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__LEDxOffxx2x__pfTTLK_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__LEDxOffxx2x__pfTTLK;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::NewProp_bpp__LEDxOn__pfT_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::NewProp_bpp__LEDxOn__pfT = { "bpp__LEDxOn__pfT", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Text_Size_Slider_C__pf3730827578_eventbpf__ResetxLEDS__pfT_Parms, bpp__LEDxOn__pfT), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::NewProp_bpp__LEDxOn__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::NewProp_bpp__LEDxOn__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::NewProp_bpp__LEDxOffxx1x__pfTTLK_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::NewProp_bpp__LEDxOffxx1x__pfTTLK = { "bpp__LEDxOffxx1x__pfTTLK", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Text_Size_Slider_C__pf3730827578_eventbpf__ResetxLEDS__pfT_Parms, bpp__LEDxOffxx1x__pfTTLK), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::NewProp_bpp__LEDxOffxx1x__pfTTLK_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::NewProp_bpp__LEDxOffxx1x__pfTTLK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::NewProp_bpp__LEDxOffxx2x__pfTTLK_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::NewProp_bpp__LEDxOffxx2x__pfTTLK = { "bpp__LEDxOffxx2x__pfTTLK", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Text_Size_Slider_C__pf3730827578_eventbpf__ResetxLEDS__pfT_Parms, bpp__LEDxOffxx2x__pfTTLK), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::NewProp_bpp__LEDxOffxx2x__pfTTLK_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::NewProp_bpp__LEDxOffxx2x__pfTTLK_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::NewProp_bpp__LEDxOn__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::NewProp_bpp__LEDxOffxx1x__pfTTLK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::NewProp_bpp__LEDxOffxx2x__pfTTLK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "Reset LEDS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AText_Size_Slider_C__pf3730827578, nullptr, "Reset LEDS", nullptr, nullptr, sizeof(Text_Size_Slider_C__pf3730827578_eventbpf__ResetxLEDS__pfT_Parms), Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT()
	{
		UObject* Outer = Z_Construct_UClass_AText_Size_Slider_C__pf3730827578();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Reset LEDS" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_NoRegister()
	{
		return AText_Size_Slider_C__pf3730827578::StaticClass();
	}
	struct Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Large__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Large__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Small__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Small__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Medium__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Medium__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LEDxxLargex__pfTLK_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__LEDxxLargex__pfTLK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LEDxxMeduimx__pfTLK_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__LEDxxMeduimx__pfTLK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LEDxxSmallx__pfTLK_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__LEDxxSmallx__pfTLK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Slider__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Slider__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Rail__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Rail__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CurrentxIndex__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__CurrentxIndex__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NextxIndex__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__NextxIndex__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Newxlocation__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__Newxlocation__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AsxSettingsxBox__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__AsxSettingsxBox__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Sound__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Sound__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_AttachTo__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchInteger_CmpSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_SwitchInteger_CmpSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchInteger_CmpSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsSettings_Box__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsSettings_Box__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ChangexLEDS__pfT, "Change LEDS" }, // 2760435163
		{ &Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Drop__pf, "Drop" }, // 946868336
		{ &Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__Pickup__pf, "Pickup" }, // 774322140
		{ &Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3531102480
		{ &Z_Construct_UFunction_AText_Size_Slider_C__pf3730827578_bpf__ResetxLEDS__pfT, "Reset LEDS" }, // 3564568964
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Text_Size_Slider__pf3730827578.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Text_Size_Slider_C" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Blueprints/Text_Size_Slider.Text_Size_Slider_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Audio__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "Audio" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Audio__pf = { "Audio", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, bpv__Audio__pf), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Audio__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Audio__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Large__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "Large" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Large__pf = { "Large", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, bpv__Large__pf), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Large__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Large__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Small__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "Small" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Small__pf = { "Small", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, bpv__Small__pf), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Small__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Small__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Medium__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "Medium" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Medium__pf = { "Medium", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, bpv__Medium__pf), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Medium__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Medium__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__LEDxxLargex__pfTLK_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "LED (Large)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__LEDxxLargex__pfTLK = { "LED (Large)", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, bpv__LEDxxLargex__pfTLK), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__LEDxxLargex__pfTLK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__LEDxxLargex__pfTLK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__LEDxxMeduimx__pfTLK_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "LED (Meduim)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__LEDxxMeduimx__pfTLK = { "LED (Meduim)", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, bpv__LEDxxMeduimx__pfTLK), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__LEDxxMeduimx__pfTLK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__LEDxxMeduimx__pfTLK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__LEDxxSmallx__pfTLK_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "LED (Small)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__LEDxxSmallx__pfTLK = { "LED (Small)", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, bpv__LEDxxSmallx__pfTLK), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__LEDxxSmallx__pfTLK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__LEDxxSmallx__pfTLK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Slider__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "Slider" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Slider__pf = { "Slider", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, bpv__Slider__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Slider__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Slider__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Rail__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "Rail" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Rail__pf = { "Rail", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, bpv__Rail__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Rail__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Rail__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__CurrentxIndex__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Current Index" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Current Index" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__CurrentxIndex__pfT = { "Current Index", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, bpv__CurrentxIndex__pfT), METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__CurrentxIndex__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__CurrentxIndex__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__NextxIndex__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Next Index" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Next Index" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__NextxIndex__pfT = { "Next Index", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, bpv__NextxIndex__pfT), METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__NextxIndex__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__NextxIndex__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Newxlocation__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "New Location" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "New location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Newxlocation__pfT = { "New location", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, bpv__Newxlocation__pfT), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Newxlocation__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Newxlocation__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__AsxSettingsxBox__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "As Settings Box" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "As Settings Box" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__AsxSettingsxBox__pfTT = { "As Settings Box", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, bpv__AsxSettingsxBox__pfTT), Z_Construct_UClass_ASettingsBox_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__AsxSettingsxBox__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__AsxSettingsxBox__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Sound__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Sound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Sound__pf = { "Sound", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, bpv__Sound__pf), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Sound__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Sound__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_Event_AttachTo" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf = { "K2Node_Event_AttachTo", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, b0l__K2Node_Event_AttachTo__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_SwitchInteger_CmpSuccess" },
	};
#endif
	void Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_SetBit(void* Obj)
	{
		((AText_Size_Slider_C__pf3730827578*)Obj)->b0l__K2Node_SwitchInteger_CmpSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf = { "K2Node_SwitchInteger_CmpSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AText_Size_Slider_C__pf3730827578), &Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_SwitchInteger_CmpSuccess_1" },
	};
#endif
	void Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess_1__pf_SetBit(void* Obj)
	{
		((AText_Size_Slider_C__pf3730827578*)Obj)->b0l__K2Node_SwitchInteger_CmpSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess_1__pf = { "K2Node_SwitchInteger_CmpSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AText_Size_Slider_C__pf3730827578), &Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetRelativeLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf = { "CallFunc_K2_SetRelativeLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMenu_GI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf = { "K2Node_DynamicCast_AsMenu_GI", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, b0l__K2Node_DynamicCast_AsMenu_GI__pf), Z_Construct_UClass_UMenuGI_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AText_Size_Slider_C__pf3730827578*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AText_Size_Slider_C__pf3730827578), &Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsSettings_Box__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsSettings_Box" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsSettings_Box__pf = { "K2Node_DynamicCast_AsSettings_Box", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, b0l__K2Node_DynamicCast_AsSettings_Box__pf), Z_Construct_UClass_ASettingsBox_C__pf3730827578_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsSettings_Box__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsSettings_Box__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((AText_Size_Slider_C__pf3730827578*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AText_Size_Slider_C__pf3730827578), &Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Text_Size_Slider__pf3730827578.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetRelativeLocation_SweepHitResult_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf = { "CallFunc_K2_SetRelativeLocation_SweepHitResult_1", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AText_Size_Slider_C__pf3730827578, b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Audio__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Large__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Small__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Medium__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__LEDxxLargex__pfTLK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__LEDxxMeduimx__pfTLK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__LEDxxSmallx__pfTLK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Slider__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Rail__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__CurrentxIndex__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__NextxIndex__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Newxlocation__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__AsxSettingsxBox__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_bpv__Sound__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_Event_AttachTo__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsMenu_GI__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_AsSettings_Box__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPickupActorInterface_C_NoRegister, (int32)VTABLE_OFFSET(AText_Size_Slider_C__pf3730827578, IPickupActorInterface_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AText_Size_Slider_C__pf3730827578>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::ClassParams = {
		&AText_Size_Slider_C__pf3730827578::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AText_Size_Slider_C__pf3730827578()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Blueprints/Text_Size_Slider"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Text_Size_Slider_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AText_Size_Slider_C__pf3730827578_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AText_Size_Slider_C__pf3730827578, TEXT("Text_Size_Slider_C"), 2712483844);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AText_Size_Slider_C__pf3730827578>()
	{
		return AText_Size_Slider_C__pf3730827578::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AText_Size_Slider_C__pf3730827578(Z_Construct_UClass_AText_Size_Slider_C__pf3730827578, &AText_Size_Slider_C__pf3730827578::StaticClass, TEXT("/Game/Stutter_Speak_Content/Blueprints/Text_Size_Slider"), TEXT("Text_Size_Slider_C"), true, TEXT("/Game/Stutter_Speak_Content/Blueprints/Text_Size_Slider"), TEXT("/Game/Stutter_Speak_Content/Blueprints/Text_Size_Slider.Text_Size_Slider_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AText_Size_Slider_C__pf3730827578);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
