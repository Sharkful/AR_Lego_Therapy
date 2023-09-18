// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXToolsInput/Private/UxtXRSimulationSubsystem.h"
#include "Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtXRSimulationSubsystem() {}
// Cross Module References
	UXTOOLSINPUT_API UClass* Z_Construct_UClass_UUxtXRSimulationSubsystem_NoRegister();
	UXTOOLSINPUT_API UClass* Z_Construct_UClass_UUxtXRSimulationSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	UPackage* Z_Construct_UPackage__Script_UXToolsInput();
// End Cross Module References
	void UUxtXRSimulationSubsystem::StaticRegisterNativesUUxtXRSimulationSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtXRSimulationSubsystem);
	UClass* Z_Construct_UClass_UUxtXRSimulationSubsystem_NoRegister()
	{
		return UUxtXRSimulationSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUxtXRSimulationSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtXRSimulationSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UXToolsInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtXRSimulationSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Subsystem for managing XR simulation actors. */" },
		{ "IncludePath", "UxtXRSimulationSubsystem.h" },
		{ "ModuleRelativePath", "Private/UxtXRSimulationSubsystem.h" },
		{ "ToolTip", "Subsystem for managing XR simulation actors." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtXRSimulationSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtXRSimulationSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtXRSimulationSubsystem_Statics::ClassParams = {
		&UUxtXRSimulationSubsystem::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtXRSimulationSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtXRSimulationSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtXRSimulationSubsystem()
	{
		if (!Z_Registration_Info_UClass_UUxtXRSimulationSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtXRSimulationSubsystem.OuterSingleton, Z_Construct_UClass_UUxtXRSimulationSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtXRSimulationSubsystem.OuterSingleton;
	}
	template<> UXTOOLSINPUT_API UClass* StaticClass<UUxtXRSimulationSubsystem>()
	{
		return UUxtXRSimulationSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtXRSimulationSubsystem);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsInput_Private_UxtXRSimulationSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsInput_Private_UxtXRSimulationSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtXRSimulationSubsystem, UUxtXRSimulationSubsystem::StaticClass, TEXT("UUxtXRSimulationSubsystem"), &Z_Registration_Info_UClass_UUxtXRSimulationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtXRSimulationSubsystem), 701797445U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsInput_Private_UxtXRSimulationSubsystem_h_3677523494(TEXT("/Script/UXToolsInput"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsInput_Private_UxtXRSimulationSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsInput_Private_UxtXRSimulationSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
