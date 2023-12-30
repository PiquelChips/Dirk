// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../../../../Proj/Dirk/Plugins/amd/FSR3/Source/FFXFSR3Settings/Public/FFXFSR3Settings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFFXFSR3Settings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
	FFXFSR3SETTINGS_API UClass* Z_Construct_UClass_UFFXFSR3Settings();
	FFXFSR3SETTINGS_API UClass* Z_Construct_UClass_UFFXFSR3Settings_NoRegister();
	FFXFSR3SETTINGS_API UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode();
	FFXFSR3SETTINGS_API UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat();
	FFXFSR3SETTINGS_API UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode();
	FFXFSR3SETTINGS_API UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode();
	UPackage* Z_Construct_UPackage__Script_FFXFSR3Settings();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFFXFSR3QualityMode;
	static UEnum* EFFXFSR3QualityMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFFXFSR3QualityMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFFXFSR3QualityMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode, (UObject*)Z_Construct_UPackage__Script_FFXFSR3Settings(), TEXT("EFFXFSR3QualityMode"));
		}
		return Z_Registration_Info_UEnum_EFFXFSR3QualityMode.OuterSingleton;
	}
	template<> FFXFSR3SETTINGS_API UEnum* StaticEnum<EFFXFSR3QualityMode>()
	{
		return EFFXFSR3QualityMode_StaticEnum();
	}
	struct Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode_Statics::Enumerators[] = {
		{ "EFFXFSR3QualityMode::NativeAA", (int64)EFFXFSR3QualityMode::NativeAA },
		{ "EFFXFSR3QualityMode::Quality", (int64)EFFXFSR3QualityMode::Quality },
		{ "EFFXFSR3QualityMode::Balanced", (int64)EFFXFSR3QualityMode::Balanced },
		{ "EFFXFSR3QualityMode::Performance", (int64)EFFXFSR3QualityMode::Performance },
		{ "EFFXFSR3QualityMode::UltraPerformance", (int64)EFFXFSR3QualityMode::UltraPerformance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode_Statics::Enum_MetaDataParams[] = {
		{ "Balanced.DisplayName", "Balanced" },
		{ "Balanced.Name", "EFFXFSR3QualityMode::Balanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------------------\n// The official FSR3 quality modes.\n//-------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "NativeAA.DisplayName", "Native AA" },
		{ "NativeAA.Name", "EFFXFSR3QualityMode::NativeAA" },
		{ "Performance.DisplayName", "Performance" },
		{ "Performance.Name", "EFFXFSR3QualityMode::Performance" },
		{ "Quality.DisplayName", "Quality" },
		{ "Quality.Name", "EFFXFSR3QualityMode::Quality" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The official FSR3 quality modes." },
#endif
		{ "UltraPerformance.DisplayName", "Ultra Performance" },
		{ "UltraPerformance.Name", "EFFXFSR3QualityMode::UltraPerformance" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FFXFSR3Settings,
		nullptr,
		"EFFXFSR3QualityMode",
		"EFFXFSR3QualityMode",
		Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode()
	{
		if (!Z_Registration_Info_UEnum_EFFXFSR3QualityMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFFXFSR3QualityMode.InnerSingleton, Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFFXFSR3QualityMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFFXFSR3HistoryFormat;
	static UEnum* EFFXFSR3HistoryFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFFXFSR3HistoryFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFFXFSR3HistoryFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat, (UObject*)Z_Construct_UPackage__Script_FFXFSR3Settings(), TEXT("EFFXFSR3HistoryFormat"));
		}
		return Z_Registration_Info_UEnum_EFFXFSR3HistoryFormat.OuterSingleton;
	}
	template<> FFXFSR3SETTINGS_API UEnum* StaticEnum<EFFXFSR3HistoryFormat>()
	{
		return EFFXFSR3HistoryFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat_Statics::Enumerators[] = {
		{ "EFFXFSR3HistoryFormat::FloatRGBA", (int64)EFFXFSR3HistoryFormat::FloatRGBA },
		{ "EFFXFSR3HistoryFormat::FloatR11G11B10", (int64)EFFXFSR3HistoryFormat::FloatR11G11B10 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat_Statics::Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------------------\n// The support texture formats for the FSR3 history data.\n//-------------------------------------------------------------------------------------\n" },
#endif
		{ "FloatR11G11B10.DisplayName", "PF_FloatR11G11B10" },
		{ "FloatR11G11B10.Name", "EFFXFSR3HistoryFormat::FloatR11G11B10" },
		{ "FloatRGBA.DisplayName", "PF_FloatRGBA" },
		{ "FloatRGBA.Name", "EFFXFSR3HistoryFormat::FloatRGBA" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The support texture formats for the FSR3 history data." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FFXFSR3Settings,
		nullptr,
		"EFFXFSR3HistoryFormat",
		"EFFXFSR3HistoryFormat",
		Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat()
	{
		if (!Z_Registration_Info_UEnum_EFFXFSR3HistoryFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFFXFSR3HistoryFormat.InnerSingleton, Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFFXFSR3HistoryFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFFXFSR3DeDitherMode;
	static UEnum* EFFXFSR3DeDitherMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFFXFSR3DeDitherMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFFXFSR3DeDitherMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode, (UObject*)Z_Construct_UPackage__Script_FFXFSR3Settings(), TEXT("EFFXFSR3DeDitherMode"));
		}
		return Z_Registration_Info_UEnum_EFFXFSR3DeDitherMode.OuterSingleton;
	}
	template<> FFXFSR3SETTINGS_API UEnum* StaticEnum<EFFXFSR3DeDitherMode>()
	{
		return EFFXFSR3DeDitherMode_StaticEnum();
	}
	struct Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode_Statics::Enumerators[] = {
		{ "EFFXFSR3DeDitherMode::Off", (int64)EFFXFSR3DeDitherMode::Off },
		{ "EFFXFSR3DeDitherMode::Full", (int64)EFFXFSR3DeDitherMode::Full },
		{ "EFFXFSR3DeDitherMode::HairOnly", (int64)EFFXFSR3DeDitherMode::HairOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode_Statics::Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------------------\n// The support texture formats for the FSR3 history data.\n//-------------------------------------------------------------------------------------\n" },
#endif
		{ "Full.DisplayName", "Full" },
		{ "Full.Name", "EFFXFSR3DeDitherMode::Full" },
		{ "HairOnly.DisplayName", "Hair Only" },
		{ "HairOnly.Name", "EFFXFSR3DeDitherMode::HairOnly" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "EFFXFSR3DeDitherMode::Off" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The support texture formats for the FSR3 history data." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FFXFSR3Settings,
		nullptr,
		"EFFXFSR3DeDitherMode",
		"EFFXFSR3DeDitherMode",
		Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode()
	{
		if (!Z_Registration_Info_UEnum_EFFXFSR3DeDitherMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFFXFSR3DeDitherMode.InnerSingleton, Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFFXFSR3DeDitherMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFFXFSR3LandscapeHISMMode;
	static UEnum* EFFXFSR3LandscapeHISMMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFFXFSR3LandscapeHISMMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFFXFSR3LandscapeHISMMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode, (UObject*)Z_Construct_UPackage__Script_FFXFSR3Settings(), TEXT("EFFXFSR3LandscapeHISMMode"));
		}
		return Z_Registration_Info_UEnum_EFFXFSR3LandscapeHISMMode.OuterSingleton;
	}
	template<> FFXFSR3SETTINGS_API UEnum* StaticEnum<EFFXFSR3LandscapeHISMMode>()
	{
		return EFFXFSR3LandscapeHISMMode_StaticEnum();
	}
	struct Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode_Statics::Enumerators[] = {
		{ "EFFXFSR3LandscapeHISMMode::Off", (int64)EFFXFSR3LandscapeHISMMode::Off },
		{ "EFFXFSR3LandscapeHISMMode::AllStatic", (int64)EFFXFSR3LandscapeHISMMode::AllStatic },
		{ "EFFXFSR3LandscapeHISMMode::StaticWPO", (int64)EFFXFSR3LandscapeHISMMode::StaticWPO },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode_Statics::Enum_MetaDataParams[] = {
		{ "AllStatic.DisplayName", "All Instances" },
		{ "AllStatic.Name", "EFFXFSR3LandscapeHISMMode::AllStatic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------------------\n// The modes for forcing Landscape Hierachical Instance Static Model to not be Static.\n//-------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "EFFXFSR3LandscapeHISMMode::Off" },
		{ "StaticWPO.DisplayName", "Instances with World-Position-Offset" },
		{ "StaticWPO.Name", "EFFXFSR3LandscapeHISMMode::StaticWPO" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The modes for forcing Landscape Hierachical Instance Static Model to not be Static." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FFXFSR3Settings,
		nullptr,
		"EFFXFSR3LandscapeHISMMode",
		"EFFXFSR3LandscapeHISMMode",
		Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode()
	{
		if (!Z_Registration_Info_UEnum_EFFXFSR3LandscapeHISMMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFFXFSR3LandscapeHISMMode.InnerSingleton, Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFFXFSR3LandscapeHISMMode.InnerSingleton;
	}
	void UFFXFSR3Settings::StaticRegisterNativesUFFXFSR3Settings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFFXFSR3Settings);
	UClass* Z_Construct_UClass_UFFXFSR3Settings_NoRegister()
	{
		return UFFXFSR3Settings::StaticClass();
	}
	struct Z_Construct_UClass_UFFXFSR3Settings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoExposure_MetaData[];
#endif
		static void NewProp_bAutoExposure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoExposure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledInEditorViewport_MetaData[];
#endif
		static void NewProp_bEnabledInEditorViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledInEditorViewport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSSRExperimentalDenoiser_MetaData[];
#endif
		static void NewProp_bUseSSRExperimentalDenoiser_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSSRExperimentalDenoiser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRHIBackend_MetaData[];
#endif
		static void NewProp_bRHIBackend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRHIBackend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bD3D12Backend_MetaData[];
#endif
		static void NewProp_bD3D12Backend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bD3D12Backend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFrameGenEnabled_MetaData[];
#endif
		static void NewProp_bFrameGenEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFrameGenEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureDebugUI_MetaData[];
#endif
		static void NewProp_bCaptureDebugUI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureDebugUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateGlobalFrameTime_MetaData[];
#endif
		static void NewProp_bUpdateGlobalFrameTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateGlobalFrameTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bD3D12AsyncInterpolation_MetaData[];
#endif
		static void NewProp_bD3D12AsyncInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bD3D12AsyncInterpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bD3D12AsyncPresent_MetaData[];
#endif
		static void NewProp_bD3D12AsyncPresent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bD3D12AsyncPresent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_QualityMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QualityMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QualityMode;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HistoryFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HistoryFormat;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeDither_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeDither_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeDither;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sharpness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Sharpness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdjustMipBias_MetaData[];
#endif
		static void NewProp_bAdjustMipBias_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdjustMipBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceVertexDeformationOutputsVelocity_MetaData[];
#endif
		static void NewProp_bForceVertexDeformationOutputsVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceVertexDeformationOutputsVelocity;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ForceLandscapeHISMMobility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceLandscapeHISMMobility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ForceLandscapeHISMMobility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReactiveMask_MetaData[];
#endif
		static void NewProp_bReactiveMask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReactiveMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionLuminanceBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionLuminanceBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoughnessScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RoughnessScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoughnessBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RoughnessBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoughnessMaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RoughnessMaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReactiveMaskRoughnessForceMaxDistance_MetaData[];
#endif
		static void NewProp_bReactiveMaskRoughnessForceMaxDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReactiveMaskRoughnessForceMaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencyBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslucencyBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencyLuminanceBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslucencyLuminanceBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencyMaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslucencyMaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReactiveShadingModelID_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReactiveShadingModelID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceReactiveMaterialValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceReactiveMaterialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReactiveHistoryTranslucencyBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReactiveHistoryTranslucencyBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReactiveHistoryTranslucencyLumaBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReactiveHistoryTranslucencyLumaBias;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFFXFSR3Settings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FFXFSR3Settings,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------------------\n// Settings for FSR3 exposed through the Editor UI.\n//-------------------------------------------------------------------------------------\n" },
#endif
		{ "DisplayName", "FidelityFX Super Resolution 3.0" },
		{ "IncludePath", "FFXFSR3Settings.h" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings for FSR3 exposed through the Editor UI." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.Enabled" },
		{ "DisplayName", "Enabled" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
	};
#endif
	void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UFFXFSR3Settings*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabled_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAutoExposure_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.AutoExposure" },
		{ "DisplayName", "Auto Exposure" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable to use FSR3's own auto-exposure, otherwise the engine's auto-exposure value is used." },
#endif
	};
#endif
	void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAutoExposure_SetBit(void* Obj)
	{
		((UFFXFSR3Settings*)Obj)->bAutoExposure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAutoExposure = { "bAutoExposure", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAutoExposure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAutoExposure_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAutoExposure_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabledInEditorViewport_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.EnabledInEditorViewport" },
		{ "DisplayName", "Enabled in Editor Viewport" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled use FSR3 by default in the Editor viewports." },
#endif
	};
#endif
	void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabledInEditorViewport_SetBit(void* Obj)
	{
		((UFFXFSR3Settings*)Obj)->bEnabledInEditorViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabledInEditorViewport = { "bEnabledInEditorViewport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabledInEditorViewport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabledInEditorViewport_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabledInEditorViewport_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUseSSRExperimentalDenoiser_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.UseSSRExperimentalDenoiser" },
		{ "DisplayName", "Use SSR Experimental Denoiser" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to 1 to use r.SSR.ExperimentalDenoiser when FSR3 is enabled. This is required when r.FidelityFX.FSR3.CreateReactiveMask is enabled as the FSR3 plugin sets r.SSR.ExperimentalDenoiser to 1 in order to capture reflection data to generate the reactive mask." },
#endif
	};
#endif
	void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUseSSRExperimentalDenoiser_SetBit(void* Obj)
	{
		((UFFXFSR3Settings*)Obj)->bUseSSRExperimentalDenoiser = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUseSSRExperimentalDenoiser = { "bUseSSRExperimentalDenoiser", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUseSSRExperimentalDenoiser_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUseSSRExperimentalDenoiser_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUseSSRExperimentalDenoiser_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bRHIBackend_MetaData[] = {
		{ "Category", "Backend Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.UseRHI" },
		{ "DisplayName", "RHI Backend" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True to enable FSR3's default RHI backend, when false a native backend must be enabled." },
#endif
	};
#endif
	void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bRHIBackend_SetBit(void* Obj)
	{
		((UFFXFSR3Settings*)Obj)->bRHIBackend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bRHIBackend = { "bRHIBackend", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bRHIBackend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bRHIBackend_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bRHIBackend_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12Backend_MetaData[] = {
		{ "Category", "Backend Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.UseNativeDX12" },
		{ "DisplayName", "D3D12 Backend" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True to use FSR3's native & optimised D3D12 backend, when false the RHI backend must be enabled." },
#endif
	};
#endif
	void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12Backend_SetBit(void* Obj)
	{
		((UFFXFSR3Settings*)Obj)->bD3D12Backend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12Backend = { "bD3D12Backend", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12Backend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12Backend_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12Backend_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bFrameGenEnabled_MetaData[] = {
		{ "Category", "Frame Generation Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FI.Enabled" },
		{ "DisplayName", "Frame Generation Enabled" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
	};
#endif
	void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bFrameGenEnabled_SetBit(void* Obj)
	{
		((UFFXFSR3Settings*)Obj)->bFrameGenEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bFrameGenEnabled = { "bFrameGenEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bFrameGenEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bFrameGenEnabled_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bFrameGenEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bCaptureDebugUI_MetaData[] = {
		{ "Category", "Frame Generation Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FI.CaptureDebugUI" },
		{ "DisplayName", "Capture Debug UI" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force FidelityFX Frame Generation to detect and copy any debug UI which only renders on the first invocation of Slate's DrawWindow command." },
#endif
	};
#endif
	void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bCaptureDebugUI_SetBit(void* Obj)
	{
		((UFFXFSR3Settings*)Obj)->bCaptureDebugUI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bCaptureDebugUI = { "bCaptureDebugUI", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bCaptureDebugUI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bCaptureDebugUI_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bCaptureDebugUI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUpdateGlobalFrameTime_MetaData[] = {
		{ "Category", "Frame Generation Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FI.UpdateGlobalFrameTime" },
		{ "DisplayName", "Update Global Frame Time" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the GAverageMS and GAverageFPS engine globals with the frame time & FPS including frame generation." },
#endif
	};
#endif
	void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUpdateGlobalFrameTime_SetBit(void* Obj)
	{
		((UFFXFSR3Settings*)Obj)->bUpdateGlobalFrameTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUpdateGlobalFrameTime = { "bUpdateGlobalFrameTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUpdateGlobalFrameTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUpdateGlobalFrameTime_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUpdateGlobalFrameTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncInterpolation_MetaData[] = {
		{ "Category", "Frame Generation Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FI.AllowAsyncWorkloads" },
		{ "DisplayName", "D3D12 Async. Interpolation" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True to use async. execution of Frame Interpolation, false to run Frame Interpolation synchronously with the game." },
#endif
	};
#endif
	void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncInterpolation_SetBit(void* Obj)
	{
		((UFFXFSR3Settings*)Obj)->bD3D12AsyncInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncInterpolation = { "bD3D12AsyncInterpolation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncInterpolation_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncInterpolation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncPresent_MetaData[] = {
		{ "Category", "Frame Generation Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FI.OverrideSwapChainDX12" },
		{ "DisplayName", "D3D12 Async. Present" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True to use FSR3's D3D12 swap-chain override that improves frame pacing, false to use the fallback implementation based on Unreal's RHI." },
#endif
	};
#endif
	void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncPresent_SetBit(void* Obj)
	{
		((UFFXFSR3Settings*)Obj)->bD3D12AsyncPresent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncPresent = { "bD3D12AsyncPresent", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncPresent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncPresent_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncPresent_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_QualityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_QualityMode_MetaData[] = {
		{ "Category", "Quality Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.QualityMode" },
		{ "DisplayName", "Quality Mode" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selects the default quality mode to be used when upscaling with FSR3." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_QualityMode = { "QualityMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, QualityMode), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3QualityMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_QualityMode_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_QualityMode_MetaData) }; // 847310991
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_HistoryFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_HistoryFormat_MetaData[] = {
		{ "Category", "Quality Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.HistoryFormat" },
		{ "DisplayName", "History Format" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selects the bit-depth for the FSR3 history texture format, defaults to PF_FloatRGBA but can be set to PF_FloatR11G11B10 to reduce bandwidth at the expense of quality." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_HistoryFormat = { "HistoryFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, HistoryFormat), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3HistoryFormat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_HistoryFormat_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_HistoryFormat_MetaData) }; // 2195873380
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_DeDither_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_DeDither_MetaData[] = {
		{ "Category", "Quality Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.DeDither" },
		{ "DisplayName", "De-Dither Rendering" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable an extra pass to de-dither rendering before handing over to FSR3 to avoid over-thinning, defaults to Off but can be set to Full for all pixels or to Hair Only for just around Hair (requires Deffered Renderer)." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_DeDither = { "DeDither", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, DeDither), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3DeDitherMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_DeDither_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_DeDither_MetaData) }; // 3901575390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_Sharpness_MetaData[] = {
		{ "Category", "Quality Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.Sharpness" },
		{ "DisplayName", "Sharpness" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When greater than 0.0 this enables Robust Contrast Adaptive Sharpening Filter to sharpen the output image." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_Sharpness = { "Sharpness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, Sharpness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_Sharpness_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_Sharpness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAdjustMipBias_MetaData[] = {
		{ "Category", "Quality Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.AdjustMipBias" },
		{ "DisplayName", "Adjust Mip Bias & Offset" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies negative MipBias to material textures, improving results." },
#endif
	};
#endif
	void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAdjustMipBias_SetBit(void* Obj)
	{
		((UFFXFSR3Settings*)Obj)->bAdjustMipBias = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAdjustMipBias = { "bAdjustMipBias", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAdjustMipBias_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAdjustMipBias_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAdjustMipBias_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bForceVertexDeformationOutputsVelocity_MetaData[] = {
		{ "Category", "Quality Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ForceVertexDeformationOutputsVelocity" },
		{ "DisplayName", "Force Vertex Deformation To Output Velocity" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force enables materials with World Position Offset and/or World Displacement to output velocities during velocity pass even when the actor has not moved." },
#endif
	};
#endif
	void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bForceVertexDeformationOutputsVelocity_SetBit(void* Obj)
	{
		((UFFXFSR3Settings*)Obj)->bForceVertexDeformationOutputsVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bForceVertexDeformationOutputsVelocity = { "bForceVertexDeformationOutputsVelocity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bForceVertexDeformationOutputsVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bForceVertexDeformationOutputsVelocity_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bForceVertexDeformationOutputsVelocity_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ForceLandscapeHISMMobility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ForceLandscapeHISMMobility_MetaData[] = {
		{ "Category", "Quality Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ForceLandscapeHISMMobility" },
		{ "DisplayName", "Force Landscape HISM Mobility" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow FSR3 to force the mobility of Landscape actors Hierarchical Instance Static Mesh components that use World-Position-Offset materials so they render valid velocities.\nSetting 'All Instances' is faster on the CPU, 'Instances with World-Position-Offset' is faster on the GPU." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ForceLandscapeHISMMobility = { "ForceLandscapeHISMMobility", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ForceLandscapeHISMMobility), Z_Construct_UEnum_FFXFSR3Settings_EFFXFSR3LandscapeHISMMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ForceLandscapeHISMMobility_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ForceLandscapeHISMMobility_MetaData) }; // 3962350678
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMask_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.CreateReactiveMask" },
		{ "DisplayName", "Reactive Mask" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable to generate a mask from the SceneColor, GBuffer, SeparateTranslucency & ScreenspaceReflections that determines how reactive each pixel should be." },
#endif
	};
#endif
	void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMask_SetBit(void* Obj)
	{
		((UFFXFSR3Settings*)Obj)->bReactiveMask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMask = { "bReactiveMask", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMask_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReflectionScale_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskReflectionScale" },
		{ "DisplayName", "Reflection Scale" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scales the Unreal engine reflection contribution to the reactive mask, which can be used to control the amount of aliasing on reflective surfaces." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReflectionScale = { "ReflectionScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ReflectionScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReflectionScale_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReflectionScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReflectionLuminanceBias_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskReflectionLumaBias" },
		{ "DisplayName", "Reflection Luminance Bias" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Biases the reactive mask by the luminance of the reflection. Use to balance aliasing against ghosting on brightly lit reflective surfaces." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReflectionLuminanceBias = { "ReflectionLuminanceBias", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ReflectionLuminanceBias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReflectionLuminanceBias_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReflectionLuminanceBias_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessScale_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskRoughnessScale" },
		{ "DisplayName", "Roughness Scale" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scales the GBuffer roughness to provide a fallback value for the reactive mask when screenspace & planar reflections are disabled or don't affect a pixel." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessScale = { "RoughnessScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, RoughnessScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessScale_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessBias_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskRoughnessBias" },
		{ "DisplayName", "Roughness Bias" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Biases the reactive mask value when screenspace/planar reflections are weak with the GBuffer roughness to account for reflection environment captures." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessBias = { "RoughnessBias", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, RoughnessBias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessBias_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessBias_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessMaxDistance_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskRoughnessMaxDistance" },
		{ "DisplayName", "Roughness Max Distance" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum distance in world units for using material roughness to contribute to the reactive mask, the maximum of this value and View.FurthestReflectionCaptureDistance will be used." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessMaxDistance = { "RoughnessMaxDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, RoughnessMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessMaxDistance_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessMaxDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMaskRoughnessForceMaxDistance_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskRoughnessForceMaxDistance" },
		{ "DisplayName", "Force Roughness Max Distance" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable to force the maximum distance in world units for using material roughness to contribute to the reactive mask rather than using View.FurthestReflectionCaptureDistance." },
#endif
	};
#endif
	void Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMaskRoughnessForceMaxDistance_SetBit(void* Obj)
	{
		((UFFXFSR3Settings*)Obj)->bReactiveMaskRoughnessForceMaxDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMaskRoughnessForceMaxDistance = { "bReactiveMaskRoughnessForceMaxDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFFXFSR3Settings), &Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMaskRoughnessForceMaxDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMaskRoughnessForceMaxDistance_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMaskRoughnessForceMaxDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyBias_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskTranslucencyBias" },
		{ "DisplayName", "Translucency Bias" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scales how much contribution translucency makes to the reactive mask. Higher values will make translucent materials less reactive which can reduce smearing." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyBias = { "TranslucencyBias", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, TranslucencyBias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyBias_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyBias_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyLuminanceBias_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskTranslucencyLumaBias" },
		{ "DisplayName", "Translucency Luminance Bias" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Biases the translucency contribution to the reactive mask by the luminance of the transparency." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyLuminanceBias = { "TranslucencyLuminanceBias", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, TranslucencyLuminanceBias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyLuminanceBias_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyLuminanceBias_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyMaxDistance_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskTranslucencyMaxDistance" },
		{ "DisplayName", "Translucency Max Distance" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum distance in world units for using translucency to contribute to the reactive mask. This is another way to remove sky-boxes and other back-planes from the reactive mask, at the expense of nearer translucency not being reactive." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyMaxDistance = { "TranslucencyMaxDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, TranslucencyMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyMaxDistance_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyMaxDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveShadingModelID_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskReactiveShadingModelID" },
		{ "DisplayName", "Reactive Shading Model" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Treat the specified shading model as reactive, taking the CustomData0.x value as the reactive value to write into the mask. Default is MSM_NUM (Off)." },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveShadingModelID = { "ReactiveShadingModelID", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ReactiveShadingModelID), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveShadingModelID_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveShadingModelID_MetaData) }; // 3101967338
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ForceReactiveMaterialValue_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveMaskForceReactiveMaterialValue" },
		{ "DisplayName", "Force value for Reactive Shading Model" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force the reactive mask value for Reactive Shading Model materials, when > 0 this value can be used to override the value supplied in the Material Graph." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ForceReactiveMaterialValue = { "ForceReactiveMaterialValue", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ForceReactiveMaterialValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ForceReactiveMaterialValue_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ForceReactiveMaterialValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryTranslucencyBias_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveHistoryTranslucencyBias" },
		{ "DisplayName", "Translucency Bias" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scales how much contribution translucency makes to suppress history via the reactive mask. Higher values will make translucent materials less reactive which can reduce smearing." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryTranslucencyBias = { "ReactiveHistoryTranslucencyBias", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ReactiveHistoryTranslucencyBias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryTranslucencyBias_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryTranslucencyBias_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryTranslucencyLumaBias_MetaData[] = {
		{ "Category", "Reactive Mask Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "r.FidelityFX.FSR3.ReactiveHistoryTranslucencyLumaBias" },
		{ "DisplayName", "Translucency Luminance Bias" },
		{ "ModuleRelativePath", "Public/FFXFSR3Settings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Biases the translucency contribution to suppress history via the reactive mask by the luminance of the transparency." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryTranslucencyLumaBias = { "ReactiveHistoryTranslucencyLumaBias", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFFXFSR3Settings, ReactiveHistoryTranslucencyLumaBias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryTranslucencyLumaBias_MetaData), Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryTranslucencyLumaBias_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFFXFSR3Settings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAutoExposure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bEnabledInEditorViewport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUseSSRExperimentalDenoiser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bRHIBackend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12Backend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bFrameGenEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bCaptureDebugUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bUpdateGlobalFrameTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bD3D12AsyncPresent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_QualityMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_QualityMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_HistoryFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_HistoryFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_DeDither_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_DeDither,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_Sharpness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bAdjustMipBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bForceVertexDeformationOutputsVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ForceLandscapeHISMMobility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ForceLandscapeHISMMobility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReflectionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReflectionLuminanceBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_RoughnessMaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_bReactiveMaskRoughnessForceMaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyLuminanceBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_TranslucencyMaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveShadingModelID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ForceReactiveMaterialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryTranslucencyBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFFXFSR3Settings_Statics::NewProp_ReactiveHistoryTranslucencyLumaBias,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFFXFSR3Settings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFFXFSR3Settings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFFXFSR3Settings_Statics::ClassParams = {
		&UFFXFSR3Settings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFFXFSR3Settings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFFXFSR3Settings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFFXFSR3Settings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFFXFSR3Settings()
	{
		if (!Z_Registration_Info_UClass_UFFXFSR3Settings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFFXFSR3Settings.OuterSingleton, Z_Construct_UClass_UFFXFSR3Settings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFFXFSR3Settings.OuterSingleton;
	}
	template<> FFXFSR3SETTINGS_API UClass* StaticClass<UFFXFSR3Settings>()
	{
		return UFFXFSR3Settings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFFXFSR3Settings);
	UFFXFSR3Settings::~UFFXFSR3Settings() {}
	struct Z_CompiledInDeferFile_FID_Proj_Dirk_Plugins_amd_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proj_Dirk_Plugins_amd_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_Statics::EnumInfo[] = {
		{ EFFXFSR3QualityMode_StaticEnum, TEXT("EFFXFSR3QualityMode"), &Z_Registration_Info_UEnum_EFFXFSR3QualityMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 847310991U) },
		{ EFFXFSR3HistoryFormat_StaticEnum, TEXT("EFFXFSR3HistoryFormat"), &Z_Registration_Info_UEnum_EFFXFSR3HistoryFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2195873380U) },
		{ EFFXFSR3DeDitherMode_StaticEnum, TEXT("EFFXFSR3DeDitherMode"), &Z_Registration_Info_UEnum_EFFXFSR3DeDitherMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3901575390U) },
		{ EFFXFSR3LandscapeHISMMode_StaticEnum, TEXT("EFFXFSR3LandscapeHISMMode"), &Z_Registration_Info_UEnum_EFFXFSR3LandscapeHISMMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3962350678U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proj_Dirk_Plugins_amd_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFFXFSR3Settings, UFFXFSR3Settings::StaticClass, TEXT("UFFXFSR3Settings"), &Z_Registration_Info_UClass_UFFXFSR3Settings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFFXFSR3Settings), 894639794U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Proj_Dirk_Plugins_amd_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_2408942546(TEXT("/Script/FFXFSR3Settings"),
		Z_CompiledInDeferFile_FID_Proj_Dirk_Plugins_amd_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proj_Dirk_Plugins_amd_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Proj_Dirk_Plugins_amd_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Proj_Dirk_Plugins_amd_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
