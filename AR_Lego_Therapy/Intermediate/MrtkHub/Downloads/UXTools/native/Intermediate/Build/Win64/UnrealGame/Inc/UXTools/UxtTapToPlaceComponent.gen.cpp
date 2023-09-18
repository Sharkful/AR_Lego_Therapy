// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Behaviors/UxtTapToPlaceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtTapToPlaceComponent() {}
// Cross Module References
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtTapToPlaceOrientBehavior();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtTapToPlaceMode();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTapToPlaceComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarPointerComponent_NoRegister();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginPlacingDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndPlacingDelegate__DelegateSignature();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTapToPlaceComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarHandler_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUxtTapToPlaceOrientBehavior;
	static UEnum* EUxtTapToPlaceOrientBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUxtTapToPlaceOrientBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUxtTapToPlaceOrientBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtTapToPlaceOrientBehavior, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtTapToPlaceOrientBehavior"));
		}
		return Z_Registration_Info_UEnum_EUxtTapToPlaceOrientBehavior.OuterSingleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtTapToPlaceOrientBehavior>()
	{
		return EUxtTapToPlaceOrientBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_UXTools_EUxtTapToPlaceOrientBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UXTools_EUxtTapToPlaceOrientBehavior_Statics::Enumerators[] = {
		{ "AlignToCamera", (int64)AlignToCamera },
		{ "AlignToSurface", (int64)AlignToSurface },
		{ "MaintainOrientation", (int64)MaintainOrientation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UXTools_EUxtTapToPlaceOrientBehavior_Statics::Enum_MetaDataParams[] = {
		{ "AlignToCamera.Comment", "/** Billboard toward the camera */" },
		{ "AlignToCamera.DisplayName", "FaceCamera" },
		{ "AlignToCamera.Name", "AlignToCamera" },
		{ "AlignToCamera.ToolTip", "Billboard toward the camera" },
		{ "AlignToSurface.Comment", "/** Align to hit surface. If no hit surface, will face camera */" },
		{ "AlignToSurface.DisplayName", "AlignToSurface" },
		{ "AlignToSurface.Name", "AlignToSurface" },
		{ "AlignToSurface.ToolTip", "Align to hit surface. If no hit surface, will face camera" },
		{ "BlueprintType", "true" },
		{ "MaintainOrientation.Comment", "/** Maintain original orientation and do not align with the environment */" },
		{ "MaintainOrientation.DisplayName", "MaintainOrientation" },
		{ "MaintainOrientation.Name", "MaintainOrientation" },
		{ "MaintainOrientation.ToolTip", "Maintain original orientation and do not align with the environment" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UXTools_EUxtTapToPlaceOrientBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		"EUxtTapToPlaceOrientBehavior",
		"EUxtTapToPlaceOrientBehavior",
		Z_Construct_UEnum_UXTools_EUxtTapToPlaceOrientBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtTapToPlaceOrientBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UXTools_EUxtTapToPlaceOrientBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtTapToPlaceOrientBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UXTools_EUxtTapToPlaceOrientBehavior()
	{
		if (!Z_Registration_Info_UEnum_EUxtTapToPlaceOrientBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUxtTapToPlaceOrientBehavior.InnerSingleton, Z_Construct_UEnum_UXTools_EUxtTapToPlaceOrientBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUxtTapToPlaceOrientBehavior.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUxtTapToPlaceMode;
	static UEnum* EUxtTapToPlaceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUxtTapToPlaceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUxtTapToPlaceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtTapToPlaceMode, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtTapToPlaceMode"));
		}
		return Z_Registration_Info_UEnum_EUxtTapToPlaceMode.OuterSingleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtTapToPlaceMode>()
	{
		return EUxtTapToPlaceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UXTools_EUxtTapToPlaceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UXTools_EUxtTapToPlaceMode_Statics::Enumerators[] = {
		{ "Head", (int64)Head },
		{ "Hand", (int64)Hand },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UXTools_EUxtTapToPlaceMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Hand.Comment", "/** Place using the hand ray */" },
		{ "Hand.Name", "Hand" },
		{ "Hand.ToolTip", "Place using the hand ray" },
		{ "Head.Comment", "/** Place using look direction */" },
		{ "Head.Name", "Head" },
		{ "Head.ToolTip", "Place using look direction" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UXTools_EUxtTapToPlaceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		"EUxtTapToPlaceMode",
		"EUxtTapToPlaceMode",
		Z_Construct_UEnum_UXTools_EUxtTapToPlaceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtTapToPlaceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UXTools_EUxtTapToPlaceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UXTools_EUxtTapToPlaceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UXTools_EUxtTapToPlaceMode()
	{
		if (!Z_Registration_Info_UEnum_EUxtTapToPlaceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUxtTapToPlaceMode.InnerSingleton, Z_Construct_UEnum_UXTools_EUxtTapToPlaceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUxtTapToPlaceMode.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtTapToPlaceBeginFocusDelegate_Parms
		{
			UUxtTapToPlaceComponent* TapToPlace;
			UUxtFarPointerComponent* Pointer;
			bool bWasAlreadyFocused;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TapToPlace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TapToPlace;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::NewProp_TapToPlace_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::NewProp_TapToPlace = { "TapToPlace", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtTapToPlaceBeginFocusDelegate_Parms, TapToPlace), Z_Construct_UClass_UUxtTapToPlaceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::NewProp_TapToPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::NewProp_TapToPlace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtTapToPlaceBeginFocusDelegate_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	void Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::NewProp_bWasAlreadyFocused_SetBit(void* Obj)
	{
		((_Script_UXTools_eventUxtTapToPlaceBeginFocusDelegate_Parms*)Obj)->bWasAlreadyFocused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::NewProp_bWasAlreadyFocused = { "bWasAlreadyFocused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_UXTools_eventUxtTapToPlaceBeginFocusDelegate_Parms), &Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::NewProp_bWasAlreadyFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::NewProp_TapToPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::NewProp_bWasAlreadyFocused,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// Delegates\n" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtTapToPlaceBeginFocusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtTapToPlaceBeginFocusDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtTapToPlaceUpdateFocusDelegate_Parms
		{
			UUxtTapToPlaceComponent* TapToPlace;
			UUxtFarPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TapToPlace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TapToPlace;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::NewProp_TapToPlace_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::NewProp_TapToPlace = { "TapToPlace", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtTapToPlaceUpdateFocusDelegate_Parms, TapToPlace), Z_Construct_UClass_UUxtTapToPlaceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::NewProp_TapToPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::NewProp_TapToPlace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtTapToPlaceUpdateFocusDelegate_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::NewProp_TapToPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtTapToPlaceUpdateFocusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtTapToPlaceUpdateFocusDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtTapToPlaceEndFocusDelegate_Parms
		{
			UUxtTapToPlaceComponent* TapToPlace;
			UUxtFarPointerComponent* Pointer;
			bool bIsStillFocused;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TapToPlace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TapToPlace;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::NewProp_TapToPlace_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::NewProp_TapToPlace = { "TapToPlace", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtTapToPlaceEndFocusDelegate_Parms, TapToPlace), Z_Construct_UClass_UUxtTapToPlaceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::NewProp_TapToPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::NewProp_TapToPlace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtTapToPlaceEndFocusDelegate_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	void Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::NewProp_bIsStillFocused_SetBit(void* Obj)
	{
		((_Script_UXTools_eventUxtTapToPlaceEndFocusDelegate_Parms*)Obj)->bIsStillFocused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::NewProp_bIsStillFocused = { "bIsStillFocused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_UXTools_eventUxtTapToPlaceEndFocusDelegate_Parms), &Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::NewProp_bIsStillFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::NewProp_TapToPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::NewProp_bIsStillFocused,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtTapToPlaceEndFocusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtTapToPlaceEndFocusDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginPlacingDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtTapToPlaceBeginPlacingDelegate_Parms
		{
			UUxtTapToPlaceComponent* TapToPlace;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TapToPlace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TapToPlace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginPlacingDelegate__DelegateSignature_Statics::NewProp_TapToPlace_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginPlacingDelegate__DelegateSignature_Statics::NewProp_TapToPlace = { "TapToPlace", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtTapToPlaceBeginPlacingDelegate_Parms, TapToPlace), Z_Construct_UClass_UUxtTapToPlaceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginPlacingDelegate__DelegateSignature_Statics::NewProp_TapToPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginPlacingDelegate__DelegateSignature_Statics::NewProp_TapToPlace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginPlacingDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginPlacingDelegate__DelegateSignature_Statics::NewProp_TapToPlace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginPlacingDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginPlacingDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtTapToPlaceBeginPlacingDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginPlacingDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtTapToPlaceBeginPlacingDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginPlacingDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginPlacingDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginPlacingDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginPlacingDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginPlacingDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginPlacingDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndPlacingDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtTapToPlaceEndPlacingDelegate_Parms
		{
			UUxtTapToPlaceComponent* TapToPlace;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TapToPlace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TapToPlace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndPlacingDelegate__DelegateSignature_Statics::NewProp_TapToPlace_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndPlacingDelegate__DelegateSignature_Statics::NewProp_TapToPlace = { "TapToPlace", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtTapToPlaceEndPlacingDelegate_Parms, TapToPlace), Z_Construct_UClass_UUxtTapToPlaceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndPlacingDelegate__DelegateSignature_Statics::NewProp_TapToPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndPlacingDelegate__DelegateSignature_Statics::NewProp_TapToPlace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndPlacingDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndPlacingDelegate__DelegateSignature_Statics::NewProp_TapToPlace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndPlacingDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndPlacingDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtTapToPlaceEndPlacingDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndPlacingDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtTapToPlaceEndPlacingDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndPlacingDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndPlacingDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndPlacingDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndPlacingDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndPlacingDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndPlacingDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUxtTapToPlaceComponent::execEndPlacement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndPlacement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtTapToPlaceComponent::execStartPlacement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPlacement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtTapToPlaceComponent::execSetTargetComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetComponent(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtTapToPlaceComponent::execGetTargetComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetTargetComponent();
		P_NATIVE_END;
	}
	void UUxtTapToPlaceComponent::StaticRegisterNativesUUxtTapToPlaceComponent()
	{
		UClass* Class = UUxtTapToPlaceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndPlacement", &UUxtTapToPlaceComponent::execEndPlacement },
			{ "GetTargetComponent", &UUxtTapToPlaceComponent::execGetTargetComponent },
			{ "SetTargetComponent", &UUxtTapToPlaceComponent::execSetTargetComponent },
			{ "StartPlacement", &UUxtTapToPlaceComponent::execStartPlacement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtTapToPlaceComponent_EndPlacement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtTapToPlaceComponent_EndPlacement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** End placement of the target component. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "End placement of the target component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtTapToPlaceComponent_EndPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtTapToPlaceComponent, nullptr, "EndPlacement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtTapToPlaceComponent_EndPlacement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTapToPlaceComponent_EndPlacement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtTapToPlaceComponent_EndPlacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtTapToPlaceComponent_EndPlacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtTapToPlaceComponent_GetTargetComponent_Statics
	{
		struct UxtTapToPlaceComponent_eventGetTargetComponent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtTapToPlaceComponent_GetTargetComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtTapToPlaceComponent_GetTargetComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtTapToPlaceComponent_eventGetTargetComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtTapToPlaceComponent_GetTargetComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTapToPlaceComponent_GetTargetComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtTapToPlaceComponent_GetTargetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtTapToPlaceComponent_GetTargetComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtTapToPlaceComponent_GetTargetComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** Get the component to transform. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "Get the component to transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtTapToPlaceComponent_GetTargetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtTapToPlaceComponent, nullptr, "GetTargetComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtTapToPlaceComponent_GetTargetComponent_Statics::UxtTapToPlaceComponent_eventGetTargetComponent_Parms), Z_Construct_UFunction_UUxtTapToPlaceComponent_GetTargetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTapToPlaceComponent_GetTargetComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtTapToPlaceComponent_GetTargetComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTapToPlaceComponent_GetTargetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtTapToPlaceComponent_GetTargetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtTapToPlaceComponent_GetTargetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtTapToPlaceComponent_SetTargetComponent_Statics
	{
		struct UxtTapToPlaceComponent_eventSetTargetComponent_Parms
		{
			USceneComponent* Target;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtTapToPlaceComponent_SetTargetComponent_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtTapToPlaceComponent_SetTargetComponent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtTapToPlaceComponent_eventSetTargetComponent_Parms, Target), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtTapToPlaceComponent_SetTargetComponent_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTapToPlaceComponent_SetTargetComponent_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtTapToPlaceComponent_SetTargetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtTapToPlaceComponent_SetTargetComponent_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtTapToPlaceComponent_SetTargetComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** Set the component to transform. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "Set the component to transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtTapToPlaceComponent_SetTargetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtTapToPlaceComponent, nullptr, "SetTargetComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtTapToPlaceComponent_SetTargetComponent_Statics::UxtTapToPlaceComponent_eventSetTargetComponent_Parms), Z_Construct_UFunction_UUxtTapToPlaceComponent_SetTargetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTapToPlaceComponent_SetTargetComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtTapToPlaceComponent_SetTargetComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTapToPlaceComponent_SetTargetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtTapToPlaceComponent_SetTargetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtTapToPlaceComponent_SetTargetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtTapToPlaceComponent_StartPlacement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtTapToPlaceComponent_StartPlacement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** Start placement of the target component. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "Start placement of the target component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtTapToPlaceComponent_StartPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtTapToPlaceComponent, nullptr, "StartPlacement", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtTapToPlaceComponent_StartPlacement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTapToPlaceComponent_StartPlacement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtTapToPlaceComponent_StartPlacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtTapToPlaceComponent_StartPlacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtTapToPlaceComponent);
	UClass* Z_Construct_UClass_UUxtTapToPlaceComponent_NoRegister()
	{
		return UUxtTapToPlaceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtTapToPlaceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginPlacing_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginPlacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEndPlacing_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndPlacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientationType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OrientationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlacementType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlacementType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeepOrientationVertical_MetaData[];
#endif
		static void NewProp_KeepOrientationVertical_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_KeepOrientationVertical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalSurfaceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalSurfaceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlacementDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultPlacementDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRaycastDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRaycastDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolatePose_MetaData[];
#endif
		static void NewProp_bInterpolatePose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolatePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LerpTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultSurfaceNormalOffset_MetaData[];
#endif
		static void NewProp_bUseDefaultSurfaceNormalOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultSurfaceNormalOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceNormalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceNormalOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtTapToPlaceComponent_EndPlacement, "EndPlacement" }, // 3037780952
		{ &Z_Construct_UFunction_UUxtTapToPlaceComponent_GetTargetComponent, "GetTargetComponent" }, // 1137075130
		{ &Z_Construct_UFunction_UUxtTapToPlaceComponent_SetTargetComponent, "SetTargetComponent" }, // 4221704183
		{ &Z_Construct_UFunction_UUxtTapToPlaceComponent_StartPlacement, "StartPlacement" }, // 1746245059
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Tap to place is a control used to transform objects at a distance. The control allows you to select an object\n * you wish to place using far interaction. After that, the object will be locked to your gaze and will be placed\n * against surfaces and other objects. Any subsequent far release will end placement, even if the pointer is not\n * pointing at the object being placed.\n */" },
		{ "IncludePath", "Behaviors/UxtTapToPlaceComponent.h" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "Tap to place is a control used to transform objects at a distance. The control allows you to select an object\nyou wish to place using far interaction. After that, the object will be locked to your gaze and will be placed\nagainst surfaces and other objects. Any subsequent far release will end placement, even if the pointer is not\npointing at the object being placed." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnBeginFocus_MetaData[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** Event raised when a pointer starts focusing the placeable object. bWasAlreadyFocused indicates if the object was already focused by\n\x09 * another pointer. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "Event raised when a pointer starts focusing the placeable object. bWasAlreadyFocused indicates if the object was already focused by\nanother pointer." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnBeginFocus = { "OnBeginFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTapToPlaceComponent, OnBeginFocus), Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnBeginFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnBeginFocus_MetaData)) }; // 3548218205
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnUpdateFocus_MetaData[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** Event raised when a focusing pointer updates. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "Event raised when a focusing pointer updates." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnUpdateFocus = { "OnUpdateFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTapToPlaceComponent, OnUpdateFocus), Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceUpdateFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnUpdateFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnUpdateFocus_MetaData)) }; // 1912821809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnEndFocus_MetaData[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** Event raised when a pointer ends focusing the placeable object. bIsStillFocused indicates if the object is still focused by another\n\x09 * pointer. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "Event raised when a pointer ends focusing the placeable object. bIsStillFocused indicates if the object is still focused by another\npointer." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnEndFocus = { "OnEndFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTapToPlaceComponent, OnEndFocus), Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnEndFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnEndFocus_MetaData)) }; // 2992428625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnBeginPlacing_MetaData[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** Event raised when a placeable object is selected. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "Event raised when a placeable object is selected." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnBeginPlacing = { "OnBeginPlacing", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTapToPlaceComponent, OnBeginPlacing), Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceBeginPlacingDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnBeginPlacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnBeginPlacing_MetaData)) }; // 1825501354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnEndPlacing_MetaData[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** Event raised when a placeable object is deselected and placed. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "Event raised when a placeable object is deselected and placed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnEndPlacing = { "OnEndPlacing", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTapToPlaceComponent, OnEndPlacing), Z_Construct_UDelegateFunction_UXTools_UxtTapToPlaceEndPlacingDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnEndPlacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnEndPlacing_MetaData)) }; // 3568822609
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OrientationType_MetaData[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** How the object is oriented against hit surfaces. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "How the object is oriented against hit surfaces." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OrientationType = { "OrientationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTapToPlaceComponent, OrientationType), Z_Construct_UEnum_UXTools_EUxtTapToPlaceOrientBehavior, METADATA_PARAMS(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OrientationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OrientationType_MetaData)) }; // 3025665296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_PlacementType_MetaData[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** How the target should be placed, using head or far pointer. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "How the target should be placed, using head or far pointer." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_PlacementType = { "PlacementType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTapToPlaceComponent, PlacementType), Z_Construct_UEnum_UXTools_EUxtTapToPlaceMode, METADATA_PARAMS(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_PlacementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_PlacementType_MetaData)) }; // 3438825422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_KeepOrientationVertical_MetaData[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** Whether the orientation of the object should pitch or roll. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "Whether the orientation of the object should pitch or roll." },
	};
#endif
	void Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_KeepOrientationVertical_SetBit(void* Obj)
	{
		((UUxtTapToPlaceComponent*)Obj)->KeepOrientationVertical = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_KeepOrientationVertical = { "KeepOrientationVertical", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtTapToPlaceComponent), &Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_KeepOrientationVertical_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_KeepOrientationVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_KeepOrientationVertical_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_HorizontalSurfaceThreshold_MetaData[] = {
		{ "Category", "Uxt Tap To Place|Advanced" },
		{ "ClampMax", "45" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Angle in degrees at which a surface is considered horizontal in AlignToSurface mode. Slightly increasing this value helps avoid\n\x09 * jitter resulting from noise in depth data but it can cause objects to lean sideways when moved over slightly inclined surfaces. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "Angle in degrees at which a surface is considered horizontal in AlignToSurface mode. Slightly increasing this value helps avoid\njitter resulting from noise in depth data but it can cause objects to lean sideways when moved over slightly inclined surfaces." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_HorizontalSurfaceThreshold = { "HorizontalSurfaceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTapToPlaceComponent, HorizontalSurfaceThreshold), METADATA_PARAMS(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_HorizontalSurfaceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_HorizontalSurfaceThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_DefaultPlacementDistance_MetaData[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** Distance to place the object at if no obstructing surface. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "Distance to place the object at if no obstructing surface." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_DefaultPlacementDistance = { "DefaultPlacementDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTapToPlaceComponent, DefaultPlacementDistance), METADATA_PARAMS(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_DefaultPlacementDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_DefaultPlacementDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_MaxRaycastDistance_MetaData[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** Max distance to cast to when checking for obstructing surfaces. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "Max distance to cast to when checking for obstructing surfaces." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_MaxRaycastDistance = { "MaxRaycastDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTapToPlaceComponent, MaxRaycastDistance), METADATA_PARAMS(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_MaxRaycastDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_MaxRaycastDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** Trace channel for raycast. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "Trace channel for raycast." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTapToPlaceComponent, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_TraceChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_bInterpolatePose_MetaData[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** Option to ignore interpolation between follow poses */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "Option to ignore interpolation between follow poses" },
	};
#endif
	void Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_bInterpolatePose_SetBit(void* Obj)
	{
		((UUxtTapToPlaceComponent*)Obj)->bInterpolatePose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_bInterpolatePose = { "bInterpolatePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtTapToPlaceComponent), &Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_bInterpolatePose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_bInterpolatePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_bInterpolatePose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_LerpTime_MetaData[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** Rate at which its owner will move toward default distance when angular leashing */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "Rate at which its owner will move toward default distance when angular leashing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_LerpTime = { "LerpTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTapToPlaceComponent, LerpTime), METADATA_PARAMS(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_LerpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_LerpTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_bUseDefaultSurfaceNormalOffset_MetaData[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** When false, use @ref SurfaceNormalOffset. Otherwise, automatically calculate the offset value. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "When false, use @ref SurfaceNormalOffset. Otherwise, automatically calculate the offset value." },
	};
#endif
	void Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_bUseDefaultSurfaceNormalOffset_SetBit(void* Obj)
	{
		((UUxtTapToPlaceComponent*)Obj)->bUseDefaultSurfaceNormalOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_bUseDefaultSurfaceNormalOffset = { "bUseDefaultSurfaceNormalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtTapToPlaceComponent), &Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_bUseDefaultSurfaceNormalOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_bUseDefaultSurfaceNormalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_bUseDefaultSurfaceNormalOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_SurfaceNormalOffset_MetaData[] = {
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** The distance between the pivot point of the object and the surface on which the object is being placed. */" },
		{ "DisplayAfter", "bUseDefaultSurfaceNormalOffset" },
		{ "EditCondition", "!bUseDefaultSurfaceNormalOffset" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "The distance between the pivot point of the object and the surface on which the object is being placed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_SurfaceNormalOffset = { "SurfaceNormalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTapToPlaceComponent, SurfaceNormalOffset), METADATA_PARAMS(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_SurfaceNormalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_SurfaceNormalOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "AllowedClasses", "SceneComponent" },
		{ "Category", "Uxt Tap To Place" },
		{ "Comment", "/** The component to transform, defaults to the first primitive component if not specified */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtTapToPlaceComponent.h" },
		{ "ToolTip", "The component to transform, defaults to the first primitive component if not specified" },
		{ "UseComponentPicker", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTapToPlaceComponent, TargetComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_TargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_TargetComponent_MetaData)) }; // 3442474717
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnBeginFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnUpdateFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnEndFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnBeginPlacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OnEndPlacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_OrientationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_PlacementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_KeepOrientationVertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_HorizontalSurfaceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_DefaultPlacementDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_MaxRaycastDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_bInterpolatePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_LerpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_bUseDefaultSurfaceNormalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_SurfaceNormalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::NewProp_TargetComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUxtFarTarget_NoRegister, (int32)VTABLE_OFFSET(UUxtTapToPlaceComponent, IUxtFarTarget), false },  // 3674043034
			{ Z_Construct_UClass_UUxtFarHandler_NoRegister, (int32)VTABLE_OFFSET(UUxtTapToPlaceComponent, IUxtFarHandler), false },  // 1789224393
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtTapToPlaceComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::ClassParams = {
		&UUxtTapToPlaceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtTapToPlaceComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtTapToPlaceComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtTapToPlaceComponent.OuterSingleton, Z_Construct_UClass_UUxtTapToPlaceComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtTapToPlaceComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtTapToPlaceComponent>()
	{
		return UUxtTapToPlaceComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtTapToPlaceComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_Statics::EnumInfo[] = {
		{ EUxtTapToPlaceOrientBehavior_StaticEnum, TEXT("EUxtTapToPlaceOrientBehavior"), &Z_Registration_Info_UEnum_EUxtTapToPlaceOrientBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3025665296U) },
		{ EUxtTapToPlaceMode_StaticEnum, TEXT("EUxtTapToPlaceMode"), &Z_Registration_Info_UEnum_EUxtTapToPlaceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3438825422U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtTapToPlaceComponent, UUxtTapToPlaceComponent::StaticClass, TEXT("UUxtTapToPlaceComponent"), &Z_Registration_Info_UClass_UUxtTapToPlaceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtTapToPlaceComponent), 2394535496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_3734717294(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtTapToPlaceComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
