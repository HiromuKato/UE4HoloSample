// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtGenericManipulatorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtGenericManipulatorComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGenericManipulatorComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGenericManipulatorComponent();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtManipulatorComponentBase();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtGrabPointerData();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
// End Cross Module References
	DEFINE_FUNCTION(UUxtGenericManipulatorComponent::execOnRelease)
	{
		P_GET_OBJECT(UUxtGrabTargetComponent,Z_Param_Grabbable);
		P_GET_STRUCT(FUxtGrabPointerData,Z_Param_GrabPointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRelease(Z_Param_Grabbable,Z_Param_GrabPointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGenericManipulatorComponent::execOnGrab)
	{
		P_GET_OBJECT(UUxtGrabTargetComponent,Z_Param_Grabbable);
		P_GET_STRUCT(FUxtGrabPointerData,Z_Param_GrabPointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGrab(Z_Param_Grabbable,Z_Param_GrabPointer);
		P_NATIVE_END;
	}
	void UUxtGenericManipulatorComponent::StaticRegisterNativesUUxtGenericManipulatorComponent()
	{
		UClass* Class = UUxtGenericManipulatorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGrab", &UUxtGenericManipulatorComponent::execOnGrab },
			{ "OnRelease", &UUxtGenericManipulatorComponent::execOnRelease },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnGrab_Statics
	{
		struct UxtGenericManipulatorComponent_eventOnGrab_Parms
		{
			UUxtGrabTargetComponent* Grabbable;
			FUxtGrabPointerData GrabPointer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grabbable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grabbable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrabPointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnGrab_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnGrab_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGenericManipulatorComponent_eventOnGrab_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnGrab_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnGrab_Statics::NewProp_Grabbable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnGrab_Statics::NewProp_GrabPointer = { "GrabPointer", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGenericManipulatorComponent_eventOnGrab_Parms, GrabPointer), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnGrab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnGrab_Statics::NewProp_Grabbable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnGrab_Statics::NewProp_GrabPointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnGrab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Generic Manipulator" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGenericManipulatorComponent, nullptr, "OnGrab", nullptr, nullptr, sizeof(UxtGenericManipulatorComponent_eventOnGrab_Parms), Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnGrab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnRelease_Statics
	{
		struct UxtGenericManipulatorComponent_eventOnRelease_Parms
		{
			UUxtGrabTargetComponent* Grabbable;
			FUxtGrabPointerData GrabPointer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grabbable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grabbable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrabPointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnRelease_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnRelease_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGenericManipulatorComponent_eventOnRelease_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnRelease_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnRelease_Statics::NewProp_Grabbable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnRelease_Statics::NewProp_GrabPointer = { "GrabPointer", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGenericManipulatorComponent_eventOnRelease_Parms, GrabPointer), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnRelease_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnRelease_Statics::NewProp_Grabbable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnRelease_Statics::NewProp_GrabPointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Generic Manipulator" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGenericManipulatorComponent, nullptr, "OnRelease", nullptr, nullptr, sizeof(UxtGenericManipulatorComponent_eventOnRelease_Parms), Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtGenericManipulatorComponent_NoRegister()
	{
		return UUxtGenericManipulatorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OneHandRotationMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneHandRotationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OneHandRotationMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwoHandTransformModes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TwoHandTransformModes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReleaseBehavior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LerpTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LerpTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtManipulatorComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnGrab, "OnGrab" }, // 4240300615
		{ &Z_Construct_UFunction_UUxtGenericManipulatorComponent_OnRelease, "OnRelease" }, // 3445688612
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Generic manipulator that supports both one- and two-handed interactions.\n *\n * One-handed interaction supports linear movement as well as rotation based on the orientation of the hand.\n * Rotation modes can be selected with different axes and pivot points.\n *\n * Two-handed interaction moves the object based on the center between hands.\n * The actor can be rotated based on the line between both hands and scaled based on the distance.\n */" },
		{ "HideCategories", "Grabbable ManipulatorComponent" },
		{ "IncludePath", "Interactions/UxtGenericManipulatorComponent.h" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
		{ "ToolTip", "Generic manipulator that supports both one- and two-handed interactions.\n\nOne-handed interaction supports linear movement as well as rotation based on the orientation of the hand.\nRotation modes can be selected with different axes and pivot points.\n\nTwo-handed interaction moves the object based on the center between hands.\nThe actor can be rotated based on the line between both hands and scaled based on the distance." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode_MetaData[] = {
		{ "Category", "Uxt Generic Manipulator" },
		{ "Comment", "/** Mode of rotation to use while using one hand only. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
		{ "ToolTip", "Mode of rotation to use while using one hand only." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode = { "OneHandRotationMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGenericManipulatorComponent, OneHandRotationMode), Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode, METADATA_PARAMS(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TwoHandTransformModes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EUxtTransformMode" },
		{ "Category", "Uxt Generic Manipulator" },
		{ "Comment", "/** Enabled transformations in two-handed manipulation. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
		{ "ToolTip", "Enabled transformations in two-handed manipulation." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TwoHandTransformModes = { "TwoHandTransformModes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGenericManipulatorComponent, TwoHandTransformModes), METADATA_PARAMS(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TwoHandTransformModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TwoHandTransformModes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_ReleaseBehavior_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EUxtReleaseBehavior" },
		{ "Category", "Uxt Generic Manipulator" },
		{ "Comment", "/** Controls the object's behavior when physics its being simulated. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
		{ "ToolTip", "Controls the object's behavior when physics its being simulated." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_ReleaseBehavior = { "ReleaseBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGenericManipulatorComponent, ReleaseBehavior), METADATA_PARAMS(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_ReleaseBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_ReleaseBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "AllowedClasses", "SceneComponent" },
		{ "Category", "Uxt Generic Manipulator" },
		{ "Comment", "/** The component to transform, will default to the root scene component if not specified */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
		{ "ToolTip", "The component to transform, will default to the root scene component if not specified" },
		{ "UseComponentPicker", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGenericManipulatorComponent, TargetComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TargetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_LerpTime_MetaData[] = {
		{ "Category", "Uxt Generic Manipulator" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Interpolation time for smoothed movement while manipulating.\n\x09 * Set to zero to disable smoothing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
		{ "ToolTip", "Interpolation time for smoothed movement while manipulating.\nSet to zero to disable smoothing." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_LerpTime = { "LerpTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGenericManipulatorComponent, LerpTime), METADATA_PARAMS(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_LerpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_LerpTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TwoHandTransformModes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_ReleaseBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TargetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_LerpTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtGenericManipulatorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::ClassParams = {
		&UUxtGenericManipulatorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtGenericManipulatorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtGenericManipulatorComponent, 301097489);
	template<> UXTOOLS_API UClass* StaticClass<UUxtGenericManipulatorComponent>()
	{
		return UUxtGenericManipulatorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtGenericManipulatorComponent(Z_Construct_UClass_UUxtGenericManipulatorComponent, &UUxtGenericManipulatorComponent::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtGenericManipulatorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtGenericManipulatorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
