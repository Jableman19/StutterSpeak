// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/PickupActorInterface__pf3611121690.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupActorInterface__pf3611121690() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPickupActorInterface_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UPickupActorInterface_C();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void IPickupActorInterface_C::bpf__Drop__pf()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__Drop__pf instead.");
	}
	void IPickupActorInterface_C::bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_bpf__Pickup__pf instead.");
	}
	void UPickupActorInterface_C::StaticRegisterNativesUPickupActorInterface_C()
	{
	}
	struct Z_Construct_UFunction_UPickupActorInterface_C_bpf__Drop__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPickupActorInterface_C_bpf__Drop__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/PickupActorInterface__pf3611121690.h" },
		{ "OverrideNativeName", "Drop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPickupActorInterface_C_bpf__Drop__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPickupActorInterface_C, nullptr, "Drop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPickupActorInterface_C_bpf__Drop__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupActorInterface_C_bpf__Drop__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPickupActorInterface_C_bpf__Drop__pf()
	{
		UObject* Outer = Z_Construct_UClass_UPickupActorInterface_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Drop" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPickupActorInterface_C_bpf__Drop__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPickupActorInterface_C_bpf__Pickup__pf_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPickupActorInterface_C_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPickupActorInterface_C_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf = { "bpp__AttachTo__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(PickupActorInterface_C_eventbpf__Pickup__pf_Parms, bpp__AttachTo__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPickupActorInterface_C_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupActorInterface_C_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPickupActorInterface_C_bpf__Pickup__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPickupActorInterface_C_bpf__Pickup__pf_Statics::NewProp_bpp__AttachTo__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPickupActorInterface_C_bpf__Pickup__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/PickupActorInterface__pf3611121690.h" },
		{ "OverrideNativeName", "Pickup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPickupActorInterface_C_bpf__Pickup__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPickupActorInterface_C, nullptr, "Pickup", nullptr, nullptr, sizeof(PickupActorInterface_C_eventbpf__Pickup__pf_Parms), Z_Construct_UFunction_UPickupActorInterface_C_bpf__Pickup__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupActorInterface_C_bpf__Pickup__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPickupActorInterface_C_bpf__Pickup__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupActorInterface_C_bpf__Pickup__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPickupActorInterface_C_bpf__Pickup__pf()
	{
		UObject* Outer = Z_Construct_UClass_UPickupActorInterface_C();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Pickup" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPickupActorInterface_C_bpf__Pickup__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPickupActorInterface_C_NoRegister()
	{
		return UPickupActorInterface_C::StaticClass();
	}
	struct Z_Construct_UClass_UPickupActorInterface_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPickupActorInterface_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPickupActorInterface_C_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPickupActorInterface_C_bpf__Drop__pf, "Drop" }, // 985383603
		{ &Z_Construct_UFunction_UPickupActorInterface_C_bpf__Pickup__pf, "Pickup" }, // 3035630633
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupActorInterface_C_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PickupActorInterface__pf3611121690.h" },
		{ "OverrideNativeName", "PickupActorInterface_C" },
		{ "ReplaceConverted", "/Game/Starter_Content/VirtualRealityBP/Blueprints/PickupActorInterface.PickupActorInterface_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPickupActorInterface_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPickupActorInterface_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPickupActorInterface_C_Statics::ClassParams = {
		&UPickupActorInterface_C::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPickupActorInterface_C_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupActorInterface_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPickupActorInterface_C()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Starter_Content/VirtualRealityBP/Blueprints/PickupActorInterface"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("PickupActorInterface_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPickupActorInterface_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UPickupActorInterface_C, TEXT("PickupActorInterface_C"), 2406824090);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UPickupActorInterface_C>()
	{
		return UPickupActorInterface_C::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPickupActorInterface_C(Z_Construct_UClass_UPickupActorInterface_C, &UPickupActorInterface_C::StaticClass, TEXT("/Game/Starter_Content/VirtualRealityBP/Blueprints/PickupActorInterface"), TEXT("PickupActorInterface_C"), true, TEXT("/Game/Starter_Content/VirtualRealityBP/Blueprints/PickupActorInterface"), TEXT("/Game/Starter_Content/VirtualRealityBP/Blueprints/PickupActorInterface.PickupActorInterface_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickupActorInterface_C);
	static FName NAME_UPickupActorInterface_C_bpf__Drop__pf = FName(TEXT("Drop"));
	void IPickupActorInterface_C::Execute_bpf__Drop__pf(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPickupActorInterface_C::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPickupActorInterface_C_bpf__Drop__pf);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UPickupActorInterface_C_bpf__Pickup__pf = FName(TEXT("Pickup"));
	void IPickupActorInterface_C::Execute_bpf__Pickup__pf(UObject* O, USceneComponent* bpp__AttachTo__pf)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPickupActorInterface_C::StaticClass()));
		PickupActorInterface_C_eventbpf__Pickup__pf_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPickupActorInterface_C_bpf__Pickup__pf);
		if (Func)
		{
			Parms.bpp__AttachTo__pf=bpp__AttachTo__pf;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
