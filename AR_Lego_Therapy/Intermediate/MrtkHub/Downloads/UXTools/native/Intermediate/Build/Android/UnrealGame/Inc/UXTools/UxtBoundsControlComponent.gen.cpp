// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtBoundsControlComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtBoundsControlComponent() {}
// Cross Module References
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtAffordanceInstance();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBoundsControlComponent_NoRegister();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtAffordanceConfig();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBoundsControlComponent();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtManipulatorComponent();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtAffordanceKind();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtGrabPointerData();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarPointerComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtNearPointerComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBoundsControlConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UxtAffordanceInstance;
class UScriptStruct* FUxtAffordanceInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UxtAffordanceInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UxtAffordanceInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUxtAffordanceInstance, Z_Construct_UPackage__Script_UXTools(), TEXT("UxtAffordanceInstance"));
	}
	return Z_Registration_Info_UScriptStruct_UxtAffordanceInstance.OuterSingleton;
}
template<> UXTOOLS_API UScriptStruct* StaticStruct<FUxtAffordanceInstance>()
{
	return FUxtAffordanceInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUxtAffordanceInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtAffordanceInstance_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Instance of an affordance on the bounds control actor. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Instance of an affordance on the bounds control actor." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUxtAffordanceInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUxtAffordanceInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtAffordanceInstance_Statics::NewProp_DynamicMaterial_MetaData[] = {
		{ "Comment", "/** Dynamic material for highlighting the affordance. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Dynamic material for highlighting the affordance." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtAffordanceInstance_Statics::NewProp_DynamicMaterial = { "DynamicMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtAffordanceInstance, DynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtAffordanceInstance_Statics::NewProp_DynamicMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtAffordanceInstance_Statics::NewProp_DynamicMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUxtAffordanceInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtAffordanceInstance_Statics::NewProp_DynamicMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUxtAffordanceInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		&NewStructOps,
		"UxtAffordanceInstance",
		sizeof(FUxtAffordanceInstance),
		alignof(FUxtAffordanceInstance),
		Z_Construct_UScriptStruct_FUxtAffordanceInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtAffordanceInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtAffordanceInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtAffordanceInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUxtAffordanceInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_UxtAffordanceInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UxtAffordanceInstance.InnerSingleton, Z_Construct_UScriptStruct_FUxtAffordanceInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UxtAffordanceInstance.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtBoundsControlManipulationStartedDelegate_Parms
		{
			UUxtBoundsControlComponent* Manipulator;
			FUxtAffordanceConfig AffordanceInfo;
			UUxtGrabTargetComponent* GrabbedComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Manipulator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Manipulator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffordanceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AffordanceInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabbedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabbedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::NewProp_Manipulator_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::NewProp_Manipulator = { "Manipulator", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtBoundsControlManipulationStartedDelegate_Parms, Manipulator), Z_Construct_UClass_UUxtBoundsControlComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::NewProp_Manipulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::NewProp_Manipulator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo = { "AffordanceInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtBoundsControlManipulationStartedDelegate_Parms, AffordanceInfo), Z_Construct_UScriptStruct_FUxtAffordanceConfig, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo_MetaData)) }; // 1948308505
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent = { "GrabbedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtBoundsControlManipulationStartedDelegate_Parms, GrabbedComponent), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::NewProp_Manipulator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtBoundsControlManipulationStartedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtBoundsControlManipulationStartedDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtBoundsControlManipulationEndedDelegate_Parms
		{
			UUxtBoundsControlComponent* Manipulator;
			FUxtAffordanceConfig AffordanceInfo;
			UUxtGrabTargetComponent* GrabbedComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Manipulator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Manipulator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffordanceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AffordanceInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabbedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabbedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::NewProp_Manipulator_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::NewProp_Manipulator = { "Manipulator", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtBoundsControlManipulationEndedDelegate_Parms, Manipulator), Z_Construct_UClass_UUxtBoundsControlComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::NewProp_Manipulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::NewProp_Manipulator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo = { "AffordanceInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtBoundsControlManipulationEndedDelegate_Parms, AffordanceInfo), Z_Construct_UScriptStruct_FUxtAffordanceConfig, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo_MetaData)) }; // 1948308505
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent = { "GrabbedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtBoundsControlManipulationEndedDelegate_Parms, GrabbedComponent), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::NewProp_Manipulator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::NewProp_AffordanceInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::NewProp_GrabbedComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtBoundsControlManipulationEndedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::_Script_UXTools_eventUxtBoundsControlManipulationEndedDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUxtBoundsControlComponent::execOnAffordanceEndGrab)
	{
		P_GET_OBJECT(UUxtGrabTargetComponent,Z_Param_Grabbable);
		P_GET_STRUCT(FUxtGrabPointerData,Z_Param_GrabPointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAffordanceEndGrab(Z_Param_Grabbable,Z_Param_GrabPointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundsControlComponent::execOnAffordanceUpdateGrab)
	{
		P_GET_OBJECT(UUxtGrabTargetComponent,Z_Param_Grabbable);
		P_GET_STRUCT(FUxtGrabPointerData,Z_Param_GrabPointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAffordanceUpdateGrab(Z_Param_Grabbable,Z_Param_GrabPointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundsControlComponent::execOnAffordanceBeginGrab)
	{
		P_GET_OBJECT(UUxtGrabTargetComponent,Z_Param_Grabbable);
		P_GET_STRUCT(FUxtGrabPointerData,Z_Param_GrabPointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAffordanceBeginGrab(Z_Param_Grabbable,Z_Param_GrabPointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundsControlComponent::execOnAffordanceExitGrabFocus)
	{
		P_GET_OBJECT(UUxtGrabTargetComponent,Z_Param_Grabbable);
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAffordanceExitGrabFocus(Z_Param_Grabbable,Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundsControlComponent::execOnAffordanceExitFarFocus)
	{
		P_GET_OBJECT(UUxtGrabTargetComponent,Z_Param_Grabbable);
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAffordanceExitFarFocus(Z_Param_Grabbable,Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundsControlComponent::execOnAffordanceEnterGrabFocus)
	{
		P_GET_OBJECT(UUxtGrabTargetComponent,Z_Param_Grabbable);
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAffordanceEnterGrabFocus(Z_Param_Grabbable,Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundsControlComponent::execOnAffordanceEnterFarFocus)
	{
		P_GET_OBJECT(UUxtGrabTargetComponent,Z_Param_Grabbable);
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAffordanceEnterFarFocus(Z_Param_Grabbable,Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundsControlComponent::execComputeBoundsFromComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComputeBoundsFromComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundsControlComponent::execGetAffordanceKindMesh)
	{
		P_GET_ENUM(EUxtAffordanceKind,Z_Param_Kind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=P_THIS->GetAffordanceKindMesh(EUxtAffordanceKind(Z_Param_Kind));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundsControlComponent::execGetBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=P_THIS->GetBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundsControlComponent::execGetInitBoundsFromActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInitBoundsFromActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBoundsControlComponent::execGetBoundsControlActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetBoundsControlActor();
		P_NATIVE_END;
	}
	void UUxtBoundsControlComponent::StaticRegisterNativesUUxtBoundsControlComponent()
	{
		UClass* Class = UUxtBoundsControlComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeBoundsFromComponents", &UUxtBoundsControlComponent::execComputeBoundsFromComponents },
			{ "GetAffordanceKindMesh", &UUxtBoundsControlComponent::execGetAffordanceKindMesh },
			{ "GetBounds", &UUxtBoundsControlComponent::execGetBounds },
			{ "GetBoundsControlActor", &UUxtBoundsControlComponent::execGetBoundsControlActor },
			{ "GetInitBoundsFromActor", &UUxtBoundsControlComponent::execGetInitBoundsFromActor },
			{ "OnAffordanceBeginGrab", &UUxtBoundsControlComponent::execOnAffordanceBeginGrab },
			{ "OnAffordanceEndGrab", &UUxtBoundsControlComponent::execOnAffordanceEndGrab },
			{ "OnAffordanceEnterFarFocus", &UUxtBoundsControlComponent::execOnAffordanceEnterFarFocus },
			{ "OnAffordanceEnterGrabFocus", &UUxtBoundsControlComponent::execOnAffordanceEnterGrabFocus },
			{ "OnAffordanceExitFarFocus", &UUxtBoundsControlComponent::execOnAffordanceExitFarFocus },
			{ "OnAffordanceExitGrabFocus", &UUxtBoundsControlComponent::execOnAffordanceExitGrabFocus },
			{ "OnAffordanceUpdateGrab", &UUxtBoundsControlComponent::execOnAffordanceUpdateGrab },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtBoundsControlComponent_ComputeBoundsFromComponents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_ComputeBoundsFromComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Bounds Control" },
		{ "Comment", "/** Compute the bounding box based on the components of the bounding box actor. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Compute the bounding box based on the components of the bounding box actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundsControlComponent_ComputeBoundsFromComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundsControlComponent, nullptr, "ComputeBoundsFromComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_ComputeBoundsFromComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_ComputeBoundsFromComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundsControlComponent_ComputeBoundsFromComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBoundsControlComponent_ComputeBoundsFromComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundsControlComponent_GetAffordanceKindMesh_Statics
	{
		struct UxtBoundsControlComponent_eventGetAffordanceKindMesh_Parms
		{
			EUxtAffordanceKind Kind;
			UStaticMesh* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Kind;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_GetAffordanceKindMesh_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_GetAffordanceKindMesh_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundsControlComponent_eventGetAffordanceKindMesh_Parms, Kind), Z_Construct_UEnum_UXTools_EUxtAffordanceKind, METADATA_PARAMS(nullptr, 0) }; // 4029785293
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_GetAffordanceKindMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundsControlComponent_eventGetAffordanceKindMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundsControlComponent_GetAffordanceKindMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_GetAffordanceKindMesh_Statics::NewProp_Kind_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_GetAffordanceKindMesh_Statics::NewProp_Kind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_GetAffordanceKindMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_GetAffordanceKindMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Bounds Control|Affordances" },
		{ "Comment", "/** Mesh for the given kind of affordance. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Mesh for the given kind of affordance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundsControlComponent_GetAffordanceKindMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundsControlComponent, nullptr, "GetAffordanceKindMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtBoundsControlComponent_GetAffordanceKindMesh_Statics::UxtBoundsControlComponent_eventGetAffordanceKindMesh_Parms), Z_Construct_UFunction_UUxtBoundsControlComponent_GetAffordanceKindMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_GetAffordanceKindMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_GetAffordanceKindMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_GetAffordanceKindMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundsControlComponent_GetAffordanceKindMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBoundsControlComponent_GetAffordanceKindMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundsControlComponent_GetBounds_Statics
	{
		struct UxtBoundsControlComponent_eventGetBounds_Parms
		{
			FBox ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_GetBounds_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundsControlComponent_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_GetBounds_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_GetBounds_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundsControlComponent_GetBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_GetBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Bounds Control" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundsControlComponent_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundsControlComponent, nullptr, "GetBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtBoundsControlComponent_GetBounds_Statics::UxtBoundsControlComponent_eventGetBounds_Parms), Z_Construct_UFunction_UUxtBoundsControlComponent_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_GetBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundsControlComponent_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBoundsControlComponent_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundsControlComponent_GetBoundsControlActor_Statics
	{
		struct UxtBoundsControlComponent_eventGetBoundsControlActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_GetBoundsControlActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundsControlComponent_eventGetBoundsControlActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundsControlComponent_GetBoundsControlActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_GetBoundsControlActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_GetBoundsControlActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Bounds Control|Affordances" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundsControlComponent_GetBoundsControlActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundsControlComponent, nullptr, "GetBoundsControlActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtBoundsControlComponent_GetBoundsControlActor_Statics::UxtBoundsControlComponent_eventGetBoundsControlActor_Parms), Z_Construct_UFunction_UUxtBoundsControlComponent_GetBoundsControlActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_GetBoundsControlActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_GetBoundsControlActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_GetBoundsControlActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundsControlComponent_GetBoundsControlActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBoundsControlComponent_GetBoundsControlActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundsControlComponent_GetInitBoundsFromActor_Statics
	{
		struct UxtBoundsControlComponent_eventGetInitBoundsFromActor_Parms
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
	void Z_Construct_UFunction_UUxtBoundsControlComponent_GetInitBoundsFromActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtBoundsControlComponent_eventGetInitBoundsFromActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_GetInitBoundsFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtBoundsControlComponent_eventGetInitBoundsFromActor_Parms), &Z_Construct_UFunction_UUxtBoundsControlComponent_GetInitBoundsFromActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundsControlComponent_GetInitBoundsFromActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_GetInitBoundsFromActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_GetInitBoundsFromActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Uxt Bounds Control|Affordances" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundsControlComponent_GetInitBoundsFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundsControlComponent, nullptr, "GetInitBoundsFromActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtBoundsControlComponent_GetInitBoundsFromActor_Statics::UxtBoundsControlComponent_eventGetInitBoundsFromActor_Parms), Z_Construct_UFunction_UUxtBoundsControlComponent_GetInitBoundsFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_GetInitBoundsFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_GetInitBoundsFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_GetInitBoundsFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundsControlComponent_GetInitBoundsFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBoundsControlComponent_GetInitBoundsFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab_Statics
	{
		struct UxtBoundsControlComponent_eventOnAffordanceBeginGrab_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundsControlComponent_eventOnAffordanceBeginGrab_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab_Statics::NewProp_Grabbable_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab_Statics::NewProp_GrabPointer = { "GrabPointer", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundsControlComponent_eventOnAffordanceBeginGrab_Parms, GrabPointer), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) }; // 1953156998
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab_Statics::NewProp_Grabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab_Statics::NewProp_GrabPointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Bounds Control|Affordances" },
		{ "Comment", "/** Callback when an affordance is being grabbed. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Callback when an affordance is being grabbed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundsControlComponent, nullptr, "OnAffordanceBeginGrab", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab_Statics::UxtBoundsControlComponent_eventOnAffordanceBeginGrab_Parms), Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab_Statics
	{
		struct UxtBoundsControlComponent_eventOnAffordanceEndGrab_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundsControlComponent_eventOnAffordanceEndGrab_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab_Statics::NewProp_Grabbable_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab_Statics::NewProp_GrabPointer = { "GrabPointer", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundsControlComponent_eventOnAffordanceEndGrab_Parms, GrabPointer), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) }; // 1953156998
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab_Statics::NewProp_Grabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab_Statics::NewProp_GrabPointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Bounds Control|Affordances" },
		{ "Comment", "/** Callback when an affordance is being released. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Callback when an affordance is being released." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundsControlComponent, nullptr, "OnAffordanceEndGrab", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab_Statics::UxtBoundsControlComponent_eventOnAffordanceEndGrab_Parms), Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics
	{
		struct UxtBoundsControlComponent_eventOnAffordanceEnterFarFocus_Parms
		{
			UUxtGrabTargetComponent* Grabbable;
			UUxtFarPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grabbable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Grabbable;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundsControlComponent_eventOnAffordanceEnterFarFocus_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::NewProp_Grabbable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundsControlComponent_eventOnAffordanceEnterFarFocus_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::NewProp_Grabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Bounds Control|Affordances" },
		{ "Comment", "/** Callback when an affordance is entering focus. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Callback when an affordance is entering focus." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundsControlComponent, nullptr, "OnAffordanceEnterFarFocus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::UxtBoundsControlComponent_eventOnAffordanceEnterFarFocus_Parms), Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics
	{
		struct UxtBoundsControlComponent_eventOnAffordanceEnterGrabFocus_Parms
		{
			UUxtGrabTargetComponent* Grabbable;
			UUxtNearPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grabbable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Grabbable;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundsControlComponent_eventOnAffordanceEnterGrabFocus_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::NewProp_Grabbable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundsControlComponent_eventOnAffordanceEnterGrabFocus_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::NewProp_Grabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Bounds Control|Affordances" },
		{ "Comment", "/** Callback when an affordance is entering focus. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Callback when an affordance is entering focus." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundsControlComponent, nullptr, "OnAffordanceEnterGrabFocus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::UxtBoundsControlComponent_eventOnAffordanceEnterGrabFocus_Parms), Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics
	{
		struct UxtBoundsControlComponent_eventOnAffordanceExitFarFocus_Parms
		{
			UUxtGrabTargetComponent* Grabbable;
			UUxtFarPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grabbable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Grabbable;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundsControlComponent_eventOnAffordanceExitFarFocus_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::NewProp_Grabbable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundsControlComponent_eventOnAffordanceExitFarFocus_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::NewProp_Grabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Bounds Control|Affordances" },
		{ "Comment", "/** Callback when an affordance is exiting focus. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Callback when an affordance is exiting focus." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundsControlComponent, nullptr, "OnAffordanceExitFarFocus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::UxtBoundsControlComponent_eventOnAffordanceExitFarFocus_Parms), Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics
	{
		struct UxtBoundsControlComponent_eventOnAffordanceExitGrabFocus_Parms
		{
			UUxtGrabTargetComponent* Grabbable;
			UUxtNearPointerComponent* Pointer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grabbable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Grabbable;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundsControlComponent_eventOnAffordanceExitGrabFocus_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::NewProp_Grabbable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundsControlComponent_eventOnAffordanceExitGrabFocus_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::NewProp_Pointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::NewProp_Grabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Bounds Control|Affordances" },
		{ "Comment", "/** Callback when an affordance is exiting focus. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Callback when an affordance is exiting focus." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundsControlComponent, nullptr, "OnAffordanceExitGrabFocus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::UxtBoundsControlComponent_eventOnAffordanceExitGrabFocus_Parms), Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab_Statics
	{
		struct UxtBoundsControlComponent_eventOnAffordanceUpdateGrab_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundsControlComponent_eventOnAffordanceUpdateGrab_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab_Statics::NewProp_Grabbable_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab_Statics::NewProp_GrabPointer = { "GrabPointer", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBoundsControlComponent_eventOnAffordanceUpdateGrab_Parms, GrabPointer), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) }; // 1953156998
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab_Statics::NewProp_Grabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab_Statics::NewProp_GrabPointer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Uxt Bounds Control|Affordances" },
		{ "Comment", "/** Callback when an affordance is being grabbed. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Callback when an affordance is being grabbed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBoundsControlComponent, nullptr, "OnAffordanceUpdateGrab", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab_Statics::UxtBoundsControlComponent_eventOnAffordanceUpdateGrab_Parms), Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUxtBoundsControlComponent);
	UClass* Z_Construct_UClass_UUxtBoundsControlComponent_NoRegister()
	{
		return UUxtBoundsControlComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtBoundsControlComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterAffordanceMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CenterAffordanceMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceAffordanceMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FaceAffordanceMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeAffordanceMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeAffordanceMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CornerAffordanceMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CornerAffordanceMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfile_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffordanceVisibilityDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AffordanceVisibilityDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffordanceTransitionDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AffordanceTransitionDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnManipulationStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManipulationStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnManipulationEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManipulationEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitBoundsFromActor_MetaData[];
#endif
		static void NewProp_bInitBoundsFromActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitBoundsFromActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsControlActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundsControlActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsControlGrabbable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundsControlGrabbable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveAffordanceMap_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimitiveAffordanceMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveAffordanceMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PrimitiveAffordanceMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtBoundsControlComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtManipulatorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtBoundsControlComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtBoundsControlComponent_ComputeBoundsFromComponents, "ComputeBoundsFromComponents" }, // 3189001534
		{ &Z_Construct_UFunction_UUxtBoundsControlComponent_GetAffordanceKindMesh, "GetAffordanceKindMesh" }, // 3950315264
		{ &Z_Construct_UFunction_UUxtBoundsControlComponent_GetBounds, "GetBounds" }, // 2745922992
		{ &Z_Construct_UFunction_UUxtBoundsControlComponent_GetBoundsControlActor, "GetBoundsControlActor" }, // 2144679300
		{ &Z_Construct_UFunction_UUxtBoundsControlComponent_GetInitBoundsFromActor, "GetInitBoundsFromActor" }, // 66203239
		{ &Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceBeginGrab, "OnAffordanceBeginGrab" }, // 3791341445
		{ &Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEndGrab, "OnAffordanceEndGrab" }, // 1529072458
		{ &Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterFarFocus, "OnAffordanceEnterFarFocus" }, // 756589708
		{ &Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceEnterGrabFocus, "OnAffordanceEnterGrabFocus" }, // 1346295282
		{ &Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitFarFocus, "OnAffordanceExitFarFocus" }, // 3754047519
		{ &Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceExitGrabFocus, "OnAffordanceExitGrabFocus" }, // 300467466
		{ &Z_Construct_UFunction_UUxtBoundsControlComponent_OnAffordanceUpdateGrab, "OnAffordanceUpdateGrab" }, // 3110226032
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Manages a set of affordances that can be manipulated for changing the actor transform.\n */" },
		{ "IncludePath", "Controls/UxtBoundsControlComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Manages a set of affordances that can be manipulated for changing the actor transform." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_Config_MetaData[] = {
		{ "Category", "Uxt Bounds Control" },
		{ "Comment", "/** Configuration of the bounds control affordances. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Configuration of the bounds control affordances." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlComponent, Config), Z_Construct_UClass_UUxtBoundsControlConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_Config_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CenterAffordanceMesh_MetaData[] = {
		{ "Category", "Uxt Bounds Control|Affordances" },
		{ "Comment", "/** Mesh used for a center affordance. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Mesh used for a center affordance." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CenterAffordanceMesh = { "CenterAffordanceMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlComponent, CenterAffordanceMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CenterAffordanceMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CenterAffordanceMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_FaceAffordanceMesh_MetaData[] = {
		{ "Category", "Uxt Bounds Control|Affordances" },
		{ "Comment", "/** Mesh used for a face affordances. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Mesh used for a face affordances." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_FaceAffordanceMesh = { "FaceAffordanceMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlComponent, FaceAffordanceMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_FaceAffordanceMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_FaceAffordanceMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_EdgeAffordanceMesh_MetaData[] = {
		{ "Category", "Uxt Bounds Control|Affordances" },
		{ "Comment", "/** Mesh used for a edge affordances. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Mesh used for a edge affordances." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_EdgeAffordanceMesh = { "EdgeAffordanceMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlComponent, EdgeAffordanceMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_EdgeAffordanceMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_EdgeAffordanceMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CornerAffordanceMesh_MetaData[] = {
		{ "Category", "Uxt Bounds Control|Affordances" },
		{ "Comment", "/** Mesh used for a corner affordances. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Mesh used for a corner affordances." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CornerAffordanceMesh = { "CornerAffordanceMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlComponent, CornerAffordanceMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CornerAffordanceMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CornerAffordanceMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CollisionBox_MetaData[] = {
		{ "Category", "Uxt Bounds Control" },
		{ "Comment", "/** Collision box that prevents pointer rays from passing through bounds control's box. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Collision box that prevents pointer rays from passing through bounds control's box." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlComponent, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CollisionBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CollisionBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CollisionProfile_MetaData[] = {
		{ "Category", "Uxt Bounds Control" },
		{ "Comment", "/** The collision profile used by @ref CollisionBox. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "The collision profile used by @ref CollisionBox." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CollisionProfile = { "CollisionProfile", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlComponent, CollisionProfile), METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CollisionProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_AffordanceVisibilityDistance_MetaData[] = {
		{ "Category", "Uxt Bounds Control" },
		{ "Comment", "/** Hand distance at which affordances become visible. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Hand distance at which affordances become visible." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_AffordanceVisibilityDistance = { "AffordanceVisibilityDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlComponent, AffordanceVisibilityDistance), METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_AffordanceVisibilityDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_AffordanceVisibilityDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_AffordanceTransitionDuration_MetaData[] = {
		{ "Category", "Uxt Bounds Control" },
		{ "Comment", "/** Duration of animated affordance transitions. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Duration of animated affordance transitions." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_AffordanceTransitionDuration = { "AffordanceTransitionDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlComponent, AffordanceTransitionDuration), METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_AffordanceTransitionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_AffordanceTransitionDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_OnManipulationStarted_MetaData[] = {
		{ "Category", "Uxt Bounds Control" },
		{ "Comment", "/** Event raised when a manipulation is started. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Event raised when a manipulation is started." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_OnManipulationStarted = { "OnManipulationStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlComponent, OnManipulationStarted), Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationStartedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_OnManipulationStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_OnManipulationStarted_MetaData)) }; // 3661306535
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_OnManipulationEnded_MetaData[] = {
		{ "Category", "Uxt Bounds Control" },
		{ "Comment", "/** Event raised when a manipulation is ended. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Event raised when a manipulation is ended." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_OnManipulationEnded = { "OnManipulationEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlComponent, OnManipulationEnded), Z_Construct_UDelegateFunction_UXTools_UxtBoundsControlManipulationEndedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_OnManipulationEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_OnManipulationEnded_MetaData)) }; // 788457449
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_bInitBoundsFromActor_MetaData[] = {
		{ "BlueprintGetter", "GetInitBoundsFromActor" },
		{ "Category", "Uxt Bounds Control" },
		{ "Comment", "/** Initialize bounds from actor content. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Initialize bounds from actor content." },
	};
#endif
	void Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_bInitBoundsFromActor_SetBit(void* Obj)
	{
		((UUxtBoundsControlComponent*)Obj)->bInitBoundsFromActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_bInitBoundsFromActor = { "bInitBoundsFromActor", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtBoundsControlComponent), &Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_bInitBoundsFromActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_bInitBoundsFromActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_bInitBoundsFromActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_BoundsOverride_MetaData[] = {
		{ "AllowedClasses", "SceneComponent" },
		{ "Category", "Uxt Bounds Control" },
		{ "Comment", "/** Component used for bounds calculation, instead of the actor's root */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Component used for bounds calculation, instead of the actor's root" },
		{ "UseComponentPicker", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_BoundsOverride = { "BoundsOverride", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlComponent, BoundsOverride), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_BoundsOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_BoundsOverride_MetaData)) }; // 3442474717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_Bounds_MetaData[] = {
		{ "BlueprintGetter", "GetBounds" },
		{ "Category", "Uxt Bounds Control" },
		{ "Comment", "/** Current bounding box in the local space of the actor. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Current bounding box in the local space of the actor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0040000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlComponent, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_ParameterCollection_MetaData[] = {
		{ "Comment", "/** Parameter collection used to store the finger tip position */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Parameter collection used to store the finger tip position" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_ParameterCollection = { "ParameterCollection", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlComponent, ParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_ParameterCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_ParameterCollection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_BoundsControlActor_MetaData[] = {
		{ "BlueprintGetter", "GetBoundsControlActor" },
		{ "Category", "Uxt Bounds Control" },
		{ "Comment", "/** Actor that contains affordances at runtime. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Actor that contains affordances at runtime." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_BoundsControlActor = { "BoundsControlActor", nullptr, (EPropertyFlags)0x0040000000202014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlComponent, BoundsControlActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_BoundsControlActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_BoundsControlActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_BoundsControlGrabbable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_BoundsControlGrabbable = { "BoundsControlGrabbable", nullptr, (EPropertyFlags)0x0040000000282008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlComponent, BoundsControlGrabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_BoundsControlGrabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_BoundsControlGrabbable_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_PrimitiveAffordanceMap_ValueProp = { "PrimitiveAffordanceMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FUxtAffordanceInstance, METADATA_PARAMS(nullptr, 0) }; // 1087386237
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_PrimitiveAffordanceMap_Key_KeyProp = { "PrimitiveAffordanceMap_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_PrimitiveAffordanceMap_MetaData[] = {
		{ "Comment", "/**\n\x09 * Maps primitives to the affordances they represent.\n\x09 * This is used for looking up the correct affordance settings when grab events are handled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBoundsControlComponent.h" },
		{ "ToolTip", "Maps primitives to the affordances they represent.\nThis is used for looking up the correct affordance settings when grab events are handled." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_PrimitiveAffordanceMap = { "PrimitiveAffordanceMap", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBoundsControlComponent, PrimitiveAffordanceMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_PrimitiveAffordanceMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_PrimitiveAffordanceMap_MetaData)) }; // 1087386237
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtBoundsControlComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CenterAffordanceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_FaceAffordanceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_EdgeAffordanceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CornerAffordanceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CollisionBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_CollisionProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_AffordanceVisibilityDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_AffordanceTransitionDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_OnManipulationStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_OnManipulationEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_bInitBoundsFromActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_BoundsOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_ParameterCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_BoundsControlActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_BoundsControlGrabbable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_PrimitiveAffordanceMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_PrimitiveAffordanceMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBoundsControlComponent_Statics::NewProp_PrimitiveAffordanceMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtBoundsControlComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtBoundsControlComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUxtBoundsControlComponent_Statics::ClassParams = {
		&UUxtBoundsControlComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtBoundsControlComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBoundsControlComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtBoundsControlComponent()
	{
		if (!Z_Registration_Info_UClass_UUxtBoundsControlComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUxtBoundsControlComponent.OuterSingleton, Z_Construct_UClass_UUxtBoundsControlComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUxtBoundsControlComponent.OuterSingleton;
	}
	template<> UXTOOLS_API UClass* StaticClass<UUxtBoundsControlComponent>()
	{
		return UUxtBoundsControlComponent::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_Statics::ScriptStructInfo[] = {
		{ FUxtAffordanceInstance::StaticStruct, Z_Construct_UScriptStruct_FUxtAffordanceInstance_Statics::NewStructOps, TEXT("UxtAffordanceInstance"), &Z_Registration_Info_UScriptStruct_UxtAffordanceInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUxtAffordanceInstance), 1087386237U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUxtBoundsControlComponent, UUxtBoundsControlComponent::StaticClass, TEXT("UUxtBoundsControlComponent"), &Z_Registration_Info_UClass_UUxtBoundsControlComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUxtBoundsControlComponent), 3257253219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_3050027512(TEXT("/Script/UXTools"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
