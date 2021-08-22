// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MicrosoftOpenXRRuntimeSettings/Public/MicrosoftOpenXRRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMicrosoftOpenXRRuntimeSettings() {}
// Cross Module References
	MICROSOFTOPENXRRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec();
	UPackage* Z_Construct_UPackage__Script_MicrosoftOpenXRRuntimeSettings();
	MICROSOFTOPENXRRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType();
	MICROSOFTOPENXRRUNTIMESETTINGS_API UClass* Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_NoRegister();
	MICROSOFTOPENXRRUNTIMESETTINGS_API UClass* Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* RemotingCodec_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec, Z_Construct_UPackage__Script_MicrosoftOpenXRRuntimeSettings(), TEXT("RemotingCodec"));
		}
		return Singleton;
	}
	template<> MICROSOFTOPENXRRUNTIMESETTINGS_API UEnum* StaticEnum<RemotingCodec>()
	{
		return RemotingCodec_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_RemotingCodec(RemotingCodec_StaticEnum, TEXT("/Script/MicrosoftOpenXRRuntimeSettings"), TEXT("RemotingCodec"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec_Hash() { return 1721330704U; }
	UEnum* Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MicrosoftOpenXRRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("RemotingCodec"), 0, Get_Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RemotingCodec::Any", (int64)RemotingCodec::Any },
				{ "RemotingCodec::H264", (int64)RemotingCodec::H264 },
				{ "RemotingCodec::H265", (int64)RemotingCodec::H265 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Any.Name", "RemotingCodec::Any" },
				{ "Comment", "// This will be cast to XrRemotingVideoCodecMSFT, IDs must match\n" },
				{ "H264.Name", "RemotingCodec::H264" },
				{ "H265.Name", "RemotingCodec::H265" },
				{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
				{ "ToolTip", "This will be cast to XrRemotingVideoCodecMSFT, IDs must match" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MicrosoftOpenXRRuntimeSettings,
				nullptr,
				"RemotingCodec",
				"RemotingCodec",
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
	static UEnum* RemotingConnectionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType, Z_Construct_UPackage__Script_MicrosoftOpenXRRuntimeSettings(), TEXT("RemotingConnectionType"));
		}
		return Singleton;
	}
	template<> MICROSOFTOPENXRRUNTIMESETTINGS_API UEnum* StaticEnum<RemotingConnectionType>()
	{
		return RemotingConnectionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_RemotingConnectionType(RemotingConnectionType_StaticEnum, TEXT("/Script/MicrosoftOpenXRRuntimeSettings"), TEXT("RemotingConnectionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType_Hash() { return 3101390428U; }
	UEnum* Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MicrosoftOpenXRRuntimeSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("RemotingConnectionType"), 0, Get_Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RemotingConnectionType::Connect", (int64)RemotingConnectionType::Connect },
				{ "RemotingConnectionType::Listen", (int64)RemotingConnectionType::Listen },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Connect.Name", "RemotingConnectionType::Connect" },
				{ "Listen.Name", "RemotingConnectionType::Listen" },
				{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MicrosoftOpenXRRuntimeSettings,
				nullptr,
				"RemotingConnectionType",
				"RemotingConnectionType",
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
	void UMicrosoftOpenXRRuntimeSettings::StaticRegisterNativesUMicrosoftOpenXRRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_NoRegister()
	{
		return UMicrosoftOpenXRRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRemotingForEditor_MetaData[];
#endif
		static void NewProp_bEnableRemotingForEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRemotingForEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteHoloLensIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemoteHoloLensIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoConnectRemoting_MetaData[];
#endif
		static void NewProp_bAutoConnectRemoting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoConnectRemoting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBitrate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedFIntPropertyParams NewProp_MaxBitrate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableAudio_MetaData[];
#endif
		static void NewProp_EnableAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableAudio;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ConnectionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConnectionType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ConnectionCodec_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionCodec_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConnectionCodec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MicrosoftOpenXRRuntimeSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the WindowsMixedReality runtime platform.\n */" },
		{ "IncludePath", "MicrosoftOpenXRRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the WindowsMixedReality runtime platform." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor_MetaData[] = {
		{ "Category", "OpenXR Holographic Remoting" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Enable Remoting For Editor (Requires Restart)" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
		{ "Tooltip", "If true, start with a valid HMD to enable connecting via remoting.  Editor restart required." },
	};
#endif
	void Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor_SetBit(void* Obj)
	{
		((UMicrosoftOpenXRRuntimeSettings*)Obj)->bEnableRemotingForEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor = { "bEnableRemotingForEditor", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMicrosoftOpenXRRuntimeSettings), &Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_RemoteHoloLensIP_MetaData[] = {
		{ "Category", "OpenXR Holographic Remoting" },
		{ "Comment", "/** The IP of the HoloLens to remote to. */" },
		{ "DisplayName", "IP of HoloLens to remote to." },
		{ "EditCondition", "bEnableRemotingForEditor" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
		{ "ToolTip", "The IP of the HoloLens to remote to." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_RemoteHoloLensIP = { "RemoteHoloLensIP", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMicrosoftOpenXRRuntimeSettings, RemoteHoloLensIP), METADATA_PARAMS(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_RemoteHoloLensIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_RemoteHoloLensIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bAutoConnectRemoting_MetaData[] = {
		{ "Category", "OpenXR Holographic Remoting" },
		{ "DisplayName", "Automatically connect to remote device." },
		{ "EditCondition", "bEnableRemotingForEditor" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bAutoConnectRemoting_SetBit(void* Obj)
	{
		((UMicrosoftOpenXRRuntimeSettings*)Obj)->bAutoConnectRemoting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bAutoConnectRemoting = { "bAutoConnectRemoting", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMicrosoftOpenXRRuntimeSettings), &Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bAutoConnectRemoting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bAutoConnectRemoting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bAutoConnectRemoting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_MaxBitrate_MetaData[] = {
		{ "Category", "OpenXR Holographic Remoting" },
		{ "DisplayName", "Max network transfer rate (kb/s)." },
		{ "EditCondition", "bEnableRemotingForEditor" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedFIntPropertyParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_MaxBitrate = { "MaxBitrate", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMicrosoftOpenXRRuntimeSettings, MaxBitrate), METADATA_PARAMS(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_MaxBitrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_MaxBitrate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_EnableAudio_MetaData[] = {
		{ "Category", "OpenXR Holographic Remoting" },
		{ "DisplayName", "Use audio from PC when remoting." },
		{ "EditCondition", "bEnableRemotingForEditor" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_EnableAudio_SetBit(void* Obj)
	{
		((UMicrosoftOpenXRRuntimeSettings*)Obj)->EnableAudio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_EnableAudio = { "EnableAudio", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMicrosoftOpenXRRuntimeSettings), &Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_EnableAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_EnableAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_EnableAudio_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionType_MetaData[] = {
		{ "Category", "OpenXR Holographic Remoting" },
		{ "DisplayName", "Connection Type." },
		{ "EditCondition", "bEnableRemotingForEditor" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionType = { "ConnectionType", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMicrosoftOpenXRRuntimeSettings, ConnectionType), Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingConnectionType, METADATA_PARAMS(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionCodec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionCodec_MetaData[] = {
		{ "Category", "OpenXR Holographic Remoting" },
		{ "DisplayName", "Connection Codec." },
		{ "EditCondition", "bEnableRemotingForEditor" },
		{ "ModuleRelativePath", "Public/MicrosoftOpenXRRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionCodec = { "ConnectionCodec", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMicrosoftOpenXRRuntimeSettings, ConnectionCodec), Z_Construct_UEnum_MicrosoftOpenXRRuntimeSettings_RemotingCodec, METADATA_PARAMS(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionCodec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionCodec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_RemoteHoloLensIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_bAutoConnectRemoting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_MaxBitrate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_EnableAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionCodec_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::NewProp_ConnectionCodec,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMicrosoftOpenXRRuntimeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::ClassParams = {
		&UMicrosoftOpenXRRuntimeSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMicrosoftOpenXRRuntimeSettings, 3243939506);
	template<> MICROSOFTOPENXRRUNTIMESETTINGS_API UClass* StaticClass<UMicrosoftOpenXRRuntimeSettings>()
	{
		return UMicrosoftOpenXRRuntimeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMicrosoftOpenXRRuntimeSettings(Z_Construct_UClass_UMicrosoftOpenXRRuntimeSettings, &UMicrosoftOpenXRRuntimeSettings::StaticClass, TEXT("/Script/MicrosoftOpenXRRuntimeSettings"), TEXT("UMicrosoftOpenXRRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMicrosoftOpenXRRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
