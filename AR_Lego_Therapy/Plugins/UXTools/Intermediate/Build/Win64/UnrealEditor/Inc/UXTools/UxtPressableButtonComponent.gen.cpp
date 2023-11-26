// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtPressableButtonComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtPressableButtonComponent() {}
// Cross Module References
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtPushBehavior();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtButtonState();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPointerComponent_NoRegister();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtNearPointerComponent_NoRegister();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonEnabledDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonDisabledDelegate__DelegateSignature();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPressableButtonComponent();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtUIElementComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPokeTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPokeHandler_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarHandler_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtCollectionObject_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUxtPushBehavior;
	static UEnum* EUxtPushBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUxtPushBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUxtPushBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtPushBehavior, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtPushBehavior"));
		}
		return Z_Registration_Info_UEnum_EUxtPushBehavior.OuterSingleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtPushBehavior>()
	{
		return EUxtPushBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_UXTools_EUxtPushBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UXTools_EUxtPushBehavior_Statics::Enumerators[] = {
		{ "EUxtPushBehavior::Translate", (int64)EUxtPushBehavior::Translate },
		{ "EUxtPushBehavior::Compress", (int64)EUxtPushBehavior::Compress },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UXTools_EUxtPushBehavior_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Compress.Comment", "/** When pushed the button visuals compress (scale) */" },
		{ "Compress.Name", "EUxtPushBehavior::Compress" },
		{ "Compress.ToolTip", "When pushed the button visuals compress (scale)" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "Translate.Comment", "/** When pushed the button visuals translate */" },
		{ "Translate.Name", "EUxtPushBehavior::Translate" },
		{ "Translate.ToolTip", "When pushed the button visuals translate" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UXTools_EUxtPushBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		"EUxtPushBehavior",
		"EUxtPushBehavior",
		Z_Construct_UEnum_UXTools_EUxtPushBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtPushBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UXTools_EUxtPushBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtPushBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UXTools_EUxtPushBehavior()
	{
		if (!Z_Registration_Info_UEnum_EUxtPushBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUxtPushBehavior.InnerSingleton, Z_Construct_UEnum_UXTools_EUxtPushBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUxtPushBehavior.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUxtButtonState;
	static UEnum* EUxtButtonState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUxtButtonState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUxtButtonState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtButtonState, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtButtonState"));
		}
		return Z_Registration_Info_UEnum_EUxtButtonState.OuterSingleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtButtonState>()
	{
		return EUxtButtonState_StaticEnum();
	}
	struct Z_Construct_UEnum_UXTools_EUxtButtonState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UXTools_EUxtButtonState_Statics::Enumerators[] = {
		{ "EUxtButtonState::Default", (int64)EUxtButtonState::Default },
		{ "EUxtButtonState::Disabled", (int64)EUxtButtonState::Disabled },
		{ "EUxtButtonState::Focused", (int64)EUxtButtonState::Focused },
		{ "EUxtButtonState::Contacted", (int64)EUxtButtonState::Contacted },
		{ "EUxtButtonState::Pressed", (int64)EUxtButtonState::Pressed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UXTools_EUxtButtonState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Contacted.Comment", "/** Button is contacted */" },
		{ "Contacted.Name", "EUxtButtonState::Contacted" },
		{ "Contacted.ToolTip", "Button is contacted" },
		{ "Default.Comment", "/** Default state, not pressed or disabled */" },
		{ "Default.Name", "EUxtButtonState::Default" },
		{ "Default.ToolTip", "Default state, not pressed or disabled" },
		{ "Disabled.Comment", "/** Button is disabled */" },
		{ "Disabled.Name", "EUxtButtonState::Disabled" },
		{ "Disabled.ToolTip", "Button is disabled" },
		{ "Focused.Comment", "/** Button is focused */" },
		{ "Focused.Name", "EUxtButtonState::Focused" },
		{ "Focused.ToolTip", "Button is focused" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "Pressed.Comment", "/** Button is pressed */" },
		{ "Pressed.Name", "EUxtButtonState::Pressed" },
		{ "Pressed.ToolTip", "Button is pressed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UXTools_EUxtButtonState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		"EUxtButtonState",
		"EUxtButtonState",
		Z_Construct_UEnum_UXTools_EUxtButtonState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtButtonState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UXTools_EUxtButtonState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtButtonState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UXTools_EUxtButtonState()
	{
		if (!Z_Registration_Info_UEnum_EUxtButtonState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUxtButtonState.InnerSingleton, Z_Construct_UEnum_UXTools_EUxtButtonState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUxtButtonState.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtButtonBeginFocusDelegate_Parms
		{
			UUxtPressableButtonComponent* Button;
			UUxtPointerComponent* Pointer;
			bool bWasAlreadyFocused;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static void NewProp_bWasAlreadyFocused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasAlreadyFocused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtButtonBeginFocusDelegate_Parms, Button), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::NewProp_Button_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtButtonBeginFocusDelegate_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	void Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::NewProp_bWasAlreadyFocused_SetBit(void* Obj)
	{
		((_Script_UXTools_eventUxtButtonBeginFocusDelegate_Parms*)Obj)->bWasAlreadyFocused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::NewProp_bWasAlreadyFocused = { "bWasAlreadyFocused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_UXTools_eventUxtButtonBeginFocusDelegate_Parms), &Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::NewProp_bWasAlreadyFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::NewProp_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::NewProp_bWasAlreadyFocused,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// Delegates\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtButtonBeginFocusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtButtonBeginFocusDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtButtonUpdateFocusDelegate_Parms
		{
			UUxtPressableButtonComponent* Button;
			UUxtPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtButtonUpdateFocusDelegate_Parms, Button), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Button_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtButtonUpdateFocusDelegate_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtButtonUpdateFocusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtButtonUpdateFocusDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtButtonEndFocusDelegate_Parms
		{
			UUxtPressableButtonComponent* Button;
			UUxtPointerComponent* Pointer;
			bool bIsStillFocused;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static void NewProp_bIsStillFocused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStillFocused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtButtonEndFocusDelegate_Parms, Button), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::NewProp_Button_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtButtonEndFocusDelegate_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	void Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::NewProp_bIsStillFocused_SetBit(void* Obj)
	{
		((_Script_UXTools_eventUxtButtonEndFocusDelegate_Parms*)Obj)->bIsStillFocused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::NewProp_bIsStillFocused = { "bIsStillFocused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_UXTools_eventUxtButtonEndFocusDelegate_Parms), &Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::NewProp_bIsStillFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::NewProp_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::NewProp_bIsStillFocused,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtButtonEndFocusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtButtonEndFocusDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtButtonBeginPokeDelegate_Parms
		{
			UUxtPressableButtonComponent* Button;
			UUxtNearPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtButtonBeginPokeDelegate_Parms, Button), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::NewProp_Button_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtButtonBeginPokeDelegate_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::NewProp_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtButtonBeginPokeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtButtonBeginPokeDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtButtonUpdatePokeDelegate_Parms
		{
			UUxtPressableButtonComponent* Button;
			UUxtNearPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtButtonUpdatePokeDelegate_Parms, Button), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Button_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtButtonUpdatePokeDelegate_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtButtonUpdatePokeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtButtonUpdatePokeDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtButtonEndPokeDelegate_Parms
		{
			UUxtPressableButtonComponent* Button;
			UUxtNearPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtButtonEndPokeDelegate_Parms, Button), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::NewProp_Button_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtButtonEndPokeDelegate_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::NewProp_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtButtonEndPokeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtButtonEndPokeDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtButtonPressedDelegate_Parms
		{
			UUxtPressableButtonComponent* Button;
			UUxtPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtButtonPressedDelegate_Parms, Button), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::NewProp_Button_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtButtonPressedDelegate_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::NewProp_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtButtonPressedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtButtonPressedDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtButtonReleasedDelegate_Parms
		{
			UUxtPressableButtonComponent* Button;
			UUxtPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtButtonReleasedDelegate_Parms, Button), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::NewProp_Button_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtButtonReleasedDelegate_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::NewProp_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtButtonReleasedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtButtonReleasedDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtButtonEnabledDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtButtonEnabledDelegate_Parms
		{
			UUxtPressableButtonComponent* Button;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonEnabledDelegate__DelegateSignature_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonEnabledDelegate__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtButtonEnabledDelegate_Parms, Button), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonEnabledDelegate__DelegateSignature_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonEnabledDelegate__DelegateSignature_Statics::NewProp_Button_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtButtonEnabledDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonEnabledDelegate__DelegateSignature_Statics::NewProp_Button,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonEnabledDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtButtonEnabledDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtButtonEnabledDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtButtonEnabledDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtButtonEnabledDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtButtonEnabledDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonEnabledDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonEnabledDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonEnabledDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonEnabledDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtButtonEnabledDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtButtonDisabledDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtButtonDisabledDelegate_Parms
		{
			UUxtPressableButtonComponent* Button;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonDisabledDelegate__DelegateSignature_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtButtonDisabledDelegate__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtButtonDisabledDelegate_Parms, Button), Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonDisabledDelegate__DelegateSignature_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonDisabledDelegate__DelegateSignature_Statics::NewProp_Button_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtButtonDisabledDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtButtonDisabledDelegate__DelegateSignature_Statics::NewProp_Button,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtButtonDisabledDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtButtonDisabledDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtButtonDisabledDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtButtonDisabledDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtButtonDisabledDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtButtonDisabledDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonDisabledDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtButtonDisabledDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtButtonDisabledDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtButtonDisabledDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtButtonDisabledDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUxtPressableButtonComponent::execSetMaxPushDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxPushDistance(Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPressableButtonComponent::execGetMaxPushDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxPushDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPressableButtonComponent::execSetPushBehavior)
	{
		P_GET_ENUM(EUxtPushBehavior,Z_Param_Behavior);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPushBehavior(EUxtPushBehavior(Z_Param_Behavior));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPressableButtonComponent::execGetPushBehavior)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUxtPushBehavior*)Z_Param__Result=P_THIS->GetPushBehavior();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPressableButtonComponent::execGetScaleAdjustedMaxPushDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScaleAdjustedMaxPushDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPressableButtonComponent::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUxtButtonState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPressableButtonComponent::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_Enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_Enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPressableButtonComponent::execSetUseAbsolutePushDistance)
	{
		P_GET_UBOOL(Z_Param_bAbsolute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseAbsolutePushDistance(Z_Param_bAbsolute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPressableButtonComponent::execSetCollisionProfile)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionProfile(Z_Param_Profile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPressableButtonComponent::execSetVisuals)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Visuals);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisuals(Z_Param_Visuals);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPressableButtonComponent::execGetVisuals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetVisuals();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPressableButtonComponent::execSetFrontFaceCollisionFraction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrontFaceCollisionFraction(Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPressableButtonComponent::execGetFrontFaceCollisionFraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFrontFaceCollisionFraction();
		P_NATIVE_END;
	}
	void UUxtPressableButtonComponent::StaticRegisterNativesUUxtPressableButtonComponent()
	{
		UClass* Class = UUxtPressableButtonComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFrontFaceCollisionFraction", &UUxtPressableButtonComponent::execGetFrontFaceCollisionFraction },
			{ "GetMaxPushDistance", &UUxtPressableButtonComponent::execGetMaxPushDistance },
			{ "GetPushBehavior", &UUxtPressableButtonComponent::execGetPushBehavior },
			{ "GetScaleAdjustedMaxPushDistance", &UUxtPressableButtonComponent::execGetScaleAdjustedMaxPushDistance },
			{ "GetState", &UUxtPressableButtonComponent::execGetState },
			{ "GetVisuals", &UUxtPressableButtonComponent::execGetVisuals },
			{ "SetCollisionProfile", &UUxtPressableButtonComponent::execSetCollisionProfile },
			{ "SetEnabled", &UUxtPressableButtonComponent::execSetEnabled },
			{ "SetFrontFaceCollisionFraction", &UUxtPressableButtonComponent::execSetFrontFaceCollisionFraction },
			{ "SetMaxPushDistance", &UUxtPressableButtonComponent::execSetMaxPushDistance },
			{ "SetPushBehavior", &UUxtPressableButtonComponent::execSetPushBehavior },
			{ "SetUseAbsolutePushDistance", &UUxtPressableButtonComponent::execSetUseAbsolutePushDistance },
			{ "SetVisuals", &UUxtPressableButtonComponent::execSetVisuals },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtPressableButtonComponent_GetFrontFaceCollisionFraction_Statics
	{
		struct UxtPressableButtonComponent_eventGetFrontFaceCollisionFraction_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtPressableButtonComponent_GetFrontFaceCollisionFraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonComponent_eventGetFrontFaceCollisionFraction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPressableButtonComponent_GetFrontFaceCollisionFraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPressableButtonComponent_GetFrontFaceCollisionFraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPressableButtonComponent_GetFrontFaceCollisionFraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Get the distance from the visuals front face to the collider front face. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Get the distance from the visuals front face to the collider front face." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPressableButtonComponent_GetFrontFaceCollisionFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPressableButtonComponent, nullptr, "GetFrontFaceCollisionFraction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPressableButtonComponent_GetFrontFaceCollisionFraction_Statics::UxtPressableButtonComponent_eventGetFrontFaceCollisionFraction_Parms), Z_Construct_UFunction_UUxtPressableButtonComponent_GetFrontFaceCollisionFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_GetFrontFaceCollisionFraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPressableButtonComponent_GetFrontFaceCollisionFraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_GetFrontFaceCollisionFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPressableButtonComponent_GetFrontFaceCollisionFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPressableButtonComponent_GetFrontFaceCollisionFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPressableButtonComponent_GetMaxPushDistance_Statics
	{
		struct UxtPressableButtonComponent_eventGetMaxPushDistance_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtPressableButtonComponent_GetMaxPushDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonComponent_eventGetMaxPushDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPressableButtonComponent_GetMaxPushDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPressableButtonComponent_GetMaxPushDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPressableButtonComponent_GetMaxPushDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Gets the maximum distance the button can be pushed */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Gets the maximum distance the button can be pushed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPressableButtonComponent_GetMaxPushDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPressableButtonComponent, nullptr, "GetMaxPushDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPressableButtonComponent_GetMaxPushDistance_Statics::UxtPressableButtonComponent_eventGetMaxPushDistance_Parms), Z_Construct_UFunction_UUxtPressableButtonComponent_GetMaxPushDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_GetMaxPushDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPressableButtonComponent_GetMaxPushDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_GetMaxPushDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPressableButtonComponent_GetMaxPushDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPressableButtonComponent_GetMaxPushDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPressableButtonComponent_GetPushBehavior_Statics
	{
		struct UxtPressableButtonComponent_eventGetPushBehavior_Parms
		{
			EUxtPushBehavior ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtPressableButtonComponent_GetPushBehavior_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtPressableButtonComponent_GetPushBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonComponent_eventGetPushBehavior_Parms, ReturnValue), Z_Construct_UEnum_UXTools_EUxtPushBehavior, METADATA_PARAMS(nullptr, 0) }; // 3295874907
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPressableButtonComponent_GetPushBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPressableButtonComponent_GetPushBehavior_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPressableButtonComponent_GetPushBehavior_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPressableButtonComponent_GetPushBehavior_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Gets the button behavior when pushed */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Gets the button behavior when pushed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPressableButtonComponent_GetPushBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPressableButtonComponent, nullptr, "GetPushBehavior", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPressableButtonComponent_GetPushBehavior_Statics::UxtPressableButtonComponent_eventGetPushBehavior_Parms), Z_Construct_UFunction_UUxtPressableButtonComponent_GetPushBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_GetPushBehavior_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPressableButtonComponent_GetPushBehavior_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_GetPushBehavior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPressableButtonComponent_GetPushBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPressableButtonComponent_GetPushBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPressableButtonComponent_GetScaleAdjustedMaxPushDistance_Statics
	{
		struct UxtPressableButtonComponent_eventGetScaleAdjustedMaxPushDistance_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtPressableButtonComponent_GetScaleAdjustedMaxPushDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonComponent_eventGetScaleAdjustedMaxPushDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPressableButtonComponent_GetScaleAdjustedMaxPushDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPressableButtonComponent_GetScaleAdjustedMaxPushDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPressableButtonComponent_GetScaleAdjustedMaxPushDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Gets the maximum distance the button can be pushed scaled by the transform's 'x' scale.*/" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Gets the maximum distance the button can be pushed scaled by the transform's 'x' scale." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPressableButtonComponent_GetScaleAdjustedMaxPushDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPressableButtonComponent, nullptr, "GetScaleAdjustedMaxPushDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPressableButtonComponent_GetScaleAdjustedMaxPushDistance_Statics::UxtPressableButtonComponent_eventGetScaleAdjustedMaxPushDistance_Parms), Z_Construct_UFunction_UUxtPressableButtonComponent_GetScaleAdjustedMaxPushDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_GetScaleAdjustedMaxPushDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPressableButtonComponent_GetScaleAdjustedMaxPushDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_GetScaleAdjustedMaxPushDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPressableButtonComponent_GetScaleAdjustedMaxPushDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPressableButtonComponent_GetScaleAdjustedMaxPushDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPressableButtonComponent_GetState_Statics
	{
		struct UxtPressableButtonComponent_eventGetState_Parms
		{
			EUxtButtonState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtPressableButtonComponent_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtPressableButtonComponent_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonComponent_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_UXTools_EUxtButtonState, METADATA_PARAMS(nullptr, 0) }; // 2868781936
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPressableButtonComponent_GetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPressableButtonComponent_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPressableButtonComponent_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPressableButtonComponent_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Get the current state of the button */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Get the current state of the button" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPressableButtonComponent_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPressableButtonComponent, nullptr, "GetState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPressableButtonComponent_GetState_Statics::UxtPressableButtonComponent_eventGetState_Parms), Z_Construct_UFunction_UUxtPressableButtonComponent_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPressableButtonComponent_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPressableButtonComponent_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPressableButtonComponent_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPressableButtonComponent_GetVisuals_Statics
	{
		struct UxtPressableButtonComponent_eventGetVisuals_Parms
		{
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPressableButtonComponent_GetVisuals_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPressableButtonComponent_GetVisuals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonComponent_eventGetVisuals_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPressableButtonComponent_GetVisuals_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_GetVisuals_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPressableButtonComponent_GetVisuals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPressableButtonComponent_GetVisuals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPressableButtonComponent_GetVisuals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Get scene component used for the moving visuals */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Get scene component used for the moving visuals" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPressableButtonComponent_GetVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPressableButtonComponent, nullptr, "GetVisuals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPressableButtonComponent_GetVisuals_Statics::UxtPressableButtonComponent_eventGetVisuals_Parms), Z_Construct_UFunction_UUxtPressableButtonComponent_GetVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_GetVisuals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPressableButtonComponent_GetVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_GetVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPressableButtonComponent_GetVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPressableButtonComponent_GetVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPressableButtonComponent_SetCollisionProfile_Statics
	{
		struct UxtPressableButtonComponent_eventSetCollisionProfile_Parms
		{
			FName Profile;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Profile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUxtPressableButtonComponent_SetCollisionProfile_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonComponent_eventSetCollisionProfile_Parms, Profile), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPressableButtonComponent_SetCollisionProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPressableButtonComponent_SetCollisionProfile_Statics::NewProp_Profile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPressableButtonComponent_SetCollisionProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Set collision profile used by the button collider */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Set collision profile used by the button collider" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPressableButtonComponent_SetCollisionProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPressableButtonComponent, nullptr, "SetCollisionProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPressableButtonComponent_SetCollisionProfile_Statics::UxtPressableButtonComponent_eventSetCollisionProfile_Parms), Z_Construct_UFunction_UUxtPressableButtonComponent_SetCollisionProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_SetCollisionProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPressableButtonComponent_SetCollisionProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_SetCollisionProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPressableButtonComponent_SetCollisionProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPressableButtonComponent_SetCollisionProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPressableButtonComponent_SetEnabled_Statics
	{
		struct UxtPressableButtonComponent_eventSetEnabled_Parms
		{
			bool Enabled;
		};
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtPressableButtonComponent_SetEnabled_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((UxtPressableButtonComponent_eventSetEnabled_Parms*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtPressableButtonComponent_SetEnabled_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPressableButtonComponent_eventSetEnabled_Parms), &Z_Construct_UFunction_UUxtPressableButtonComponent_SetEnabled_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPressableButtonComponent_SetEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPressableButtonComponent_SetEnabled_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPressableButtonComponent_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Set if the button is enabled */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Set if the button is enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPressableButtonComponent_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPressableButtonComponent, nullptr, "SetEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPressableButtonComponent_SetEnabled_Statics::UxtPressableButtonComponent_eventSetEnabled_Parms), Z_Construct_UFunction_UUxtPressableButtonComponent_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPressableButtonComponent_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPressableButtonComponent_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPressableButtonComponent_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPressableButtonComponent_SetFrontFaceCollisionFraction_Statics
	{
		struct UxtPressableButtonComponent_eventSetFrontFaceCollisionFraction_Parms
		{
			float Distance;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtPressableButtonComponent_SetFrontFaceCollisionFraction_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonComponent_eventSetFrontFaceCollisionFraction_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPressableButtonComponent_SetFrontFaceCollisionFraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPressableButtonComponent_SetFrontFaceCollisionFraction_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPressableButtonComponent_SetFrontFaceCollisionFraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Set the distance from the visuals front face to the collider front face. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Set the distance from the visuals front face to the collider front face." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPressableButtonComponent_SetFrontFaceCollisionFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPressableButtonComponent, nullptr, "SetFrontFaceCollisionFraction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPressableButtonComponent_SetFrontFaceCollisionFraction_Statics::UxtPressableButtonComponent_eventSetFrontFaceCollisionFraction_Parms), Z_Construct_UFunction_UUxtPressableButtonComponent_SetFrontFaceCollisionFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_SetFrontFaceCollisionFraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPressableButtonComponent_SetFrontFaceCollisionFraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_SetFrontFaceCollisionFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPressableButtonComponent_SetFrontFaceCollisionFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPressableButtonComponent_SetFrontFaceCollisionFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPressableButtonComponent_SetMaxPushDistance_Statics
	{
		struct UxtPressableButtonComponent_eventSetMaxPushDistance_Parms
		{
			float Distance;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtPressableButtonComponent_SetMaxPushDistance_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonComponent_eventSetMaxPushDistance_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPressableButtonComponent_SetMaxPushDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPressableButtonComponent_SetMaxPushDistance_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPressableButtonComponent_SetMaxPushDistance_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Sets the maximum distance the button can be pushed, does nothing when the push behavior is set to compress because the maximum\n\x09 * distance is auto calculated */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Sets the maximum distance the button can be pushed, does nothing when the push behavior is set to compress because the maximum\ndistance is auto calculated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPressableButtonComponent_SetMaxPushDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPressableButtonComponent, nullptr, "SetMaxPushDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPressableButtonComponent_SetMaxPushDistance_Statics::UxtPressableButtonComponent_eventSetMaxPushDistance_Parms), Z_Construct_UFunction_UUxtPressableButtonComponent_SetMaxPushDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_SetMaxPushDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPressableButtonComponent_SetMaxPushDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_SetMaxPushDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPressableButtonComponent_SetMaxPushDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPressableButtonComponent_SetMaxPushDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPressableButtonComponent_SetPushBehavior_Statics
	{
		struct UxtPressableButtonComponent_eventSetPushBehavior_Parms
		{
			EUxtPushBehavior Behavior;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Behavior_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Behavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtPressableButtonComponent_SetPushBehavior_Statics::NewProp_Behavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtPressableButtonComponent_SetPushBehavior_Statics::NewProp_Behavior = { "Behavior", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonComponent_eventSetPushBehavior_Parms, Behavior), Z_Construct_UEnum_UXTools_EUxtPushBehavior, METADATA_PARAMS(nullptr, 0) }; // 3295874907
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPressableButtonComponent_SetPushBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPressableButtonComponent_SetPushBehavior_Statics::NewProp_Behavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPressableButtonComponent_SetPushBehavior_Statics::NewProp_Behavior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPressableButtonComponent_SetPushBehavior_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Sets the button behavior when pushed */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Sets the button behavior when pushed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPressableButtonComponent_SetPushBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPressableButtonComponent, nullptr, "SetPushBehavior", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPressableButtonComponent_SetPushBehavior_Statics::UxtPressableButtonComponent_eventSetPushBehavior_Parms), Z_Construct_UFunction_UUxtPressableButtonComponent_SetPushBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_SetPushBehavior_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPressableButtonComponent_SetPushBehavior_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_SetPushBehavior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPressableButtonComponent_SetPushBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPressableButtonComponent_SetPushBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPressableButtonComponent_SetUseAbsolutePushDistance_Statics
	{
		struct UxtPressableButtonComponent_eventSetUseAbsolutePushDistance_Parms
		{
			bool bAbsolute;
		};
		static void NewProp_bAbsolute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsolute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtPressableButtonComponent_SetUseAbsolutePushDistance_Statics::NewProp_bAbsolute_SetBit(void* Obj)
	{
		((UxtPressableButtonComponent_eventSetUseAbsolutePushDistance_Parms*)Obj)->bAbsolute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtPressableButtonComponent_SetUseAbsolutePushDistance_Statics::NewProp_bAbsolute = { "bAbsolute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPressableButtonComponent_eventSetUseAbsolutePushDistance_Parms), &Z_Construct_UFunction_UUxtPressableButtonComponent_SetUseAbsolutePushDistance_Statics::NewProp_bAbsolute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPressableButtonComponent_SetUseAbsolutePushDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPressableButtonComponent_SetUseAbsolutePushDistance_Statics::NewProp_bAbsolute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPressableButtonComponent_SetUseAbsolutePushDistance_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Switch between world and local space for button distances */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Switch between world and local space for button distances" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPressableButtonComponent_SetUseAbsolutePushDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPressableButtonComponent, nullptr, "SetUseAbsolutePushDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPressableButtonComponent_SetUseAbsolutePushDistance_Statics::UxtPressableButtonComponent_eventSetUseAbsolutePushDistance_Parms), Z_Construct_UFunction_UUxtPressableButtonComponent_SetUseAbsolutePushDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_SetUseAbsolutePushDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPressableButtonComponent_SetUseAbsolutePushDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_SetUseAbsolutePushDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPressableButtonComponent_SetUseAbsolutePushDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPressableButtonComponent_SetUseAbsolutePushDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPressableButtonComponent_SetVisuals_Statics
	{
		struct UxtPressableButtonComponent_eventSetVisuals_Parms
		{
			USceneComponent* Visuals;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Visuals_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Visuals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPressableButtonComponent_SetVisuals_Statics::NewProp_Visuals_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPressableButtonComponent_SetVisuals_Statics::NewProp_Visuals = { "Visuals", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableButtonComponent_eventSetVisuals_Parms, Visuals), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPressableButtonComponent_SetVisuals_Statics::NewProp_Visuals_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_SetVisuals_Statics::NewProp_Visuals_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPressableButtonComponent_SetVisuals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPressableButtonComponent_SetVisuals_Statics::NewProp_Visuals,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPressableButtonComponent_SetVisuals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Set scene component to be used for the moving visuals */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Set scene component to be used for the moving visuals" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPressableButtonComponent_SetVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPressableButtonComponent, nullptr, "SetVisuals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPressableButtonComponent_SetVisuals_Statics::UxtPressableButtonComponent_eventSetVisuals_Parms), Z_Construct_UFunction_UUxtPressableButtonComponent_SetVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_SetVisuals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPressableButtonComponent_SetVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPressableButtonComponent_SetVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPressableButtonComponent_SetVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPressableButtonComponent_SetVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtPressableButtonComponent);
	UClass* Z_Construct_UClass_UUxtPressableButtonComponent_NoRegister()
	{
		return UUxtPressableButtonComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtPressableButtonComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PressedFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReleasedFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleasedFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoverySpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoverySpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginFocus_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateFocus_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEndFocus_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginPoke_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginPoke;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdatePoke_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdatePoke;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEndPoke_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndPoke;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonReleased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonEnabled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonDisabled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonDisabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PushBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PushBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PushBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPushDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPushDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontFaceCollisionFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrontFaceCollisionFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualsReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisualsReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfile_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAbsolutePushDistance_MetaData[];
#endif
		static void NewProp_bUseAbsolutePushDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAbsolutePushDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtPressableButtonComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtUIElementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtPressableButtonComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtPressableButtonComponent_GetFrontFaceCollisionFraction, "GetFrontFaceCollisionFraction" }, // 2721071331
		{ &Z_Construct_UFunction_UUxtPressableButtonComponent_GetMaxPushDistance, "GetMaxPushDistance" }, // 2390128000
		{ &Z_Construct_UFunction_UUxtPressableButtonComponent_GetPushBehavior, "GetPushBehavior" }, // 3845226502
		{ &Z_Construct_UFunction_UUxtPressableButtonComponent_GetScaleAdjustedMaxPushDistance, "GetScaleAdjustedMaxPushDistance" }, // 320616783
		{ &Z_Construct_UFunction_UUxtPressableButtonComponent_GetState, "GetState" }, // 898594524
		{ &Z_Construct_UFunction_UUxtPressableButtonComponent_GetVisuals, "GetVisuals" }, // 3715734346
		{ &Z_Construct_UFunction_UUxtPressableButtonComponent_SetCollisionProfile, "SetCollisionProfile" }, // 1341388287
		{ &Z_Construct_UFunction_UUxtPressableButtonComponent_SetEnabled, "SetEnabled" }, // 282067940
		{ &Z_Construct_UFunction_UUxtPressableButtonComponent_SetFrontFaceCollisionFraction, "SetFrontFaceCollisionFraction" }, // 905786072
		{ &Z_Construct_UFunction_UUxtPressableButtonComponent_SetMaxPushDistance, "SetMaxPushDistance" }, // 3028471908
		{ &Z_Construct_UFunction_UUxtPressableButtonComponent_SetPushBehavior, "SetPushBehavior" }, // 1228325639
		{ &Z_Construct_UFunction_UUxtPressableButtonComponent_SetUseAbsolutePushDistance, "SetUseAbsolutePushDistance" }, // 2590154702
		{ &Z_Construct_UFunction_UUxtPressableButtonComponent_SetVisuals, "SetVisuals" }, // 1166150956
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Component that turns the actor it is attached to into a pressable rectangular button.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Controls/UxtPressableButtonComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Component that turns the actor it is attached to into a pressable rectangular button." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_PressedFraction_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Fraction of the maximum travel distance at which the button will raise the pressed event. */" },
		{ "DisplayAfter", "bUseAbsolutePushDistance" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Fraction of the maximum travel distance at which the button will raise the pressed event." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_PressedFraction = { "PressedFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPressableButtonComponent, PressedFraction), METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_PressedFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_PressedFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_ReleasedFraction_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Fraction of the maximum travel distance at which a pressed button will raise the released event. */" },
		{ "DisplayAfter", "bUseAbsolutePushDistance" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Fraction of the maximum travel distance at which a pressed button will raise the released event." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_ReleasedFraction = { "ReleasedFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPressableButtonComponent, ReleasedFraction), METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_ReleasedFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_ReleasedFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_RecoverySpeed_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Button movement speed while recovering in Unreal units per second (uu/s) */" },
		{ "DisplayAfter", "bUseAbsolutePushDistance" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Button movement speed while recovering in Unreal units per second (uu/s)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_RecoverySpeed = { "RecoverySpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPressableButtonComponent, RecoverySpeed), METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_RecoverySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_RecoverySpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnBeginFocus_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Event raised when a pointer starts focusing the button. WasFocused indicates if the button was already focused by another pointer. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Event raised when a pointer starts focusing the button. WasFocused indicates if the button was already focused by another pointer." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnBeginFocus = { "OnBeginFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPressableButtonComponent, OnBeginFocus), Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnBeginFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnBeginFocus_MetaData)) }; // 3727301344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnUpdateFocus_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Event raised when a focusing pointer updates. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Event raised when a focusing pointer updates." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnUpdateFocus = { "OnUpdateFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPressableButtonComponent, OnUpdateFocus), Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdateFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnUpdateFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnUpdateFocus_MetaData)) }; // 2207377705
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnEndFocus_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Event raised when a pointer ends focusing the Pressable Button. IsFocused indicates if the Pressable Button is still focused by\n\x09 * another pointer. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Event raised when a pointer ends focusing the Pressable Button. IsFocused indicates if the Pressable Button is still focused by\nanother pointer." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnEndFocus = { "OnEndFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPressableButtonComponent, OnEndFocus), Z_Construct_UDelegateFunction_UXTools_UxtButtonEndFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnEndFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnEndFocus_MetaData)) }; // 1323305661
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnBeginPoke_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Event raised when a pointer starts poking the Pressable Button. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Event raised when a pointer starts poking the Pressable Button." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnBeginPoke = { "OnBeginPoke", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPressableButtonComponent, OnBeginPoke), Z_Construct_UDelegateFunction_UXTools_UxtButtonBeginPokeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnBeginPoke_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnBeginPoke_MetaData)) }; // 3696892602
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnUpdatePoke_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Event raised while a pointer is poking the Pressable Button. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Event raised while a pointer is poking the Pressable Button." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnUpdatePoke = { "OnUpdatePoke", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPressableButtonComponent, OnUpdatePoke), Z_Construct_UDelegateFunction_UXTools_UxtButtonUpdatePokeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnUpdatePoke_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnUpdatePoke_MetaData)) }; // 1102882998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnEndPoke_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Event raised when a pointer ends poking the Pressable Button. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Event raised when a pointer ends poking the Pressable Button." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnEndPoke = { "OnEndPoke", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPressableButtonComponent, OnEndPoke), Z_Construct_UDelegateFunction_UXTools_UxtButtonEndPokeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnEndPoke_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnEndPoke_MetaData)) }; // 1274434499
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonPressed_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Event raised when the button reaches the pressed distance. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Event raised when the button reaches the pressed distance." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonPressed = { "OnButtonPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPressableButtonComponent, OnButtonPressed), Z_Construct_UDelegateFunction_UXTools_UxtButtonPressedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonPressed_MetaData)) }; // 3641448892
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonReleased_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Event raised when the a pressed button reaches the released distance. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Event raised when the a pressed button reaches the released distance." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonReleased = { "OnButtonReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPressableButtonComponent, OnButtonReleased), Z_Construct_UDelegateFunction_UXTools_UxtButtonReleasedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonReleased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonReleased_MetaData)) }; // 247435903
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonEnabled_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Event raised when the button is enabled. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Event raised when the button is enabled." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonEnabled = { "OnButtonEnabled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPressableButtonComponent, OnButtonEnabled), Z_Construct_UDelegateFunction_UXTools_UxtButtonEnabledDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonEnabled_MetaData)) }; // 3512009201
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonDisabled_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Event raised when the button is disabled. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Event raised when the button is disabled." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonDisabled = { "OnButtonDisabled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPressableButtonComponent, OnButtonDisabled), Z_Construct_UDelegateFunction_UXTools_UxtButtonDisabledDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonDisabled_MetaData)) }; // 2615157861
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_PushBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_PushBehavior_MetaData[] = {
		{ "BlueprintGetter", "GetPushBehavior" },
		{ "BlueprintSetter", "SetPushBehavior" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Button behavior when pushed */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Button behavior when pushed" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_PushBehavior = { "PushBehavior", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPressableButtonComponent, PushBehavior), Z_Construct_UEnum_UXTools_EUxtPushBehavior, METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_PushBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_PushBehavior_MetaData)) }; // 3295874907
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_MaxPushDistance_MetaData[] = {
		{ "BlueprintGetter", "GetMaxPushDistance" },
		{ "BlueprintSetter", "SetMaxPushDistance" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** The maximum distance the button can be pushed in local space (auto-calculated when the push behavior is compress)*/" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "The maximum distance the button can be pushed in local space (auto-calculated when the push behavior is compress)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_MaxPushDistance = { "MaxPushDistance", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPressableButtonComponent, MaxPushDistance), METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_MaxPushDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_MaxPushDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_FrontFaceCollisionFraction_MetaData[] = {
		{ "BlueprintGetter", "GetFrontFaceCollisionFraction" },
		{ "BlueprintSetter", "SetFrontFaceCollisionFraction" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Distance from the visuals front face to the collider front face expressed as a fraction of the maximum push distance. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Distance from the visuals front face to the collider front face expressed as a fraction of the maximum push distance." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_FrontFaceCollisionFraction = { "FrontFaceCollisionFraction", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPressableButtonComponent, FrontFaceCollisionFraction), METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_FrontFaceCollisionFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_FrontFaceCollisionFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_VisualsReference_MetaData[] = {
		{ "AllowedClasses", "SceneComponent" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Visual representation of the button face. This component's transform will be updated as the button is pressed/released. */" },
		{ "DisplayName", "Visuals" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Visual representation of the button face. This component's transform will be updated as the button is pressed/released." },
		{ "UseComponentPicker", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_VisualsReference = { "VisualsReference", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPressableButtonComponent, VisualsReference), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_VisualsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_VisualsReference_MetaData)) }; // 3442474717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_CollisionProfile_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Collision profile used by the button collider */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Collision profile used by the button collider" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_CollisionProfile = { "CollisionProfile", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPressableButtonComponent, CollisionProfile), METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_CollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_CollisionProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_bUseAbsolutePushDistance_MetaData[] = {
		{ "BlueprintSetter", "SetUseAbsolutePushDistance" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Switch between world and local space for button distances */" },
		{ "DisplayAfter", "MaxPushDistance" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableButtonComponent.h" },
		{ "ToolTip", "Switch between world and local space for button distances" },
	};
#endif
	void Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_bUseAbsolutePushDistance_SetBit(void* Obj)
	{
		((UUxtPressableButtonComponent*)Obj)->bUseAbsolutePushDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_bUseAbsolutePushDistance = { "bUseAbsolutePushDistance", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtPressableButtonComponent), &Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_bUseAbsolutePushDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_bUseAbsolutePushDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_bUseAbsolutePushDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtPressableButtonComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_PressedFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_ReleasedFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_RecoverySpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnBeginFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnUpdateFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnEndFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnBeginPoke,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnUpdatePoke,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnEndPoke,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_OnButtonDisabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_PushBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_PushBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_MaxPushDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_FrontFaceCollisionFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_VisualsReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_CollisionProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPressableButtonComponent_Statics::NewProp_bUseAbsolutePushDistance,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUxtPokeTarget_NoRegister, (int32)VTABLE_OFFSET(UUxtPressableButtonComponent, IUxtPokeTarget), false },  // 73628702
			{ Z_Construct_UClass_UUxtPokeHandler_NoRegister, (int32)VTABLE_OFFSET(UUxtPressableButtonComponent, IUxtPokeHandler), false },  // 4244100539
			{ Z_Construct_UClass_UUxtFarTarget_NoRegister, (int32)VTABLE_OFFSET(UUxtPressableButtonComponent, IUxtFarTarget), false },  // 3674043034
			{ Z_Construct_UClass_UUxtFarHandler_NoRegister, (int32)VTABLE_OFFSET(UUxtPressableButtonComponent, IUxtFarHandler), false },  // 1789224393
			{ Z_Construct_UClass_UUxtCollectionObject_NoRegister, (int32)VTABLE_OFFSET(UUxtPressableButtonComponent, IUxtCollectionObject), false },  // 714195339
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtPressableButtonComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtPressableButtonComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtPressableButtonComponent_Statics::ClassParams = {
		&UUxtPressableButtonComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtPressableButtonComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPressableButtonComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtPressableButtonComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtPressableButtonComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtPressableButtonComponent.OuterSingleton, Z_Construct_UClass_UUxtPressableButtonComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtPressableButtonComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtPressableButtonComponent>()
	{
		return UUxtPressableButtonComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtPressableButtonComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_Statics::EnumInfo[] = {
		{ EUxtPushBehavior_StaticEnum, TEXT("EUxtPushBehavior"), &Z_Registration_Info_UEnum_EUxtPushBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3295874907U) },
		{ EUxtButtonState_StaticEnum, TEXT("EUxtButtonState"), &Z_Registration_Info_UEnum_EUxtButtonState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2868781936U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtPressableButtonComponent, UUxtPressableButtonComponent::StaticClass, TEXT("UUxtPressableButtonComponent"), &Z_Registration_Info_UClass_UUxtPressableButtonComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtPressableButtonComponent), 3671611563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_2902312716(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
