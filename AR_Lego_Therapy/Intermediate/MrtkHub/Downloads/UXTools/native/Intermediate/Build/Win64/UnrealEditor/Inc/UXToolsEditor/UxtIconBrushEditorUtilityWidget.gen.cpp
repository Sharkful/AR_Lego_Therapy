// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXToolsEditor/Public/UxtIconBrushEditorUtilityWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtIconBrushEditorUtilityWidget() {}
// Cross Module References
	UXTOOLSEDITOR_API UClass* Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_NoRegister();
	UXTOOLSEDITOR_API UClass* Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	UPackage* Z_Construct_UPackage__Script_UXToolsEditor();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUxtIconBrushEditorUtilityWidget::execSetIconBrushString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IconString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetIconBrushString(Z_Param_IconString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtIconBrushEditorUtilityWidget::execGetIconBrushString)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_IconString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIconBrushString(Z_Param_Out_IconString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtIconBrushEditorUtilityWidget::execSetIconBrushFont)
	{
		P_GET_OBJECT(UFont,Z_Param_Font);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetIconBrushFont(Z_Param_Font);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtIconBrushEditorUtilityWidget::execGetIconBrushFont)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFont**)Z_Param__Result=P_THIS->GetIconBrushFont();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtIconBrushEditorUtilityWidget::execHasValidPropertyHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasValidPropertyHandle();
		P_NATIVE_END;
	}
	static FName NAME_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged = FName(TEXT("OnPropertyHandleChanged"));
	void UUxtIconBrushEditorUtilityWidget::OnPropertyHandleChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged),NULL);
	}
	void UUxtIconBrushEditorUtilityWidget::StaticRegisterNativesUUxtIconBrushEditorUtilityWidget()
	{
		UClass* Class = UUxtIconBrushEditorUtilityWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIconBrushFont", &UUxtIconBrushEditorUtilityWidget::execGetIconBrushFont },
			{ "GetIconBrushString", &UUxtIconBrushEditorUtilityWidget::execGetIconBrushString },
			{ "HasValidPropertyHandle", &UUxtIconBrushEditorUtilityWidget::execHasValidPropertyHandle },
			{ "SetIconBrushFont", &UUxtIconBrushEditorUtilityWidget::execSetIconBrushFont },
			{ "SetIconBrushString", &UUxtIconBrushEditorUtilityWidget::execSetIconBrushString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics
	{
		struct UxtIconBrushEditorUtilityWidget_eventGetIconBrushFont_Parms
		{
			UFont* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtIconBrushEditorUtilityWidget_eventGetIconBrushFont_Parms, ReturnValue), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Icon Brush Editor Utility Widget" },
		{ "Comment", "/** Gets the font associated with the UUxtIconBrush. */" },
		{ "ModuleRelativePath", "Public/UxtIconBrushEditorUtilityWidget.h" },
		{ "ToolTip", "Gets the font associated with the UUxtIconBrush." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget, nullptr, "GetIconBrushFont", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::UxtIconBrushEditorUtilityWidget_eventGetIconBrushFont_Parms), Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics
	{
		struct UxtIconBrushEditorUtilityWidget_eventGetIconBrushString_Parms
		{
			FString IconString;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_IconString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::NewProp_IconString = { "IconString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtIconBrushEditorUtilityWidget_eventGetIconBrushString_Parms, IconString), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtIconBrushEditorUtilityWidget_eventGetIconBrushString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtIconBrushEditorUtilityWidget_eventGetIconBrushString_Parms), &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::NewProp_IconString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Icon Brush Editor Utility Widget" },
		{ "Comment", "/** Gets the string associated with the UUxtIconBrush. */" },
		{ "ModuleRelativePath", "Public/UxtIconBrushEditorUtilityWidget.h" },
		{ "ToolTip", "Gets the string associated with the UUxtIconBrush." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget, nullptr, "GetIconBrushString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::UxtIconBrushEditorUtilityWidget_eventGetIconBrushString_Parms), Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics
	{
		struct UxtIconBrushEditorUtilityWidget_eventHasValidPropertyHandle_Parms
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
	void Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtIconBrushEditorUtilityWidget_eventHasValidPropertyHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtIconBrushEditorUtilityWidget_eventHasValidPropertyHandle_Parms), &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Icon Brush Editor Utility Widget" },
		{ "Comment", "/** Returns true if a non-null PropertyHandle is set. */" },
		{ "ModuleRelativePath", "Public/UxtIconBrushEditorUtilityWidget.h" },
		{ "ToolTip", "Returns true if a non-null PropertyHandle is set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget, nullptr, "HasValidPropertyHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::UxtIconBrushEditorUtilityWidget_eventHasValidPropertyHandle_Parms), Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Icon Brush Editor Utility Widget" },
		{ "Comment", "/** Event which triggers when the PropertyHandle is changed. */" },
		{ "ModuleRelativePath", "Public/UxtIconBrushEditorUtilityWidget.h" },
		{ "ToolTip", "Event which triggers when the PropertyHandle is changed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget, nullptr, "OnPropertyHandleChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics
	{
		struct UxtIconBrushEditorUtilityWidget_eventSetIconBrushFont_Parms
		{
			const UFont* Font;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Font;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::NewProp_Font_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtIconBrushEditorUtilityWidget_eventSetIconBrushFont_Parms, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::NewProp_Font_MetaData)) };
	void Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtIconBrushEditorUtilityWidget_eventSetIconBrushFont_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtIconBrushEditorUtilityWidget_eventSetIconBrushFont_Parms), &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::NewProp_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Icon Brush Editor Utility Widget" },
		{ "Comment", "/** Sets the font associated with the UUxtIconBrush. */" },
		{ "ModuleRelativePath", "Public/UxtIconBrushEditorUtilityWidget.h" },
		{ "ToolTip", "Sets the font associated with the UUxtIconBrush." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget, nullptr, "SetIconBrushFont", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::UxtIconBrushEditorUtilityWidget_eventSetIconBrushFont_Parms), Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics
	{
		struct UxtIconBrushEditorUtilityWidget_eventSetIconBrushString_Parms
		{
			FString IconString;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IconString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::NewProp_IconString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::NewProp_IconString = { "IconString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtIconBrushEditorUtilityWidget_eventSetIconBrushString_Parms, IconString), METADATA_PARAMS(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::NewProp_IconString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::NewProp_IconString_MetaData)) };
	void Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtIconBrushEditorUtilityWidget_eventSetIconBrushString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtIconBrushEditorUtilityWidget_eventSetIconBrushString_Parms), &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::NewProp_IconString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Icon Brush Editor Utility Widget" },
		{ "Comment", "/** Sets the string associated with the UUxtIconBrush. */" },
		{ "ModuleRelativePath", "Public/UxtIconBrushEditorUtilityWidget.h" },
		{ "ToolTip", "Sets the string associated with the UUxtIconBrush." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget, nullptr, "SetIconBrushString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::UxtIconBrushEditorUtilityWidget_eventSetIconBrushString_Parms), Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtIconBrushEditorUtilityWidget);
	UClass* Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_NoRegister()
	{
		return UUxtIconBrushEditorUtilityWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UXToolsEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont, "GetIconBrushFont" }, // 3810383664
		{ &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString, "GetIconBrushString" }, // 3129021010
		{ &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle, "HasValidPropertyHandle" }, // 4154829300
		{ &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged, "OnPropertyHandleChanged" }, // 789437626
		{ &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont, "SetIconBrushFont" }, // 3200427818
		{ &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString, "SetIconBrushString" }, // 3294125018
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXToolsEditor" },
		{ "IncludePath", "UxtIconBrushEditorUtilityWidget.h" },
		{ "ModuleRelativePath", "Public/UxtIconBrushEditorUtilityWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::NewProp_TabID_MetaData[] = {
		{ "Category", "Uxt Icon Brush Editor Utility Widget" },
		{ "Comment", "/** Gets unique identifier for the tab this EditorUtilityWidget was spawned into. */" },
		{ "ModuleRelativePath", "Public/UxtIconBrushEditorUtilityWidget.h" },
		{ "ToolTip", "Gets unique identifier for the tab this EditorUtilityWidget was spawned into." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::NewProp_TabID = { "TabID", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtIconBrushEditorUtilityWidget, TabID), METADATA_PARAMS(Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::NewProp_TabID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::NewProp_TabID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::NewProp_TabID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtIconBrushEditorUtilityWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::ClassParams = {
		&UUxtIconBrushEditorUtilityWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget()
	{
		if (!Z_Registration_Info_UClass_UUxtIconBrushEditorUtilityWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtIconBrushEditorUtilityWidget.OuterSingleton, Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtIconBrushEditorUtilityWidget.OuterSingleton;
	}
	template<> UXTOOLSEDITOR_API UClass* StaticClass<UUxtIconBrushEditorUtilityWidget>()
	{
		return UUxtIconBrushEditorUtilityWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtIconBrushEditorUtilityWidget);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsEditor_Public_UxtIconBrushEditorUtilityWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsEditor_Public_UxtIconBrushEditorUtilityWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget, UUxtIconBrushEditorUtilityWidget::StaticClass, TEXT("UUxtIconBrushEditorUtilityWidget"), &Z_Registration_Info_UClass_UUxtIconBrushEditorUtilityWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtIconBrushEditorUtilityWidget), 1510810097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsEditor_Public_UxtIconBrushEditorUtilityWidget_h_917984637(TEXT("/Script/UXToolsEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsEditor_Public_UxtIconBrushEditorUtilityWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsEditor_Public_UxtIconBrushEditorUtilityWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
