// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/Constraints/UxtRotationAxisConstraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtRotationAxisConstraint() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtRotationAxisConstraint_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtRotationAxisConstraint();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTransformConstraint();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtAxis();
// End Cross Module References
	void UUxtRotationAxisConstraint::StaticRegisterNativesUUxtRotationAxisConstraint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtRotationAxisConstraint);
	UClass* Z_Construct_UClass_UUxtRotationAxisConstraint_NoRegister()
	{
		return UUxtRotationAxisConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UUxtRotationAxisConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalSpaceForConstraint_MetaData[];
#endif
		static void NewProp_bUseLocalSpaceForConstraint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalSpaceForConstraint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtTransformConstraint,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Component for limiting the rotation axes for Manipulator\n *\n * Usage:\n * Attach to actor that the constraint should be applied to.\n */" },
		{ "IncludePath", "Interactions/Constraints/UxtRotationAxisConstraint.h" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtRotationAxisConstraint.h" },
		{ "ToolTip", "Component for limiting the rotation axes for Manipulator\n\nUsage:\nAttach to actor that the constraint should be applied to." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_AllowedAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_AllowedAxis_MetaData[] = {
		{ "Category", "Uxt Constraint|Rotation Axis" },
		{ "Comment", "/** Defines which axis allows rotation. */" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtRotationAxisConstraint.h" },
		{ "ToolTip", "Defines which axis allows rotation." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_AllowedAxis = { "AllowedAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRotationAxisConstraint, AllowedAxis), Z_Construct_UEnum_UXTools_EUxtAxis, METADATA_PARAMS(Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_AllowedAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_AllowedAxis_MetaData)) }; // 143784765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint_MetaData[] = {
		{ "Category", "Uxt Constraint|Rotation Axis" },
		{ "Comment", "/** Use local or global space for constraint calculations*/" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtRotationAxisConstraint.h" },
		{ "ToolTip", "Use local or global space for constraint calculations" },
	};
#endif
	void Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint_SetBit(void* Obj)
	{
		((UUxtRotationAxisConstraint*)Obj)->bUseLocalSpaceForConstraint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint = { "bUseLocalSpaceForConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtRotationAxisConstraint), &Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_AllowedAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_AllowedAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::NewProp_bUseLocalSpaceForConstraint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtRotationAxisConstraint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::ClassParams = {
		&UUxtRotationAxisConstraint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtRotationAxisConstraint()
	{
		if (!Z_Registration_Info_UClass_UUxtRotationAxisConstraint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtRotationAxisConstraint.OuterSingleton, Z_Construct_UClass_UUxtRotationAxisConstraint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtRotationAxisConstraint.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtRotationAxisConstraint>()
	{
		return UUxtRotationAxisConstraint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtRotationAxisConstraint);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtRotationAxisConstraint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtRotationAxisConstraint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtRotationAxisConstraint, UUxtRotationAxisConstraint::StaticClass, TEXT("UUxtRotationAxisConstraint"), &Z_Registration_Info_UClass_UUxtRotationAxisConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtRotationAxisConstraint), 1400455247U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtRotationAxisConstraint_h_3538504123(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtRotationAxisConstraint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_Constraints_UxtRotationAxisConstraint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
