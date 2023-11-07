// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtManipulatorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtManipulatorComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtManipulatorComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtManipulatorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtTransformMode();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUxtManipulatorComponent::execOnExternalManipulationStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExternalManipulationStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponent::execApplyConstraints)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_ENUM(EUxtTransformMode,Z_Param_TransformMode);
		P_GET_UBOOL(Z_Param_bIsOneHanded);
		P_GET_UBOOL(Z_Param_bIsNear);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyConstraints(Z_Param_Out_Transform,EUxtTransformMode(Z_Param_TransformMode),Z_Param_bIsOneHanded,Z_Param_bIsNear);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponent::execInitializeConstraints)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_NewTargetComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeConstraints(Z_Param_NewTargetComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponent::execSetMaxScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxScale(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponent::execGetMaxScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponent::execSetMinScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinScale(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponent::execGetMinScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMinScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponent::execSetRelativeToInitialScale)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRelativeToInitialScale(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponent::execGetRelativeToInitialScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRelativeToInitialScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponent::execRemoveConstraint)
	{
		P_GET_STRUCT_REF(FComponentReference,Z_Param_Out_NewConstraint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveConstraint(Z_Param_Out_NewConstraint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponent::execAddConstraint)
	{
		P_GET_STRUCT_REF(FComponentReference,Z_Param_Out_NewConstraint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddConstraint(Z_Param_Out_NewConstraint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponent::execGetSelectedConstraints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FComponentReference>*)Z_Param__Result=P_THIS->GetSelectedConstraints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponent::execSetAutoDetectConstraints)
	{
		P_GET_UBOOL(Z_Param_bNewAutoDetectConstraints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoDetectConstraints(Z_Param_bNewAutoDetectConstraints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponent::execGetAutoDetectConstraints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAutoDetectConstraints();
		P_NATIVE_END;
	}
	void UUxtManipulatorComponent::StaticRegisterNativesUUxtManipulatorComponent()
	{
		UClass* Class = UUxtManipulatorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddConstraint", &UUxtManipulatorComponent::execAddConstraint },
			{ "ApplyConstraints", &UUxtManipulatorComponent::execApplyConstraints },
			{ "GetAutoDetectConstraints", &UUxtManipulatorComponent::execGetAutoDetectConstraints },
			{ "GetMaxScale", &UUxtManipulatorComponent::execGetMaxScale },
			{ "GetMinScale", &UUxtManipulatorComponent::execGetMinScale },
			{ "GetRelativeToInitialScale", &UUxtManipulatorComponent::execGetRelativeToInitialScale },
			{ "GetSelectedConstraints", &UUxtManipulatorComponent::execGetSelectedConstraints },
			{ "InitializeConstraints", &UUxtManipulatorComponent::execInitializeConstraints },
			{ "OnExternalManipulationStarted", &UUxtManipulatorComponent::execOnExternalManipulationStarted },
			{ "RemoveConstraint", &UUxtManipulatorComponent::execRemoveConstraint },
			{ "SetAutoDetectConstraints", &UUxtManipulatorComponent::execSetAutoDetectConstraints },
			{ "SetMaxScale", &UUxtManipulatorComponent::execSetMaxScale },
			{ "SetMinScale", &UUxtManipulatorComponent::execSetMinScale },
			{ "SetRelativeToInitialScale", &UUxtManipulatorComponent::execSetRelativeToInitialScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponent_AddConstraint_Statics
	{
		struct UxtManipulatorComponent_eventAddConstraint_Parms
		{
			FComponentReference NewConstraint;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewConstraint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_AddConstraint_Statics::NewProp_NewConstraint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponent_AddConstraint_Statics::NewProp_NewConstraint = { "NewConstraint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponent_eventAddConstraint_Parms, NewConstraint), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_AddConstraint_Statics::NewProp_NewConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_AddConstraint_Statics::NewProp_NewConstraint_MetaData)) }; // 3442474717
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponent_AddConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponent_AddConstraint_Statics::NewProp_NewConstraint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_AddConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Manipulator" },
		{ "Comment", "/** Add a constraint to be applied when bAutoDetectConstraints is not set. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
		{ "ToolTip", "Add a constraint to be applied when bAutoDetectConstraints is not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponent_AddConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponent, nullptr, "AddConstraint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponent_AddConstraint_Statics::UxtManipulatorComponent_eventAddConstraint_Parms), Z_Construct_UFunction_UUxtManipulatorComponent_AddConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_AddConstraint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_AddConstraint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_AddConstraint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponent_AddConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponent_AddConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics
	{
		struct UxtManipulatorComponent_eventApplyConstraints_Parms
		{
			FTransform Transform;
			EUxtTransformMode TransformMode;
			bool bIsOneHanded;
			bool bIsNear;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformMode;
		static void NewProp_bIsOneHanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOneHanded;
		static void NewProp_bIsNear_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNear;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponent_eventApplyConstraints_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::NewProp_TransformMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::NewProp_TransformMode = { "TransformMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponent_eventApplyConstraints_Parms, TransformMode), Z_Construct_UEnum_UXTools_EUxtTransformMode, METADATA_PARAMS(nullptr, 0) }; // 3167739638
	void Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::NewProp_bIsOneHanded_SetBit(void* Obj)
	{
		((UxtManipulatorComponent_eventApplyConstraints_Parms*)Obj)->bIsOneHanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::NewProp_bIsOneHanded = { "bIsOneHanded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtManipulatorComponent_eventApplyConstraints_Parms), &Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::NewProp_bIsOneHanded_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::NewProp_bIsNear_SetBit(void* Obj)
	{
		((UxtManipulatorComponent_eventApplyConstraints_Parms*)Obj)->bIsNear = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::NewProp_bIsNear = { "bIsNear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtManipulatorComponent_eventApplyConstraints_Parms), &Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::NewProp_bIsNear_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::NewProp_TransformMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::NewProp_TransformMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::NewProp_bIsOneHanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::NewProp_bIsNear,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Manipulator" },
		{ "Comment", "/** Apply the constraints to the transform. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
		{ "ToolTip", "Apply the constraints to the transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponent, nullptr, "ApplyConstraints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::UxtManipulatorComponent_eventApplyConstraints_Parms), Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponent_GetAutoDetectConstraints_Statics
	{
		struct UxtManipulatorComponent_eventGetAutoDetectConstraints_Parms
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
	void Z_Construct_UFunction_UUxtManipulatorComponent_GetAutoDetectConstraints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtManipulatorComponent_eventGetAutoDetectConstraints_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtManipulatorComponent_GetAutoDetectConstraints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtManipulatorComponent_eventGetAutoDetectConstraints_Parms), &Z_Construct_UFunction_UUxtManipulatorComponent_GetAutoDetectConstraints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponent_GetAutoDetectConstraints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponent_GetAutoDetectConstraints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_GetAutoDetectConstraints_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Manipulator" },
		{ "Comment", "/** Get if the component is automatically detecting constraints. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
		{ "ToolTip", "Get if the component is automatically detecting constraints." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponent_GetAutoDetectConstraints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponent, nullptr, "GetAutoDetectConstraints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponent_GetAutoDetectConstraints_Statics::UxtManipulatorComponent_eventGetAutoDetectConstraints_Parms), Z_Construct_UFunction_UUxtManipulatorComponent_GetAutoDetectConstraints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_GetAutoDetectConstraints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_GetAutoDetectConstraints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_GetAutoDetectConstraints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponent_GetAutoDetectConstraints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponent_GetAutoDetectConstraints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponent_GetMaxScale_Statics
	{
		struct UxtManipulatorComponent_eventGetMaxScale_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtManipulatorComponent_GetMaxScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponent_eventGetMaxScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponent_GetMaxScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponent_GetMaxScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_GetMaxScale_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Manipulator" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponent_GetMaxScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponent, nullptr, "GetMaxScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponent_GetMaxScale_Statics::UxtManipulatorComponent_eventGetMaxScale_Parms), Z_Construct_UFunction_UUxtManipulatorComponent_GetMaxScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_GetMaxScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_GetMaxScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_GetMaxScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponent_GetMaxScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponent_GetMaxScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponent_GetMinScale_Statics
	{
		struct UxtManipulatorComponent_eventGetMinScale_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtManipulatorComponent_GetMinScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponent_eventGetMinScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponent_GetMinScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponent_GetMinScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_GetMinScale_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Manipulator" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponent_GetMinScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponent, nullptr, "GetMinScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponent_GetMinScale_Statics::UxtManipulatorComponent_eventGetMinScale_Parms), Z_Construct_UFunction_UUxtManipulatorComponent_GetMinScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_GetMinScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_GetMinScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_GetMinScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponent_GetMinScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponent_GetMinScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponent_GetRelativeToInitialScale_Statics
	{
		struct UxtManipulatorComponent_eventGetRelativeToInitialScale_Parms
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
	void Z_Construct_UFunction_UUxtManipulatorComponent_GetRelativeToInitialScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtManipulatorComponent_eventGetRelativeToInitialScale_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtManipulatorComponent_GetRelativeToInitialScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtManipulatorComponent_eventGetRelativeToInitialScale_Parms), &Z_Construct_UFunction_UUxtManipulatorComponent_GetRelativeToInitialScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponent_GetRelativeToInitialScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponent_GetRelativeToInitialScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_GetRelativeToInitialScale_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Manipulator" },
		{ "Comment", "//\n// Implicit scale constraint's public API\n" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
		{ "ToolTip", "Implicit scale constraint's public API" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponent_GetRelativeToInitialScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponent, nullptr, "GetRelativeToInitialScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponent_GetRelativeToInitialScale_Statics::UxtManipulatorComponent_eventGetRelativeToInitialScale_Parms), Z_Construct_UFunction_UUxtManipulatorComponent_GetRelativeToInitialScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_GetRelativeToInitialScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_GetRelativeToInitialScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_GetRelativeToInitialScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponent_GetRelativeToInitialScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponent_GetRelativeToInitialScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints_Statics
	{
		struct UxtManipulatorComponent_eventGetSelectedConstraints_Parms
		{
			TArray<FComponentReference> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(nullptr, 0) }; // 3442474717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponent_eventGetSelectedConstraints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints_Statics::NewProp_ReturnValue_MetaData)) }; // 3442474717
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Manipulator" },
		{ "Comment", "/** Get the list of currently selected constraints. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
		{ "ToolTip", "Get the list of currently selected constraints." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponent, nullptr, "GetSelectedConstraints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints_Statics::UxtManipulatorComponent_eventGetSelectedConstraints_Parms), Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponent_InitializeConstraints_Statics
	{
		struct UxtManipulatorComponent_eventInitializeConstraints_Parms
		{
			USceneComponent* NewTargetComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewTargetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTargetComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_InitializeConstraints_Statics::NewProp_NewTargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtManipulatorComponent_InitializeConstraints_Statics::NewProp_NewTargetComponent = { "NewTargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponent_eventInitializeConstraints_Parms, NewTargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_InitializeConstraints_Statics::NewProp_NewTargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_InitializeConstraints_Statics::NewProp_NewTargetComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponent_InitializeConstraints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponent_InitializeConstraints_Statics::NewProp_NewTargetComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_InitializeConstraints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Manipulator" },
		{ "Comment", "/** Initialize the constraints with a target component to use for a reference transform. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
		{ "ToolTip", "Initialize the constraints with a target component to use for a reference transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponent_InitializeConstraints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponent, nullptr, "InitializeConstraints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponent_InitializeConstraints_Statics::UxtManipulatorComponent_eventInitializeConstraints_Parms), Z_Construct_UFunction_UUxtManipulatorComponent_InitializeConstraints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_InitializeConstraints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_InitializeConstraints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_InitializeConstraints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponent_InitializeConstraints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponent_InitializeConstraints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponent_OnExternalManipulationStarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_OnExternalManipulationStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Manipulator" },
		{ "Comment", "/** Get notified of another component starting a new manipulation. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
		{ "ToolTip", "Get notified of another component starting a new manipulation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponent_OnExternalManipulationStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponent, nullptr, "OnExternalManipulationStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_OnExternalManipulationStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_OnExternalManipulationStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponent_OnExternalManipulationStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponent_OnExternalManipulationStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponent_RemoveConstraint_Statics
	{
		struct UxtManipulatorComponent_eventRemoveConstraint_Parms
		{
			FComponentReference NewConstraint;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewConstraint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_RemoveConstraint_Statics::NewProp_NewConstraint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponent_RemoveConstraint_Statics::NewProp_NewConstraint = { "NewConstraint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponent_eventRemoveConstraint_Parms, NewConstraint), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_RemoveConstraint_Statics::NewProp_NewConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_RemoveConstraint_Statics::NewProp_NewConstraint_MetaData)) }; // 3442474717
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponent_RemoveConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponent_RemoveConstraint_Statics::NewProp_NewConstraint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_RemoveConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Manipulator" },
		{ "Comment", "/** Remove a constraint from being applied when bAutoDetectConstraints is not set. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
		{ "ToolTip", "Remove a constraint from being applied when bAutoDetectConstraints is not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponent_RemoveConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponent, nullptr, "RemoveConstraint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponent_RemoveConstraint_Statics::UxtManipulatorComponent_eventRemoveConstraint_Parms), Z_Construct_UFunction_UUxtManipulatorComponent_RemoveConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_RemoveConstraint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_RemoveConstraint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_RemoveConstraint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponent_RemoveConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponent_RemoveConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponent_SetAutoDetectConstraints_Statics
	{
		struct UxtManipulatorComponent_eventSetAutoDetectConstraints_Parms
		{
			bool bNewAutoDetectConstraints;
		};
		static void NewProp_bNewAutoDetectConstraints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewAutoDetectConstraints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtManipulatorComponent_SetAutoDetectConstraints_Statics::NewProp_bNewAutoDetectConstraints_SetBit(void* Obj)
	{
		((UxtManipulatorComponent_eventSetAutoDetectConstraints_Parms*)Obj)->bNewAutoDetectConstraints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtManipulatorComponent_SetAutoDetectConstraints_Statics::NewProp_bNewAutoDetectConstraints = { "bNewAutoDetectConstraints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtManipulatorComponent_eventSetAutoDetectConstraints_Parms), &Z_Construct_UFunction_UUxtManipulatorComponent_SetAutoDetectConstraints_Statics::NewProp_bNewAutoDetectConstraints_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponent_SetAutoDetectConstraints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponent_SetAutoDetectConstraints_Statics::NewProp_bNewAutoDetectConstraints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_SetAutoDetectConstraints_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Manipulator" },
		{ "Comment", "/** Set if the component should automatically detect constraints. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
		{ "ToolTip", "Set if the component should automatically detect constraints." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponent_SetAutoDetectConstraints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponent, nullptr, "SetAutoDetectConstraints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponent_SetAutoDetectConstraints_Statics::UxtManipulatorComponent_eventSetAutoDetectConstraints_Parms), Z_Construct_UFunction_UUxtManipulatorComponent_SetAutoDetectConstraints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_SetAutoDetectConstraints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_SetAutoDetectConstraints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_SetAutoDetectConstraints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponent_SetAutoDetectConstraints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponent_SetAutoDetectConstraints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponent_SetMaxScale_Statics
	{
		struct UxtManipulatorComponent_eventSetMaxScale_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_SetMaxScale_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtManipulatorComponent_SetMaxScale_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponent_eventSetMaxScale_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_SetMaxScale_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_SetMaxScale_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponent_SetMaxScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponent_SetMaxScale_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_SetMaxScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Manipulator" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponent_SetMaxScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponent, nullptr, "SetMaxScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponent_SetMaxScale_Statics::UxtManipulatorComponent_eventSetMaxScale_Parms), Z_Construct_UFunction_UUxtManipulatorComponent_SetMaxScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_SetMaxScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_SetMaxScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_SetMaxScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponent_SetMaxScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponent_SetMaxScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponent_SetMinScale_Statics
	{
		struct UxtManipulatorComponent_eventSetMinScale_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_SetMinScale_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtManipulatorComponent_SetMinScale_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponent_eventSetMinScale_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_SetMinScale_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_SetMinScale_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponent_SetMinScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponent_SetMinScale_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_SetMinScale_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Manipulator" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponent_SetMinScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponent, nullptr, "SetMinScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponent_SetMinScale_Statics::UxtManipulatorComponent_eventSetMinScale_Parms), Z_Construct_UFunction_UUxtManipulatorComponent_SetMinScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_SetMinScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_SetMinScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_SetMinScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponent_SetMinScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponent_SetMinScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale_Statics
	{
		struct UxtManipulatorComponent_eventSetRelativeToInitialScale_Parms
		{
			bool Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((UxtManipulatorComponent_eventSetRelativeToInitialScale_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtManipulatorComponent_eventSetRelativeToInitialScale_Parms), &Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Manipulator" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponent, nullptr, "SetRelativeToInitialScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale_Statics::UxtManipulatorComponent_eventSetRelativeToInitialScale_Parms), Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtManipulatorComponent);
	UClass* Z_Construct_UClass_UUxtManipulatorComponent_NoRegister()
	{
		return UUxtManipulatorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtManipulatorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDetectConstraints_MetaData[];
#endif
		static void NewProp_bAutoDetectConstraints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDetectConstraints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedConstraints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedConstraints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedConstraints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRelativeToInitialScale_MetaData[];
#endif
		static void NewProp_bRelativeToInitialScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRelativeToInitialScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtManipulatorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtManipulatorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtManipulatorComponent_AddConstraint, "AddConstraint" }, // 2115289216
		{ &Z_Construct_UFunction_UUxtManipulatorComponent_ApplyConstraints, "ApplyConstraints" }, // 2391759293
		{ &Z_Construct_UFunction_UUxtManipulatorComponent_GetAutoDetectConstraints, "GetAutoDetectConstraints" }, // 564530579
		{ &Z_Construct_UFunction_UUxtManipulatorComponent_GetMaxScale, "GetMaxScale" }, // 3930107162
		{ &Z_Construct_UFunction_UUxtManipulatorComponent_GetMinScale, "GetMinScale" }, // 1306811627
		{ &Z_Construct_UFunction_UUxtManipulatorComponent_GetRelativeToInitialScale, "GetRelativeToInitialScale" }, // 2196689649
		{ &Z_Construct_UFunction_UUxtManipulatorComponent_GetSelectedConstraints, "GetSelectedConstraints" }, // 2747265726
		{ &Z_Construct_UFunction_UUxtManipulatorComponent_InitializeConstraints, "InitializeConstraints" }, // 2985104933
		{ &Z_Construct_UFunction_UUxtManipulatorComponent_OnExternalManipulationStarted, "OnExternalManipulationStarted" }, // 1676822010
		{ &Z_Construct_UFunction_UUxtManipulatorComponent_RemoveConstraint, "RemoveConstraint" }, // 1760123307
		{ &Z_Construct_UFunction_UUxtManipulatorComponent_SetAutoDetectConstraints, "SetAutoDetectConstraints" }, // 2657668577
		{ &Z_Construct_UFunction_UUxtManipulatorComponent_SetMaxScale, "SetMaxScale" }, // 564397560
		{ &Z_Construct_UFunction_UUxtManipulatorComponent_SetMinScale, "SetMinScale" }, // 795297199
		{ &Z_Construct_UFunction_UUxtManipulatorComponent_SetRelativeToInitialScale, "SetRelativeToInitialScale" }, // 3334785080
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtManipulatorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Category", "UXTools" },
		{ "Comment", "/**\n * Manages constraints that can be applied by child components.\n */" },
		{ "IncludePath", "Interactions/UxtManipulatorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
		{ "ToolTip", "Manages constraints that can be applied by child components." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_bAutoDetectConstraints_MetaData[] = {
		{ "BlueprintGetter", "GetAutoDetectConstraints" },
		{ "BlueprintSetter", "SetAutoDetectConstraints" },
		{ "Category", "Uxt Manipulator" },
		{ "Comment", "/** If set, all constraints present on the actor will be applied, otherwise only selected constraints will be applied. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
		{ "ToolTip", "If set, all constraints present on the actor will be applied, otherwise only selected constraints will be applied." },
	};
#endif
	void Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_bAutoDetectConstraints_SetBit(void* Obj)
	{
		((UUxtManipulatorComponent*)Obj)->bAutoDetectConstraints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_bAutoDetectConstraints = { "bAutoDetectConstraints", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtManipulatorComponent), &Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_bAutoDetectConstraints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_bAutoDetectConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_bAutoDetectConstraints_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_SelectedConstraints_Inner = { "SelectedConstraints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(nullptr, 0) }; // 3442474717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_SelectedConstraints_MetaData[] = {
		{ "BlueprintGetter", "GetSelectedConstraints" },
		{ "Category", "Uxt Manipulator" },
		{ "Comment", "/*UseComponentPicker, AllowedClasses = \"UxtTransformConstraint\",*/" },
		{ "EditCondition", "!bAutoDetectConstraints" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
		{ "ToolTip", "UseComponentPicker, AllowedClasses = \"UxtTransformConstraint\"," },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_SelectedConstraints = { "SelectedConstraints", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtManipulatorComponent, SelectedConstraints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_SelectedConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_SelectedConstraints_MetaData)) }; // 3442474717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_bRelativeToInitialScale_MetaData[] = {
		{ "BlueprintGetter", "GetRelativeToInitialScale" },
		{ "BlueprintSetter", "SetRelativeToInitialScale" },
		{ "Category", "Uxt Manipulator" },
		{ "Comment", "/** Whether the min/max scale values should be relative to the initial scale or absolute. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
		{ "ToolTip", "Whether the min/max scale values should be relative to the initial scale or absolute." },
	};
#endif
	void Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_bRelativeToInitialScale_SetBit(void* Obj)
	{
		((UUxtManipulatorComponent*)Obj)->bRelativeToInitialScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_bRelativeToInitialScale = { "bRelativeToInitialScale", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtManipulatorComponent), &Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_bRelativeToInitialScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_bRelativeToInitialScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_bRelativeToInitialScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_MinScale_MetaData[] = {
		{ "BlueprintGetter", "GetMinScale" },
		{ "BlueprintSetter", "SetMinScale" },
		{ "Category", "Uxt Manipulator" },
		{ "Comment", "/** Minimum scale allowed. Will be used as relative or absolute depending on the value of @ref bRelativeToInitialScale. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
		{ "ToolTip", "Minimum scale allowed. Will be used as relative or absolute depending on the value of @ref bRelativeToInitialScale." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_MinScale = { "MinScale", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtManipulatorComponent, MinScale), METADATA_PARAMS(Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_MinScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_MinScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_MaxScale_MetaData[] = {
		{ "BlueprintGetter", "GetMaxScale" },
		{ "BlueprintSetter", "SetMaxScale" },
		{ "Category", "Uxt Manipulator" },
		{ "Comment", "/** Maximum scale allowed. Will be used as relative or absolute depending on the value of @ref bRelativeToInitialScale. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponent.h" },
		{ "ToolTip", "Maximum scale allowed. Will be used as relative or absolute depending on the value of @ref bRelativeToInitialScale." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtManipulatorComponent, MaxScale), METADATA_PARAMS(Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_MaxScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_MaxScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtManipulatorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_bAutoDetectConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_SelectedConstraints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_SelectedConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_bRelativeToInitialScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_MinScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtManipulatorComponent_Statics::NewProp_MaxScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtManipulatorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtManipulatorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtManipulatorComponent_Statics::ClassParams = {
		&UUxtManipulatorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtManipulatorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtManipulatorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtManipulatorComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtManipulatorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtManipulatorComponent.OuterSingleton, Z_Construct_UClass_UUxtManipulatorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtManipulatorComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtManipulatorComponent>()
	{
		return UUxtManipulatorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtManipulatorComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtManipulatorComponent, UUxtManipulatorComponent::StaticClass, TEXT("UUxtManipulatorComponent"), &Z_Registration_Info_UClass_UUxtManipulatorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtManipulatorComponent), 216074226U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_147531599(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
