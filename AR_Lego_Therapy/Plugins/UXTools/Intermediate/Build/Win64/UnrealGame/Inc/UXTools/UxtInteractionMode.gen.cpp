// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtInteractionMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtInteractionMode() {}
// Cross Module References
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtInteractionMode();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtGrabMode();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUxtInteractionMode;
	static UEnum* EUxtInteractionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUxtInteractionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUxtInteractionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtInteractionMode, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtInteractionMode"));
		}
		return Z_Registration_Info_UEnum_EUxtInteractionMode.OuterSingleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtInteractionMode>()
	{
		return EUxtInteractionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UXTools_EUxtInteractionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UXTools_EUxtInteractionMode_Statics::Enumerators[] = {
		{ "EUxtInteractionMode::None", (int64)EUxtInteractionMode::None },
		{ "EUxtInteractionMode::Near", (int64)EUxtInteractionMode::Near },
		{ "EUxtInteractionMode::Far", (int64)EUxtInteractionMode::Far },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UXTools_EUxtInteractionMode_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Interaction modes supported */" },
		{ "Far.Comment", "/** Interact with far targets (see IUxtFarTarget) */" },
		{ "Far.Name", "EUxtInteractionMode::Far" },
		{ "Far.ToolTip", "Interact with far targets (see IUxtFarTarget)" },
		{ "ModuleRelativePath", "Public/Interactions/UxtInteractionMode.h" },
		{ "Near.Comment", "/** Interact with poke and grab targets (see IUxtPokeTarget and IUxtGrabTarget) */" },
		{ "Near.Name", "EUxtInteractionMode::Near" },
		{ "Near.ToolTip", "Interact with poke and grab targets (see IUxtPokeTarget and IUxtGrabTarget)" },
		{ "None.Hidden", "" },
		{ "None.Name", "EUxtInteractionMode::None" },
		{ "ToolTip", "Interaction modes supported" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UXTools_EUxtInteractionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		"EUxtInteractionMode",
		"EUxtInteractionMode",
		Z_Construct_UEnum_UXTools_EUxtInteractionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtInteractionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UXTools_EUxtInteractionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtInteractionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UXTools_EUxtInteractionMode()
	{
		if (!Z_Registration_Info_UEnum_EUxtInteractionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUxtInteractionMode.InnerSingleton, Z_Construct_UEnum_UXTools_EUxtInteractionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUxtInteractionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUxtGrabMode;
	static UEnum* EUxtGrabMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUxtGrabMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUxtGrabMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtGrabMode, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtGrabMode"));
		}
		return Z_Registration_Info_UEnum_EUxtGrabMode.OuterSingleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtGrabMode>()
	{
		return EUxtGrabMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UXTools_EUxtGrabMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UXTools_EUxtGrabMode_Statics::Enumerators[] = {
		{ "EUxtGrabMode::None", (int64)EUxtGrabMode::None },
		{ "EUxtGrabMode::OneHanded", (int64)EUxtGrabMode::OneHanded },
		{ "EUxtGrabMode::TwoHanded", (int64)EUxtGrabMode::TwoHanded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UXTools_EUxtGrabMode_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Grab modes supported */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtInteractionMode.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EUxtGrabMode::None" },
		{ "OneHanded.Comment", "/** Grab objects with one hand */" },
		{ "OneHanded.Name", "EUxtGrabMode::OneHanded" },
		{ "OneHanded.ToolTip", "Grab objects with one hand" },
		{ "ToolTip", "Grab modes supported" },
		{ "TwoHanded.Comment", "/** Grab objects with two hands */" },
		{ "TwoHanded.Name", "EUxtGrabMode::TwoHanded" },
		{ "TwoHanded.ToolTip", "Grab objects with two hands" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UXTools_EUxtGrabMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		"EUxtGrabMode",
		"EUxtGrabMode",
		Z_Construct_UEnum_UXTools_EUxtGrabMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtGrabMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UXTools_EUxtGrabMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtGrabMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UXTools_EUxtGrabMode()
	{
		if (!Z_Registration_Info_UEnum_EUxtGrabMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUxtGrabMode.InnerSingleton, Z_Construct_UEnum_UXTools_EUxtGrabMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUxtGrabMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtInteractionMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtInteractionMode_h_Statics::EnumInfo[] = {
		{ EUxtInteractionMode_StaticEnum, TEXT("EUxtInteractionMode"), &Z_Registration_Info_UEnum_EUxtInteractionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2327025301U) },
		{ EUxtGrabMode_StaticEnum, TEXT("EUxtGrabMode"), &Z_Registration_Info_UEnum_EUxtGrabMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3292808494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtInteractionMode_h_2274808103(TEXT("/Script/UXTools"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtInteractionMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtInteractionMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
