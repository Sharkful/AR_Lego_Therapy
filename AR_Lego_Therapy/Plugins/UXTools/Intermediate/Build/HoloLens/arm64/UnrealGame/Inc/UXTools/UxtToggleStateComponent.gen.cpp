// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtToggleStateComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtToggleStateComponent() {}
// Cross Module References
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtToggleStateComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtToggleStateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtToggledDelegate_Parms
		{
			UUxtToggleStateComponent* ToggleState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToggleState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::NewProp_ToggleState_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::NewProp_ToggleState = { "ToggleState", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtToggledDelegate_Parms, ToggleState), Z_Construct_UClass_UUxtToggleStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::NewProp_ToggleState_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::NewProp_ToggleState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::NewProp_ToggleState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// Delegates\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleStateComponent.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtToggledDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtToggledDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUxtToggleStateComponent::execIsChecked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChecked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtToggleStateComponent::execSetIsChecked)
	{
		P_GET_UBOOL(Z_Param_IsChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsChecked(Z_Param_IsChecked);
		P_NATIVE_END;
	}
	void UUxtToggleStateComponent::StaticRegisterNativesUUxtToggleStateComponent()
	{
		UClass* Class = UUxtToggleStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsChecked", &UUxtToggleStateComponent::execIsChecked },
			{ "SetIsChecked", &UUxtToggleStateComponent::execSetIsChecked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics
	{
		struct UxtToggleStateComponent_eventIsChecked_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtToggleStateComponent_eventIsChecked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtToggleStateComponent_eventIsChecked_Parms), &Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Toggle State" },
		{ "Comment", "/** Accessor to the checked flag. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleStateComponent.h" },
		{ "ToolTip", "Accessor to the checked flag." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtToggleStateComponent, nullptr, "IsChecked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::UxtToggleStateComponent_eventIsChecked_Parms), Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics
	{
		struct UxtToggleStateComponent_eventSetIsChecked_Parms
		{
			bool IsChecked;
		};
		static void NewProp_IsChecked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsChecked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::NewProp_IsChecked_SetBit(void* Obj)
	{
		((UxtToggleStateComponent_eventSetIsChecked_Parms*)Obj)->IsChecked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::NewProp_IsChecked = { "IsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtToggleStateComponent_eventSetIsChecked_Parms), &Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::NewProp_IsChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::NewProp_IsChecked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Toggle State" },
		{ "Comment", "/** Mutates the checked flag and broadcasts events if the state changes.  */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleStateComponent.h" },
		{ "ToolTip", "Mutates the checked flag and broadcasts events if the state changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtToggleStateComponent, nullptr, "SetIsChecked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::UxtToggleStateComponent_eventSetIsChecked_Parms), Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtToggleStateComponent);
	UClass* Z_Construct_UClass_UUxtToggleStateComponent_NoRegister()
	{
		return UUxtToggleStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtToggleStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnToggled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnToggled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsChecked_MetaData[];
#endif
		static void NewProp_bIsChecked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtToggleStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtToggleStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtToggleStateComponent_IsChecked, "IsChecked" }, // 706181426
		{ &Z_Construct_UFunction_UUxtToggleStateComponent_SetIsChecked, "SetIsChecked" }, // 2106442750
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtToggleStateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Component which holds the state, methods, and delegates responsible for controls with binary states.\n */" },
		{ "HideCategories", "Materials" },
		{ "IncludePath", "Controls/UxtToggleStateComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleStateComponent.h" },
		{ "ToolTip", "Component which holds the state, methods, and delegates responsible for controls with binary states." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_OnToggled_MetaData[] = {
		{ "Category", "Uxt Toggle State" },
		{ "Comment", "/** Event which broadcasts when the checked state changes. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleStateComponent.h" },
		{ "ToolTip", "Event which broadcasts when the checked state changes." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_OnToggled = { "OnToggled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtToggleStateComponent, OnToggled), Z_Construct_UDelegateFunction_UXTools_UxtToggledDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_OnToggled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_OnToggled_MetaData)) }; // 888015873
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_bIsChecked_MetaData[] = {
		{ "BlueprintGetter", "IsChecked" },
		{ "BlueprintSetter", "SetIsChecked" },
		{ "Category", "Uxt Toggle State" },
		{ "Comment", "/** The current toggled state, true if checked, false is not checked. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtToggleStateComponent.h" },
		{ "ToolTip", "The current toggled state, true if checked, false is not checked." },
	};
#endif
	void Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_bIsChecked_SetBit(void* Obj)
	{
		((UUxtToggleStateComponent*)Obj)->bIsChecked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtToggleStateComponent), &Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_bIsChecked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_bIsChecked_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtToggleStateComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_OnToggled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtToggleStateComponent_Statics::NewProp_bIsChecked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtToggleStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtToggleStateComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtToggleStateComponent_Statics::ClassParams = {
		&UUxtToggleStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtToggleStateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtToggleStateComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtToggleStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtToggleStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtToggleStateComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtToggleStateComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtToggleStateComponent.OuterSingleton, Z_Construct_UClass_UUxtToggleStateComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtToggleStateComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtToggleStateComponent>()
	{
		return UUxtToggleStateComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtToggleStateComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtToggleStateComponent, UUxtToggleStateComponent::StaticClass, TEXT("UUxtToggleStateComponent"), &Z_Registration_Info_UClass_UUxtToggleStateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtToggleStateComponent), 2241650363U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_3692012539(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtToggleStateComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
