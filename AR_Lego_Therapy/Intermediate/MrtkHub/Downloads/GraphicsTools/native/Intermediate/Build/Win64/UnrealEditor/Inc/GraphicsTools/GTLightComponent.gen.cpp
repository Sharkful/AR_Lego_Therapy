// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTLightComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTLightComponent() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTLightComponent_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTLightComponent();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTSceneComponent();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
// End Cross Module References
	void UGTLightComponent::StaticRegisterNativesUGTLightComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTLightComponent);
	UClass* Z_Construct_UClass_UGTLightComponent_NoRegister()
	{
		return UGTLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGTSceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Abstract base class for all light actor components within Graphics Tools.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GTLightComponent.h" },
		{ "ModuleRelativePath", "Public/GTLightComponent.h" },
		{ "ToolTip", "Abstract base class for all light actor components within Graphics Tools." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTLightComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTLightComponent_Statics::ClassParams = {
		&UGTLightComponent::StaticClass,
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
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UGTLightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTLightComponent()
	{
		if (!Z_Registration_Info_UClass_UGTLightComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTLightComponent.OuterSingleton, Z_Construct_UClass_UGTLightComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTLightComponent.OuterSingleton;
	}
	template<> GRAPHICSTOOLS_API UClass* StaticClass<UGTLightComponent>()
	{
		return UGTLightComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTLightComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTLightComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTLightComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTLightComponent, UGTLightComponent::StaticClass, TEXT("UGTLightComponent"), &Z_Registration_Info_UClass_UGTLightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTLightComponent), 2973356255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTLightComponent_h_1669818012(TEXT("/Script/GraphicsTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTLightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTLightComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
