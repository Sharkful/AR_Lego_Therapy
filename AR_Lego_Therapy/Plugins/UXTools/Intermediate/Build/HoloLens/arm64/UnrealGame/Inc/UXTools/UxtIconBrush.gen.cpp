// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtIconBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtIconBrush() {}
// Cross Module References
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtIconBrushContentType();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtIconBrush();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtTextBrush();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUxtIconBrushContentType;
	static UEnum* EUxtIconBrushContentType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUxtIconBrushContentType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUxtIconBrushContentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtIconBrushContentType, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtIconBrushContentType"));
		}
		return Z_Registration_Info_UEnum_EUxtIconBrushContentType.OuterSingleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtIconBrushContentType>()
	{
		return EUxtIconBrushContentType_StaticEnum();
	}
	struct Z_Construct_UEnum_UXTools_EUxtIconBrushContentType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UXTools_EUxtIconBrushContentType_Statics::Enumerators[] = {
		{ "EUxtIconBrushContentType::None", (int64)EUxtIconBrushContentType::None },
		{ "EUxtIconBrushContentType::UnicodeCharacter", (int64)EUxtIconBrushContentType::UnicodeCharacter },
		{ "EUxtIconBrushContentType::String", (int64)EUxtIconBrushContentType::String },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UXTools_EUxtIconBrushContentType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtIconBrush.h" },
		{ "None.Comment", "/** The icon brush has no content. */" },
		{ "None.Name", "EUxtIconBrushContentType::None" },
		{ "None.ToolTip", "The icon brush has no content." },
		{ "String.Comment", "/** The icon brush content represents a string. */" },
		{ "String.Name", "EUxtIconBrushContentType::String" },
		{ "String.ToolTip", "The icon brush content represents a string." },
		{ "UnicodeCharacter.Comment", "/** The icon brush content represents a Unicode character. */" },
		{ "UnicodeCharacter.Name", "EUxtIconBrushContentType::UnicodeCharacter" },
		{ "UnicodeCharacter.ToolTip", "The icon brush content represents a Unicode character." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UXTools_EUxtIconBrushContentType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		"EUxtIconBrushContentType",
		"EUxtIconBrushContentType",
		Z_Construct_UEnum_UXTools_EUxtIconBrushContentType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtIconBrushContentType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UXTools_EUxtIconBrushContentType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtIconBrushContentType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UXTools_EUxtIconBrushContentType()
	{
		if (!Z_Registration_Info_UEnum_EUxtIconBrushContentType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUxtIconBrushContentType.InnerSingleton, Z_Construct_UEnum_UXTools_EUxtIconBrushContentType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUxtIconBrushContentType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UxtIconBrush;
class UScriptStruct* FUxtIconBrush::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UxtIconBrush.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UxtIconBrush.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUxtIconBrush, Z_Construct_UPackage__Script_UXTools(), TEXT("UxtIconBrush"));
	}
	return Z_Registration_Info_UScriptStruct_UxtIconBrush.OuterSingleton;
}
template<> UXTOOLS_API UScriptStruct* StaticStruct<FUxtIconBrush>()
{
	return FUxtIconBrush::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUxtIconBrush_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Icon;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtIconBrush_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure which contains data representing an icon's appearance. Icons are currently represented as\n * Unicode characters or strings, but in the future could be textures, models, etc.\n */" },
		{ "ModuleRelativePath", "Public/Controls/UxtIconBrush.h" },
		{ "ToolTip", "Structure which contains data representing an icon's appearance. Icons are currently represented as\nUnicode characters or strings, but in the future could be textures, models, etc." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUxtIconBrush>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Uxt Icon Brush" },
		{ "Comment", "/** String of characters representing a Unicode symbol, or a literal string. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtIconBrush.h" },
		{ "ToolTip", "String of characters representing a Unicode symbol, or a literal string." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtIconBrush, Icon), METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_Icon_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_ContentType_MetaData[] = {
		{ "Category", "Uxt Icon Brush" },
		{ "Comment", "/** Describes what the icon brush content represents. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtIconBrush.h" },
		{ "ToolTip", "Describes what the icon brush content represents." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtIconBrush, ContentType), Z_Construct_UEnum_UXTools_EUxtIconBrushContentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_ContentType_MetaData)) }; // 1719735337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_TextBrush_MetaData[] = {
		{ "Category", "Uxt Icon Brush" },
		{ "Comment", "/** Text settings for the icon. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtIconBrush.h" },
		{ "ToolTip", "Text settings for the icon." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_TextBrush = { "TextBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtIconBrush, TextBrush), Z_Construct_UScriptStruct_FUxtTextBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_TextBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_TextBrush_MetaData)) }; // 1528351884
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUxtIconBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_ContentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_TextBrush,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUxtIconBrush_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		&NewStructOps,
		"UxtIconBrush",
		sizeof(FUxtIconBrush),
		alignof(FUxtIconBrush),
		Z_Construct_UScriptStruct_FUxtIconBrush_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtIconBrush_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtIconBrush_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtIconBrush_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUxtIconBrush()
	{
		if (!Z_Registration_Info_UScriptStruct_UxtIconBrush.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UxtIconBrush.InnerSingleton, Z_Construct_UScriptStruct_FUxtIconBrush_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UxtIconBrush.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtIconBrush_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtIconBrush_h_Statics::EnumInfo[] = {
		{ EUxtIconBrushContentType_StaticEnum, TEXT("EUxtIconBrushContentType"), &Z_Registration_Info_UEnum_EUxtIconBrushContentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1719735337U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtIconBrush_h_Statics::ScriptStructInfo[] = {
		{ FUxtIconBrush::StaticStruct, Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewStructOps, TEXT("UxtIconBrush"), &Z_Registration_Info_UScriptStruct_UxtIconBrush, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUxtIconBrush), 3641190900U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtIconBrush_h_3052930327(TEXT("/Script/UXTools"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtIconBrush_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtIconBrush_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtIconBrush_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtIconBrush_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
