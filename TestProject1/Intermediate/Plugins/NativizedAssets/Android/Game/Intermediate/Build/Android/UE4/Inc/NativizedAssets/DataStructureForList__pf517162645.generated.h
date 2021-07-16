// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef NATIVIZEDASSETS_DataStructureForList__pf517162645_generated_h
#error "DataStructureForList__pf517162645.generated.h already included, missing '#pragma once' in DataStructureForList__pf517162645.h"
#endif
#define NATIVIZEDASSETS_DataStructureForList__pf517162645_generated_h

#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_SPARSE_DATA
#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__BP_OnEntryReleased__pf); \
	DECLARE_FUNCTION(execbpf__BP_OnItemExpansionChanged__pf); \
	DECLARE_FUNCTION(execbpf__BP_OnItemSelectionChanged__pf); \
	DECLARE_FUNCTION(execbpf__OnListItemObjectSet__pf);


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__BP_OnEntryReleased__pf); \
	DECLARE_FUNCTION(execbpf__BP_OnItemExpansionChanged__pf); \
	DECLARE_FUNCTION(execbpf__BP_OnItemSelectionChanged__pf); \
	DECLARE_FUNCTION(execbpf__OnListItemObjectSet__pf);


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_EVENT_PARMS \
	struct DataStructureForList_C__pf517162645_eventbpf__BP_OnItemExpansionChanged__pf_Parms \
	{ \
		bool bpp__bIsExpanded__pf; \
	}; \
	struct DataStructureForList_C__pf517162645_eventbpf__BP_OnItemSelectionChanged__pf_Parms \
	{ \
		bool bpp__bIsSelected__pf; \
	}; \
	struct DataStructureForList_C__pf517162645_eventbpf__OnListItemObjectSet__pf_Parms \
	{ \
		UObject* bpp__ListItemObject__pf; \
	};


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_CALLBACK_WRAPPERS \
	void eventbpf__BP_OnEntryReleased__pf(); \
 \
	void eventbpf__BP_OnItemExpansionChanged__pf(bool bpp__bIsExpanded__pf); \
 \
	void eventbpf__BP_OnItemSelectionChanged__pf(bool bpp__bIsSelected__pf); \
 \
	void eventbpf__OnListItemObjectSet__pf(UObject* bpp__ListItemObject__pf); \



#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataStructureForList_C__pf517162645(); \
	friend struct Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics; \
public: \
	DECLARE_CLASS(UDataStructureForList_C__pf517162645, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/DataStructureForList"), NO_API) \
	DECLARE_SERIALIZER(UDataStructureForList_C__pf517162645) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UDataStructureForList_C__pf517162645*>(this); }


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDataStructureForList_C__pf517162645(); \
	friend struct Z_Construct_UClass_UDataStructureForList_C__pf517162645_Statics; \
public: \
	DECLARE_CLASS(UDataStructureForList_C__pf517162645, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/Stutter_Speak_Content/Widgets/Graphing_Widgets/DataStructureForList"), NO_API) \
	DECLARE_SERIALIZER(UDataStructureForList_C__pf517162645) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UDataStructureForList_C__pf517162645*>(this); }


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataStructureForList_C__pf517162645(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataStructureForList_C__pf517162645) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataStructureForList_C__pf517162645); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataStructureForList_C__pf517162645); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataStructureForList_C__pf517162645(UDataStructureForList_C__pf517162645&&); \
	NO_API UDataStructureForList_C__pf517162645(const UDataStructureForList_C__pf517162645&); \
public:


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataStructureForList_C__pf517162645(UDataStructureForList_C__pf517162645&&); \
	NO_API UDataStructureForList_C__pf517162645(const UDataStructureForList_C__pf517162645&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataStructureForList_C__pf517162645); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataStructureForList_C__pf517162645); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataStructureForList_C__pf517162645)


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_PRIVATE_PROPERTY_OFFSET
#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_11_PROLOG \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_EVENT_PARMS


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_PRIVATE_PROPERTY_OFFSET \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_SPARSE_DATA \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_RPC_WRAPPERS \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_CALLBACK_WRAPPERS \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_INCLASS \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_PRIVATE_PROPERTY_OFFSET \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_SPARSE_DATA \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_CALLBACK_WRAPPERS \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_INCLASS_NO_PURE_DECLS \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class UDataStructureForList_C__pf517162645>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_DataStructureForList__pf517162645_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
