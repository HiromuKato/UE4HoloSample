// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKeywordInput;
struct FVector2D;
struct FVector;
struct FTransform;
enum class EHandMeshStatus : uint8;
#ifdef MICROSOFTOPENXR_MicrosoftOpenXR_generated_h
#error "MicrosoftOpenXR.generated.h already included, missing '#pragma once' in MicrosoftOpenXR.h"
#endif
#define MICROSOFTOPENXR_MicrosoftOpenXR_generated_h

#define UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKeywordInput_Statics; \
	MICROSOFTOPENXR_API static class UScriptStruct* StaticStruct();


template<> MICROSOFTOPENXR_API UScriptStruct* StaticStruct<struct FKeywordInput>();

#define UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_SPARSE_DATA
#define UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveKeywords); \
	DECLARE_FUNCTION(execAddKeywords); \
	DECLARE_FUNCTION(execIsSpeechRecognitionAvailable); \
	DECLARE_FUNCTION(execGetWorldSpaceRayFromCameraPoint); \
	DECLARE_FUNCTION(execGetPVCameraIntrinsics); \
	DECLARE_FUNCTION(execGetPVCameraToWorldTransform); \
	DECLARE_FUNCTION(execIsQREnabled); \
	DECLARE_FUNCTION(execSetUseHandMesh);


#define UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveKeywords); \
	DECLARE_FUNCTION(execAddKeywords); \
	DECLARE_FUNCTION(execIsSpeechRecognitionAvailable); \
	DECLARE_FUNCTION(execGetWorldSpaceRayFromCameraPoint); \
	DECLARE_FUNCTION(execGetPVCameraIntrinsics); \
	DECLARE_FUNCTION(execGetPVCameraToWorldTransform); \
	DECLARE_FUNCTION(execIsQREnabled); \
	DECLARE_FUNCTION(execSetUseHandMesh);


#define UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMicrosoftOpenXRFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMicrosoftOpenXRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MicrosoftOpenXR"), NO_API) \
	DECLARE_SERIALIZER(UMicrosoftOpenXRFunctionLibrary)


#define UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUMicrosoftOpenXRFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMicrosoftOpenXRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MicrosoftOpenXR"), NO_API) \
	DECLARE_SERIALIZER(UMicrosoftOpenXRFunctionLibrary)


#define UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMicrosoftOpenXRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMicrosoftOpenXRFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMicrosoftOpenXRFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMicrosoftOpenXRFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMicrosoftOpenXRFunctionLibrary(UMicrosoftOpenXRFunctionLibrary&&); \
	NO_API UMicrosoftOpenXRFunctionLibrary(const UMicrosoftOpenXRFunctionLibrary&); \
public:


#define UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMicrosoftOpenXRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMicrosoftOpenXRFunctionLibrary(UMicrosoftOpenXRFunctionLibrary&&); \
	NO_API UMicrosoftOpenXRFunctionLibrary(const UMicrosoftOpenXRFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMicrosoftOpenXRFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMicrosoftOpenXRFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMicrosoftOpenXRFunctionLibrary)


#define UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_PRIVATE_PROPERTY_OFFSET
#define UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_34_PROLOG
#define UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_PRIVATE_PROPERTY_OFFSET \
	UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_SPARSE_DATA \
	UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_RPC_WRAPPERS \
	UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_INCLASS \
	UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_PRIVATE_PROPERTY_OFFSET \
	UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_SPARSE_DATA \
	UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_INCLASS_NO_PURE_DECLS \
	UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MICROSOFTOPENXR_API UClass* StaticClass<class UMicrosoftOpenXRFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4HoloSample_Plugins_MicrosoftOpenXR_Pluginv1_1_4_MicrosoftOpenXR_Source_MicrosoftOpenXR_Public_MicrosoftOpenXR_h


#define FOREACH_ENUM_EHANDMESHSTATUS(op) \
	op(EHandMeshStatus::NotInitialised) \
	op(EHandMeshStatus::Disabled) \
	op(EHandMeshStatus::EnabledTrackingGeometry) \
	op(EHandMeshStatus::EnabledXRVisualization) 

enum class EHandMeshStatus : uint8;
template<> MICROSOFTOPENXR_API UEnum* StaticEnum<EHandMeshStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
