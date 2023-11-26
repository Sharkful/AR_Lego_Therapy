// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtUIElementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtUIElementComponent() {}
// Cross Module References
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtUIElementVisibility();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtUIElementComponent_NoRegister();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtUIElementComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUxtUIElementVisibility;
	static UEnum* EUxtUIElementVisibility_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUxtUIElementVisibility.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUxtUIElementVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtUIElementVisibility, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtUIElementVisibility"));
		}
		return Z_Registration_Info_UEnum_EUxtUIElementVisibility.OuterSingleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtUIElementVisibility>()
	{
		return EUxtUIElementVisibility_StaticEnum();
	}
	struct Z_Construct_UEnum_UXTools_EUxtUIElementVisibility_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UXTools_EUxtUIElementVisibility_Statics::Enumerators[] = {
		{ "EUxtUIElementVisibility::Show", (int64)EUxtUIElementVisibility::Show },
		{ "EUxtUIElementVisibility::Hide", (int64)EUxtUIElementVisibility::Hide },
		{ "EUxtUIElementVisibility::LayoutOnly", (int64)EUxtUIElementVisibility::LayoutOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UXTools_EUxtUIElementVisibility_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Hide.Comment", "/** The element is hidden */" },
		{ "Hide.Name", "EUxtUIElementVisibility::Hide" },
		{ "Hide.ToolTip", "The element is hidden" },
		{ "LayoutOnly.Comment", "/** The element is hidden but should affect layout */" },
		{ "LayoutOnly.Name", "EUxtUIElementVisibility::LayoutOnly" },
		{ "LayoutOnly.ToolTip", "The element is hidden but should affect layout" },
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
		{ "Show.Comment", "/** The element is shown */" },
		{ "Show.Name", "EUxtUIElementVisibility::Show" },
		{ "Show.ToolTip", "The element is shown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UXTools_EUxtUIElementVisibility_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		"EUxtUIElementVisibility",
		"EUxtUIElementVisibility",
		Z_Construct_UEnum_UXTools_EUxtUIElementVisibility_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtUIElementVisibility_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UXTools_EUxtUIElementVisibility_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtUIElementVisibility_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UXTools_EUxtUIElementVisibility()
	{
		if (!Z_Registration_Info_UEnum_EUxtUIElementVisibility.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUxtUIElementVisibility.InnerSingleton, Z_Construct_UEnum_UXTools_EUxtUIElementVisibility_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUxtUIElementVisibility.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtUIElementShowDelegate_Parms
		{
			UUxtUIElementComponent* UIElement;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UIElement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::NewProp_UIElement_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::NewProp_UIElement = { "UIElement", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtUIElementShowDelegate_Parms, UIElement), Z_Construct_UClass_UUxtUIElementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::NewProp_UIElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::NewProp_UIElement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::NewProp_UIElement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtUIElementShowDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtUIElementShowDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtUIElementHideDelegate_Parms
		{
			UUxtUIElementComponent* UIElement;
			bool bShouldAffectLayout;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UIElement;
		static void NewProp_bShouldAffectLayout_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAffectLayout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::NewProp_UIElement_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::NewProp_UIElement = { "UIElement", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtUIElementHideDelegate_Parms, UIElement), Z_Construct_UClass_UUxtUIElementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::NewProp_UIElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::NewProp_UIElement_MetaData)) };
	void Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::NewProp_bShouldAffectLayout_SetBit(void* Obj)
	{
		((_Script_UXTools_eventUxtUIElementHideDelegate_Parms*)Obj)->bShouldAffectLayout = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::NewProp_bShouldAffectLayout = { "bShouldAffectLayout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_UXTools_eventUxtUIElementHideDelegate_Parms), &Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::NewProp_bShouldAffectLayout_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::NewProp_UIElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::NewProp_bShouldAffectLayout,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtUIElementHideDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtUIElementHideDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUxtUIElementComponent::execRefreshUIElement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshUIElement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtUIElementComponent::execSetUIVisibility)
	{
		P_GET_ENUM(EUxtUIElementVisibility,Z_Param_NewVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUIVisibility(EUxtUIElementVisibility(Z_Param_NewVisibility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtUIElementComponent::execGetUIVisibilityInHierarchy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUxtUIElementVisibility*)Z_Param__Result=P_THIS->GetUIVisibilityInHierarchy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtUIElementComponent::execGetUIVisibilitySelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUxtUIElementVisibility*)Z_Param__Result=P_THIS->GetUIVisibilitySelf();
		P_NATIVE_END;
	}
	void UUxtUIElementComponent::StaticRegisterNativesUUxtUIElementComponent()
	{
		UClass* Class = UUxtUIElementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUIVisibilityInHierarchy", &UUxtUIElementComponent::execGetUIVisibilityInHierarchy },
			{ "GetUIVisibilitySelf", &UUxtUIElementComponent::execGetUIVisibilitySelf },
			{ "RefreshUIElement", &UUxtUIElementComponent::execRefreshUIElement },
			{ "SetUIVisibility", &UUxtUIElementComponent::execSetUIVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics
	{
		struct UxtUIElementComponent_eventGetUIVisibilityInHierarchy_Parms
		{
			EUxtUIElementVisibility ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtUIElementComponent_eventGetUIVisibilityInHierarchy_Parms, ReturnValue), Z_Construct_UEnum_UXTools_EUxtUIElementVisibility, METADATA_PARAMS(nullptr, 0) }; // 1390507552
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt UI Element" },
		{ "Comment", "/** Get the element's visibility in the scene. */" },
		{ "DisplayName", "Get UI Visibility in Hierarchy" },
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
		{ "ToolTip", "Get the element's visibility in the scene." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtUIElementComponent, nullptr, "GetUIVisibilityInHierarchy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::UxtUIElementComponent_eventGetUIVisibilityInHierarchy_Parms), Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics
	{
		struct UxtUIElementComponent_eventGetUIVisibilitySelf_Parms
		{
			EUxtUIElementVisibility ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtUIElementComponent_eventGetUIVisibilitySelf_Parms, ReturnValue), Z_Construct_UEnum_UXTools_EUxtUIElementVisibility, METADATA_PARAMS(nullptr, 0) }; // 1390507552
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt UI Element" },
		{ "Comment", "/** Get the element's visibility. This does not reflect if the element is visible in the scene. */" },
		{ "DisplayName", "Get UI Visibility Self" },
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
		{ "ToolTip", "Get the element's visibility. This does not reflect if the element is visible in the scene." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtUIElementComponent, nullptr, "GetUIVisibilitySelf", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::UxtUIElementComponent_eventGetUIVisibilitySelf_Parms), Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtUIElementComponent_RefreshUIElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtUIElementComponent_RefreshUIElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt UI Element" },
		{ "Comment", "/** Refresh the element's visibility. This is only necessary after changing the element's parent actor when this is not the root\n\x09 * component of the actor. */" },
		{ "DisplayName", "Refresh UI Element" },
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
		{ "ToolTip", "Refresh the element's visibility. This is only necessary after changing the element's parent actor when this is not the root\ncomponent of the actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtUIElementComponent_RefreshUIElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtUIElementComponent, nullptr, "RefreshUIElement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtUIElementComponent_RefreshUIElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtUIElementComponent_RefreshUIElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtUIElementComponent_RefreshUIElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtUIElementComponent_RefreshUIElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics
	{
		struct UxtUIElementComponent_eventSetUIVisibility_Parms
		{
			EUxtUIElementVisibility NewVisibility;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewVisibility_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::NewProp_NewVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::NewProp_NewVisibility = { "NewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtUIElementComponent_eventSetUIVisibility_Parms, NewVisibility), Z_Construct_UEnum_UXTools_EUxtUIElementVisibility, METADATA_PARAMS(nullptr, 0) }; // 1390507552
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::NewProp_NewVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::NewProp_NewVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt UI Element" },
		{ "Comment", "/** Set the element's visibility. The element will not be visible in the scene if it's parent is hidden. */" },
		{ "DisplayName", "Set UI Visibility" },
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
		{ "ToolTip", "Set the element's visibility. The element will not be visible in the scene if it's parent is hidden." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtUIElementComponent, nullptr, "SetUIVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::UxtUIElementComponent_eventSetUIVisibility_Parms), Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtUIElementComponent);
	UClass* Z_Construct_UClass_UUxtUIElementComponent_NoRegister()
	{
		return UUxtUIElementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtUIElementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnShowElement_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShowElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHideElement_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHideElement;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtUIElementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtUIElementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilityInHierarchy, "GetUIVisibilityInHierarchy" }, // 4244393561
		{ &Z_Construct_UFunction_UUxtUIElementComponent_GetUIVisibilitySelf, "GetUIVisibilitySelf" }, // 3900137141
		{ &Z_Construct_UFunction_UUxtUIElementComponent_RefreshUIElement, "RefreshUIElement" }, // 2338507653
		{ &Z_Construct_UFunction_UUxtUIElementComponent_SetUIVisibility, "SetUIVisibility" }, // 794699793
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtUIElementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Controls visibility of a UI element in the scene.\n *\n * Parent-child relationships are managed via actor attachments. If the parent is hidden, all of its children will be hidden.\n * It is recommended to have the UxtUIElementComponent as the root component as the actor as this allows it to automatically update\n * if the actor is attached to a new parent actor. If it is not the root component, RefreshUIElement() will need to be called manually\n * after attaching a new parent actor.\n *\n * Note: Manually changing actor visibility will not affect child UI elements and may lead to unwanted behavior.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Controls/UxtUIElementComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
		{ "ToolTip", "Controls visibility of a UI element in the scene.\n\nParent-child relationships are managed via actor attachments. If the parent is hidden, all of its children will be hidden.\nIt is recommended to have the UxtUIElementComponent as the root component as the actor as this allows it to automatically update\nif the actor is attached to a new parent actor. If it is not the root component, RefreshUIElement() will need to be called manually\nafter attaching a new parent actor.\n\nNote: Manually changing actor visibility will not affect child UI elements and may lead to unwanted behavior." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnShowElement_MetaData[] = {
		{ "Category", "Uxt UI Element" },
		{ "Comment", "/** Event raised when the element is shown. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
		{ "ToolTip", "Event raised when the element is shown." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnShowElement = { "OnShowElement", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtUIElementComponent, OnShowElement), Z_Construct_UDelegateFunction_UXTools_UxtUIElementShowDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnShowElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnShowElement_MetaData)) }; // 1202951612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnHideElement_MetaData[] = {
		{ "Category", "Uxt UI Element" },
		{ "Comment", "/** Event raised when the element is hidden. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
		{ "ToolTip", "Event raised when the element is hidden." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnHideElement = { "OnHideElement", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtUIElementComponent, OnHideElement), Z_Construct_UDelegateFunction_UXTools_UxtUIElementHideDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnHideElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnHideElement_MetaData)) }; // 3562740715
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_Visibility_MetaData[] = {
		{ "Category", "Uxt UI Element" },
		{ "Comment", "/** The element's visibility. */" },
		{ "DisplayName", "UI Visibility" },
		{ "ModuleRelativePath", "Public/Controls/UxtUIElementComponent.h" },
		{ "ToolTip", "The element's visibility." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtUIElementComponent, Visibility), Z_Construct_UEnum_UXTools_EUxtUIElementVisibility, METADATA_PARAMS(Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_Visibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_Visibility_MetaData)) }; // 1390507552
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtUIElementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnShowElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_OnHideElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_Visibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtUIElementComponent_Statics::NewProp_Visibility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtUIElementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtUIElementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtUIElementComponent_Statics::ClassParams = {
		&UUxtUIElementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtUIElementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtUIElementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtUIElementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtUIElementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtUIElementComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtUIElementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtUIElementComponent.OuterSingleton, Z_Construct_UClass_UUxtUIElementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtUIElementComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtUIElementComponent>()
	{
		return UUxtUIElementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtUIElementComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_Statics::EnumInfo[] = {
		{ EUxtUIElementVisibility_StaticEnum, TEXT("EUxtUIElementVisibility"), &Z_Registration_Info_UEnum_EUxtUIElementVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1390507552U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtUIElementComponent, UUxtUIElementComponent::StaticClass, TEXT("UUxtUIElementComponent"), &Z_Registration_Info_UClass_UUxtUIElementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtUIElementComponent), 79083038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_2208796862(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtUIElementComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
