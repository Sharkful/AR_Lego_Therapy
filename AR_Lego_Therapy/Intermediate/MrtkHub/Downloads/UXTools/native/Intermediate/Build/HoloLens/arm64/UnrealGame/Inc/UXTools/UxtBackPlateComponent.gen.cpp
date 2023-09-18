// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtBackPlateComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtBackPlateComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBackPlateComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBackPlateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUxtBackPlateComponent::execGetDefaultBackPlateSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UUxtBackPlateComponent::GetDefaultBackPlateSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBackPlateComponent::execGetDefaultBackPlateDepth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UUxtBackPlateComponent::GetDefaultBackPlateDepth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBackPlateComponent::execSetBackPlateMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBackPlateMaterial(Z_Param_NewMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBackPlateComponent::execGetBackPlateMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetBackPlateMaterial();
		P_NATIVE_END;
	}
	void UUxtBackPlateComponent::StaticRegisterNativesUUxtBackPlateComponent()
	{
		UClass* Class = UUxtBackPlateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBackPlateMaterial", &UUxtBackPlateComponent::execGetBackPlateMaterial },
			{ "GetDefaultBackPlateDepth", &UUxtBackPlateComponent::execGetDefaultBackPlateDepth },
			{ "GetDefaultBackPlateSize", &UUxtBackPlateComponent::execGetDefaultBackPlateSize },
			{ "SetBackPlateMaterial", &UUxtBackPlateComponent::execSetBackPlateMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics
	{
		struct UxtBackPlateComponent_eventGetBackPlateMaterial_Parms
		{
			UMaterialInterface* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBackPlateComponent_eventGetBackPlateMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Back Plate" },
		{ "ModuleRelativePath", "Public/Controls/UxtBackPlateComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBackPlateComponent, nullptr, "GetBackPlateMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::UxtBackPlateComponent_eventGetBackPlateMaterial_Parms), Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateDepth_Statics
	{
		struct UxtBackPlateComponent_eventGetDefaultBackPlateDepth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateDepth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBackPlateComponent_eventGetDefaultBackPlateDepth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateDepth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateDepth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Back Plate" },
		{ "Comment", "/** Gets the default depth a back plate should be scaled to along the x-axis. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBackPlateComponent.h" },
		{ "ToolTip", "Gets the default depth a back plate should be scaled to along the x-axis." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBackPlateComponent, nullptr, "GetDefaultBackPlateDepth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateDepth_Statics::UxtBackPlateComponent_eventGetDefaultBackPlateDepth_Parms), Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateDepth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateSize_Statics
	{
		struct UxtBackPlateComponent_eventGetDefaultBackPlateSize_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBackPlateComponent_eventGetDefaultBackPlateSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Back Plate" },
		{ "Comment", "/** Gets the default back plate scale along the the y and z axes. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBackPlateComponent.h" },
		{ "ToolTip", "Gets the default back plate scale along the the y and z axes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBackPlateComponent, nullptr, "GetDefaultBackPlateSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateSize_Statics::UxtBackPlateComponent_eventGetDefaultBackPlateSize_Parms), Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics
	{
		struct UxtBackPlateComponent_eventSetBackPlateMaterial_Parms
		{
			UMaterialInterface* NewMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBackPlateComponent_eventSetBackPlateMaterial_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Back Plate" },
		{ "ModuleRelativePath", "Public/Controls/UxtBackPlateComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBackPlateComponent, nullptr, "SetBackPlateMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::UxtBackPlateComponent_eventSetBackPlateMaterial_Parms), Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtBackPlateComponent);
	UClass* Z_Construct_UClass_UUxtBackPlateComponent_NoRegister()
	{
		return UUxtBackPlateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtBackPlateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtBackPlateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtBackPlateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial, "GetBackPlateMaterial" }, // 1347666277
		{ &Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateDepth, "GetDefaultBackPlateDepth" }, // 2417286522
		{ &Z_Construct_UFunction_UUxtBackPlateComponent_GetDefaultBackPlateSize, "GetDefaultBackPlateSize" }, // 3704638508
		{ &Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial, "SetBackPlateMaterial" }, // 2271815920
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBackPlateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Static mesh which automatically updates scale dependent material properties for back plates.\n * Note, this component also adjusts the bounds of the static mesh to ensure calculations happening\n * in the vertex shader are accounted for. Please see ZUpRotation for more information.\n */" },
		{ "HideCategories", "Materials Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Controls/UxtBackPlateComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtBackPlateComponent.h" },
		{ "ToolTip", "Static mesh which automatically updates scale dependent material properties for back plates.\nNote, this component also adjusts the bounds of the static mesh to ensure calculations happening\nin the vertex shader are accounted for. Please see ZUpRotation for more information." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_Material_MetaData[] = {
		{ "BlueprintGetter", "GetBackPlateMaterial" },
		{ "BlueprintSetter", "SetBackPlateMaterial" },
		{ "Category", "Uxt Back Plate" },
		{ "Comment", "/** The current back plate material. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBackPlateComponent.h" },
		{ "ToolTip", "The current back plate material." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBackPlateComponent, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_MaterialInstance_MetaData[] = {
		{ "Comment", "/** Handle to any dynamic material this component instantiates due to material parameter changes. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBackPlateComponent.h" },
		{ "ToolTip", "Handle to any dynamic material this component instantiates due to material parameter changes." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBackPlateComponent, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_MaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_MaterialInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtBackPlateComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_MaterialInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtBackPlateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtBackPlateComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtBackPlateComponent_Statics::ClassParams = {
		&UUxtBackPlateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtBackPlateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBackPlateComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtBackPlateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBackPlateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtBackPlateComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtBackPlateComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtBackPlateComponent.OuterSingleton, Z_Construct_UClass_UUxtBackPlateComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtBackPlateComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtBackPlateComponent>()
	{
		return UUxtBackPlateComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtBackPlateComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtBackPlateComponent, UUxtBackPlateComponent::StaticClass, TEXT("UUxtBackPlateComponent"), &Z_Registration_Info_UClass_UUxtBackPlateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtBackPlateComponent), 798109309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_3582014811(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBackPlateComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
