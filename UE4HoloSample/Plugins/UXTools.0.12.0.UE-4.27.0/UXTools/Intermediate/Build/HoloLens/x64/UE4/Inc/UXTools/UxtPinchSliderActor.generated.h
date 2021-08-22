// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AUxtPinchSliderActor;
class UUxtPinchSliderComponent;
class UUxtPointerComponent;
enum class EUxtSliderState : uint8;
class UCurveFloat;
class USoundCue;
struct FLinearColor;
struct FVector;
#ifdef UXTOOLS_UxtPinchSliderActor_generated_h
#error "UxtPinchSliderActor.generated.h already included, missing '#pragma once' in UxtPinchSliderActor.h"
#endif
#define UXTOOLS_UxtPinchSliderActor_generated_h

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_18_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderValueUpdatedDelegate_Parms \
{ \
	AUxtPinchSliderActor* Slider; \
	float NewValue; \
}; \
static inline void FUxtPinchSliderValueUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderValueUpdatedDelegate, AUxtPinchSliderActor* Slider, float NewValue) \
{ \
	_Script_UXTools_eventUxtPinchSliderValueUpdatedDelegate_Parms Parms; \
	Parms.Slider=Slider; \
	Parms.NewValue=NewValue; \
	UxtPinchSliderValueUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_SPARSE_DATA
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnUpdateTimeline); \
	DECLARE_FUNCTION(execOnEndGrab); \
	DECLARE_FUNCTION(execOnUpdateValue); \
	DECLARE_FUNCTION(execOnBeginGrab); \
	DECLARE_FUNCTION(execOnUpdateState); \
	DECLARE_FUNCTION(execSetThumbScaleCurve); \
	DECLARE_FUNCTION(execGetThumbScaleCurve); \
	DECLARE_FUNCTION(execSetFocusedThumbScale); \
	DECLARE_FUNCTION(execGetFocusedThumbScale); \
	DECLARE_FUNCTION(execSetDefaultThumbScale); \
	DECLARE_FUNCTION(execGetDefaultThumbScale); \
	DECLARE_FUNCTION(execSetTickSound); \
	DECLARE_FUNCTION(execGetTickSound); \
	DECLARE_FUNCTION(execSetReleaseSound); \
	DECLARE_FUNCTION(execGetReleaseSound); \
	DECLARE_FUNCTION(execSetGrabSound); \
	DECLARE_FUNCTION(execGetGrabSound); \
	DECLARE_FUNCTION(execSetDisabledThumbColor); \
	DECLARE_FUNCTION(execGetDisabledThumbColor); \
	DECLARE_FUNCTION(execSetGrabbedThumbColor); \
	DECLARE_FUNCTION(execGetGrabbedThumbColor); \
	DECLARE_FUNCTION(execSetFocusedThumbColor); \
	DECLARE_FUNCTION(execGetFocusedThumbColor); \
	DECLARE_FUNCTION(execSetDefaultThumbColor); \
	DECLARE_FUNCTION(execGetDefaultThumbColor); \
	DECLARE_FUNCTION(execSetInstanceTickMarks); \
	DECLARE_FUNCTION(execGetInstanceTickMarks); \
	DECLARE_FUNCTION(execSetTickMarkScale); \
	DECLARE_FUNCTION(execGetTickMarkScale); \
	DECLARE_FUNCTION(execSetShowTickMarks); \
	DECLARE_FUNCTION(execGetShowTickMarks); \
	DECLARE_FUNCTION(execSetNumTickMarks); \
	DECLARE_FUNCTION(execGetNumTickMarks); \
	DECLARE_FUNCTION(execSetMoveTextWithThumb); \
	DECLARE_FUNCTION(execGetMoveTextWithThumb); \
	DECLARE_FUNCTION(execSetAlignTextWithZ); \
	DECLARE_FUNCTION(execGetAlignTextWithZ); \
	DECLARE_FUNCTION(execSetValueTextDecimalPlaces); \
	DECLARE_FUNCTION(execGetValueTextDecimalPlaces); \
	DECLARE_FUNCTION(execSetTitle); \
	DECLARE_FUNCTION(execGetTitle); \
	DECLARE_FUNCTION(execSetStepWithTickMarks); \
	DECLARE_FUNCTION(execGetStepWithTickMarks); \
	DECLARE_FUNCTION(execSetTrackLength); \
	DECLARE_FUNCTION(execGetTrackLength); \
	DECLARE_FUNCTION(execSetMaxValue); \
	DECLARE_FUNCTION(execGetMaxValue); \
	DECLARE_FUNCTION(execSetMinValue); \
	DECLARE_FUNCTION(execGetMinValue); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnUpdateTimeline); \
	DECLARE_FUNCTION(execOnEndGrab); \
	DECLARE_FUNCTION(execOnUpdateValue); \
	DECLARE_FUNCTION(execOnBeginGrab); \
	DECLARE_FUNCTION(execOnUpdateState); \
	DECLARE_FUNCTION(execSetThumbScaleCurve); \
	DECLARE_FUNCTION(execGetThumbScaleCurve); \
	DECLARE_FUNCTION(execSetFocusedThumbScale); \
	DECLARE_FUNCTION(execGetFocusedThumbScale); \
	DECLARE_FUNCTION(execSetDefaultThumbScale); \
	DECLARE_FUNCTION(execGetDefaultThumbScale); \
	DECLARE_FUNCTION(execSetTickSound); \
	DECLARE_FUNCTION(execGetTickSound); \
	DECLARE_FUNCTION(execSetReleaseSound); \
	DECLARE_FUNCTION(execGetReleaseSound); \
	DECLARE_FUNCTION(execSetGrabSound); \
	DECLARE_FUNCTION(execGetGrabSound); \
	DECLARE_FUNCTION(execSetDisabledThumbColor); \
	DECLARE_FUNCTION(execGetDisabledThumbColor); \
	DECLARE_FUNCTION(execSetGrabbedThumbColor); \
	DECLARE_FUNCTION(execGetGrabbedThumbColor); \
	DECLARE_FUNCTION(execSetFocusedThumbColor); \
	DECLARE_FUNCTION(execGetFocusedThumbColor); \
	DECLARE_FUNCTION(execSetDefaultThumbColor); \
	DECLARE_FUNCTION(execGetDefaultThumbColor); \
	DECLARE_FUNCTION(execSetInstanceTickMarks); \
	DECLARE_FUNCTION(execGetInstanceTickMarks); \
	DECLARE_FUNCTION(execSetTickMarkScale); \
	DECLARE_FUNCTION(execGetTickMarkScale); \
	DECLARE_FUNCTION(execSetShowTickMarks); \
	DECLARE_FUNCTION(execGetShowTickMarks); \
	DECLARE_FUNCTION(execSetNumTickMarks); \
	DECLARE_FUNCTION(execGetNumTickMarks); \
	DECLARE_FUNCTION(execSetMoveTextWithThumb); \
	DECLARE_FUNCTION(execGetMoveTextWithThumb); \
	DECLARE_FUNCTION(execSetAlignTextWithZ); \
	DECLARE_FUNCTION(execGetAlignTextWithZ); \
	DECLARE_FUNCTION(execSetValueTextDecimalPlaces); \
	DECLARE_FUNCTION(execGetValueTextDecimalPlaces); \
	DECLARE_FUNCTION(execSetTitle); \
	DECLARE_FUNCTION(execGetTitle); \
	DECLARE_FUNCTION(execSetStepWithTickMarks); \
	DECLARE_FUNCTION(execGetStepWithTickMarks); \
	DECLARE_FUNCTION(execSetTrackLength); \
	DECLARE_FUNCTION(execGetTrackLength); \
	DECLARE_FUNCTION(execSetMaxValue); \
	DECLARE_FUNCTION(execGetMaxValue); \
	DECLARE_FUNCTION(execSetMinValue); \
	DECLARE_FUNCTION(execGetMinValue); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUxtPinchSliderActor(); \
	friend struct Z_Construct_UClass_AUxtPinchSliderActor_Statics; \
public: \
	DECLARE_CLASS(AUxtPinchSliderActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(AUxtPinchSliderActor)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAUxtPinchSliderActor(); \
	friend struct Z_Construct_UClass_AUxtPinchSliderActor_Statics; \
public: \
	DECLARE_CLASS(AUxtPinchSliderActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(AUxtPinchSliderActor)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUxtPinchSliderActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUxtPinchSliderActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUxtPinchSliderActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUxtPinchSliderActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUxtPinchSliderActor(AUxtPinchSliderActor&&); \
	NO_API AUxtPinchSliderActor(const AUxtPinchSliderActor&); \
public:


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUxtPinchSliderActor(AUxtPinchSliderActor&&); \
	NO_API AUxtPinchSliderActor(const AUxtPinchSliderActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUxtPinchSliderActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUxtPinchSliderActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUxtPinchSliderActor)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PinchSlider() { return STRUCT_OFFSET(AUxtPinchSliderActor, PinchSlider); } \
	FORCEINLINE static uint32 __PPO__Thumb() { return STRUCT_OFFSET(AUxtPinchSliderActor, Thumb); } \
	FORCEINLINE static uint32 __PPO__Track() { return STRUCT_OFFSET(AUxtPinchSliderActor, Track); } \
	FORCEINLINE static uint32 __PPO__TickMarks() { return STRUCT_OFFSET(AUxtPinchSliderActor, TickMarks); } \
	FORCEINLINE static uint32 __PPO__TickMarksNonInstanced() { return STRUCT_OFFSET(AUxtPinchSliderActor, TickMarksNonInstanced); } \
	FORCEINLINE static uint32 __PPO__TextRoot() { return STRUCT_OFFSET(AUxtPinchSliderActor, TextRoot); } \
	FORCEINLINE static uint32 __PPO__TitleText() { return STRUCT_OFFSET(AUxtPinchSliderActor, TitleText); } \
	FORCEINLINE static uint32 __PPO__ValueText() { return STRUCT_OFFSET(AUxtPinchSliderActor, ValueText); } \
	FORCEINLINE static uint32 __PPO__Audio() { return STRUCT_OFFSET(AUxtPinchSliderActor, Audio); } \
	FORCEINLINE static uint32 __PPO__ScaleTimeline() { return STRUCT_OFFSET(AUxtPinchSliderActor, ScaleTimeline); } \
	FORCEINLINE static uint32 __PPO__Value() { return STRUCT_OFFSET(AUxtPinchSliderActor, Value); } \
	FORCEINLINE static uint32 __PPO__MinValue() { return STRUCT_OFFSET(AUxtPinchSliderActor, MinValue); } \
	FORCEINLINE static uint32 __PPO__MaxValue() { return STRUCT_OFFSET(AUxtPinchSliderActor, MaxValue); } \
	FORCEINLINE static uint32 __PPO__TrackLength() { return STRUCT_OFFSET(AUxtPinchSliderActor, TrackLength); } \
	FORCEINLINE static uint32 __PPO__bStepWithTickMarks() { return STRUCT_OFFSET(AUxtPinchSliderActor, bStepWithTickMarks); } \
	FORCEINLINE static uint32 __PPO__Title() { return STRUCT_OFFSET(AUxtPinchSliderActor, Title); } \
	FORCEINLINE static uint32 __PPO__ValueTextDecimalPlaces() { return STRUCT_OFFSET(AUxtPinchSliderActor, ValueTextDecimalPlaces); } \
	FORCEINLINE static uint32 __PPO__bAlignTextWithZ() { return STRUCT_OFFSET(AUxtPinchSliderActor, bAlignTextWithZ); } \
	FORCEINLINE static uint32 __PPO__bMoveTextWithThumb() { return STRUCT_OFFSET(AUxtPinchSliderActor, bMoveTextWithThumb); } \
	FORCEINLINE static uint32 __PPO__NumTickMarks() { return STRUCT_OFFSET(AUxtPinchSliderActor, NumTickMarks); } \
	FORCEINLINE static uint32 __PPO__bShowTickMarks() { return STRUCT_OFFSET(AUxtPinchSliderActor, bShowTickMarks); } \
	FORCEINLINE static uint32 __PPO__TickMarkScale() { return STRUCT_OFFSET(AUxtPinchSliderActor, TickMarkScale); } \
	FORCEINLINE static uint32 __PPO__bInstanceTickMarks() { return STRUCT_OFFSET(AUxtPinchSliderActor, bInstanceTickMarks); } \
	FORCEINLINE static uint32 __PPO__DefaultThumbColor() { return STRUCT_OFFSET(AUxtPinchSliderActor, DefaultThumbColor); } \
	FORCEINLINE static uint32 __PPO__FocusedThumbColor() { return STRUCT_OFFSET(AUxtPinchSliderActor, FocusedThumbColor); } \
	FORCEINLINE static uint32 __PPO__GrabbedThumbColor() { return STRUCT_OFFSET(AUxtPinchSliderActor, GrabbedThumbColor); } \
	FORCEINLINE static uint32 __PPO__DisabledThumbColor() { return STRUCT_OFFSET(AUxtPinchSliderActor, DisabledThumbColor); } \
	FORCEINLINE static uint32 __PPO__GrabSound() { return STRUCT_OFFSET(AUxtPinchSliderActor, GrabSound); } \
	FORCEINLINE static uint32 __PPO__ReleaseSound() { return STRUCT_OFFSET(AUxtPinchSliderActor, ReleaseSound); } \
	FORCEINLINE static uint32 __PPO__TickSound() { return STRUCT_OFFSET(AUxtPinchSliderActor, TickSound); } \
	FORCEINLINE static uint32 __PPO__DefaultThumbScale() { return STRUCT_OFFSET(AUxtPinchSliderActor, DefaultThumbScale); } \
	FORCEINLINE static uint32 __PPO__FocusedThumbScale() { return STRUCT_OFFSET(AUxtPinchSliderActor, FocusedThumbScale); } \
	FORCEINLINE static uint32 __PPO__ThumbScaleCurve() { return STRUCT_OFFSET(AUxtPinchSliderActor, ThumbScaleCurve); }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_24_PROLOG
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_RPC_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_INCLASS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class AUxtPinchSliderActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
