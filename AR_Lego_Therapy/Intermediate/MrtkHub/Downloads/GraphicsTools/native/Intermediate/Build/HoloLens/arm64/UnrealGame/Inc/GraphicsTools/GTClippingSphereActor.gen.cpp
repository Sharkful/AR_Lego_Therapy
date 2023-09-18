// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTClippingSphereActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTClippingSphereActor() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingSphereActor_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingSphereActor();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingPrimitiveActor();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
// End Cross Module References
	void AGTClippingSphereActor::StaticRegisterNativesAGTClippingSphereActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGTClippingSphereActor);
	UClass* Z_Construct_UClass_AGTClippingSphereActor_NoRegister()
	{
		return AGTClippingSphereActor::StaticClass();
	}
	struct Z_Construct_UClass_AGTClippingSphereActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGTClippingSphereActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGTClippingPrimitiveActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTClippingSphereActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Utility actor which automatically adds a UGTClippingSphereComponent.\n */" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "GTClippingSphereActor.h" },
		{ "ModuleRelativePath", "Public/GTClippingSphereActor.h" },
		{ "ToolTip", "Utility actor which automatically adds a UGTClippingSphereComponent." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGTClippingSphereActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGTClippingSphereActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGTClippingSphereActor_Statics::ClassParams = {
		&AGTClippingSphereActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGTClippingSphereActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGTClippingSphereActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGTClippingSphereActor()
	{
		if (!Z_Registration_Info_UClass_AGTClippingSphereActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGTClippingSphereActor.OuterSingleton, Z_Construct_UClass_AGTClippingSphereActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGTClippingSphereActor.OuterSingleton;
	}
	template<> GRAPHICSTOOLS_API UClass* StaticClass<AGTClippingSphereActor>()
	{
		return AGTClippingSphereActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGTClippingSphereActor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingSphereActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingSphereActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGTClippingSphereActor, AGTClippingSphereActor::StaticClass, TEXT("AGTClippingSphereActor"), &Z_Registration_Info_UClass_AGTClippingSphereActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGTClippingSphereActor), 3164261259U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingSphereActor_h_3755138(TEXT("/Script/GraphicsTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingSphereActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingSphereActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
