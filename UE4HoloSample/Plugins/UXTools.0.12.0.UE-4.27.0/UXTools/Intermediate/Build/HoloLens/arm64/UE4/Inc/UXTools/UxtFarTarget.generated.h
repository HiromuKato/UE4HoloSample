// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
#ifdef UXTOOLS_UxtFarTarget_generated_h
#error "UxtFarTarget.generated.h already included, missing '#pragma once' in UxtFarTarget.h"
#endif
#define UXTOOLS_UxtFarTarget_generated_h

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_SPARSE_DATA
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_RPC_WRAPPERS \
	virtual bool IsFarFocusable_Implementation(const UPrimitiveComponent* Primitive) const { return false; }; \
 \
	DECLARE_FUNCTION(execIsFarFocusable);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsFarFocusable_Implementation(const UPrimitiveComponent* Primitive) const { return false; }; \
 \
	DECLARE_FUNCTION(execIsFarFocusable);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_EVENT_PARMS \
	struct UxtFarTarget_eventIsFarFocusable_Parms \
	{ \
		const UPrimitiveComponent* Primitive; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UxtFarTarget_eventIsFarFocusable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_CALLBACK_WRAPPERS
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtFarTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtFarTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtFarTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtFarTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtFarTarget(UUxtFarTarget&&); \
	NO_API UUxtFarTarget(const UUxtFarTarget&); \
public:


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtFarTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtFarTarget(UUxtFarTarget&&); \
	NO_API UUxtFarTarget(const UUxtFarTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtFarTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtFarTarget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtFarTarget)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUxtFarTarget(); \
	friend struct Z_Construct_UClass_UUxtFarTarget_Statics; \
public: \
	DECLARE_CLASS(UUxtFarTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtFarTarget)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUxtFarTarget() {} \
public: \
	typedef UUxtFarTarget UClassType; \
	typedef IUxtFarTarget ThisClass; \
	static bool Execute_IsFarFocusable(const UObject* O, const UPrimitiveComponent* Primitive); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IUxtFarTarget() {} \
public: \
	typedef UUxtFarTarget UClassType; \
	typedef IUxtFarTarget ThisClass; \
	static bool Execute_IsFarFocusable(const UObject* O, const UPrimitiveComponent* Primitive); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_12_PROLOG \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_EVENT_PARMS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_RPC_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtFarTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
