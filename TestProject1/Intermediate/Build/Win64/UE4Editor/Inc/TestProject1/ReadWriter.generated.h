// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT1_ReadWriter_generated_h
#error "ReadWriter.generated.h already included, missing '#pragma once' in ReadWriter.h"
#endif
#define TESTPROJECT1_ReadWriter_generated_h

#define TestProject1_Source_TestProject1_ReadWriter_h_16_SPARSE_DATA
#define TestProject1_Source_TestProject1_ReadWriter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveStringToFile); \
	DECLARE_FUNCTION(execLoadFileToString);


#define TestProject1_Source_TestProject1_ReadWriter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveStringToFile); \
	DECLARE_FUNCTION(execLoadFileToString);


#define TestProject1_Source_TestProject1_ReadWriter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReadWriter(); \
	friend struct Z_Construct_UClass_UReadWriter_Statics; \
public: \
	DECLARE_CLASS(UReadWriter, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestProject1"), NO_API) \
	DECLARE_SERIALIZER(UReadWriter)


#define TestProject1_Source_TestProject1_ReadWriter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUReadWriter(); \
	friend struct Z_Construct_UClass_UReadWriter_Statics; \
public: \
	DECLARE_CLASS(UReadWriter, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestProject1"), NO_API) \
	DECLARE_SERIALIZER(UReadWriter)


#define TestProject1_Source_TestProject1_ReadWriter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadWriter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadWriter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadWriter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadWriter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadWriter(UReadWriter&&); \
	NO_API UReadWriter(const UReadWriter&); \
public:


#define TestProject1_Source_TestProject1_ReadWriter_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadWriter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadWriter(UReadWriter&&); \
	NO_API UReadWriter(const UReadWriter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadWriter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadWriter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadWriter)


#define TestProject1_Source_TestProject1_ReadWriter_h_16_PRIVATE_PROPERTY_OFFSET
#define TestProject1_Source_TestProject1_ReadWriter_h_13_PROLOG
#define TestProject1_Source_TestProject1_ReadWriter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject1_Source_TestProject1_ReadWriter_h_16_PRIVATE_PROPERTY_OFFSET \
	TestProject1_Source_TestProject1_ReadWriter_h_16_SPARSE_DATA \
	TestProject1_Source_TestProject1_ReadWriter_h_16_RPC_WRAPPERS \
	TestProject1_Source_TestProject1_ReadWriter_h_16_INCLASS \
	TestProject1_Source_TestProject1_ReadWriter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject1_Source_TestProject1_ReadWriter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject1_Source_TestProject1_ReadWriter_h_16_PRIVATE_PROPERTY_OFFSET \
	TestProject1_Source_TestProject1_ReadWriter_h_16_SPARSE_DATA \
	TestProject1_Source_TestProject1_ReadWriter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject1_Source_TestProject1_ReadWriter_h_16_INCLASS_NO_PURE_DECLS \
	TestProject1_Source_TestProject1_ReadWriter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT1_API UClass* StaticClass<class UReadWriter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject1_Source_TestProject1_ReadWriter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
