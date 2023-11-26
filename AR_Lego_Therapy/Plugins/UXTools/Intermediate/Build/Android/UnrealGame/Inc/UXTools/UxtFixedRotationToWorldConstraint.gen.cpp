// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/Constraints/UxtFixedRotationToWorldConstraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtFixedRotationToWorldConstraint() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFixedRotationToWorldConstraint();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTransformConstraint();
	UPackage* Z_Construct_UPackage__Script_UXTools();
// End Cross Module References
	void UUxtFixedRotationToWorldConstraint::StaticRegisterNativesUUxtFixedRotationToWorldConstraint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtFixedRotationToWorldConstraint);
	UClass* Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_NoRegister()
	{
		return UUxtFixedRotationToWorldConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtTransformConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Component for fixing the rotation of a manipulated object relative to the world\n *\n * Usage:\n * Attach to actor that the constraint should be applied to.\n */" },
		{ "IncludePath", "Interactions/Constraints/UxtFixedRotationToWorldConstraint.h" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtFixedRotationToWorldConstraint.h" },
		{ "ToolTip", "Component for fixing the rotation of a manipulated object relative to the world\n\nUsage:\nAttach to actor that the constraint should be applied to." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtFixedRotationToWorldConstraint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_Statics::ClassParams = {
		&UUxtFixedRotationToWorldConstraint::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtFixedRotationToWorldConstraint()
	{
		if (!Z_Registration_Info_UClass_UUxtFixedRotationToWorldConstraint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtFixedRotationToWorldConstraint.OuterSingleton, Z_Construct_UClass_UUxtFixedRotationToWorldConstraint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtFixedRotationToWorldConstraint.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtFixedRotationToWorldConstraint>()
	{
		return UUxtFixedRotationToWorldConstraint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtFixedRotationToWorldConstraint);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtFixedRotationToWorldConstraint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtFixedRotationToWorldConstraint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtFixedRotationToWorldConstraint, UUxtFixedRotationToWorldConstraint::StaticClass, TEXT("UUxtFixedRotationToWorldConstraint"), &Z_Registration_Info_UClass_UUxtFixedRotationToWorldConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtFixedRotationToWorldConstraint), 1080263888U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtFixedRotationToWorldConstraint_h_1301160573(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtFixedRotationToWorldConstraint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtFixedRotationToWorldConstraint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
