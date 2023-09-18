// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsTools/Public/GTMeshOutlineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGTMeshOutlineComponent() {}
// Cross Module References
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTMeshOutlineComponent_NoRegister();
	GRAPHICSTOOLS_API UClass* Z_Construct_UClass_UGTMeshOutlineComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_GraphicsTools();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGTMeshOutlineComponent::execSetComputeSmoothNormals)
	{
		P_GET_UBOOL(Z_Param_Compute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetComputeSmoothNormals(Z_Param_Compute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTMeshOutlineComponent::execGetComputeSmoothNormals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetComputeSmoothNormals();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTMeshOutlineComponent::execSetOutlineThickness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutlineThickness(Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTMeshOutlineComponent::execGetOutlineThickness)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetOutlineThickness();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTMeshOutlineComponent::execSetOutlineColor)
	{
		P_GET_STRUCT(FColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutlineColor(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGTMeshOutlineComponent::execGetOutlineColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetOutlineColor();
		P_NATIVE_END;
	}
	void UGTMeshOutlineComponent::StaticRegisterNativesUGTMeshOutlineComponent()
	{
		UClass* Class = UGTMeshOutlineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetComputeSmoothNormals", &UGTMeshOutlineComponent::execGetComputeSmoothNormals },
			{ "GetOutlineColor", &UGTMeshOutlineComponent::execGetOutlineColor },
			{ "GetOutlineThickness", &UGTMeshOutlineComponent::execGetOutlineThickness },
			{ "SetComputeSmoothNormals", &UGTMeshOutlineComponent::execSetComputeSmoothNormals },
			{ "SetOutlineColor", &UGTMeshOutlineComponent::execSetOutlineColor },
			{ "SetOutlineThickness", &UGTMeshOutlineComponent::execSetOutlineThickness },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGTMeshOutlineComponent_GetComputeSmoothNormals_Statics
	{
		struct GTMeshOutlineComponent_eventGetComputeSmoothNormals_Parms
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
	void Z_Construct_UFunction_UGTMeshOutlineComponent_GetComputeSmoothNormals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GTMeshOutlineComponent_eventGetComputeSmoothNormals_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGTMeshOutlineComponent_GetComputeSmoothNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GTMeshOutlineComponent_eventGetComputeSmoothNormals_Parms), &Z_Construct_UFunction_UGTMeshOutlineComponent_GetComputeSmoothNormals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTMeshOutlineComponent_GetComputeSmoothNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTMeshOutlineComponent_GetComputeSmoothNormals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTMeshOutlineComponent_GetComputeSmoothNormals_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Mesh Outline" },
		{ "Comment", "/** Sets if the mesh outline generation algorithm should smooth normals. */" },
		{ "ModuleRelativePath", "Public/GTMeshOutlineComponent.h" },
		{ "ToolTip", "Sets if the mesh outline generation algorithm should smooth normals." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTMeshOutlineComponent_GetComputeSmoothNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTMeshOutlineComponent, nullptr, "GetComputeSmoothNormals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTMeshOutlineComponent_GetComputeSmoothNormals_Statics::GTMeshOutlineComponent_eventGetComputeSmoothNormals_Parms), Z_Construct_UFunction_UGTMeshOutlineComponent_GetComputeSmoothNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTMeshOutlineComponent_GetComputeSmoothNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTMeshOutlineComponent_GetComputeSmoothNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTMeshOutlineComponent_GetComputeSmoothNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTMeshOutlineComponent_GetComputeSmoothNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTMeshOutlineComponent_GetComputeSmoothNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineColor_Statics
	{
		struct GTMeshOutlineComponent_eventGetOutlineColor_Parms
		{
			FColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTMeshOutlineComponent_eventGetOutlineColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Mesh Outline" },
		{ "Comment", "/** Accessor to the outline color. */" },
		{ "ModuleRelativePath", "Public/GTMeshOutlineComponent.h" },
		{ "ToolTip", "Accessor to the outline color." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTMeshOutlineComponent, nullptr, "GetOutlineColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineColor_Statics::GTMeshOutlineComponent_eventGetOutlineColor_Parms), Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineThickness_Statics
	{
		struct GTMeshOutlineComponent_eventGetOutlineThickness_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineThickness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTMeshOutlineComponent_eventGetOutlineThickness_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineThickness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineThickness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineThickness_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Mesh Outline" },
		{ "Comment", "/** Accessor to the outline thickness (in Unreal units). */" },
		{ "ModuleRelativePath", "Public/GTMeshOutlineComponent.h" },
		{ "ToolTip", "Accessor to the outline thickness (in Unreal units)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineThickness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTMeshOutlineComponent, nullptr, "GetOutlineThickness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineThickness_Statics::GTMeshOutlineComponent_eventGetOutlineThickness_Parms), Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineThickness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineThickness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineThickness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineThickness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineThickness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineThickness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTMeshOutlineComponent_SetComputeSmoothNormals_Statics
	{
		struct GTMeshOutlineComponent_eventSetComputeSmoothNormals_Parms
		{
			bool Compute;
		};
		static void NewProp_Compute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Compute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGTMeshOutlineComponent_SetComputeSmoothNormals_Statics::NewProp_Compute_SetBit(void* Obj)
	{
		((GTMeshOutlineComponent_eventSetComputeSmoothNormals_Parms*)Obj)->Compute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGTMeshOutlineComponent_SetComputeSmoothNormals_Statics::NewProp_Compute = { "Compute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GTMeshOutlineComponent_eventSetComputeSmoothNormals_Parms), &Z_Construct_UFunction_UGTMeshOutlineComponent_SetComputeSmoothNormals_Statics::NewProp_Compute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTMeshOutlineComponent_SetComputeSmoothNormals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTMeshOutlineComponent_SetComputeSmoothNormals_Statics::NewProp_Compute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTMeshOutlineComponent_SetComputeSmoothNormals_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Mesh Outline" },
		{ "Comment", "/** Accessor for if the mesh outline generation algorithm should smooth normals. */" },
		{ "ModuleRelativePath", "Public/GTMeshOutlineComponent.h" },
		{ "ToolTip", "Accessor for if the mesh outline generation algorithm should smooth normals." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTMeshOutlineComponent_SetComputeSmoothNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTMeshOutlineComponent, nullptr, "SetComputeSmoothNormals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTMeshOutlineComponent_SetComputeSmoothNormals_Statics::GTMeshOutlineComponent_eventSetComputeSmoothNormals_Parms), Z_Construct_UFunction_UGTMeshOutlineComponent_SetComputeSmoothNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTMeshOutlineComponent_SetComputeSmoothNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTMeshOutlineComponent_SetComputeSmoothNormals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTMeshOutlineComponent_SetComputeSmoothNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTMeshOutlineComponent_SetComputeSmoothNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTMeshOutlineComponent_SetComputeSmoothNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineColor_Statics
	{
		struct GTMeshOutlineComponent_eventSetOutlineColor_Parms
		{
			FColor Color;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTMeshOutlineComponent_eventSetOutlineColor_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Mesh Outline" },
		{ "Comment", "/** Sets the outline color and updates the material instance. */" },
		{ "ModuleRelativePath", "Public/GTMeshOutlineComponent.h" },
		{ "ToolTip", "Sets the outline color and updates the material instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTMeshOutlineComponent, nullptr, "SetOutlineColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineColor_Statics::GTMeshOutlineComponent_eventSetOutlineColor_Parms), Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineThickness_Statics
	{
		struct GTMeshOutlineComponent_eventSetOutlineThickness_Parms
		{
			float Thickness;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineThickness_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GTMeshOutlineComponent_eventSetOutlineThickness_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineThickness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineThickness_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineThickness_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Mesh Outline" },
		{ "Comment", "/** Sets the outline thickness (in Unreal units) and updates the material instance. */" },
		{ "ModuleRelativePath", "Public/GTMeshOutlineComponent.h" },
		{ "ToolTip", "Sets the outline thickness (in Unreal units) and updates the material instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineThickness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGTMeshOutlineComponent, nullptr, "SetOutlineThickness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineThickness_Statics::GTMeshOutlineComponent_eventSetOutlineThickness_Parms), Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineThickness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineThickness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineThickness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineThickness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineThickness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineThickness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGTMeshOutlineComponent);
	UClass* Z_Construct_UClass_UGTMeshOutlineComponent_NoRegister()
	{
		return UGTMeshOutlineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGTMeshOutlineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutlineColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutlineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComputeSmoothNormals_MetaData[];
#endif
		static void NewProp_bComputeSmoothNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeSmoothNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutlineMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGTMeshOutlineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphicsTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGTMeshOutlineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGTMeshOutlineComponent_GetComputeSmoothNormals, "GetComputeSmoothNormals" }, // 982598619
		{ &Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineColor, "GetOutlineColor" }, // 1921842653
		{ &Z_Construct_UFunction_UGTMeshOutlineComponent_GetOutlineThickness, "GetOutlineThickness" }, // 4185222480
		{ &Z_Construct_UFunction_UGTMeshOutlineComponent_SetComputeSmoothNormals, "SetComputeSmoothNormals" }, // 2025302308
		{ &Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineColor, "SetOutlineColor" }, // 1185551300
		{ &Z_Construct_UFunction_UGTMeshOutlineComponent_SetOutlineThickness, "SetOutlineThickness" }, // 887693997
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTMeshOutlineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GraphicsTools" },
		{ "Comment", "/**\n   Component which can be used to render an outline around a static mesh. Using this component introduces an additional render pass of\n   the object being outlined, but is designed to run performantly on mobile mixed reality devices and does not utilize any post processes.\n   Because this effect happens during the default render pass there are a few limitations of this effect which include:\n\x09   - The outline mesh must be watertight hull (and not double sided) else you may see split edges, holes, or other artifacts.\n\x09   - Mesh concavities can intersect each other when the outline is thick. This could be solved if the sort order of opaque objects could\n\x09\x09 be controlled so that the outline renders first and depth write disabled.\n\x09   - Outlines will not render though occluding objects.\n\x09   - Translucent objects may show the outline mesh in areas you would expect to be occluded.\n   Note, this component assumes a material is being used which has a `BaseColor` and `OutlineThickness` parameter to function correctly. The\n   `OutlineThickness` should scale the vertex position offset along the vertex normal.\n */" },
		{ "HideCategories", "Physics Collision Object Activation Components|Activation Trigger" },
		{ "IncludePath", "GTMeshOutlineComponent.h" },
		{ "ModuleRelativePath", "Public/GTMeshOutlineComponent.h" },
		{ "ToolTip", "Component which can be used to render an outline around a static mesh. Using this component introduces an additional render pass of\nthe object being outlined, but is designed to run performantly on mobile mixed reality devices and does not utilize any post processes.\nBecause this effect happens during the default render pass there are a few limitations of this effect which include:\n       - The outline mesh must be watertight hull (and not double sided) else you may see split edges, holes, or other artifacts.\n       - Mesh concavities can intersect each other when the outline is thick. This could be solved if the sort order of opaque objects could\n             be controlled so that the outline renders first and depth write disabled.\n       - Outlines will not render though occluding objects.\n       - Translucent objects may show the outline mesh in areas you would expect to be occluded.\nNote, this component assumes a material is being used which has a `BaseColor` and `OutlineThickness` parameter to function correctly. The\n`OutlineThickness` should scale the vertex position offset along the vertex normal." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_OutlineColor_MetaData[] = {
		{ "BlueprintGetter", "GetOutlineColor" },
		{ "BlueprintSetter", "SetOutlineColor" },
		{ "Category", "Mesh Outline" },
		{ "Comment", "/** The color of the mesh outline. Passes this value into the `BaseColor` parameter of the material instance. */" },
		{ "ModuleRelativePath", "Public/GTMeshOutlineComponent.h" },
		{ "ToolTip", "The color of the mesh outline. Passes this value into the `BaseColor` parameter of the material instance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_OutlineColor = { "OutlineColor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTMeshOutlineComponent, OutlineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_OutlineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_OutlineColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_OutlineThickness_MetaData[] = {
		{ "BlueprintGetter", "GetOutlineThickness" },
		{ "BlueprintSetter", "SetOutlineThickness" },
		{ "Category", "Mesh Outline" },
		{ "Comment", "/** The thickness (in Unreal units) of the mesh outline. Passes this value into the `OutlineThickness` parameter of the material\n\x09 * instance. It is up to the material to choose what to do with this value, but normally it is used to determine the distance to offset\n\x09 * the vertex position along the vertex normal. */" },
		{ "ModuleRelativePath", "Public/GTMeshOutlineComponent.h" },
		{ "ToolTip", "The thickness (in Unreal units) of the mesh outline. Passes this value into the `OutlineThickness` parameter of the material\ninstance. It is up to the material to choose what to do with this value, but normally it is used to determine the distance to offset\nthe vertex position along the vertex normal." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_OutlineThickness = { "OutlineThickness", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTMeshOutlineComponent, OutlineThickness), METADATA_PARAMS(Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_OutlineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_OutlineThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_bComputeSmoothNormals_MetaData[] = {
		{ "BlueprintGetter", "GetComputeSmoothNormals" },
		{ "BlueprintSetter", "SetComputeSmoothNormals" },
		{ "Category", "Mesh Outline" },
		{ "Comment", "/** This setting is optional for some meshes. Outline extrusion occurs by moving a vertex along a vertex normal, on some meshes\n\x09 * extruding along the default normals will cause discontinuities in the outline. To fix these discontinuities, you can check this box\n\x09 * to generate a smooth normal set during outline mesh generation. */" },
		{ "ModuleRelativePath", "Public/GTMeshOutlineComponent.h" },
		{ "ToolTip", "This setting is optional for some meshes. Outline extrusion occurs by moving a vertex along a vertex normal, on some meshes\nextruding along the default normals will cause discontinuities in the outline. To fix these discontinuities, you can check this box\nto generate a smooth normal set during outline mesh generation." },
	};
#endif
	void Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_bComputeSmoothNormals_SetBit(void* Obj)
	{
		((UGTMeshOutlineComponent*)Obj)->bComputeSmoothNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_bComputeSmoothNormals = { "bComputeSmoothNormals", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGTMeshOutlineComponent), &Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_bComputeSmoothNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_bComputeSmoothNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_bComputeSmoothNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_OutlineMaterial_MetaData[] = {
		{ "Comment", "/** The default outline material. */" },
		{ "ModuleRelativePath", "Public/GTMeshOutlineComponent.h" },
		{ "ToolTip", "The default outline material." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_OutlineMaterial = { "OutlineMaterial", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGTMeshOutlineComponent, OutlineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_OutlineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_OutlineMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGTMeshOutlineComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_OutlineColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_OutlineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_bComputeSmoothNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGTMeshOutlineComponent_Statics::NewProp_OutlineMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGTMeshOutlineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGTMeshOutlineComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGTMeshOutlineComponent_Statics::ClassParams = {
		&UGTMeshOutlineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGTMeshOutlineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGTMeshOutlineComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGTMeshOutlineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGTMeshOutlineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGTMeshOutlineComponent()
	{
		if (!Z_Registration_Info_UClass_UGTMeshOutlineComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGTMeshOutlineComponent.OuterSingleton, Z_Construct_UClass_UGTMeshOutlineComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGTMeshOutlineComponent.OuterSingleton;
	}
	template<> GRAPHICSTOOLS_API UClass* StaticClass<UGTMeshOutlineComponent>()
	{
		return UGTMeshOutlineComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGTMeshOutlineComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTMeshOutlineComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTMeshOutlineComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGTMeshOutlineComponent, UGTMeshOutlineComponent::StaticClass, TEXT("UGTMeshOutlineComponent"), &Z_Registration_Info_UClass_UGTMeshOutlineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGTMeshOutlineComponent), 230197732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTMeshOutlineComponent_h_602189580(TEXT("/Script/GraphicsTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTMeshOutlineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphicsTools_Source_GraphicsTools_Public_GTMeshOutlineComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
