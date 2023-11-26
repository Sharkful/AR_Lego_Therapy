// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtPressableToggleButtonActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtPressableToggleButtonActor() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableToggleButtonActor_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableToggleButtonActor();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtPressableButtonActor();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtToggleStateComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBackPlateComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUxtPressableToggleButtonActor::execOnButtonToggled)
	{
		P_GET_OBJECT(UUxtToggleStateComponent,Z_Param_ToggleState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonToggled(Z_Param_ToggleState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableToggleButtonActor::execRemoveTogglePlate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTogglePlate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableToggleButtonActor::execSetIsInitiallyChecked)
	{
		P_GET_UBOOL(Z_Param_InitiallyChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsInitiallyChecked(Z_Param_InitiallyChecked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableToggleButtonActor::execIsInitiallyChecked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitiallyChecked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtPressableToggleButtonActor::execUpdateToggleVisuals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateToggleVisuals();
		P_NATIVE_END;
	}
	void AUxtPressableToggleButtonActor::StaticRegisterNativesAUxtPressableToggleButtonActor()
	{
		UClass* Class = AUxtPressableToggleButtonActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsInitiallyChecked", &AUxtPressableToggleButtonActor::execIsInitiallyChecked },
			{ "OnButtonToggled", &AUxtPressableToggleButtonActor::execOnButtonToggled },
			{ "RemoveTogglePlate", &AUxtPressableToggleButtonActor::execRemoveTogglePlate },
			{ "SetIsInitiallyChecked", &AUxtPressableToggleButtonActor::execSetIsInitiallyChecked },
			{ "UpdateToggleVisuals", &AUxtPressableToggleButtonActor::execUpdateToggleVisuals },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUxtPressableToggleButtonActor_IsInitiallyChecked_Statics
	{
		struct UxtPressableToggleButtonActor_eventIsInitiallyChecked_Parms
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
	void Z_Construct_UFunction_AUxtPressableToggleButtonActor_IsInitiallyChecked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtPressableToggleButtonActor_eventIsInitiallyChecked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUxtPressableToggleButtonActor_IsInitiallyChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPressableToggleButtonActor_eventIsInitiallyChecked_Parms), &Z_Construct_UFunction_AUxtPressableToggleButtonActor_IsInitiallyChecked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableToggleButtonActor_IsInitiallyChecked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableToggleButtonActor_IsInitiallyChecked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableToggleButtonActor_IsInitiallyChecked_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Gets if the button was toggled on at BeginPlay. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableToggleButtonActor.h" },
		{ "ToolTip", "Gets if the button was toggled on at BeginPlay." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableToggleButtonActor_IsInitiallyChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableToggleButtonActor, nullptr, "IsInitiallyChecked", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUxtPressableToggleButtonActor_IsInitiallyChecked_Statics::UxtPressableToggleButtonActor_eventIsInitiallyChecked_Parms), Z_Construct_UFunction_AUxtPressableToggleButtonActor_IsInitiallyChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableToggleButtonActor_IsInitiallyChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableToggleButtonActor_IsInitiallyChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableToggleButtonActor_IsInitiallyChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableToggleButtonActor_IsInitiallyChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUxtPressableToggleButtonActor_IsInitiallyChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableToggleButtonActor_OnButtonToggled_Statics
	{
		struct UxtPressableToggleButtonActor_eventOnButtonToggled_Parms
		{
			UUxtToggleStateComponent* ToggleState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToggleState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableToggleButtonActor_OnButtonToggled_Statics::NewProp_ToggleState_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUxtPressableToggleButtonActor_OnButtonToggled_Statics::NewProp_ToggleState = { "ToggleState", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPressableToggleButtonActor_eventOnButtonToggled_Parms, ToggleState), Z_Construct_UClass_UUxtToggleStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableToggleButtonActor_OnButtonToggled_Statics::NewProp_ToggleState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableToggleButtonActor_OnButtonToggled_Statics::NewProp_ToggleState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableToggleButtonActor_OnButtonToggled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableToggleButtonActor_OnButtonToggled_Statics::NewProp_ToggleState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableToggleButtonActor_OnButtonToggled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Updates the toggle visuals when the toggles state changes. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableToggleButtonActor.h" },
		{ "ToolTip", "Updates the toggle visuals when the toggles state changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableToggleButtonActor_OnButtonToggled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableToggleButtonActor, nullptr, "OnButtonToggled", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUxtPressableToggleButtonActor_OnButtonToggled_Statics::UxtPressableToggleButtonActor_eventOnButtonToggled_Parms), Z_Construct_UFunction_AUxtPressableToggleButtonActor_OnButtonToggled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableToggleButtonActor_OnButtonToggled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableToggleButtonActor_OnButtonToggled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableToggleButtonActor_OnButtonToggled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableToggleButtonActor_OnButtonToggled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUxtPressableToggleButtonActor_OnButtonToggled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableToggleButtonActor_RemoveTogglePlate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableToggleButtonActor_RemoveTogglePlate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Option to remove the toggle plate if it is not needed for this button (for example in derived classes). */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableToggleButtonActor.h" },
		{ "ToolTip", "Option to remove the toggle plate if it is not needed for this button (for example in derived classes)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableToggleButtonActor_RemoveTogglePlate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableToggleButtonActor, nullptr, "RemoveTogglePlate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableToggleButtonActor_RemoveTogglePlate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableToggleButtonActor_RemoveTogglePlate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableToggleButtonActor_RemoveTogglePlate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUxtPressableToggleButtonActor_RemoveTogglePlate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableToggleButtonActor_SetIsInitiallyChecked_Statics
	{
		struct UxtPressableToggleButtonActor_eventSetIsInitiallyChecked_Parms
		{
			bool InitiallyChecked;
		};
		static void NewProp_InitiallyChecked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InitiallyChecked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUxtPressableToggleButtonActor_SetIsInitiallyChecked_Statics::NewProp_InitiallyChecked_SetBit(void* Obj)
	{
		((UxtPressableToggleButtonActor_eventSetIsInitiallyChecked_Parms*)Obj)->InitiallyChecked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUxtPressableToggleButtonActor_SetIsInitiallyChecked_Statics::NewProp_InitiallyChecked = { "InitiallyChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPressableToggleButtonActor_eventSetIsInitiallyChecked_Parms), &Z_Construct_UFunction_AUxtPressableToggleButtonActor_SetIsInitiallyChecked_Statics::NewProp_InitiallyChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtPressableToggleButtonActor_SetIsInitiallyChecked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtPressableToggleButtonActor_SetIsInitiallyChecked_Statics::NewProp_InitiallyChecked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableToggleButtonActor_SetIsInitiallyChecked_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Sets if the button was toggled on at BeginPlay. This method has no function after BeginPlay. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableToggleButtonActor.h" },
		{ "ToolTip", "Sets if the button was toggled on at BeginPlay. This method has no function after BeginPlay." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableToggleButtonActor_SetIsInitiallyChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableToggleButtonActor, nullptr, "SetIsInitiallyChecked", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUxtPressableToggleButtonActor_SetIsInitiallyChecked_Statics::UxtPressableToggleButtonActor_eventSetIsInitiallyChecked_Parms), Z_Construct_UFunction_AUxtPressableToggleButtonActor_SetIsInitiallyChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableToggleButtonActor_SetIsInitiallyChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableToggleButtonActor_SetIsInitiallyChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableToggleButtonActor_SetIsInitiallyChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableToggleButtonActor_SetIsInitiallyChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUxtPressableToggleButtonActor_SetIsInitiallyChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtPressableToggleButtonActor_UpdateToggleVisuals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtPressableToggleButtonActor_UpdateToggleVisuals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Alters the toggle visuals when the toggle state changes. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableToggleButtonActor.h" },
		{ "ToolTip", "Alters the toggle visuals when the toggle state changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtPressableToggleButtonActor_UpdateToggleVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtPressableToggleButtonActor, nullptr, "UpdateToggleVisuals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtPressableToggleButtonActor_UpdateToggleVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtPressableToggleButtonActor_UpdateToggleVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtPressableToggleButtonActor_UpdateToggleVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUxtPressableToggleButtonActor_UpdateToggleVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUxtPressableToggleButtonActor);
	UClass* Z_Construct_UClass_AUxtPressableToggleButtonActor_NoRegister()
	{
		return AUxtPressableToggleButtonActor::StaticClass();
	}
	struct Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitiallyChecked_MetaData[];
#endif
		static void NewProp_bIsInitiallyChecked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitiallyChecked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bToggleOnRelease_MetaData[];
#endif
		static void NewProp_bToggleOnRelease_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bToggleOnRelease;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToggleStateComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleStateComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TogglePlateComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TogglePlateComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUxtPressableButtonActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUxtPressableToggleButtonActor_IsInitiallyChecked, "IsInitiallyChecked" }, // 1274788118
		{ &Z_Construct_UFunction_AUxtPressableToggleButtonActor_OnButtonToggled, "OnButtonToggled" }, // 700726086
		{ &Z_Construct_UFunction_AUxtPressableToggleButtonActor_RemoveTogglePlate, "RemoveTogglePlate" }, // 1397149727
		{ &Z_Construct_UFunction_AUxtPressableToggleButtonActor_SetIsInitiallyChecked, "SetIsInitiallyChecked" }, // 2262206045
		{ &Z_Construct_UFunction_AUxtPressableToggleButtonActor_UpdateToggleVisuals, "UpdateToggleVisuals" }, // 2049467576
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * A derived actor of AUxtPressableButtonActor with a UUxtToggleStateComponent component to track state and visuals for a\n * button can which can be toggled on or off (checked or unchecked).\n */" },
		{ "IncludePath", "Controls/UxtPressableToggleButtonActor.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableToggleButtonActor.h" },
		{ "ToolTip", "A derived actor of AUxtPressableButtonActor with a UUxtToggleStateComponent component to track state and visuals for a\nbutton can which can be toggled on or off (checked or unchecked)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_bIsInitiallyChecked_MetaData[] = {
		{ "BlueprintGetter", "IsInitiallyChecked" },
		{ "BlueprintSetter", "SetIsInitiallyChecked" },
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Should the button be toggled on or off at BeginPlay? */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableToggleButtonActor.h" },
		{ "ToolTip", "Should the button be toggled on or off at BeginPlay?" },
	};
#endif
	void Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_bIsInitiallyChecked_SetBit(void* Obj)
	{
		((AUxtPressableToggleButtonActor*)Obj)->bIsInitiallyChecked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_bIsInitiallyChecked = { "bIsInitiallyChecked", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUxtPressableToggleButtonActor), &Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_bIsInitiallyChecked_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_bIsInitiallyChecked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_bIsInitiallyChecked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_bToggleOnRelease_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Should the button toggle on press or release? */" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableToggleButtonActor.h" },
		{ "ToolTip", "Should the button toggle on press or release?" },
	};
#endif
	void Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_bToggleOnRelease_SetBit(void* Obj)
	{
		((AUxtPressableToggleButtonActor*)Obj)->bToggleOnRelease = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_bToggleOnRelease = { "bToggleOnRelease", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUxtPressableToggleButtonActor), &Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_bToggleOnRelease_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_bToggleOnRelease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_bToggleOnRelease_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_ToggleStateComponent_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Component which keeps track of the toggled state. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableToggleButtonActor.h" },
		{ "ToolTip", "Component which keeps track of the toggled state." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_ToggleStateComponent = { "ToggleStateComponent", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableToggleButtonActor, ToggleStateComponent), Z_Construct_UClass_UUxtToggleStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_ToggleStateComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_ToggleStateComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_TogglePlateComponent_MetaData[] = {
		{ "Category", "Uxt Pressable Button" },
		{ "Comment", "/** Visual component to indicate the toggled state. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtPressableToggleButtonActor.h" },
		{ "ToolTip", "Visual component to indicate the toggled state." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_TogglePlateComponent = { "TogglePlateComponent", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtPressableToggleButtonActor, TogglePlateComponent), Z_Construct_UClass_UUxtBackPlateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_TogglePlateComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_TogglePlateComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_bIsInitiallyChecked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_bToggleOnRelease,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_ToggleStateComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::NewProp_TogglePlateComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUxtPressableToggleButtonActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::ClassParams = {
		&AUxtPressableToggleButtonActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUxtPressableToggleButtonActor()
	{
		if (!Z_Registration_Info_UClass_AUxtPressableToggleButtonActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUxtPressableToggleButtonActor.OuterSingleton, Z_Construct_UClass_AUxtPressableToggleButtonActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUxtPressableToggleButtonActor.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<AUxtPressableToggleButtonActor>()
	{
		return AUxtPressableToggleButtonActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUxtPressableToggleButtonActor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUxtPressableToggleButtonActor, AUxtPressableToggleButtonActor::StaticClass, TEXT("AUxtPressableToggleButtonActor"), &Z_Registration_Info_UClass_AUxtPressableToggleButtonActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUxtPressableToggleButtonActor), 1587278937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_616624218(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableToggleButtonActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
