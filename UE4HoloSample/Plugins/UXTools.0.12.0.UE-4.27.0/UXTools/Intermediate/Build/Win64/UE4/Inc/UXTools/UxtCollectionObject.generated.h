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
#ifdef UXTOOLS_UxtCollectionObject_generated_h
#error "UxtCollectionObject.generated.h already included, missing '#pragma once' in UxtCollectionObject.h"
#endif
#define UXTOOLS_UxtCollectionObject_generated_h

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_SPARSE_DATA
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_RPC_WRAPPERS \
	virtual TScriptInterface<IUxtFarTarget> GetFarTarget_Implementation() { return NULL; }; \
	virtual TScriptInterface<IUxtPokeTarget> GetPokeTarget_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetFarTarget); \
	DECLARE_FUNCTION(execGetPokeTarget);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TScriptInterface<IUxtFarTarget> GetFarTarget_Implementation() { return NULL; }; \
	virtual TScriptInterface<IUxtPokeTarget> GetPokeTarget_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetFarTarget); \
	DECLARE_FUNCTION(execGetPokeTarget);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_EVENT_PARMS \
	struct UxtCollectionObject_eventGetFarTarget_Parms \
	{ \
		TScriptInterface<IUxtFarTarget> ReturnValue; \
	}; \
	struct UxtCollectionObject_eventGetPokeTarget_Parms \
	{ \
		TScriptInterface<IUxtPokeTarget> ReturnValue; \
	};


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_CALLBACK_WRAPPERS
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtCollectionObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtCollectionObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtCollectionObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtCollectionObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtCollectionObject(UUxtCollectionObject&&); \
	NO_API UUxtCollectionObject(const UUxtCollectionObject&); \
public:


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtCollectionObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtCollectionObject(UUxtCollectionObject&&); \
	NO_API UUxtCollectionObject(const UUxtCollectionObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtCollectionObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtCollectionObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtCollectionObject)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUxtCollectionObject(); \
	friend struct Z_Construct_UClass_UUxtCollectionObject_Statics; \
public: \
	DECLARE_CLASS(UUxtCollectionObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtCollectionObject)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUxtCollectionObject() {} \
public: \
	typedef UUxtCollectionObject UClassType; \
	typedef IUxtCollectionObject ThisClass; \
	static TScriptInterface<IUxtFarTarget> Execute_GetFarTarget(UObject* O); \
	static TScriptInterface<IUxtPokeTarget> Execute_GetPokeTarget(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IUxtCollectionObject() {} \
public: \
	typedef UUxtCollectionObject UClassType; \
	typedef IUxtCollectionObject ThisClass; \
	static TScriptInterface<IUxtFarTarget> Execute_GetFarTarget(UObject* O); \
	static TScriptInterface<IUxtPokeTarget> Execute_GetPokeTarget(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_15_PROLOG \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_EVENT_PARMS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_RPC_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_CALLBACK_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_CALLBACK_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtCollectionObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtCollectionObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
