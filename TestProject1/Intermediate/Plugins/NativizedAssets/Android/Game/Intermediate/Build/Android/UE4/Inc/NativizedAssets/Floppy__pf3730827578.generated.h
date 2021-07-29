// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
class AActor;
#ifdef NATIVIZEDASSETS_Floppy__pf3730827578_generated_h
#error "Floppy__pf3730827578.generated.h already included, missing '#pragma once' in Floppy__pf3730827578.h"
#endif
#define NATIVIZEDASSETS_Floppy__pf3730827578_generated_h

#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_SPARSE_DATA
#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__Drop__pf); \
	DECLARE_FUNCTION(execbpf__Pickup__pf); \
	DECLARE_FUNCTION(execbpf__EnablePhysicsByProjector__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveActorEndOverlap__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__RespawnBySelf__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_Floppy__pf_5); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_Floppy__pf_2);


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__Drop__pf); \
	DECLARE_FUNCTION(execbpf__Pickup__pf); \
	DECLARE_FUNCTION(execbpf__EnablePhysicsByProjector__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveActorEndOverlap__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__RespawnBySelf__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_Floppy__pf_5); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_Floppy__pf_2);


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_EVENT_PARMS \
	struct Floppy_C__pf3730827578_eventbpf__Pickup__pf_Parms \
	{ \
		USceneComponent* bpp__AttachTo__pf; \
	}; \
	struct Floppy_C__pf3730827578_eventbpf__ReceiveActorEndOverlap__pf_Parms \
	{ \
		AActor* bpp__OtherActor__pf; \
	};


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_CALLBACK_WRAPPERS \
	void eventbpf__Drop__pf(); \
 \
	void eventbpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf); \
 \
	void eventbpf__ReceiveActorEndOverlap__pf(AActor* bpp__OtherActor__pf); \
 \
	void eventbpf__ReceiveBeginPlay__pf(); \



#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloppy_C__pf3730827578(); \
	friend struct Z_Construct_UClass_AFloppy_C__pf3730827578_Statics; \
public: \
	DECLARE_CLASS(AFloppy_C__pf3730827578, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Stutter_Speak_Content/Blueprints/Floppy"), NO_API) \
	DECLARE_SERIALIZER(AFloppy_C__pf3730827578) \
	virtual UObject* _getUObject() const override { return const_cast<AFloppy_C__pf3730827578*>(this); }


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFloppy_C__pf3730827578(); \
	friend struct Z_Construct_UClass_AFloppy_C__pf3730827578_Statics; \
public: \
	DECLARE_CLASS(AFloppy_C__pf3730827578, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Stutter_Speak_Content/Blueprints/Floppy"), NO_API) \
	DECLARE_SERIALIZER(AFloppy_C__pf3730827578) \
	virtual UObject* _getUObject() const override { return const_cast<AFloppy_C__pf3730827578*>(this); }


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFloppy_C__pf3730827578(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloppy_C__pf3730827578) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloppy_C__pf3730827578); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloppy_C__pf3730827578); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloppy_C__pf3730827578(AFloppy_C__pf3730827578&&); \
	NO_API AFloppy_C__pf3730827578(const AFloppy_C__pf3730827578&); \
public:


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloppy_C__pf3730827578(AFloppy_C__pf3730827578&&); \
	NO_API AFloppy_C__pf3730827578(const AFloppy_C__pf3730827578&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloppy_C__pf3730827578); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloppy_C__pf3730827578); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloppy_C__pf3730827578)


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_PRIVATE_PROPERTY_OFFSET
#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_13_PROLOG \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_EVENT_PARMS


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_PRIVATE_PROPERTY_OFFSET \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_SPARSE_DATA \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_RPC_WRAPPERS \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_CALLBACK_WRAPPERS \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_INCLASS \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_PRIVATE_PROPERTY_OFFSET \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_SPARSE_DATA \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_CALLBACK_WRAPPERS \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_INCLASS_NO_PURE_DECLS \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class AFloppy_C__pf3730827578>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_Floppy__pf3730827578_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
