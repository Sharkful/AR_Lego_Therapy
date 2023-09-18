// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTClippingPrimitiveActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTClippingPrimitiveActor() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingPrimitiveActor_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_AGTClippingPrimitiveActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTClippingPrimitiveComponent_NoRegister();
// End Cross Module References
	void AGTClippingPrimitiveActor::StaticRegisterNativesAGTClippingPrimitiveActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGTClippingPrimitiveActor);
	UClass* Z_Construct_UClass_AGTClippingPrimitiveActor_NoRegister()
	{
		return AGTClippingPrimitiveActor::StaticClass();
	}
	struct Z_Construct_UClass_AGTClippingPrimitiveActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClippingPrimitiveComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClippingPrimitiveComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Abstract base class for all Clipping Primitive actor types within Graphics Tools.\n */" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "GTClippingPrimitiveActor.h" },
		{ "ModuleRelativePath", "Public/GTClippingPrimitiveActor.h" },
		{ "ToolTip", "Abstract base class for all Clipping Primitive actor types within Graphics Tools." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::NewProp_ClippingPrimitiveComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GT Clipping Primitive" },
		{ "Comment", "/** Handle to the clipping primitive component derived Graphics Tools clipping primitive actors instantiate. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GTClippingPrimitiveActor.h" },
		{ "ToolTip", "Handle to the clipping primitive component derived Graphics Tools clipping primitive actors instantiate." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::NewProp_ClippingPrimitiveComponent = { "ClippingPrimitiveComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGTClippingPrimitiveActor, ClippingPrimitiveComponent), Z_Construct_UClass_UGTClippingPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::NewProp_ClippingPrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::NewProp_ClippingPrimitiveComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::NewProp_ClippingPrimitiveComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGTClippingPrimitiveActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::ClassParams = {
		&AGTClippingPrimitiveActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGTClippingPrimitiveActor()
	{
		if (!Z_Registration_Info_UClass_AGTClippingPrimitiveActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGTClippingPrimitiveActor.OuterSingleton, Z_Construct_UClass_AGTClippingPrimitiveActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGTClippingPrimitiveActor.OuterSingleton;
	}
	template<> GRAPHICSTOOLS_API UClass* StaticClass<AGTClippingPrimitiveActor>()
	{
		return AGTClippingPrimitiveActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGTClippingPrimitiveActor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingPrimitiveActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingPrimitiveActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGTClippingPrimitiveActor, AGTClippingPrimitiveActor::StaticClass, TEXT("AGTClippingPrimitiveActor"), &Z_Registration_Info_UClass_AGTClippingPrimitiveActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGTClippingPrimitiveActor), 1114281376U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingPrimitiveActor_h_3500659570(TEXT("/Script/GraphicsTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingPrimitiveActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTClippingPrimitiveActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
