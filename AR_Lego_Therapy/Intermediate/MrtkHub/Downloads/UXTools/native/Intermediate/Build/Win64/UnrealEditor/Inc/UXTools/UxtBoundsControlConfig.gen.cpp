// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtBoundsControlConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtBoundsControlConfig() {}
// Cross Module References
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtAffordancePlacement();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtAffordanceKind();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtAffordanceAction();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtAffordanceConfig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBoundsControlConfig_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBoundsControlConfig();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUxtAffordancePlacement;
	static UEnum* EUxtAffordancePlacement_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUxtAffordancePlacement.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUxtAffordancePlacement.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtAffordancePlacement, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtAffordancePlacement"));
		}
		return Z_Registration_Info_UEnum_EUxtAffordancePlacement.OuterSingleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtAffordancePlacement>()
	{
		return EUxtAffordancePlacement_StaticEnum();
	}
	struct Z_Construct_UEnum_UXTools_EUxtAffordancePlacement_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UXTools_EUxtAffordancePlacement_Statics::Enumerators[] = {
		{ "EUxtAffordancePlacement::Center", (int64)EUxtAffordancePlacement::Center },
		{ "EUxtAffordancePlacement::FaceFront", (int64)EUxtAffordancePlacement::FaceFront },
		{ "EUxtAffordancePlacement::FaceBack", (int64)EUxtAffordancePlacement::FaceBack },
		{ "EUxtAffordancePlacement::FaceRight", (int64)EUxtAffordancePlacement::FaceRight },
		{ "EUxtAffordancePlacement::FaceLeft", (int64)EUxtAffordancePlacement::FaceLeft },
		{ "EUxtAffordancePlacement::FaceTop", (int64)EUxtAffordancePlacement::FaceTop },
		{ "EUxtAffordancePlacement::FaceBottom", (int64)EUxtAffordancePlacement::FaceBottom },
		{ "EUxtAffordancePlacement::EdgeFrontRight", (int64)EUxtAffordancePlacement::EdgeFrontRight },
		{ "EUxtAffordancePlacement::EdgeFrontLeft", (int64)EUxtAffordancePlacement::EdgeFrontLeft },
		{ "EUxtAffordancePlacement::EdgeFrontTop", (int64)EUxtAffordancePlacement::EdgeFrontTop },
		{ "EUxtAffordancePlacement::EdgeFrontBottom", (int64)EUxtAffordancePlacement::EdgeFrontBottom },
		{ "EUxtAffordancePlacement::EdgeBackRight", (int64)EUxtAffordancePlacement::EdgeBackRight },
		{ "EUxtAffordancePlacement::EdgeBackLeft", (int64)EUxtAffordancePlacement::EdgeBackLeft },
		{ "EUxtAffordancePlacement::EdgeBackTop", (int64)EUxtAffordancePlacement::EdgeBackTop },
		{ "EUxtAffordancePlacement::EdgeBackBottom", (int64)EUxtAffordancePlacement::EdgeBackBottom },
		{ "EUxtAffordancePlacement::EdgeRightTop", (int64)EUxtAffordancePlacement::EdgeRightTop },
		{ "EUxtAffordancePlacement::EdgeRightBottom", (int64)EUxtAffordancePlacement::EdgeRightBottom },
		{ "EUxtAffordancePlacement::EdgeLeftTop", (int64)EUxtAffordancePlacement::EdgeLeftTop },
		{ "EUxtAffordancePlacement::EdgeLeftBottom", (int64)EUxtAffordancePlacement::EdgeLeftBottom },
		{ "EUxtAffordancePlacement::CornerFrontRightTop", (int64)EUxtAffordancePlacement::CornerFrontRightTop },
		{ "EUxtAffordancePlacement::CornerFrontRightBottom", (int64)EUxtAffordancePlacement::CornerFrontRightBottom },
		{ "EUxtAffordancePlacement::CornerFrontLeftTop", (int64)EUxtAffordancePlacement::CornerFrontLeftTop },
		{ "EUxtAffordancePlacement::CornerFrontLeftBottom", (int64)EUxtAffordancePlacement::CornerFrontLeftBottom },
		{ "EUxtAffordancePlacement::CornerBackRightTop", (int64)EUxtAffordancePlacement::CornerBackRightTop },
		{ "EUxtAffordancePlacement::CornerBackRightBottom", (int64)EUxtAffordancePlacement::CornerBackRightBottom },
		{ "EUxtAffordancePlacement::CornerBackLeftTop", (int64)EUxtAffordancePlacement::CornerBackLeftTop },
		{ "EUxtAffordancePlacement::CornerBackLeftBottom", (int64)EUxtAffordancePlacement::CornerBackLeftBottom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UXTools_EUxtAffordancePlacement_Statics::Enum_MetaDataParams[] = {
		{ "Center.Name", "EUxtAffordancePlacement::Center" },
		{ "Comment", "/** Supported placements for affordances. */" },
		{ "CornerBackLeftBottom.Name", "EUxtAffordancePlacement::CornerBackLeftBottom" },
		{ "CornerBackLeftTop.Name", "EUxtAffordancePlacement::CornerBackLeftTop" },
		{ "CornerBackRightBottom.Name", "EUxtAffordancePlacement::CornerBackRightBottom" },
		{ "CornerBackRightTop.Name", "EUxtAffordancePlacement::CornerBackRightTop" },
		{ "CornerFrontLeftBottom.Name", "EUxtAffordancePlacement::CornerFrontLeftBottom" },
		{ "CornerFrontLeftTop.Name", "EUxtAffordancePlacement::CornerFrontLeftTop" },
		{ "CornerFrontRightBottom.Name", "EUxtAffordancePlacement::CornerFrontRightBottom" },
		{ "CornerFrontRightTop.Name", "EUxtAffordancePlacement::CornerFrontRightTop" },
		{ "EdgeBackBottom.Name", "EUxtAffordancePlacement::EdgeBackBottom" },
		{ "EdgeBackLeft.Name", "EUxtAffordancePlacement::EdgeBackLeft" },
		{ "EdgeBackRight.Name", "EUxtAffordancePlacement::EdgeBackRight" },
		{ "EdgeBackTop.Name", "EUxtAffordancePlacement::EdgeBackTop" },
		{ "EdgeFrontBottom.Name", "EUxtAffordancePlacement::EdgeFrontBottom" },
		{ "EdgeFrontLeft.Name", "EUxtAffordancePlacement::EdgeFrontLeft" },
		{ "EdgeFrontRight.Name", "EUxtAffordancePlacement::EdgeFrontRight" },
		{ "EdgeFrontTop.Name", "EUxtAffordancePlacement::EdgeFrontTop" },
		{ "EdgeLeftBottom.Name", "EUxtAffordancePlacement::EdgeLeftBottom" },
		{ "EdgeLeftTop.Name", "EUxtAffordancePlacement::EdgeLeftTop" },
		{ "EdgeRightBottom.Name", "EUxtAffordancePlacement::EdgeRightBottom" },
		{ "EdgeRightTop.Name", "EUxtAffordancePlacement::EdgeRightTop" },
		{ "FaceBack.Name", "EUxtAffordancePlacement::FaceBack" },
		{ "FaceBottom.Name", "EUxtAffordancePlacement::FaceBottom" },
		{ "FaceFront.Name", "EUxtAffordancePlacement::FaceFront" },
		{ "FaceLeft.Name", "EUxtAffordancePlacement::FaceLeft" },
		{ "FaceRight.Name", "EUxtAffordancePlacement::FaceRight" },
		{ "FaceTop.Name", "EUxtAffordancePlacement::FaceTop" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
		{ "ToolTip", "Supported placements for affordances." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UXTools_EUxtAffordancePlacement_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		"EUxtAffordancePlacement",
		"EUxtAffordancePlacement",
		Z_Construct_UEnum_UXTools_EUxtAffordancePlacement_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtAffordancePlacement_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UXTools_EUxtAffordancePlacement_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtAffordancePlacement_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UXTools_EUxtAffordancePlacement()
	{
		if (!Z_Registration_Info_UEnum_EUxtAffordancePlacement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUxtAffordancePlacement.InnerSingleton, Z_Construct_UEnum_UXTools_EUxtAffordancePlacement_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUxtAffordancePlacement.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUxtAffordanceKind;
	static UEnum* EUxtAffordanceKind_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUxtAffordanceKind.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUxtAffordanceKind.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtAffordanceKind, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtAffordanceKind"));
		}
		return Z_Registration_Info_UEnum_EUxtAffordanceKind.OuterSingleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtAffordanceKind>()
	{
		return EUxtAffordanceKind_StaticEnum();
	}
	struct Z_Construct_UEnum_UXTools_EUxtAffordanceKind_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UXTools_EUxtAffordanceKind_Statics::Enumerators[] = {
		{ "EUxtAffordanceKind::Center", (int64)EUxtAffordanceKind::Center },
		{ "EUxtAffordanceKind::Face", (int64)EUxtAffordanceKind::Face },
		{ "EUxtAffordanceKind::Edge", (int64)EUxtAffordanceKind::Edge },
		{ "EUxtAffordanceKind::Corner", (int64)EUxtAffordanceKind::Corner },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UXTools_EUxtAffordanceKind_Statics::Enum_MetaDataParams[] = {
		{ "Center.Name", "EUxtAffordanceKind::Center" },
		{ "Comment", "/** Defines the kind of actor that should be spawned for an affordance. */" },
		{ "Corner.Name", "EUxtAffordanceKind::Corner" },
		{ "Edge.Name", "EUxtAffordanceKind::Edge" },
		{ "Face.Name", "EUxtAffordanceKind::Face" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
		{ "ToolTip", "Defines the kind of actor that should be spawned for an affordance." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UXTools_EUxtAffordanceKind_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		"EUxtAffordanceKind",
		"EUxtAffordanceKind",
		Z_Construct_UEnum_UXTools_EUxtAffordanceKind_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtAffordanceKind_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UXTools_EUxtAffordanceKind_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtAffordanceKind_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UXTools_EUxtAffordanceKind()
	{
		if (!Z_Registration_Info_UEnum_EUxtAffordanceKind.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUxtAffordanceKind.InnerSingleton, Z_Construct_UEnum_UXTools_EUxtAffordanceKind_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUxtAffordanceKind.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUxtAffordanceAction;
	static UEnum* EUxtAffordanceAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUxtAffordanceAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUxtAffordanceAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtAffordanceAction, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtAffordanceAction"));
		}
		return Z_Registration_Info_UEnum_EUxtAffordanceAction.OuterSingleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtAffordanceAction>()
	{
		return EUxtAffordanceAction_StaticEnum();
	}
	struct Z_Construct_UEnum_UXTools_EUxtAffordanceAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UXTools_EUxtAffordanceAction_Statics::Enumerators[] = {
		{ "EUxtAffordanceAction::Translate", (int64)EUxtAffordanceAction::Translate },
		{ "EUxtAffordanceAction::Scale", (int64)EUxtAffordanceAction::Scale },
		{ "EUxtAffordanceAction::Rotate", (int64)EUxtAffordanceAction::Rotate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UXTools_EUxtAffordanceAction_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines which effect moving an affordance has on the bounding box. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
		{ "Rotate.Comment", "/** Rotate the bounding box about its center point. */" },
		{ "Rotate.Name", "EUxtAffordanceAction::Rotate" },
		{ "Rotate.ToolTip", "Rotate the bounding box about its center point." },
		{ "Scale.Comment", "/** Scale the bounding box, moving both sides in opposite directions. */" },
		{ "Scale.Name", "EUxtAffordanceAction::Scale" },
		{ "Scale.ToolTip", "Scale the bounding box, moving both sides in opposite directions." },
		{ "ToolTip", "Defines which effect moving an affordance has on the bounding box." },
		{ "Translate.Comment", "/** Move both sides of the bounding box. */" },
		{ "Translate.Name", "EUxtAffordanceAction::Translate" },
		{ "Translate.ToolTip", "Move both sides of the bounding box." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UXTools_EUxtAffordanceAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		"EUxtAffordanceAction",
		"EUxtAffordanceAction",
		Z_Construct_UEnum_UXTools_EUxtAffordanceAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtAffordanceAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UXTools_EUxtAffordanceAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtAffordanceAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UXTools_EUxtAffordanceAction()
	{
		if (!Z_Registration_Info_UEnum_EUxtAffordanceAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUxtAffordanceAction.InnerSingleton, Z_Construct_UEnum_UXTools_EUxtAffordanceAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUxtAffordanceAction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UxtAffordanceConfig;
class UScriptStruct* FUxtAffordanceConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UxtAffordanceConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UxtAffordanceConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUxtAffordanceConfig, Z_Construct_UPackage__Script_UXTools(), TEXT("UxtAffordanceConfig"));
	}
	return Z_Registration_Info_UScriptStruct_UxtAffordanceConfig.OuterSingleton;
}
template<> UXTOOLS_API UScriptStruct* StaticStruct<FUxtAffordanceConfig>()
{
	return FUxtAffordanceConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Placement_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Placement_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Placement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Affordances are grabbable actors placed on the bounding box which enable interaction. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
		{ "ToolTip", "Affordances are grabbable actors placed on the bounding box which enable interaction." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUxtAffordanceConfig>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Placement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Placement_MetaData[] = {
		{ "Category", "Uxt Affordance Config" },
		{ "Comment", "/** Preset type of the affordance. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
		{ "ToolTip", "Preset type of the affordance." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Placement = { "Placement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtAffordanceConfig, Placement), Z_Construct_UEnum_UXTools_EUxtAffordancePlacement, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Placement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Placement_MetaData)) }; // 726942301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Uxt Affordance Config" },
		{ "Comment", "/** The Euler orientation of the affordance. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
		{ "ToolTip", "The Euler orientation of the affordance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtAffordanceConfig, Rotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Placement_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Placement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewProp_Rotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		&NewStructOps,
		"UxtAffordanceConfig",
		sizeof(FUxtAffordanceConfig),
		alignof(FUxtAffordanceConfig),
		Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUxtAffordanceConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_UxtAffordanceConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UxtAffordanceConfig.InnerSingleton, Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UxtAffordanceConfig.InnerSingleton;
	}
	void UUxtBoundsControlConfig::StaticRegisterNativesUUxtBoundsControlConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtBoundsControlConfig);
	UClass* Z_Construct_UClass_UUxtBoundsControlConfig_NoRegister()
	{
		return UUxtBoundsControlConfig::StaticClass();
	}
	struct Z_Construct_UClass_UUxtBoundsControlConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Affordances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Affordances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Affordances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSlate_MetaData[];
#endif
		static void NewProp_bIsSlate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSlate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUniformScaling_MetaData[];
#endif
		static void NewProp_bUniformScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUniformScaling;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtBoundsControlConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UXTools" },
		{ "Comment", "/** Data asset that stores the configuration of a bounds control. */" },
		{ "IncludePath", "Controls/UxtBoundsControlConfig.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
		{ "ToolTip", "Data asset that stores the configuration of a bounds control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_Affordances_Inner = { "Affordances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUxtAffordanceConfig, METADATA_PARAMS(nullptr, 0) }; // 1948308505
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_Affordances_MetaData[] = {
		{ "Category", "Uxt Bounds Control Config" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_Affordances = { "Affordances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlConfig, Affordances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_Affordances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_Affordances_MetaData)) }; // 1948308505
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_bIsSlate_MetaData[] = {
		{ "Category", "Uxt Bounds Control Config" },
		{ "Comment", "/** Whether this configuration is intended to be used for slate elements */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
		{ "ToolTip", "Whether this configuration is intended to be used for slate elements" },
	};
#endif
	void Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_bIsSlate_SetBit(void* Obj)
	{
		((UUxtBoundsControlConfig*)Obj)->bIsSlate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_bIsSlate = { "bIsSlate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtBoundsControlConfig), &Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_bIsSlate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_bIsSlate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_bIsSlate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_bUniformScaling_MetaData[] = {
		{ "Category", "Uxt Bounds Control Config" },
		{ "Comment", "/** Whether this configuration transforms the target uniformly or not */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlConfig.h" },
		{ "ToolTip", "Whether this configuration transforms the target uniformly or not" },
	};
#endif
	void Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_bUniformScaling_SetBit(void* Obj)
	{
		((UUxtBoundsControlConfig*)Obj)->bUniformScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_bUniformScaling = { "bUniformScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtBoundsControlConfig), &Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_bUniformScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_bUniformScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_bUniformScaling_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtBoundsControlConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_Affordances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_Affordances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_bIsSlate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlConfig_Statics::NewProp_bUniformScaling,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtBoundsControlConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtBoundsControlConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtBoundsControlConfig_Statics::ClassParams = {
		&UUxtBoundsControlConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtBoundsControlConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtBoundsControlConfig()
	{
		if (!Z_Registration_Info_UClass_UUxtBoundsControlConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtBoundsControlConfig.OuterSingleton, Z_Construct_UClass_UUxtBoundsControlConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtBoundsControlConfig.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtBoundsControlConfig>()
	{
		return UUxtBoundsControlConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtBoundsControlConfig);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlConfig_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlConfig_h_Statics::EnumInfo[] = {
		{ EUxtAffordancePlacement_StaticEnum, TEXT("EUxtAffordancePlacement"), &Z_Registration_Info_UEnum_EUxtAffordancePlacement, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 726942301U) },
		{ EUxtAffordanceKind_StaticEnum, TEXT("EUxtAffordanceKind"), &Z_Registration_Info_UEnum_EUxtAffordanceKind, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4029785293U) },
		{ EUxtAffordanceAction_StaticEnum, TEXT("EUxtAffordanceAction"), &Z_Registration_Info_UEnum_EUxtAffordanceAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2477480311U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlConfig_h_Statics::ScriptStructInfo[] = {
		{ FUxtAffordanceConfig::StaticStruct, Z_Construct_UScriptStruct_FUxtAffordanceConfig_Statics::NewStructOps, TEXT("UxtAffordanceConfig"), &Z_Registration_Info_UScriptStruct_UxtAffordanceConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUxtAffordanceConfig), 1948308505U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtBoundsControlConfig, UUxtBoundsControlConfig::StaticClass, TEXT("UUxtBoundsControlConfig"), &Z_Registration_Info_UClass_UUxtBoundsControlConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtBoundsControlConfig), 3645255388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlConfig_h_1639844223(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlConfig_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlConfig_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
