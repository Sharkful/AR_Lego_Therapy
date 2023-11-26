// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Utils/UxtMathUtilsFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtMathUtilsFunctionLibrary() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtMathUtilsFunctionLibrary_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtMathUtilsFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UUxtMathUtilsFunctionLibrary::execRotateAboutPivotPoint)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Pivot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UUxtMathUtilsFunctionLibrary::RotateAboutPivotPoint(Z_Param_Out_Transform,Z_Param_Out_Rotation,Z_Param_Out_Pivot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtMathUtilsFunctionLibrary::execSwingTwistDecompose)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TwistAxis);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Swing);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Twist);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUxtMathUtilsFunctionLibrary::SwingTwistDecompose(Z_Param_Out_Rotation,Z_Param_Out_TwistAxis,Z_Param_Out_Swing,Z_Param_Out_Twist);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtMathUtilsFunctionLibrary::execGetRotationBetweenVectors)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector1);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UUxtMathUtilsFunctionLibrary::GetRotationBetweenVectors(Z_Param_Out_Vector1,Z_Param_Out_Vector2);
		P_NATIVE_END;
	}
	void UUxtMathUtilsFunctionLibrary::StaticRegisterNativesUUxtMathUtilsFunctionLibrary()
	{
		UClass* Class = UUxtMathUtilsFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRotationBetweenVectors", &UUxtMathUtilsFunctionLibrary::execGetRotationBetweenVectors },
			{ "RotateAboutPivotPoint", &UUxtMathUtilsFunctionLibrary::execRotateAboutPivotPoint },
			{ "SwingTwistDecompose", &UUxtMathUtilsFunctionLibrary::execSwingTwistDecompose },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics
	{
		struct UxtMathUtilsFunctionLibrary_eventGetRotationBetweenVectors_Parms
		{
			FVector Vector1;
			FVector Vector2;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::NewProp_Vector1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::NewProp_Vector1 = { "Vector1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtMathUtilsFunctionLibrary_eventGetRotationBetweenVectors_Parms, Vector1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::NewProp_Vector1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::NewProp_Vector1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::NewProp_Vector2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::NewProp_Vector2 = { "Vector2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtMathUtilsFunctionLibrary_eventGetRotationBetweenVectors_Parms, Vector2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::NewProp_Vector2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::NewProp_Vector2_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtMathUtilsFunctionLibrary_eventGetRotationBetweenVectors_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::NewProp_Vector1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::NewProp_Vector2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Math Utils" },
		{ "Comment", "/**\n\x09 * Compute minimal rotation between vectors.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Utils/UxtMathUtilsFunctionLibrary.h" },
		{ "ToolTip", "Compute minimal rotation between vectors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtMathUtilsFunctionLibrary, nullptr, "GetRotationBetweenVectors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::UxtMathUtilsFunctionLibrary_eventGetRotationBetweenVectors_Parms), Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics
	{
		struct UxtMathUtilsFunctionLibrary_eventRotateAboutPivotPoint_Parms
		{
			FTransform Transform;
			FRotator Rotation;
			FVector Pivot;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pivot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtMathUtilsFunctionLibrary_eventRotateAboutPivotPoint_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtMathUtilsFunctionLibrary_eventRotateAboutPivotPoint_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::NewProp_Pivot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtMathUtilsFunctionLibrary_eventRotateAboutPivotPoint_Parms, Pivot), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::NewProp_Pivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::NewProp_Pivot_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtMathUtilsFunctionLibrary_eventRotateAboutPivotPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::NewProp_Pivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Math Utils" },
		{ "Comment", "/**\n\x09 * Apply rotation about a pivot point to the transform.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Utils/UxtMathUtilsFunctionLibrary.h" },
		{ "ToolTip", "Apply rotation about a pivot point to the transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtMathUtilsFunctionLibrary, nullptr, "RotateAboutPivotPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::UxtMathUtilsFunctionLibrary_eventRotateAboutPivotPoint_Parms), Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics
	{
		struct UxtMathUtilsFunctionLibrary_eventSwingTwistDecompose_Parms
		{
			FRotator Rotation;
			FVector TwistAxis;
			FRotator Swing;
			FRotator Twist;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TwistAxis;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Swing;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Twist;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtMathUtilsFunctionLibrary_eventSwingTwistDecompose_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::NewProp_TwistAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtMathUtilsFunctionLibrary_eventSwingTwistDecompose_Parms, TwistAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::NewProp_TwistAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::NewProp_TwistAxis_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::NewProp_Swing = { "Swing", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtMathUtilsFunctionLibrary_eventSwingTwistDecompose_Parms, Swing), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::NewProp_Twist = { "Twist", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtMathUtilsFunctionLibrary_eventSwingTwistDecompose_Parms, Twist), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::NewProp_TwistAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::NewProp_Swing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::NewProp_Twist,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools|Math Utils" },
		{ "Comment", "/**\n\x09 * Decompose a rotation into swing and twist components.\n\x09 * The twist component describes a rotation around the given twist axis, while the swing contains the remaining rotation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Utils/UxtMathUtilsFunctionLibrary.h" },
		{ "ToolTip", "Decompose a rotation into swing and twist components.\nThe twist component describes a rotation around the given twist axis, while the swing contains the remaining rotation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtMathUtilsFunctionLibrary, nullptr, "SwingTwistDecompose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::UxtMathUtilsFunctionLibrary_eventSwingTwistDecompose_Parms), Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtMathUtilsFunctionLibrary);
	UClass* Z_Construct_UClass_UUxtMathUtilsFunctionLibrary_NoRegister()
	{
		return UUxtMathUtilsFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUxtMathUtilsFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtMathUtilsFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtMathUtilsFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_GetRotationBetweenVectors, "GetRotationBetweenVectors" }, // 3720086103
		{ &Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_RotateAboutPivotPoint, "RotateAboutPivotPoint" }, // 3482922648
		{ &Z_Construct_UFunction_UUxtMathUtilsFunctionLibrary_SwingTwistDecompose, "SwingTwistDecompose" }, // 2072289531
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtMathUtilsFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Library of utility functions for UX Tools.\n */" },
		{ "IncludePath", "Utils/UxtMathUtilsFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Utils/UxtMathUtilsFunctionLibrary.h" },
		{ "ToolTip", "Library of utility functions for UX Tools." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtMathUtilsFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtMathUtilsFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtMathUtilsFunctionLibrary_Statics::ClassParams = {
		&UUxtMathUtilsFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtMathUtilsFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtMathUtilsFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtMathUtilsFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UUxtMathUtilsFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtMathUtilsFunctionLibrary.OuterSingleton, Z_Construct_UClass_UUxtMathUtilsFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtMathUtilsFunctionLibrary.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtMathUtilsFunctionLibrary>()
	{
		return UUxtMathUtilsFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtMathUtilsFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Utils_UxtMathUtilsFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Utils_UxtMathUtilsFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtMathUtilsFunctionLibrary, UUxtMathUtilsFunctionLibrary::StaticClass, TEXT("UUxtMathUtilsFunctionLibrary"), &Z_Registration_Info_UClass_UUxtMathUtilsFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtMathUtilsFunctionLibrary), 2970500764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Utils_UxtMathUtilsFunctionLibrary_h_3107234995(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Utils_UxtMathUtilsFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Utils_UxtMathUtilsFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
