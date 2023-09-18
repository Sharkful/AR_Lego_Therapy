// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTDirectionalLightActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTDirectionalLightActor() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTDirectionalLightActor_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTDirectionalLightActor();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTLightActor();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
// End Cross Module References
	void AGTDirectionalLightActor::StaticRegisterNativesAGTDirectionalLightActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGTDirectionalLightActor);
	UClass* Z_Construct_UClass_AGTDirectionalLightActor_NoRegister()
	{
		return AGTDirectionalLightActor::StaticClass();
	}
	struct Z_Construct_UClass_AGTDirectionalLightActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGTDirectionalLightActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGTLightActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTDirectionalLightActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Utility actor which automatically adds a UGTDirectionalLightComponent.\n */" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "GTDirectionalLightActor.h" },
		{ "ModuleRelativePath", "Public/GTDirectionalLightActor.h" },
		{ "ToolTip", "Utility actor which automatically adds a UGTDirectionalLightComponent." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGTDirectionalLightActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGTDirectionalLightActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGTDirectionalLightActor_Statics::ClassParams = {
		&AGTDirectionalLightActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGTDirectionalLightActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGTDirectionalLightActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGTDirectionalLightActor()
	{
		if (!Z_Registration_Info_UClass_AGTDirectionalLightActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGTDirectionalLightActor.OuterSingleton, Z_Construct_UClass_AGTDirectionalLightActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGTDirectionalLightActor.OuterSingleton;
	}
	template<> GRAPHICSTOOLS_API UClass* StaticClass<AGTDirectionalLightActor>()
	{
		return AGTDirectionalLightActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGTDirectionalLightActor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTDirectionalLightActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTDirectionalLightActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGTDirectionalLightActor, AGTDirectionalLightActor::StaticClass, TEXT("AGTDirectionalLightActor"), &Z_Registration_Info_UClass_AGTDirectionalLightActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGTDirectionalLightActor), 3200346445U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTDirectionalLightActor_h_1975045652(TEXT("/Script/GraphicsTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTDirectionalLightActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTDirectionalLightActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
