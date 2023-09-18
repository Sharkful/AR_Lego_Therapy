// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtTextBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtTextBrush() {}
// Cross Module References
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtTextBrush();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UxtTextBrush;
class UScriptStruct* FUxtTextBrush::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UxtTextBrush.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UxtTextBrush.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUxtTextBrush, Z_Construct_UPackage__Script_UXTools(), TEXT("UxtTextBrush"));
	}
	return Z_Registration_Info_UScriptStruct_UxtTextBrush.OuterSingleton;
}
template<> UXTOOLS_API UScriptStruct* StaticStruct<FUxtTextBrush>()
{
	return FUxtTextBrush::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUxtTextBrush_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtTextBrush_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure which contains data representing the appearance of text.\n */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTextBrush.h" },
		{ "ToolTip", "Structure which contains data representing the appearance of text." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUxtTextBrush>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Uxt Text Brush" },
		{ "Comment", "/** The font used by the text. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTextBrush.h" },
		{ "ToolTip", "The font used by the text." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtTextBrush, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Uxt Text Brush" },
		{ "Comment", "/** The material used by the text. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTextBrush.h" },
		{ "ToolTip", "The material used by the text." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtTextBrush, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_RelativeLocation_MetaData[] = {
		{ "Category", "Uxt Text Brush" },
		{ "Comment", "/** The text's location compared to it's parent component. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTextBrush.h" },
		{ "ToolTip", "The text's location compared to it's parent component." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtTextBrush, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_RelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_RelativeLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_RelativeRotation_MetaData[] = {
		{ "Category", "Uxt Text Brush" },
		{ "Comment", "/** The text's rotation compared to it's parent component. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTextBrush.h" },
		{ "ToolTip", "The text's rotation compared to it's parent component." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtTextBrush, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_RelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_RelativeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Uxt Text Brush" },
		{ "Comment", "/** The size of the text, normally the font size. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTextBrush.h" },
		{ "ToolTip", "The size of the text, normally the font size." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtTextBrush, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_DefaultColor_MetaData[] = {
		{ "Category", "Uxt Text Brush" },
		{ "Comment", "/** The default color of the brush, by default the text color. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTextBrush.h" },
		{ "ToolTip", "The default color of the brush, by default the text color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_DefaultColor = { "DefaultColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtTextBrush, DefaultColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_DefaultColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_DefaultColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_DisabledColor_MetaData[] = {
		{ "Category", "Uxt Text Brush" },
		{ "Comment", "/** The disabled color of the brush, by default the text color. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTextBrush.h" },
		{ "ToolTip", "The disabled color of the brush, by default the text color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_DisabledColor = { "DisabledColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtTextBrush, DisabledColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_DisabledColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_DisabledColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUxtTextBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_RelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_RelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_DefaultColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewProp_DisabledColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUxtTextBrush_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		&NewStructOps,
		"UxtTextBrush",
		sizeof(FUxtTextBrush),
		alignof(FUxtTextBrush),
		Z_Construct_UScriptStruct_FUxtTextBrush_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtTextBrush_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtTextBrush_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtTextBrush_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUxtTextBrush()
	{
		if (!Z_Registration_Info_UScriptStruct_UxtTextBrush.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UxtTextBrush.InnerSingleton, Z_Construct_UScriptStruct_FUxtTextBrush_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UxtTextBrush.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTextBrush_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTextBrush_h_Statics::ScriptStructInfo[] = {
		{ FUxtTextBrush::StaticStruct, Z_Construct_UScriptStruct_FUxtTextBrush_Statics::NewStructOps, TEXT("UxtTextBrush"), &Z_Registration_Info_UScriptStruct_UxtTextBrush, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUxtTextBrush), 1528351884U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTextBrush_h_2846193335(TEXT("/Script/UXTools"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTextBrush_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTextBrush_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
