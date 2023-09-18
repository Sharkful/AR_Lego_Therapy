// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtTextRenderComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtTextRenderComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTextRenderComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTextRenderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
// End Cross Module References
	void UUxtTextRenderComponent::StaticRegisterNativesUUxtTextRenderComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtTextRenderComponent);
	UClass* Z_Construct_UClass_UUxtTextRenderComponent_NoRegister()
	{
		return UUxtTextRenderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtTextRenderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtTextRenderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextRenderComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTextRenderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * A text render component which automatically configures assets and properties best suited for text rendering in UX Tools.\n */" },
		{ "HideCategories", "Object LOD Physics TextureStreaming Activation Components|Activation Collision Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Controls/UxtTextRenderComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtTextRenderComponent.h" },
		{ "ToolTip", "A text render component which automatically configures assets and properties best suited for text rendering in UX Tools." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtTextRenderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtTextRenderComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtTextRenderComponent_Statics::ClassParams = {
		&UUxtTextRenderComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtTextRenderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTextRenderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtTextRenderComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtTextRenderComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtTextRenderComponent.OuterSingleton, Z_Construct_UClass_UUxtTextRenderComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtTextRenderComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtTextRenderComponent>()
	{
		return UUxtTextRenderComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtTextRenderComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTextRenderComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTextRenderComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtTextRenderComponent, UUxtTextRenderComponent::StaticClass, TEXT("UUxtTextRenderComponent"), &Z_Registration_Info_UClass_UUxtTextRenderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtTextRenderComponent), 2478696659U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTextRenderComponent_h_1254253534(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTextRenderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTextRenderComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
