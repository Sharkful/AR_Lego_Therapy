// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtFarCursorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtFarCursorComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarCursorComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarCursorComponent();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtRingCursorComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarPointerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUxtFarCursorComponent::execOnFarPointerDisabled)
	{
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_FarPointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFarPointerDisabled(Z_Param_FarPointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtFarCursorComponent::execOnFarPointerEnabled)
	{
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_FarPointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFarPointerEnabled(Z_Param_FarPointer);
		P_NATIVE_END;
	}
	void UUxtFarCursorComponent::StaticRegisterNativesUUxtFarCursorComponent()
	{
		UClass* Class = UUxtFarCursorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFarPointerDisabled", &UUxtFarCursorComponent::execOnFarPointerDisabled },
			{ "OnFarPointerEnabled", &UUxtFarCursorComponent::execOnFarPointerEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics
	{
		struct UxtFarCursorComponent_eventOnFarPointerDisabled_Parms
		{
			UUxtFarPointerComponent* FarPointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FarPointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FarPointer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::NewProp_FarPointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::NewProp_FarPointer = { "FarPointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarCursorComponent_eventOnFarPointerDisabled_Parms, FarPointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::NewProp_FarPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::NewProp_FarPointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::NewProp_FarPointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Far Cursor" },
		{ "ModuleRelativePath", "Public/Controls/UxtFarCursorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarCursorComponent, nullptr, "OnFarPointerDisabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::UxtFarCursorComponent_eventOnFarPointerDisabled_Parms), Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics
	{
		struct UxtFarCursorComponent_eventOnFarPointerEnabled_Parms
		{
			UUxtFarPointerComponent* FarPointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FarPointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FarPointer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::NewProp_FarPointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::NewProp_FarPointer = { "FarPointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarCursorComponent_eventOnFarPointerEnabled_Parms, FarPointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::NewProp_FarPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::NewProp_FarPointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::NewProp_FarPointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Far Cursor" },
		{ "ModuleRelativePath", "Public/Controls/UxtFarCursorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarCursorComponent, nullptr, "OnFarPointerEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::UxtFarCursorComponent_eventOnFarPointerEnabled_Parms), Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtFarCursorComponent);
	UClass* Z_Construct_UClass_UUxtFarCursorComponent_NoRegister()
	{
		return UUxtFarCursorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtFarCursorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoverDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IdleRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PressedRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtFarCursorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtRingCursorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtFarCursorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled, "OnFarPointerDisabled" }, // 2302903857
		{ &Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled, "OnFarPointerEnabled" }, // 2279236379
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFarCursorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * When added to an actor with a far pointer this component displays a flat ring cursor at the pointer's hit point oriented\n * following the hit normal.\n */" },
		{ "HideCategories", "StaticMesh Materials Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Controls/UxtFarCursorComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtFarCursorComponent.h" },
		{ "ToolTip", "When added to an actor with a far pointer this component displays a flat ring cursor at the pointer's hit point oriented\nfollowing the hit normal." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_HoverDistance_MetaData[] = {
		{ "Category", "Uxt Far Cursor" },
		{ "Comment", "/** Distance over the hit surface to place the cursor at. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtFarCursorComponent.h" },
		{ "ToolTip", "Distance over the hit surface to place the cursor at." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_HoverDistance = { "HoverDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFarCursorComponent, HoverDistance), METADATA_PARAMS(Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_HoverDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_HoverDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_IdleRadius_MetaData[] = {
		{ "Category", "Uxt Far Cursor" },
		{ "Comment", "/**\n\x09 * Cursor radius when idle at 1m from the camera.\n\x09 * The actual radius will scale with the distance to the camera to keep a constant screen size.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Controls/UxtFarCursorComponent.h" },
		{ "ToolTip", "Cursor radius when idle at 1m from the camera.\nThe actual radius will scale with the distance to the camera to keep a constant screen size." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_IdleRadius = { "IdleRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFarCursorComponent, IdleRadius), METADATA_PARAMS(Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_IdleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_IdleRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_PressedRadius_MetaData[] = {
		{ "Category", "Uxt Far Cursor" },
		{ "Comment", "/**\n\x09 * Cursor radius when pressed at 1m from the camera.\n\x09 * The actual radius will scale with the distance to the camera to keep a constant screen size.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Controls/UxtFarCursorComponent.h" },
		{ "ToolTip", "Cursor radius when pressed at 1m from the camera.\nThe actual radius will scale with the distance to the camera to keep a constant screen size." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_PressedRadius = { "PressedRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFarCursorComponent, PressedRadius), METADATA_PARAMS(Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_PressedRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_PressedRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtFarCursorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_HoverDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_IdleRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_PressedRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtFarCursorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtFarCursorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtFarCursorComponent_Statics::ClassParams = {
		&UUxtFarCursorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtFarCursorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFarCursorComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtFarCursorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFarCursorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtFarCursorComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtFarCursorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtFarCursorComponent.OuterSingleton, Z_Construct_UClass_UUxtFarCursorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtFarCursorComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtFarCursorComponent>()
	{
		return UUxtFarCursorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtFarCursorComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtFarCursorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtFarCursorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtFarCursorComponent, UUxtFarCursorComponent::StaticClass, TEXT("UUxtFarCursorComponent"), &Z_Registration_Info_UClass_UUxtFarCursorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtFarCursorComponent), 133265434U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtFarCursorComponent_h_3361597558(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtFarCursorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtFarCursorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
