// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Private/HandTracking/UxtTouchBasedHandTrackerSubsystem.h"
#include "Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtTouchBasedHandTrackerSubsystem() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTouchBasedHandTrackerSubsystem_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTouchBasedHandTrackerSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	UPackage* Z_Construct_UPackage__Script_UXTools();
// End Cross Module References
	void UUxtTouchBasedHandTrackerSubsystem::StaticRegisterNativesUUxtTouchBasedHandTrackerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtTouchBasedHandTrackerSubsystem);
	UClass* Z_Construct_UClass_UUxtTouchBasedHandTrackerSubsystem_NoRegister()
	{
		return UUxtTouchBasedHandTrackerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUxtTouchBasedHandTrackerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtTouchBasedHandTrackerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTouchBasedHandTrackerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools|Internal" },
		{ "Comment", "/**\n * Local player subsystem that adds a UUxtTouchBasedHandTrackerComponent to player controllers as they are created.\n */" },
		{ "IncludePath", "HandTracking/UxtTouchBasedHandTrackerSubsystem.h" },
		{ "ModuleRelativePath", "Private/HandTracking/UxtTouchBasedHandTrackerSubsystem.h" },
		{ "ToolTip", "Local player subsystem that adds a UUxtTouchBasedHandTrackerComponent to player controllers as they are created." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtTouchBasedHandTrackerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtTouchBasedHandTrackerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtTouchBasedHandTrackerSubsystem_Statics::ClassParams = {
		&UUxtTouchBasedHandTrackerSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUxtTouchBasedHandTrackerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchBasedHandTrackerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtTouchBasedHandTrackerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UUxtTouchBasedHandTrackerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtTouchBasedHandTrackerSubsystem.OuterSingleton, Z_Construct_UClass_UUxtTouchBasedHandTrackerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtTouchBasedHandTrackerSubsystem.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtTouchBasedHandTrackerSubsystem>()
	{
		return UUxtTouchBasedHandTrackerSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtTouchBasedHandTrackerSubsystem);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Private_HandTracking_UxtTouchBasedHandTrackerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Private_HandTracking_UxtTouchBasedHandTrackerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtTouchBasedHandTrackerSubsystem, UUxtTouchBasedHandTrackerSubsystem::StaticClass, TEXT("UUxtTouchBasedHandTrackerSubsystem"), &Z_Registration_Info_UClass_UUxtTouchBasedHandTrackerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtTouchBasedHandTrackerSubsystem), 4170164369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Private_HandTracking_UxtTouchBasedHandTrackerSubsystem_h_2097705135(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Private_HandTracking_UxtTouchBasedHandTrackerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Private_HandTracking_UxtTouchBasedHandTrackerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
