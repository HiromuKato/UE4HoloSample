// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MicrosoftOpenXR/Public/MicrosoftOpenXR.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMicrosoftOpenXR() {}
// Cross Module References
	MICROSOFTOPENXR_API UEnum* Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus();
	UPackage* Z_Construct_UPackage__Script_MicrosoftOpenXR();
	MICROSOFTOPENXR_API UScriptStruct* Z_Construct_UScriptStruct_FKeywordInput();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature();
	MICROSOFTOPENXR_API UClass* Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_NoRegister();
	MICROSOFTOPENXR_API UClass* Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	static UEnum* EHandMeshStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus, Z_Construct_UPackage__Script_MicrosoftOpenXR(), TEXT("EHandMeshStatus"));
		}
		return Singleton;
	}
	template<> MICROSOFTOPENXR_API UEnum* StaticEnum<EHandMeshStatus>()
	{
		return EHandMeshStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHandMeshStatus(EHandMeshStatus_StaticEnum, TEXT("/Script/MicrosoftOpenXR"), TEXT("EHandMeshStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus_Hash() { return 2496828450U; }
	UEnum* Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MicrosoftOpenXR();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHandMeshStatus"), 0, Get_Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHandMeshStatus::NotInitialised", (int64)EHandMeshStatus::NotInitialised },
				{ "EHandMeshStatus::Disabled", (int64)EHandMeshStatus::Disabled },
				{ "EHandMeshStatus::EnabledTrackingGeometry", (int64)EHandMeshStatus::EnabledTrackingGeometry },
				{ "EHandMeshStatus::EnabledXRVisualization", (int64)EHandMeshStatus::EnabledXRVisualization },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "MicrosoftOpenXR|OpenXR" },
				{ "Disabled.Name", "EHandMeshStatus::Disabled" },
				{ "EnabledTrackingGeometry.Name", "EHandMeshStatus::EnabledTrackingGeometry" },
				{ "EnabledXRVisualization.Name", "EHandMeshStatus::EnabledXRVisualization" },
				{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
				{ "NotInitialised.Hidden", "" },
				{ "NotInitialised.Name", "EHandMeshStatus::NotInitialised" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MicrosoftOpenXR,
				nullptr,
				"EHandMeshStatus",
				"EHandMeshStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FKeywordInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MICROSOFTOPENXR_API uint32 Get_Z_Construct_UScriptStruct_FKeywordInput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeywordInput, Z_Construct_UPackage__Script_MicrosoftOpenXR(), TEXT("KeywordInput"), sizeof(FKeywordInput), Get_Z_Construct_UScriptStruct_FKeywordInput_Hash());
	}
	return Singleton;
}
template<> MICROSOFTOPENXR_API UScriptStruct* StaticStruct<FKeywordInput>()
{
	return FKeywordInput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeywordInput(FKeywordInput::StaticStruct, TEXT("/Script/MicrosoftOpenXR"), TEXT("KeywordInput"), false, nullptr, nullptr);
static struct FScriptStruct_MicrosoftOpenXR_StaticRegisterNativesFKeywordInput
{
	FScriptStruct_MicrosoftOpenXR_StaticRegisterNativesFKeywordInput()
	{
		UScriptStruct::DeferCppStructOps<FKeywordInput>(FName(TEXT("KeywordInput")));
	}
} ScriptStruct_MicrosoftOpenXR_StaticRegisterNativesFKeywordInput;
	struct Z_Construct_UScriptStruct_FKeywordInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keyword_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keyword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeywordInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeywordInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeywordInput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Keyword_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Keyword = { "Keyword", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeywordInput, Keyword), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Keyword_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Keyword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Callback_MetaData[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeywordInput, Callback), Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeywordInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Keyword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeywordInput_Statics::NewProp_Callback,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeywordInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MicrosoftOpenXR,
		nullptr,
		&NewStructOps,
		"KeywordInput",
		sizeof(FKeywordInput),
		alignof(FKeywordInput),
		Z_Construct_UScriptStruct_FKeywordInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeywordInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeywordInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeywordInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeywordInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeywordInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MicrosoftOpenXR();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeywordInput"), sizeof(FKeywordInput), Get_Z_Construct_UScriptStruct_FKeywordInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeywordInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeywordInput_Hash() { return 1915855715U; }
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execRemoveKeywords)
	{
		P_GET_TARRAY(FString,Z_Param_Keywords);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMicrosoftOpenXRFunctionLibrary::RemoveKeywords(Z_Param_Keywords);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execAddKeywords)
	{
		P_GET_TARRAY(FKeywordInput,Z_Param_Keywords);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMicrosoftOpenXRFunctionLibrary::AddKeywords(Z_Param_Keywords);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execIsSpeechRecognitionAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMicrosoftOpenXRFunctionLibrary::IsSpeechRecognitionAvailable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execGetWorldSpaceRayFromCameraPoint)
	{
		P_GET_STRUCT(FVector2D,Z_Param_pixelCoordinate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UMicrosoftOpenXRFunctionLibrary::GetWorldSpaceRayFromCameraPoint(Z_Param_pixelCoordinate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execGetPVCameraIntrinsics)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_focalLength);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_width);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_height);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_principalPoint);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_radialDistortion);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_tangentialDistortion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMicrosoftOpenXRFunctionLibrary::GetPVCameraIntrinsics(Z_Param_Out_focalLength,Z_Param_Out_width,Z_Param_Out_height,Z_Param_Out_principalPoint,Z_Param_Out_radialDistortion,Z_Param_Out_tangentialDistortion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execGetPVCameraToWorldTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UMicrosoftOpenXRFunctionLibrary::GetPVCameraToWorldTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execIsQREnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMicrosoftOpenXRFunctionLibrary::IsQREnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMicrosoftOpenXRFunctionLibrary::execSetUseHandMesh)
	{
		P_GET_ENUM(EHandMeshStatus,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMicrosoftOpenXRFunctionLibrary::SetUseHandMesh(EHandMeshStatus(Z_Param_Mode));
		P_NATIVE_END;
	}
	void UMicrosoftOpenXRFunctionLibrary::StaticRegisterNativesUMicrosoftOpenXRFunctionLibrary()
	{
		UClass* Class = UMicrosoftOpenXRFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddKeywords", &UMicrosoftOpenXRFunctionLibrary::execAddKeywords },
			{ "GetPVCameraIntrinsics", &UMicrosoftOpenXRFunctionLibrary::execGetPVCameraIntrinsics },
			{ "GetPVCameraToWorldTransform", &UMicrosoftOpenXRFunctionLibrary::execGetPVCameraToWorldTransform },
			{ "GetWorldSpaceRayFromCameraPoint", &UMicrosoftOpenXRFunctionLibrary::execGetWorldSpaceRayFromCameraPoint },
			{ "IsQREnabled", &UMicrosoftOpenXRFunctionLibrary::execIsQREnabled },
			{ "IsSpeechRecognitionAvailable", &UMicrosoftOpenXRFunctionLibrary::execIsSpeechRecognitionAvailable },
			{ "RemoveKeywords", &UMicrosoftOpenXRFunctionLibrary::execRemoveKeywords },
			{ "SetUseHandMesh", &UMicrosoftOpenXRFunctionLibrary::execSetUseHandMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventAddKeywords_Parms
		{
			TArray<FKeywordInput> Keywords;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Keywords_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keywords;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::NewProp_Keywords_Inner = { "Keywords", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeywordInput, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventAddKeywords_Parms, Keywords), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::NewProp_Keywords_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::NewProp_Keywords,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "Comment", "/**\n\x09""Add new speech keywords with associated callbacks.\n\n\x09@param Keywords list of keyword and callbacks to add.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Add new speech keywords with associated callbacks.\n\n@param Keywords list of keyword and callbacks to add." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "AddKeywords", nullptr, nullptr, sizeof(MicrosoftOpenXRFunctionLibrary_eventAddKeywords_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms
		{
			FVector2D focalLength;
			int32 width;
			int32 height;
			FVector2D principalPoint;
			FVector radialDistortion;
			FVector2D tangentialDistortion;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_focalLength;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_width;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_height;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_principalPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_radialDistortion;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tangentialDistortion;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_focalLength = { "focalLength", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms, focalLength), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms, width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms, height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_principalPoint = { "principalPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms, principalPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_radialDistortion = { "radialDistortion", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms, radialDistortion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_tangentialDistortion = { "tangentialDistortion", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms, tangentialDistortion), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms), &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_focalLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_principalPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_radialDistortion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_tangentialDistortion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "Comment", "/**\n\x09 * Get the PV Camera intrinsics.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Get the PV Camera intrinsics." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "GetPVCameraIntrinsics", nullptr, nullptr, sizeof(MicrosoftOpenXRFunctionLibrary_eventGetPVCameraIntrinsics_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventGetPVCameraToWorldTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventGetPVCameraToWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "Comment", "/**\n\x09 * Get the transform from PV camera space to Unreal world space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Get the transform from PV camera space to Unreal world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "GetPVCameraToWorldTransform", nullptr, nullptr, sizeof(MicrosoftOpenXRFunctionLibrary_eventGetPVCameraToWorldTransform_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventGetWorldSpaceRayFromCameraPoint_Parms
		{
			FVector2D pixelCoordinate;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pixelCoordinate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::NewProp_pixelCoordinate = { "pixelCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventGetWorldSpaceRayFromCameraPoint_Parms, pixelCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventGetWorldSpaceRayFromCameraPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::NewProp_pixelCoordinate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "Comment", "/**\n\x09 * Get a ray into the scene from a camera point.\n\x09 * X is left/right\n\x09 * Y is up/down\n\x09 */" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Get a ray into the scene from a camera point.\nX is left/right\nY is up/down" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "GetWorldSpaceRayFromCameraPoint", nullptr, nullptr, sizeof(MicrosoftOpenXRFunctionLibrary_eventGetWorldSpaceRayFromCameraPoint_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventIsQREnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MicrosoftOpenXRFunctionLibrary_eventIsQREnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MicrosoftOpenXRFunctionLibrary_eventIsQREnabled_Parms), &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "Comment", "/**\n\x09Is QR Tracking enabled\n\n\x09@return true if the command successes\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Is QR Tracking enabled\n\n@return true if the command successes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "IsQREnabled", nullptr, nullptr, sizeof(MicrosoftOpenXRFunctionLibrary_eventIsQREnabled_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventIsSpeechRecognitionAvailable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MicrosoftOpenXRFunctionLibrary_eventIsSpeechRecognitionAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MicrosoftOpenXRFunctionLibrary_eventIsSpeechRecognitionAvailable_Parms), &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "Comment", "/**\n\x09""Check if the current platform supports speech recognition.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Check if the current platform supports speech recognition." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "IsSpeechRecognitionAvailable", nullptr, nullptr, sizeof(MicrosoftOpenXRFunctionLibrary_eventIsSpeechRecognitionAvailable_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventRemoveKeywords_Parms
		{
			TArray<FString> Keywords;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keywords_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keywords;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::NewProp_Keywords_Inner = { "Keywords", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventRemoveKeywords_Parms, Keywords), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::NewProp_Keywords_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::NewProp_Keywords,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "Comment", "/**\n\x09Remove speech keywords.\n\n\x09@param Keywords list of keyword to remove.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Remove speech keywords.\n\n@param Keywords list of keyword to remove." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "RemoveKeywords", nullptr, nullptr, sizeof(MicrosoftOpenXRFunctionLibrary_eventRemoveKeywords_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics
	{
		struct MicrosoftOpenXRFunctionLibrary_eventSetUseHandMesh_Parms
		{
			EHandMeshStatus Mode;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MicrosoftOpenXRFunctionLibrary_eventSetUseHandMesh_Parms, Mode), Z_Construct_UEnum_MicrosoftOpenXR_EHandMeshStatus, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MicrosoftOpenXRFunctionLibrary_eventSetUseHandMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MicrosoftOpenXRFunctionLibrary_eventSetUseHandMesh_Parms), &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "MicrosoftOpenXR|OpenXR" },
		{ "Comment", "/**\n\x09Turn Hand Mesh\n\n\x09@param On true if enable\n\x09@return true if the command successes\n\x09*/" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
		{ "ToolTip", "Turn Hand Mesh\n\n@param On true if enable\n@return true if the command successes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, nullptr, "SetUseHandMesh", nullptr, nullptr, sizeof(MicrosoftOpenXRFunctionLibrary_eventSetUseHandMesh_Parms), Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_NoRegister()
	{
		return UMicrosoftOpenXRFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MicrosoftOpenXR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_AddKeywords, "AddKeywords" }, // 820011048
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraIntrinsics, "GetPVCameraIntrinsics" }, // 1369913520
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetPVCameraToWorldTransform, "GetPVCameraToWorldTransform" }, // 3969298484
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_GetWorldSpaceRayFromCameraPoint, "GetWorldSpaceRayFromCameraPoint" }, // 1286532631
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsQREnabled, "IsQREnabled" }, // 1057000257
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_IsSpeechRecognitionAvailable, "IsSpeechRecognitionAvailable" }, // 2616385630
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_RemoveKeywords, "RemoveKeywords" }, // 3369999516
		{ &Z_Construct_UFunction_UMicrosoftOpenXRFunctionLibrary_SetUseHandMesh, "SetUseHandMesh" }, // 307074132
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "OpenXR" },
		{ "IncludePath", "MicrosoftOpenXR.h" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXR.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMicrosoftOpenXRFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics::ClassParams = {
		&UMicrosoftOpenXRFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMicrosoftOpenXRFunctionLibrary, 3006927391);
	template<> MICROSOFTOPENXR_API UClass* StaticClass<UMicrosoftOpenXRFunctionLibrary>()
	{
		return UMicrosoftOpenXRFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMicrosoftOpenXRFunctionLibrary(Z_Construct_UClass_UMicrosoftOpenXRFunctionLibrary, &UMicrosoftOpenXRFunctionLibrary::StaticClass, TEXT("/Script/MicrosoftOpenXR"), TEXT("UMicrosoftOpenXRFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMicrosoftOpenXRFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
