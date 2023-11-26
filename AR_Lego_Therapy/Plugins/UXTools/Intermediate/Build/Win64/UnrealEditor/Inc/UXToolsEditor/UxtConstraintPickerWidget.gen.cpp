// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXToolsEditor/Public/UxtConstraintPickerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtConstraintPickerWidget() {}
// Cross Module References
	UXTOOLSEDITOR_API UClass* Z_Construct_UClass_UUxtConstraintPickerWidget_NoRegister();
	UXTOOLSEDITOR_API UClass* Z_Construct_UClass_UUxtConstraintPickerWidget();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	UPackage* Z_Construct_UPackage__Script_UXToolsEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTransformConstraint_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUxtConstraintPickerWidget::execAddConstraint)
	{
		P_GET_OBJECT(UClass,Z_Param_ConstraintClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddConstraint(Z_Param_ConstraintClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtConstraintPickerWidget::execGetConstraintDescription)
	{
		P_GET_OBJECT(UClass,Z_Param_ConstraintClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetConstraintDescription(Z_Param_ConstraintClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtConstraintPickerWidget::execGetConstraintName)
	{
		P_GET_OBJECT(UClass,Z_Param_ConstraintClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetConstraintName(Z_Param_ConstraintClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtConstraintPickerWidget::execGetConstraintClasses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TSubclassOf<UUxtTransformConstraint> >*)Z_Param__Result=P_THIS->GetConstraintClasses();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtConstraintPickerWidget::execHasValidOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasValidOwner();
		P_NATIVE_END;
	}
	static FName NAME_UUxtConstraintPickerWidget_OnOwnerChanged = FName(TEXT("OnOwnerChanged"));
	void UUxtConstraintPickerWidget::OnOwnerChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUxtConstraintPickerWidget_OnOwnerChanged),NULL);
	}
	void UUxtConstraintPickerWidget::StaticRegisterNativesUUxtConstraintPickerWidget()
	{
		UClass* Class = UUxtConstraintPickerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddConstraint", &UUxtConstraintPickerWidget::execAddConstraint },
			{ "GetConstraintClasses", &UUxtConstraintPickerWidget::execGetConstraintClasses },
			{ "GetConstraintDescription", &UUxtConstraintPickerWidget::execGetConstraintDescription },
			{ "GetConstraintName", &UUxtConstraintPickerWidget::execGetConstraintName },
			{ "HasValidOwner", &UUxtConstraintPickerWidget::execHasValidOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtConstraintPickerWidget_AddConstraint_Statics
	{
		struct UxtConstraintPickerWidget_eventAddConstraint_Parms
		{
			TSubclassOf<UUxtTransformConstraint>  ConstraintClass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ConstraintClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUxtConstraintPickerWidget_AddConstraint_Statics::NewProp_ConstraintClass = { "ConstraintClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtConstraintPickerWidget_eventAddConstraint_Parms, ConstraintClass), Z_Construct_UClass_UUxtTransformConstraint_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUxtConstraintPickerWidget_AddConstraint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtConstraintPickerWidget_eventAddConstraint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtConstraintPickerWidget_AddConstraint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtConstraintPickerWidget_eventAddConstraint_Parms), &Z_Construct_UFunction_UUxtConstraintPickerWidget_AddConstraint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtConstraintPickerWidget_AddConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtConstraintPickerWidget_AddConstraint_Statics::NewProp_ConstraintClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtConstraintPickerWidget_AddConstraint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtConstraintPickerWidget_AddConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Constraint Picker Widget" },
		{ "Comment", "/** Add the selected constraint to the actor / blueprint. */" },
		{ "ModuleRelativePath", "Public/UxtConstraintPickerWidget.h" },
		{ "ToolTip", "Add the selected constraint to the actor / blueprint." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtConstraintPickerWidget_AddConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtConstraintPickerWidget, nullptr, "AddConstraint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtConstraintPickerWidget_AddConstraint_Statics::UxtConstraintPickerWidget_eventAddConstraint_Parms), Z_Construct_UFunction_UUxtConstraintPickerWidget_AddConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtConstraintPickerWidget_AddConstraint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtConstraintPickerWidget_AddConstraint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtConstraintPickerWidget_AddConstraint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtConstraintPickerWidget_AddConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtConstraintPickerWidget_AddConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintClasses_Statics
	{
		struct UxtConstraintPickerWidget_eventGetConstraintClasses_Parms
		{
			TArray<TSubclassOf<UUxtTransformConstraint> > ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintClasses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUxtTransformConstraint_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintClasses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtConstraintPickerWidget_eventGetConstraintClasses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintClasses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintClasses_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintClasses_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintClasses_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Constraint Picker Widget" },
		{ "Comment", "/** Get all classes that inherit from UxtTransformConstraint. */" },
		{ "ModuleRelativePath", "Public/UxtConstraintPickerWidget.h" },
		{ "ToolTip", "Get all classes that inherit from UxtTransformConstraint." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtConstraintPickerWidget, nullptr, "GetConstraintClasses", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintClasses_Statics::UxtConstraintPickerWidget_eventGetConstraintClasses_Parms), Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintClasses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintClasses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintClasses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintClasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintClasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintDescription_Statics
	{
		struct UxtConstraintPickerWidget_eventGetConstraintDescription_Parms
		{
			TSubclassOf<UUxtTransformConstraint>  ConstraintClass;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ConstraintClass;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintDescription_Statics::NewProp_ConstraintClass = { "ConstraintClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtConstraintPickerWidget_eventGetConstraintDescription_Parms, ConstraintClass), Z_Construct_UClass_UUxtTransformConstraint_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtConstraintPickerWidget_eventGetConstraintDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintDescription_Statics::NewProp_ConstraintClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Constraint Picker Widget" },
		{ "Comment", "/** Get the description for the constraint, this is the comment above the constraint class. */" },
		{ "ModuleRelativePath", "Public/UxtConstraintPickerWidget.h" },
		{ "ToolTip", "Get the description for the constraint, this is the comment above the constraint class." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtConstraintPickerWidget, nullptr, "GetConstraintDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintDescription_Statics::UxtConstraintPickerWidget_eventGetConstraintDescription_Parms), Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintName_Statics
	{
		struct UxtConstraintPickerWidget_eventGetConstraintName_Parms
		{
			TSubclassOf<UUxtTransformConstraint>  ConstraintClass;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ConstraintClass;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintName_Statics::NewProp_ConstraintClass = { "ConstraintClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtConstraintPickerWidget_eventGetConstraintName_Parms, ConstraintClass), Z_Construct_UClass_UUxtTransformConstraint_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtConstraintPickerWidget_eventGetConstraintName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintName_Statics::NewProp_ConstraintClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Constraint Picker Widget" },
		{ "Comment", "/** Get the name of the constraint as a formatted display string. */" },
		{ "ModuleRelativePath", "Public/UxtConstraintPickerWidget.h" },
		{ "ToolTip", "Get the name of the constraint as a formatted display string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtConstraintPickerWidget, nullptr, "GetConstraintName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintName_Statics::UxtConstraintPickerWidget_eventGetConstraintName_Parms), Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtConstraintPickerWidget_HasValidOwner_Statics
	{
		struct UxtConstraintPickerWidget_eventHasValidOwner_Parms
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
	void Z_Construct_UFunction_UUxtConstraintPickerWidget_HasValidOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtConstraintPickerWidget_eventHasValidOwner_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtConstraintPickerWidget_HasValidOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtConstraintPickerWidget_eventHasValidOwner_Parms), &Z_Construct_UFunction_UUxtConstraintPickerWidget_HasValidOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtConstraintPickerWidget_HasValidOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtConstraintPickerWidget_HasValidOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtConstraintPickerWidget_HasValidOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Constraint Picker Widget" },
		{ "Comment", "/** Returns true if we have a valid handle to the actor being modified. */" },
		{ "ModuleRelativePath", "Public/UxtConstraintPickerWidget.h" },
		{ "ToolTip", "Returns true if we have a valid handle to the actor being modified." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtConstraintPickerWidget_HasValidOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtConstraintPickerWidget, nullptr, "HasValidOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtConstraintPickerWidget_HasValidOwner_Statics::UxtConstraintPickerWidget_eventHasValidOwner_Parms), Z_Construct_UFunction_UUxtConstraintPickerWidget_HasValidOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtConstraintPickerWidget_HasValidOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtConstraintPickerWidget_HasValidOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtConstraintPickerWidget_HasValidOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtConstraintPickerWidget_HasValidOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtConstraintPickerWidget_HasValidOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtConstraintPickerWidget_OnOwnerChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtConstraintPickerWidget_OnOwnerChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Constraint Picker Widget" },
		{ "Comment", "/** Event which triggers when the owner is changed. */" },
		{ "ModuleRelativePath", "Public/UxtConstraintPickerWidget.h" },
		{ "ToolTip", "Event which triggers when the owner is changed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtConstraintPickerWidget_OnOwnerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtConstraintPickerWidget, nullptr, "OnOwnerChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtConstraintPickerWidget_OnOwnerChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtConstraintPickerWidget_OnOwnerChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtConstraintPickerWidget_OnOwnerChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtConstraintPickerWidget_OnOwnerChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtConstraintPickerWidget);
	UClass* Z_Construct_UClass_UUxtConstraintPickerWidget_NoRegister()
	{
		return UUxtConstraintPickerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUxtConstraintPickerWidget_Statics
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
	UObject* (*const Z_Construct_UClass_UUxtConstraintPickerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UXToolsEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtConstraintPickerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtConstraintPickerWidget_AddConstraint, "AddConstraint" }, // 1483761643
		{ &Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintClasses, "GetConstraintClasses" }, // 4177855331
		{ &Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintDescription, "GetConstraintDescription" }, // 1053327260
		{ &Z_Construct_UFunction_UUxtConstraintPickerWidget_GetConstraintName, "GetConstraintName" }, // 2651267901
		{ &Z_Construct_UFunction_UUxtConstraintPickerWidget_HasValidOwner, "HasValidOwner" }, // 2650944084
		{ &Z_Construct_UFunction_UUxtConstraintPickerWidget_OnOwnerChanged, "OnOwnerChanged" }, // 2177365634
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtConstraintPickerWidget_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXToolsEditor" },
		{ "Comment", "/**\n * Editor utility widget for adding constraints to actors.\n */" },
		{ "IncludePath", "UxtConstraintPickerWidget.h" },
		{ "ModuleRelativePath", "Public/UxtConstraintPickerWidget.h" },
		{ "ToolTip", "Editor utility widget for adding constraints to actors." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtConstraintPickerWidget_Statics::NewProp_TabID_MetaData[] = {
		{ "Category", "Uxt Constraint Picker Widget" },
		{ "Comment", "/** Gets unique identifier for the tab this EditorUtilityWidget was spawned into. */" },
		{ "ModuleRelativePath", "Public/UxtConstraintPickerWidget.h" },
		{ "ToolTip", "Gets unique identifier for the tab this EditorUtilityWidget was spawned into." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUxtConstraintPickerWidget_Statics::NewProp_TabID = { "TabID", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtConstraintPickerWidget, TabID), METADATA_PARAMS(Z_Construct_UClass_UUxtConstraintPickerWidget_Statics::NewProp_TabID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtConstraintPickerWidget_Statics::NewProp_TabID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtConstraintPickerWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtConstraintPickerWidget_Statics::NewProp_TabID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtConstraintPickerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtConstraintPickerWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtConstraintPickerWidget_Statics::ClassParams = {
		&UUxtConstraintPickerWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtConstraintPickerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtConstraintPickerWidget_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtConstraintPickerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtConstraintPickerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtConstraintPickerWidget()
	{
		if (!Z_Registration_Info_UClass_UUxtConstraintPickerWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtConstraintPickerWidget.OuterSingleton, Z_Construct_UClass_UUxtConstraintPickerWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtConstraintPickerWidget.OuterSingleton;
	}
	template<> UXTOOLSEDITOR_API UClass* StaticClass<UUxtConstraintPickerWidget>()
	{
		return UUxtConstraintPickerWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtConstraintPickerWidget);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsEditor_Public_UxtConstraintPickerWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsEditor_Public_UxtConstraintPickerWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtConstraintPickerWidget, UUxtConstraintPickerWidget::StaticClass, TEXT("UUxtConstraintPickerWidget"), &Z_Registration_Info_UClass_UUxtConstraintPickerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtConstraintPickerWidget), 1929456982U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsEditor_Public_UxtConstraintPickerWidget_h_86550030(TEXT("/Script/UXToolsEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsEditor_Public_UxtConstraintPickerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXToolsEditor_Public_UxtConstraintPickerWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
