// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtManipulatorComponentBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtManipulatorComponentBase() {}
// Cross Module References
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtManipulatorComponentBase_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtManipulatorComponentBase();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabTargetComponent();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtGrabPointerData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtUpdateTransformDelegate_Parms
		{
			USceneComponent* TargetComponent;
			FTransform Transform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtUpdateTransformDelegate_Parms, TargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::NewProp_TargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::NewProp_TargetComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtUpdateTransformDelegate_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::NewProp_TargetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event triggered when the actor's transform is updated. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "Event triggered when the actor's transform is updated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtUpdateTransformDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtUpdateTransformDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponentBase::execOnManipulationEnd)
	{
		P_GET_OBJECT(UUxtGrabTargetComponent,Z_Param_Grabbable);
		P_GET_STRUCT(FUxtGrabPointerData,Z_Param_GrabPointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnManipulationEnd(Z_Param_Grabbable,Z_Param_GrabPointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponentBase::execOnManipulationStarted)
	{
		P_GET_OBJECT(UUxtGrabTargetComponent,Z_Param_Grabbable);
		P_GET_STRUCT(FUxtGrabPointerData,Z_Param_GrabPointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnManipulationStarted(Z_Param_Grabbable,Z_Param_GrabPointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponentBase::execGetTargetComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetTargetComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponentBase::execApplyTargetTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TargetTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyTargetTransform(Z_Param_Out_TargetTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponentBase::execSetInitialTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInitialTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponentBase::execSmoothTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SourceTransform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LocationLerpTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationLerpTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TargetTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SmoothTransform(Z_Param_Out_SourceTransform,Z_Param_LocationLerpTime,Z_Param_RotationLerpTime,Z_Param_DeltaSeconds,Z_Param_Out_TargetTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponentBase::execRotateAboutAxis)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SourceTransform);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Pivot);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Axis);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TargetTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateAboutAxis(Z_Param_Out_SourceTransform,Z_Param_Out_Pivot,Z_Param_Out_Axis,Z_Param_Out_TargetTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponentBase::execRotateAroundPivot)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SourceTransform);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Pivot);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TargetTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateAroundPivot(Z_Param_Out_SourceTransform,Z_Param_Out_Pivot,Z_Param_Out_TargetTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponentBase::execMoveToTargets)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SourceTransform);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TargetTransform);
		P_GET_UBOOL(Z_Param_UsePointerRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToTargets(Z_Param_Out_SourceTransform,Z_Param_Out_TargetTransform,Z_Param_UsePointerRotation);
		P_NATIVE_END;
	}
	void UUxtManipulatorComponentBase::StaticRegisterNativesUUxtManipulatorComponentBase()
	{
		UClass* Class = UUxtManipulatorComponentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyTargetTransform", &UUxtManipulatorComponentBase::execApplyTargetTransform },
			{ "GetTargetComponent", &UUxtManipulatorComponentBase::execGetTargetComponent },
			{ "MoveToTargets", &UUxtManipulatorComponentBase::execMoveToTargets },
			{ "OnManipulationEnd", &UUxtManipulatorComponentBase::execOnManipulationEnd },
			{ "OnManipulationStarted", &UUxtManipulatorComponentBase::execOnManipulationStarted },
			{ "RotateAboutAxis", &UUxtManipulatorComponentBase::execRotateAboutAxis },
			{ "RotateAroundPivot", &UUxtManipulatorComponentBase::execRotateAroundPivot },
			{ "SetInitialTransform", &UUxtManipulatorComponentBase::execSetInitialTransform },
			{ "SmoothTransform", &UUxtManipulatorComponentBase::execSmoothTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics
	{
		struct UxtManipulatorComponentBase_eventApplyTargetTransform_Parms
		{
			FTransform TargetTransform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::NewProp_TargetTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventApplyTargetTransform_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::NewProp_TargetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::NewProp_TargetTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::NewProp_TargetTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Manipulator Component Base" },
		{ "Comment", "/**\n\x09 * Apply the transform to the actor root scene component.\n\x09 * Relative transform between the manipulator component and the root scene component is preserved.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "Apply the transform to the actor root scene component.\nRelative transform between the manipulator component and the root scene component is preserved." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponentBase, nullptr, "ApplyTargetTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::UxtManipulatorComponentBase_eventApplyTargetTransform_Parms), Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponentBase_GetTargetComponent_Statics
	{
		struct UxtManipulatorComponentBase_eventGetTargetComponent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_GetTargetComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_GetTargetComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventGetTargetComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_GetTargetComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_GetTargetComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponentBase_GetTargetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_GetTargetComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_GetTargetComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Manipulator Component Base" },
		{ "Comment", "/** Get the component the manipulator is targeting. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "Get the component the manipulator is targeting." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponentBase_GetTargetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponentBase, nullptr, "GetTargetComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponentBase_GetTargetComponent_Statics::UxtManipulatorComponentBase_eventGetTargetComponent_Parms), Z_Construct_UFunction_UUxtManipulatorComponentBase_GetTargetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_GetTargetComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_GetTargetComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_GetTargetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponentBase_GetTargetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponentBase_GetTargetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics
	{
		struct UxtManipulatorComponentBase_eventMoveToTargets_Parms
		{
			FTransform SourceTransform;
			FTransform TargetTransform;
			bool UsePointerRotation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
		static void NewProp_UsePointerRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UsePointerRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_SourceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_SourceTransform = { "SourceTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventMoveToTargets_Parms, SourceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_SourceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_SourceTransform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventMoveToTargets_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_UsePointerRotation_SetBit(void* Obj)
	{
		((UxtManipulatorComponentBase_eventMoveToTargets_Parms*)Obj)->UsePointerRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_UsePointerRotation = { "UsePointerRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtManipulatorComponentBase_eventMoveToTargets_Parms), &Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_UsePointerRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_SourceTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_TargetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_UsePointerRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Manipulator Component Base" },
		{ "Comment", "/**\n\x09 * Translate the source transform such that grab points match targets.\n\x09 * If more than one pointer is used then the centroid of the grab points and targets is used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "Translate the source transform such that grab points match targets.\nIf more than one pointer is used then the centroid of the grab points and targets is used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponentBase, nullptr, "MoveToTargets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::UxtManipulatorComponentBase_eventMoveToTargets_Parms), Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics
	{
		struct UxtManipulatorComponentBase_eventOnManipulationEnd_Parms
		{
			UUxtGrabTargetComponent* Grabbable;
			FUxtGrabPointerData GrabPointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grabbable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Grabbable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabPointer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventOnManipulationEnd_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::NewProp_Grabbable_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::NewProp_GrabPointer = { "GrabPointer", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventOnManipulationEnd_Parms, GrabPointer), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) }; // 1953156998
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::NewProp_Grabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::NewProp_GrabPointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponentBase, nullptr, "OnManipulationEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::UxtManipulatorComponentBase_eventOnManipulationEnd_Parms), Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics
	{
		struct UxtManipulatorComponentBase_eventOnManipulationStarted_Parms
		{
			UUxtGrabTargetComponent* Grabbable;
			FUxtGrabPointerData GrabPointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grabbable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Grabbable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabPointer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventOnManipulationStarted_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::NewProp_Grabbable_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::NewProp_GrabPointer = { "GrabPointer", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventOnManipulationStarted_Parms, GrabPointer), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) }; // 1953156998
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::NewProp_Grabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::NewProp_GrabPointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponentBase, nullptr, "OnManipulationStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::UxtManipulatorComponentBase_eventOnManipulationStarted_Parms), Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics
	{
		struct UxtManipulatorComponentBase_eventRotateAboutAxis_Parms
		{
			FTransform SourceTransform;
			FVector Pivot;
			FVector Axis;
			FTransform TargetTransform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_SourceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_SourceTransform = { "SourceTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventRotateAboutAxis_Parms, SourceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_SourceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_SourceTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Pivot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventRotateAboutAxis_Parms, Pivot), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Pivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Pivot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventRotateAboutAxis_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Axis_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventRotateAboutAxis_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_SourceTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Pivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_TargetTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Manipulator Component Base" },
		{ "Comment", "/**\n\x09 * Rotates the source transform around the pivot point on the given axis such that the pointers line up with current targets.\n\x09 * If more than one pointer is used then the resulting rotation will minimize the mean square of target distances.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "Rotates the source transform around the pivot point on the given axis such that the pointers line up with current targets.\nIf more than one pointer is used then the resulting rotation will minimize the mean square of target distances." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponentBase, nullptr, "RotateAboutAxis", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::UxtManipulatorComponentBase_eventRotateAboutAxis_Parms), Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics
	{
		struct UxtManipulatorComponentBase_eventRotateAroundPivot_Parms
		{
			FTransform SourceTransform;
			FVector Pivot;
			FTransform TargetTransform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pivot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_SourceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_SourceTransform = { "SourceTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventRotateAroundPivot_Parms, SourceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_SourceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_SourceTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_Pivot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventRotateAroundPivot_Parms, Pivot), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_Pivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_Pivot_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventRotateAroundPivot_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_SourceTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_Pivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_TargetTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Manipulator Component Base" },
		{ "Comment", "/**\n\x09 * Rotates the source transform around the pivot point such that the pointers line up with current targets.\n\x09 * If more than one pointer is used then the resulting rotation will minimize the mean square of target distances.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "Rotates the source transform around the pivot point such that the pointers line up with current targets.\nIf more than one pointer is used then the resulting rotation will minimize the mean square of target distances." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponentBase, nullptr, "RotateAroundPivot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::UxtManipulatorComponentBase_eventRotateAroundPivot_Parms), Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponentBase_SetInitialTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_SetInitialTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Manipulator Component Base" },
		{ "Comment", "/**\n\x09 * Cache the initial world space and camera space transform.\n\x09 * Manipulation should be based on these initial transform for stable results.\n\x09 * If bAutoSetInitialTransform is true then the initial transform is updated when grabbed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "Cache the initial world space and camera space transform.\nManipulation should be based on these initial transform for stable results.\nIf bAutoSetInitialTransform is true then the initial transform is updated when grabbed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponentBase_SetInitialTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponentBase, nullptr, "SetInitialTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_SetInitialTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_SetInitialTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponentBase_SetInitialTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponentBase_SetInitialTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics
	{
		struct UxtManipulatorComponentBase_eventSmoothTransform_Parms
		{
			FTransform SourceTransform;
			float LocationLerpTime;
			float RotationLerpTime;
			float DeltaSeconds;
			FTransform TargetTransform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTransform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationLerpTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationLerpTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_SourceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_SourceTransform = { "SourceTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventSmoothTransform_Parms, SourceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_SourceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_SourceTransform_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_LocationLerpTime = { "LocationLerpTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventSmoothTransform_Parms, LocationLerpTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_RotationLerpTime = { "RotationLerpTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventSmoothTransform_Parms, RotationLerpTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventSmoothTransform_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventSmoothTransform_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_SourceTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_LocationLerpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_RotationLerpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_TargetTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Manipulator Component Base" },
		{ "Comment", "/**\n\x09 * Apply a low-pass filter to the source transform location and rotation to smooth out jittering.\n\x09 * Target transform is a exponentially weighted average of the current component transform and the source transform based on the time\n\x09 * step.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "Apply a low-pass filter to the source transform location and rotation to smooth out jittering.\nTarget transform is a exponentially weighted average of the current component transform and the source transform based on the time\nstep." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponentBase, nullptr, "SmoothTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::UxtManipulatorComponentBase_eventSmoothTransform_Parms), Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtManipulatorComponentBase);
	UClass* Z_Construct_UClass_UUxtManipulatorComponentBase_NoRegister()
	{
		return UUxtManipulatorComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UUxtManipulatorComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateTransform_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialCameraSpaceTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialCameraSpaceTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSetInitialTransform_MetaData[];
#endif
		static void NewProp_bAutoSetInitialTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSetInitialTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtGrabTargetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform, "ApplyTargetTransform" }, // 655570456
		{ &Z_Construct_UFunction_UUxtManipulatorComponentBase_GetTargetComponent, "GetTargetComponent" }, // 1648126923
		{ &Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets, "MoveToTargets" }, // 2978794939
		{ &Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd, "OnManipulationEnd" }, // 706418765
		{ &Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted, "OnManipulationStarted" }, // 2872462314
		{ &Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis, "RotateAboutAxis" }, // 3155680808
		{ &Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot, "RotateAroundPivot" }, // 2759632133
		{ &Z_Construct_UFunction_UUxtManipulatorComponentBase_SetInitialTransform, "SetInitialTransform" }, // 1010344230
		{ &Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform, "SmoothTransform" }, // 1096135721
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Base class for manipulation components that react to pointer interactions.\n *\n * This class does not modify the actor as-is. Implementations should use the provided functions\n * to compute a target transform from grabbing pointers and call the ApplyTargetTransform method\n * to actually modify the actor.\n */" },
		{ "IncludePath", "Interactions/UxtManipulatorComponentBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "Base class for manipulation components that react to pointer interactions.\n\nThis class does not modify the actor as-is. Implementations should use the provided functions\nto compute a target transform from grabbing pointers and call the ApplyTargetTransform method\nto actually modify the actor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_OnUpdateTransform_MetaData[] = {
		{ "Category", "Uxt Manipulator Component Base" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_OnUpdateTransform = { "OnUpdateTransform", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtManipulatorComponentBase, OnUpdateTransform), Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_OnUpdateTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_OnUpdateTransform_MetaData)) }; // 255734367
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialTransform_MetaData[] = {
		{ "Category", "Uxt Manipulator Component Base" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtManipulatorComponentBase, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialCameraSpaceTransform_MetaData[] = {
		{ "Category", "Uxt Manipulator Component Base" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialCameraSpaceTransform = { "InitialCameraSpaceTransform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtManipulatorComponentBase, InitialCameraSpaceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialCameraSpaceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialCameraSpaceTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_bAutoSetInitialTransform_MetaData[] = {
		{ "Category", "Uxt Manipulator Component Base" },
		{ "Comment", "/** If true the initial transform will be set automatically when the component is grabbed. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "If true the initial transform will be set automatically when the component is grabbed." },
	};
#endif
	void Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_bAutoSetInitialTransform_SetBit(void* Obj)
	{
		((UUxtManipulatorComponentBase*)Obj)->bAutoSetInitialTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_bAutoSetInitialTransform = { "bAutoSetInitialTransform", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtManipulatorComponentBase), &Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_bAutoSetInitialTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_bAutoSetInitialTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_bAutoSetInitialTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_OnUpdateTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialCameraSpaceTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_bAutoSetInitialTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtManipulatorComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::ClassParams = {
		&UUxtManipulatorComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtManipulatorComponentBase()
	{
		if (!Z_Registration_Info_UClass_UUxtManipulatorComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtManipulatorComponentBase.OuterSingleton, Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtManipulatorComponentBase.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtManipulatorComponentBase>()
	{
		return UUxtManipulatorComponentBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtManipulatorComponentBase);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtManipulatorComponentBase, UUxtManipulatorComponentBase::StaticClass, TEXT("UUxtManipulatorComponentBase"), &Z_Registration_Info_UClass_UUxtManipulatorComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtManipulatorComponentBase), 4002824978U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_1620731643(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
