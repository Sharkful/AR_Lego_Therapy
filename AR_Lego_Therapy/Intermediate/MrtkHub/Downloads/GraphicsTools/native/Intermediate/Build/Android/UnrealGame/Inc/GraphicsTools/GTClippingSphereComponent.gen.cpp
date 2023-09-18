// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTClippingSphereComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTClippingSphereComponent() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTClippingSphereComponent_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTClippingSphereComponent();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTClippingPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
// End Cross Module References
	void UGTClippingSphereComponent::StaticRegisterNativesUGTClippingSphereComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTClippingSphereComponent);
	UClass* Z_Construct_UClass_UGTClippingSphereComponent_NoRegister()
	{
		return UGTClippingSphereComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTClippingSphereComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTClippingSphereComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTClippingPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTClippingSphereComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Sub class of a ClippingPrimitive that represents an analytic sphere used to pass state to materials for per pixel clipping. A sphere's\n * transformation is described by 4x4 matrix that represents the sphere's location, rotation, and scale. A sphere can be non-uniformally\n * scaled along the x, y, or z axis to become an ellipsoid. The sphere's dimension along the x, y, or z axis is determined by the magnitude\n * of the scale along each axis. A scale of one represents a unit sphere.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GTClippingSphereComponent.h" },
		{ "ModuleRelativePath", "Public/GTClippingSphereComponent.h" },
		{ "ToolTip", "Sub class of a ClippingPrimitive that represents an analytic sphere used to pass state to materials for per pixel clipping. A sphere's\ntransformation is described by 4x4 matrix that represents the sphere's location, rotation, and scale. A sphere can be non-uniformally\nscaled along the x, y, or z axis to become an ellipsoid. The sphere's dimension along the x, y, or z axis is determined by the magnitude\nof the scale along each axis. A scale of one represents a unit sphere." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTClippingSphereComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTClippingSphereComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTClippingSphereComponent_Statics::ClassParams = {
		&UGTClippingSphereComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTClippingSphereComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTClippingSphereComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTClippingSphereComponent()
	{
		if (!Z_Registration_Info_UClass_UGTClippingSphereComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTClippingSphereComponent.OuterSingleton, Z_Construct_UClass_UGTClippingSphereComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTClippingSphereComponent.OuterSingleton;
	}
	template<> GRAPHICSTOOLS_API UClass* StaticClass<UGTClippingSphereComponent>()
	{
		return UGTClippingSphereComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTClippingSphereComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingSphereComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingSphereComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTClippingSphereComponent, UGTClippingSphereComponent::StaticClass, TEXT("UGTClippingSphereComponent"), &Z_Registration_Info_UClass_UGTClippingSphereComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTClippingSphereComponent), 1617920202U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingSphereComponent_h_691233605(TEXT("/Script/GraphicsTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingSphereComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingSphereComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
