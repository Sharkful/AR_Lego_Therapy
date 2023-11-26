// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/Constraints/UxtFaceUserConstraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtFaceUserConstraint() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFaceUserConstraint_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFaceUserConstraint();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTransformConstraint();
	UPackage* Z_Construct_UPackage__Script_UXTools();
// End Cross Module References
	void UUxtFaceUserConstraint::StaticRegisterNativesUUxtFaceUserConstraint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtFaceUserConstraint);
	UClass* Z_Construct_UClass_UUxtFaceUserConstraint_NoRegister()
	{
		return UUxtFaceUserConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UUxtFaceUserConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFaceAway_MetaData[];
#endif
		static void NewProp_bFaceAway_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFaceAway;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtFaceUserConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtTransformConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFaceUserConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Component for fixing the rotation of a manipulated object such that\n * it always faces (or faces away from) the user\n *\n * Usage:\n * Attach to actor that the constraint should be applied to.\n */" },
		{ "IncludePath", "Interactions/Constraints/UxtFaceUserConstraint.h" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtFaceUserConstraint.h" },
		{ "ToolTip", "Component for fixing the rotation of a manipulated object such that\nit always faces (or faces away from) the user\n\nUsage:\nAttach to actor that the constraint should be applied to." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFaceUserConstraint_Statics::NewProp_bFaceAway_MetaData[] = {
		{ "Category", "Uxt Constraint|Face User" },
		{ "Comment", "/** Option to use this constraint to face away from the user. */" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtFaceUserConstraint.h" },
		{ "ToolTip", "Option to use this constraint to face away from the user." },
	};
#endif
	void Z_Construct_UClass_UUxtFaceUserConstraint_Statics::NewProp_bFaceAway_SetBit(void* Obj)
	{
		((UUxtFaceUserConstraint*)Obj)->bFaceAway = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtFaceUserConstraint_Statics::NewProp_bFaceAway = { "bFaceAway", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtFaceUserConstraint), &Z_Construct_UClass_UUxtFaceUserConstraint_Statics::NewProp_bFaceAway_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtFaceUserConstraint_Statics::NewProp_bFaceAway_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFaceUserConstraint_Statics::NewProp_bFaceAway_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtFaceUserConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFaceUserConstraint_Statics::NewProp_bFaceAway,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtFaceUserConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtFaceUserConstraint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtFaceUserConstraint_Statics::ClassParams = {
		&UUxtFaceUserConstraint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtFaceUserConstraint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFaceUserConstraint_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtFaceUserConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFaceUserConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtFaceUserConstraint()
	{
		if (!Z_Registration_Info_UClass_UUxtFaceUserConstraint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtFaceUserConstraint.OuterSingleton, Z_Construct_UClass_UUxtFaceUserConstraint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtFaceUserConstraint.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtFaceUserConstraint>()
	{
		return UUxtFaceUserConstraint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtFaceUserConstraint);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtFaceUserConstraint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtFaceUserConstraint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtFaceUserConstraint, UUxtFaceUserConstraint::StaticClass, TEXT("UUxtFaceUserConstraint"), &Z_Registration_Info_UClass_UUxtFaceUserConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtFaceUserConstraint), 4142356397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtFaceUserConstraint_h_2599189944(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtFaceUserConstraint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtFaceUserConstraint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
