// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtTouchableVolumeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtTouchableVolumeComponent() {}
// Cross Module References
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTouchableVolumeComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPointerComponent_NoRegister();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtVolumeEnabledDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtVolumeDisabledDelegate__DelegateSignature();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTouchableVolumeComponent();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtUIElementComponent();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPokeTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPokeHandler_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarHandler_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtVolumeBeginFocusDelegate_Parms
		{
			UUxtTouchableVolumeComponent* Volume;
			UUxtPointerComponent* Pointer;
			bool bWasAlreadyFocused;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Volume;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtVolumeBeginFocusDelegate_Parms, Volume), Z_Construct_UClass_UUxtTouchableVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtVolumeBeginFocusDelegate_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	void Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::NewProp_bWasAlreadyFocused_SetBit(void* Obj)
	{
		((_Script_UXTools_eventUxtVolumeBeginFocusDelegate_Parms*)Obj)->bWasAlreadyFocused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::NewProp_bWasAlreadyFocused = { "bWasAlreadyFocused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_UXTools_eventUxtVolumeBeginFocusDelegate_Parms), &Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::NewProp_bWasAlreadyFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::NewProp_Pointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::NewProp_bWasAlreadyFocused,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// Delegates\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtVolumeBeginFocusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtVolumeBeginFocusDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtVolumeUpdateFocusDelegate_Parms
		{
			UUxtTouchableVolumeComponent* Volume;
			UUxtPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Volume;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtVolumeUpdateFocusDelegate_Parms, Volume), Z_Construct_UClass_UUxtTouchableVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtVolumeUpdateFocusDelegate_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtVolumeUpdateFocusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtVolumeUpdateFocusDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtVolumeEndFocusDelegate_Parms
		{
			UUxtTouchableVolumeComponent* Volume;
			UUxtPointerComponent* Pointer;
			bool bIsStillFocused;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Volume;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtVolumeEndFocusDelegate_Parms, Volume), Z_Construct_UClass_UUxtTouchableVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtVolumeEndFocusDelegate_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	void Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::NewProp_bIsStillFocused_SetBit(void* Obj)
	{
		((_Script_UXTools_eventUxtVolumeEndFocusDelegate_Parms*)Obj)->bIsStillFocused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::NewProp_bIsStillFocused = { "bIsStillFocused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_UXTools_eventUxtVolumeEndFocusDelegate_Parms), &Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::NewProp_bIsStillFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::NewProp_Pointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::NewProp_bIsStillFocused,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtVolumeEndFocusDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtVolumeEndFocusDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtVolumeBeginPokeDelegate_Parms
		{
			UUxtTouchableVolumeComponent* Volume;
			UUxtPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Volume;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtVolumeBeginPokeDelegate_Parms, Volume), Z_Construct_UClass_UUxtTouchableVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtVolumeBeginPokeDelegate_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtVolumeBeginPokeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtVolumeBeginPokeDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtVolumeUpdatePokeDelegate_Parms
		{
			UUxtTouchableVolumeComponent* Volume;
			UUxtPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Volume;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtVolumeUpdatePokeDelegate_Parms, Volume), Z_Construct_UClass_UUxtTouchableVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtVolumeUpdatePokeDelegate_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtVolumeUpdatePokeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtVolumeUpdatePokeDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtVolumeEndPokeDelegate_Parms
		{
			UUxtTouchableVolumeComponent* Volume;
			UUxtPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Volume;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtVolumeEndPokeDelegate_Parms, Volume), Z_Construct_UClass_UUxtTouchableVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtVolumeEndPokeDelegate_Parms, Pointer), Z_Construct_UClass_UUxtPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtVolumeEndPokeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtVolumeEndPokeDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtVolumeEnabledDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtVolumeEnabledDelegate_Parms
		{
			UUxtTouchableVolumeComponent* Volume;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeEnabledDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeEnabledDelegate__DelegateSignature_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtVolumeEnabledDelegate_Parms, Volume), Z_Construct_UClass_UUxtTouchableVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEnabledDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEnabledDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtVolumeEnabledDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtVolumeEnabledDelegate__DelegateSignature_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeEnabledDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeEnabledDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtVolumeEnabledDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEnabledDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtVolumeEnabledDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtVolumeEnabledDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEnabledDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEnabledDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeEnabledDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtVolumeEnabledDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtVolumeEnabledDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtVolumeDisabledDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtVolumeDisabledDelegate_Parms
		{
			UUxtTouchableVolumeComponent* Volume;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeDisabledDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeDisabledDelegate__DelegateSignature_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtVolumeDisabledDelegate_Parms, Volume), Z_Construct_UClass_UUxtTouchableVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeDisabledDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeDisabledDelegate__DelegateSignature_Statics::NewProp_Volume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtVolumeDisabledDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtVolumeDisabledDelegate__DelegateSignature_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtVolumeDisabledDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtVolumeDisabledDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtVolumeDisabledDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtVolumeDisabledDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtVolumeDisabledDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtVolumeDisabledDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeDisabledDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtVolumeDisabledDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtVolumeDisabledDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtVolumeDisabledDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtVolumeDisabledDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUxtTouchableVolumeComponent::execOnInputTouchLeaveHandler)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInputTouchLeaveHandler(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtTouchableVolumeComponent::execOnInputTouchEndHandler)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInputTouchEndHandler(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtTouchableVolumeComponent::execOnInputTouchBeginHandler)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInputTouchBeginHandler(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtTouchableVolumeComponent::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_Enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_Enabled);
		P_NATIVE_END;
	}
	void UUxtTouchableVolumeComponent::StaticRegisterNativesUUxtTouchableVolumeComponent()
	{
		UClass* Class = UUxtTouchableVolumeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInputTouchBeginHandler", &UUxtTouchableVolumeComponent::execOnInputTouchBeginHandler },
			{ "OnInputTouchEndHandler", &UUxtTouchableVolumeComponent::execOnInputTouchEndHandler },
			{ "OnInputTouchLeaveHandler", &UUxtTouchableVolumeComponent::execOnInputTouchLeaveHandler },
			{ "SetEnabled", &UUxtTouchableVolumeComponent::execSetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler_Statics
	{
		struct UxtTouchableVolumeComponent_eventOnInputTouchBeginHandler_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			UPrimitiveComponent* TouchedComponent;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtTouchableVolumeComponent_eventOnInputTouchBeginHandler_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) }; // 2899773687
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler_Statics::NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtTouchableVolumeComponent_eventOnInputTouchBeginHandler_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler_Statics::NewProp_TouchedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler_Statics::NewProp_TouchedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler_Statics::NewProp_FingerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler_Statics::NewProp_TouchedComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Touchable Volume" },
		{ "Comment", "//\n// Touch input handlers\n" },
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
		{ "ToolTip", "Touch input handlers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtTouchableVolumeComponent, nullptr, "OnInputTouchBeginHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler_Statics::UxtTouchableVolumeComponent_eventOnInputTouchBeginHandler_Parms), Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler_Statics
	{
		struct UxtTouchableVolumeComponent_eventOnInputTouchEndHandler_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			UPrimitiveComponent* TouchedComponent;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtTouchableVolumeComponent_eventOnInputTouchEndHandler_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) }; // 2899773687
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler_Statics::NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtTouchableVolumeComponent_eventOnInputTouchEndHandler_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler_Statics::NewProp_TouchedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler_Statics::NewProp_TouchedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler_Statics::NewProp_FingerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler_Statics::NewProp_TouchedComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Touchable Volume" },
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtTouchableVolumeComponent, nullptr, "OnInputTouchEndHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler_Statics::UxtTouchableVolumeComponent_eventOnInputTouchEndHandler_Parms), Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler_Statics
	{
		struct UxtTouchableVolumeComponent_eventOnInputTouchLeaveHandler_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			UPrimitiveComponent* TouchedComponent;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtTouchableVolumeComponent_eventOnInputTouchLeaveHandler_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) }; // 2899773687
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler_Statics::NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtTouchableVolumeComponent_eventOnInputTouchLeaveHandler_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler_Statics::NewProp_TouchedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler_Statics::NewProp_TouchedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler_Statics::NewProp_FingerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler_Statics::NewProp_TouchedComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Touchable Volume" },
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtTouchableVolumeComponent, nullptr, "OnInputTouchLeaveHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler_Statics::UxtTouchableVolumeComponent_eventOnInputTouchLeaveHandler_Parms), Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtTouchableVolumeComponent_SetEnabled_Statics
	{
		struct UxtTouchableVolumeComponent_eventSetEnabled_Parms
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
	void Z_Construct_UFunction_UUxtTouchableVolumeComponent_SetEnabled_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((UxtTouchableVolumeComponent_eventSetEnabled_Parms*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtTouchableVolumeComponent_SetEnabled_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtTouchableVolumeComponent_eventSetEnabled_Parms), &Z_Construct_UFunction_UUxtTouchableVolumeComponent_SetEnabled_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtTouchableVolumeComponent_SetEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtTouchableVolumeComponent_SetEnabled_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtTouchableVolumeComponent_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Touchable Volume" },
		{ "Comment", "/** Set if the touchable volume is enabled */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
		{ "ToolTip", "Set if the touchable volume is enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtTouchableVolumeComponent_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtTouchableVolumeComponent, nullptr, "SetEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtTouchableVolumeComponent_SetEnabled_Statics::UxtTouchableVolumeComponent_eventSetEnabled_Parms), Z_Construct_UFunction_UUxtTouchableVolumeComponent_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTouchableVolumeComponent_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtTouchableVolumeComponent_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtTouchableVolumeComponent_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtTouchableVolumeComponent_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtTouchableVolumeComponent_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtTouchableVolumeComponent);
	UClass* Z_Construct_UClass_UUxtTouchableVolumeComponent_NoRegister()
	{
		return UUxtTouchableVolumeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionMode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InteractionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockFocus_MetaData[];
#endif
		static void NewProp_bLockFocus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockFocus;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchablePrimitives_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchablePrimitives_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_TouchablePrimitives;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVolumeEnabled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVolumeEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVolumeDisabled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVolumeDisabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtUIElementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchBeginHandler, "OnInputTouchBeginHandler" }, // 2141962520
		{ &Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchEndHandler, "OnInputTouchEndHandler" }, // 1072926924
		{ &Z_Construct_UFunction_UUxtTouchableVolumeComponent_OnInputTouchLeaveHandler, "OnInputTouchLeaveHandler" }, // 2778875277
		{ &Z_Construct_UFunction_UUxtTouchableVolumeComponent_SetEnabled, "SetEnabled" }, // 2681786459
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Component that turns the actor it is attached to into a touchable volume.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Controls/UxtTouchableVolumeComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
		{ "ToolTip", "Component that turns the actor it is attached to into a touchable volume." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_InteractionMode_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EUxtInteractionMode" },
		{ "Category", "Uxt Touchable Volume" },
		{ "Comment", "/** Types of interaction the volume should respond to. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
		{ "ToolTip", "Types of interaction the volume should respond to." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_InteractionMode = { "InteractionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTouchableVolumeComponent, InteractionMode), METADATA_PARAMS(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_InteractionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_InteractionMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_bLockFocus_MetaData[] = {
		{ "Category", "Uxt Touchable Volume" },
		{ "Comment", "/** Should the volume lock the pointer's focus when poked. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
		{ "ToolTip", "Should the volume lock the pointer's focus when poked." },
	};
#endif
	void Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_bLockFocus_SetBit(void* Obj)
	{
		((UUxtTouchableVolumeComponent*)Obj)->bLockFocus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_bLockFocus = { "bLockFocus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtTouchableVolumeComponent), &Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_bLockFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_bLockFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_bLockFocus_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_TouchablePrimitives_ElementProp = { "TouchablePrimitives", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_TouchablePrimitives_MetaData[] = {
		{ "Category", "Uxt Touchable Volume" },
		{ "Comment", "/** List of primitives used as touchable targets.\n\x09 * If the list is empty then all primitives of the actor are used.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
		{ "ToolTip", "List of primitives used as touchable targets.\nIf the list is empty then all primitives of the actor are used." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_TouchablePrimitives = { "TouchablePrimitives", nullptr, (EPropertyFlags)0x001000800000000c, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTouchableVolumeComponent, TouchablePrimitives), METADATA_PARAMS(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_TouchablePrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_TouchablePrimitives_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnBeginFocus_MetaData[] = {
		{ "Category", "Uxt Touchable Volume" },
		{ "Comment", "/** Event raised when a pointer starts focusing the touchable volume. WasFocused indicates if the volume was already focused by another\n\x09 * pointer. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
		{ "ToolTip", "Event raised when a pointer starts focusing the touchable volume. WasFocused indicates if the volume was already focused by another\npointer." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnBeginFocus = { "OnBeginFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTouchableVolumeComponent, OnBeginFocus), Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnBeginFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnBeginFocus_MetaData)) }; // 2730912783
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnUpdateFocus_MetaData[] = {
		{ "Category", "Uxt Touchable Volume" },
		{ "Comment", "/** Event raised when a focusing pointer updates. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
		{ "ToolTip", "Event raised when a focusing pointer updates." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnUpdateFocus = { "OnUpdateFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTouchableVolumeComponent, OnUpdateFocus), Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdateFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnUpdateFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnUpdateFocus_MetaData)) }; // 2628918324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnEndFocus_MetaData[] = {
		{ "Category", "Uxt Touchable Volume" },
		{ "Comment", "/** Event raised when a pointer ends focusing the touchable volume. IsFocused indicates if the volume is still focused by another\n\x09 * pointer. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
		{ "ToolTip", "Event raised when a pointer ends focusing the touchable volume. IsFocused indicates if the volume is still focused by another\npointer." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnEndFocus = { "OnEndFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTouchableVolumeComponent, OnEndFocus), Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnEndFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnEndFocus_MetaData)) }; // 1100993969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnBeginPoke_MetaData[] = {
		{ "Category", "Uxt Touchable Volume" },
		{ "Comment", "/** Event raised when a pointer starts poking the touchable volume. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
		{ "ToolTip", "Event raised when a pointer starts poking the touchable volume." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnBeginPoke = { "OnBeginPoke", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTouchableVolumeComponent, OnBeginPoke), Z_Construct_UDelegateFunction_UXTools_UxtVolumeBeginPokeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnBeginPoke_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnBeginPoke_MetaData)) }; // 447477702
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnUpdatePoke_MetaData[] = {
		{ "Category", "Uxt Touchable Volume" },
		{ "Comment", "/** Event raised while a pointer is poking the touchable volume. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
		{ "ToolTip", "Event raised while a pointer is poking the touchable volume." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnUpdatePoke = { "OnUpdatePoke", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTouchableVolumeComponent, OnUpdatePoke), Z_Construct_UDelegateFunction_UXTools_UxtVolumeUpdatePokeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnUpdatePoke_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnUpdatePoke_MetaData)) }; // 3854704681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnEndPoke_MetaData[] = {
		{ "Category", "Uxt Touchable Volume" },
		{ "Comment", "/** Event raised when a pointer ends poking the touchable volume. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
		{ "ToolTip", "Event raised when a pointer ends poking the touchable volume." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnEndPoke = { "OnEndPoke", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTouchableVolumeComponent, OnEndPoke), Z_Construct_UDelegateFunction_UXTools_UxtVolumeEndPokeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnEndPoke_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnEndPoke_MetaData)) }; // 2190691827
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnVolumeEnabled_MetaData[] = {
		{ "Category", "Uxt Touchable Volume" },
		{ "Comment", "/** Event raised when the volume is enabled. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
		{ "ToolTip", "Event raised when the volume is enabled." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnVolumeEnabled = { "OnVolumeEnabled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTouchableVolumeComponent, OnVolumeEnabled), Z_Construct_UDelegateFunction_UXTools_UxtVolumeEnabledDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnVolumeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnVolumeEnabled_MetaData)) }; // 610872342
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnVolumeDisabled_MetaData[] = {
		{ "Category", "Uxt Touchable Volume" },
		{ "Comment", "/** Event raised when the volume is disabled. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtTouchableVolumeComponent.h" },
		{ "ToolTip", "Event raised when the volume is disabled." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnVolumeDisabled = { "OnVolumeDisabled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTouchableVolumeComponent, OnVolumeDisabled), Z_Construct_UDelegateFunction_UXTools_UxtVolumeDisabledDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnVolumeDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnVolumeDisabled_MetaData)) }; // 1091208556
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_InteractionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_bLockFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_TouchablePrimitives_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_TouchablePrimitives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnBeginFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnUpdateFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnEndFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnBeginPoke,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnUpdatePoke,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnEndPoke,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnVolumeEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::NewProp_OnVolumeDisabled,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUxtPokeTarget_NoRegister, (int32)VTABLE_OFFSET(UUxtTouchableVolumeComponent, IUxtPokeTarget), false },  // 73628702
			{ Z_Construct_UClass_UUxtPokeHandler_NoRegister, (int32)VTABLE_OFFSET(UUxtTouchableVolumeComponent, IUxtPokeHandler), false },  // 4244100539
			{ Z_Construct_UClass_UUxtFarTarget_NoRegister, (int32)VTABLE_OFFSET(UUxtTouchableVolumeComponent, IUxtFarTarget), false },  // 3674043034
			{ Z_Construct_UClass_UUxtFarHandler_NoRegister, (int32)VTABLE_OFFSET(UUxtTouchableVolumeComponent, IUxtFarHandler), false },  // 1789224393
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtTouchableVolumeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::ClassParams = {
		&UUxtTouchableVolumeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtTouchableVolumeComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtTouchableVolumeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtTouchableVolumeComponent.OuterSingleton, Z_Construct_UClass_UUxtTouchableVolumeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtTouchableVolumeComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtTouchableVolumeComponent>()
	{
		return UUxtTouchableVolumeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtTouchableVolumeComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtTouchableVolumeComponent, UUxtTouchableVolumeComponent::StaticClass, TEXT("UUxtTouchableVolumeComponent"), &Z_Registration_Info_UClass_UUxtTouchableVolumeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtTouchableVolumeComponent), 1660434904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_867508298(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtTouchableVolumeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
