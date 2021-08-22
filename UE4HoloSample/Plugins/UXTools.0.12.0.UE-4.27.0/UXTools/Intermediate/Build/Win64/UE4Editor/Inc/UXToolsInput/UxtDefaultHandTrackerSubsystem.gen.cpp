// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXToolsInput/Private/UxtDefaultHandTrackerSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtDefaultHandTrackerSubsystem() {}
// Cross Module References
	UXTOOLSINPUT_API UClass* Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_NoRegister();
	UXTOOLSINPUT_API UClass* Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_UXToolsInput();
// End Cross Module References
	void UUxtDefaultHandTrackerSubsystem::StaticRegisterNativesUUxtDefaultHandTrackerSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_NoRegister()
	{
		return UUxtDefaultHandTrackerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UXToolsInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Subsystem for registering the default hand tracker.\n *\n * This subsystem creates the default hand tracker on player login.\n * It registers input action mappings and binds to input events for Select/Grip actions.\n * It also updates MotionControllerData of the default hand tracker once per world tick.\n */" },
		{ "IncludePath", "UxtDefaultHandTrackerSubsystem.h" },
		{ "ModuleRelativePath", "Private/UxtDefaultHandTrackerSubsystem.h" },
		{ "ToolTip", "Subsystem for registering the default hand tracker.\n\nThis subsystem creates the default hand tracker on player login.\nIt registers input action mappings and binds to input events for Select/Grip actions.\nIt also updates MotionControllerData of the default hand tracker once per world tick." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtDefaultHandTrackerSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_Statics::ClassParams = {
		&UUxtDefaultHandTrackerSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtDefaultHandTrackerSubsystem, 2175436766);
	template<> UXTOOLSINPUT_API UClass* StaticClass<UUxtDefaultHandTrackerSubsystem>()
	{
		return UUxtDefaultHandTrackerSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtDefaultHandTrackerSubsystem(Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem, &UUxtDefaultHandTrackerSubsystem::StaticClass, TEXT("/Script/UXToolsInput"), TEXT("UUxtDefaultHandTrackerSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtDefaultHandTrackerSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
