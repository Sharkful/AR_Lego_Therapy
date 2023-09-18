// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtWidgetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtWidgetComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtWidgetComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtWidgetComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPokeTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPokeHandler_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarHandler_NoRegister();
// End Cross Module References
	void UUxtWidgetComponent::StaticRegisterNativesUUxtWidgetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtWidgetComponent);
	UClass* Z_Construct_UClass_UUxtWidgetComponent_NoRegister()
	{
		return UUxtWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualUserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualUserIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Widget Component that is interactable with near and far interaction.\n */" },
		{ "IncludePath", "Controls/UxtWidgetComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtWidgetComponent.h" },
		{ "ToolTip", "Widget Component that is interactable with near and far interaction." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtWidgetComponent_Statics::NewProp_VirtualUserIndex_MetaData[] = {
		{ "Category", "Uxt Widget" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Represents the Virtual User Index.  Each virtual user should be represented by a different\n\x09 * index number, this will maintain separate capture and focus states for them.  Each\n\x09 * controller or finger-tip should get a unique PointerIndex.\n\x09 */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Controls/UxtWidgetComponent.h" },
		{ "ToolTip", "Represents the Virtual User Index.  Each virtual user should be represented by a different\nindex number, this will maintain separate capture and focus states for them.  Each\ncontroller or finger-tip should get a unique PointerIndex." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUxtWidgetComponent_Statics::NewProp_VirtualUserIndex = { "VirtualUserIndex", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtWidgetComponent, VirtualUserIndex), METADATA_PARAMS(Z_Construct_UClass_UUxtWidgetComponent_Statics::NewProp_VirtualUserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtWidgetComponent_Statics::NewProp_VirtualUserIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtWidgetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtWidgetComponent_Statics::NewProp_VirtualUserIndex,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUxtWidgetComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUxtPokeTarget_NoRegister, (int32)VTABLE_OFFSET(UUxtWidgetComponent, IUxtPokeTarget), false },  // 73628702
			{ Z_Construct_UClass_UUxtPokeHandler_NoRegister, (int32)VTABLE_OFFSET(UUxtWidgetComponent, IUxtPokeHandler), false },  // 4244100539
			{ Z_Construct_UClass_UUxtFarTarget_NoRegister, (int32)VTABLE_OFFSET(UUxtWidgetComponent, IUxtFarTarget), false },  // 3674043034
			{ Z_Construct_UClass_UUxtFarHandler_NoRegister, (int32)VTABLE_OFFSET(UUxtWidgetComponent, IUxtFarHandler), false },  // 1789224393
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtWidgetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtWidgetComponent_Statics::ClassParams = {
		&UUxtWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtWidgetComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtWidgetComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtWidgetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtWidgetComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtWidgetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtWidgetComponent.OuterSingleton, Z_Construct_UClass_UUxtWidgetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtWidgetComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtWidgetComponent>()
	{
		return UUxtWidgetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtWidgetComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtWidgetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtWidgetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtWidgetComponent, UUxtWidgetComponent::StaticClass, TEXT("UUxtWidgetComponent"), &Z_Registration_Info_UClass_UUxtWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtWidgetComponent), 1723261679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtWidgetComponent_h_2257434863(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtWidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtWidgetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
