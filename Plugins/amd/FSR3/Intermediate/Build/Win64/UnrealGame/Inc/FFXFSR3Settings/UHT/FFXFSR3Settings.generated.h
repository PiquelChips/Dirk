// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FFXFSR3Settings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FFXFSR3SETTINGS_FFXFSR3Settings_generated_h
#error "FFXFSR3Settings.generated.h already included, missing '#pragma once' in FFXFSR3Settings.h"
#endif
#define FFXFSR3SETTINGS_FFXFSR3Settings_generated_h

#define FID_FSR3_530_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_132_SPARSE_DATA
#define FID_FSR3_530_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_132_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FSR3_530_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_132_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FSR3_530_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_132_RPC_WRAPPERS
#define FID_FSR3_530_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_132_ACCESSORS
#define FID_FSR3_530_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_132_INCLASS \
private: \
	static void StaticRegisterNativesUFFXFSR3Settings(); \
	friend struct Z_Construct_UClass_UFFXFSR3Settings_Statics; \
public: \
	DECLARE_CLASS(UFFXFSR3Settings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/FFXFSR3Settings"), NO_API) \
	DECLARE_SERIALIZER(UFFXFSR3Settings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_FSR3_530_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_132_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFFXFSR3Settings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFFXFSR3Settings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFFXFSR3Settings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFFXFSR3Settings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFFXFSR3Settings(UFFXFSR3Settings&&); \
	NO_API UFFXFSR3Settings(const UFFXFSR3Settings&); \
public: \
	NO_API virtual ~UFFXFSR3Settings();


#define FID_FSR3_530_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_129_PROLOG
#define FID_FSR3_530_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_132_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FSR3_530_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_132_SPARSE_DATA \
	FID_FSR3_530_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_132_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FSR3_530_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_132_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FSR3_530_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_132_RPC_WRAPPERS \
	FID_FSR3_530_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_132_ACCESSORS \
	FID_FSR3_530_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_132_INCLASS \
	FID_FSR3_530_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h_132_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FFXFSR3SETTINGS_API UClass* StaticClass<class UFFXFSR3Settings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FSR3_530_FSR3_HostProject_Plugins_FSR3_Source_FFXFSR3Settings_Public_FFXFSR3Settings_h


#define FOREACH_ENUM_EFFXFSR3QUALITYMODE(op) \
	op(EFFXFSR3QualityMode::NativeAA) \
	op(EFFXFSR3QualityMode::Quality) \
	op(EFFXFSR3QualityMode::Balanced) \
	op(EFFXFSR3QualityMode::Performance) \
	op(EFFXFSR3QualityMode::UltraPerformance) 

enum class EFFXFSR3QualityMode : int32;
template<> struct TIsUEnumClass<EFFXFSR3QualityMode> { enum { Value = true }; };
template<> FFXFSR3SETTINGS_API UEnum* StaticEnum<EFFXFSR3QualityMode>();

#define FOREACH_ENUM_EFFXFSR3HISTORYFORMAT(op) \
	op(EFFXFSR3HistoryFormat::FloatRGBA) \
	op(EFFXFSR3HistoryFormat::FloatR11G11B10) 

enum class EFFXFSR3HistoryFormat : int32;
template<> struct TIsUEnumClass<EFFXFSR3HistoryFormat> { enum { Value = true }; };
template<> FFXFSR3SETTINGS_API UEnum* StaticEnum<EFFXFSR3HistoryFormat>();

#define FOREACH_ENUM_EFFXFSR3DEDITHERMODE(op) \
	op(EFFXFSR3DeDitherMode::Off) \
	op(EFFXFSR3DeDitherMode::Full) \
	op(EFFXFSR3DeDitherMode::HairOnly) 

enum class EFFXFSR3DeDitherMode : int32;
template<> struct TIsUEnumClass<EFFXFSR3DeDitherMode> { enum { Value = true }; };
template<> FFXFSR3SETTINGS_API UEnum* StaticEnum<EFFXFSR3DeDitherMode>();

#define FOREACH_ENUM_EFFXFSR3LANDSCAPEHISMMODE(op) \
	op(EFFXFSR3LandscapeHISMMode::Off) \
	op(EFFXFSR3LandscapeHISMMode::AllStatic) \
	op(EFFXFSR3LandscapeHISMMode::StaticWPO) 

enum class EFFXFSR3LandscapeHISMMode : int32;
template<> struct TIsUEnumClass<EFFXFSR3LandscapeHISMMode> { enum { Value = true }; };
template<> FFXFSR3SETTINGS_API UEnum* StaticEnum<EFFXFSR3LandscapeHISMMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
