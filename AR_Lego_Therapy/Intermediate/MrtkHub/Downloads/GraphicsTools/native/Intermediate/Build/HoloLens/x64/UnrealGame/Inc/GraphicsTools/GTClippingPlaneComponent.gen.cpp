// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTClippingPlaneComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTClippingPlaneComponent() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTClippingPlaneComponent_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTClippingPlaneComponent();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTClippingPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
// End Cross Module References
	void UGTClippingPlaneComponent::StaticRegisterNativesUGTClippingPlaneComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTClippingPlaneComponent);
	UClass* Z_Construct_UClass_UGTClippingPlaneComponent_NoRegister()
	{
		return UGTClippingPlaneComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTClippingPlaneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTClippingPlaneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTClippingPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTClippingPlaneComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Sub class of a ClippingPrimitive that represents an analytic plane used to pass state to materials for per pixel clipping. A plane's\n * transformation is described by a normal and distance from the origin along that normal. The normal is the x-axis of the component. The\n * distance is calculated based on the component's world location.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GTClippingPlaneComponent.h" },
		{ "ModuleRelativePath", "Public/GTClippingPlaneComponent.h" },
		{ "ToolTip", "Sub class of a ClippingPrimitive that represents an analytic plane used to pass state to materials for per pixel clipping. A plane's\ntransformation is described by a normal and distance from the origin along that normal. The normal is the x-axis of the component. The\ndistance is calculated based on the component's world location." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTClippingPlaneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTClippingPlaneComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTClippingPlaneComponent_Statics::ClassParams = {
		&UGTClippingPlaneComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGTClippingPlaneComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTClippingPlaneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTClippingPlaneComponent()
	{
		if (!Z_Registration_Info_UClass_UGTClippingPlaneComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTClippingPlaneComponent.OuterSingleton, Z_Construct_UClass_UGTClippingPlaneComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTClippingPlaneComponent.OuterSingleton;
	}
	template<> GRAPHICSTOOLS_API UClass* StaticClass<UGTClippingPlaneComponent>()
	{
		return UGTClippingPlaneComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTClippingPlaneComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingPlaneComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingPlaneComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTClippingPlaneComponent, UGTClippingPlaneComponent::StaticClass, TEXT("UGTClippingPlaneComponent"), &Z_Registration_Info_UClass_UGTClippingPlaneComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTClippingPlaneComponent), 2351023144U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingPlaneComponent_h_1156456177(TEXT("/Script/GraphicsTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingPlaneComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingPlaneComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
