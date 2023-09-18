// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTClippingPlaneActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTClippingPlaneActor() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingPlaneActor_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingPlaneActor();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingPrimitiveActor();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
// End Cross Module References
	void AGTClippingPlaneActor::StaticRegisterNativesAGTClippingPlaneActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGTClippingPlaneActor);
	UClass* Z_Construct_UClass_AGTClippingPlaneActor_NoRegister()
	{
		return AGTClippingPlaneActor::StaticClass();
	}
	struct Z_Construct_UClass_AGTClippingPlaneActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGTClippingPlaneActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGTClippingPrimitiveActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTClippingPlaneActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Utility actor which automatically adds a UGTClippingPlaneComponent.\n */" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "GTClippingPlaneActor.h" },
		{ "ModuleRelativePath", "Public/GTClippingPlaneActor.h" },
		{ "ToolTip", "Utility actor which automatically adds a UGTClippingPlaneComponent." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGTClippingPlaneActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGTClippingPlaneActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGTClippingPlaneActor_Statics::ClassParams = {
		&AGTClippingPlaneActor::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGTClippingPlaneActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGTClippingPlaneActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGTClippingPlaneActor()
	{
		if (!Z_Registration_Info_UClass_AGTClippingPlaneActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGTClippingPlaneActor.OuterSingleton, Z_Construct_UClass_AGTClippingPlaneActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGTClippingPlaneActor.OuterSingleton;
	}
	template<> GRAPHICSTOOLS_API UClass* StaticClass<AGTClippingPlaneActor>()
	{
		return AGTClippingPlaneActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGTClippingPlaneActor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingPlaneActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingPlaneActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGTClippingPlaneActor, AGTClippingPlaneActor::StaticClass, TEXT("AGTClippingPlaneActor"), &Z_Registration_Info_UClass_AGTClippingPlaneActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGTClippingPlaneActor), 1121393756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingPlaneActor_h_2513934579(TEXT("/Script/GraphicsTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingPlaneActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingPlaneActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
