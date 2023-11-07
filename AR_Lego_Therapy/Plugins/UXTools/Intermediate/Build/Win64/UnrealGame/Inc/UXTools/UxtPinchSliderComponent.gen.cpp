// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtPinchSliderComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtPinchSliderComponent() {}
// Cross Module References
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtSliderState();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPointerComponent_NoRegister();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEnableDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderDisableDelegate__DelegateSignature();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPinchSliderComponent();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtUIElementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabHandler_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarHandler_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUxtSliderState;
	static UEnum* EUxtSliderState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUxtSliderState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUxtSliderState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtSliderState, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtSliderState"));
		}
		return Z_Registration_Info_UEnum_EUxtSliderState.OuterSingleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtSliderState>()
	{
		return EUxtSliderState_StaticEnum();
	}
	struct Z_Construct_UEnum_UXTools_EUxtSliderState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UXTools_EUxtSliderState_Statics::Enumerators[] = {
		{ "EUxtSliderState::Default", (int64)EUxtSliderState::Default },
		{ "EUxtSliderState::Focused", (int64)EUxtSliderState::Focused },
		{ "EUxtSliderState::Grabbed", (int64)EUxtSliderState::Grabbed },
		{ "EUxtSliderState::Disabled", (int64)EUxtSliderState::Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UXTools_EUxtSliderState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Slider states.\n */" },
		{ "Default.Comment", "/** Slider is ready for interaction. */" },
		{ "Default.Name", "EUxtSliderState::Default" },
		{ "Default.ToolTip", "Slider is ready for interaction." },
		{ "Disabled.Comment", "/** Slider is disabled. */" },
		{ "Disabled.Name", "EUxtSliderState::Disabled" },
		{ "Disabled.ToolTip", "Slider is disabled." },
		{ "Focused.Comment", "/** Slider is being focused. */" },
		{ "Focused.Name", "EUxtSliderState::Focused" },
		{ "Focused.ToolTip", "Slider is being focused." },
		{ "Grabbed.Comment", "/** Slider is being grabbed. */" },
		{ "Grabbed.Name", "EUxtSliderState::Grabbed" },
		{ "Grabbed.ToolTip", "Slider is being grabbed." },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Slider states." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UXTools_EUxtSliderState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		"EUxtSliderState",
		"EUxtSliderState",
		Z_Construct_UEnum_UXTools_EUxtSliderState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtSliderState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UXTools_EUxtSliderState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtSliderState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UXTools_EUxtSliderState()
	{
		if (!Z_Registration_Info_UEnum_EUxtSliderState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUxtSliderState.InnerSingleton, Z_Construct_UEnum_UXTools_EUxtSliderState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUxtSliderState.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtPinchSliderUpdateStateDelegate_Parms
		{
			UUxtPinchSliderComponent* Slider;
			EUxtSliderState NewState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slider;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtPinchSliderUpdateStateDelegate_Parms, Slider), Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtPinchSliderUpdateStateDelegate_Parms, NewState), Z_Construct_UEnum_UXTools_EUxtSliderState, METADATA_PARAMS(nullptr, 0) }; // 436907525
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics::NewProp_Slider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics::NewProp_NewState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// Event delegates\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Event delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtPinchSliderUpdateStateDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtPinchSliderUpdateStateDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtPinchSliderBeginFocusDelegate_Parms
		{
			UUxtPinchSliderComponent* Slider;
			UUxtPointerComponent* Pointer;
			bool bWasAlreadyFocused;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slider;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtPinchSliderBeginFocusDelegate_Parms, Slider), Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtPinchSliderBeginFocusDelegate_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	void Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::NewProp_bWasAlreadyFocused_SetBit(void* Obj)
	{
		((_Script_UXTools_eventUxtPinchSliderBeginFocusDelegate_Parms*)Obj)->bWasAlreadyFocused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::NewProp_bWasAlreadyFocused = { "bWasAlreadyFocused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_UXTools_eventUxtPinchSliderBeginFocusDelegate_Parms), &Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::NewProp_bWasAlreadyFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::NewProp_Slider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::NewProp_bWasAlreadyFocused,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtPinchSliderBeginFocusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtPinchSliderBeginFocusDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtPinchSliderUpdateFocusDelegate_Parms
		{
			UUxtPinchSliderComponent* Slider;
			UUxtPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slider;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtPinchSliderUpdateFocusDelegate_Parms, Slider), Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtPinchSliderUpdateFocusDelegate_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Slider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtPinchSliderUpdateFocusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtPinchSliderUpdateFocusDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtPinchSliderEndFocusDelegate_Parms
		{
			UUxtPinchSliderComponent* Slider;
			UUxtPointerComponent* Pointer;
			bool bIsStillFocused;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slider;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtPinchSliderEndFocusDelegate_Parms, Slider), Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtPinchSliderEndFocusDelegate_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	void Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::NewProp_bIsStillFocused_SetBit(void* Obj)
	{
		((_Script_UXTools_eventUxtPinchSliderEndFocusDelegate_Parms*)Obj)->bIsStillFocused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::NewProp_bIsStillFocused = { "bIsStillFocused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_UXTools_eventUxtPinchSliderEndFocusDelegate_Parms), &Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::NewProp_bIsStillFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::NewProp_Slider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::NewProp_bIsStillFocused,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtPinchSliderEndFocusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtPinchSliderEndFocusDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtPinchSliderBeginGrabDelegate_Parms
		{
			UUxtPinchSliderComponent* Slider;
			UUxtPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slider;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtPinchSliderBeginGrabDelegate_Parms, Slider), Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtPinchSliderBeginGrabDelegate_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::NewProp_Slider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtPinchSliderBeginGrabDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtPinchSliderBeginGrabDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtPinchSliderUpdateValueDelegate_Parms
		{
			UUxtPinchSliderComponent* Slider;
			float NewValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slider;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtPinchSliderUpdateValueDelegate_Parms, Slider), Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtPinchSliderUpdateValueDelegate_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature_Statics::NewProp_Slider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtPinchSliderUpdateValueDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtPinchSliderUpdateValueDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtPinchSliderEndGrabDelegate_Parms
		{
			UUxtPinchSliderComponent* Slider;
			UUxtPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slider;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtPinchSliderEndGrabDelegate_Parms, Slider), Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtPinchSliderEndGrabDelegate_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::NewProp_Slider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtPinchSliderEndGrabDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtPinchSliderEndGrabDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEnableDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtPinchSliderEnableDelegate_Parms
		{
			UUxtPinchSliderComponent* Slider;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEnableDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEnableDelegate__DelegateSignature_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtPinchSliderEnableDelegate_Parms, Slider), Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEnableDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEnableDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEnableDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEnableDelegate__DelegateSignature_Statics::NewProp_Slider,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEnableDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEnableDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtPinchSliderEnableDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEnableDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtPinchSliderEnableDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEnableDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEnableDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEnableDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEnableDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEnableDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEnableDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderDisableDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtPinchSliderDisableDelegate_Parms
		{
			UUxtPinchSliderComponent* Slider;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderDisableDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderDisableDelegate__DelegateSignature_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtPinchSliderDisableDelegate_Parms, Slider), Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderDisableDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderDisableDelegate__DelegateSignature_Statics::NewProp_Slider_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderDisableDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderDisableDelegate__DelegateSignature_Statics::NewProp_Slider,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderDisableDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderDisableDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtPinchSliderDisableDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderDisableDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtPinchSliderDisableDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderDisableDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderDisableDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderDisableDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderDisableDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderDisableDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderDisableDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execSetCollisionProfile)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewCollisionProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionProfile(Z_Param_NewCollisionProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execGetCollisionProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCollisionProfile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execSetLerpTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLerpTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLerpTime(Z_Param_NewLerpTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execGetLerpTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLerpTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execSetNumSteps)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewNumSteps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumSteps(Z_Param_NewNumSteps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execGetNumSteps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumSteps();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execSetUseSteppedMovement)
	{
		P_GET_UBOOL(Z_Param_bNewUseSteppedMovement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseSteppedMovement(Z_Param_bNewUseSteppedMovement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execGetUseSteppedMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseSteppedMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execSetValueUpperBound)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewUpperBound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueUpperBound(Z_Param_NewUpperBound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execGetValueUpperBound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValueUpperBound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execSetValueLowerBound)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLowerBound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueLowerBound(Z_Param_NewLowerBound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execGetValueLowerBound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValueLowerBound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execSetTrackLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewTrackLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackLength(Z_Param_NewTrackLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execGetTrackLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTrackLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execSetValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValue(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execSetVisuals)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_NewVisuals);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisuals(Z_Param_NewVisuals);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execGetVisuals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetVisuals();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPinchSliderComponent::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUxtSliderState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	void UUxtPinchSliderComponent::StaticRegisterNativesUUxtPinchSliderComponent()
	{
		UClass* Class = UUxtPinchSliderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCollisionProfile", &UUxtPinchSliderComponent::execGetCollisionProfile },
			{ "GetLerpTime", &UUxtPinchSliderComponent::execGetLerpTime },
			{ "GetNumSteps", &UUxtPinchSliderComponent::execGetNumSteps },
			{ "GetState", &UUxtPinchSliderComponent::execGetState },
			{ "GetTrackLength", &UUxtPinchSliderComponent::execGetTrackLength },
			{ "GetUseSteppedMovement", &UUxtPinchSliderComponent::execGetUseSteppedMovement },
			{ "GetValue", &UUxtPinchSliderComponent::execGetValue },
			{ "GetValueLowerBound", &UUxtPinchSliderComponent::execGetValueLowerBound },
			{ "GetValueUpperBound", &UUxtPinchSliderComponent::execGetValueUpperBound },
			{ "GetVisuals", &UUxtPinchSliderComponent::execGetVisuals },
			{ "SetCollisionProfile", &UUxtPinchSliderComponent::execSetCollisionProfile },
			{ "SetEnabled", &UUxtPinchSliderComponent::execSetEnabled },
			{ "SetLerpTime", &UUxtPinchSliderComponent::execSetLerpTime },
			{ "SetNumSteps", &UUxtPinchSliderComponent::execSetNumSteps },
			{ "SetTrackLength", &UUxtPinchSliderComponent::execSetTrackLength },
			{ "SetUseSteppedMovement", &UUxtPinchSliderComponent::execSetUseSteppedMovement },
			{ "SetValue", &UUxtPinchSliderComponent::execSetValue },
			{ "SetValueLowerBound", &UUxtPinchSliderComponent::execSetValueLowerBound },
			{ "SetValueUpperBound", &UUxtPinchSliderComponent::execSetValueUpperBound },
			{ "SetVisuals", &UUxtPinchSliderComponent::execSetVisuals },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_GetCollisionProfile_Statics
	{
		struct UxtPinchSliderComponent_eventGetCollisionProfile_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetCollisionProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderComponent_eventGetCollisionProfile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_GetCollisionProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_GetCollisionProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_GetCollisionProfile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "// Collision profile.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Collision profile." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetCollisionProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "GetCollisionProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_GetCollisionProfile_Statics::UxtPinchSliderComponent_eventGetCollisionProfile_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_GetCollisionProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetCollisionProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_GetCollisionProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetCollisionProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_GetCollisionProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_GetCollisionProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_GetLerpTime_Statics
	{
		struct UxtPinchSliderComponent_eventGetLerpTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetLerpTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderComponent_eventGetLerpTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_GetLerpTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_GetLerpTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_GetLerpTime_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "// LerpTime.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "LerpTime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetLerpTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "GetLerpTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_GetLerpTime_Statics::UxtPinchSliderComponent_eventGetLerpTime_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_GetLerpTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetLerpTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_GetLerpTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetLerpTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_GetLerpTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_GetLerpTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_GetNumSteps_Statics
	{
		struct UxtPinchSliderComponent_eventGetNumSteps_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetNumSteps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderComponent_eventGetNumSteps_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_GetNumSteps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_GetNumSteps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_GetNumSteps_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "// Step value.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Step value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetNumSteps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "GetNumSteps", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_GetNumSteps_Statics::UxtPinchSliderComponent_eventGetNumSteps_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_GetNumSteps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetNumSteps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_GetNumSteps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetNumSteps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_GetNumSteps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_GetNumSteps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_GetState_Statics
	{
		struct UxtPinchSliderComponent_eventGetState_Parms
		{
			EUxtSliderState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderComponent_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_UXTools_EUxtSliderState, METADATA_PARAMS(nullptr, 0) }; // 436907525
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_GetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** Get the current state of the slider. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Get the current state of the slider." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "GetState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_GetState_Statics::UxtPinchSliderComponent_eventGetState_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_GetTrackLength_Statics
	{
		struct UxtPinchSliderComponent_eventGetTrackLength_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetTrackLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderComponent_eventGetTrackLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_GetTrackLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_GetTrackLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_GetTrackLength_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "// Track length.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Track length." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetTrackLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "GetTrackLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_GetTrackLength_Statics::UxtPinchSliderComponent_eventGetTrackLength_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_GetTrackLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetTrackLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_GetTrackLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetTrackLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_GetTrackLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_GetTrackLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_GetUseSteppedMovement_Statics
	{
		struct UxtPinchSliderComponent_eventGetUseSteppedMovement_Parms
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
	void Z_Construct_UFunction_UUxtPinchSliderComponent_GetUseSteppedMovement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtPinchSliderComponent_eventGetUseSteppedMovement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetUseSteppedMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPinchSliderComponent_eventGetUseSteppedMovement_Parms), &Z_Construct_UFunction_UUxtPinchSliderComponent_GetUseSteppedMovement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_GetUseSteppedMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_GetUseSteppedMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_GetUseSteppedMovement_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "// Use stepped movement.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Use stepped movement." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetUseSteppedMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "GetUseSteppedMovement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_GetUseSteppedMovement_Statics::UxtPinchSliderComponent_eventGetUseSteppedMovement_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_GetUseSteppedMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetUseSteppedMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_GetUseSteppedMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetUseSteppedMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_GetUseSteppedMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_GetUseSteppedMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_GetValue_Statics
	{
		struct UxtPinchSliderComponent_eventGetValue_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderComponent_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_GetValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "// Value.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_GetValue_Statics::UxtPinchSliderComponent_eventGetValue_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueLowerBound_Statics
	{
		struct UxtPinchSliderComponent_eventGetValueLowerBound_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueLowerBound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderComponent_eventGetValueLowerBound_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueLowerBound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueLowerBound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueLowerBound_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "// Value lower bound.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Value lower bound." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueLowerBound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "GetValueLowerBound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueLowerBound_Statics::UxtPinchSliderComponent_eventGetValueLowerBound_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueLowerBound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueLowerBound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueLowerBound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueLowerBound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueLowerBound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueLowerBound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueUpperBound_Statics
	{
		struct UxtPinchSliderComponent_eventGetValueUpperBound_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueUpperBound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderComponent_eventGetValueUpperBound_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueUpperBound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueUpperBound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueUpperBound_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "// Value upper bound.\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Value upper bound." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueUpperBound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "GetValueUpperBound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueUpperBound_Statics::UxtPinchSliderComponent_eventGetValueUpperBound_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueUpperBound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueUpperBound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueUpperBound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueUpperBound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueUpperBound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueUpperBound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_GetVisuals_Statics
	{
		struct UxtPinchSliderComponent_eventGetVisuals_Parms
		{
			UStaticMeshComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_GetVisuals_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetVisuals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderComponent_eventGetVisuals_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_GetVisuals_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetVisuals_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_GetVisuals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_GetVisuals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_GetVisuals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** Get the static mesh representing the thumb visuals. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Get the static mesh representing the thumb visuals." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_GetVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "GetVisuals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_GetVisuals_Statics::UxtPinchSliderComponent_eventGetVisuals_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_GetVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetVisuals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_GetVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_GetVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_GetVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_GetVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_SetCollisionProfile_Statics
	{
		struct UxtPinchSliderComponent_eventSetCollisionProfile_Parms
		{
			FName NewCollisionProfile;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewCollisionProfile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetCollisionProfile_Statics::NewProp_NewCollisionProfile = { "NewCollisionProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderComponent_eventSetCollisionProfile_Parms, NewCollisionProfile), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_SetCollisionProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_SetCollisionProfile_Statics::NewProp_NewCollisionProfile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_SetCollisionProfile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetCollisionProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "SetCollisionProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_SetCollisionProfile_Statics::UxtPinchSliderComponent_eventSetCollisionProfile_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_SetCollisionProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetCollisionProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_SetCollisionProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetCollisionProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_SetCollisionProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_SetCollisionProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_SetEnabled_Statics
	{
		struct UxtPinchSliderComponent_eventSetEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtPinchSliderComponent_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UxtPinchSliderComponent_eventSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPinchSliderComponent_eventSetEnabled_Parms), &Z_Construct_UFunction_UUxtPinchSliderComponent_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_SetEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_SetEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** Set if the slider is enabled. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Set if the slider is enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "SetEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_SetEnabled_Statics::UxtPinchSliderComponent_eventSetEnabled_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_SetLerpTime_Statics
	{
		struct UxtPinchSliderComponent_eventSetLerpTime_Parms
		{
			float NewLerpTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLerpTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetLerpTime_Statics::NewProp_NewLerpTime = { "NewLerpTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderComponent_eventSetLerpTime_Parms, NewLerpTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_SetLerpTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_SetLerpTime_Statics::NewProp_NewLerpTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_SetLerpTime_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetLerpTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "SetLerpTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_SetLerpTime_Statics::UxtPinchSliderComponent_eventSetLerpTime_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_SetLerpTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetLerpTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_SetLerpTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetLerpTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_SetLerpTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_SetLerpTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_SetNumSteps_Statics
	{
		struct UxtPinchSliderComponent_eventSetNumSteps_Parms
		{
			int32 NewNumSteps;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewNumSteps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetNumSteps_Statics::NewProp_NewNumSteps = { "NewNumSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderComponent_eventSetNumSteps_Parms, NewNumSteps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_SetNumSteps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_SetNumSteps_Statics::NewProp_NewNumSteps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_SetNumSteps_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetNumSteps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "SetNumSteps", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_SetNumSteps_Statics::UxtPinchSliderComponent_eventSetNumSteps_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_SetNumSteps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetNumSteps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_SetNumSteps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetNumSteps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_SetNumSteps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_SetNumSteps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_SetTrackLength_Statics
	{
		struct UxtPinchSliderComponent_eventSetTrackLength_Parms
		{
			float NewTrackLength;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTrackLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetTrackLength_Statics::NewProp_NewTrackLength = { "NewTrackLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderComponent_eventSetTrackLength_Parms, NewTrackLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_SetTrackLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_SetTrackLength_Statics::NewProp_NewTrackLength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_SetTrackLength_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetTrackLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "SetTrackLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_SetTrackLength_Statics::UxtPinchSliderComponent_eventSetTrackLength_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_SetTrackLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetTrackLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_SetTrackLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetTrackLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_SetTrackLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_SetTrackLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_SetUseSteppedMovement_Statics
	{
		struct UxtPinchSliderComponent_eventSetUseSteppedMovement_Parms
		{
			bool bNewUseSteppedMovement;
		};
		static void NewProp_bNewUseSteppedMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewUseSteppedMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtPinchSliderComponent_SetUseSteppedMovement_Statics::NewProp_bNewUseSteppedMovement_SetBit(void* Obj)
	{
		((UxtPinchSliderComponent_eventSetUseSteppedMovement_Parms*)Obj)->bNewUseSteppedMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetUseSteppedMovement_Statics::NewProp_bNewUseSteppedMovement = { "bNewUseSteppedMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPinchSliderComponent_eventSetUseSteppedMovement_Parms), &Z_Construct_UFunction_UUxtPinchSliderComponent_SetUseSteppedMovement_Statics::NewProp_bNewUseSteppedMovement_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_SetUseSteppedMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_SetUseSteppedMovement_Statics::NewProp_bNewUseSteppedMovement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_SetUseSteppedMovement_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetUseSteppedMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "SetUseSteppedMovement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_SetUseSteppedMovement_Statics::UxtPinchSliderComponent_eventSetUseSteppedMovement_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_SetUseSteppedMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetUseSteppedMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_SetUseSteppedMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetUseSteppedMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_SetUseSteppedMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_SetUseSteppedMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_SetValue_Statics
	{
		struct UxtPinchSliderComponent_eventSetValue_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderComponent_eventSetValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_SetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_SetValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_SetValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "SetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_SetValue_Statics::UxtPinchSliderComponent_eventSetValue_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueLowerBound_Statics
	{
		struct UxtPinchSliderComponent_eventSetValueLowerBound_Parms
		{
			float NewLowerBound;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLowerBound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueLowerBound_Statics::NewProp_NewLowerBound = { "NewLowerBound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderComponent_eventSetValueLowerBound_Parms, NewLowerBound), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueLowerBound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueLowerBound_Statics::NewProp_NewLowerBound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueLowerBound_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueLowerBound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "SetValueLowerBound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueLowerBound_Statics::UxtPinchSliderComponent_eventSetValueLowerBound_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueLowerBound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueLowerBound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueLowerBound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueLowerBound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueLowerBound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueLowerBound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueUpperBound_Statics
	{
		struct UxtPinchSliderComponent_eventSetValueUpperBound_Parms
		{
			float NewUpperBound;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewUpperBound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueUpperBound_Statics::NewProp_NewUpperBound = { "NewUpperBound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderComponent_eventSetValueUpperBound_Parms, NewUpperBound), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueUpperBound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueUpperBound_Statics::NewProp_NewUpperBound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueUpperBound_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueUpperBound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "SetValueUpperBound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueUpperBound_Statics::UxtPinchSliderComponent_eventSetValueUpperBound_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueUpperBound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueUpperBound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueUpperBound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueUpperBound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueUpperBound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueUpperBound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPinchSliderComponent_SetVisuals_Statics
	{
		struct UxtPinchSliderComponent_eventSetVisuals_Parms
		{
			UStaticMeshComponent* NewVisuals;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewVisuals_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewVisuals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_SetVisuals_Statics::NewProp_NewVisuals_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetVisuals_Statics::NewProp_NewVisuals = { "NewVisuals", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPinchSliderComponent_eventSetVisuals_Parms, NewVisuals), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_SetVisuals_Statics::NewProp_NewVisuals_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetVisuals_Statics::NewProp_NewVisuals_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPinchSliderComponent_SetVisuals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPinchSliderComponent_SetVisuals_Statics::NewProp_NewVisuals,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPinchSliderComponent_SetVisuals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** Set the static mesh representing the thumb visuals. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Set the static mesh representing the thumb visuals." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPinchSliderComponent_SetVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPinchSliderComponent, nullptr, "SetVisuals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPinchSliderComponent_SetVisuals_Statics::UxtPinchSliderComponent_eventSetVisuals_Parms), Z_Construct_UFunction_UUxtPinchSliderComponent_SetVisuals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetVisuals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPinchSliderComponent_SetVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPinchSliderComponent_SetVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPinchSliderComponent_SetVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPinchSliderComponent_SetVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtPinchSliderComponent);
	UClass* Z_Construct_UClass_UUxtPinchSliderComponent_NoRegister()
	{
		return UUxtPinchSliderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtPinchSliderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateState_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateState;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginGrab_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginGrab;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateValue_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEndGrab_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndGrab;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEnable_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDisable_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Visuals_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Visuals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrackLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueLowerBound_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueLowerBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueUpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueUpperBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSteppedMovement_MetaData[];
#endif
		static void NewProp_bUseSteppedMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSteppedMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LerpTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfile_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtPinchSliderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtUIElementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtPinchSliderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_GetCollisionProfile, "GetCollisionProfile" }, // 412274887
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_GetLerpTime, "GetLerpTime" }, // 2615988211
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_GetNumSteps, "GetNumSteps" }, // 4048193608
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_GetState, "GetState" }, // 4113531475
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_GetTrackLength, "GetTrackLength" }, // 2012138644
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_GetUseSteppedMovement, "GetUseSteppedMovement" }, // 1198495871
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_GetValue, "GetValue" }, // 3758496190
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueLowerBound, "GetValueLowerBound" }, // 4182940930
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_GetValueUpperBound, "GetValueUpperBound" }, // 219453695
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_GetVisuals, "GetVisuals" }, // 447908712
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_SetCollisionProfile, "SetCollisionProfile" }, // 1153009601
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_SetEnabled, "SetEnabled" }, // 4229644513
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_SetLerpTime, "SetLerpTime" }, // 3004605400
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_SetNumSteps, "SetNumSteps" }, // 3916747470
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_SetTrackLength, "SetTrackLength" }, // 797612060
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_SetUseSteppedMovement, "SetUseSteppedMovement" }, // 629087161
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_SetValue, "SetValue" }, // 2063796110
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueLowerBound, "SetValueLowerBound" }, // 3035214341
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_SetValueUpperBound, "SetValueUpperBound" }, // 990728099
		{ &Z_Construct_UFunction_UUxtPinchSliderComponent_SetVisuals, "SetVisuals" }, // 3056192887
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * A slider that can be moved by grabbing / pinching a slider thumb.\n *\n * The thumb visuals must be set using the 'Visuals' property.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Controls/UxtPinchSliderComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "A slider that can be moved by grabbing / pinching a slider thumb.\n\nThe thumb visuals must be set using the 'Visuals' property." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnUpdateState_MetaData[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** Event raised when slider changes state. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Event raised when slider changes state." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnUpdateState = { "OnUpdateState", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPinchSliderComponent, OnUpdateState), Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateStateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnUpdateState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnUpdateState_MetaData)) }; // 1322372793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnBeginFocus_MetaData[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** Event raised when a pointer starts focusing the slider. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Event raised when a pointer starts focusing the slider." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnBeginFocus = { "OnBeginFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPinchSliderComponent, OnBeginFocus), Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnBeginFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnBeginFocus_MetaData)) }; // 664084357
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnUpdateFocus_MetaData[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** Event raised when a focusing pointer updates. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Event raised when a focusing pointer updates." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnUpdateFocus = { "OnUpdateFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPinchSliderComponent, OnUpdateFocus), Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnUpdateFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnUpdateFocus_MetaData)) }; // 993786043
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnEndFocus_MetaData[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** Event raised when a pointer stops focusing the slider. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Event raised when a pointer stops focusing the slider." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnEndFocus = { "OnEndFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPinchSliderComponent, OnEndFocus), Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnEndFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnEndFocus_MetaData)) }; // 275423612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnBeginGrab_MetaData[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** Event raised when slider is grabbed. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Event raised when slider is grabbed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnBeginGrab = { "OnBeginGrab", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPinchSliderComponent, OnBeginGrab), Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderBeginGrabDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnBeginGrab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnBeginGrab_MetaData)) }; // 3873678525
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnUpdateValue_MetaData[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** Event raised when slider's value changes. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Event raised when slider's value changes." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnUpdateValue = { "OnUpdateValue", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPinchSliderComponent, OnUpdateValue), Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderUpdateValueDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnUpdateValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnUpdateValue_MetaData)) }; // 3781990372
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnEndGrab_MetaData[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** Event raised when slider is released. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Event raised when slider is released." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnEndGrab = { "OnEndGrab", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPinchSliderComponent, OnEndGrab), Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEndGrabDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnEndGrab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnEndGrab_MetaData)) }; // 221017868
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnEnable_MetaData[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** Event raised when slider is enabled. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Event raised when slider is enabled." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnEnable = { "OnEnable", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPinchSliderComponent, OnEnable), Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderEnableDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnEnable_MetaData)) }; // 1555411488
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnDisable_MetaData[] = {
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** Event raised when slider is disabled. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Event raised when slider is disabled." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnDisable = { "OnDisable", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPinchSliderComponent, OnDisable), Z_Construct_UDelegateFunction_UXTools_UxtPinchSliderDisableDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnDisable_MetaData)) }; // 2577306652
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_Visuals_MetaData[] = {
		{ "AllowedClasses", "StaticMeshComponent" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** The thumb visuals. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "The thumb visuals." },
		{ "UseComponentPicker", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_Visuals = { "Visuals", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPinchSliderComponent, Visuals), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_Visuals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_Visuals_MetaData)) }; // 3442474717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_Value_MetaData[] = {
		{ "BlueprintGetter", "GetValue" },
		{ "BlueprintSetter", "SetValue" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The slider's position on the track, between 0-1. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "The slider's position on the track, between 0-1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPinchSliderComponent, Value), METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_TrackLength_MetaData[] = {
		{ "BlueprintGetter", "GetTrackLength" },
		{ "BlueprintSetter", "SetTrackLength" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The length of the slider's track. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "The length of the slider's track." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_TrackLength = { "TrackLength", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPinchSliderComponent, TrackLength), METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_TrackLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_TrackLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_ValueLowerBound_MetaData[] = {
		{ "BlueprintGetter", "GetValueLowerBound" },
		{ "BlueprintSetter", "SetValueLowerBound" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The lower bound for the slider, between 0-1. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "The lower bound for the slider, between 0-1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_ValueLowerBound = { "ValueLowerBound", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPinchSliderComponent, ValueLowerBound), METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_ValueLowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_ValueLowerBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_ValueUpperBound_MetaData[] = {
		{ "BlueprintGetter", "GetValueUpperBound" },
		{ "BlueprintSetter", "SetValueUpperBound" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The upper bound for the slider, between 0-1. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "The upper bound for the slider, between 0-1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_ValueUpperBound = { "ValueUpperBound", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPinchSliderComponent, ValueUpperBound), METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_ValueUpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_ValueUpperBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_bUseSteppedMovement_MetaData[] = {
		{ "BlueprintGetter", "GetUseSteppedMovement" },
		{ "BlueprintSetter", "SetUseSteppedMovement" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** Should the slider use stepped or smooth movement. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Should the slider use stepped or smooth movement." },
	};
#endif
	void Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_bUseSteppedMovement_SetBit(void* Obj)
	{
		((UUxtPinchSliderComponent*)Obj)->bUseSteppedMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_bUseSteppedMovement = { "bUseSteppedMovement", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtPinchSliderComponent), &Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_bUseSteppedMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_bUseSteppedMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_bUseSteppedMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_NumSteps_MetaData[] = {
		{ "BlueprintGetter", "GetNumSteps" },
		{ "BlueprintSetter", "SetNumSteps" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ClampMin", "2" },
		{ "Comment", "/** The number of steps for stepped slider movement. */" },
		{ "EditCondition", "bUseSteppedMovement" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "The number of steps for stepped slider movement." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPinchSliderComponent, NumSteps), METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_NumSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_NumSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_LerpTime_MetaData[] = {
		{ "BlueprintGetter", "GetLerpTime" },
		{ "BlueprintSetter", "SetLerpTime" },
		{ "Category", "Uxt Pinch Slider" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Interpolation time for smoothed movement while manipulating.\n\x09 */" },
		{ "EditCondition", "!bUseSteppedMovement" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "Interpolation time for smoothed movement while manipulating." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_LerpTime = { "LerpTime", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPinchSliderComponent, LerpTime), METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_LerpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_LerpTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_CollisionProfile_MetaData[] = {
		{ "BlueprintGetter", "GetCollisionProfile" },
		{ "BlueprintSetter", "SetCollisionProfile" },
		{ "Category", "Uxt Pinch Slider" },
		{ "Comment", "/** The collision profile used by the slider thumb. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "The collision profile used by the slider thumb." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_CollisionProfile = { "CollisionProfile", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPinchSliderComponent, CollisionProfile), METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_CollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_CollisionProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Comment", "/** The box collider used for grabbing the slider. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPinchSliderComponent.h" },
		{ "ToolTip", "The box collider used for grabbing the slider." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPinchSliderComponent, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_BoxComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtPinchSliderComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnUpdateState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnBeginFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnUpdateFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnEndFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnBeginGrab,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnUpdateValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnEndGrab,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_OnDisable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_Visuals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_TrackLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_ValueLowerBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_ValueUpperBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_bUseSteppedMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_NumSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_LerpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_CollisionProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPinchSliderComponent_Statics::NewProp_BoxComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUxtGrabTarget_NoRegister, (int32)VTABLE_OFFSET(UUxtPinchSliderComponent, IUxtGrabTarget), false },  // 3389507501
			{ Z_Construct_UClass_UUxtGrabHandler_NoRegister, (int32)VTABLE_OFFSET(UUxtPinchSliderComponent, IUxtGrabHandler), false },  // 463787067
			{ Z_Construct_UClass_UUxtFarTarget_NoRegister, (int32)VTABLE_OFFSET(UUxtPinchSliderComponent, IUxtFarTarget), false },  // 3674043034
			{ Z_Construct_UClass_UUxtFarHandler_NoRegister, (int32)VTABLE_OFFSET(UUxtPinchSliderComponent, IUxtFarHandler), false },  // 1789224393
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtPinchSliderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtPinchSliderComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtPinchSliderComponent_Statics::ClassParams = {
		&UUxtPinchSliderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtPinchSliderComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPinchSliderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtPinchSliderComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtPinchSliderComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtPinchSliderComponent.OuterSingleton, Z_Construct_UClass_UUxtPinchSliderComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtPinchSliderComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtPinchSliderComponent>()
	{
		return UUxtPinchSliderComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtPinchSliderComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_Statics::EnumInfo[] = {
		{ EUxtSliderState_StaticEnum, TEXT("EUxtSliderState"), &Z_Registration_Info_UEnum_EUxtSliderState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 436907525U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtPinchSliderComponent, UUxtPinchSliderComponent::StaticClass, TEXT("UUxtPinchSliderComponent"), &Z_Registration_Info_UClass_UUxtPinchSliderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtPinchSliderComponent), 1812244612U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_3064013868(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
