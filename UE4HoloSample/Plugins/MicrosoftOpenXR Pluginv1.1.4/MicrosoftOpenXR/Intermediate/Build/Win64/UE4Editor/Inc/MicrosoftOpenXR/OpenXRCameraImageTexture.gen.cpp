// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MicrosoftOpenXR/Private/OpenXRCameraImageTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenXRCameraImageTexture() {}
// Cross Module References
	MICROSOFTOPENXR_API UClass* Z_Construct_UClass_UOpenXRCameraImageTexture_NoRegister();
	MICROSOFTOPENXR_API UClass* Z_Construct_UClass_UOpenXRCameraImageTexture();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTextureCameraImage();
	UPackage* Z_Construct_UPackage__Script_MicrosoftOpenXR();
// End Cross Module References
	void UOpenXRCameraImageTexture::StaticRegisterNativesUOpenXRCameraImageTexture()
	{
	}
	UClass* Z_Construct_UClass_UOpenXRCameraImageTexture_NoRegister()
	{
		return UOpenXRCameraImageTexture::StaticClass();
	}
	struct Z_Construct_UClass_UOpenXRCameraImageTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenXRCameraImageTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTextureCameraImage,
		(UObject* (*)())Z_Construct_UPackage__Script_MicrosoftOpenXR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRCameraImageTexture_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides access to the camera's image data as a texture\n */" },
		{ "IncludePath", "OpenXRCameraImageTexture.h" },
		{ "ModuleRelativePath", "Private/OpenXRCameraImageTexture.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "Provides access to the camera's image data as a texture" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenXRCameraImageTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRCameraImageTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRCameraImageTexture_Statics::ClassParams = {
		&UOpenXRCameraImageTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenXRCameraImageTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRCameraImageTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenXRCameraImageTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenXRCameraImageTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenXRCameraImageTexture, 2322566367);
	template<> MICROSOFTOPENXR_API UClass* StaticClass<UOpenXRCameraImageTexture>()
	{
		return UOpenXRCameraImageTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenXRCameraImageTexture(Z_Construct_UClass_UOpenXRCameraImageTexture, &UOpenXRCameraImageTexture::StaticClass, TEXT("/Script/MicrosoftOpenXR"), TEXT("UOpenXRCameraImageTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRCameraImageTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
