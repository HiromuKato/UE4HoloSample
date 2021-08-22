// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRSimulation/Public/XRSimulationRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRSimulationRuntimeSettings() {}
// Cross Module References
	XRSIMULATION_API UScriptStruct* Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping();
	UPackage* Z_Construct_UPackage__Script_XRSimulation();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	XRSIMULATION_API UClass* Z_Construct_UClass_UXRSimulationRuntimeSettings_NoRegister();
	XRSIMULATION_API UClass* Z_Construct_UClass_UXRSimulationRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
// End Cross Module References
class UScriptStruct* FXRSimulationHandPoseKeyMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern XRSIMULATION_API uint32 Get_Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping, Z_Construct_UPackage__Script_XRSimulation(), TEXT("XRSimulationHandPoseKeyMapping"), sizeof(FXRSimulationHandPoseKeyMapping), Get_Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Hash());
	}
	return Singleton;
}
template<> XRSIMULATION_API UScriptStruct* StaticStruct<FXRSimulationHandPoseKeyMapping>()
{
	return FXRSimulationHandPoseKeyMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FXRSimulationHandPoseKeyMapping(FXRSimulationHandPoseKeyMapping::StaticStruct, TEXT("/Script/XRSimulation"), TEXT("XRSimulationHandPoseKeyMapping"), false, nullptr, nullptr);
static struct FScriptStruct_XRSimulation_StaticRegisterNativesFXRSimulationHandPoseKeyMapping
{
	FScriptStruct_XRSimulation_StaticRegisterNativesFXRSimulationHandPoseKeyMapping()
	{
		UScriptStruct::DeferCppStructOps<FXRSimulationHandPoseKeyMapping>(FName(TEXT("XRSimulationHandPoseKeyMapping")));
	}
} ScriptStruct_XRSimulation_StaticRegisterNativesFXRSimulationHandPoseKeyMapping;
	struct Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HandPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXRSimulationHandPoseKeyMapping>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::NewProp_Hand_MetaData[] = {
		{ "Category", "XRSimulation" },
		{ "Comment", "/** Hand that triggers the key. */" },
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
		{ "ToolTip", "Hand that triggers the key." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRSimulationHandPoseKeyMapping, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::NewProp_Hand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::NewProp_HandPose_MetaData[] = {
		{ "Category", "XRSimulation" },
		{ "Comment", "/** Simulated hand pose name. */" },
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
		{ "ToolTip", "Simulated hand pose name." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::NewProp_HandPose = { "HandPose", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRSimulationHandPoseKeyMapping, HandPose), METADATA_PARAMS(Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::NewProp_HandPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::NewProp_HandPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "XRSimulation" },
		{ "Comment", "/** Key that is triggered by the hand pose. */" },
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
		{ "ToolTip", "Key that is triggered by the hand pose." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRSimulationHandPoseKeyMapping, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::NewProp_Hand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::NewProp_HandPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_XRSimulation,
		nullptr,
		&NewStructOps,
		"XRSimulationHandPoseKeyMapping",
		sizeof(FXRSimulationHandPoseKeyMapping),
		alignof(FXRSimulationHandPoseKeyMapping),
		Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_XRSimulation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("XRSimulationHandPoseKeyMapping"), sizeof(FXRSimulationHandPoseKeyMapping), Get_Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping_Hash() { return 377895499U; }
	void UXRSimulationRuntimeSettings::StaticRegisterNativesUXRSimulationRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_UXRSimulationRuntimeSettings_NoRegister()
	{
		return UXRSimulationRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSimulation_MetaData[];
#endif
		static void NewProp_bEnableSimulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSimulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartWithPositionalHeadTracking_MetaData[];
#endif
		static void NewProp_bStartWithPositionalHeadTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartWithPositionalHeadTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartWithHandsEnabled_MetaData[];
#endif
		static void NewProp_bStartWithHandsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartWithHandsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHandPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultHandPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShoulderPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHandPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DefaultHandPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryHandPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PrimaryHandPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryHandPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SecondaryHandPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuHandPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MenuHandPose;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandPoseKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandPoseKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HandPoseKeys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandMovementBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandMovementBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandRestOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandRestOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HandMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandAnimInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HandAnimInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_XRSimulation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "XRSimulation" },
		{ "Comment", "/**\n * Settings for XRSimulation.\n */" },
		{ "IncludePath", "XRSimulationRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings for XRSimulation." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bEnableSimulation_MetaData[] = {
		{ "Category", "XRSimulation" },
		{ "DisplayName", "Enable Simulation" },
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
		{ "Tooltip", "Enable XR simulation by setting the simulated HMD to connected state." },
	};
#endif
	void Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bEnableSimulation_SetBit(void* Obj)
	{
		((UXRSimulationRuntimeSettings*)Obj)->bEnableSimulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bEnableSimulation = { "bEnableSimulation", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXRSimulationRuntimeSettings), &Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bEnableSimulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bEnableSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bEnableSimulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bStartWithPositionalHeadTracking_MetaData[] = {
		{ "Category", "XRSimulation" },
		{ "DisplayName", "Start With Positional Head Tracking" },
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
		{ "Tooltip", "Enable positional head tracking on game start." },
	};
#endif
	void Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bStartWithPositionalHeadTracking_SetBit(void* Obj)
	{
		((UXRSimulationRuntimeSettings*)Obj)->bStartWithPositionalHeadTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bStartWithPositionalHeadTracking = { "bStartWithPositionalHeadTracking", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXRSimulationRuntimeSettings), &Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bStartWithPositionalHeadTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bStartWithPositionalHeadTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bStartWithPositionalHeadTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bStartWithHandsEnabled_MetaData[] = {
		{ "Category", "XRSimulation" },
		{ "DisplayName", "Start With Hands Enabled" },
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
		{ "Tooltip", "If true, hands will start with tracking enabled." },
	};
#endif
	void Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bStartWithHandsEnabled_SetBit(void* Obj)
	{
		((UXRSimulationRuntimeSettings*)Obj)->bStartWithHandsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bStartWithHandsEnabled = { "bStartWithHandsEnabled", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXRSimulationRuntimeSettings), &Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bStartWithHandsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bStartWithHandsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bStartWithHandsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_DefaultHandPosition_MetaData[] = {
		{ "Category", "XRSimulation" },
		{ "DisplayName", "Default Hand Position" },
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
		{ "Tooltip", "Default position of the right hand in camera space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_DefaultHandPosition = { "DefaultHandPosition", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRSimulationRuntimeSettings, DefaultHandPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_DefaultHandPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_DefaultHandPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_ShoulderPosition_MetaData[] = {
		{ "Category", "XRSimulation" },
		{ "DisplayName", "Shoulder Position" },
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
		{ "Tooltip", "Position of the right shoulder in camera space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_ShoulderPosition = { "ShoulderPosition", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRSimulationRuntimeSettings, ShoulderPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_ShoulderPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_ShoulderPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_DefaultHandPose_MetaData[] = {
		{ "Category", "XRSimulation" },
		{ "DisplayName", "Default Hand Pose" },
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
		{ "Tooltip", "Default pose when no button is pressed." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_DefaultHandPose = { "DefaultHandPose", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRSimulationRuntimeSettings, DefaultHandPose), METADATA_PARAMS(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_DefaultHandPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_DefaultHandPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_PrimaryHandPose_MetaData[] = {
		{ "Category", "XRSimulation" },
		{ "DisplayName", "Primary Hand Pose" },
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
		{ "Tooltip", "Pose mapped to the primary pose action." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_PrimaryHandPose = { "PrimaryHandPose", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRSimulationRuntimeSettings, PrimaryHandPose), METADATA_PARAMS(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_PrimaryHandPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_PrimaryHandPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_SecondaryHandPose_MetaData[] = {
		{ "Category", "XRSimulation" },
		{ "DisplayName", "Secondary Hand Pose" },
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
		{ "Tooltip", "Pose mapped to the secondary pose action." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_SecondaryHandPose = { "SecondaryHandPose", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRSimulationRuntimeSettings, SecondaryHandPose), METADATA_PARAMS(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_SecondaryHandPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_SecondaryHandPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_MenuHandPose_MetaData[] = {
		{ "Category", "XRSimulation" },
		{ "DisplayName", "Menu Hand Pose" },
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
		{ "Tooltip", "Pose mapped to the menu action." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_MenuHandPose = { "MenuHandPose", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRSimulationRuntimeSettings, MenuHandPose), METADATA_PARAMS(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_MenuHandPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_MenuHandPose_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandPoseKeys_Inner = { "HandPoseKeys", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FXRSimulationHandPoseKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandPoseKeys_MetaData[] = {
		{ "Category", "XRSimulation" },
		{ "DisplayName", "Hand Pose Keys" },
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
		{ "Tooltip", "Input keys that are triggered by hand poses." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandPoseKeys = { "HandPoseKeys", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRSimulationRuntimeSettings, HandPoseKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandPoseKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandPoseKeys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandMovementBox_MetaData[] = {
		{ "Category", "XRSimulation" },
		{ "DisplayName", "Hand Movement Range" },
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
		{ "Tooltip", "Allowed range of hand movement in camera space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandMovementBox = { "HandMovementBox", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRSimulationRuntimeSettings, HandMovementBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandMovementBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandMovementBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandRestOrientation_MetaData[] = {
		{ "Category", "XRSimulation" },
		{ "DisplayName", "Hand Rest Orientation" },
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
		{ "Tooltip", "Orientation of the right hand in the default pose." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandRestOrientation = { "HandRestOrientation", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRSimulationRuntimeSettings, HandRestOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandRestOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandRestOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandMesh_MetaData[] = {
		{ "Category", "XRSimulation" },
		{ "DisplayName", "Hand Mesh" },
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
		{ "Tooltip", "Skeletal mesh for animating hands." },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandMesh = { "HandMesh", nullptr, (EPropertyFlags)0x0014000000044001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRSimulationRuntimeSettings, HandMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandAnimInstance_MetaData[] = {
		{ "Category", "XRSimulation" },
		{ "DisplayName", "Hand Animation" },
		{ "ModuleRelativePath", "Public/XRSimulationRuntimeSettings.h" },
		{ "Tooltip", "Animation instance used for animating hand meshes." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandAnimInstance = { "HandAnimInstance", nullptr, (EPropertyFlags)0x0014000000044001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRSimulationRuntimeSettings, HandAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandAnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandAnimInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bEnableSimulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bStartWithPositionalHeadTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_bStartWithHandsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_DefaultHandPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_ShoulderPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_DefaultHandPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_PrimaryHandPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_SecondaryHandPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_MenuHandPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandPoseKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandPoseKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandMovementBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandRestOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::NewProp_HandAnimInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRSimulationRuntimeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::ClassParams = {
		&UXRSimulationRuntimeSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRSimulationRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXRSimulationRuntimeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXRSimulationRuntimeSettings, 1623131562);
	template<> XRSIMULATION_API UClass* StaticClass<UXRSimulationRuntimeSettings>()
	{
		return UXRSimulationRuntimeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXRSimulationRuntimeSettings(Z_Construct_UClass_UXRSimulationRuntimeSettings, &UXRSimulationRuntimeSettings::StaticClass, TEXT("/Script/XRSimulation"), TEXT("UXRSimulationRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRSimulationRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
