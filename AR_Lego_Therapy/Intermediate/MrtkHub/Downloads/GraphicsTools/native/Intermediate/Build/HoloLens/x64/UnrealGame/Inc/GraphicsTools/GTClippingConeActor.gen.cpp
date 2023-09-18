// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTClippingConeActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTClippingConeActor() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingConeActor_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingConeActor();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingPrimitiveActor();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
// End Cross Module References
	void AGTClippingConeActor::StaticRegisterNativesAGTClippingConeActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGTClippingConeActor);
	UClass* Z_Construct_UClass_AGTClippingConeActor_NoRegister()
	{
		return AGTClippingConeActor::StaticClass();
	}
	struct Z_Construct_UClass_AGTClippingConeActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGTClippingConeActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGTClippingPrimitiveActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTClippingConeActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Utility actor which automatically adds a UGTClippingConeComponent.\n */" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "GTClippingConeActor.h" },
		{ "ModuleRelativePath", "Public/GTClippingConeActor.h" },
		{ "ToolTip", "Utility actor which automatically adds a UGTClippingConeComponent." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGTClippingConeActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGTClippingConeActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGTClippingConeActor_Statics::ClassParams = {
		&AGTClippingConeActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGTClippingConeActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGTClippingConeActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGTClippingConeActor()
	{
		if (!Z_Registration_Info_UClass_AGTClippingConeActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGTClippingConeActor.OuterSingleton, Z_Construct_UClass_AGTClippingConeActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGTClippingConeActor.OuterSingleton;
	}
	template<> GRAPHICSTOOLS_API UClass* StaticClass<AGTClippingConeActor>()
	{
		return AGTClippingConeActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGTClippingConeActor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingConeActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingConeActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGTClippingConeActor, AGTClippingConeActor::StaticClass, TEXT("AGTClippingConeActor"), &Z_Registration_Info_UClass_AGTClippingConeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGTClippingConeActor), 2901374809U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingConeActor_h_3983922951(TEXT("/Script/GraphicsTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingConeActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingConeActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
