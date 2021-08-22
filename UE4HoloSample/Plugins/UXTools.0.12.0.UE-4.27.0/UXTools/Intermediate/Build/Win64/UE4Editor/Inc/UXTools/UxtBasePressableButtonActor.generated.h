// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IUxtFarTarget;
class IUxtPokeTarget;
#ifdef UXTOOLS_UxtBasePressableButtonActor_generated_h
#error "UxtBasePressableButtonActor.generated.h already included, missing '#pragma once' in UxtBasePressableButtonActor.h"
#endif
#define UXTOOLS_UxtBasePressableButtonActor_generated_h

#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_SPARSE_DATA
#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_RPC_WRAPPERS \
	virtual TScriptInterface<IUxtFarTarget> GetFarTarget_Implementation(); \
	virtual TScriptInterface<IUxtPokeTarget> GetPokeTarget_Implementation(); \
 \
	DECLARE_FUNCTION(execGetFarTarget); \
	DECLARE_FUNCTION(execGetPokeTarget);


#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFarTarget); \
	DECLARE_FUNCTION(execGetPokeTarget);


#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_EVENT_PARMS \
	struct UxtBasePressableButtonActor_eventGetFarTarget_Parms \
	{ \
		TScriptInterface<IUxtFarTarget> ReturnValue; \
	}; \
	struct UxtBasePressableButtonActor_eventGetPokeTarget_Parms \
	{ \
		TScriptInterface<IUxtPokeTarget> ReturnValue; \
	};


#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_CALLBACK_WRAPPERS
#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUxtBasePressableButtonActor(); \
	friend struct Z_Construct_UClass_AUxtBasePressableButtonActor_Statics; \
public: \
	DECLARE_CLASS(AUxtBasePressableButtonActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(AUxtBasePressableButtonActor) \
	virtual UObject* _getUObject() const override { return const_cast<AUxtBasePressableButtonActor*>(this); }


#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAUxtBasePressableButtonActor(); \
	friend struct Z_Construct_UClass_AUxtBasePressableButtonActor_Statics; \
public: \
	DECLARE_CLASS(AUxtBasePressableButtonActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(AUxtBasePressableButtonActor) \
	virtual UObject* _getUObject() const override { return const_cast<AUxtBasePressableButtonActor*>(this); }


#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUxtBasePressableButtonActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUxtBasePressableButtonActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUxtBasePressableButtonActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUxtBasePressableButtonActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUxtBasePressableButtonActor(AUxtBasePressableButtonActor&&); \
	NO_API AUxtBasePressableButtonActor(const AUxtBasePressableButtonActor&); \
public:


#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUxtBasePressableButtonActor(AUxtBasePressableButtonActor&&); \
	NO_API AUxtBasePressableButtonActor(const AUxtBasePressableButtonActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUxtBasePressableButtonActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUxtBasePressableButtonActor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AUxtBasePressableButtonActor)


#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ButtonComponent() { return STRUCT_OFFSET(AUxtBasePressableButtonActor, ButtonComponent); }


#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_18_PROLOG \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_EVENT_PARMS


#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_PRIVATE_PROPERTY_OFFSET \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_SPARSE_DATA \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_RPC_WRAPPERS \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_CALLBACK_WRAPPERS \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_INCLASS \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_PRIVATE_PROPERTY_OFFSET \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_SPARSE_DATA \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_CALLBACK_WRAPPERS \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_INCLASS_NO_PURE_DECLS \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class AUxtBasePressableButtonActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Controls_UxtBasePressableButtonActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
