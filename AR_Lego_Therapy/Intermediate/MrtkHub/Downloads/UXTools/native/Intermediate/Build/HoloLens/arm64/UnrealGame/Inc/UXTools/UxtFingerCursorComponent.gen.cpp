// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtFingerCursorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtFingerCursorComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFingerCursorComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFingerCursorComponent();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtRingCursorComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	void UUxtFingerCursorComponent::StaticRegisterNativesUUxtFingerCursorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtFingerCursorComponent);
	UClass* Z_Construct_UClass_UUxtFingerCursorComponent_NoRegister()
	{
		return UUxtFingerCursorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtFingerCursorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CursorScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CursorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOnGrabTargets_MetaData[];
#endif
		static void NewProp_bShowOnGrabTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOnGrabTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignWithSurfaceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlignWithSurfaceDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FingerMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FingerMaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtFingerCursorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtRingCursorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFingerCursorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * When added to an actor with a near pointer, this component displays a ring cursor oriented towards the current poke target and\n * scaled according to the distance.\n */" },
		{ "HideCategories", "StaticMesh Materials Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Controls/UxtFingerCursorComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtFingerCursorComponent.h" },
		{ "ToolTip", "When added to an actor with a near pointer, this component displays a ring cursor oriented towards the current poke target and\nscaled according to the distance." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_CursorScale_MetaData[] = {
		{ "Category", "Uxt Finger Cursor" },
		{ "Comment", "/** Cursor scale. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtFingerCursorComponent.h" },
		{ "ToolTip", "Cursor scale." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_CursorScale = { "CursorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFingerCursorComponent, CursorScale), METADATA_PARAMS(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_CursorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_CursorScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_bShowOnGrabTargets_MetaData[] = {
		{ "Category", "Uxt Finger Cursor" },
		{ "Comment", "/** Show the finger cursor on grab targets. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtFingerCursorComponent.h" },
		{ "ToolTip", "Show the finger cursor on grab targets." },
	};
#endif
	void Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_bShowOnGrabTargets_SetBit(void* Obj)
	{
		((UUxtFingerCursorComponent*)Obj)->bShowOnGrabTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_bShowOnGrabTargets = { "bShowOnGrabTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtFingerCursorComponent), &Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_bShowOnGrabTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_bShowOnGrabTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_bShowOnGrabTargets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_AlignWithSurfaceDistance_MetaData[] = {
		{ "Category", "Uxt Finger Cursor" },
		{ "Comment", "/** Distance at which the cursor starts to align with pokable surfaces. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtFingerCursorComponent.h" },
		{ "ToolTip", "Distance at which the cursor starts to align with pokable surfaces." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_AlignWithSurfaceDistance = { "AlignWithSurfaceDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFingerCursorComponent, AlignWithSurfaceDistance), METADATA_PARAMS(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_AlignWithSurfaceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_AlignWithSurfaceDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_FingerMaterialInstance_MetaData[] = {
		{ "Comment", "/** Dynamic instance of the material. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtFingerCursorComponent.h" },
		{ "ToolTip", "Dynamic instance of the material." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_FingerMaterialInstance = { "FingerMaterialInstance", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFingerCursorComponent, FingerMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_FingerMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_FingerMaterialInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtFingerCursorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_CursorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_bShowOnGrabTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_AlignWithSurfaceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_FingerMaterialInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtFingerCursorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtFingerCursorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtFingerCursorComponent_Statics::ClassParams = {
		&UUxtFingerCursorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtFingerCursorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtFingerCursorComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtFingerCursorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtFingerCursorComponent.OuterSingleton, Z_Construct_UClass_UUxtFingerCursorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtFingerCursorComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtFingerCursorComponent>()
	{
		return UUxtFingerCursorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtFingerCursorComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtFingerCursorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtFingerCursorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtFingerCursorComponent, UUxtFingerCursorComponent::StaticClass, TEXT("UUxtFingerCursorComponent"), &Z_Registration_Info_UClass_UUxtFingerCursorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtFingerCursorComponent), 3477674192U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtFingerCursorComponent_h_1656379928(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtFingerCursorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtFingerCursorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
