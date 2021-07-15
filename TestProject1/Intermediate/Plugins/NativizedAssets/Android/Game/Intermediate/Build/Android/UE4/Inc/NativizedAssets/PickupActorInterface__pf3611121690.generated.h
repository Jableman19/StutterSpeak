// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef NATIVIZEDASSETS_PickupActorInterface__pf3611121690_generated_h
#error "PickupActorInterface__pf3611121690.generated.h already included, missing '#pragma once' in PickupActorInterface__pf3611121690.h"
#endif
#define NATIVIZEDASSETS_PickupActorInterface__pf3611121690_generated_h

#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_SPARSE_DATA
#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_RPC_WRAPPERS
#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_EVENT_PARMS \
	struct PickupActorInterface_C_eventbpf__Pickup__pf_Parms \
	{ \
		USceneComponent* bpp__AttachTo__pf; \
	};


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_CALLBACK_WRAPPERS
#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPickupActorInterface_C(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickupActorInterface_C) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPickupActorInterface_C); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupActorInterface_C); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPickupActorInterface_C(UPickupActorInterface_C&&); \
	NO_API UPickupActorInterface_C(const UPickupActorInterface_C&); \
public:


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPickupActorInterface_C(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPickupActorInterface_C(UPickupActorInterface_C&&); \
	NO_API UPickupActorInterface_C(const UPickupActorInterface_C&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPickupActorInterface_C); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupActorInterface_C); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickupActorInterface_C)


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPickupActorInterface_C(); \
	friend struct Z_Construct_UClass_UPickupActorInterface_C_Statics; \
public: \
	DECLARE_CLASS(UPickupActorInterface_C, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Game/Starter_Content/VirtualRealityBP/Blueprints/PickupActorInterface"), NO_API) \
	DECLARE_SERIALIZER(UPickupActorInterface_C)


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_GENERATED_UINTERFACE_BODY() \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_GENERATED_UINTERFACE_BODY() \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPickupActorInterface_C() {} \
public: \
	typedef UPickupActorInterface_C UClassType; \
	typedef IPickupActorInterface_C ThisClass; \
	static void Execute_bpf__Drop__pf(UObject* O); \
	static void Execute_bpf__Pickup__pf(UObject* O, USceneComponent* bpp__AttachTo__pf); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IPickupActorInterface_C() {} \
public: \
	typedef UPickupActorInterface_C UClassType; \
	typedef IPickupActorInterface_C ThisClass; \
	static void Execute_bpf__Drop__pf(UObject* O); \
	static void Execute_bpf__Pickup__pf(UObject* O, USceneComponent* bpp__AttachTo__pf); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_5_PROLOG \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_EVENT_PARMS


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_SPARSE_DATA \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_RPC_WRAPPERS \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_CALLBACK_WRAPPERS \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_SPARSE_DATA \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_CALLBACK_WRAPPERS \
	TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class UPickupActorInterface_C>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject1_Intermediate_Plugins_NativizedAssets_Android_Game_Source_NativizedAssets_Public_PickupActorInterface__pf3611121690_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
