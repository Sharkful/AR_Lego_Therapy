// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtPressableSwitchButtonActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtPressableSwitchButtonActor() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableSwitchButtonActor_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableSwitchButtonActor();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableRadioButtonActor();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtIconBrush();
// End Cross Module References
	DEFINE_FUNCTION(AUxtPressableSwitchButtonActor::execSetSwitchedOnIconBrush)
	{
		P_GET_STRUCT_REF(FUxtIconBrush,Z_Param_Out_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSwitchedOnIconBrush(Z_Param_Out_Brush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableSwitchButtonActor::execGetSwitchedOnIconBrush)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUxtIconBrush*)Z_Param__Result=P_THIS->GetSwitchedOnIconBrush();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableSwitchButtonActor::execSetSwitchedOffIconBrush)
	{
		P_GET_STRUCT_REF(FUxtIconBrush,Z_Param_Out_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSwitchedOffIconBrush(Z_Param_Out_Brush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableSwitchButtonActor::execGetSwitchedOffIconBrush)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUxtIconBrush*)Z_Param__Result=P_THIS->GetSwitchedOffIconBrush();
		P_NATIVE_END;
	}
	void AUxtPressableSwitchButtonActor::StaticRegisterNativesAUxtPressableSwitchButtonActor()
	{
		UClass* Class = AUxtPressableSwitchButtonActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSwitchedOffIconBrush", &AUxtPressableSwitchButtonActor::execGetSwitchedOffIconBrush },
			{ "GetSwitchedOnIconBrush", &AUxtPressableSwitchButtonActor::execGetSwitchedOnIconBrush },
			{ "SetSwitchedOffIconBrush", &AUxtPressableSwitchButtonActor::execSetSwitchedOffIconBrush },
			{ "SetSwitchedOnIconBrush", &AUxtPressableSwitchButtonActor::execSetSwitchedOnIconBrush },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOffIconBrush_Statics
	{
		struct UxtPressableSwitchButtonActor_eventGetSwitchedOffIconBrush_Parms
		{
			FUxtIconBrush ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOffIconBrush_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOffIconBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableSwitchButtonActor_eventGetSwitchedOffIconBrush_Parms, ReturnValue), Z_Construct_UScriptStruct_FUxtIconBrush, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOffIconBrush_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOffIconBrush_Statics::NewProp_ReturnValue_MetaData)) }; // 3641190900
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOffIconBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOffIconBrush_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOffIconBrush_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Accessor to the button's switched off icon brush. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableSwitchButtonActor.h" },
		{ "ToolTip", "Accessor to the button's switched off icon brush." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOffIconBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableSwitchButtonActor, nullptr, "GetSwitchedOffIconBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOffIconBrush_Statics::UxtPressableSwitchButtonActor_eventGetSwitchedOffIconBrush_Parms), Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOffIconBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOffIconBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOffIconBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOffIconBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOffIconBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOffIconBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOnIconBrush_Statics
	{
		struct UxtPressableSwitchButtonActor_eventGetSwitchedOnIconBrush_Parms
		{
			FUxtIconBrush ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOnIconBrush_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOnIconBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableSwitchButtonActor_eventGetSwitchedOnIconBrush_Parms, ReturnValue), Z_Construct_UScriptStruct_FUxtIconBrush, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOnIconBrush_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOnIconBrush_Statics::NewProp_ReturnValue_MetaData)) }; // 3641190900
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOnIconBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOnIconBrush_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOnIconBrush_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Accessor to the button's switched on icon brush. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableSwitchButtonActor.h" },
		{ "ToolTip", "Accessor to the button's switched on icon brush." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOnIconBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableSwitchButtonActor, nullptr, "GetSwitchedOnIconBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOnIconBrush_Statics::UxtPressableSwitchButtonActor_eventGetSwitchedOnIconBrush_Parms), Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOnIconBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOnIconBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOnIconBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOnIconBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOnIconBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOnIconBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOffIconBrush_Statics
	{
		struct UxtPressableSwitchButtonActor_eventSetSwitchedOffIconBrush_Parms
		{
			FUxtIconBrush Brush;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOffIconBrush_Statics::NewProp_Brush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOffIconBrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableSwitchButtonActor_eventSetSwitchedOffIconBrush_Parms, Brush), Z_Construct_UScriptStruct_FUxtIconBrush, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOffIconBrush_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOffIconBrush_Statics::NewProp_Brush_MetaData)) }; // 3641190900
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOffIconBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOffIconBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOffIconBrush_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Applies a new switched off icon brush. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableSwitchButtonActor.h" },
		{ "ToolTip", "Applies a new switched off icon brush." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOffIconBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableSwitchButtonActor, nullptr, "SetSwitchedOffIconBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOffIconBrush_Statics::UxtPressableSwitchButtonActor_eventSetSwitchedOffIconBrush_Parms), Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOffIconBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOffIconBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOffIconBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOffIconBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOffIconBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOffIconBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOnIconBrush_Statics
	{
		struct UxtPressableSwitchButtonActor_eventSetSwitchedOnIconBrush_Parms
		{
			FUxtIconBrush Brush;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOnIconBrush_Statics::NewProp_Brush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOnIconBrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableSwitchButtonActor_eventSetSwitchedOnIconBrush_Parms, Brush), Z_Construct_UScriptStruct_FUxtIconBrush, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOnIconBrush_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOnIconBrush_Statics::NewProp_Brush_MetaData)) }; // 3641190900
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOnIconBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOnIconBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOnIconBrush_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Applies a new switched on icon brush. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableSwitchButtonActor.h" },
		{ "ToolTip", "Applies a new switched on icon brush." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOnIconBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableSwitchButtonActor, nullptr, "SetSwitchedOnIconBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOnIconBrush_Statics::UxtPressableSwitchButtonActor_eventSetSwitchedOnIconBrush_Parms), Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOnIconBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOnIconBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOnIconBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOnIconBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOnIconBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOnIconBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUxtPressableSwitchButtonActor);
	UClass* Z_Construct_UClass_AUxtPressableSwitchButtonActor_NoRegister()
	{
		return AUxtPressableSwitchButtonActor::StaticClass();
	}
	struct Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchedOffIconBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchedOffIconBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchedOnIconBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchedOnIconBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUxtPressableRadioButtonActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOffIconBrush, "GetSwitchedOffIconBrush" }, // 4117595210
		{ &Z_Construct_UFunction_AUxtPressableSwitchButtonActor_GetSwitchedOnIconBrush, "GetSwitchedOnIconBrush" }, // 1286964527
		{ &Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOffIconBrush, "SetSwitchedOffIconBrush" }, // 3284970218
		{ &Z_Construct_UFunction_AUxtPressableSwitchButtonActor_SetSwitchedOnIconBrush, "SetSwitchedOnIconBrush" }, // 2369122389
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * A derived actor of AUxtPressableRadioButtonActor which represents the toggle state with a switch that animates\n * left and right.\n */" },
		{ "IncludePath", "Controls/UxtPressableSwitchButtonActor.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableSwitchButtonActor.h" },
		{ "ToolTip", "A derived actor of AUxtPressableRadioButtonActor which represents the toggle state with a switch that animates\nleft and right." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::NewProp_SwitchedOffIconBrush_MetaData[] = {
		{ "BlueprintGetter", "GetSwitchedOffIconBrush" },
		{ "BlueprintSetter", "SetSwitchedOffIconBrush" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Structure which contains properties for the button's icon when switched off. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableSwitchButtonActor.h" },
		{ "ToolTip", "Structure which contains properties for the button's icon when switched off." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::NewProp_SwitchedOffIconBrush = { "SwitchedOffIconBrush", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableSwitchButtonActor, SwitchedOffIconBrush), Z_Construct_UScriptStruct_FUxtIconBrush, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::NewProp_SwitchedOffIconBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::NewProp_SwitchedOffIconBrush_MetaData)) }; // 3641190900
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::NewProp_SwitchedOnIconBrush_MetaData[] = {
		{ "BlueprintGetter", "GetSwitchedOnIconBrush" },
		{ "BlueprintSetter", "SetSwitchedOnIconBrush" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Structure which contains properties for the button's icon when switched on. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableSwitchButtonActor.h" },
		{ "ToolTip", "Structure which contains properties for the button's icon when switched on." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::NewProp_SwitchedOnIconBrush = { "SwitchedOnIconBrush", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableSwitchButtonActor, SwitchedOnIconBrush), Z_Construct_UScriptStruct_FUxtIconBrush, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::NewProp_SwitchedOnIconBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::NewProp_SwitchedOnIconBrush_MetaData)) }; // 3641190900
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::NewProp_SwitchedOffIconBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::NewProp_SwitchedOnIconBrush,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUxtPressableSwitchButtonActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::ClassParams = {
		&AUxtPressableSwitchButtonActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUxtPressableSwitchButtonActor()
	{
		if (!Z_Registration_Info_UClass_AUxtPressableSwitchButtonActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUxtPressableSwitchButtonActor.OuterSingleton, Z_Construct_UClass_AUxtPressableSwitchButtonActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUxtPressableSwitchButtonActor.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<AUxtPressableSwitchButtonActor>()
	{
		return AUxtPressableSwitchButtonActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUxtPressableSwitchButtonActor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableSwitchButtonActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableSwitchButtonActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUxtPressableSwitchButtonActor, AUxtPressableSwitchButtonActor::StaticClass, TEXT("AUxtPressableSwitchButtonActor"), &Z_Registration_Info_UClass_AUxtPressableSwitchButtonActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUxtPressableSwitchButtonActor), 3238699313U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableSwitchButtonActor_h_299629734(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableSwitchButtonActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableSwitchButtonActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
