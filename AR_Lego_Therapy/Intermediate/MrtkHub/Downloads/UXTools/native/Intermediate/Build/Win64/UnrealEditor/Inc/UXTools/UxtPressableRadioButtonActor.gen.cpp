// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtPressableRadioButtonActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtPressableRadioButtonActor() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableRadioButtonActor_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableRadioButtonActor();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableToggleButtonActor();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	void AUxtPressableRadioButtonActor::StaticRegisterNativesAUxtPressableRadioButtonActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUxtPressableRadioButtonActor);
	UClass* Z_Construct_UClass_AUxtPressableRadioButtonActor_NoRegister()
	{
		return AUxtPressableRadioButtonActor::StaticClass();
	}
	struct Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterIconComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CenterIconComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUxtPressableToggleButtonActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * A derived actor of AUxtPressableToggleButtonActor which represents the toggle state with a circle icon. Radio buttons\n * are normally used in groups alongside the UUxtToggleGroupComponent.\n */" },
		{ "IncludePath", "Controls/UxtPressableRadioButtonActor.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableRadioButtonActor.h" },
		{ "ToolTip", "A derived actor of AUxtPressableToggleButtonActor which represents the toggle state with a circle icon. Radio buttons\nare normally used in groups alongside the UUxtToggleGroupComponent." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::NewProp_CenterIconComponent_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Displays the radio button's center icon which gets toggled on and off. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableRadioButtonActor.h" },
		{ "ToolTip", "Displays the radio button's center icon which gets toggled on and off." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::NewProp_CenterIconComponent = { "CenterIconComponent", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableRadioButtonActor, CenterIconComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::NewProp_CenterIconComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::NewProp_CenterIconComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::NewProp_CenterIconComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUxtPressableRadioButtonActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::ClassParams = {
		&AUxtPressableRadioButtonActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUxtPressableRadioButtonActor()
	{
		if (!Z_Registration_Info_UClass_AUxtPressableRadioButtonActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUxtPressableRadioButtonActor.OuterSingleton, Z_Construct_UClass_AUxtPressableRadioButtonActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUxtPressableRadioButtonActor.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<AUxtPressableRadioButtonActor>()
	{
		return AUxtPressableRadioButtonActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUxtPressableRadioButtonActor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableRadioButtonActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableRadioButtonActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUxtPressableRadioButtonActor, AUxtPressableRadioButtonActor::StaticClass, TEXT("AUxtPressableRadioButtonActor"), &Z_Registration_Info_UClass_AUxtPressableRadioButtonActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUxtPressableRadioButtonActor), 2777879784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableRadioButtonActor_h_822010451(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableRadioButtonActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableRadioButtonActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
