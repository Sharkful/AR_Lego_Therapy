// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Input/UxtPointerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtPointerComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPointerComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPointerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
// End Cross Module References
	DEFINE_FUNCTION(UUxtPointerComponent::execGetCursorTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetCursorTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPointerComponent::execGetFocusTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetFocusTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPointerComponent::execSetFocusLocked)
	{
		P_GET_UBOOL(Z_Param_bLocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocusLocked(Z_Param_bLocked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtPointerComponent::execGetFocusLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFocusLocked();
		P_NATIVE_END;
	}
	void UUxtPointerComponent::StaticRegisterNativesUUxtPointerComponent()
	{
		UClass* Class = UUxtPointerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCursorTransform", &UUxtPointerComponent::execGetCursorTransform },
			{ "GetFocusLocked", &UUxtPointerComponent::execGetFocusLocked },
			{ "GetFocusTarget", &UUxtPointerComponent::execGetFocusTarget },
			{ "SetFocusLocked", &UUxtPointerComponent::execSetFocusLocked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtPointerComponent_GetCursorTransform_Statics
	{
		struct UxtPointerComponent_eventGetCursorTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtPointerComponent_GetCursorTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPointerComponent_eventGetCursorTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPointerComponent_GetCursorTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPointerComponent_GetCursorTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPointerComponent_GetCursorTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pointer" },
		{ "Comment", "/** Get the cursor transform. */" },
		{ "ModuleRelativePath", "Public/Input/UxtPointerComponent.h" },
		{ "ToolTip", "Get the cursor transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPointerComponent_GetCursorTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPointerComponent, nullptr, "GetCursorTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPointerComponent_GetCursorTransform_Statics::UxtPointerComponent_eventGetCursorTransform_Parms), Z_Construct_UFunction_UUxtPointerComponent_GetCursorTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPointerComponent_GetCursorTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPointerComponent_GetCursorTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPointerComponent_GetCursorTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPointerComponent_GetCursorTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPointerComponent_GetCursorTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPointerComponent_GetFocusLocked_Statics
	{
		struct UxtPointerComponent_eventGetFocusLocked_Parms
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
	void Z_Construct_UFunction_UUxtPointerComponent_GetFocusLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtPointerComponent_eventGetFocusLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtPointerComponent_GetFocusLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPointerComponent_eventGetFocusLocked_Parms), &Z_Construct_UFunction_UUxtPointerComponent_GetFocusLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPointerComponent_GetFocusLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPointerComponent_GetFocusLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPointerComponent_GetFocusLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pointer" },
		{ "Comment", "/** Get the lock state of the pointer. */" },
		{ "ModuleRelativePath", "Public/Input/UxtPointerComponent.h" },
		{ "ToolTip", "Get the lock state of the pointer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPointerComponent_GetFocusLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPointerComponent, nullptr, "GetFocusLocked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPointerComponent_GetFocusLocked_Statics::UxtPointerComponent_eventGetFocusLocked_Parms), Z_Construct_UFunction_UUxtPointerComponent_GetFocusLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPointerComponent_GetFocusLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPointerComponent_GetFocusLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPointerComponent_GetFocusLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPointerComponent_GetFocusLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPointerComponent_GetFocusLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPointerComponent_GetFocusTarget_Statics
	{
		struct UxtPointerComponent_eventGetFocusTarget_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPointerComponent_GetFocusTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPointerComponent_eventGetFocusTarget_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPointerComponent_GetFocusTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPointerComponent_GetFocusTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPointerComponent_GetFocusTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pointer" },
		{ "Comment", "/** Get the target currently being focused by the pointer, if any. */" },
		{ "ModuleRelativePath", "Public/Input/UxtPointerComponent.h" },
		{ "ToolTip", "Get the target currently being focused by the pointer, if any." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPointerComponent_GetFocusTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPointerComponent, nullptr, "GetFocusTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPointerComponent_GetFocusTarget_Statics::UxtPointerComponent_eventGetFocusTarget_Parms), Z_Construct_UFunction_UUxtPointerComponent_GetFocusTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPointerComponent_GetFocusTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPointerComponent_GetFocusTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPointerComponent_GetFocusTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPointerComponent_GetFocusTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPointerComponent_GetFocusTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPointerComponent_SetFocusLocked_Statics
	{
		struct UxtPointerComponent_eventSetFocusLocked_Parms
		{
			bool bLocked;
		};
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtPointerComponent_SetFocusLocked_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((UxtPointerComponent_eventSetFocusLocked_Parms*)Obj)->bLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtPointerComponent_SetFocusLocked_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPointerComponent_eventSetFocusLocked_Parms), &Z_Construct_UFunction_UUxtPointerComponent_SetFocusLocked_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPointerComponent_SetFocusLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPointerComponent_SetFocusLocked_Statics::NewProp_bLocked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPointerComponent_SetFocusLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Pointer" },
		{ "Comment", "/**\n\x09 * Set the lock state of the pointer.\n\x09 * Locked pointers don't update their hit, remaining focused on the primitive they were hitting until unlocked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Input/UxtPointerComponent.h" },
		{ "ToolTip", "Set the lock state of the pointer.\nLocked pointers don't update their hit, remaining focused on the primitive they were hitting until unlocked." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPointerComponent_SetFocusLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPointerComponent, nullptr, "SetFocusLocked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtPointerComponent_SetFocusLocked_Statics::UxtPointerComponent_eventSetFocusLocked_Parms), Z_Construct_UFunction_UUxtPointerComponent_SetFocusLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPointerComponent_SetFocusLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPointerComponent_SetFocusLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPointerComponent_SetFocusLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPointerComponent_SetFocusLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtPointerComponent_SetFocusLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtPointerComponent);
	UClass* Z_Construct_UClass_UUxtPointerComponent_NoRegister()
	{
		return UUxtPointerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtPointerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtPointerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtPointerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtPointerComponent_GetCursorTransform, "GetCursorTransform" }, // 3071496483
		{ &Z_Construct_UFunction_UUxtPointerComponent_GetFocusLocked, "GetFocusLocked" }, // 553399779
		{ &Z_Construct_UFunction_UUxtPointerComponent_GetFocusTarget, "GetFocusTarget" }, // 3277678506
		{ &Z_Construct_UFunction_UUxtPointerComponent_SetFocusLocked, "SetFocusLocked" }, // 3828989943
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPointerComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Base component for UXT pointers.\n */" },
		{ "IncludePath", "Input/UxtPointerComponent.h" },
		{ "ModuleRelativePath", "Public/Input/UxtPointerComponent.h" },
		{ "ToolTip", "Base component for UXT pointers." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtPointerComponent_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPointerComponent_Statics::NewProp_Hand_MetaData[] = {
		{ "Category", "Uxt Pointer" },
		{ "Comment", "/** The hand to be used for targeting. TODO: replace with generic input device. */" },
		{ "ModuleRelativePath", "Public/Input/UxtPointerComponent.h" },
		{ "ToolTip", "The hand to be used for targeting. TODO: replace with generic input device." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtPointerComponent_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPointerComponent, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UClass_UUxtPointerComponent_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPointerComponent_Statics::NewProp_Hand_MetaData)) }; // 2206298931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtPointerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPointerComponent_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPointerComponent_Statics::NewProp_Hand,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtPointerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtPointerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtPointerComponent_Statics::ClassParams = {
		&UUxtPointerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtPointerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPointerComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtPointerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPointerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtPointerComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtPointerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtPointerComponent.OuterSingleton, Z_Construct_UClass_UUxtPointerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtPointerComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtPointerComponent>()
	{
		return UUxtPointerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtPointerComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtPointerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtPointerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtPointerComponent, UUxtPointerComponent::StaticClass, TEXT("UUxtPointerComponent"), &Z_Registration_Info_UClass_UUxtPointerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtPointerComponent), 248504652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtPointerComponent_h_1171887355(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtPointerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtPointerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
