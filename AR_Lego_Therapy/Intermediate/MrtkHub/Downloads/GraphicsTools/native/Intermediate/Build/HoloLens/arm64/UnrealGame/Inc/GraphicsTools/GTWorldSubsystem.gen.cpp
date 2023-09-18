// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTWorldSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTWorldSubsystem() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTWorldSubsystem_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTWorldSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
// End Cross Module References
	void UGTWorldSubsystem::StaticRegisterNativesUGTWorldSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTWorldSubsystem);
	UClass* Z_Construct_UClass_UGTWorldSubsystem_NoRegister()
	{
		return UGTWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGTWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n * Subsystem to hold all graphics data associated with a world that will effect the world's MPC_GTSettings material parameter collection.\n */" },
		{ "IncludePath", "GTWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/GTWorldSubsystem.h" },
		{ "ToolTip", "Subsystem to hold all graphics data associated with a world that will effect the world's MPC_GTSettings material parameter collection." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTWorldSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTWorldSubsystem_Statics::ClassParams = {
		&UGTWorldSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGTWorldSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTWorldSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTWorldSubsystem()
	{
		if (!Z_Registration_Info_UClass_UGTWorldSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTWorldSubsystem.OuterSingleton, Z_Construct_UClass_UGTWorldSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTWorldSubsystem.OuterSingleton;
	}
	template<> GRAPHICSTOOLS_API UClass* StaticClass<UGTWorldSubsystem>()
	{
		return UGTWorldSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTWorldSubsystem);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTWorldSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTWorldSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTWorldSubsystem, UGTWorldSubsystem::StaticClass, TEXT("UGTWorldSubsystem"), &Z_Registration_Info_UClass_UGTWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTWorldSubsystem), 3941148993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTWorldSubsystem_h_3524135630(TEXT("/Script/GraphicsTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTWorldSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTWorldSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
