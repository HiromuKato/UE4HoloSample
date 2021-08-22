// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
enum class EUxtTransformMode : uint8;
class USceneComponent;
struct FComponentReference;
#ifdef UXTOOLS_UxtManipulatorComponent_generated_h
#error "UxtManipulatorComponent.generated.h already included, missing '#pragma once' in UxtManipulatorComponent.h"
#endif
#define UXTOOLS_UxtManipulatorComponent_generated_h

#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_SPARSE_DATA
#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnExternalManipulationStarted); \
	DECLARE_FUNCTION(execApplyConstraints); \
	DECLARE_FUNCTION(execInitializeConstraints); \
	DECLARE_FUNCTION(execSetMaxScale); \
	DECLARE_FUNCTION(execGetMaxScale); \
	DECLARE_FUNCTION(execSetMinScale); \
	DECLARE_FUNCTION(execGetMinScale); \
	DECLARE_FUNCTION(execSetRelativeToInitialScale); \
	DECLARE_FUNCTION(execGetRelativeToInitialScale); \
	DECLARE_FUNCTION(execRemoveConstraint); \
	DECLARE_FUNCTION(execAddConstraint); \
	DECLARE_FUNCTION(execGetSelectedConstraints); \
	DECLARE_FUNCTION(execSetAutoDetectConstraints); \
	DECLARE_FUNCTION(execGetAutoDetectConstraints);


#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnExternalManipulationStarted); \
	DECLARE_FUNCTION(execApplyConstraints); \
	DECLARE_FUNCTION(execInitializeConstraints); \
	DECLARE_FUNCTION(execSetMaxScale); \
	DECLARE_FUNCTION(execGetMaxScale); \
	DECLARE_FUNCTION(execSetMinScale); \
	DECLARE_FUNCTION(execGetMinScale); \
	DECLARE_FUNCTION(execSetRelativeToInitialScale); \
	DECLARE_FUNCTION(execGetRelativeToInitialScale); \
	DECLARE_FUNCTION(execRemoveConstraint); \
	DECLARE_FUNCTION(execAddConstraint); \
	DECLARE_FUNCTION(execGetSelectedConstraints); \
	DECLARE_FUNCTION(execSetAutoDetectConstraints); \
	DECLARE_FUNCTION(execGetAutoDetectConstraints);


#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtManipulatorComponent(); \
	friend struct Z_Construct_UClass_UUxtManipulatorComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtManipulatorComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtManipulatorComponent)


#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUUxtManipulatorComponent(); \
	friend struct Z_Construct_UClass_UUxtManipulatorComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtManipulatorComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtManipulatorComponent)


#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtManipulatorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtManipulatorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtManipulatorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtManipulatorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtManipulatorComponent(UUxtManipulatorComponent&&); \
	NO_API UUxtManipulatorComponent(const UUxtManipulatorComponent&); \
public:


#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtManipulatorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtManipulatorComponent(UUxtManipulatorComponent&&); \
	NO_API UUxtManipulatorComponent(const UUxtManipulatorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtManipulatorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtManipulatorComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtManipulatorComponent)


#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bAutoDetectConstraints() { return STRUCT_OFFSET(UUxtManipulatorComponent, bAutoDetectConstraints); } \
	FORCEINLINE static uint32 __PPO__SelectedConstraints() { return STRUCT_OFFSET(UUxtManipulatorComponent, SelectedConstraints); } \
	FORCEINLINE static uint32 __PPO__bRelativeToInitialScale() { return STRUCT_OFFSET(UUxtManipulatorComponent, bRelativeToInitialScale); } \
	FORCEINLINE static uint32 __PPO__MinScale() { return STRUCT_OFFSET(UUxtManipulatorComponent, MinScale); } \
	FORCEINLINE static uint32 __PPO__MaxScale() { return STRUCT_OFFSET(UUxtManipulatorComponent, MaxScale); }


#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_17_PROLOG
#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_SPARSE_DATA \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_RPC_WRAPPERS \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_INCLASS \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_SPARSE_DATA \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_INCLASS_NO_PURE_DECLS \
	UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtManipulatorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4HoloSample_Plugins_UXTools_0_12_0_UE_4_27_0_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
