// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PC_Prototypes/EOS_GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOS_GameInstance() {}
// Cross Module References
	PC_PROTOTYPES_API UClass* Z_Construct_UClass_UEOS_GameInstance_NoRegister();
	PC_PROTOTYPES_API UClass* Z_Construct_UClass_UEOS_GameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_PC_Prototypes();
// End Cross Module References
	void UEOS_GameInstance::StaticRegisterNativesUEOS_GameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEOS_GameInstance);
	UClass* Z_Construct_UClass_UEOS_GameInstance_NoRegister()
	{
		return UEOS_GameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UEOS_GameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOS_GameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_PC_Prototypes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOS_GameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EOS_GameInstance.h" },
		{ "ModuleRelativePath", "EOS_GameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOS_GameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOS_GameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEOS_GameInstance_Statics::ClassParams = {
		&UEOS_GameInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEOS_GameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOS_GameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOS_GameInstance()
	{
		if (!Z_Registration_Info_UClass_UEOS_GameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEOS_GameInstance.OuterSingleton, Z_Construct_UClass_UEOS_GameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEOS_GameInstance.OuterSingleton;
	}
	template<> PC_PROTOTYPES_API UClass* StaticClass<UEOS_GameInstance>()
	{
		return UEOS_GameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOS_GameInstance);
	struct Z_CompiledInDeferFile_FID_PC_Prototypes_Source_PC_Prototypes_EOS_GameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PC_Prototypes_Source_PC_Prototypes_EOS_GameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEOS_GameInstance, UEOS_GameInstance::StaticClass, TEXT("UEOS_GameInstance"), &Z_Registration_Info_UClass_UEOS_GameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEOS_GameInstance), 2124721749U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PC_Prototypes_Source_PC_Prototypes_EOS_GameInstance_h_2605222309(TEXT("/Script/PC_Prototypes"),
		Z_CompiledInDeferFile_FID_PC_Prototypes_Source_PC_Prototypes_EOS_GameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PC_Prototypes_Source_PC_Prototypes_EOS_GameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
