// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Private/HandTracking/UxtTouchBasedHandTrackerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtTouchBasedHandTrackerComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	void UUxtTouchBasedHandTrackerComponent::StaticRegisterNativesUUxtTouchBasedHandTrackerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtTouchBasedHandTrackerComponent);
	UClass* Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_NoRegister()
	{
		return UUxtTouchBasedHandTrackerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools|Internal" },
		{ "Comment", "/**\n * Component added automatically by UXT to the player controller to enable driving far interactions via touch input.\n * The hand tracker interface is used just to provide the pointer pose and grab/select states, GetJointState() returns\n * that pointer pose for all joints.\n */" },
		{ "IncludePath", "HandTracking/UxtTouchBasedHandTrackerComponent.h" },
		{ "ModuleRelativePath", "Private/HandTracking/UxtTouchBasedHandTrackerComponent.h" },
		{ "ToolTip", "Component added automatically by UXT to the player controller to enable driving far interactions via touch input.\nThe hand tracker interface is used just to provide the pointer pose and grab/select states, GetJointState() returns\nthat pointer pose for all joints." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Private/HandTracking/UxtTouchBasedHandTrackerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTouchBasedHandTrackerComponent, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::NewProp_PlayerController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::NewProp_PlayerController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtTouchBasedHandTrackerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::ClassParams = {
		&UUxtTouchBasedHandTrackerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtTouchBasedHandTrackerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtTouchBasedHandTrackerComponent.OuterSingleton, Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtTouchBasedHandTrackerComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtTouchBasedHandTrackerComponent>()
	{
		return UUxtTouchBasedHandTrackerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtTouchBasedHandTrackerComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Private_HandTracking_UxtTouchBasedHandTrackerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Private_HandTracking_UxtTouchBasedHandTrackerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent, UUxtTouchBasedHandTrackerComponent::StaticClass, TEXT("UUxtTouchBasedHandTrackerComponent"), &Z_Registration_Info_UClass_UUxtTouchBasedHandTrackerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtTouchBasedHandTrackerComponent), 1294227181U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Private_HandTracking_UxtTouchBasedHandTrackerComponent_h_1631040494(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Private_HandTracking_UxtTouchBasedHandTrackerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Private_HandTracking_UxtTouchBasedHandTrackerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
