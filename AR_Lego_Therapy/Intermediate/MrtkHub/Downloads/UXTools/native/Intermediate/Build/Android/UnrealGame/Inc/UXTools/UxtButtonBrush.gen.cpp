// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtButtonBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtButtonBrush() {}
// Cross Module References
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtButtonVisualsBrush();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtButtonAudioBrush();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtButtonBrush();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UxtButtonVisualsBrush;
class UScriptStruct* FUxtButtonVisualsBrush::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UxtButtonVisualsBrush.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UxtButtonVisualsBrush.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush, Z_Construct_UPackage__Script_UXTools(), TEXT("UxtButtonVisualsBrush"));
	}
	return Z_Registration_Info_UScriptStruct_UxtButtonVisualsBrush.OuterSingleton;
}
template<> UXTOOLS_API UScriptStruct* StaticStruct<FUxtButtonVisualsBrush>()
{
	return FUxtButtonVisualsBrush::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackPlateMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackPlateMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackPlateMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackPlateMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontPlateMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontPlateMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontPlateMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontPlateMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontPlatePulseLeftMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontPlatePulseLeftMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontPlatePulseRightMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontPlatePulseRightMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PulseTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PulseTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PulseFadeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PulseFadeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconFocusSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IconFocusSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconFocusCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IconFocusCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TogglePlateMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TogglePlateMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure containing data representing button visual assets and properties.\n */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "Structure containing data representing button visual assets and properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUxtButtonVisualsBrush>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMaterial_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** The material used for the button back plate. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "The material used for the button back plate." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMaterial = { "BackPlateMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, BackPlateMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMesh_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** The mesh used for the button back plate. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "The mesh used for the button back plate." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMesh = { "BackPlateMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, BackPlateMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMaterial_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** The material used for the button front plate. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "The material used for the button front plate." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMaterial = { "FrontPlateMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, FrontPlateMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMesh_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** The mesh used for the button front plate. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "The mesh used for the button front plate." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMesh = { "FrontPlateMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, FrontPlateMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseLeftMaterial_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** Handle to the default left pulse materials to use for the button front plate. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "Handle to the default left pulse materials to use for the button front plate." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseLeftMaterial = { "FrontPlatePulseLeftMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, FrontPlatePulseLeftMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseLeftMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseLeftMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseRightMaterial_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** Handle to the default right pulse materials to use for the button front plate. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "Handle to the default right pulse materials to use for the button front plate." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseRightMaterial = { "FrontPlatePulseRightMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, FrontPlatePulseRightMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseRightMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseRightMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseTime_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** How long it takes the front plate pulse to animate in size in seconds. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "How long it takes the front plate pulse to animate in size in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseTime = { "PulseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, PulseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseFadeTime_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** How long it takes the front plate pulse to fade out in seconds. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "How long it takes the front plate pulse to fade out in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseFadeTime = { "PulseFadeTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, PulseFadeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseFadeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseFadeTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusSpeed_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** When a button is focused, how quickly the icon animates to the focused location. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "When a button is focused, how quickly the icon animates to the focused location." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusSpeed = { "IconFocusSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, IconFocusSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusCurve_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** Curve which describes the motion of the focus animation. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "Curve which describes the motion of the focus animation." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusCurve = { "IconFocusCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, IconFocusCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_TogglePlateMaterial_MetaData[] = {
		{ "Category", "Uxt Button Visuals Brush" },
		{ "Comment", "/** The material used for the button toggle plate. Note, all buttons may not have a toggle plate. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "The material used for the button toggle plate. Note, all buttons may not have a toggle plate." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_TogglePlateMaterial = { "TogglePlateMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonVisualsBrush, TogglePlateMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_TogglePlateMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_TogglePlateMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_BackPlateMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlateMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseLeftMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_FrontPlatePulseRightMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_PulseFadeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_IconFocusCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewProp_TogglePlateMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		&NewStructOps,
		"UxtButtonVisualsBrush",
		sizeof(FUxtButtonVisualsBrush),
		alignof(FUxtButtonVisualsBrush),
		Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUxtButtonVisualsBrush()
	{
		if (!Z_Registration_Info_UScriptStruct_UxtButtonVisualsBrush.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UxtButtonVisualsBrush.InnerSingleton, Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UxtButtonVisualsBrush.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UxtButtonAudioBrush;
class UScriptStruct* FUxtButtonAudioBrush::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UxtButtonAudioBrush.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UxtButtonAudioBrush.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUxtButtonAudioBrush, Z_Construct_UPackage__Script_UXTools(), TEXT("UxtButtonAudioBrush"));
	}
	return Z_Registration_Info_UScriptStruct_UxtButtonAudioBrush.OuterSingleton;
}
template<> UXTOOLS_API UScriptStruct* StaticStruct<FUxtButtonAudioBrush>()
{
	return FUxtButtonAudioBrush::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PressedSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReleasedSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReleasedSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure containing data representing button audio assets and properties.\n */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "Structure containing data representing button audio assets and properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUxtButtonAudioBrush>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_PressedSound_MetaData[] = {
		{ "Category", "Uxt Button Audio Brush" },
		{ "Comment", "/** The sound which plays when a button is pressed. This sound is spatialized. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "The sound which plays when a button is pressed. This sound is spatialized." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_PressedSound = { "PressedSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonAudioBrush, PressedSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_PressedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_PressedSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_ReleasedSound_MetaData[] = {
		{ "Category", "Uxt Button Audio Brush" },
		{ "Comment", "/** The sound which plays when a button is released. This sound is spatialized. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "The sound which plays when a button is released. This sound is spatialized." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_ReleasedSound = { "ReleasedSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonAudioBrush, ReleasedSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_ReleasedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_ReleasedSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_PressedSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewProp_ReleasedSound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		&NewStructOps,
		"UxtButtonAudioBrush",
		sizeof(FUxtButtonAudioBrush),
		alignof(FUxtButtonAudioBrush),
		Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUxtButtonAudioBrush()
	{
		if (!Z_Registration_Info_UScriptStruct_UxtButtonAudioBrush.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UxtButtonAudioBrush.InnerSingleton, Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UxtButtonAudioBrush.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UxtButtonBrush;
class UScriptStruct* FUxtButtonBrush::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UxtButtonBrush.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UxtButtonBrush.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUxtButtonBrush, Z_Construct_UPackage__Script_UXTools(), TEXT("UxtButtonBrush"));
	}
	return Z_Registration_Info_UScriptStruct_UxtButtonBrush.OuterSingleton;
}
template<> UXTOOLS_API UScriptStruct* StaticStruct<FUxtButtonBrush>()
{
	return FUxtButtonBrush::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUxtButtonBrush_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Visuals_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Visuals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Audio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure containing data representing categorized button assets and properties.\n */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "Structure containing data representing categorized button assets and properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUxtButtonBrush>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Visuals_MetaData[] = {
		{ "Category", "Uxt Button Brush" },
		{ "Comment", "/** Structure for button visuals. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "Structure for button visuals." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Visuals = { "Visuals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonBrush, Visuals), Z_Construct_UScriptStruct_FUxtButtonVisualsBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Visuals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Visuals_MetaData)) }; // 7217372
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Audio_MetaData[] = {
		{ "Category", "Uxt Button Brush" },
		{ "Comment", "/** Structure for button audio. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtButtonBrush.h" },
		{ "ToolTip", "Structure for button audio." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtButtonBrush, Audio), Z_Construct_UScriptStruct_FUxtButtonAudioBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Audio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Audio_MetaData)) }; // 1371845203
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Visuals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewProp_Audio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		&NewStructOps,
		"UxtButtonBrush",
		sizeof(FUxtButtonBrush),
		alignof(FUxtButtonBrush),
		Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUxtButtonBrush()
	{
		if (!Z_Registration_Info_UScriptStruct_UxtButtonBrush.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UxtButtonBrush.InnerSingleton, Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UxtButtonBrush.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtButtonBrush_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtButtonBrush_h_Statics::ScriptStructInfo[] = {
		{ FUxtButtonVisualsBrush::StaticStruct, Z_Construct_UScriptStruct_FUxtButtonVisualsBrush_Statics::NewStructOps, TEXT("UxtButtonVisualsBrush"), &Z_Registration_Info_UScriptStruct_UxtButtonVisualsBrush, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUxtButtonVisualsBrush), 7217372U) },
		{ FUxtButtonAudioBrush::StaticStruct, Z_Construct_UScriptStruct_FUxtButtonAudioBrush_Statics::NewStructOps, TEXT("UxtButtonAudioBrush"), &Z_Registration_Info_UScriptStruct_UxtButtonAudioBrush, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUxtButtonAudioBrush), 1371845203U) },
		{ FUxtButtonBrush::StaticStruct, Z_Construct_UScriptStruct_FUxtButtonBrush_Statics::NewStructOps, TEXT("UxtButtonBrush"), &Z_Registration_Info_UScriptStruct_UxtButtonBrush, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUxtButtonBrush), 180800793U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtButtonBrush_h_716306423(TEXT("/Script/UXTools"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtButtonBrush_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtButtonBrush_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
