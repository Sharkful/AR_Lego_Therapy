// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtManipulationFlags.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtManipulationFlags() {}
// Cross Module References
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtTransformMode();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtAxisFlags();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtAxis();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtReleaseBehavior();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUxtOneHandRotationMode;
	static UEnum* EUxtOneHandRotationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUxtOneHandRotationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUxtOneHandRotationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtOneHandRotationMode"));
		}
		return Z_Registration_Info_UEnum_EUxtOneHandRotationMode.OuterSingleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtOneHandRotationMode>()
	{
		return EUxtOneHandRotationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode_Statics::Enumerators[] = {
		{ "EUxtOneHandRotationMode::RotateAboutObjectCenter", (int64)EUxtOneHandRotationMode::RotateAboutObjectCenter },
		{ "EUxtOneHandRotationMode::RotateAboutGrabPoint", (int64)EUxtOneHandRotationMode::RotateAboutGrabPoint },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Specifies how the object will rotate when it is being grabbed with one hand. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulationFlags.h" },
		{ "RotateAboutGrabPoint.Comment", "/** Only works for articulated hands/controllers. Rotate object as if it was being held by hand/controller. Useful for inspection. */" },
		{ "RotateAboutGrabPoint.Name", "EUxtOneHandRotationMode::RotateAboutGrabPoint" },
		{ "RotateAboutGrabPoint.ToolTip", "Only works for articulated hands/controllers. Rotate object as if it was being held by hand/controller. Useful for inspection." },
		{ "RotateAboutObjectCenter.Comment", "/** Only works for articulated hands/controllers. Rotate object using rotation of the hand/controller, but about the object center\n\x09   point. Useful for inspecting at a distance. */" },
		{ "RotateAboutObjectCenter.Name", "EUxtOneHandRotationMode::RotateAboutObjectCenter" },
		{ "RotateAboutObjectCenter.ToolTip", "Only works for articulated hands/controllers. Rotate object using rotation of the hand/controller, but about the object center\n         point. Useful for inspecting at a distance." },
		{ "ToolTip", "Specifies how the object will rotate when it is being grabbed with one hand." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		"EUxtOneHandRotationMode",
		"EUxtOneHandRotationMode",
		Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode()
	{
		if (!Z_Registration_Info_UEnum_EUxtOneHandRotationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUxtOneHandRotationMode.InnerSingleton, Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUxtOneHandRotationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUxtTransformMode;
	static UEnum* EUxtTransformMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUxtTransformMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUxtTransformMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtTransformMode, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtTransformMode"));
		}
		return Z_Registration_Info_UEnum_EUxtTransformMode.OuterSingleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtTransformMode>()
	{
		return EUxtTransformMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UXTools_EUxtTransformMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UXTools_EUxtTransformMode_Statics::Enumerators[] = {
		{ "EUxtTransformMode::None", (int64)EUxtTransformMode::None },
		{ "EUxtTransformMode::Translation", (int64)EUxtTransformMode::Translation },
		{ "EUxtTransformMode::Rotation", (int64)EUxtTransformMode::Rotation },
		{ "EUxtTransformMode::Scaling", (int64)EUxtTransformMode::Scaling },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UXTools_EUxtTransformMode_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Two-handed transformations supported by the generic manipulator. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulationFlags.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EUxtTransformMode::None" },
		{ "Rotation.Comment", "/** Rotation by the line between grab points. */" },
		{ "Rotation.Name", "EUxtTransformMode::Rotation" },
		{ "Rotation.ToolTip", "Rotation by the line between grab points." },
		{ "Scaling.Comment", "/** Scaling by distance between grab points. */" },
		{ "Scaling.Name", "EUxtTransformMode::Scaling" },
		{ "Scaling.ToolTip", "Scaling by distance between grab points." },
		{ "ToolTip", "Two-handed transformations supported by the generic manipulator." },
		{ "Translation.Comment", "/** Translation by average movement of grab points. */" },
		{ "Translation.Name", "EUxtTransformMode::Translation" },
		{ "Translation.ToolTip", "Translation by average movement of grab points." },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UXTools_EUxtTransformMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		"EUxtTransformMode",
		"EUxtTransformMode",
		Z_Construct_UEnum_UXTools_EUxtTransformMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtTransformMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UXTools_EUxtTransformMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtTransformMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UXTools_EUxtTransformMode()
	{
		if (!Z_Registration_Info_UEnum_EUxtTransformMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUxtTransformMode.InnerSingleton, Z_Construct_UEnum_UXTools_EUxtTransformMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUxtTransformMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUxtAxisFlags;
	static UEnum* EUxtAxisFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUxtAxisFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUxtAxisFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtAxisFlags, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtAxisFlags"));
		}
		return Z_Registration_Info_UEnum_EUxtAxisFlags.OuterSingleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtAxisFlags>()
	{
		return EUxtAxisFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_UXTools_EUxtAxisFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UXTools_EUxtAxisFlags_Statics::Enumerators[] = {
		{ "EUxtAxisFlags::None", (int64)EUxtAxisFlags::None },
		{ "EUxtAxisFlags::X", (int64)EUxtAxisFlags::X },
		{ "EUxtAxisFlags::Y", (int64)EUxtAxisFlags::Y },
		{ "EUxtAxisFlags::Z", (int64)EUxtAxisFlags::Z },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UXTools_EUxtAxisFlags_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "///** Flags used to represent a set of 3D axes. */\n" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulationFlags.h" },
		{ "None.Name", "EUxtAxisFlags::None" },
		{ "ToolTip", "Flags used to represent a set of 3D axes." },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "X.Name", "EUxtAxisFlags::X" },
		{ "Y.Name", "EUxtAxisFlags::Y" },
		{ "Z.Name", "EUxtAxisFlags::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UXTools_EUxtAxisFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		"EUxtAxisFlags",
		"EUxtAxisFlags",
		Z_Construct_UEnum_UXTools_EUxtAxisFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtAxisFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UXTools_EUxtAxisFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtAxisFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UXTools_EUxtAxisFlags()
	{
		if (!Z_Registration_Info_UEnum_EUxtAxisFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUxtAxisFlags.InnerSingleton, Z_Construct_UEnum_UXTools_EUxtAxisFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUxtAxisFlags.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUxtAxis;
	static UEnum* EUxtAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUxtAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUxtAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtAxis, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtAxis"));
		}
		return Z_Registration_Info_UEnum_EUxtAxis.OuterSingleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtAxis>()
	{
		return EUxtAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_UXTools_EUxtAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UXTools_EUxtAxis_Statics::Enumerators[] = {
		{ "EUxtAxis::None", (int64)EUxtAxis::None },
		{ "EUxtAxis::X", (int64)EUxtAxis::X },
		{ "EUxtAxis::Y", (int64)EUxtAxis::Y },
		{ "EUxtAxis::Z", (int64)EUxtAxis::Z },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UXTools_EUxtAxis_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Used to choose a single 3D axis. See @ref EUxtAxisFlags if you need a bit mask */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulationFlags.h" },
		{ "None.Name", "EUxtAxis::None" },
		{ "ToolTip", "Used to choose a single 3D axis. See @ref EUxtAxisFlags if you need a bit mask" },
		{ "X.Name", "EUxtAxis::X" },
		{ "Y.Name", "EUxtAxis::Y" },
		{ "Z.Name", "EUxtAxis::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UXTools_EUxtAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		"EUxtAxis",
		"EUxtAxis",
		Z_Construct_UEnum_UXTools_EUxtAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UXTools_EUxtAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UXTools_EUxtAxis()
	{
		if (!Z_Registration_Info_UEnum_EUxtAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUxtAxis.InnerSingleton, Z_Construct_UEnum_UXTools_EUxtAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUxtAxis.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUxtReleaseBehavior;
	static UEnum* EUxtReleaseBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUxtReleaseBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUxtReleaseBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtReleaseBehavior, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtReleaseBehavior"));
		}
		return Z_Registration_Info_UEnum_EUxtReleaseBehavior.OuterSingleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtReleaseBehavior>()
	{
		return EUxtReleaseBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_UXTools_EUxtReleaseBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UXTools_EUxtReleaseBehavior_Statics::Enumerators[] = {
		{ "EUxtReleaseBehavior::None", (int64)EUxtReleaseBehavior::None },
		{ "EUxtReleaseBehavior::KeepVelocity", (int64)EUxtReleaseBehavior::KeepVelocity },
		{ "EUxtReleaseBehavior::KeepAngularVelocity", (int64)EUxtReleaseBehavior::KeepAngularVelocity },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UXTools_EUxtReleaseBehavior_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "KeepAngularVelocity.Comment", "/** Keep the object's angular velocity on release. */" },
		{ "KeepAngularVelocity.Name", "EUxtReleaseBehavior::KeepAngularVelocity" },
		{ "KeepAngularVelocity.ToolTip", "Keep the object's angular velocity on release." },
		{ "KeepVelocity.Comment", "/** Keep the object's velocity on release. */" },
		{ "KeepVelocity.Name", "EUxtReleaseBehavior::KeepVelocity" },
		{ "KeepVelocity.ToolTip", "Keep the object's velocity on release." },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulationFlags.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EUxtReleaseBehavior::None" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UXTools_EUxtReleaseBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		"EUxtReleaseBehavior",
		"EUxtReleaseBehavior",
		Z_Construct_UEnum_UXTools_EUxtReleaseBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtReleaseBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UXTools_EUxtReleaseBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtReleaseBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UXTools_EUxtReleaseBehavior()
	{
		if (!Z_Registration_Info_UEnum_EUxtReleaseBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUxtReleaseBehavior.InnerSingleton, Z_Construct_UEnum_UXTools_EUxtReleaseBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUxtReleaseBehavior.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulationFlags_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulationFlags_h_Statics::EnumInfo[] = {
		{ EUxtOneHandRotationMode_StaticEnum, TEXT("EUxtOneHandRotationMode"), &Z_Registration_Info_UEnum_EUxtOneHandRotationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 433298231U) },
		{ EUxtTransformMode_StaticEnum, TEXT("EUxtTransformMode"), &Z_Registration_Info_UEnum_EUxtTransformMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3167739638U) },
		{ EUxtAxisFlags_StaticEnum, TEXT("EUxtAxisFlags"), &Z_Registration_Info_UEnum_EUxtAxisFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 451917700U) },
		{ EUxtAxis_StaticEnum, TEXT("EUxtAxis"), &Z_Registration_Info_UEnum_EUxtAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 143784765U) },
		{ EUxtReleaseBehavior_StaticEnum, TEXT("EUxtReleaseBehavior"), &Z_Registration_Info_UEnum_EUxtReleaseBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3806779488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulationFlags_h_50502220(TEXT("/Script/UXTools"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulationFlags_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulationFlags_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
