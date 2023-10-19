// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PC_Prototypes/EOSGameInstanceSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSGameInstanceSubsystem() {}
// Cross Module References
	PC_PROTOTYPES_API UClass* Z_Construct_UClass_UEOSGameInstanceSubsystem_NoRegister();
	PC_PROTOTYPES_API UClass* Z_Construct_UClass_UEOSGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_PC_Prototypes();
// End Cross Module References
	void UEOSGameInstanceSubsystem::StaticRegisterNativesUEOSGameInstanceSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEOSGameInstanceSubsystem);
	UClass* Z_Construct_UClass_UEOSGameInstanceSubsystem_NoRegister()
	{
		return UEOSGameInstanceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEOSGameInstanceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSGameInstanceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_PC_Prototypes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSGameInstanceSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EOSGameInstanceSubsystem.h" },
		{ "ModuleRelativePath", "EOSGameInstanceSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSGameInstanceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSGameInstanceSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEOSGameInstanceSubsystem_Statics::ClassParams = {
		&UEOSGameInstanceSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSGameInstanceSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSGameInstanceSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSGameInstanceSubsystem()
	{
		if (!Z_Registration_Info_UClass_UEOSGameInstanceSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEOSGameInstanceSubsystem.OuterSingleton, Z_Construct_UClass_UEOSGameInstanceSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEOSGameInstanceSubsystem.OuterSingleton;
	}
	template<> PC_PROTOTYPES_API UClass* StaticClass<UEOSGameInstanceSubsystem>()
	{
		return UEOSGameInstanceSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSGameInstanceSubsystem);
	struct Z_CompiledInDeferFile_FID_PC_Prototypes_Source_PC_Prototypes_EOSGameInstanceSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PC_Prototypes_Source_PC_Prototypes_EOSGameInstanceSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEOSGameInstanceSubsystem, UEOSGameInstanceSubsystem::StaticClass, TEXT("UEOSGameInstanceSubsystem"), &Z_Registration_Info_UClass_UEOSGameInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEOSGameInstanceSubsystem), 3745211556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PC_Prototypes_Source_PC_Prototypes_EOSGameInstanceSubsystem_h_4215900385(TEXT("/Script/PC_Prototypes"),
		Z_CompiledInDeferFile_FID_PC_Prototypes_Source_PC_Prototypes_EOSGameInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PC_Prototypes_Source_PC_Prototypes_EOSGameInstanceSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
