// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXToolsInput/Private/UxtDefaultHandTrackerSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtDefaultHandTrackerSubsystem() {}
// Cross Module References
	UXTOOLSINPUT_API UClass* Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_NoRegister();
	UXTOOLSINPUT_API UClass* Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_UXToolsInput();
// End Cross Module References
	void UUxtDefaultHandTrackerSubsystem::StaticRegisterNativesUUxtDefaultHandTrackerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtDefaultHandTrackerSubsystem);
	UClass* Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_NoRegister()
	{
		return UUxtDefaultHandTrackerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UXToolsInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Subsystem for registering the default hand tracker.\n *\n * This subsystem creates the default hand tracker on player login.\n * It registers input action mappings and binds to input events for Select/Grip actions.\n * It also updates MotionControllerData of the default hand tracker once per world tick.\n */" },
		{ "IncludePath", "UxtDefaultHandTrackerSubsystem.h" },
		{ "ModuleRelativePath", "Private/UxtDefaultHandTrackerSubsystem.h" },
		{ "ToolTip", "Subsystem for registering the default hand tracker.\n\nThis subsystem creates the default hand tracker on player login.\nIt registers input action mappings and binds to input events for Select/Grip actions.\nIt also updates MotionControllerData of the default hand tracker once per world tick." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtDefaultHandTrackerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_Statics::ClassParams = {
		&UUxtDefaultHandTrackerSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UUxtDefaultHandTrackerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtDefaultHandTrackerSubsystem.OuterSingleton, Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtDefaultHandTrackerSubsystem.OuterSingleton;
	}
	template<> UXTOOLSINPUT_API UClass* StaticClass<UUxtDefaultHandTrackerSubsystem>()
	{
		return UUxtDefaultHandTrackerSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtDefaultHandTrackerSubsystem);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsInput_Private_UxtDefaultHandTrackerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsInput_Private_UxtDefaultHandTrackerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtDefaultHandTrackerSubsystem, UUxtDefaultHandTrackerSubsystem::StaticClass, TEXT("UUxtDefaultHandTrackerSubsystem"), &Z_Registration_Info_UClass_UUxtDefaultHandTrackerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtDefaultHandTrackerSubsystem), 1389115760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsInput_Private_UxtDefaultHandTrackerSubsystem_h_1226679601(TEXT("/Script/UXToolsInput"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsInput_Private_UxtDefaultHandTrackerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsInput_Private_UxtDefaultHandTrackerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
