// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTClippingBoxActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTClippingBoxActor() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingBoxActor_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingBoxActor();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingPrimitiveActor();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
// End Cross Module References
	void AGTClippingBoxActor::StaticRegisterNativesAGTClippingBoxActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGTClippingBoxActor);
	UClass* Z_Construct_UClass_AGTClippingBoxActor_NoRegister()
	{
		return AGTClippingBoxActor::StaticClass();
	}
	struct Z_Construct_UClass_AGTClippingBoxActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGTClippingBoxActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGTClippingPrimitiveActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTClippingBoxActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Utility actor which automatically adds a UGTClippingBoxComponent.\n */" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "GTClippingBoxActor.h" },
		{ "ModuleRelativePath", "Public/GTClippingBoxActor.h" },
		{ "ToolTip", "Utility actor which automatically adds a UGTClippingBoxComponent." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGTClippingBoxActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGTClippingBoxActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGTClippingBoxActor_Statics::ClassParams = {
		&AGTClippingBoxActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGTClippingBoxActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGTClippingBoxActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGTClippingBoxActor()
	{
		if (!Z_Registration_Info_UClass_AGTClippingBoxActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGTClippingBoxActor.OuterSingleton, Z_Construct_UClass_AGTClippingBoxActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGTClippingBoxActor.OuterSingleton;
	}
	template<> GRAPHICSTOOLS_API UClass* StaticClass<AGTClippingBoxActor>()
	{
		return AGTClippingBoxActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGTClippingBoxActor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingBoxActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingBoxActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGTClippingBoxActor, AGTClippingBoxActor::StaticClass, TEXT("AGTClippingBoxActor"), &Z_Registration_Info_UClass_AGTClippingBoxActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGTClippingBoxActor), 1367261851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingBoxActor_h_802748764(TEXT("/Script/GraphicsTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingBoxActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingBoxActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
