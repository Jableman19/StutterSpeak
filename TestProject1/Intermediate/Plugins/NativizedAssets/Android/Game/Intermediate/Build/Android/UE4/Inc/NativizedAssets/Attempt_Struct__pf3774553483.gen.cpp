// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Attempt_Struct__pf3774553483.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttempt_Struct__pf3774553483() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483();
// End Cross Module References
class UScriptStruct* FAttempt_Struct__pf3774553483::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Structs/Attempt_Struct"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("Attempt_Struct")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483, StructPackage, TEXT("Attempt_Struct"), sizeof(FAttempt_Struct__pf3774553483), Get_Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Hash());
	}
	return Singleton;
}
template<> NATIVIZEDASSETS_API UScriptStruct* StaticStruct<FAttempt_Struct__pf3774553483>()
{
	return FAttempt_Struct__pf3774553483::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttempt_Struct__pf3774553483(FAttempt_Struct__pf3774553483::StaticStruct, TEXT("/Game/Stutter_Speak_Content/Structs/Attempt_Struct"), TEXT("Attempt_Struct"), true, TEXT("/Game/Stutter_Speak_Content/Structs/Attempt_Struct"), TEXT("/Game/Stutter_Speak_Content/Structs/Attempt_Struct.Attempt_Struct"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFAttempt_Struct__pf3774553483
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFAttempt_Struct__pf3774553483()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Attempt_Struct")),new UScriptStruct::TCppStructOps<FAttempt_Struct__pf3774553483>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFAttempt_Struct__pf3774553483;
	struct Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics
	{
		static UObject* OuterFuncGetter();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpeechName_18_D75C383C4968F0C49AD9E4898AEE2B91__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__SpeechName_18_D75C383C4968F0C49AD9E4898AEE2B91__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Attempt_19_C99ABC3A4628DAB24147708744F7C892__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Attempt_19_C99ABC3A4628DAB24147708744F7C892__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AudienceLooking_22_26B162624042D88196C3F586D0244BDC__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__AudienceLooking_22_26B162624042D88196C3F586D0244BDC__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MessageSatisfacationRating_26_44FD916B4F7CF871DA34A0B63821B22B__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__MessageSatisfacationRating_26_44FD916B4F7CF871DA34A0B63821B22B__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__FluencySatisfactionRating_27_DD8AA0664DB55712E4119A826B53557F__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__FluencySatisfactionRating_27_DD8AA0664DB55712E4119A826B53557F__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
	UObject* Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::OuterFuncGetter()
	{
		return FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Structs/Attempt_Struct"));	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Attempt_Struct__pf3774553483.h" },
		{ "OverrideNativeName", "Attempt_Struct" },
		{ "ReplaceConverted", "/Game/Stutter_Speak_Content/Structs/Attempt_Struct.Attempt_Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttempt_Struct__pf3774553483>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__SpeechName_18_D75C383C4968F0C49AD9E4898AEE2B91__pf_MetaData[] = {
		{ "Category", "Attempt_Struct__pf3774553483" },
		{ "DisplayName", ":Speech Name" },
		{ "ModuleRelativePath", "Public/Attempt_Struct__pf3774553483.h" },
		{ "OverrideNativeName", "SpeechName_18_D75C383C4968F0C49AD9E4898AEE2B91" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__SpeechName_18_D75C383C4968F0C49AD9E4898AEE2B91__pf = { "SpeechName_18_D75C383C4968F0C49AD9E4898AEE2B91", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttempt_Struct__pf3774553483, bpv__SpeechName_18_D75C383C4968F0C49AD9E4898AEE2B91__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__SpeechName_18_D75C383C4968F0C49AD9E4898AEE2B91__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__SpeechName_18_D75C383C4968F0C49AD9E4898AEE2B91__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__Attempt_19_C99ABC3A4628DAB24147708744F7C892__pf_MetaData[] = {
		{ "Category", "Attempt_Struct__pf3774553483" },
		{ "DisplayName", ":Attempt #" },
		{ "ModuleRelativePath", "Public/Attempt_Struct__pf3774553483.h" },
		{ "OverrideNativeName", "Attempt_19_C99ABC3A4628DAB24147708744F7C892" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__Attempt_19_C99ABC3A4628DAB24147708744F7C892__pf = { "Attempt_19_C99ABC3A4628DAB24147708744F7C892", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttempt_Struct__pf3774553483, bpv__Attempt_19_C99ABC3A4628DAB24147708744F7C892__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__Attempt_19_C99ABC3A4628DAB24147708744F7C892__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__Attempt_19_C99ABC3A4628DAB24147708744F7C892__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA__pf_MetaData[] = {
		{ "Category", "Attempt_Struct__pf3774553483" },
		{ "DisplayName", ":Total Time Taken" },
		{ "ModuleRelativePath", "Public/Attempt_Struct__pf3774553483.h" },
		{ "OverrideNativeName", "TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA__pf = { "TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttempt_Struct__pf3774553483, bpv__TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD__pf_MetaData[] = {
		{ "Category", "Attempt_Struct__pf3774553483" },
		{ "DisplayName", ":Total Time Stuttering" },
		{ "ModuleRelativePath", "Public/Attempt_Struct__pf3774553483.h" },
		{ "OverrideNativeName", "TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD__pf = { "TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttempt_Struct__pf3774553483, bpv__TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__AudienceLooking_22_26B162624042D88196C3F586D0244BDC__pf_MetaData[] = {
		{ "Category", "Attempt_Struct__pf3774553483" },
		{ "DisplayName", ":Audience Looking %" },
		{ "ModuleRelativePath", "Public/Attempt_Struct__pf3774553483.h" },
		{ "OverrideNativeName", "AudienceLooking_22_26B162624042D88196C3F586D0244BDC" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__AudienceLooking_22_26B162624042D88196C3F586D0244BDC__pf = { "AudienceLooking_22_26B162624042D88196C3F586D0244BDC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttempt_Struct__pf3774553483, bpv__AudienceLooking_22_26B162624042D88196C3F586D0244BDC__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__AudienceLooking_22_26B162624042D88196C3F586D0244BDC__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__AudienceLooking_22_26B162624042D88196C3F586D0244BDC__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__MessageSatisfacationRating_26_44FD916B4F7CF871DA34A0B63821B22B__pf_MetaData[] = {
		{ "Category", "Attempt_Struct__pf3774553483" },
		{ "DisplayName", ":Message Satisfacation Rating" },
		{ "ModuleRelativePath", "Public/Attempt_Struct__pf3774553483.h" },
		{ "OverrideNativeName", "MessageSatisfacationRating_26_44FD916B4F7CF871DA34A0B63821B22B" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__MessageSatisfacationRating_26_44FD916B4F7CF871DA34A0B63821B22B__pf = { "MessageSatisfacationRating_26_44FD916B4F7CF871DA34A0B63821B22B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttempt_Struct__pf3774553483, bpv__MessageSatisfacationRating_26_44FD916B4F7CF871DA34A0B63821B22B__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__MessageSatisfacationRating_26_44FD916B4F7CF871DA34A0B63821B22B__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__MessageSatisfacationRating_26_44FD916B4F7CF871DA34A0B63821B22B__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__FluencySatisfactionRating_27_DD8AA0664DB55712E4119A826B53557F__pf_MetaData[] = {
		{ "Category", "Attempt_Struct__pf3774553483" },
		{ "DisplayName", ":Fluency Satisfaction Rating" },
		{ "ModuleRelativePath", "Public/Attempt_Struct__pf3774553483.h" },
		{ "OverrideNativeName", "FluencySatisfactionRating_27_DD8AA0664DB55712E4119A826B53557F" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__FluencySatisfactionRating_27_DD8AA0664DB55712E4119A826B53557F__pf = { "FluencySatisfactionRating_27_DD8AA0664DB55712E4119A826B53557F", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttempt_Struct__pf3774553483, bpv__FluencySatisfactionRating_27_DD8AA0664DB55712E4119A826B53557F__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__FluencySatisfactionRating_27_DD8AA0664DB55712E4119A826B53557F__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__FluencySatisfactionRating_27_DD8AA0664DB55712E4119A826B53557F__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__SpeechName_18_D75C383C4968F0C49AD9E4898AEE2B91__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__Attempt_19_C99ABC3A4628DAB24147708744F7C892__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__TotalTimeTaken_20_7B09BFA64F833BC56D56C5983350F1DA__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__TotalTimeStuttering_21_1FB96301419BBBED9E6C82AB8C5756CD__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__AudienceLooking_22_26B162624042D88196C3F586D0244BDC__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__MessageSatisfacationRating_26_44FD916B4F7CF871DA34A0B63821B22B__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::NewProp_bpv__FluencySatisfactionRating_27_DD8AA0664DB55712E4119A826B53557F__pf,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::ReturnStructParams = {
		(UObject* (*)())&OuterFuncGetter,
		nullptr,
		&NewStructOps,
		"Attempt_Struct",
		sizeof(FAttempt_Struct__pf3774553483),
		alignof(FAttempt_Struct__pf3774553483),
		Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::PropPointers),
		RF_Public|RF_Transient,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Hash();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Stutter_Speak_Content/Structs/Attempt_Struct"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Attempt_Struct"), sizeof(FAttempt_Struct__pf3774553483), Get_Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Hash(), true);
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttempt_Struct__pf3774553483_Hash() { return 1704561246U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
