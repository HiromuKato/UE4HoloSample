// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRSimulation/Public/XRSimulationActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRSimulationActor() {}
// Cross Module References
	XRSIMULATION_API UClass* Z_Construct_UClass_AXRSimulationActor_NoRegister();
	XRSIMULATION_API UClass* Z_Construct_UClass_AXRSimulationActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_XRSimulation();
	XRSIMULATION_API UClass* Z_Construct_UClass_UXRSimulationHeadMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(AXRSimulationActor::execGetRightHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetRightHand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXRSimulationActor::execGetLeftHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetLeftHand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXRSimulationActor::execGetHeadMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXRSimulationHeadMovementComponent**)Z_Param__Result=P_THIS->GetHeadMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXRSimulationActor::execGetTargetHandPose)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_TargetPose);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TargetTransform);
		P_GET_UBOOL_REF(Z_Param_Out_bAnimateTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTargetHandPose(Z_Param_WorldContextObject,EControllerHand(Z_Param_Hand),Z_Param_Out_TargetPose,Z_Param_Out_TargetTransform,Z_Param_Out_bAnimateTransform);
		P_NATIVE_END;
	}
	void AXRSimulationActor::StaticRegisterNativesAXRSimulationActor()
	{
		UClass* Class = AXRSimulationActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeadMovement", &AXRSimulationActor::execGetHeadMovement },
			{ "GetLeftHand", &AXRSimulationActor::execGetLeftHand },
			{ "GetRightHand", &AXRSimulationActor::execGetRightHand },
			{ "GetTargetHandPose", &AXRSimulationActor::execGetTargetHandPose },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AXRSimulationActor_GetHeadMovement_Statics
	{
		struct XRSimulationActor_eventGetHeadMovement_Parms
		{
			UXRSimulationHeadMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRSimulationActor_GetHeadMovement_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXRSimulationActor_GetHeadMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XRSimulationActor_eventGetHeadMovement_Parms, ReturnValue), Z_Construct_UClass_UXRSimulationHeadMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AXRSimulationActor_GetHeadMovement_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRSimulationActor_GetHeadMovement_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXRSimulationActor_GetHeadMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRSimulationActor_GetHeadMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRSimulationActor_GetHeadMovement_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "XRSimulation" },
		{ "ModuleRelativePath", "Public/XRSimulationActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXRSimulationActor_GetHeadMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXRSimulationActor, nullptr, "GetHeadMovement", nullptr, nullptr, sizeof(XRSimulationActor_eventGetHeadMovement_Parms), Z_Construct_UFunction_AXRSimulationActor_GetHeadMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRSimulationActor_GetHeadMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXRSimulationActor_GetHeadMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRSimulationActor_GetHeadMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXRSimulationActor_GetHeadMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXRSimulationActor_GetHeadMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXRSimulationActor_GetLeftHand_Statics
	{
		struct XRSimulationActor_eventGetLeftHand_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRSimulationActor_GetLeftHand_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXRSimulationActor_GetLeftHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XRSimulationActor_eventGetLeftHand_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AXRSimulationActor_GetLeftHand_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRSimulationActor_GetLeftHand_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXRSimulationActor_GetLeftHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRSimulationActor_GetLeftHand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRSimulationActor_GetLeftHand_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "XRSimulation" },
		{ "ModuleRelativePath", "Public/XRSimulationActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXRSimulationActor_GetLeftHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXRSimulationActor, nullptr, "GetLeftHand", nullptr, nullptr, sizeof(XRSimulationActor_eventGetLeftHand_Parms), Z_Construct_UFunction_AXRSimulationActor_GetLeftHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRSimulationActor_GetLeftHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXRSimulationActor_GetLeftHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRSimulationActor_GetLeftHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXRSimulationActor_GetLeftHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXRSimulationActor_GetLeftHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXRSimulationActor_GetRightHand_Statics
	{
		struct XRSimulationActor_eventGetRightHand_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRSimulationActor_GetRightHand_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXRSimulationActor_GetRightHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XRSimulationActor_eventGetRightHand_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AXRSimulationActor_GetRightHand_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRSimulationActor_GetRightHand_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXRSimulationActor_GetRightHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRSimulationActor_GetRightHand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRSimulationActor_GetRightHand_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "XRSimulation" },
		{ "ModuleRelativePath", "Public/XRSimulationActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXRSimulationActor_GetRightHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXRSimulationActor, nullptr, "GetRightHand", nullptr, nullptr, sizeof(XRSimulationActor_eventGetRightHand_Parms), Z_Construct_UFunction_AXRSimulationActor_GetRightHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRSimulationActor_GetRightHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXRSimulationActor_GetRightHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRSimulationActor_GetRightHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXRSimulationActor_GetRightHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXRSimulationActor_GetRightHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics
	{
		struct XRSimulationActor_eventGetTargetHandPose_Parms
		{
			UObject* WorldContextObject;
			EControllerHand Hand;
			FName TargetPose;
			FTransform TargetTransform;
			bool bAnimateTransform;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetPose;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
		static void NewProp_bAnimateTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimateTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XRSimulationActor_eventGetTargetHandPose_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XRSimulationActor_eventGetTargetHandPose_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::NewProp_TargetPose = { "TargetPose", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XRSimulationActor_eventGetTargetHandPose_Parms, TargetPose), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XRSimulationActor_eventGetTargetHandPose_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::NewProp_bAnimateTransform_SetBit(void* Obj)
	{
		((XRSimulationActor_eventGetTargetHandPose_Parms*)Obj)->bAnimateTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::NewProp_bAnimateTransform = { "bAnimateTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XRSimulationActor_eventGetTargetHandPose_Parms), &Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::NewProp_bAnimateTransform_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::NewProp_Hand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::NewProp_TargetPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::NewProp_TargetTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::NewProp_bAnimateTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "XRSimulation" },
		{ "Comment", "/* Returns the target hand pose from the simulation state for animation. */" },
		{ "ModuleRelativePath", "Public/XRSimulationActor.h" },
		{ "ToolTip", "Returns the target hand pose from the simulation state for animation." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXRSimulationActor, nullptr, "GetTargetHandPose", nullptr, nullptr, sizeof(XRSimulationActor_eventGetTargetHandPose_Parms), Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AXRSimulationActor_NoRegister()
	{
		return AXRSimulationActor::StaticClass();
	}
	struct Z_Construct_UClass_AXRSimulationActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddDefaultInputBindings_MetaData[];
#endif
		static void NewProp_bAddDefaultInputBindings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddDefaultInputBindings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeadMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXRSimulationActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_XRSimulation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AXRSimulationActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AXRSimulationActor_GetHeadMovement, "GetHeadMovement" }, // 2178639793
		{ &Z_Construct_UFunction_AXRSimulationActor_GetLeftHand, "GetLeftHand" }, // 3205431537
		{ &Z_Construct_UFunction_AXRSimulationActor_GetRightHand, "GetRightHand" }, // 1781386316
		{ &Z_Construct_UFunction_AXRSimulationActor_GetTargetHandPose, "GetTargetHandPose" }, // 690850866
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRSimulationActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "XRSimulation" },
		{ "Comment", "/** Actor that produces head pose and hand animations for the simulated HMD. */" },
		{ "IncludePath", "XRSimulationActor.h" },
		{ "ModuleRelativePath", "Public/XRSimulationActor.h" },
		{ "ToolTip", "Actor that produces head pose and hand animations for the simulated HMD." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_bAddDefaultInputBindings_MetaData[] = {
		{ "Category", "XRSimulation" },
		{ "Comment", "/** If true, adds default input bindings for input simulation. */" },
		{ "ModuleRelativePath", "Public/XRSimulationActor.h" },
		{ "ToolTip", "If true, adds default input bindings for input simulation." },
	};
#endif
	void Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_bAddDefaultInputBindings_SetBit(void* Obj)
	{
		((AXRSimulationActor*)Obj)->bAddDefaultInputBindings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_bAddDefaultInputBindings = { "bAddDefaultInputBindings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AXRSimulationActor), &Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_bAddDefaultInputBindings_SetBit, METADATA_PARAMS(Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_bAddDefaultInputBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_bAddDefaultInputBindings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_HeadMovement_MetaData[] = {
		{ "BlueprintGetter", "GetHeadMovement" },
		{ "Category", "XRSimulation" },
		{ "Comment", "/** Movement component for interpreting user input as head movement. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRSimulationActor.h" },
		{ "ToolTip", "Movement component for interpreting user input as head movement." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_HeadMovement = { "HeadMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXRSimulationActor, HeadMovement), Z_Construct_UClass_UXRSimulationHeadMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_HeadMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_HeadMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_LeftHand_MetaData[] = {
		{ "BlueprintGetter", "GetLeftHand" },
		{ "Category", "XRSimulation" },
		{ "Comment", "/** Skeletal mesh component for the left hand. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRSimulationActor.h" },
		{ "ToolTip", "Skeletal mesh component for the left hand." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_LeftHand = { "LeftHand", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXRSimulationActor, LeftHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_LeftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_LeftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_RightHand_MetaData[] = {
		{ "BlueprintGetter", "GetRightHand" },
		{ "Category", "XRSimulation" },
		{ "Comment", "/** Skeletal mesh component for the right hand. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRSimulationActor.h" },
		{ "ToolTip", "Skeletal mesh component for the right hand." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_RightHand = { "RightHand", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AXRSimulationActor, RightHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_RightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_RightHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AXRSimulationActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_bAddDefaultInputBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_HeadMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_LeftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRSimulationActor_Statics::NewProp_RightHand,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXRSimulationActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXRSimulationActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AXRSimulationActor_Statics::ClassParams = {
		&AXRSimulationActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AXRSimulationActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AXRSimulationActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AXRSimulationActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXRSimulationActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXRSimulationActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AXRSimulationActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AXRSimulationActor, 2286897327);
	template<> XRSIMULATION_API UClass* StaticClass<AXRSimulationActor>()
	{
		return AXRSimulationActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AXRSimulationActor(Z_Construct_UClass_AXRSimulationActor, &AXRSimulationActor::StaticClass, TEXT("/Script/XRSimulation"), TEXT("AXRSimulationActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXRSimulationActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
