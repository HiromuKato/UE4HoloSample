// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXToolsInput/Private/UxtXRSimulationSubsystem.h"
#include "Engine/Classes/Engine/LocalPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtXRSimulationSubsystem() {}
// Cross Module References
	UXTOOLSINPUT_API UClass* Z_Construct_UClass_UUxtXRSimulationSubsystem_NoRegister();
	UXTOOLSINPUT_API UClass* Z_Construct_UClass_UUxtXRSimulationSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	UPackage* Z_Construct_UPackage__Script_UXToolsInput();
// End Cross Module References
	void UUxtXRSimulationSubsystem::StaticRegisterNativesUUxtXRSimulationSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UUxtXRSimulationSubsystem_NoRegister()
	{
		return UUxtXRSimulationSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUxtXRSimulationSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtXRSimulationSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UXToolsInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtXRSimulationSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Subsystem for managing XR simulation actors. */" },
		{ "IncludePath", "UxtXRSimulationSubsystem.h" },
		{ "ModuleRelativePath", "Private/UxtXRSimulationSubsystem.h" },
		{ "ToolTip", "Subsystem for managing XR simulation actors." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtXRSimulationSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtXRSimulationSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtXRSimulationSubsystem_Statics::ClassParams = {
		&UUxtXRSimulationSubsystem::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtXRSimulationSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtXRSimulationSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtXRSimulationSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtXRSimulationSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtXRSimulationSubsystem, 302448406);
	template<> UXTOOLSINPUT_API UClass* StaticClass<UUxtXRSimulationSubsystem>()
	{
		return UUxtXRSimulationSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtXRSimulationSubsystem(Z_Construct_UClass_UUxtXRSimulationSubsystem, &UUxtXRSimulationSubsystem::StaticClass, TEXT("/Script/UXToolsInput"), TEXT("UUxtXRSimulationSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtXRSimulationSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
