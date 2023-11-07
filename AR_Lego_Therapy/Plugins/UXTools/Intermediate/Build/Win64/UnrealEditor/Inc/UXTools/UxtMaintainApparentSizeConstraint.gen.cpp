// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/Constraints/UxtMaintainApparentSizeConstraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtMaintainApparentSizeConstraint() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtMaintainApparentSizeConstraint();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTransformConstraint();
	UPackage* Z_Construct_UPackage__Script_UXTools();
// End Cross Module References
	void UUxtMaintainApparentSizeConstraint::StaticRegisterNativesUUxtMaintainApparentSizeConstraint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtMaintainApparentSizeConstraint);
	UClass* Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_NoRegister()
	{
		return UUxtMaintainApparentSizeConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtTransformConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Constraint to maintain the apparent size of the object to the user.\n\n * Usage:\n * Attach to actor that the constraint should be applied to.\n */" },
		{ "IncludePath", "Interactions/Constraints/UxtMaintainApparentSizeConstraint.h" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtMaintainApparentSizeConstraint.h" },
		{ "ToolTip", "Constraint to maintain the apparent size of the object to the user.\n\nUsage:\nAttach to actor that the constraint should be applied to." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtMaintainApparentSizeConstraint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_Statics::ClassParams = {
		&UUxtMaintainApparentSizeConstraint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtMaintainApparentSizeConstraint()
	{
		if (!Z_Registration_Info_UClass_UUxtMaintainApparentSizeConstraint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtMaintainApparentSizeConstraint.OuterSingleton, Z_Construct_UClass_UUxtMaintainApparentSizeConstraint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtMaintainApparentSizeConstraint.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtMaintainApparentSizeConstraint>()
	{
		return UUxtMaintainApparentSizeConstraint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtMaintainApparentSizeConstraint);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtMaintainApparentSizeConstraint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtMaintainApparentSizeConstraint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtMaintainApparentSizeConstraint, UUxtMaintainApparentSizeConstraint::StaticClass, TEXT("UUxtMaintainApparentSizeConstraint"), &Z_Registration_Info_UClass_UUxtMaintainApparentSizeConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtMaintainApparentSizeConstraint), 4034457618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtMaintainApparentSizeConstraint_h_710106310(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtMaintainApparentSizeConstraint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtMaintainApparentSizeConstraint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
