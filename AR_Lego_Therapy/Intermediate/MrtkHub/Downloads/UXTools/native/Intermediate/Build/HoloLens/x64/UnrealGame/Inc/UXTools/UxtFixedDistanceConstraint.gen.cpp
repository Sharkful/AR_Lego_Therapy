// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/Constraints/UxtFixedDistanceConstraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtFixedDistanceConstraint() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFixedDistanceConstraint_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFixedDistanceConstraint();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTransformConstraint();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
// End Cross Module References
	void UUxtFixedDistanceConstraint::StaticRegisterNativesUUxtFixedDistanceConstraint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtFixedDistanceConstraint);
	UClass* Z_Construct_UClass_UUxtFixedDistanceConstraint_NoRegister()
	{
		return UUxtFixedDistanceConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintComponent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtTransformConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Constraint to fix the object distance from another object.\n *\n * Usage:\n * Attach to actor that the constraint should be applied to.\n * If necessary, configure the object to constrain to. This will default to the head if not set.\n */" },
		{ "IncludePath", "Interactions/Constraints/UxtFixedDistanceConstraint.h" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtFixedDistanceConstraint.h" },
		{ "ToolTip", "Constraint to fix the object distance from another object.\n\nUsage:\nAttach to actor that the constraint should be applied to.\nIf necessary, configure the object to constrain to. This will default to the head if not set." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::NewProp_ConstraintComponent_MetaData[] = {
		{ "Category", "Uxt Constraint|Fixed Distance" },
		{ "Comment", "/** Component to fix distance to. Defaults to the head. */" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtFixedDistanceConstraint.h" },
		{ "ToolTip", "Component to fix distance to. Defaults to the head." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::NewProp_ConstraintComponent = { "ConstraintComponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFixedDistanceConstraint, ConstraintComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::NewProp_ConstraintComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::NewProp_ConstraintComponent_MetaData)) }; // 3442474717
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::NewProp_ConstraintComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtFixedDistanceConstraint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::ClassParams = {
		&UUxtFixedDistanceConstraint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtFixedDistanceConstraint()
	{
		if (!Z_Registration_Info_UClass_UUxtFixedDistanceConstraint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtFixedDistanceConstraint.OuterSingleton, Z_Construct_UClass_UUxtFixedDistanceConstraint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtFixedDistanceConstraint.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtFixedDistanceConstraint>()
	{
		return UUxtFixedDistanceConstraint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtFixedDistanceConstraint);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtFixedDistanceConstraint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtFixedDistanceConstraint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtFixedDistanceConstraint, UUxtFixedDistanceConstraint::StaticClass, TEXT("UUxtFixedDistanceConstraint"), &Z_Registration_Info_UClass_UUxtFixedDistanceConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtFixedDistanceConstraint), 2476499959U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtFixedDistanceConstraint_h_1720410287(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtFixedDistanceConstraint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtFixedDistanceConstraint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
